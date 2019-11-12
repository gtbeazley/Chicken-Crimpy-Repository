// Fill out your copyright notice in the Description page of Project Settings.

#include "Checkpoint.h"
#include "Components/StaticMeshComponent.h"
#include "ConstructorHelpers.h"
#include "Components/BoxComponent.h"
#include "DejaBrewCharacter.h"
#include "SaveGame_DejaBrew.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACheckpoint::ACheckpoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> FlagMesh(TEXT("StaticMesh'/Game/SideScrollerCPP/Assets/CheckpointLP.CheckpointLP'"));

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	StaticMesh->SetStaticMesh(FlagMesh.Object);
	StaticMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	StaticMesh->SetEnableGravity(false);
	StaticMesh->SetRelativeLocation(FVector(-70, 20, 0));
	StaticMesh->SetRelativeRotation(FRotator(0, 0, -90));

	BoxCollider = CreateDefaultSubobject<UBoxComponent>("BoxCollider");
	BoxCollider->SetRelativeLocation(FVector(30, 70, 160));
	BoxCollider->SetRelativeRotation(FRotator(0, 0, 90));
	BoxCollider->SetRelativeScale3D(FVector(1.75, 1.75, 5.5));
	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &ACheckpoint::BeginOverlap);
	newPlayerTransform = GetActorTransform() + FTransform(FVector(0, 0, 30), FVector(0, 0, 0), FVector(1, 1, 1), FVector(0, 0, 0));
}


// Called when the game starts or when spawned
void ACheckpoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACheckpoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACheckpoint::BeginOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (WasReached && Cast<ADejaBrewCharacter>(OtherActor))
	{
		//SaveGame
		if (USaveGame_DejaBrew* SaveGameInstance = Cast < USaveGame_DejaBrew>(UGameplayStatics::CreateSaveGameObject(USaveGame_DejaBrew::StaticClass())))
		{
			SaveGameInstance->PlayerTransform = newPlayerTransform;
		}
	
		
	}
}
