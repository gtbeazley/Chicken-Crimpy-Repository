// Fill out your copyright notice in the Description page of Project Settings.

#include "CoffeeBag.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "ConstructorHelpers.h"

// Sets default values
ACoffeeBag::ACoffeeBag()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BeanBagAsset(TEXT("StaticMesh'/Game/SideScrollerBP/Assets/BeanBagLP.BeanBagLP'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> BeanBagMat(TEXT("Material'/Game/SideScrollerCPP/Materials/BeanBag_Material.BeanBag_Material'"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Mesh->SetStaticMesh(BeanBagAsset.Object);
	Mesh->SetMaterial(0, BeanBagMat.Object);
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Mesh->SetGenerateOverlapEvents(true);
	Mesh->SetCollisionResponseToAllChannels(ECR_Overlap);
	Mesh->SetWorldScale3D(FVector(2, 2, 2));
	Mesh->SetWorldRotation(FRotator(0, 90, 0));


	Trigger = CreateDefaultSubobject<UBoxComponent>("Trigger");
	Trigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Trigger->SetGenerateOverlapEvents(true);
	Trigger->SetCollisionResponseToAllChannels(ECR_Overlap);
	Trigger->SetWorldScale3D(FVector(2, 2, 2));
	Trigger->SetRelativeLocation(FVector(0, 0, 0));
}

// Called when the game starts or when spawned
void ACoffeeBag::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACoffeeBag::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

