// Fill out your copyright notice in the Description page of Project Settings.


#include "PoppingPalsGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "PoppingPals/Character/PopPal.h"
#include "PoppingPals/Enemies/BaseEnemy.h"
#include "PoppingPals/Enemies/EnemyT4.h"
#include "PoppingPals/Enemies/EnemyT3.h"
#include "PoppingPals/Enemies/EnemyT2.h"
#include "PoppingPals/Enemies/EnemyT1.h"

void APoppingPalsGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    HandleGameStart();
}

void APoppingPalsGameModeBase::ActorDied(AActor* deadActor)
{
    if(deadActor == popPal) {
        popPal->HandleDestruction();
        // If player dies, player loses the game (bool bWonGame = false)
        GameOver(false);

    } else if(deadActor->IsA(ABaseEnemy::StaticClass())){
        targetBallEnemies--;
        UE_LOG(LogTemp, Warning, TEXT("Enemies Left = %s"), *FString::FromInt(targetBallEnemies));
        
        if(deadActor->IsA(AEnemyT4::StaticClass())) {
            AEnemyT4* enemy = Cast<AEnemyT4>(deadActor);
            enemy->HandleDestruction();
        } else if (deadActor->IsA(AEnemyT3::StaticClass())) {
            AEnemyT3* enemy = Cast<AEnemyT3>(deadActor);
            enemy->HandleDestruction();
        } else if (deadActor->IsA(AEnemyT2::StaticClass())) {
            AEnemyT2* enemy = Cast<AEnemyT2>(deadActor);
            enemy->HandleDestruction();
        } else {
            AEnemyT1* enemy = Cast<AEnemyT1>(deadActor);
            enemy->HandleDestruction();
        }

        // Create a loot table for all power ups that can drop, including a null item (no drop)
        // each item in the loot table has associated class and weight

        // Create a function that calculates the total probability
        // Sums the weight of all items in the loot table (must = 100)
        // Generate a random number (1,100) and then compare that to the range of each weight
        // If in the range of an item, spawn it, or if its the null item do nothing
        

        if(targetBallEnemies == 0) {
            // If player destroys all ball enemies in a level, player wins the game (bool bWonGame = true)
            GameOver(true);
        }

    } else {
        // TODO:: For Future Actors that contain health components

    }
}

void APoppingPalsGameModeBase::HandleGameStart()
{
    targetBallEnemies = GetEnemyBallCount();
    popPal = Cast<APopPal>(UGameplayStatics::GetPlayerCharacter(this, 0));
}

// Retrieve total count of all enemies (placed in level start and spawned from those initial enemies)
int32 APoppingPalsGameModeBase::GetEnemyBallCount()
{
    int32 totalCount = 0;
    TArray<AActor*> baseEnemyArr;
    UGameplayStatics::GetAllActorsOfClass(this, ABaseEnemy::StaticClass(), baseEnemyArr);
    UE_LOG(LogTemp, Warning, TEXT("Num Enemies Place in Level = %s"), *FString::FromInt(baseEnemyArr.Num()));

    // Calculate balls spawned from each enemy type for total count of all enemies in level
    for(int i = 0; i < baseEnemyArr.Num(); i++) {
        if(baseEnemyArr[i]->IsA(AEnemyT4::StaticClass())) {
            totalCount += (FMath::Pow(2.0f, 4.0f) - 1);
        } else if (baseEnemyArr[i]->IsA(AEnemyT3::StaticClass())) {
            totalCount += (FMath::Pow(2.0f, 3.0f) - 1);
        } else if (baseEnemyArr[i]->IsA(AEnemyT2::StaticClass())) {
            totalCount += (FMath::Pow(2.0f, 2.0f) - 1);
        } else if (baseEnemyArr[i]->IsA(AEnemyT1::StaticClass())) {
            totalCount += (FMath::Pow(2.0f, 1.0f) - 1);
        } else {
            // TODO:: Once other enemy types are implemented
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("Total Enemy Count = %s"), *FString::FromInt(totalCount));

    // Iterate through array and determine total count
    return totalCount;
}


void APoppingPalsGameModeBase::RandomDropRate(TArray<FItem> itemTable, TSubclassOf<AActor> &itemDrop, bool &dropRateEqual100)
{
    // Declare temporary integer array for storing all "Drop Rates"
    TArray <int32> DropRateArray;
    int32 EqualTo100 = 0;
 
    // Add input array drop rates to temporary array while summing the values to create a range "max" for each Loot Item
    for (int x = 0; x < itemTable.Num(); ++x){
        if (x == 0){
            DropRateArray.Add(FMath::Abs(itemTable[x].dropRate));
        } else {
            DropRateArray.Add(FMath::Abs(itemTable[x].dropRate) + (DropRateArray[x-1]));
        }
    }
 
    // Ensure all "Drop Rates" sum to EXACTLY 100
 
    if (DropRateArray.Last() == 100){   
        // Generate a random number
        int32 DropIndex = UKismetMathLibrary::RandomIntegerInRange(1, 100);      
 
        // Start with the lowest range "max value" and keep moving up until random int <= max of range
        for (int x = 0; x < DropRateArray.Num(); ++x){
            if (DropIndex <= DropRateArray[x]){
                itemDrop = itemTable[x].itemClass;
                break;
            }
        }
        dropRateEqual100 = true;
    // If drop rates do NOT sum to exactly 100 return a false boolean and a null drop item
    } else {
        itemDrop = nullptr;
        dropRateEqual100 = false;
    }
}
