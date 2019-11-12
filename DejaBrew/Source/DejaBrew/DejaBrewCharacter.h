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

protected:
	/** Side view camera */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCameraComponent* SideViewCamera;

	/** Camera boom positioning the camera bebside the character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** The bounds that the cross can not pass, only a widget */
	UPROPERTY(EditAnywhere)
	class UWidgetComponent* CrosshairBoundWidget;

	/** The Crosshair widgety that will determine the blast strength and length  */
	UPROPERTY(EditAnywhere)
		UWidgetComponent* CrosshairWidget; 

	UPROPERTY(EditAnywhere)
		bool bIsCharging = false;

	UPROPERTY(EditAnywhere)
		bool bCanShoot = false;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasShot = false;

	UPROPERTY(EditAnywhere)
		float m_mouseSpeed = .5;

	UPROPERTY(EditAnywhere)
		float m_moveSpeed = 1;

	UPROPERTY(EditAnywhere)
		float m_CameraMoveSpeed = 3;

	UPROPERTY(EditAnywhere)
		float m_maxCursorDistance = 140;

	UPROPERTY(EditAnywhere)
		float m_timeLeftForCharging = 0;

	UPROPERTY(EditAnywhere)
		float m_timeTillChargeLimit = 96;
	
	UPROPERTY(EditAnywhere)
		float m_chargeSpeed = 3;

	UPROPERTY(EditAnywhere)
		float m_chargeChangeImpact = 5;

	UPROPERTY(EditAnywhere)
		float m_initialCompressionCharge = 200;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 0, ClampMax = 200))
		float m_compressionCharge;

	/**Tick event called every frame
	@param a_dt time from the start of the last frame*/
	void Tick(float a_dt) override;

	void BeginPlay() override;

	//ACTION INPUT FUNCTIONS
	/** Called for activating the pause state*/
	void Pause();

	/** Called for shooting the compression charge gun*/
	void Shoot();

	//AXIS IMPUT FUNCTIONS
	/** Called for side scroller characters right movement*/
	void MoveRight(float a_val);

	/** Called for side scroller characters left movement*/
	void MoveLeft(float a_val);

	/** Camera Panning Function Up and Down */
	void PanCameraUp(float a_val);

	/** Camera Panning Function Left and Right*/
	void PanCameraRight(float a_val);

	//AXIS INPUT FUNCTIONS - Can not be remapped
	/** Panning the Cursor Left and Right */
	void PanCursorRight(float a_val);

	/** Panning the Cursor Up and Down */
	void PanCursorUp(float a_val);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

	/** Setting the offset of the Crosshair Widget (and its children) */
	void OffSetCrosshair();

	/** Sends the character..
	@param a_dir ..in this direction..
	@param a_length ..measured by this length 
	@param a_setForceXY Determines whether to set force on the xy scale..
	@param a_setForceZ ..and Z scale*/
	void CompressionBlastMoveCharacter(FVector a_dir, float a_length, bool a_setForceXY = true, bool a_setForceZ = false );

	void CompressionBlastMoveActor(FVector a_dir, float a_length);

	/**Decrements the compression blasts percentage*/
	void DepleteCharge(float a_percentTominus);

	/** Updates the Compression Blasts Charge and time till it charges */
	void UpdateCompressionCharge();
public:
	ADejaBrewCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCamera; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	/** Acceses current Compression Charge*/
	UFUNCTION(BlueprintPure)
		float GetCurrentCompressionCharge() { return m_compressionCharge; }

	/** Accesses the current Mouse Speed */
	UFUNCTION(BlueprintPure)
		float GetMouseSpeed() { return m_mouseSpeed; }

	/** Sets the speed of the mouse */
	UFUNCTION(BlueprintCallable)
		void SetMouseSpeed(float a_newMouseSpeed);

	float m_cameraYChange = 0, m_cameraZChange = 0; 
	bool bCameraIsMoving = false, bCamIsMovingUp = false, bCamIsMovingRight = false;
};
