// Fill out your copyright notice in the Description page of Project Settings.


#include "DoubleJumpPowerUp.h"
#include "Components/SphereComponent.h"
#include "PoppingPals/Character/PopPal.h"

// Sets default values
ADoubleJumpPowerUp::ADoubleJumpPowerUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADoubleJumpPowerUp::BeginPlay()
{
	Super::BeginPlay();
	
	powerUpColliderComp->OnComponentBeginOverlap.AddDynamic(this, &ADoubleJumpPowerUp::OnOverlapBegin);
}

// Called every frame
void ADoubleJumpPowerUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoubleJumpPowerUp::OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, 
UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

	// Make sure otherActor exists and that it isn't itself
	if(otherActor && otherActor != this) {
		// If the overlap occurs with the player character, apply power up effect
		if(otherActor == popPal) {
			if(popPal->maxJumpCount < 2) {
				popPal->maxJumpCount++;
				GetWorldTimerManager().SetTimer(doubleJumpHandle, this, &ADoubleJumpPowerUp::DoubleJump, 0.1f, false, powerUpDuration);
				
				// Hide powerup and disable collisions
				GetWorldTimerManager().ClearTimer(powerUpFlashTimerHandle);
				SetActorHiddenInGame(true);
				powerUpColliderComp->SetCollisionProfileName("NoCollision");
			}
		}
	}
}

// Toggles the power ups visibility
void ADoubleJumpPowerUp::DoubleJump() {
	UE_LOG(LogTemp, Warning, TEXT("DoubleJump Finished"));
	popPal->maxJumpCount = 1;
	GetWorldTimerManager().ClearTimer(doubleJumpHandle);
	Destroy();
}