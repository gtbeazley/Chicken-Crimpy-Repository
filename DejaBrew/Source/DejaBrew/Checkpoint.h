// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Checkpoint.generated.h"

UCLASS()
class DEJABREW_API ACheckpoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACheckpoint();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USceneComponent* Scene;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Flag;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UMaterialInterface* FlagCheckedMat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UBoxComponent* Collider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool isReached = false;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Called to access the savegame and save the current status of the game */
	void SaveThisMoment();

	/** Changes the colour of the flag to green */
	void ChangeColour();
	
};
