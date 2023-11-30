// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PopPal.h"
#include "Kismet/GameplayStatics.h"


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
	// Hide the ball from the player's view, and prevent collisions
}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();

	// Setup Physics Constraints ()
	ballCollider->SetConstraintMode(EDOFMode::Type::XZPlane);

	// Setup Interaction with Floor (Add Predetermined Impulse to Return to same height every time)
	ballCollider->OnComponentHit.AddDynamic(this, &ABaseEnemy::OnHit);	
	ballCollider->OnComponentBeginOverlap.AddDynamic(this, &ABaseEnemy::OnOverlapBegin);
	popPal = Cast<APopPal>(UGameplayStatics::GetPlayerCharacter(this, 0));

	
}

// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABaseEnemy::OnHit(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hitResult)
{
	if(otherActor->ActorHasTag("LevelFloor")) {

		// UE_LOG(LogTemp, Warning, TEXT("ImpactNormal: %s"), *hitResult.ImpactNormal.ToString());
		// Only adjust velocity if ball hitting floor (floor hit if ImpactNormal.Z > 0)
		if(hitResult.ImpactNormal.Z > 0.5f) {
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
}

void ABaseEnemy::OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, 
UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

	UClass* damageTypeClass = UDamageType::StaticClass();

	// Make sure otherActor exists and that it isn't itself
	if(otherActor && otherActor != this) {
		// If the overlap occurs with the player character, apply damage to their health component
		if(otherActor == popPal) {
			UGameplayStatics::ApplyDamage(otherActor, damage, nullptr, this, damageTypeClass);
		}
	}
}

void ABaseEnemy::SplitBallEnemy(TSubclassOf<ABaseEnemy> classRef, float lastVelocityZ)
{
	FVector spawnLoc = this->GetActorLocation();
	FRotator spawnRot = this->GetActorRotation();

	ABaseEnemy* enemySpawnLeft = GetWorld()->SpawnActor<ABaseEnemy>(classRef, spawnLoc, spawnRot);
	ABaseEnemy* enemySpawnRight = GetWorld()->SpawnActor<ABaseEnemy>(classRef, spawnLoc, spawnRot);

	if(enemySpawnLeft && enemySpawnRight) {
		// Get enemy colliders
		UCapsuleComponent* eLeftCollider = enemySpawnLeft->GetComponentByClass<UCapsuleComponent>();
		UCapsuleComponent* eRightCollider = enemySpawnRight->GetComponentByClass<UCapsuleComponent>();

		// Calculate starting vertical and horizontal impulse
		FVector vertImpulse = FVector::ZeroVector;
		FVector hozImpulse = (this->forwardImpulse * this->GetActorForwardVector() * eLeftCollider->GetMass());

		// If the ball is ascending apply a small upward impulse
		if(lastVelocityZ >= -400.0f) {
			vertImpulse = (this->upwardImpulse * this->GetActorUpVector() * eLeftCollider->GetMass());
		}

		ApplyStartImpulse(eLeftCollider, vertImpulse, hozImpulse);
		ApplyStartImpulse(eRightCollider, vertImpulse, -hozImpulse);
	}
}

void ABaseEnemy::ApplyStartImpulse(UCapsuleComponent* enemyCollider, FVector vertImpulse, FVector hozImpulse)
{
    enemyCollider->AddImpulse(vertImpulse);
    enemyCollider->AddImpulse(hozImpulse);
}


