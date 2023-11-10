// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"


// Sets default values
ABaseEnemy::ABaseEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ballCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Ball Collider"));
	RootComponent = ballCollider;

	ballMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball Mesh"));
	ballMesh->SetupAttachment(ballCollider);

	// Enable Physics Settings
	ballCollider->SetSimulatePhysics(true);
	ballCollider->SetMassOverrideInKg(NAME_None, 10.0f, true);
	ballCollider->SetLinearDamping(0.0f);

	// Setup Physics Constraints ()
	ballCollider->SetConstraintMode(EDOFMode::Type::XZPlane);

	// Setup Collision Settings
	ballCollider->SetNotifyRigidBodyCollision(true);
	ballCollider->SetCollisionProfileName("Custom");
	ballCollider->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
	ballCollider->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel1);
	ballMesh->SetCollisionProfileName("NoCollision");
}

// Handles the popping (destruction) of the ball enemy
void ABaseEnemy::HandleDestruction()
{
	// Setup death particles, sound, and potential camera shake here
	// Setup the spawning of the next tier of balls (if not Tier 1)
}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();

	// Setup Interaction with Floor (Add Predetermined Impulse to Return to same height every time)
	ballCollider->OnComponentHit.AddDynamic(this, &ABaseEnemy::OnHit);	
	
}

// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseEnemy::OnHit(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hitResult)
{
	if(otherActor->ActorHasTag("LevelFloor")) {
		// Calculate the new velocity for bouncing
        FVector currentVelocity = ballCollider->GetComponentVelocity();
		FVector newVelocity = FVector(currentVelocity.X, currentVelocity.Y, 0.0f);

		switch(bounceHeight) {
			case EBounceHeight::HIGH:
				newVelocity.Z = 1200.0f;
				break;
			case EBounceHeight::MIDHIGH:
				newVelocity.Z = 1000.0f;
				break;
			case EBounceHeight::MIDLOW:
				newVelocity.Z = 1000.0f;
				break;
			case EBounceHeight::LOW:
				newVelocity.Z = 800.0f;
				break;
			default:
				break;
		}


        // Set the new velocity
        ballCollider->SetPhysicsLinearVelocity(newVelocity);
	}
}

void ABaseEnemy::SplitBallEnemy(TSubclassOf<ABaseEnemy> classRef)
{
	FVector spawnLoc = this->GetActorLocation();
	FRotator spawnRot = this->GetActorRotation();

	ABaseEnemy* enemySpawnLeft = GetWorld()->SpawnActor<ABaseEnemy>(classRef, spawnLoc, spawnRot);
	ABaseEnemy* enemySpawnRight = GetWorld()->SpawnActor<ABaseEnemy>(classRef, spawnLoc, spawnRot);

	// Get enemy colliders
	UCapsuleComponent* eLeftCollider = enemySpawnLeft->GetComponentByClass<UCapsuleComponent>();
	UCapsuleComponent* eRightCollider = enemySpawnRight->GetComponentByClass<UCapsuleComponent>();

	// Add the starting Vertical and Horizontal Impulse
	FVector vertImpulse = (this->upwardImpulse * this->GetActorUpVector() * eLeftCollider->GetMass());
	FVector hozImpulse = (this->forwardImpulse * this->GetActorForwardVector() * eLeftCollider->GetMass());

	ApplyStartImpulse(eLeftCollider, vertImpulse, hozImpulse);
	ApplyStartImpulse(eRightCollider, vertImpulse, -hozImpulse);
}

void ABaseEnemy::ApplyStartImpulse(UCapsuleComponent* enemyCollider, FVector vertImpulse, FVector hozImpulse)
{
    enemyCollider->AddImpulse(vertImpulse);
    enemyCollider->AddImpulse(hozImpulse);
}

