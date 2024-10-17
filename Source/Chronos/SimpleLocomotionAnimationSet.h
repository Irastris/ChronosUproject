#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"

#include "SimpleLocomotionAnimationSet.generated.h"

UCLASS()
class CHRONOS_API USimpleLocomotionAnimationSet : public UDataAsset {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	UAnimSequence* Idle;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalkForward;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalk45L;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalk90L;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalk135L;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalk180L;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalk45R;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalk90R;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalk135R;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalk180R;

	UPROPERTY(EditAnywhere)
	UBlendSpace* MovmentBlendSpace;

	UPROPERTY(EditAnywhere)
	UBlendSpace* StartFwd;

	UPROPERTY(EditAnywhere)
	UBlendSpace* Start180R;

	UPROPERTY(EditAnywhere)
	UBlendSpace* Start180L;

	UPROPERTY(EditAnywhere)
	UBlendSpace* InclineAdditive;

	UPROPERTY(EditAnywhere)
	UBlendSpace* StopMovementL;

	UPROPERTY(EditAnywhere)
	UBlendSpace* StopMovementR;

	UPROPERTY(EditAnywhere)
	int32 ClothingType;

	UPROPERTY(EditAnywhere)
	UAnimSequence* IdleStairsRUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* IdleStairsLUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* IdleStairsRDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* IdleStairsLDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalkStairsForwardRUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalkStairsForwardLUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalkStairsForwardRDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalkStairsForwardLDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalkStairsForward180RUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalkStairsForward180LUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalkStairsForward180RDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StartWalkStairsForward180LDown;

	UPROPERTY(EditAnywhere)
	UBlendSpace* StairsMovmentBlendSpace;

	UPROPERTY(EditAnywhere)
	UBlendSpace* StairsStopMovementRUp;

	UPROPERTY(EditAnywhere)
	UBlendSpace* StairsStopMovementLUp;

	UPROPERTY(EditAnywhere)
	UBlendSpace* StairsStopMovementRDown;

	UPROPERTY(EditAnywhere)
	UBlendSpace* StairsStopMovementLDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* AdditivePeekIn;

	UPROPERTY(EditAnywhere)
	UAnimSequence* AdditivePeekLoop;

	UPROPERTY(EditAnywhere)
	UAnimSequence* AdditivePeekOut;

	UPROPERTY(EditAnywhere)
	UAnimSequence* Shift;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StairsShiftRUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StairsShiftLUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StairsShiftRDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StairsShiftLDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchToStanding;

	UPROPERTY(EditAnywhere)
	UAnimSequence* StandingToCrouch;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingIdle;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalkForward;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalk45L;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalk90L;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalk135L;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalk180L;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalk45R;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalk90R;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalk135R;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalk180R;

	UPROPERTY(EditAnywhere)
	UBlendSpace* CrouchingMovmentBlendSpace;

	UPROPERTY(EditAnywhere)
	UBlendSpace* CrouchingStopMovementL;

	UPROPERTY(EditAnywhere)
	UBlendSpace* CrouchingStopMovementR;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingIdleStairsRUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingIdleStairsLUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingIdleStairsRDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingIdleStairsLDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalkStairsForwardRUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalkStairsForwardLUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalkStairsForwardRDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalkStairsForwardLDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalkStairsForward180RUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalkStairsForward180LUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalkStairsForward180RDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStartWalkStairsForward180LDown;

	UPROPERTY(EditAnywhere)
	UBlendSpace* CrouchingStairsMovmentBlendSpace;

	UPROPERTY(EditAnywhere)
	UBlendSpace* CrouchingStairsStopMovementRUp;

	UPROPERTY(EditAnywhere)
	UBlendSpace* CrouchingStairsStopMovementLUp;

	UPROPERTY(EditAnywhere)
	UBlendSpace* CrouchingStairsStopMovementRDown;

	UPROPERTY(EditAnywhere)
	UBlendSpace* CrouchingStairsStopMovementLDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingAdditivePeekIn;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingAdditivePeekLoop;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingAdditivePeekOut;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingShift;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStairsShiftRUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStairsShiftLUp;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStairsShiftRDown;

	UPROPERTY(EditAnywhere)
	UAnimSequence* CrouchingStairsShiftLDown;
};
