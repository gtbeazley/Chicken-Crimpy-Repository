// Fill out your copyright notice in the Description page of Project Settings.

#include "Thorn.h"
#include "Components/StaticMeshComponent.h" 
#include "ConstructorHelpers.h"
// Sets default values
AThorn::AThorn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UMaterialInterface>thornMaterial(TEXT("Material'/Game/SideScrollerCPP/Materials/ThornsV2_Material.ThornsV2_Material'"));	
	static ConstructorHelpers::FObjectFinder<UStaticMesh>thornMeshObject(TEXT("StaticMesh'/Game/SideScrollerCPP/Assets/ThornsV2.ThornsV2'"));
	UStaticMesh* thornMesh = thornMeshObject.Object;

	Thorn1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Thorn1"));
	RootComponent = Thorn1;
	Thorn1->SetStaticMesh(thornMesh); 
	Thorn1->SetMaterial(0, thornMaterial.Object);
	Thorn1->SetCanEverAffectNavigation(false);
	Thorn1->SetGenerateOverlapEvents(true);
	Thorn1->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap); 
	Thorn1->SetSimulatePhysics(true);
	Thorn1->GetBodyInstance()->bLockXRotation = true;
	Thorn1->GetBodyInstance()->bLockYRotation = true;
	Thorn1->GetBodyInstance()->bLockZRotation = true;


	Thorn2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Thorn2"));
	Thorn2->SetStaticMesh(thornMesh);
	Thorn2->SetMaterial(0, thornMaterial.Object);
	Thorn2->SetupAttachment(Thorn1);
	Thorn2->SetCanEverAffectNavigation(false);
	Thorn2->SetGenerateOverlapEvents(true);
	Thorn2->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	Thorn2->SetRelativeLocation(FVector(-3, 3, 0));
	Thorn2->GetBodyInstance()->bLockXRotation = true;
	Thorn2->GetBodyInstance()->bLockYRotation = true;
	Thorn2->GetBodyInstance()->bLockZRotation = true;

	Thorn3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Thorn3"));
	Thorn3->SetStaticMesh(thornMesh);
	Thorn3->SetMaterial(0, thornMaterial.Object);
	Thorn3->SetupAttachment(Thorn1);
	Thorn3->SetCanEverAffectNavigation(false);
	Thorn3->SetGenerateOverlapEvents(true);
	Thorn3->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	Thorn3->SetRelativeLocation(FVector(3, 3, 0));
	Thorn3->GetBodyInstance()->bLockXRotation = true;
	Thorn3->GetBodyInstance()->bLockYRotation = true;
	Thorn3->GetBodyInstance()->bLockZRotation = true;

	Thorn4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Thorn4"));
	Thorn4->SetStaticMesh(thornMesh);
	Thorn4->SetMaterial(0, thornMaterial.Object);
	Thorn4->SetupAttachment(Thorn1);
	Thorn4->SetCanEverAffectNavigation(false);
	Thorn4->SetGenerateOverlapEvents(true);
	Thorn4->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	Thorn4->SetRelativeLocation(FVector(-3, -3, 0));
	Thorn4->GetBodyInstance()->bLockXRotation = true;
	Thorn4->GetBodyInstance()->bLockYRotation = true;
	Thorn4->GetBodyInstance()->bLockZRotation = true;

	Thorn5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Thorn5"));
	Thorn5->SetStaticMesh(thornMesh);
	Thorn5->SetMaterial(0, thornMaterial.Object);
	Thorn5->SetupAttachment(Thorn1);
	Thorn5->SetCanEverAffectNavigation(false);
	Thorn5->SetGenerateOverlapEvents(true);
	Thorn5->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	Thorn5->SetRelativeLocation(FVector(3, -3, 0));
	Thorn5->GetBodyInstance()->bLockXRotation = true;
	Thorn5->GetBodyInstance()->bLockYRotation = true;
	Thorn5->GetBodyInstance()->bLockZRotation = true;

	Thorn1->SetWorldScale3D(FVector(10, 10, 10));
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

