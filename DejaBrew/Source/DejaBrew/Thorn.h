// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Thorn.generated.h"

UCLASS()
class DEJABREW_API AThorn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AThorn();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USceneComponent* Scene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Thorn1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Thorn2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Thorn3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Thorn4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Thorn5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPointLightComponent* PointLight;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
