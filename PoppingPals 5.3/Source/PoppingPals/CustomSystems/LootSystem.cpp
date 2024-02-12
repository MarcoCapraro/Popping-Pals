// Fill out your copyright notice in the Description page of Project Settings.

#include "LootSystem.h"
#include "Kismet/KismetMathLibrary.h"
#include "PoppingPals/PowerUps/DoubleJumpPowerUp.h"
#include "PoppingPals/PowerUps/HealthPowerUp.h"
#include "PoppingPals/PowerUps/IncreaseShotPowerUp.h"
#include "PoppingPals/PowerUps/ShieldPowerUp.h"


LootSystem::LootSystem()
{
	FItem item1 = {ADoubleJumpPowerUp::StaticClass(), 15};
	FItem item2 = {AHealthPowerUp::StaticClass(), 15};
	FItem item3 = {AIncreaseShotPowerUp::StaticClass(), 15};
	FItem item4 = {AShieldPowerUp::StaticClass(), 5};
	FItem item5 = {nullptr, 50};
	lootTable = {item1, item2, item3, item4, item5};
}

LootSystem::~LootSystem()
{
	// Unsure if Need, Leave Commented Out: clear the memory used by the lootTable
	// delete[] lootTable;
}

// Takes a table of items (loot), where each item has an associated class and drop rate
// When the drop probability is calculated and the range determines the loot that should drop,
// the class of that item is stored back in the itemDrop parameter to be used
void LootSystem::RandomDropRate(TSubclassOf<AActor> &itemDrop, bool &dropRateEqual100)
{
	// Overview: Sums the weight of all items in the loot table (must = 100)
	// Generate a random number (1,100) and then compare that to the range of each weight
	// If in the range of an item, spawn it, or if its the null item do nothing
	
	// Declare temporary integer array for storing all "Drop Rates"
	TArray <int32> DropRateArray;
	int32 EqualTo100 = 0;
 
	// Add input array drop rates to temporary array while summing the values to create a range "max" for each Loot Item
	for (int x = 0; x < lootTable.Num(); ++x){
		if (x == 0){
			DropRateArray.Add(FMath::Abs(lootTable[x].dropRate));
		} else {
			DropRateArray.Add(FMath::Abs(lootTable[x].dropRate) + (DropRateArray[x-1]));
		}
	}
 
	// Ensure all "Drop Rates" sum to EXACTLY 100
 
	if (DropRateArray.Last() == 100){   
		// Generate a random number
		int32 DropIndex = UKismetMathLibrary::RandomIntegerInRange(1, 100);      
 
		// Start with the lowest range "max value" and keep moving up until random int <= max of range
		for (int x = 0; x < DropRateArray.Num(); ++x){
			if (DropIndex <= DropRateArray[x]){
				itemDrop = lootTable[x].itemClass;
				break;
			}
		}
		dropRateEqual100 = true;
		// If drop rates do NOT sum to exactly 100 return a false boolean and a null drop item
	} else {
		itemDrop = nullptr;
		dropRateEqual100 = false;
	}

	// const FString stringBool = dropRateEqual100 ? "True": "False";
	// UE_LOG(LogTemp, Warning, TEXT("Class = %s"), *stringBool);
}

