// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PoppingPalsGameModeBase.generated.h"

// Custom struct that ties an object class to an integer to determine a drop rate
USTRUCT()
struct FItem
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, Category="Loot Struct")
	TSubclassOf<AActor> itemClass;

	UPROPERTY(EditAnywhere, Category="Loot Struct")
	int32 dropRate;
	
};


UCLASS()
class POPPINGPALS_API APoppingPalsGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	void ActorDied(AActor* deadActor);

	UFUNCTION(Category="Loot Table")
	static void RandomDropRate(TArray<FItem> itemTable, TSubclassOf<AActor> &itemDrop, bool &dropRateEqual100);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void GameOver(bool bWonGame);

private:
	class APopPal* popPal;
	int32 targetBallEnemies = 0;

	void HandleGameStart();
	int32 GetEnemyBallCount();
};
