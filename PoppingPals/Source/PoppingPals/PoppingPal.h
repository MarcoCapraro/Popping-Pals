// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PoppingPal.generated.h"

UCLASS()
class POPPINGPALS_API APoppingPal : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APoppingPal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category="Components")
	class UCapsuleComponent* capsuleComp;

	UPROPERTY(VisibleAnywhere, Category="Components")
	class UStaticMeshComponent* baseMeshComp;

	UPROPERTY(VisibleAnywhere, Category="Components")
	class USpringArmComponent* springArmComp;

	UPROPERTY(VisibleAnywhere, Category="Components")
	class UCameraComponent* cameraComp;

	UPROPERTY(EditAnywhere, Category="Movement")
	float moveSpeed = 200.0f;

	void MoveForward(float value);
	void MoveRight(float value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
