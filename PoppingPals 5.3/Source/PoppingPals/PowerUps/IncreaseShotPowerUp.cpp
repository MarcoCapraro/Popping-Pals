// Fill out your copyright notice in the Description page of Project Settings.


#include "IncreaseShotPowerUp.h"
#include "Components/SphereComponent.h"
#include "PoppingPals/Character/PopPal.h"

// Sets default values
AIncreaseShotPowerUp::AIncreaseShotPowerUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIncreaseShotPowerUp::BeginPlay()
{
	Super::BeginPlay();
	
	powerUpColliderComp->OnComponentBeginOverlap.AddDynamic(this, &AIncreaseShotPowerUp::OnOverlapBegin);
}

// Called every frame
void AIncreaseShotPowerUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AIncreaseShotPowerUp::OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, 
UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

	// Make sure otherActor exists and that it isn't itself
	if(otherActor && otherActor != this) {
		// If the overlap occurs with the player character, apply power up effect
		if(otherActor == popPal) {
			if(popPal->maxProjectiles < 2) {
				popPal->maxProjectiles++;
				GetWorldTimerManager().SetTimer(twoShotHandle, this, &AIncreaseShotPowerUp::TwoShot, 0.1f, false, powerUpDuration);
				
				// Hide powerup and disable collisions
				GetWorldTimerManager().ClearTimer(powerUpFlashTimerHandle);
				SetActorHiddenInGame(true);
				HandleDestruction();
				powerUpColliderComp->SetCollisionProfileName("NoCollision");
			}
		}
	}
}

// Toggles the power ups visibility
void AIncreaseShotPowerUp::TwoShot() {
	UE_LOG(LogTemp, Warning, TEXT("IncreaseShotPower Finished"));
	popPal->maxProjectiles = 1;
	GetWorldTimerManager().ClearTimer(twoShotHandle);
	Destroy();
}

void AIncreaseShotPowerUp::HandleDestruction() {
	Super::HandleDestruction();
}