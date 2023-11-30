// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "PopPal.h"
#include "BaseEnemy.h"
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
	projectileCollider->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::OnHit(UPrimitiveComponent* hitComp, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hitResult)
{
	UClass* damageTypeClass = UDamageType::StaticClass();

	// Make sure not to damage ourselves (the projectile)
	if(otherActor && otherActor != this) {
		// Handle Popping (Destruction) of Ball Enemies
		if(otherActor->IsA(ABaseEnemy::StaticClass())) {
			UGameplayStatics::ApplyDamage(otherActor, damage, nullptr, this, damageTypeClass);
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
