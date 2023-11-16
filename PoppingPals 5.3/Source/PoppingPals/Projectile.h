// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS()
class POPPINGPALS_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	class APopPal* popPal;

	UPROPERTY(VisibleAnywhere, Category="Components")
	class UCapsuleComponent* projectileCollider;

	UPROPERTY(EditDefaultsOnly, Category="Components")
	class UStaticMeshComponent* projectileMesh;

	UPROPERTY(EditDefaultsOnly, Category="Movement")
	class UProjectileMovementComponent* projectileMovement;

	UPROPERTY(EditAnywhere, Category="Combat")
	float damage = 33.0f;

	// Use UFUNCTION to define a method that can be bound to a delegate or a timer
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, 
	UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
