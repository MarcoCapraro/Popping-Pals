// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "EnemyT3.generated.h"

/**
 * 
 */
UCLASS()
class POPPINGPALS_API AEnemyT3 : public ABaseEnemy
{
	GENERATED_BODY()

public:
	AEnemyT3();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category="References")
	TSubclassOf<class AEnemyT2> enemyClass;

public:
	virtual void Tick(float DeltaTime) override;
	void HandleDestruction();
	
};
