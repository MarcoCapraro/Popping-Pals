// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyT3.h"
#include "EnemyT2.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AEnemyT3::AEnemyT3() {}

void AEnemyT3::HandleDestruction()
{
    Super::HandleDestruction();

    UE_LOG(LogTemp, Warning, TEXT("EnemyT3 HandleDestruction() Called"));

    // Spawn EnemyT2
    if(enemyClass != nullptr) {
        SplitBallEnemy(enemyClass, 1);
        Destroy();
    }

}

// Called when the game starts or when spawned
void AEnemyT3::BeginPlay()
{
	Super::BeginPlay();

    if(this->bAllowStartImpulse) {
        // Start the game by sending the ball in a horizontal direction (left or right)
        FVector hozImpulse = (this->GetActorForwardVector() * forwardImpulse * this->ballCollider->GetMass());

        switch(startDir) {
            case EStartDirection::RIGHT:
                ApplyStartImpulse(this->ballCollider, FVector::ZeroVector, -hozImpulse);
                break;
            case EStartDirection::LEFT:
                ApplyStartImpulse(this->ballCollider, FVector::ZeroVector, hozImpulse);
                break;
            default:
                break;
        }
    }
}

// Called every frame
void AEnemyT3::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}