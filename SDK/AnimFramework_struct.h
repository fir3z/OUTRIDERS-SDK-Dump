// Enum AnimFramework.EMovementMood
enum class EMovementMood : uint8 {
	Walk,
	Run,
	Sprint,
	PatrolWalk,
	CombatWalk,
	CombatRun,
	CombatSprint,
	PatrolUnarmed,
	Max,
};

// Enum AnimFramework.EMoveVelocityType
enum class EMoveVelocityType : uint8 {
	Slow,
	Medium,
	Fast,
	EMoveVelocityType_MAX,
};

// Enum AnimFramework.EFootStatus
enum class EFootStatus : uint8 {
	Unknown,
	LeftDown,
	LeftUp,
	RightDown,
	RightUp,
	EFootStatus_MAX,
};

// Enum AnimFramework.EAnimForceParam
enum class EAnimForceParam : uint8 {
	DoNotForce,
	Force,
	MAX,
};

// ScriptStruct AnimFramework.AnimNode_ActiveRagdoll
// Size: 0x1e0 (Inherited: 0xd0)
struct FAnimNode_ActiveRagdoll : FAnimNode_SkeletalControlBase {
	float CriticalBonesMaxDistanceThreshold; // 0xd0(0x04)
	float CriticalBonesMinDistanceThreshold; // 0xd4(0x04)
	float CriticalBonesMaxAngleThreshold; // 0xd8(0x04)
	float CriticalBonesMinAngleThreshold; // 0xdc(0x04)
	char UnknownData_E0_0 : 7; // 0xe0(0x01)
	bool bAdjustCriticalBoneWeight : 1; // 0xe0(0x01)
	char UnknownData_E1[0x3]; // 0xe1(0x03)
	float MaxDistanceThreshold; // 0xe4(0x04)
	float MinDistanceThreshold; // 0xe8(0x04)
	float MaxAngleThreshold; // 0xec(0x04)
	float MinAngleThreshold; // 0xf0(0x04)
	char UnknownData_F4_0 : 7; // 0xf4(0x01)
	bool bAdjustBoneWeight : 1; // 0xf4(0x01)
	char UnknownData_F5[0x3]; // 0xf5(0x03)
	float ForceMaxGain; // 0xf8(0x04)
	float ForceMinGain; // 0xfc(0x04)
	float TorqueMaxGain; // 0x100(0x04)
	float TorqueMinGain; // 0x104(0x04)
	float LinearBlendSpeed; // 0x108(0x04)
	float RotationBlendSpeed; // 0x10c(0x04)
	struct FVector PoseOffset; // 0x110(0x0c)
	float TransitionTime; // 0x11c(0x04)
	char UnknownData_120_0 : 7; // 0x120(0x01)
	bool bIgnoreRoot : 1; // 0x120(0x01)
	char UnknownData_121[0x7]; // 0x121(0x07)
	struct TArray<struct FBoneReference> CriticalBones; // 0x128(0x10)
	char UnknownData_138[0xa8]; // 0x138(0xa8)
};

// ScriptStruct AnimFramework.AnimNode_AnimDynamicsAxisLock
// Size: 0x460 (Inherited: 0x450)
struct FAnimNode_AnimDynamicsAxisLock : FAnimNode_AnimDynamics {
	char bDontAffectTargetTranslationX : 1; // 0x450(0x01)
	char bDontAffectTargetTranslationY : 1; // 0x450(0x01)
	char bDontAffectTargetTranslationZ : 1; // 0x450(0x01)
	char bDontAffectTargetRotationX : 1; // 0x450(0x01)
	char bDontAffectTargetRotationY : 1; // 0x450(0x01)
	char bDontAffectTargetRotationZ : 1; // 0x450(0x01)
	char bDontAffectTargetScaleX : 1; // 0x450(0x01)
	char bDontAffectTargetScaleY : 1; // 0x450(0x01)
	char bDontAffectTargetScaleZ : 1; // 0x451(0x01)
	char UnknownData_451_1 : 7; // 0x451(0x01)
	char UnknownData_452[0xe]; // 0x452(0x0e)
};

