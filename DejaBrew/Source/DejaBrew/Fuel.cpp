// Fill out your copyright notice in the Description page of Project Settings.

#include "Fuel.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Materials/MaterialInterface.h"
#include "ConstructorHelpers.h"

// Sets default values
AFuel::AFuel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> fuelAsset(TEXT("StaticMesh'/Game/SideScrollerBP/Assets/FuelLP.FuelLP'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> fuelMat(TEXT("Material'/Game/SideScrollerBP/Materials/GroundPlat3_Material.GroundPlat3_Material'"));

	Scene = CreateDefaultSubobject<USceneComponent>("Scene");
	SetRootComponent(Scene);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	Mesh->SetupAttachment(Scene);
	Mesh->SetStaticMesh(fuelAsset.Object);
	Mesh->SetMaterial(0, fuelMat.Object);
	Mesh->SetWorldScale3D(FVector(15, 15, 15));
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Mesh->SetGenerateOverlapEvents(true);
	Mesh->SetCollisionResponseToAllChannels(ECR_Overlap);

	Trigger = CreateDefaultSubobject<UBoxComponent>("Trigger");
	Trigger->SetupAttachment(Mesh);
	Trigger->SetRelativeScale3D(FVector(0.05, 0.05, 0.05));
	Trigger->SetGenerateOverlapEvents(true);
	Trigger->SetCollisionResponseToAllChannels(ECR_Overlap);
	Trigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

// Called when the game starts or when spawned
void AFuel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFuel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Collected == Mesh->bVisible)
		Mesh->SetVisibility(!Collected, true);
}

