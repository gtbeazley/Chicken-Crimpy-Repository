// Fill out your copyright notice in the Description page of Project Settings.

#include "Thorn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "ConstructorHelpers.h"
#include "Materials/MaterialInstance.h"

// Sets default values
AThorn::AThorn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>thornAssetFinder(TEXT("StaticMesh'/Game/SideScrollerBP/Assets/ThornsV2.ThornsV2'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface>thornMatFinder(TEXT("Material'/Game/SideScrollerBP/Materials/ThornsV2_Material.ThornsV2_Material'"));
	UStaticMesh* ThornMesh = thornAssetFinder.Object;
	
	Thorn1 = CreateDefaultSubobject<UStaticMeshComponent>("Thorn1");
	SetRootComponent(Thorn1);
	Thorn1->SetStaticMesh(ThornMesh);
	Thorn1->SetMaterial(0, thornMatFinder.Object);
	Thorn1->SetGenerateOverlapEvents(true);
	Thorn1->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	Thorn2 = CreateDefaultSubobject<UStaticMeshComponent>("Thorn2");
	Thorn2->SetStaticMesh(ThornMesh);
	Thorn2->SetMaterial(0, thornMatFinder.Object);
	Thorn2->SetupAttachment(Thorn1);
	Thorn2->SetRelativeLocation(FVector(-3, 3, 0));
	Thorn2->SetGenerateOverlapEvents(true);
	Thorn2->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	

	Thorn3 = CreateDefaultSubobject<UStaticMeshComponent>("Thorn3");
	Thorn3->SetStaticMesh(ThornMesh);
	Thorn3->SetMaterial(0, thornMatFinder.Object);
	Thorn3->SetupAttachment(Thorn1);
	Thorn3->SetRelativeLocation(FVector(3, 3, 0));
	Thorn3->SetGenerateOverlapEvents(true);
	Thorn3->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	Thorn4 = CreateDefaultSubobject<UStaticMeshComponent>("Thorn4");
	Thorn4->SetStaticMesh(ThornMesh);
	Thorn4->SetMaterial(0, thornMatFinder.Object);
	Thorn4->SetupAttachment(Thorn1);
	Thorn4->SetRelativeLocation(FVector(-3, -3, 0));
	Thorn4->SetGenerateOverlapEvents(true);
	Thorn4->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	Thorn5 = CreateDefaultSubobject<UStaticMeshComponent>("Thorn5");
	Thorn5->SetStaticMesh(ThornMesh);
	Thorn5->SetMaterial(0, thornMatFinder.Object);
	Thorn5->SetupAttachment(Thorn1);
	Thorn5->SetRelativeLocation(FVector(3, -3, 0));
	Thorn5->SetGenerateOverlapEvents(true);
	Thorn5->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	PointLight = CreateDefaultSubobject<UPointLightComponent>("PointLight");
	PointLight->SetupAttachment(Thorn1);
	PointLight->SetRelativeLocation(FVector(0, 0, 15));
	PointLight->Intensity = 2000;
	PointLight->AttenuationRadius = 15;

}

// Called when the game starts or when spawned
void AThorn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AThorn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

