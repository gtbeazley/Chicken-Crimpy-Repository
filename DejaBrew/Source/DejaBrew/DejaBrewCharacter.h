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
	 
	/** The bounds that the cross can not pass */
	UPROPERTY(EditAnywhere)
	class UWidgetComponent* CrosshairBoundWidget;

	/** The Crosshair widgety that will determine the blast strength and length  */
	UPROPERTY(EditAnywhere)
		UWidgetComponent* CrosshairWidget;

	UPROPERTY(EditAnywhere)
		bool m_canShoot = true;

	UPROPERTY(EditAnywhere)
		bool m_isCharging = false;

	UPROPERTY(EditAnywhere)
		float m_mouseSpeed = 5;

	UPROPERTY(EditAnywhere)
		float m_sprintSpeed = 1.5;

	UPROPERTY(EditAnywhere)
		float m_moveSpeed = 1;

	UPROPERTY(EditAnywhere)
		float m_rechargeSpeed = 3;

	UPROPERTY(EditAnywhere)
		float m_chargingTimeInFrames = 96;

	UPROPERTY(EditAnywhere)
		float m_maxCursorDistance = 140;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ClampMin = 0.0, ClampMax = 200))
		float m_compressionCharge = 140;

	UPROPERTY(EditAnywhere)
		float m_timeLeftTillCharge = 0;

	/**Tick event called every frame
	@param a_dt time from the start of the last frame*/
	void Tick(float a_dt) override;

	void BeginPlay() override;

	//ACTION INPUT FUNCTIONS
	/** Called for activating the pause state*/
	void Pause();

	/** Called for shooting the compression charge gun*/
	void Shoot();

	/** Adds to the max speed the character can move*/
	void Sprint();

	/** Slows down the max speed of the characters max speed */
	void StopSprinting();

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

	/** Function to launch the player in the direction opposite of the Compression blast. If the player is on the ground, the charge will 75% weaker.
	@parra a_blastDir direction the blast was shot and the characters opposite launch direction
	@parra a_blastLength length between the cursor and the character
	*/
	void CompressionBlastMoveCharacter(FVector a_blastDir, float a_blastLength);

	/** Deplete the charge for the compression blast 
	@parra a_percentage is the percentage to deplete the charge by
	*note: Full charge is 200%
	*/
	void DepleteCharge(float a_perecentage);

	/** Check to see if the compression blast is charging then increment the charge. */
	void UpdateCompressionCharge();

public:
	ADejaBrewCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCamera; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
