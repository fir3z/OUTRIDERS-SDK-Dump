// Enum PcfCharacter.EPcfAnimationCoverState
enum class EPcfAnimationCoverState : uint8 {
	NoCover,
	GoingToCover,
	IsInCover,
	GoingOutFromCover,
	EPcfAnimationCoverState_MAX,
};

// Enum PcfCharacter.EPcfLocomotionMovement
enum class EPcfLocomotionMovement : uint8 {
	Idle,
	Starting,
	Moving,
	MovingWithMaxSpeed,
	Stopping,
	TurningInPlace,
	GoingToTurningPoint,
	GoingOutFromTurningPoint,
	EPcfLocomotionMovement_MAX,
};

// Enum PcfCharacter.ELocomotionAnimationType
enum class ELocomotionAnimationType : uint8 {
	TurnInPlace,
	StartOrStrafeStart,
	DirectionlStart,
	Stop,
	LocomotionTurning,
	ELocomotionAnimationType_MAX,
};

// ScriptStruct PcfCharacter.PcfAnimTrack
// Size: 0x18 (Inherited: 0x00)
struct FPcfAnimTrack {
	struct FName TrackName; // 0x00(0x08)
	struct FAnimTrack AnimTrack; // 0x08(0x10)
};

// ScriptStruct PcfCharacter.PcfCachedStateData
// Size: 0x20 (Inherited: 0x00)
struct FPcfCachedStateData {
	struct FName StateMachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct PcfCharacter.PcfAnimInstanceProxy
// Size: 0x760 (Inherited: 0x6e0)
struct FPcfAnimInstanceProxy : FAnimInstanceProxy {
	struct FPcfLocomotionAnimData LocomotionParameters; // 0x6e0(0x48)
	struct FPcfCoverAnimData CoverParameters; // 0x728(0x03)
	char UnknownData_72B[0x1]; // 0x72b(0x01)
	struct FPcfLocomotionOutputData LocomotionOutputParams; // 0x72c(0x10)
	struct FPcfCurrentWeaponBone CurrentWeaponBone; // 0x73c(0x14)
	struct FVector AimLocationWS; // 0x750(0x0c)
	char bUseAimLocation : 1; // 0x75c(0x01)
	char bEnableAimOffset : 1; // 0x75c(0x01)
	char bIsClient : 1; // 0x75c(0x01)
	char bEnableIK : 1; // 0x75c(0x01)
	char bIsRecentlyRenderderd : 1; // 0x75c(0x01)
	char bCanUseOptimizedAnimGraphBranch : 1; // 0x75c(0x01)
	char UnknownData_75C_6 : 2; // 0x75c(0x01)
	char UnknownData_75D[0x3]; // 0x75d(0x03)
};

// ScriptStruct PcfCharacter.PcfCurrentWeaponBone
// Size: 0x14 (Inherited: 0x00)
struct FPcfCurrentWeaponBone {
	struct FBoneReference WeaponBone; // 0x00(0x10)
	char UnknownData_10[0x4]; // 0x10(0x04)
};

// ScriptStruct PcfCharacter.PcfLocomotionOutputData
// Size: 0x10 (Inherited: 0x00)
struct FPcfLocomotionOutputData {
	struct FName CurrentlyPlayingLocomotionAnimation; // 0x00(0x08)
	float RemainingTimeToFinishCurrentAnimation; // 0x08(0x04)
	enum class EPcfLocomotionMovement MovementState; // 0x0c(0x01)
	char UnknownData_D_0 : 7; // 0x0d(0x01)
	bool bIsAdjustingRotation : 1; // 0x0d(0x01)
	char UnknownData_E_0 : 7; // 0x0e(0x01)
	bool bIsAdjustingDistance : 1; // 0x0e(0x01)
	char UnknownData_F_0 : 7; // 0x0f(0x01)
	bool bCanRepath : 1; // 0x0f(0x01)
};

// ScriptStruct PcfCharacter.PcfCoverAnimData
// Size: 0x03 (Inherited: 0x00)
struct FPcfCoverAnimData {
	enum class EPcfAnimationCoverState CoverState; // 0x00(0x01)
	enum class ECoverSlotType CoverType; // 0x01(0x01)
	enum class ECoverMovementDirection CoverDirection; // 0x02(0x01)
};

// ScriptStruct PcfCharacter.PcfLocomotionAnimData
// Size: 0x48 (Inherited: 0x00)
struct FPcfLocomotionAnimData {
	struct UPcfMovementSpeed* CurrentMovementSpeedType; // 0x00(0x08)
	struct UPcfMovementType* CurrentMovementType; // 0x08(0x08)
	float DistanceToStopMovement; // 0x10(0x04)
	float DistanceToStartMovement; // 0x14(0x04)
	float DistanceToTurningPoint; // 0x18(0x04)
	float TurningSegmentAngle; // 0x1c(0x04)
	float TargetSpeed; // 0x20(0x04)
	float CurrentSpeed; // 0x24(0x04)
	float CurrentAcceleration; // 0x28(0x04)
	float EstimatedTimeToReachDesiredSpeed; // 0x2c(0x04)
	float EstimatedDistanceToReachDesiredSpeed; // 0x30(0x04)
	float StrafeYaw; // 0x34(0x04)
	float YawSpeed; // 0x38(0x04)
	float CurrentFrameYawSpeed; // 0x3c(0x04)
	enum class EPcfLocomotionMovement MovementState; // 0x40(0x01)
	enum class EPcfLocomotionMovement LastFrameMovementState; // 0x41(0x01)
	char UnknownData_42_0 : 7; // 0x42(0x01)
	bool bMovementDirectionChanged : 1; // 0x42(0x01)
	char UnknownData_43_0 : 7; // 0x43(0x01)
	bool bIsStrafing : 1; // 0x43(0x01)
	char UnknownData_44_0 : 7; // 0x44(0x01)
	bool bIsInAir : 1; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
};

// ScriptStruct PcfCharacter.PcfCachedDistanceCurve
// Size: 0x20 (Inherited: 0x00)
struct FPcfCachedDistanceCurve {
	struct TArray<float> KeyFrameDistances; // 0x00(0x10)
	struct TArray<float> KeyFrameTimes; // 0x10(0x10)
};

// ScriptStruct PcfCharacter.TimeInterval
// Size: 0x08 (Inherited: 0x00)
struct FTimeInterval {
	float BeginTime; // 0x00(0x04)
	float EndTime; // 0x04(0x04)
};

// ScriptStruct PcfCharacter.PcfAnimNode_BlendListSelectorBase
// Size: 0xa0 (Inherited: 0x98)
struct FPcfAnimNode_BlendListSelectorBase : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct PcfCharacter.PcfAnimNode_BlendByPoseSimilarity
// Size: 0xc0 (Inherited: 0xa0)
struct FPcfAnimNode_BlendByPoseSimilarity : FPcfAnimNode_BlendListSelectorBase {
	struct FBoneReference LeftFeet; // 0xa0(0x10)
	struct FBoneReference RightFeet; // 0xb0(0x10)
};

// ScriptStruct PcfCharacter.PcfAnimNode_BlendListRanged
// Size: 0xc0 (Inherited: 0x98)
struct FPcfAnimNode_BlendListRanged : FAnimNode_BlendListBase {
	struct TArray<float> Ranges; // 0x98(0x10)
	float InputValue; // 0xa8(0x04)
	char UnknownData_AC_0 : 7; // 0xac(0x01)
	bool bUnlatch : 1; // 0xac(0x01)
	char UnknownData_AD_0 : 7; // 0xad(0x01)
	bool bUnlatchBasedOnRange : 1; // 0xad(0x01)
	char UnknownData_AE[0x2]; // 0xae(0x02)
	float LatchThresholdRangePositive; // 0xb0(0x04)
	float LatchThresholdRangeNegative; // 0xb4(0x04)
	char UnknownData_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct PcfCharacter.PcfAnimNode_LocomotionBanking
// Size: 0x108 (Inherited: 0xd0)
struct FPcfAnimNode_LocomotionBanking : FAnimNode_SkeletalControlBase {
	struct TArray<struct FBankingSettings> BankingSettings; // 0xd0(0x10)
	float YawSpeed; // 0xe0(0x04)
	float CurrentFrameYawSpeed; // 0xe4(0x04)
	float TranslationBlendSpeedIn; // 0xe8(0x04)
	float TranslationBlendSpeedOut; // 0xec(0x04)
	float RotationBlendSpeedIn; // 0xf0(0x04)
	float RotationBlendSpeedOut; // 0xf4(0x04)
	struct TArray<struct FBankingBonesIK> FeetBonesIK; // 0xf8(0x10)
};

// ScriptStruct PcfCharacter.BankingBonesIK
// Size: 0xb0 (Inherited: 0x00)
struct FBankingBonesIK {
	struct FAnimBakeToTwoBoneIK BoneIK; // 0x00(0x90)
	float IKBlendSpeed; // 0x90(0x04)
	float PositionOnZAxisToStartBlend; // 0x94(0x04)
	float PositionOnZAxisToFullBlend; // 0x98(0x04)
	char UnknownData_9C[0x14]; // 0x9c(0x14)
};

// ScriptStruct PcfCharacter.BankingSettings
// Size: 0x3c (Inherited: 0x00)
struct FBankingSettings {
	struct FVector Displacement; // 0x00(0x0c)
	struct FVector RotationAxis; // 0x0c(0x0c)
	struct FBoneReference BankingBone; // 0x18(0x10)
	float Angle; // 0x28(0x04)
	char UnknownData_2C[0x10]; // 0x2c(0x10)
};

// ScriptStruct PcfCharacter.PcfAnimNode_SpeedWarpingDistCurve
// Size: 0x168 (Inherited: 0x78)
struct FPcfAnimNode_SpeedWarpingDistCurve : FAnimNode_SequencePlayer {
	struct FPcfFootStepScaling FootStepScaling; // 0x78(0x98)
	struct FVector InitialSpeedWarpingDir; // 0x110(0x0c)
	float TimeSpeedWarpingMin; // 0x11c(0x04)
	float TimeSpeedWarpingMax; // 0x120(0x04)
	float TimeBlendSpeed; // 0x124(0x04)
	float MaxTimeDeltaFromTargetTime; // 0x128(0x04)
	char UnknownData_12C_0 : 7; // 0x12c(0x01)
	bool bRotateSpeedWarpingDir : 1; // 0x12c(0x01)
	char UnknownData_12D[0x3]; // 0x12d(0x03)
	float PoseSpeedWarping; // 0x130(0x04)
	float Distance; // 0x134(0x04)
	float TotalTimeNeedToReachTargetSpeed; // 0x138(0x04)
	float TotalDistanceNeedToReachTargetSpeed; // 0x13c(0x04)
	char UnknownData_140[0x28]; // 0x140(0x28)
};

// ScriptStruct PcfCharacter.PcfFootStepScaling
// Size: 0x98 (Inherited: 0x00)
struct FPcfFootStepScaling {
	struct FBoneReference PelvisBone; // 0x00(0x10)
	struct TArray<struct FPcfSpeedWarpingFootDef> FeetArray; // 0x10(0x10)
	struct FVector SpeedWarpingDir; // 0x20(0x0c)
	struct FVector FloorNormal; // 0x2c(0x0c)
	struct FVector GravityDir; // 0x38(0x0c)
	char UnknownData_44_0 : 7; // 0x44(0x01)
	bool bAdjustPelvisLocation : 1; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	struct FVectorRK4SpringInterpolator PelvisInterp; // 0x48(0x08)
	char UnknownData_50[0x48]; // 0x50(0x48)
};

// ScriptStruct PcfCharacter.PcfSpeedWarpingFootDef
// Size: 0xa0 (Inherited: 0x00)
struct FPcfSpeedWarpingFootDef {
	struct FAnimBakeToTwoBoneIK IKBone; // 0x00(0x90)
	struct FBoneReference FKBone; // 0x90(0x10)
};

// ScriptStruct PcfCharacter.PcfAnimNode_SpeedWarpingDistAndRot
// Size: 0x1a0 (Inherited: 0x168)
struct FPcfAnimNode_SpeedWarpingDistAndRot : FPcfAnimNode_SpeedWarpingDistCurve {
	char UnknownData_168[0x28]; // 0x168(0x28)
	float RotationBlendSpeed; // 0x190(0x04)
	float StrafeYaw; // 0x194(0x04)
	float YawSpeed; // 0x198(0x04)
	char UnknownData_19C_0 : 7; // 0x19c(0x01)
	bool bMovementDirChanged : 1; // 0x19c(0x01)
	char UnknownData_19D[0x3]; // 0x19d(0x03)
};

// ScriptStruct PcfCharacter.PcfAnimNode_LocomotionDirectionalStart
// Size: 0x1a0 (Inherited: 0x1a0)
struct FPcfAnimNode_LocomotionDirectionalStart : FPcfAnimNode_SpeedWarpingDistAndRot {
};

// ScriptStruct PcfCharacter.PcfAnimNode_LocomotionStart
// Size: 0x168 (Inherited: 0x168)
struct FPcfAnimNode_LocomotionStart : FPcfAnimNode_SpeedWarpingDistCurve {
};

// ScriptStruct PcfCharacter.PcfAnimNode_LocomotionStop
// Size: 0x168 (Inherited: 0x168)
struct FPcfAnimNode_LocomotionStop : FPcfAnimNode_SpeedWarpingDistCurve {
};

// ScriptStruct PcfCharacter.PcfAnimNode_LocomotionTurning
// Size: 0x1b0 (Inherited: 0x1a0)
struct FPcfAnimNode_LocomotionTurning : FPcfAnimNode_SpeedWarpingDistAndRot {
	char UnknownData_1A0[0x10]; // 0x1a0(0x10)
};

// ScriptStruct PcfCharacter.PcfAnimNode_LocoRotationAdjustment
// Size: 0xa8 (Inherited: 0x78)
struct FPcfAnimNode_LocoRotationAdjustment : FAnimNode_SequencePlayer {
	float RotationBlendSpeed; // 0x78(0x04)
	char UnknownData_7C[0x2c]; // 0x7c(0x2c)
};

// ScriptStruct PcfCharacter.PcfAnimNode_PoseMatching
// Size: 0x48 (Inherited: 0x10)
struct FPcfAnimNode_PoseMatching : FAnimNode_Base {
	struct FBoneReference LeftFoot; // 0x10(0x10)
	struct FBoneReference RightFoot; // 0x20(0x10)
	struct TArray<struct FPoseLink> Poses; // 0x30(0x10)
	int32_t ActiveChildIndex; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// ScriptStruct PcfCharacter.PcfAnimNode_RebaseWeaponBone
// Size: 0x180 (Inherited: 0xd0)
struct FPcfAnimNode_RebaseWeaponBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference DynamicWeaponBone; // 0xd0(0x10)
	struct FAlphaBlend BoneToBoneBlend; // 0xe0(0x30)
	char UnknownData_110[0x70]; // 0x110(0x70)
};

// ScriptStruct PcfCharacter.PcfAnimNode_SpeedWarping
// Size: 0x178 (Inherited: 0xd0)
struct FPcfAnimNode_SpeedWarping : FAnimNode_SkeletalControlBase {
	struct FPcfFootStepScaling FootStepScaling; // 0xd0(0x98)
	struct FVector SpeedWarpingDir; // 0x168(0x0c)
	float SpeedScaling; // 0x174(0x04)
};

// ScriptStruct PcfCharacter.PcfAnimNode_WeaponParentingPlayer
// Size: 0xa8 (Inherited: 0x78)
struct FPcfAnimNode_WeaponParentingPlayer : FAnimNode_SequencePlayer {
	struct UWeaponParentBoneMapping* WeaponParentBoneMapping; // 0x78(0x08)
	char UnknownData_80[0x28]; // 0x80(0x28)
};

// ScriptStruct PcfCharacter.PcfCharacterCoverData
// Size: 0x04 (Inherited: 0x00)
struct FPcfCharacterCoverData {
	enum class ECoverMovementDirection CharacterToCoverDirection; // 0x00(0x01)
	enum class ECoverSlotType CurrentCoverType; // 0x01(0x01)
	enum class ECoverSlotType DestiationCoverType; // 0x02(0x01)
	char bCurrentCoverIsValid : 1; // 0x03(0x01)
	char bDestinationCoverIsValid : 1; // 0x03(0x01)
	char bHasReachedCover : 1; // 0x03(0x01)
	char bIsInDestinationCoverStoppingRange : 1; // 0x03(0x01)
	char UnknownData_3_4 : 4; // 0x03(0x01)
};

// ScriptStruct PcfCharacter.PcfCharacterAnimData
// Size: 0x40 (Inherited: 0x00)
struct FPcfCharacterAnimData {
	struct FVector2D WorldAccel; // 0x00(0x08)
	char UnknownData_8[0x4]; // 0x08(0x04)
	struct FVector2D WorldVelocity; // 0x0c(0x08)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FVector MovementDirection; // 0x18(0x0c)
	char UnknownData_24[0x4]; // 0x24(0x04)
	float StrafeYaw; // 0x28(0x04)
	float CurrentFrameYawSpeed; // 0x2c(0x04)
	char UnknownData_30[0x8]; // 0x30(0x08)
	float TurningSegmentAngle; // 0x38(0x04)
	char bIsDecelerating : 1; // 0x3c(0x01)
	char bIsTurning : 1; // 0x3c(0x01)
	char bIsStrafing : 1; // 0x3c(0x01)
	char bMovementDirectionChanged : 1; // 0x3c(0x01)
	char bIsInAir : 1; // 0x3c(0x01)
	char bIsOnGround : 1; // 0x3c(0x01)
	char UnknownData_3C_6 : 2; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct PcfCharacter.WeaponParentBoneReference
// Size: 0x0c (Inherited: 0x00)
struct FWeaponParentBoneReference {
	struct FName BoneName; // 0x00(0x08)
	uint32_t Identifier; // 0x08(0x04)
};

