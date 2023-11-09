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
	MID UMETA(DisplayName="MID"),
	LOW UMETA(DisplayName="LOW")
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

private:
	UPROPERTY(VisibleAnywhere, Category="Component")
	class UCapsuleComponent* ballCollider;

	UPROPERTY(VisibleAnywhere, Category="Component")
	class UStaticMeshComponent* ballMesh;

	UPROPERTY(EditAnywhere, Category="Movement")
	float forwardImpulse = 500.0f;

	UPROPERTY(EditAnywhere, Category="Movement")
	EStartDirection startDir = EStartDirection::LEFT;

	UPROPERTY(EditAnywhere, Category="Movement")
	EBounceHeight bounceHeight = EBounceHeight::HIGH;

	// Use UFUNCTION to define a method that can be bound to a delegate or a timer
	UFUNCTION()
	void OnHit(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hitResult);


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
