// Fill out your copyright notice in the Description page of Project Settings.


#include "PopPal.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Projectile.h"

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

	UCharacterMovementComponent* const movementComp = GetCharacterMovement();
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

	PlayerInputComponent->BindAxis("MoveForward", this, &APopPal::MoveForward);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APopPal::Jump);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APopPal::CheckFireCondition);

}

void APopPal::MoveForward(float value)
{
	// UE_LOG(LogTemp, Display, TEXT("Move Forward Value: %f"), value);
	// Get the inital yaw (z) rotation value of the character
	float zRotation = GetControlRotation().Yaw;
	// Create a new FRotator to store that yaw (z) rotation
	FRotator rotationInfo = FRotator(0, zRotation, 0);
	// Using that rotation, create a forward vector
	FVector forwardDirection = UKismetMathLibrary::GetForwardVector(rotationInfo);
	// When the user hits W or S, the player will rotate to face the direction of movement
	AddMovementInput(forwardDirection, value);
}

void APopPal::Jump()
{
	bPressedJump = true;
	JumpKeyHoldTime = 0.0f;
}

void APopPal::CheckFireCondition()
{
	if(projectileCount < 1) {
		Fire();
	}
}

void APopPal::Fire()
{
	DrawDebugSphere(GetWorld(), projectileSpawnComp->GetComponentLocation(), 10.0f, 15, FColor::Red, false, 3.0f);
	FVector spawnLoc = projectileSpawnComp->GetComponentLocation();
	FRotator spawnRot = projectileSpawnComp->GetComponentRotation();

	// // auto keywords implicitly finds the type that needs to be assigned from the expression
	AProjectile* projectile = GetWorld()->SpawnActor<AProjectile>(projectileClass, spawnLoc, spawnRot);
	projectileCount++;
}