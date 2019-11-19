// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoffeeBean.generated.h"

UCLASS()
class DEJABREW_API ACoffeeBean : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoffeeBean();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USkeletalMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UBoxComponent* Trigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Collected = false;
protected:


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
