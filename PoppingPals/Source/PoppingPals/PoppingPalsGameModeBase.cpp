// Fill out your copyright notice in the Description page of Project Settings.


#include "PoppingPalsGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "PopPal.h"
#include "BaseEnemy.h"
#include "EnemyT4.h"
#include "EnemyT3.h"
#include "EnemyT2.h"
#include "EnemyT1.h"

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
    } else {
        // TODO:: Give Enemies Health Component (die on one shot)
        // Decrement targetBallEnemies--
        // If targetBallEnemies == 0, player beats level (bool bWonGame = true)
        // GameOver(true)brandh
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
