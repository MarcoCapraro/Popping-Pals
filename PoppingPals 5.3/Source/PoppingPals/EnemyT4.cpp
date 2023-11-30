// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyT4.h"
#include "EnemyT3.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AEnemyT4::AEnemyT4() {}

void AEnemyT4::HandleDestruction()
{
    Super::HandleDestruction();

    // Spawn EnemyT3
    if(enemyClass != nullptr) {
        float currVelocityZ = this->ballCollider->GetComponentVelocity().Z;
        UE_LOG(LogTemp, Warning, TEXT("Z Velocity = %f"), currVelocityZ);
        SplitBallEnemy(enemyClass, currVelocityZ);
        Destroy();
    }

}

// Called when the game starts or when spawned
void AEnemyT4::BeginPlay()
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
void AEnemyT4::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

