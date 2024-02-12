// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LootSystem.generated.h"

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

/**
 * 
 */
class POPPINGPALS_API LootSystem
{

public:
	LootSystem();
	LootSystem(TArray<FItem> itemTable);
	
	~LootSystem();
	
private:
	// Instantiate array of FItems (composes LootSystem's "loot")
	TArray<FItem> lootTable;

public:
	UFUNCTION(Category="Loot Table")
	void RandomDropRate(TSubclassOf<AActor> &itemDrop, bool &dropRateEqual100);
};
