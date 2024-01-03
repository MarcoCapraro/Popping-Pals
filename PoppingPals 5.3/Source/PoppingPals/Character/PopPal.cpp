// Fill out your copyright notice in the Description page of Project Settings.


#include "PopPal.h"

#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Projectile.h"

#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

// Sets default values
APopPal::APopPal()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	characterMesh = FindComponentByClass<USkeletalMeshComponent>();
	projectileSpawnComp = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn"));
	projectileSpawnComp->SetupAttachment(characterMesh);

	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	movementComp = GetCharacterMovement();
	if(movementComp) {
		movementComp->bOrientRotationToMovement = true;
		movementComp->bOrientRotationToMovement = false;
	}

}

void APopPal::HandleDestruction()
{
	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);

	// Disable player input
	APlayerController* popPalController = GetWorld()->GetFirstPlayerController();
	this->DisableInput(popPalController);

}

// Called when the game starts or when spawned
void APopPal::BeginPlay()
{
	Super::BeginPlay();

	maxJumpCount = 1;
	jumpCount = 0;

	// Store reference of shield mesh for visibility toggling in other files
	shieldComp = Cast<UStaticMeshComponent>(GetComponentByClass(UStaticMeshComponent::StaticClass())); 

	APlayerController* popPalController = GetWorld()->GetFirstPlayerController();
	if(popPalController) {
		if(UEnhancedInputLocalPlayerSubsystem* subSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(popPalController->GetLocalPlayer())) {
			subSystem->AddMappingContext(popPalContext, 0);
		}
	}
}

// Called every frame
void APopPal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APopPal::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if(UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		EnhancedInputComponent->BindAction(moveRightAction, ETriggerEvent::Triggered, this, &APopPal::MoveRight);
		EnhancedInputComponent->BindAction(jumpAction, ETriggerEvent::Started, this, &APopPal::OnStartJump);
		EnhancedInputComponent->BindAction(jumpAction, ETriggerEvent::Canceled, this, &APopPal::OnStopJump);
		EnhancedInputComponent->BindAction(fireAction, ETriggerEvent::Triggered, this, &APopPal::Fire);
	}
}

void APopPal::Fire()
{
	if(projectileCount < maxProjectiles) {
		// Uncomment line below ONLY when aspect ratio is NOT constrained
		// DrawDebugSphere(GetWorld(), projectileSpawnComp->GetComponentLocation(), 10.0f, 15, FColor::Red, false, 3.0f);
		FVector spawnLoc = projectileSpawnComp->GetComponentLocation();
		FRotator spawnRot = projectileSpawnComp->GetComponentRotation();

		AProjectile* projectile = GetWorld()->SpawnActor<AProjectile>(projectileClass, spawnLoc, spawnRot);
		projectileCount++;
	}
}

void APopPal::MoveRight(const FInputActionValue& value)
{
	const float moveForwardValue = value.Get<float>();
	// UE_LOG(LogTemp, Display, TEXT("Move Forward Value: %f"), moveForwardValue);
	// Get the inital yaw (z) rotation value of the character
	float zRotation = GetControlRotation().Yaw;
	// Create a new FRotator to store that yaw (z) rotation
	FRotator rotationInfo = FRotator(0, zRotation, 0);
	// Using that rotation, create a forward vector
	FVector forwardDirection = UKismetMathLibrary::GetForwardVector(rotationInfo);
	// When the user hits W or S, the player will rotate to face the direction of movement
	AddMovementInput(forwardDirection, moveForwardValue);
}

// Overrides jumping condition to allow multiple jumps when power up activated
bool APopPal::CanJumpInternal_Implementation() const
{
	// FString valid = (movementComp->IsFalling() && jumpCount > 0 && jumpCount < maxJumpCount) ? "True" : "False";
	// UE_LOG(LogTemp, Warning, TEXT("CanJump Valid = %s"), *valid);
	return Super::CanJumpInternal_Implementation() || 
	(movementComp->IsFalling() && jumpCount > 0 && jumpCount <= maxJumpCount);
}

// Resets jump counter once player is back on the ground
void APopPal::Landed(const FHitResult& Hit)
{
	// UE_LOG(LogTemp, Warning, TEXT("Player Landed"));
	jumpCount = 0;
}

// Event execution to trigger a single jump
void APopPal::OnStartJump()
{
	bPressedJump = true;
	jumpCount++;
}

// Event execution to signal jumping has stopped
void APopPal::OnStopJump()
{
	bPressedJump = false;
}