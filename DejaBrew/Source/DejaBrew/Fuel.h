// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fuel.generated.h"

UCLASS()
class DEJABREW_API AFuel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFuel();
	 
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UBoxComponent* Trigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USceneComponent* Scene;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Collected = false;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
