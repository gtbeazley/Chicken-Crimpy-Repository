// Fill out your copyright notice in the Description page of Project Settings.

#include "Checkpoint.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "ConstructorHelpers.h"
#include "Materials/MaterialInstance.h"

// Sets default values
ACheckpoint::ACheckpoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> flagAsset(TEXT("StaticMesh'/Game/SideScrollerBP/Assets/CheckpointLP.CheckpointLP'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> flagMat(TEXT("Material'/Game/SideScrollerBP/Materials/Scarlet_Material.Scarlet_Material'"));

	Scene = CreateDefaultSubobject<USceneComponent>("Scene");
	RootComponent = Scene;

	Flag = CreateDefaultSubobject<UStaticMeshComponent>("Flag");
	Flag->SetupAttachment(Scene);
	Flag->SetStaticMesh(flagAsset.Object);
	Flag->SetMaterial(0, flagMat.Object);
	Flag->SetRelativeLocationAndRotation(FVector(-70, 20, 0), FRotator(0, -90, 0));

	Collider = CreateDefaultSubobject<UBoxComponent>("Collider");
	Collider->SetupAttachment(Flag);
	Collider->SetRelativeLocation(FVector(30, 70, 160));
	Collider->SetRelativeScale3D(FVector(1.75, 1.75, 5.5));
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

