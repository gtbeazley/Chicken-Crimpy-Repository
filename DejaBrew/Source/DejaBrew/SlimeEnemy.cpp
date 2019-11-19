// Fill out your copyright notice in the Description page of Project Settings.

#include "SlimeEnemy.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ASlimeEnemy::ASlimeEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USkeletalMeshComponent* Mesh = GetMesh();
	Mesh->SetGenerateOverlapEvents(true); 
	UCapsuleComponent* CapsuleCollider = GetCapsuleComponent();
	CapsuleCollider->SetGenerateOverlapEvents(true);
	CapsuleCollider->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	CapsuleCollider->SetCollisionResponseToChannel(ECC_Visibility, ECR_Overlap);

	GetCharacterMovement()->MaxWalkSpeed = 300 * maxWalkSpeed;
	GetCharacterMovement()->bCanWalkOffLedges = false;
}

// Called when the game starts or when spawned
void ASlimeEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASlimeEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
