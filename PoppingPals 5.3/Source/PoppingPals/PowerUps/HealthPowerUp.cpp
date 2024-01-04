// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthPowerUp.h"
#include "Components/SphereComponent.h"
#include "PoppingPals/CustomComponents/HealthComponent.h"
#include "PoppingPals/Character/PopPal.h"

// Sets default values
AHealthPowerUp::AHealthPowerUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AHealthPowerUp::BeginPlay()
{
	Super::BeginPlay();
	
    healthComp = popPal->FindComponentByClass<UHealthComponent>();
	powerUpColliderComp->OnComponentBeginOverlap.AddDynamic(this, &AHealthPowerUp::OnOverlapBegin);
}

// Called every frame
void AHealthPowerUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHealthPowerUp::OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, 
UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

	// Make sure otherActor exists and that it isn't itself
	if(otherActor && otherActor != this) {
		// If the overlap occurs with the player character, apply power up effect
		if(otherActor == popPal) {
			if(!bPickedUp) {
				bPickedUp = true;

                if(healthComp) {
                    healthComp->IncreasePlayerHealth();
                }
				
				// Destroy powerup drop
				HandleDestruction();
				Destroy();
			}
		}
	}
}

void AHealthPowerUp::HandleDestruction() {
	Super::HandleDestruction();
}
