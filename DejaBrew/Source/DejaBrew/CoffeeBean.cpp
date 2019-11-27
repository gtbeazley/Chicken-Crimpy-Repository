// Fill out your copyright notice in the Description page of Project Settings.

#include "CoffeeBean.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Materials/MaterialInterface.h"
#include "ConstructorHelpers.h"

// Sets default values
ACoffeeBean::ACoffeeBean()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> beanAsset(TEXT("SkeletalMesh'/Game/SideScrollerCPP/Assets/BeanLP/BeanLP.BeanLP'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> beanMat(TEXT("Material'/Game/SideScrollerCPP/Materials/Bean_Material.Bean_Material'"));

	Trigger = CreateDefaultSubobject<UBoxComponent>("Trigger");
	SetRootComponent(Trigger);
	Trigger->SetGenerateOverlapEvents(true);
	Trigger->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Trigger->SetCollisionResponseToAllChannels(ECR_Overlap);
	Trigger->CanCharacterStepUpOn = ECB_No;

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>("Mesh");
	Mesh->SetupAttachment(Trigger);
	Mesh->SetSkeletalMesh(beanAsset.Object);
	Mesh->SetMaterial(0, beanMat.Object);
	Mesh->SetWorldRotation(FRotator(345, 180, 45));
	Mesh->SetWorldScale3D(FVector(2.75, 2.75, 2.75));
	Mesh->SetCollisionResponseToAllChannels(ECR_Overlap);
	Mesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Mesh->CanCharacterStepUpOn = ECB_No;
	
}

// Called when the game starts or when spawned
void ACoffeeBean::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACoffeeBean::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Mesh->bVisible == Collected)
		Mesh->SetVisibility(!Collected, true);
}

