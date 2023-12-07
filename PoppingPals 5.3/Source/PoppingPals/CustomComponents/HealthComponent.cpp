// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "PoppingPals/GameMode/PoppingPalsGameModeBase.h"
#include "PoppingPals/Character/PopPal.h"

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
	health -= damage;

	// Debug Character Health
	if(damagedActor == popPal) {
		UE_LOG(LogTemp, Warning, TEXT("Health = %f"), health);
	}

	if(health <= 0.0f && poppingPalGameMode) {
		poppingPalGameMode->ActorDied(damagedActor);
	}
}
