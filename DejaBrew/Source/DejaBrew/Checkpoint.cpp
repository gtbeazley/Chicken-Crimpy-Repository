// Fill out your copyright notice in the Description page of Project Settings.

#include "Checkpoint.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Materials/MaterialInstance.h"
#include "Kismet/GameplayStatics.h"
#include "ConstructorHelpers.h"
#include "DejaBrew_SaveGame.h"
#include "DejaBrewGameMode.h"
#include "DejaBrewCharacter.h"
#include "Fuel.h"
#include "CoffeeBean.h"
#include "SlimeEnemy.h"
#include "Checkpoint.h"
#include "Thorn.h"

// Sets default values
ACheckpoint::ACheckpoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> flagAsset(TEXT("StaticMesh'/Game/SideScrollerCPP/Assets/CheckpointLP.CheckpointLP'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> flagUnchecked(TEXT("Material'/Game/SideScrollerCPP/Materials/Checkpoint_Material.Checkpoint_Material'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> flagChecked(TEXT("Material'/Game/SideScrollerCPP/Materials/CheckpointGREEN_Material.CheckpointGREEN_Material'"));
	FlagCheckedMat = flagChecked.Object;
	Scene = CreateDefaultSubobject<USceneComponent>("Scene");
	RootComponent = Scene;

	Flag = CreateDefaultSubobject<UStaticMeshComponent>("Flag");
	Flag->SetupAttachment(Scene);
	Flag->SetStaticMesh(flagAsset.Object);
	Flag->SetMaterial(0, flagUnchecked.Object);
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

void ACheckpoint::SaveThisMoment()
{
	if (!isReached && FlagCheckedMat)
	{
		UDejaBrew_SaveGame* SGInstance = Cast<UDejaBrew_SaveGame>(UGameplayStatics::CreateSaveGameObject(UDejaBrew_SaveGame::StaticClass()));
		ADejaBrewGameMode* GMInstance = Cast<ADejaBrewGameMode>(UGameplayStatics::GetGameMode(this));
		ADejaBrewCharacter* PlayerInstance = Cast<ADejaBrewCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
		TArray<AActor*> OutActors;

		if (SGInstance && GMInstance && PlayerInstance)
		{//Saving player Stats
			SGInstance->PlayerLoc = GetActorLocation() + FVector(0, 0, 60);
			SGInstance->PlayerRot = FRotator(0, 0, 90);
			SGInstance->curScore = PlayerInstance->GetCurScore();

			//Saving all Coffee Beans States
			UGameplayStatics::GetAllActorsOfClass(this, ACoffeeBean::StaticClass(), OutActors);
			for (auto Bean : OutActors)
			{
				if (Bean)
				{
					SGInstance->CoffeeBeanRefs.Add(Cast<ACoffeeBean>(Bean));
					SGInstance->BeanCollected.Add(Cast<ACoffeeBean>(Bean)->Collected);
				}
			}
			OutActors.Empty();

			//Saving all fuel states
			UGameplayStatics::GetAllActorsOfClass(this, AFuel::StaticClass(), OutActors);
			for (auto Fuel : OutActors)
			{
				if (Fuel)
				{
					SGInstance->FuelRefs.Add(Cast<AFuel>(Fuel));
					SGInstance->FuelCollected.Add(Cast<AFuel>(Fuel)->Collected);
				}
			}
			OutActors.Empty();

			//Saving all Thorns
			UGameplayStatics::GetAllActorsOfClass(this, AThorn::StaticClass(), OutActors);
			for (auto Thorn : OutActors)
			{
				if (Thorn)
				{
					SGInstance->ThornRefs.Add(Cast<AThorn>(Thorn));
					SGInstance->ThornLoc.Add(Cast<AThorn>(Thorn)->GetActorLocation());
				}
			}
			OutActors.Empty();

			//Saving all SlimeEnemys
			UGameplayStatics::GetAllActorsOfClass(this, ASlimeEnemy::StaticClass(), OutActors);
			for (auto Enemy : OutActors)
			{
				if (Enemy)
				{
					SGInstance->EnemyRefs.Add(Cast<ASlimeEnemy>(Enemy));
					SGInstance->EnemyLoc.Add(Cast<ASlimeEnemy>(Enemy)->GetActorLocation());
				}
			}

			UGameplayStatics::SaveGameToSlot(SGInstance, GMInstance->SlotName, 0);

			ChangeColour();
			isReached = true;
		}
	}
}

void ACheckpoint::ChangeColour() {
	if(!isReached)
		Flag->SetMaterial(0, FlagCheckedMat);
}