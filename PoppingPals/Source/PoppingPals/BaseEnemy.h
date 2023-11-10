// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseEnemy.generated.h"

UENUM(BlueprintType)
enum class EStartDirection
{
	LEFT UMETA(DisplayName="LEFT"),
	RIGHT UMETA(DisplayName="RIGHT")
};

UENUM(BlueprintType)
enum class EBounceHeight
{
	HIGH UMETA(DisplayName="HIGH"),
	MIDHIGH UMETA(DisplayName="MIDHIGH"),
	MIDLOW UMETA(DisplayName="MIDLOW"),
	LOW UMETA(DisplayName="LOW")
};

UENUM(BlueprintType)
enum class EEnemyTier
{
	FOUR UMETA(DisplayName="FOUR"),
	THREE UMETA(DisplayName="THREE"),
	TWO UMETA(DisplayName="TWO"),
	ONE UMETA(DisplayName="ONE")
};

UCLASS()
class POPPINGPALS_API ABaseEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category="Component")
	class UCapsuleComponent* ballCollider;

	UPROPERTY(VisibleAnywhere, Category="Component")
	class UStaticMeshComponent* ballMesh;

	UPROPERTY(EditAnywhere, Category="Movement")
	EStartDirection startDir = EStartDirection::LEFT;

	UPROPERTY(EditAnywhere, Category="Movement")
	EBounceHeight bounceHeight = EBounceHeight::HIGH;

	UPROPERTY(EditAnywhere, Category="Movement")
	float forwardImpulse = 500.0f;

	UPROPERTY(EditAnywhere, Category="Movement")
	float upwardImpulse = 750.0f;

	UPROPERTY(EditAnywhere, Category="Movement")
	bool bAllowStartImpulse = false;

	// Using a bp class reference taken from the child classes spawn a new ball
	void SplitBallEnemy(TSubclassOf<ABaseEnemy> classRef, float lastVelocityZ);

	// Applys an impulse to a capsule component in both the vertical and horizontal directions
	void ApplyStartImpulse(UCapsuleComponent* enemyCollider, FVector vertImpulse, FVector hozImpulse);

private:
	// Use UFUNCTION to define a method that can be bound to a delegate or a timer
	UFUNCTION()
	void OnHit(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hitResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void HandleDestruction();
};
