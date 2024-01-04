// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "PoppingPals/GameMode/PoppingPalsGameModeBase.h"
#include "PoppingPals/Character/PopPal.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	health = maxHealth;

	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::DamageTaken);
	popPal = Cast<APopPal>(UGameplayStatics::GetPlayerCharacter(this, 0));
	poppingPalGameMode = Cast<APoppingPalsGameModeBase>(UGameplayStatics::GetGameMode(this));
	
}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::DamageTaken(AActor* damagedActor, float damage, const UDamageType* damageType, class AController* instigator, AActor* damageCauser)
{
	// Make sure to avoid nonsensical values
	if(damage <= 0.0f) return;

	// If player is damagedActor and shield, don't take damage, destroy shield (decrement shieldUpgradeCount)
	if(damagedActor == popPal) {
		if(popPal->shieldComp) {
			// In the event there is an active shield power up, prevent damage, but destroy shield effect
			if(popPal->bShieldVisible) {
				// Hide Shield, Play Effect, Return
				popPal->bShieldVisible = false;
				popPal->shieldComp->ToggleVisibility();
				if(destroyEffect) {
					UNiagaraComponent* niagaraComp = UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, destroyEffect, popPal->GetActorLocation(), popPal->GetActorRotation());
					// Set the shape of the particle effect on spawn
					niagaraComp->SetNiagaraVariableFloat(FString("Sphere Radius"), 75);
				}

				return;
				
			} else {
				// Sets a looping timer to toggle visibility of players mesh to signify they took damage
				GetWorld()->GetTimerManager().SetTimer(playerFlashHandle, this, &UHealthComponent::PlayerFlash, 0.1f, true);
			}
		}
	}

	// Decrease health as long as player doesn't have an active shield
	health -= damage;
	
	// UE_LOG(LogTemp, Warning, TEXT("Health = %f"), health);
	if(health <= 0.0f && poppingPalGameMode) {
		poppingPalGameMode->ActorDied(damagedActor);
	}
}

void UHealthComponent::PlayerFlash()
{
	popPal->characterMesh->ToggleVisibility();
	if(flashLoopCounter > 6) {
		flashLoopCounter = 0;
		GetWorld()->GetTimerManager().ClearTimer(playerFlashHandle);
	} else {
		flashLoopCounter++;
	}
}