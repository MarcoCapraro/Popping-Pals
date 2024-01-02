// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePowerUp.generated.h"

UCLASS()
class POPPINGPALS_API ABasePowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePowerUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category="Components")
	class USphereComponent* powerUpColliderComp;

	UPROPERTY(EditAnywhere, Category="Components")
	class UStaticMeshComponent* powerUpMeshComp;

	UPROPERTY(EditAnywhere, Category="Components")
	class UNiagaraComponent* powerUpEffectComp;

	UPROPERTY(EditAnywhere, Category="VFX")
	class UNiagaraSystem* pickUpEffect;

	class APopPal* popPal;

	// Flashes power-up to signal player to pick it up before destruction
	struct FTimerHandle powerUpFlashTimerHandle;

	// Toggles the power ups visibility
	void FlashPowerUp();

private:
	UPROPERTY(EditAnywhere)
	float linearDamp = 2.5f;

	UPROPERTY(EditAnywhere)
	float initialDelay = 2.0f;

	UPROPERTY(EditAnywhere)
	float maxElapsedTime = 6.0f;

	float elapsedTime = 0.0f;
	float repeatTime = 0.25f;
	bool bVisible = true;
	bool bTimerRateDynamic = true;

	// Use UFUNCTION to define a method that can be bound to a delegate or a timer
	UFUNCTION()
	void OnHit(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hitResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void HandleDestruction();
};
