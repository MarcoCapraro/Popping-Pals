// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "PopPal.generated.h"

UCLASS()
class POPPINGPALS_API APopPal : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APopPal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	class USkeletalMeshComponent* characterMesh;

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* projectileSpawnComp;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class AProjectile> projectileClass;

	UPROPERTY(EditAnywhere, Category="Movement")
	float moveSpeed = 100.0f;

	UPROPERTY(EditAnywhere, Category="Movement")
	float jumpForce = 100.0f;

	UPROPERTY(EditAnywhere, Category = Input)
	class UInputMappingContext*  popPalContext;

	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* moveRightAction;

	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* jumpAction;

	UPROPERTY(EditAnywhere, Category = Input)
	class UInputAction* fireAction;

	void MoveRight(const FInputActionValue& value);
	void Jump();
	void Fire();

public:	
	// Used as a Firing Condition
	UPROPERTY(VisibleAnywhere)
	int projectileCount = 0;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void HandleDestruction();
};
