// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"


// Sets default values
ABaseEnemy::ABaseEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ballMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball Mesh"));
	RootComponent = ballMesh;

	// Enable Physics Settings
	ballMesh->SetSimulatePhysics(true);
	ballMesh->SetMassOverrideInKg(NAME_None, 10.0f, true);
	ballMesh->SetLinearDamping(0.0f);

	// Setup Physics Constraints ()
	ballMesh->SetConstraintMode(EDOFMode::Type::XZPlane);

	// Setup Collision Settings
	ballMesh->SetNotifyRigidBodyCollision(true);
	ballMesh->SetCollisionProfileName("Custom");
	ballMesh->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
	ballMesh->SetCollisionObjectType(ECollisionChannel::ECC_GameTraceChannel1);
}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	// Start the game by sending the ball in a horizontal direction (left or right)
	FVector forwardVector = this->GetActorForwardVector();
	FVector impulseToAdd = (forwardVector * forwardImpulse * ballMesh->GetMass());

	switch(startDir) {
		case EStartDirection::RIGHT:
			impulseToAdd *= -1;
			break;
		case EStartDirection::LEFT:
			impulseToAdd *= 1;
			break;
		default:
			break;
	}

	UE_LOG(LogTemp, Warning, TEXT("Impulse Added = %s"), *impulseToAdd.ToString());
	ballMesh->AddImpulse(impulseToAdd);

	// Setup Interaction with Floor (Add Predetermined Impulse to Return to same height every time)
	ballMesh->OnComponentHit.AddDynamic(this, &ABaseEnemy::OnHit);	
	
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
        FVector currentVelocity = ballMesh->GetComponentVelocity();
		FVector newVelocity = FVector(currentVelocity.X, currentVelocity.Y, 0.0f);

		switch(bounceHeight) {
			case EBounceHeight::HIGH:
				newVelocity.Z = 1500.0f;
				break;
			case EBounceHeight::MID:
				newVelocity.Z = 1200.0f;
				break;
			case EBounceHeight::LOW:
				newVelocity.Z = 900.0f;
				break;
			default:
				break;
		}


        // Set the new velocity
        ballMesh->SetPhysicsLinearVelocity(newVelocity);
	}
}


