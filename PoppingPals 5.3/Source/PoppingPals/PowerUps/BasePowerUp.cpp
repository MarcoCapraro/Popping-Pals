// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePowerUp.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PoppingPals/Character/PopPal.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

// Sets default values
ABasePowerUp::ABasePowerUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	powerUpColliderComp = CreateDefaultSubobject<USphereComponent>(TEXT("PowerUp Collider"));
	RootComponent = powerUpColliderComp;

	powerUpMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PowerUp Bubble Mesh"));
	powerUpMeshComp->SetupAttachment(powerUpColliderComp);

	powerUpEffectComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("PowerUp Effect"));
	powerUpEffectComp->SetupAttachment(powerUpColliderComp);

	// Enable Physics Settings
	powerUpColliderComp->SetSimulatePhysics(true);
	powerUpColliderComp->SetLinearDamping(linearDamp);

	// Setup Collision Settings
	powerUpColliderComp->SetNotifyRigidBodyCollision(true);
	powerUpColliderComp->SetCollisionProfileName("PowerUpActor");
	powerUpMeshComp->SetCollisionProfileName("NoCollision");
}

// Called when the game starts or when spawned
void ABasePowerUp::BeginPlay()
{
	Super::BeginPlay();

	// Setup Physics Constraints (Following Lines: Lock Position on Y Axis, Lock Rotation on XYZ Axis)
	if(powerUpColliderComp && powerUpColliderComp->GetBodyInstance()) {
		powerUpColliderComp->BodyInstance.bLockYTranslation = true;
		// If XYZ Rotation isn't locked, unexpected velocities occur
		powerUpColliderComp->BodyInstance.bLockXRotation = true;
		powerUpColliderComp->BodyInstance.bLockYRotation = true;	
		powerUpColliderComp->BodyInstance.bLockZRotation = true;
		powerUpColliderComp->BodyInstance.SetDOFLock(EDOFMode::SixDOF);

		// Setup Interaction with Floor
		powerUpColliderComp->OnComponentHit.AddDynamic(this, &ABasePowerUp::OnHit);	
	}

	popPal = Cast<APopPal>(UGameplayStatics::GetPlayerCharacter(this, 0));
	
}

// Called every frame
void ABasePowerUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Create an OnHit Function to stop simulating physics for the powerup once it hits the ground
void ABasePowerUp::OnHit(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hitResult)
{
	if(otherActor->ActorHasTag("LevelFloor")) {
		// When the powerup hits the floor stop simulating physics to prevent bounce
		powerUpColliderComp->SetSimulatePhysics(false);
		 
		// Setup Timer to destroy powerup after duration seconds
		GetWorldTimerManager().SetTimer(powerUpFlashTimerHandle, this, &ABasePowerUp::FlashPowerUp, repeatTime, true, initialDelay);
	}
}

// Toggles the power ups visibility
void ABasePowerUp::FlashPowerUp()
{
	float oldRepeatTime = repeatTime;
	elapsedTime += GetWorldTimerManager().GetTimerElapsed(powerUpFlashTimerHandle);
	bVisible = !bVisible;
	SetActorHiddenInGame(bVisible);

	// UE_LOG(LogTemp, Warning, TEXT("ElapsedTime = %f"), elapsedTime);
	// Instead of counter keep track of time elapsed
	if(elapsedTime >= maxElapsedTime) {
		elapsedTime = 0;
		SetActorHiddenInGame(true);
		GetWorldTimerManager().ClearTimer(powerUpFlashTimerHandle);
		Destroy();
		return;
	} else if((elapsedTime >= maxElapsedTime / 1.5) && bTimerRateDynamic) {
		repeatTime = repeatTime / 2;
		bTimerRateDynamic = false;
	}

	// UE_LOG(LogTemp, Warning, TEXT("Timer is Executing, Repeat Float = %f"), repeatTime);
	// Dynamically change timer rate to blink faster overtime
	GetWorldTimerManager().SetTimer(powerUpFlashTimerHandle, this, &ABasePowerUp::FlashPowerUp, repeatTime, true, oldRepeatTime);
}

void ABasePowerUp::HandleDestruction() {
	// Clear flash timer, hide actor, and disable collisions
	GetWorldTimerManager().ClearTimer(powerUpFlashTimerHandle);
	SetActorHiddenInGame(true);
	powerUpColliderComp->SetSimulatePhysics(false);
	powerUpColliderComp->SetCollisionProfileName("NoCollision");

	// Setup pickup effect and sound
	if(pickUpEffect) {
		UNiagaraComponent* niagaraComp = UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, pickUpEffect, GetActorLocation(), GetActorRotation());
		// Set the shape of the particle effect on spawn
		niagaraComp->SetNiagaraVariableFloat(FString("Sphere Radius"), (powerUpColliderComp->GetScaledSphereRadius() / 2));
	}

}