// Fill out your copyright notice in the Description page of Project Settings.

#include "Spike.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "ConstructorHelpers.h"
#include "Materials/MaterialInterface.h"
// Sets default values
ASpike::ASpike()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> coneAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> spikeAsset(TEXT("StaticMesh'/Game/SideScrollerBP/Assets/Spikes.Spikes'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> spikeMat(TEXT("Material'/Game/SideScrollerBP/Materials/Spikes_Material.Spikes_Material'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> coneMat(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"));

	Cone = CreateDefaultSubobject<UStaticMeshComponent>("Cone");
	SetRootComponent(Cone);
	Cone->SetStaticMesh(coneAsset.Object);
	Cone->SetRelativeScale3D(FVector(0.5, 0.5, 0.75));
	Cone->SetMaterial(0, coneMat.Object);

	Trigger = CreateDefaultSubobject<UBoxComponent>("Trigger");
	Trigger->SetupAttachment(Cone);
	Trigger->SetRelativeLocation(FVector(0, 0, 30));
	Trigger->SetRelativeScale3D(FVector(1.5, 1.5, 1));

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	StaticMesh->SetupAttachment(Cone);
	StaticMesh->SetStaticMesh(spikeAsset.Object);
	StaticMesh->SetMaterial(0, spikeMat.Object);
	StaticMesh->SetRelativeLocation(FVector(-40, 0, -55));
	StaticMesh->SetRelativeRotation(FRotator(0, 180, 0));
	StaticMesh->SetRelativeScale3D(FVector(25, 25, 25));
}

// Called when the game starts or when spawned
void ASpike::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpike::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

