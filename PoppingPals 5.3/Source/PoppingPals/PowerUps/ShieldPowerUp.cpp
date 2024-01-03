// Fill out your copyright notice in the Description page of Project Settings.


#include "ShieldPowerUp.h"
#include "Components/SphereComponent.h"
#include "PoppingPals/Character/PopPal.h"

// Sets default values
AShieldPowerUp::AShieldPowerUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShieldPowerUp::BeginPlay()
{
	Super::BeginPlay();
	
	powerUpColliderComp->OnComponentBeginOverlap.AddDynamic(this, &AShieldPowerUp::OnOverlapBegin);
}

// Called every frame
void AShieldPowerUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShieldPowerUp::OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, 
UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

	// Make sure otherActor exists and that it isn't itself
	if(otherActor && otherActor != this) {
		// If the overlap occurs with the player character, apply power up effect
		if(otherActor == popPal) {
			if(!bPickedUp) {
				bPickedUp = true;
				popPal->shieldUpgradeCount++;

				// If the shield power up isn't active yet apply effect
				if(popPal->shieldUpgradeCount <= 1) {
					// Create an actor sphere around player, with transparent material

				}
				
				// Prepare powerup for destruction
				HandleDestruction();
			}
		}
	}
}

void AShieldPowerUp::HandleDestruction() {
	Super::HandleDestruction();
}