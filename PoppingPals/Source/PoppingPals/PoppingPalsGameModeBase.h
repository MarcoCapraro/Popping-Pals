// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PoppingPalsGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class POPPINGPALS_API APoppingPalsGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	void ActorDied(AActor* deadActor);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void GameOver(bool bWonGame);

private:
	class APopPal* popPal;
	int32 targetBallEnemies = 0;

	void HandleGameStart();
	int32 GetEnemyBallCount();
};
