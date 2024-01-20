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

	class UCharacterMovementComponent* movementComp;

	void MoveRight(const FInputActionValue& value);
	void OnStartJump();
	void OnStopJump();
	void Fire();

	virtual bool CanJumpInternal_Implementation() const override;
	virtual void Landed(const FHitResult& Hit) override;

public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* characterMesh;

	// Used as a Firing Condition
	UPROPERTY(VisibleAnywhere)
	int projectileCount = 0;

	UPROPERTY(VisibleAnywhere)
	int maxProjectiles = 1;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bCanShoot = false;

	UPROPERTY(EditAnywhere, Category="Movement")
	int32 maxJumpCount;

	int32 jumpCount;

	// Keep track of identical active powerups
	int32 shotUpgradeCount = 0;
	int32 jumpUpgradeCount = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bShieldVisible = false;

	// Reference to shield component
	class UStaticMeshComponent* shieldComp;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void HandleDestruction();
};
