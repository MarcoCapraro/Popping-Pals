// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class POPPINGPALS_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	float maxHealth = 99.0f;
	float health = 0.0f;

	class APopPal* popPal;
	class APoppingPalsGameModeBase* poppingPalGameMode;

	UPROPERTY(EditAnywhere, Category="VFX")
	class UNiagaraSystem* destroyEffect;

	UPROPERTY(EditAnywhere, Category="VFX")
	class UNiagaraSystem* healEffect;

	// Allows the player to flash when hit
	struct FTimerHandle playerFlashHandle;

	// Flash functionality
	void PlayerFlash();

	int16 flashLoopCounter = 0;

	UFUNCTION()
	void DamageTaken(AActor* damagedActor, float damage, const UDamageType* damageType, class AController* instigator, AActor* damageCauser);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void IncreasePlayerHealth();
};