// ScriptStruct AnimFramework.AnimNode_ApplyAdditiveConstrained
// Size: 0xe8 (Inherited: 0xc8)
struct FAnimNode_ApplyAdditiveConstrained : FAnimNode_ApplyAdditive {
	struct TArray<struct FAnimBakeToTwoBoneIK> EffectorBones; // 0xc8(0x10)
	struct FLODBlendProperties IKLODBlend; // 0xd8(0x0c)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct AnimFramework.AnimNode_BlendListByObjectType
// Size: 0xb0 (Inherited: 0x98)
struct FAnimNode_BlendListByObjectType : FAnimNode_BlendListBase {
	struct TArray<struct UObject*> ObjectTypes; // 0x98(0x10)
	struct UObject* InputType; // 0xa8(0x08)
};

// ScriptStruct AnimFramework.AnimNode_BoneDrivenControllerSplitted
// Size: 0x110 (Inherited: 0xd0)
struct FAnimNode_BoneDrivenControllerSplitted : FAnimNode_SkeletalControlBase {
	struct FComponentSpacePoseLink SourcePose; // 0xd0(0x10)
	struct TArray<struct FBoneControllerMapping> Mapping; // 0xe0(0x10)
	enum class EDrivenDestinationMode DestinationMode; // 0xf0(0x01)
	enum class EDrivenBoneModificationMode ModificationMode; // 0xf1(0x01)
	char UnknownData_F2_0 : 7; // 0xf2(0x01)
	bool bUseAbsoluteValue : 1; // 0xf2(0x01)
	char UnknownData_F3_0 : 7; // 0xf3(0x01)
	bool bUsePositiveOnly : 1; // 0xf3(0x01)
	char UnknownData_F4_0 : 7; // 0xf4(0x01)
	bool bUseNegativeOnly : 1; // 0xf4(0x01)
	char UnknownData_F5[0x3]; // 0xf5(0x03)
	float Multiplier; // 0xf8(0x04)
	char UnknownData_FC_0 : 7; // 0xfc(0x01)
	bool bUseRange : 1; // 0xfc(0x01)
	char UnknownData_FD[0x3]; // 0xfd(0x03)
	float RangeMin; // 0x100(0x04)
	float RangeMax; // 0x104(0x04)
	float RemappedMin; // 0x108(0x04)
	float RemappedMax; // 0x10c(0x04)
};

// ScriptStruct AnimFramework.BoneControllerMapping
// Size: 0x34 (Inherited: 0x00)
struct FBoneControllerMapping {
	struct FBoneReference Source; // 0x00(0x10)
	struct FBoneReference Destination; // 0x10(0x10)
	struct FComponentMapping Mapping[0x9]; // 0x20(0x12)
	char UnknownData_32[0x2]; // 0x32(0x02)
};

// ScriptStruct AnimFramework.ComponentMapping
// Size: 0x02 (Inherited: 0x00)
struct FComponentMapping {
	enum class EComponentType Destination; // 0x00(0x01)
	enum class EComponentType Source; // 0x01(0x01)
};

// ScriptStruct AnimFramework.AnimNode_CableDynamics
// Size: 0x190 (Inherited: 0xd0)
struct FAnimNode_CableDynamics : FAnimNode_SkeletalControlBase {
	struct FBoneReference StartBone; // 0xd0(0x10)
	struct FBoneReference EndBone; // 0xe0(0x10)
	int32_t NumSegments; // 0xf0(0x04)
	int32_t SolverIterations; // 0xf4(0x04)
	float SubstepTime; // 0xf8(0x04)
	float Damping; // 0xfc(0x04)
	struct TArray<struct FBoneReference> CollidingBones; // 0x100(0x10)
	char UnknownData_110[0x80]; // 0x110(0x80)
};

// ScriptStruct AnimFramework.AnimNode_FootPlacement
// Size: 0x168 (Inherited: 0xd0)
struct FAnimNode_FootPlacement : FAnimNode_SkeletalControlBase {
	struct TArray<struct FFootPlacementData> FeetPlacement; // 0xd0(0x10)
	struct FPelvisAdjustmentData PelvisAdjustmentData; // 0xe0(0x60)
	struct FVector UpVector; // 0x140(0x0c)
	float AverageFootDisplacementToPelvisWeight; // 0x14c(0x04)
	char UnknownData_150_0 : 7; // 0x150(0x01)
	bool bScaleDistancesBasedOnMeshScale : 1; // 0x150(0x01)
	char UnknownData_151_0 : 7; // 0x151(0x01)
	bool bAdjustFootRotation : 1; // 0x151(0x01)
	char UnknownData_152[0x2]; // 0x152(0x02)
	int32_t RotationLODThreshold; // 0x154(0x04)
	float BallRayWeight; // 0x158(0x04)
	float HeelRayWeight; // 0x15c(0x04)
	char UnknownData_160[0x8]; // 0x160(0x08)
};

// ScriptStruct AnimFramework.PelvisAdjustmentData
// Size: 0x60 (Inherited: 0x00)
struct FPelvisAdjustmentData {
	char UnknownData_0[0x8]; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bAdjustPelvis : 1; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FBoneReference PelvisBone; // 0x0c(0x10)
	struct FVectorRK4SpringInterpolator PelvisOffsetInterpolator; // 0x1c(0x08)
	char UnknownData_24[0x3c]; // 0x24(0x3c)
};

// ScriptStruct AnimFramework.FootPlacementData
// Size: 0x360 (Inherited: 0x00)
struct FFootPlacementData {
	struct FAnimBakeToTwoBoneIK BoneIK; // 0x00(0x90)
	struct FRayCastData RayCastingData; // 0x90(0x220)
	char UnknownData_2B0[0xb0]; // 0x2b0(0xb0)
};

// ScriptStruct AnimFramework.RayCastData
// Size: 0x220 (Inherited: 0x00)
struct FRayCastData {
	struct FBoneReference FootBone; // 0x00(0x10)
	struct FBoneReference BallBone; // 0x10(0x10)
	enum class ECollisionChannel CollisionChannel; // 0x20(0x01)
	char UnknownData_21_0 : 7; // 0x21(0x01)
	bool bTraceComplex : 1; // 0x21(0x01)
	char UnknownData_22_0 : 7; // 0x22(0x01)
	bool bKeepRefPoseRotWhilePlanted : 1; // 0x22(0x01)
	char UnknownData_23[0x1]; // 0x23(0x01)
	struct FRayPosition RaySettings; // 0x24(0x24)
	struct FRayHitBlendLocation FootLocation; // 0x48(0x34)
	char UnknownData_7C[0x34]; // 0x7c(0x34)
	struct FRayHitRotation BallRotation; // 0xb0(0x40)
	char UnknownData_F0[0x40]; // 0xf0(0x40)
	struct FRayHitRotation HeelRotation; // 0x130(0x40)
	float FootAngleLimit; // 0x170(0x04)
	float FootWidth; // 0x174(0x04)
	float FootAdjustmentBlendSpeed; // 0x178(0x04)
	float OffsetFromGround; // 0x17c(0x04)
	char UnknownData_180[0xa0]; // 0x180(0xa0)
};

// ScriptStruct AnimFramework.RayHitRotation
// Size: 0x40 (Inherited: 0x00)
struct FRayHitRotation {
	struct FBlendInTime BlendPositionToHitPoint; // 0x00(0x18)
	float TargetToTargetBlendSpeed; // 0x18(0x04)
	char UnknownData_1C[0x24]; // 0x1c(0x24)
};

// ScriptStruct AnimFramework.BlendInTime
// Size: 0x18 (Inherited: 0x00)
struct FBlendInTime {
	float BlendTime; // 0x00(0x04)
	char UnknownData_4[0x14]; // 0x04(0x14)
};

// ScriptStruct AnimFramework.RayHitBlendLocation
// Size: 0x34 (Inherited: 0x00)
struct FRayHitBlendLocation {
	struct FBlendInTime BlendPositionToHitPoint; // 0x00(0x18)
	float TargetToTargetBlendSpeed; // 0x18(0x04)
	char UnknownData_1C[0x18]; // 0x1c(0x18)
};

// ScriptStruct AnimFramework.RayPosition
// Size: 0x24 (Inherited: 0x00)
struct FRayPosition {
	float StartRayOffset; // 0x00(0x04)
	float EndRayOffsetMin; // 0x04(0x04)
	float EndRayOffsetMax; // 0x08(0x04)
	struct FBlendBetweenTwoPositions FootPositionForEndRayOffsetBlend; // 0x0c(0x14)
	char UnknownData_20[0x4]; // 0x20(0x04)
};

// ScriptStruct AnimFramework.BlendBetweenTwoPositions
// Size: 0x14 (Inherited: 0x00)
struct FBlendBetweenTwoPositions {
	float BlendSpeed; // 0x00(0x04)
	float PositionToStartBlend; // 0x04(0x04)
	float PositionToFullBlend; // 0x08(0x04)
	char UnknownData_C[0x8]; // 0x0c(0x08)
};

// ScriptStruct AnimFramework.AnimNode_ExtendedFootPlacement
// Size: 0x1f0 (Inherited: 0x168)
struct FAnimNode_ExtendedFootPlacement : FAnimNode_FootPlacement {
	struct FSpineAdjustmentData SpineAdjustmentData; // 0x168(0x88)
};

// ScriptStruct AnimFramework.SpineAdjustmentData
// Size: 0x88 (Inherited: 0x60)
struct FSpineAdjustmentData : FPelvisAdjustmentData {
	struct FBoneReference ChainRootBone; // 0x60(0x10)
	float BoneLimitDegree; // 0x70(0x04)
	char UnknownData_74_0 : 7; // 0x74(0x01)
	bool bKeepTipBoneRotation : 1; // 0x74(0x01)
	char UnknownData_75_0 : 7; // 0x75(0x01)
	bool bCastRayForSpine : 1; // 0x75(0x01)
	enum class ECollisionChannel CollisionChannel; // 0x76(0x01)
	char UnknownData_77[0x11]; // 0x77(0x11)
};

// ScriptStruct AnimFramework.AnimNode_HandGrip
// Size: 0x1c0 (Inherited: 0xd0)
struct FAnimNode_HandGrip : FAnimNode_SkeletalControlBase {
	struct FComponentSpacePoseLink BasePose; // 0xd0(0x10)
	struct FAnimBakeToTwoBoneIK FollowerBone; // 0xe0(0x90)
	struct FBoneReference LeaderBone; // 0x170(0x10)
	struct FVector ExtraOffsetComponentSpace; // 0x180(0x0c)
	struct FVector WeaponScaleWorldSpace; // 0x18c(0x0c)
	struct FBoneReference FkBlendTriggerBone; // 0x198(0x10)
	float BlendSpeed; // 0x1a8(0x04)
	float MinDistanceToStartBlending; // 0x1ac(0x04)
	char UnknownData_1B0_0 : 7; // 0x1b0(0x01)
	bool bOverrideMaxDistanceFromStretchedIKChain : 1; // 0x1b0(0x01)
	char UnknownData_1B1[0x3]; // 0x1b1(0x03)
	float OverridenMaxDistanceFromStretchedIKChain; // 0x1b4(0x04)
	char UnknownData_1B8[0x8]; // 0x1b8(0x08)
};

// ScriptStruct AnimFramework.AnimNode_IKAttachment
// Size: 0x210 (Inherited: 0xd0)
struct FAnimNode_IKAttachment : FAnimNode_SkeletalControlBase {
	struct FSocketReference AttachmentSocket; // 0xd0(0x40)
	struct FAnimBakeToTwoBoneIK AttachingBone; // 0x110(0x90)
	struct FSocketReference AttachingOffsetSocket; // 0x1a0(0x40)
	struct FVector ExtraOffsetLocalSpace; // 0x1e0(0x0c)
	char UnknownData_1EC_0 : 7; // 0x1ec(0x01)
	bool bMoveSwivelAngleToSolverSpace : 1; // 0x1ec(0x01)
	char UnknownData_1ED_0 : 7; // 0x1ed(0x01)
	bool bCalculateDistanceUsingExtraOffsetLocalSpace : 1; // 0x1ed(0x01)
	char UnknownData_1EE[0x2]; // 0x1ee(0x02)
	float DistanceToStartIKBlend; // 0x1f0(0x04)
	float DistanceForFullIKBlend; // 0x1f4(0x04)
	float IKBlendSpeedIn; // 0x1f8(0x04)
	float IKBlendSpeedOut; // 0x1fc(0x04)
	char UnknownData_200[0x10]; // 0x200(0x10)
};

// ScriptStruct AnimFramework.AnimNode_LayeredBoneBlendConstrained
// Size: 0x108 (Inherited: 0xc0)
struct FAnimNode_LayeredBoneBlendConstrained : FAnimNode_LayeredBoneBlend {
	struct TArray<struct FAnimBakeToTwoBoneIK> mEffectorBones; // 0xc0(0x10)
	struct FVector PelvisBoneTranslationBlendMask; // 0xd0(0x0c)
	struct FVector PelvisBoneRotationBlendMask; // 0xdc(0x0c)
	struct FBoneReference PelvisBone; // 0xe8(0x10)
	int32_t BlendPoseToOverridePelvis; // 0xf8(0x04)
	struct FLODBlendProperties IKLODBlend; // 0xfc(0x0c)
};

// ScriptStruct AnimFramework.AnimNode_LayeredBoneBlendPerAxis
// Size: 0xd8 (Inherited: 0xc0)
struct FAnimNode_LayeredBoneBlendPerAxis : FAnimNode_LayeredBoneBlend {
	struct TArray<struct FBoneReference> BonesForBlending; // 0xc0(0x10)
	char bDontAffectTargetTranslationX : 1; // 0xd0(0x01)
	char bDontAffectTargetTranslationY : 1; // 0xd0(0x01)
	char bDontAffectTargetTranslationZ : 1; // 0xd0(0x01)
	char bDontAffectTargetRotationX : 1; // 0xd0(0x01)
	char bDontAffectTargetRotationY : 1; // 0xd0(0x01)
	char bDontAffectTargetRotationZ : 1; // 0xd0(0x01)
	char bDontAffectTargetScaleX : 1; // 0xd0(0x01)
	char bDontAffectTargetScaleY : 1; // 0xd0(0x01)
	char bDontAffectTargetScaleZ : 1; // 0xd1(0x01)
	char UnknownData_D1_1 : 7; // 0xd1(0x01)
	char UnknownData_D2[0x6]; // 0xd2(0x06)
};

// ScriptStruct AnimFramework.AnimNode_LockFoot
// Size: 0x360 (Inherited: 0xd0)
struct FAnimNode_LockFoot : FAnimNode_SkeletalControlBase {
	struct FLockedFoot LeftLockedFoot; // 0xd0(0x110)
	struct FLockedFoot RightLockedFoot; // 0x1e0(0x110)
	struct FBoneReference pelvis; // 0x2f0(0x10)
	float MaxDistnaceFromGround; // 0x300(0x04)
	float MaxDistnaceFromFkPose; // 0x304(0x04)
	float MaxAngleDifferenceFromFkFoot; // 0x308(0x04)
	float BlendSpeed; // 0x30c(0x04)
	float PelvisBlendSpeed; // 0x310(0x04)
	float FootLengthFactor; // 0x314(0x04)
	char UnknownData_318_0 : 7; // 0x318(0x01)
	bool bScaleDistancesBasedOnMeshScale : 1; // 0x318(0x01)
	char UnknownData_319[0x47]; // 0x319(0x47)
};

// ScriptStruct AnimFramework.LockedFoot
// Size: 0x110 (Inherited: 0x00)
struct FLockedFoot {
	struct FAnimBakeToTwoBoneIK BakeToIK; // 0x00(0x90)
	char UnknownData_90[0x6c]; // 0x90(0x6c)
	struct FBoneReference FootBallJoint; // 0xfc(0x10)
	char UnknownData_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct AnimFramework.AnimNode_SingleAnimation
// Size: 0x100 (Inherited: 0x30)
struct FAnimNode_SingleAnimation : FAnimNode_AssetPlayerBase {
	struct UAnimationAsset* AnimationAsset; // 0x30(0x08)
	float X; // 0x38(0x04)
	float Y; // 0x3c(0x04)
	float Z; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct UAnimSequenceBase* AsSequence; // 0x48(0x08)
	struct UBlendSpaceBase* AsBlendSpace; // 0x50(0x08)
	char UnknownData_58_0 : 7; // 0x58(0x01)
	bool bLoopAnimation : 1; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	float PlayRate; // 0x5c(0x04)
	float StartAtTime; // 0x60(0x04)
	float EndNotificationAtTime; // 0x64(0x04)
	char UnknownData_68[0x10]; // 0x68(0x10)
	struct FBlendFilter BlendFilter; // 0x78(0x78)
	struct TArray<struct FBlendSampleData> BlendSampleDataCache; // 0xf0(0x10)
};

// ScriptStruct AnimFramework.AnimNode_TransitionsGate
// Size: 0x128 (Inherited: 0x98)
struct FAnimNode_TransitionsGate : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct FTransitionRequest AwaitingAnimation; // 0xa0(0x48)
	float PositionToJump; // 0xe8(0x04)
	char UnknownData_EC[0x14]; // 0xec(0x14)
	float BlendWeight; // 0x100(0x04)
	char UnknownData_104_0 : 7; // 0x104(0x01)
	bool bIgnoreForRelevancyTest : 1; // 0x104(0x01)
	char UnknownData_105[0x3]; // 0x105(0x03)
	struct FName GateName; // 0x108(0x08)
	char UnknownData_110[0x18]; // 0x110(0x18)
};

// ScriptStruct AnimFramework.TransitionRequest
// Size: 0x48 (Inherited: 0x00)
struct FTransitionRequest {
	struct UAnimationAsset* AnimationAsset; // 0x00(0x08)
	float X; // 0x08(0x04)
	float Y; // 0x0c(0x04)
	float Z; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	float StartAtTime; // 0x18(0x04)
	float BlendTime; // 0x1c(0x04)
	float EndNotificationAtTime; // 0x20(0x04)
	char bLoopAnimation : 1; // 0x24(0x01)
	char UnknownData_24_1 : 7; // 0x24(0x01)
	char UnknownData_25[0x23]; // 0x25(0x23)
};

// ScriptStruct AnimFramework.AnimRootMotionAdjuster
// Size: 0xc0 (Inherited: 0x00)
struct FAnimRootMotionAdjuster {
	char UnknownData_0[0x90]; // 0x00(0x90)
	struct UAnimMontage* MontageToBeAdjusted; // 0x90(0x08)
	char UnknownData_98[0x28]; // 0x98(0x28)
};

// ScriptStruct AnimFramework.AnimRootMotionAdjuterTargetData
// Size: 0x38 (Inherited: 0x00)
struct FAnimRootMotionAdjuterTargetData {
	char UnknownData_0[0x20]; // 0x00(0x20)
	struct UAnimMontage* AnimMontage; // 0x20(0x08)
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// ScriptStruct AnimFramework.MovementMoodData
// Size: 0x80 (Inherited: 0x00)
struct FMovementMoodData {
	struct UAnimSequence* Idle; // 0x00(0x08)
	struct UBlendSpaceBase* TurnInPlace; // 0x08(0x08)
	struct UAimOffsetBlendSpace* AimOffset; // 0x10(0x08)
	struct UBlendSpaceBase* Movement_LDown; // 0x18(0x08)
	struct UBlendSpaceBase* Movement_RDown; // 0x20(0x08)
	struct UBlendSpaceBase* MovementToIdle_LDown; // 0x28(0x08)
	struct UBlendSpaceBase* MovementToIdle_RDown; // 0x30(0x08)
	struct UAnimMontage* MantleOverCover; // 0x38(0x08)
	struct UAnimSequence* IdleMovementMoodTransitions[0x8]; // 0x40(0x40)
};

// ScriptStruct AnimFramework.CoverDataSetup
// Size: 0x40 (Inherited: 0x00)
struct FCoverDataSetup {
	struct UAnimSequence* IdleLeft; // 0x00(0x08)
	struct UAnimSequence* IdleRight; // 0x08(0x08)
	struct UBlendSpaceBase* MovementToIdle_Left; // 0x10(0x08)
	struct UBlendSpaceBase* MovementToIdle_Right; // 0x18(0x08)
	struct UAnimSequence* LeftToRightIdle; // 0x20(0x08)
	struct UAnimSequence* RightToLeftIdle; // 0x28(0x08)
	struct TArray<struct FCoverActionDataSetup> CoverActions; // 0x30(0x10)
};

// ScriptStruct AnimFramework.CoverActionDataSetup
// Size: 0x18 (Inherited: 0x00)
struct FCoverActionDataSetup {
	struct UAnimSequence* StartSequence; // 0x00(0x08)
	struct UAnimSequence* IdleSequence; // 0x08(0x08)
	struct UAnimSequence* StopSequence; // 0x10(0x08)
};

// ScriptStruct AnimFramework.FiringDataSetup
// Size: 0x18 (Inherited: 0x00)
struct FFiringDataSetup {
	struct UAnimSequence* StartSequence; // 0x00(0x08)
	struct UAnimSequence* LoopSequence; // 0x08(0x08)
	struct UAnimSequence* StopSequence; // 0x10(0x08)
};

// ScriptStruct AnimFramework.StateCachedData
// Size: 0x30 (Inherited: 0x00)
struct FStateCachedData {
	struct FName MachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	char UnknownData_10[0x20]; // 0x10(0x20)
};

// ScriptStruct AnimFramework.TransitionGateNodeData
// Size: 0xb0 (Inherited: 0x00)
struct FTransitionGateNodeData {
	struct FName MachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	struct FName GateName; // 0x10(0x08)
	int32_t MachineIdx; // 0x18(0x04)
	int32_t StateIdx; // 0x1c(0x04)
	struct FTransitionRequest AwaitingAnimationRequest; // 0x20(0x48)
	struct FTransitionRequest OldAnimationRequest; // 0x68(0x48)
};

// ScriptStruct AnimFramework.StateMachineTransition
// Size: 0x10 (Inherited: 0x00)
struct FStateMachineTransition {
	struct FName MachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
};

