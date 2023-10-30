// Fill out your copyright notice in the Description page of Project Settings.

#include "PoppingPal.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APoppingPal::APoppingPal()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	capsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = capsuleComp;

	baseMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	baseMeshComp->SetupAttachment(capsuleComp);

	springArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	springArmComp->SetupAttachment(capsuleComp);

	cameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	cameraComp->SetupAttachment(springArmComp);

}

// Called when the game starts or when spawned
void APoppingPal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APoppingPal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APoppingPal::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Binds the input axis mappings to this instance of tank, using Move() and Turn() via it's passed memory address
    PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &APoppingPal::MoveForward);
    PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &APoppingPal::MoveRight);
}

void APoppingPal::MoveForward(float value)
{
	// UE_LOG(LogTemp, Display, TEXT("Move Forward Value: %f"), value);
    FVector deltaLocation = FVector::ZeroVector;
    deltaLocation.X = value * UGameplayStatics::GetWorldDeltaSeconds(this) * moveSpeed;
    AddActorLocalOffset(deltaLocation, true);
}

void APoppingPal::MoveRight(float value)
{
	// UE_LOG(LogTemp, Display, TEXT("Move Forward Value: %f"), value);
    FVector deltaLocation = FVector::ZeroVector;
    deltaLocation.Y = value * UGameplayStatics::GetWorldDeltaSeconds(this) * moveSpeed;
    AddActorLocalOffset(deltaLocation, true);
}

