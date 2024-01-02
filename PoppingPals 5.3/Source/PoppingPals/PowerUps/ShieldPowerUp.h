// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePowerUp.h"
#include "ShieldPowerUp.generated.h"

UCLASS()
class POPPINGPALS_API AShieldPowerUp : public ABasePowerUp
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShieldPowerUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Allows the player to use the power up for a set amount of time
	struct FTimerHandle shieldHandle;

	// Toggles the power ups visibility
	void Shield();

private:
	UPROPERTY(EditAnywhere)
	float powerUpDuration = 6.0f;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, 
	UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void HandleDestruction();

};