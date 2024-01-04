// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePowerUp.h"
#include "HealthPowerUp.generated.h"

/**
 * 
 */
UCLASS()
class POPPINGPALS_API AHealthPowerUp : public ABasePowerUp
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AHealthPowerUp();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	float powerUpDuration = 6.0f;

	class UHealthComponent* healthComp;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, 
	UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void HandleDestruction();

};