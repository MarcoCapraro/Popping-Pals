// Fill out your copyright notice in the Description page of Project Settings.


#include "PoppingPalsGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "PoppingPals/Character/PopPal.h"
#include "PoppingPals/CustomSystems/LootSystem.h"
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
        
        // RandomDropRate calculates a random drop rate for the items in the loot table.
        // After comparing that calculation to the items individual drop rate,
        // the class of the item to drop is passed back through function parameter
        TSubclassOf<AActor> lootClass;
        bool bDropRate100;
        lootSystem.RandomDropRate(lootClass, bDropRate100);
        if(lootClass != nullptr)
        {
            UE_LOG(LogTemp, Warning, TEXT("Class = %s"), *lootClass->GetName());

            // Spawn the power up
            FVector spawnLoc = deadActor->GetActorLocation();
            FRotator spawnRot = deadActor->GetActorRotation();
            AActor* powerUpDrop = GetWorld()->SpawnActor<AActor>(lootClass, spawnLoc, spawnRot);
        }

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

    // Instantiates an object of the LootSystem class that contains a table for all power ups that can drop, including a nullptr (no drop)
    // Each item in the table contributes to a probability calculation to spawn the droppable item using each of their drop rates
    lootSystem = LootSystem(itemTable);

    // for(int i = 0; i < 100; i++) {
        // TSubclassOf<AActor> randomClass;
        // bool bDropRate100;
        // lootSystem.RandomDropRate(randomClass, bDropRate100);

        // UE_LOG(LogTemp, Warning, TEXT("Class = %s"), randomClass);
    // }
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