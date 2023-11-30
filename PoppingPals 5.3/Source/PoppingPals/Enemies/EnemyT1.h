// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEnemy.h"
#include "EnemyT1.generated.h"

/**
 * 
 */
UCLASS()
class POPPINGPALS_API AEnemyT1 : public ABaseEnemy
{
	GENERATED_BODY()

public:
	AEnemyT1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	void HandleDestruction();
	
};
