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

	Trigger = CreateDefaultSubobject<UBoxComponent>("Trigger");
	Trigger->SetupAttachment(Mesh);
	Trigger->SetRelativeScale3D(FVector(0.05, 0.05, 0.05));
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

}

