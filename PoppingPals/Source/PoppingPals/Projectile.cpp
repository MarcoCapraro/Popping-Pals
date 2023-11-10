// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "PopPal.h"
#include "BaseEnemy.h"
#include "EnemyT4.h"
#include "EnemyT3.h"
#include "EnemyT2.h"
#include "EnemyT1.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	projectileCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Projectile Collider"));
	RootComponent = projectileCollider;

	projectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Mesh"));
	projectileMesh->SetupAttachment(projectileCollider);

	projectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));
	projectileMovement->MaxSpeed = 1000.0f;
	projectileMovement->InitialSpeed = 1000.0f;

}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();

	// Get access to the popPal controlled by the player
	popPal = Cast<APopPal>(UGameplayStatics::GetPlayerCharacter(this, 0));
	projectileCollider->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OnOverlapBegin);
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::OnOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	// Make sure not to damage ourselves (the projectile)
	// Make sure not to damage the owner (the player)
	if(otherActor && otherActor != this) {
		// Handle Popping (Destruction) of Ball Enemies
		if(otherActor->IsA(ABaseEnemy::StaticClass())) {
			UE_LOG(LogTemp, Warning, TEXT("Other Actor is a BaseEnemy!!"));
			if(otherActor->IsA(AEnemyT4::StaticClass())) {
				AEnemyT4* enemy = Cast<AEnemyT4>(otherActor);
				enemy->HandleDestruction();
			} else if (otherActor->IsA(AEnemyT3::StaticClass())) {
				AEnemyT3* enemy = Cast<AEnemyT3>(otherActor);
				enemy->HandleDestruction();
			} else if (otherActor->IsA(AEnemyT2::StaticClass())) {
				AEnemyT2* enemy = Cast<AEnemyT2>(otherActor);
				enemy->HandleDestruction();
			} else {
				AEnemyT1* enemy = Cast<AEnemyT1>(otherActor);
				enemy->HandleDestruction();
			}
		}

		// UGameplayStatics::ApplyDamage(otherActor, damage, myOwnerInstigator, this, damageTypeClass);
		// if(hitParticles){
		// 	UGameplayStatics::SpawnEmitterAtLocation(this, hitParticles, GetActorLocation(), GetActorRotation());	
		// }

		// if(hitSound) {
		// 	UGameplayStatics::PlaySoundAtLocation(this, hitSound, GetActorLocation());
		// }
	}

	if(popPal) {
		popPal->projectileCount--;
	}

	Destroy();
}

