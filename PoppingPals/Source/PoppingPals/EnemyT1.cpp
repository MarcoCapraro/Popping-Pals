// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyT1.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AEnemyT1::AEnemyT1() {}

void AEnemyT1::HandleDestruction()
{
    Super::HandleDestruction();

    UE_LOG(LogTemp, Warning, TEXT("EnemyT1 HandleDestruction() Called"));
    Destroy();

}

// Called when the game starts or when spawned
void AEnemyT1::BeginPlay()
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
void AEnemyT1::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}