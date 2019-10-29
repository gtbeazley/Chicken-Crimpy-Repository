// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DejaBrewCharacter.generated.h"

UCLASS(config=Game)
class ADejaBrewCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	/** Side view camera */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
	 

protected:
	/**Tick event called every frame
	@param a_dt time from the start of the last frame*/
	void Tick(float a_dt) override;

	/** Called for side scroller characters right movement*/
	void MoveRight(float Val);

	/** Called for side scroller characters left movement*/
	void MoveLeft(float val);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface


public:
	ADejaBrewCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
