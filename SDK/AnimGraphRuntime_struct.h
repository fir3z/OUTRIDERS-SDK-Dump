// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8 {
	Inner,
	Outer,
	ESphericalLimitType_MAX,
};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimPhysSimSpaceType : uint8 {
	Component,
	Actor,
	World,
	RootRelative,
	BoneRelative,
	AnimPhysSimSpaceType_MAX,
};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimPhysLinearConstraintType : uint8 {
	Free,
	Limited,
	AnimPhysLinearConstraintType_MAX,
};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimPhysAngularConstraintType : uint8 {
	Angular,
	Cone,
	AnimPhysAngularConstraintType_MAX,
};

// Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8 {
	StandardBlend,
	Inertialization,
	EBlendListTransitionType_MAX,
};

// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8 {
	Bone,
	MorphTarget,
	MaterialParameter,
	EDrivenDestinationMode_MAX,
};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8 {
	AddToInput,
	ReplaceComponent,
	AddToRefPose,
	EDrivenBoneModificationMode_MAX,
};

// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8 {
	None,
	Offset_RefPose,
	EConstraintOffsetOption_MAX,
};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class CopyBoneDeltaMode : uint8 {
	Accumulate,
	Copy,
	CopyBoneDeltaMode_MAX,
};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8 {
	Linear,
	Cubic,
	Sinusoidal,
	EaseInOutExponent2,
	EaseInOutExponent3,
	EaseInOutExponent4,
	EaseInOutExponent5,
	MAX,
};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8 {
	BMM_Ignore,
	BMM_Replace,
	BMM_Additive,
	BMM_MAX,
};

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8 {
	Add,
	Scale,
	Blend,
	WeightedMovingAverage,
	RemapCurve,
	EModifyCurveApplyMode_MAX,
};

// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8 {
	DrivePoses,
	DriveCurves,
	EPoseDriverOutput_MAX,
};

// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8 {
	Rotation,
	Translation,
	EPoseDriverSource_MAX,
};

// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8 {
	SwingAndTwist,
	SwingOnly,
	Translation,
	EPoseDriverType_MAX,
};

// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8 {
	NamedSnapshot,
	SnapshotPin,
	ESnapshotSourceMode_MAX,
};

// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8 {
	EIT_LocalSpace,
	EIT_Additive,
	EIT_MAX,
};

// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8 {
	ComponentSpace,
	WorldSpace,
	BaseBoneSpace,
	ESimulationSpace_MAX,
};

// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8 {
	FixedDefaultLengthValue,
	Distance,
	ChainLength,
	EScaleChainInitialLength_MAX,
};

// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8 {
	NoReset,
	StartPosition,
	ExplicitTime,
	ESequenceEvalReinit_MAX,
};

// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8 {
	None,
	X,
	Y,
	Z,
	ESplineBoneAxis_MAX,
};

// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8 {
	EulerX,
	EulerY,
	EulerZ,
	QuaternionAngle,
	SwingAngle,
	TwistAngle,
	ERotationComponent_MAX,
};

// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8 {
	Linear,
	Sinusoidal,
	Cubic,
	QuadraticInOut,
	CubicInOut,
	HermiteCubic,
	QuarticInOut,
	QuinticInOut,
	CircularIn,
	CircularOut,
	CircularInOut,
	ExpIn,
	ExpOut,
	ExpInOut,
	CustomCurve,
	EEasingFuncType_MAX,
};

// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8 {
	OnlyNormalizeAboveOne,
	AlwaysNormalize,
	NormalizeWithinMedian,
	NoNormalization,
	ERBFNormalizeMethod_MAX,
};

// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8 {
	Euclidean,
	Quaternion,
	SwingAngle,
	TwistAngle,
	DefaultMethod,
	ERBFDistanceMethod_MAX,
};

// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8 {
	Gaussian,
	Exponential,
	Linear,
	Cubic,
	Quintic,
	DefaultFunction,
	ERBFFunctionType_MAX,
};

// Enum AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8 {
	Additive,
	Interpolative,
	ERBFSolverType_MAX,
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0xd0 (Inherited: 0x10)
struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
	struct FLODBlendProperties LODBlend; // 0x20(0x0c)
	float ActualAlpha; // 0x2c(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x30(0x01)
	char UnknownData_31_0 : 7; // 0x31(0x01)
	bool bAlphaBoolEnabled : 1; // 0x31(0x01)
	char UnknownData_32[0x2]; // 0x32(0x02)
	float Alpha; // 0x34(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x38(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90(0x30)
	char UnknownData_C0[0x10]; // 0xc0(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimBakeToTwoBoneIK
// Size: 0x90 (Inherited: 0x00)
struct FAnimBakeToTwoBoneIK {
	struct FBoneReference mEffectorBone; // 0x00(0x10)
	float MaxDistanceFromStretchedIKChain; // 0x10(0x04)
	float MinDistanceFromShrinkedIKChain; // 0x14(0x04)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bClampIkTargetUponStretching : 1; // 0x18(0x01)
	char UnknownData_19_0 : 7; // 0x19(0x01)
	bool bPreserveBasePose : 1; // 0x19(0x01)
	char UnknownData_1A_0 : 7; // 0x1a(0x01)
	bool bClampIkTargetUponShrinking : 1; // 0x1a(0x01)
	char UnknownData_1B_0 : 7; // 0x1b(0x01)
	bool bTwoBonesIK : 1; // 0x1b(0x01)
	struct FBoneReference IkChainRootBone; // 0x1c(0x10)
	float IkReachPrecision; // 0x2c(0x04)
	float HorseLinkLimitDeg; // 0x30(0x04)
	enum class None MaxIterations; // 0x34(0x01)
	char UnknownData_35[0x5b]; // 0x35(0x5b)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size: 0xe0 (Inherited: 0x30)
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x30(0x04)
	float Y; // 0x34(0x04)
	float Z; // 0x38(0x04)
	float PlayRate; // 0x3c(0x04)
	char UnknownData_40_0 : 7; // 0x40(0x01)
	bool bLoop : 1; // 0x40(0x01)
	char UnknownData_41_0 : 7; // 0x41(0x01)
	bool bResetPlayTimeWhenBlendSpaceChanges : 1; // 0x41(0x01)
	char UnknownData_42_0 : 7; // 0x42(0x01)
	bool bScaleInputBasedOnAxisScale : 1; // 0x42(0x01)
	char UnknownData_43[0x1]; // 0x43(0x01)
	float StartPosition; // 0x44(0x04)
	struct UBlendSpaceBase* BlendSpace; // 0x48(0x08)
	char UnknownData_50[0x88]; // 0x50(0x88)
	struct UBlendSpaceBase* PreviousBlendSpace; // 0xd8(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size: 0x1f0 (Inherited: 0xe0)
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	char UnknownData_E0[0x60]; // 0xe0(0x60)
	struct FPoseLink BasePose; // 0x140(0x10)
	struct TArray<struct FAnimBakeToTwoBoneIK> ConstrainedEffectorBones; // 0x150(0x10)
	struct TArray<float> ConstrainedEffectorBonesWeight; // 0x160(0x10)
	struct TArray<struct FPCFAngularLimit> AngularLimits; // 0x170(0x10)
	int32_t LODThreshold; // 0x180(0x04)
	struct FName SourceSocketName; // 0x184(0x08)
	struct FName PivotSocketName; // 0x18c(0x08)
	struct FVector LookAtLocation; // 0x194(0x0c)
	struct FVector SocketAxis; // 0x1a0(0x0c)
	float Alpha; // 0x1ac(0x04)
	float TargetWeightInterpolationSpeedScale; // 0x1b0(0x04)
	char UnknownData_1B4[0x24]; // 0x1b4(0x24)
	struct FVector CurrentBlendInput; // 0x1d8(0x0c)
	struct FLODBlendProperties DetailsLODBlend; // 0x1e4(0x0c)
};

// ScriptStruct AnimGraphRuntime.PCFAngularLimit
// Size: 0x20 (Inherited: 0x00)
struct FPCFAngularLimit {
	struct FVector Limit; // 0x00(0x0c)
	char UnknownData_C_0 : 7; // 0x0c(0x01)
	bool bPreserveBasePoseRotation : 1; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct FBoneReference Bone; // 0x10(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Size: 0x450 (Inherited: 0xd0)
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	float LinearDampingOverride; // 0xd0(0x04)
	float AngularDampingOverride; // 0xd4(0x04)
	char UnknownData_D8[0x68]; // 0xd8(0x68)
	struct FBoneReference RelativeSpaceBone; // 0x140(0x10)
	struct FBoneReference BoundBone; // 0x150(0x10)
	struct FBoneReference ChainEnd; // 0x160(0x10)
	struct FVector BoxExtents; // 0x170(0x0c)
	struct FVector LocalJointOffset; // 0x17c(0x0c)
	float GravityScale; // 0x188(0x04)
	struct FVector GravityOverride; // 0x18c(0x0c)
	float LinearSpringConstant; // 0x198(0x04)
	float AngularSpringConstant; // 0x19c(0x04)
	float WindScale; // 0x1a0(0x04)
	struct FVector ComponentLinearAccScale; // 0x1a4(0x0c)
	struct FVector ComponentLinearVelScale; // 0x1b0(0x0c)
	struct FVector ComponentAppliedLinearAccClamp; // 0x1bc(0x0c)
	float AngularBiasOverride; // 0x1c8(0x04)
	int32_t NumSolverIterationsPreUpdate; // 0x1cc(0x04)
	int32_t NumSolverIterationsPostUpdate; // 0x1d0(0x04)
	struct FAnimPhysConstraintSetup ConstraintSetup; // 0x1d4(0x48)
	char UnknownData_21C[0x4]; // 0x21c(0x04)
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // 0x220(0x10)
	float SphereCollisionRadius; // 0x230(0x04)
	struct FVector ExternalForce; // 0x234(0x0c)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x240(0x10)
	enum class AnimPhysCollisionType CollisionType; // 0x250(0x01)
	enum class AnimPhysSimSpaceType SimulationSpace; // 0x251(0x01)
	char UnknownData_252[0x2]; // 0x252(0x02)
	char bUseSphericalLimits : 1; // 0x254(0x01)
	char bUsePlanarLimit : 1; // 0x254(0x01)
	char bDoUpdate : 1; // 0x254(0x01)
	char bDoEval : 1; // 0x254(0x01)
	char bOverrideLinearDamping : 1; // 0x254(0x01)
	char bOverrideAngularBias : 1; // 0x254(0x01)
	char bOverrideAngularDamping : 1; // 0x254(0x01)
	char bEnableWind : 1; // 0x254(0x01)
	char UnknownData_255_0 : 1; // 0x255(0x01)
	char bUseGravityOverride : 1; // 0x255(0x01)
	char bLinearSpring : 1; // 0x255(0x01)
	char bAngularSpring : 1; // 0x255(0x01)
	char bChain : 1; // 0x255(0x01)
	char UnknownData_255_5 : 3; // 0x255(0x01)
	char UnknownData_256[0xa]; // 0x256(0x0a)
	struct FRotationRetargetingInfo RetargetingSettings; // 0x260(0x130)
	char UnknownData_390[0xc0]; // 0x390(0xc0)
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// Size: 0x130 (Inherited: 0x00)
struct FRotationRetargetingInfo {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bEnabled : 1; // 0x00(0x01)
	char UnknownData_1[0xf]; // 0x01(0x0f)
	struct FTransform Source; // 0x10(0x30)
	struct FTransform Target; // 0x40(0x30)
	enum class ERotationComponent RotationComponent; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	struct FVector TwistAxis; // 0x74(0x0c)
	char UnknownData_80_0 : 7; // 0x80(0x01)
	bool bUseAbsoluteAngle : 1; // 0x80(0x01)
	char UnknownData_81[0x3]; // 0x81(0x03)
	float SourceMinimum; // 0x84(0x04)
	float SourceMaximum; // 0x88(0x04)
	float TargetMinimum; // 0x8c(0x04)
	float TargetMaximum; // 0x90(0x04)
	enum class EEasingFuncType EasingType; // 0x94(0x01)
	char UnknownData_95[0x3]; // 0x95(0x03)
	struct FRuntimeFloatCurve CustomCurve; // 0x98(0x88)
	char UnknownData_120_0 : 7; // 0x120(0x01)
	bool bFlipEasing : 1; // 0x120(0x01)
	char UnknownData_121[0x3]; // 0x121(0x03)
	float EasingWeight; // 0x124(0x04)
	char UnknownData_128_0 : 7; // 0x128(0x01)
	bool bClamp : 1; // 0x128(0x01)
	char UnknownData_129[0x7]; // 0x129(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// Size: 0x40 (Inherited: 0x00)
struct FAnimPhysPlanarLimit {
	struct FBoneReference DrivingBone; // 0x00(0x10)
	struct FTransform PlaneTransform; // 0x10(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// Size: 0x24 (Inherited: 0x00)
struct FAnimPhysSphericalLimit {
	struct FBoneReference DrivingBone; // 0x00(0x10)
	struct FVector SphereLocalOffset; // 0x10(0x0c)
	float LimitRadius; // 0x1c(0x04)
	enum class ESphericalLimitType LimitType; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// Size: 0x48 (Inherited: 0x00)
struct FAnimPhysConstraintSetup {
	enum class AnimPhysLinearConstraintType LinearXLimitType; // 0x00(0x01)
	enum class AnimPhysLinearConstraintType LinearYLimitType; // 0x01(0x01)
	enum class AnimPhysLinearConstraintType LinearZLimitType; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	struct FVector LinearAxesMin; // 0x04(0x0c)
	struct FVector LinearAxesMax; // 0x10(0x0c)
	enum class AnimPhysAngularConstraintType AngularConstraintType; // 0x1c(0x01)
	enum class AnimPhysTwistAxis TwistAxis; // 0x1d(0x01)
	enum class AnimPhysTwistAxis AngularTargetAxis; // 0x1e(0x01)
	char UnknownData_1F[0x1]; // 0x1f(0x01)
	float ConeAngle; // 0x20(0x04)
	struct FVector AngularLimitsMin; // 0x24(0x0c)
	struct FVector AngularLimitsMax; // 0x30(0x0c)
	struct FVector AngularTarget; // 0x3c(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Size: 0xc8 (Inherited: 0x10)
struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	float Alpha; // 0x30(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x34(0x08)
	int32_t LODThreshold; // 0x3c(0x04)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90(0x30)
	char UnknownData_C0[0x4]; // 0xc0(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0xc4(0x01)
	char UnknownData_C5_0 : 7; // 0xc5(0x01)
	bool bAlphaBoolEnabled : 1; // 0xc5(0x01)
	char UnknownData_C6[0x2]; // 0xc6(0x02)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// Size: 0xf0 (Inherited: 0xd0)
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	struct TArray<struct FAngularRangeLimit> AngularRangeLimits; // 0xd0(0x10)
	struct TArray<struct FVector> AngularOffsets; // 0xe0(0x10)
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// Size: 0x28 (Inherited: 0x00)
struct FAngularRangeLimit {
	struct FVector LimitMin; // 0x00(0x0c)
	struct FVector LimitMax; // 0x0c(0x0c)
	struct FBoneReference Bone; // 0x18(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Size: 0x68 (Inherited: 0x10)
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	struct FPoseLink A; // 0x10(0x10)
	struct FPoseLink B; // 0x20(0x10)
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions; // 0x30(0x10)
	char UnknownData_40[0x10]; // 0x40(0x10)
	float Alpha; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x58(0x08)
	enum class EBoneControlSpace TransformsSpace; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// Size: 0x24 (Inherited: 0x00)
struct FBlendBoneByChannelEntry {
	struct FBoneReference SourceBone; // 0x00(0x10)
	struct FBoneReference TargetBone; // 0x10(0x10)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bBlendTranslation : 1; // 0x20(0x01)
	char UnknownData_21_0 : 7; // 0x21(0x01)
	bool bBlendRotation : 1; // 0x21(0x01)
	char UnknownData_22_0 : 7; // 0x22(0x01)
	bool bBlendScale : 1; // 0x22(0x01)
	char UnknownData_23[0x1]; // 0x23(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size: 0x98 (Inherited: 0x10)
struct FAnimNode_BlendListBase : FAnimNode_Base {
	struct TArray<struct FPoseLink> BlendPose; // 0x10(0x10)
	struct TArray<float> BlendTime; // 0x20(0x10)
	enum class EBlendListTransitionType TransitionType; // 0x30(0x01)
	enum class EAlphaBlendOption BlendType; // 0x31(0x01)
	char UnknownData_32_0 : 7; // 0x32(0x01)
	bool bResetChildOnActivation : 1; // 0x32(0x01)
	char UnknownData_33[0x5]; // 0x33(0x05)
	struct UCurveFloat* CustomBlendCurve; // 0x38(0x08)
	struct UBlendProfile* BlendProfile; // 0x40(0x08)
	char UnknownData_48[0x50]; // 0x48(0x50)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Size: 0xa0 (Inherited: 0x98)
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	char UnknownData_98_0 : 7; // 0x98(0x01)
	bool bActiveValue : 1; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Size: 0xb0 (Inherited: 0x98)
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	struct TArray<int32_t> EnumToPoseIndex; // 0x98(0x10)
	enum class None ActiveEnumValue; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Size: 0xa0 (Inherited: 0x98)
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Size: 0xe8 (Inherited: 0xe0)
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0x120 (Inherited: 0xd0)
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xd0(0x10)
	struct UCurveFloat* DrivingCurve; // 0xe0(0x08)
	char UnknownData_E8_0 : 7; // 0xe8(0x01)
	bool bUseAbsoluteValue : 1; // 0xe8(0x01)
	char UnknownData_E9_0 : 7; // 0xe9(0x01)
	bool bUsePositiveOnly : 1; // 0xe9(0x01)
	char UnknownData_EA_0 : 7; // 0xea(0x01)
	bool bUseNegativeOnly : 1; // 0xea(0x01)
	char UnknownData_EB[0x1]; // 0xeb(0x01)
	float Multiplier; // 0xec(0x04)
	float RangeMin; // 0xf0(0x04)
	float RangeMax; // 0xf4(0x04)
	float RemappedMin; // 0xf8(0x04)
	float RemappedMax; // 0xfc(0x04)
	struct FName ParameterName; // 0x100(0x08)
	struct FBoneReference TargetBone; // 0x108(0x10)
	enum class EDrivenDestinationMode DestinationMode; // 0x118(0x01)
	enum class EDrivenBoneModificationMode ModificationMode; // 0x119(0x01)
	enum class EComponentType SourceComponent; // 0x11a(0x01)
	char bUseRange : 1; // 0x11b(0x01)
	char bAffectTargetTranslationX : 1; // 0x11b(0x01)
	char bAffectTargetTranslationY : 1; // 0x11b(0x01)
	char bAffectTargetTranslationZ : 1; // 0x11b(0x01)
	char bAffectTargetRotationX : 1; // 0x11b(0x01)
	char bAffectTargetRotationY : 1; // 0x11b(0x01)
	char bAffectTargetRotationZ : 1; // 0x11b(0x01)
	char bAffectTargetScaleX : 1; // 0x11b(0x01)
	char bAffectTargetScaleY : 1; // 0x11c(0x01)
	char bAffectTargetScaleZ : 1; // 0x11c(0x01)
	char UnknownData_11C_2 : 6; // 0x11c(0x01)
	char UnknownData_11D[0x3]; // 0x11d(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// Size: 0x180 (Inherited: 0xd0)
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	struct FVector EffectorLocation; // 0xd0(0x0c)
	enum class EBoneControlSpace EffectorLocationSpace; // 0xdc(0x01)
	char UnknownData_DD[0x3]; // 0xdd(0x03)
	struct FBoneSocketTarget EffectorTarget; // 0xe0(0x60)
	struct FBoneReference TipBone; // 0x140(0x10)
	struct FBoneReference RootBone; // 0x150(0x10)
	float Precision; // 0x160(0x04)
	int32_t MaxIterations; // 0x164(0x04)
	char UnknownData_168_0 : 7; // 0x168(0x01)
	bool bStartFromTail : 1; // 0x168(0x01)
	char UnknownData_169_0 : 7; // 0x169(0x01)
	bool bEnableRotationLimit : 1; // 0x169(0x01)
	char UnknownData_16A[0x6]; // 0x16a(0x06)
	struct TArray<float> RotationLimitPerJoints; // 0x170(0x10)
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// Size: 0x60 (Inherited: 0x00)
struct FBoneSocketTarget {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bUseSocket : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FBoneReference BoneReference; // 0x04(0x10)
	char UnknownData_14[0xc]; // 0x14(0x0c)
	struct FSocketReference SocketReference; // 0x20(0x40)
};

// ScriptStruct AnimGraphRuntime.SocketReference
// Size: 0x40 (Inherited: 0x00)
struct FSocketReference {
	char UnknownData_0[0x30]; // 0x00(0x30)
	struct FName SocketName; // 0x30(0x08)
	char UnknownData_38[0x8]; // 0x38(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// Size: 0x110 (Inherited: 0xd0)
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xd0(0x10)
	struct TArray<struct FConstraint> ConstraintSetup; // 0xe0(0x10)
	struct TArray<float> ConstraintWeights; // 0xf0(0x10)
	char UnknownData_100[0x10]; // 0x100(0x10)
};

// ScriptStruct AnimGraphRuntime.Constraint
// Size: 0x1c (Inherited: 0x00)
struct FConstraint {
	struct FBoneReference TargetBone; // 0x00(0x10)
	enum class EConstraintOffsetOption OffsetOption; // 0x10(0x01)
	enum class ETransformConstraintType TransformType; // 0x11(0x01)
	struct FFilterOptionPerAxis PerAxis; // 0x12(0x03)
	char UnknownData_15[0x7]; // 0x15(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Size: 0xf8 (Inherited: 0xd0)
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xd0(0x10)
	struct FBoneReference TargetBone; // 0xe0(0x10)
	char UnknownData_F0_0 : 7; // 0xf0(0x01)
	bool bCopyTranslation : 1; // 0xf0(0x01)
	char UnknownData_F1_0 : 7; // 0xf1(0x01)
	bool bCopyRotation : 1; // 0xf1(0x01)
	char UnknownData_F2_0 : 7; // 0xf2(0x01)
	bool bCopyScale : 1; // 0xf2(0x01)
	enum class EBoneControlSpace ControlSpace; // 0xf3(0x01)
	char UnknownData_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size: 0x100 (Inherited: 0xd0)
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xd0(0x10)
	struct FBoneReference TargetBone; // 0xe0(0x10)
	char UnknownData_F0_0 : 7; // 0xf0(0x01)
	bool bCopyTranslation : 1; // 0xf0(0x01)
	char UnknownData_F1_0 : 7; // 0xf1(0x01)
	bool bCopyRotation : 1; // 0xf1(0x01)
	char UnknownData_F2_0 : 7; // 0xf2(0x01)
	bool bCopyScale : 1; // 0xf2(0x01)
	enum class CopyBoneDeltaMode CopyMode; // 0xf3(0x01)
	float TranslationMultiplier; // 0xf4(0x04)
	float RotationMultiplier; // 0xf8(0x04)
	float ScaleMultiplier; // 0xfc(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0x140 (Inherited: 0x10)
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	struct FWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0x10(0x08)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bUseAttachedParent : 1; // 0x18(0x01)
	char UnknownData_19_0 : 7; // 0x19(0x01)
	bool bCopyCurves : 1; // 0x19(0x01)
	char UnknownData_1A[0x126]; // 0x1a(0x126)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Size: 0x40 (Inherited: 0x10)
struct FAnimNode_CurveSource : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct FName SourceBinding; // 0x20(0x08)
	float Alpha; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct TScriptInterface<None> CurveSource; // 0x30(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size: 0x190 (Inherited: 0xd0)
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	struct FTransform EffectorTransform; // 0xd0(0x30)
	struct FBoneSocketTarget EffectorTarget; // 0x100(0x60)
	struct FBoneReference TipBone; // 0x160(0x10)
	struct FBoneReference RootBone; // 0x170(0x10)
	float Precision; // 0x180(0x04)
	int32_t MaxIterations; // 0x184(0x04)
	enum class EBoneControlSpace EffectorTransformSpace; // 0x188(0x01)
	enum class EBoneRotationSource EffectorRotationSource; // 0x189(0x01)
	char UnknownData_18A[0x6]; // 0x18a(0x06)
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0x128 (Inherited: 0xd0)
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	struct FBoneReference RightHandFK; // 0xd0(0x10)
	struct FBoneReference LeftHandFK; // 0xe0(0x10)
	struct FBoneReference RightHandIK; // 0xf0(0x10)
	struct FBoneReference LeftHandIK; // 0x100(0x10)
	struct TArray<struct FBoneReference> IKBonesToMove; // 0x110(0x10)
	float HandFKWeight; // 0x120(0x04)
	char UnknownData_124[0x4]; // 0x124(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size: 0xc0 (Inherited: 0x10)
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct TArray<struct FPoseLink> BlendPoses; // 0x20(0x10)
	struct TArray<struct FInputBlendPose> LayerSetup; // 0x30(0x10)
	struct TArray<float> BlendWeights; // 0x40(0x10)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bMeshSpaceRotationBlend : 1; // 0x50(0x01)
	char UnknownData_51_0 : 7; // 0x51(0x01)
	bool bMeshSpaceScaleBlend : 1; // 0x51(0x01)
	enum class ECurveBlendOption CurveBlendOption; // 0x52(0x01)
	char UnknownData_53_0 : 7; // 0x53(0x01)
	bool bBlendRootMotionBasedOnRootBone : 1; // 0x53(0x01)
	char UnknownData_54[0x4]; // 0x54(0x04)
	int32_t LODThreshold; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x60(0x10)
	struct FGuid SkeletonGuid; // 0x70(0x10)
	struct FGuid VirtualBoneGuid; // 0x80(0x10)
	char UnknownData_90[0x30]; // 0x90(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Size: 0x100 (Inherited: 0xd0)
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xd0(0x04)
	int32_t MaxIterations; // 0xd4(0x04)
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition; // 0xd8(0x10)
	char UnknownData_E8[0x18]; // 0xe8(0x18)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// Size: 0x2c (Inherited: 0x00)
struct FAnimLegIKDefinition {
	struct FBoneReference IKFootBone; // 0x00(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x04)
	float MinRotationAngle; // 0x24(0x04)
	enum class EAxis FootBoneForwardAxis; // 0x28(0x01)
	enum class EAxis HingeRotationAxis; // 0x29(0x01)
	char UnknownData_2A_0 : 7; // 0x2a(0x01)
	bool bEnableRotationLimit : 1; // 0x2a(0x01)
	char UnknownData_2B_0 : 7; // 0x2b(0x01)
	bool bEnableKneeTwistCorrection : 1; // 0x2b(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// Size: 0xa0 (Inherited: 0x00)
struct FAnimLegIKData {
	char UnknownData_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct AnimGraphRuntime.IKChain
// Size: 0x38 (Inherited: 0x00)
struct FIKChain {
	char UnknownData_0[0x38]; // 0x00(0x38)
};

// ScriptStruct AnimGraphRuntime.IKChainLink
// Size: 0x3c (Inherited: 0x00)
struct FIKChainLink {
	char UnknownData_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Size: 0x1b0 (Inherited: 0xd0)
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xd0(0x10)
	struct FBoneSocketTarget LookAtTarget; // 0xe0(0x60)
	struct FVector LookAtLocation; // 0x140(0x0c)
	struct FAxis LookAt_Axis; // 0x14c(0x10)
	char UnknownData_15C_0 : 7; // 0x15c(0x01)
	bool bUseLookUpAxis : 1; // 0x15c(0x01)
	enum class EInterpolationBlend InterpolationType; // 0x15d(0x01)
	char UnknownData_15E[0x2]; // 0x15e(0x02)
	struct FAxis LookUp_Axis; // 0x160(0x10)
	float LookAtClamp; // 0x170(0x04)
	float InterpolationTime; // 0x174(0x04)
	float InterpolationTriggerThreashold; // 0x178(0x04)
	char UnknownData_17C[0x34]; // 0x17c(0x34)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Size: 0x38 (Inherited: 0x10)
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bMeshSpaceAdditive : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0x110 (Inherited: 0xd0)
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xd0(0x10)
	struct FVector Translation; // 0xe0(0x0c)
	struct FRotator Rotation; // 0xec(0x0c)
	struct FVector Scale; // 0xf8(0x0c)
	enum class EBoneModificationMode TranslationMode; // 0x104(0x01)
	enum class EBoneModificationMode RotationMode; // 0x105(0x01)
	enum class EBoneModificationMode ScaleMode; // 0x106(0x01)
	enum class EBoneControlSpace TranslationSpace; // 0x107(0x01)
	enum class EBoneControlSpace RotationSpace; // 0x108(0x01)
	enum class EBoneControlSpace ScaleSpace; // 0x109(0x01)
	char UnknownData_10A[0x6]; // 0x10a(0x06)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_ModifyCurve : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct TArray<float> CurveValues; // 0x20(0x10)
	struct TArray<struct FName> CurveNames; // 0x30(0x10)
	char UnknownData_40[0x10]; // 0x40(0x10)
	float Alpha; // 0x50(0x04)
	enum class EModifyCurveApplyMode ApplyMode; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Size: 0x50 (Inherited: 0x10)
struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	struct TArray<struct FPoseLink> Poses; // 0x10(0x10)
	struct TArray<float> DesiredAlphas; // 0x20(0x10)
	char UnknownData_30[0x10]; // 0x30(0x10)
	struct FInputScaleBias AlphaScaleBias; // 0x40(0x08)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bAdditiveNode : 1; // 0x48(0x01)
	char UnknownData_49_0 : 7; // 0x49(0x01)
	bool bNormalizeAlpha : 1; // 0x49(0x01)
	char UnknownData_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0x108 (Inherited: 0xd0)
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToObserve; // 0xd0(0x10)
	enum class EBoneControlSpace DisplaySpace; // 0xe0(0x01)
	char UnknownData_E1_0 : 7; // 0xe1(0x01)
	bool bRelativeToRefPose : 1; // 0xe1(0x01)
	char UnknownData_E2[0x2]; // 0xe2(0x02)
	struct FVector Translation; // 0xe4(0x0c)
	struct FRotator Rotation; // 0xf0(0x0c)
	struct FVector Scale; // 0xfc(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size: 0x78 (Inherited: 0x30)
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	struct UPoseAsset* PoseAsset; // 0x30(0x08)
	char UnknownData_38[0x40]; // 0x38(0x40)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Size: 0x98 (Inherited: 0x78)
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	struct FPoseLink SourcePose; // 0x78(0x10)
	enum class EAlphaBlendOption BlendOption; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
	struct UCurveFloat* CustomCurve; // 0x90(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Size: 0x90 (Inherited: 0x78)
struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	struct FName PoseName; // 0x78(0x08)
	float PoseWeight; // 0x80(0x04)
	char UnknownData_84[0xc]; // 0x84(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Size: 0x128 (Inherited: 0x78)
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	struct FPoseLink SourcePose; // 0x78(0x10)
	struct TArray<struct FBoneReference> SourceBones; // 0x88(0x10)
	struct TArray<struct FBoneReference> OnlyDriveBones; // 0x98(0x10)
	struct TArray<struct FPoseDriverTarget> PoseTargets; // 0xa8(0x10)
	char UnknownData_B8[0x30]; // 0xb8(0x30)
	struct FBoneReference EvalSpaceBone; // 0xe8(0x10)
	struct FRBFParams RBFParams; // 0xf8(0x2c)
	enum class EPoseDriverSource DriveSource; // 0x124(0x01)
	enum class EPoseDriverOutput DriveOutput; // 0x125(0x01)
	char bOnlyDriveSelectedBones : 1; // 0x126(0x01)
	char UnknownData_126_1 : 7; // 0x126(0x01)
	char UnknownData_127[0x1]; // 0x127(0x01)
};

// ScriptStruct AnimGraphRuntime.RBFParams
// Size: 0x2c (Inherited: 0x00)
struct FRBFParams {
	int32_t TargetDimensions; // 0x00(0x04)
	enum class ERBFSolverType SolverType; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	float Radius; // 0x08(0x04)
	enum class ERBFFunctionType Function; // 0x0c(0x01)
	enum class ERBFDistanceMethod DistanceMethod; // 0x0d(0x01)
	enum class EBoneAxis TwistAxis; // 0x0e(0x01)
	char UnknownData_F[0x1]; // 0x0f(0x01)
	float WeightThreshold; // 0x10(0x04)
	enum class ERBFNormalizeMethod NormalizeMethod; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	struct FVector MedianReference; // 0x18(0x0c)
	float MedianMin; // 0x24(0x04)
	float MedianMax; // 0x28(0x04)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// Size: 0xc0 (Inherited: 0x00)
struct FPoseDriverTarget {
	struct TArray<struct FPoseDriverTransform> BoneTransforms; // 0x00(0x10)
	struct FRotator TargetRotation; // 0x10(0x0c)
	float TargetScale; // 0x1c(0x04)
	enum class ERBFDistanceMethod DistanceMethod; // 0x20(0x01)
	enum class ERBFFunctionType FunctionType; // 0x21(0x01)
	char UnknownData_22_0 : 7; // 0x22(0x01)
	bool bApplyCustomCurve : 1; // 0x22(0x01)
	char UnknownData_23[0x5]; // 0x23(0x05)
	struct FRichCurve CustomCurve; // 0x28(0x80)
	struct FName DrivenName; // 0xa8(0x08)
	char UnknownData_B0[0x8]; // 0xb0(0x08)
	char UnknownData_B8_0 : 7; // 0xb8(0x01)
	bool bIsHidden : 1; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// Size: 0x18 (Inherited: 0x00)
struct FPoseDriverTransform {
	struct FVector TargetTranslation; // 0x00(0x0c)
	struct FRotator TargetRotation; // 0x0c(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Size: 0x90 (Inherited: 0x10)
struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	struct FName SnapshotName; // 0x10(0x08)
	struct FPoseSnapshot Snapshot; // 0x18(0x38)
	enum class ESnapshotSourceMode Mode; // 0x50(0x01)
	char UnknownData_51[0x3f]; // 0x51(0x3f)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_RandomPlayer : FAnimNode_Base {
	struct TArray<struct FRandomPlayerSequenceEntry> Entries; // 0x10(0x10)
	char UnknownData_20[0x50]; // 0x20(0x50)
	char UnknownData_70_0 : 7; // 0x70(0x01)
	bool bShuffleMode : 1; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// Size: 0x50 (Inherited: 0x00)
struct FRandomPlayerSequenceEntry {
	struct UAnimSequence* Sequence; // 0x00(0x08)
	float ChanceToPlay; // 0x08(0x04)
	int32_t MinLoopCount; // 0x0c(0x04)
	int32_t MaxLoopCount; // 0x10(0x04)
	float MinPlayRate; // 0x14(0x04)
	float MaxPlayRate; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FAlphaBlend BlendIn; // 0x20(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Size: 0x10 (Inherited: 0x10)
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base {
};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Size: 0x18 (Inherited: 0x10)
struct FAnimNode_RefPose : FAnimNode_Base {
	enum class ERefPoseType RefPoseType; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// Size: 0xe0 (Inherited: 0xd0)
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase {
	char UnknownData_D0[0x10]; // 0xd0(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// Size: 0x5a0 (Inherited: 0xd0)
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xd0(0x08)
	char UnknownData_D8[0xa0]; // 0xd8(0xa0)
	struct FVector OverrideWorldGravity; // 0x178(0x0c)
	struct FVector ExternalForce; // 0x184(0x0c)
	struct FVector ComponentLinearAccScale; // 0x190(0x0c)
	struct FVector ComponentLinearVelScale; // 0x19c(0x0c)
	struct FVector ComponentAppliedLinearAccClamp; // 0x1a8(0x0c)
	float CachedBoundsScale; // 0x1b4(0x04)
	struct FBoneReference BaseBoneRef; // 0x1b8(0x10)
	enum class ECollisionChannel OverlapChannel; // 0x1c8(0x01)
	enum class ESimulationSpace SimulationSpace; // 0x1c9(0x01)
	char UnknownData_1CA_0 : 7; // 0x1ca(0x01)
	bool bForceDisableCollisionBetweenConstraintBodies : 1; // 0x1ca(0x01)
	char UnknownData_1CB[0x1]; // 0x1cb(0x01)
	char bEnableWorldGeometry : 1; // 0x1cc(0x01)
	char bOverrideWorldGravity : 1; // 0x1cc(0x01)
	char bTransferBoneVelocities : 1; // 0x1cc(0x01)
	char bFreezeIncomingPoseOnStart : 1; // 0x1cc(0x01)
	char bClampLinearTranslationLimitToRefPose : 1; // 0x1cc(0x01)
	char UnknownData_1CC_5 : 3; // 0x1cc(0x01)
	char UnknownData_1CD[0x3]; // 0x1cd(0x03)
	struct FSolverIterations OverrideSolverIterations; // 0x1d0(0x18)
	char UnknownData_1E8[0x3b8]; // 0x1e8(0x3b8)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
// Size: 0x590 (Inherited: 0xd0)
struct FAnimNode_RigidBody_Chaos : FAnimNode_SkeletalControlBase {
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xd0(0x08)
	struct FVector OverrideWorldGravity; // 0xd8(0x0c)
	struct FVector ExternalForce; // 0xe4(0x0c)
	struct FVector ComponentLinearAccScale; // 0xf0(0x0c)
	struct FVector ComponentLinearVelScale; // 0xfc(0x0c)
	struct FVector ComponentAppliedLinearAccClamp; // 0x108(0x0c)
	float CachedBoundsScale; // 0x114(0x04)
	struct FBoneReference BaseBoneRef; // 0x118(0x10)
	enum class ECollisionChannel OverlapChannel; // 0x128(0x01)
	enum class ESimulationSpace SimulationSpace; // 0x129(0x01)
	char UnknownData_12A_0 : 7; // 0x12a(0x01)
	bool bForceDisableCollisionBetweenConstraintBodies : 1; // 0x12a(0x01)
	char bEnableWorldGeometry : 1; // 0x12b(0x01)
	char bOverrideWorldGravity : 1; // 0x12b(0x01)
	char bTransferBoneVelocities : 1; // 0x12b(0x01)
	char bFreezeIncomingPoseOnStart : 1; // 0x12b(0x01)
	char bClampLinearTranslationLimitToRefPose : 1; // 0x12b(0x01)
	char UnknownData_12B_5 : 3; // 0x12b(0x01)
	struct FSolverIterations OverrideSolverIterations; // 0x12c(0x18)
	char UnknownData_144[0x44c]; // 0x144(0x44c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Size: 0xa0 (Inherited: 0x10)
struct FAnimNode_RotateRootBone : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	float Pitch; // 0x20(0x04)
	float Yaw; // 0x24(0x04)
	struct FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28(0x30)
	struct FInputScaleBiasClamp YawScaleBiasClamp; // 0x58(0x30)
	struct FRotator MeshToComponent; // 0x88(0x0c)
	char UnknownData_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0xf8 (Inherited: 0xd0)
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	struct FBoneReference TargetBone; // 0xd0(0x10)
	struct FBoneReference SourceBone; // 0xe0(0x10)
	float Multiplier; // 0xf0(0x04)
	enum class EBoneAxis RotationAxisToRefer; // 0xf4(0x01)
	char UnknownData_F5_0 : 7; // 0xf5(0x01)
	bool bIsAdditive : 1; // 0xf5(0x01)
	char UnknownData_F6[0x2]; // 0xf6(0x02)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size: 0x198 (Inherited: 0xe0)
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	struct FPoseLink BasePose; // 0xe0(0x10)
	struct TArray<struct FAnimBakeToTwoBoneIK> ConstrainedEffectorBones; // 0xf0(0x10)
	int32_t LODThreshold; // 0x100(0x04)
	float Alpha; // 0x104(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x108(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x110(0x48)
	struct FName AlphaCurveName; // 0x158(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x160(0x30)
	char UnknownData_190[0x4]; // 0x190(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x194(0x01)
	char UnknownData_195_0 : 7; // 0x195(0x01)
	bool bAlphaBoolEnabled : 1; // 0x195(0x01)
	char UnknownData_196[0x2]; // 0x196(0x02)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	struct FPoseLink InputPose; // 0x10(0x10)
	float DefaultChainLength; // 0x20(0x04)
	struct FBoneReference ChainStartBone; // 0x24(0x10)
	struct FBoneReference ChainEndBone; // 0x34(0x10)
	struct FVector TargetLocation; // 0x44(0x0c)
	float Alpha; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x58(0x08)
	enum class EScaleChainInitialLength ChainInitialLength; // 0x60(0x01)
	char UnknownData_61[0x17]; // 0x61(0x17)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Size: 0x48 (Inherited: 0x30)
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x30(0x08)
	float ExplicitTime; // 0x38(0x04)
	char UnknownData_3C_0 : 7; // 0x3c(0x01)
	bool bShouldLoop : 1; // 0x3c(0x01)
	char UnknownData_3D_0 : 7; // 0x3d(0x01)
	bool bTeleportToExplicitTime : 1; // 0x3d(0x01)
	enum class ESequenceEvalReinit ReinitializationBehavior; // 0x3e(0x01)
	char UnknownData_3F[0x1]; // 0x3f(0x01)
	float StartPosition; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Size: 0x60 (Inherited: 0x10)
struct FAnimNode_Slot : FAnimNode_Base {
	struct FPoseLink Source; // 0x10(0x10)
	struct TArray<struct FSlotNodeConstrainedBone> EffectorBones; // 0x20(0x10)
	struct FName SlotName; // 0x30(0x08)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool bConstrainIfAdditive : 1; // 0x38(0x01)
	char UnknownData_39_0 : 7; // 0x39(0x01)
	bool bAlwaysUpdateSourcePose : 1; // 0x39(0x01)
	char UnknownData_3A_0 : 7; // 0x3a(0x01)
	bool bInitializeSourcePoseOnBlendingOut : 1; // 0x3a(0x01)
	char UnknownData_3B[0x25]; // 0x3b(0x25)
};

// ScriptStruct AnimGraphRuntime.SlotNodeConstrainedBone
// Size: 0xa0 (Inherited: 0x00)
struct FSlotNodeConstrainedBone {
	struct FAnimBakeToTwoBoneIK BakeToIkBone; // 0x00(0x90)
	struct FBoneReference ReferenceBone; // 0x90(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Size: 0x268 (Inherited: 0xd0)
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference StartBone; // 0xd0(0x10)
	struct FBoneReference EndBone; // 0xe0(0x10)
	enum class ESplineBoneAxis BoneAxis; // 0xf0(0x01)
	char UnknownData_F1_0 : 7; // 0xf1(0x01)
	bool bAutoCalculateSpline : 1; // 0xf1(0x01)
	char UnknownData_F2[0x2]; // 0xf2(0x02)
	int32_t PointCount; // 0xf4(0x04)
	struct TArray<struct FTransform> ControlPoints; // 0xf8(0x10)
	float Roll; // 0x108(0x04)
	float TwistStart; // 0x10c(0x04)
	float TwistEnd; // 0x110(0x04)
	char UnknownData_114[0x4]; // 0x114(0x04)
	struct FAlphaBlend TwistBlend; // 0x118(0x30)
	float Stretch; // 0x148(0x04)
	float Offset; // 0x14c(0x04)
	char UnknownData_150[0x118]; // 0x150(0x118)
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// Size: 0x14 (Inherited: 0x00)
struct FSplineIKCachedBoneData {
	struct FBoneReference Bone; // 0x00(0x10)
	int32_t RefSkeletonIndex; // 0x10(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size: 0x130 (Inherited: 0xd0)
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SpringBone; // 0xd0(0x10)
	float MaxDisplacement; // 0xe0(0x04)
	float SpringStiffness; // 0xe4(0x04)
	float SpringDamping; // 0xe8(0x04)
	float ErrorResetThresh; // 0xec(0x04)
	char UnknownData_F0[0x3c]; // 0xf0(0x3c)
	char bLimitDisplacement : 1; // 0x12c(0x01)
	char bTranslateX : 1; // 0x12c(0x01)
	char bTranslateY : 1; // 0x12c(0x01)
	char bTranslateZ : 1; // 0x12c(0x01)
	char bRotateX : 1; // 0x12c(0x01)
	char bRotateY : 1; // 0x12c(0x01)
	char bRotateZ : 1; // 0x12c(0x01)
	char UnknownData_12D[0x3]; // 0x12d(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// Size: 0x30 (Inherited: 0x30)
struct FAnimNode_StateResult : FAnimNode_Root {
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size: 0x260 (Inherited: 0xd0)
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	char UnknownData_D0[0x30]; // 0xd0(0x30)
	struct FBoneReference TrailBone; // 0x100(0x10)
	int32_t ChainLength; // 0x110(0x04)
	enum class EAxis ChainBoneAxis; // 0x114(0x01)
	char bInvertChainBoneAxis : 1; // 0x115(0x01)
	char bLimitStretch : 1; // 0x115(0x01)
	char bLimitRotation : 1; // 0x115(0x01)
	char bUsePlanarLimit : 1; // 0x115(0x01)
	char bActorSpaceFakeVel : 1; // 0x115(0x01)
	char bReorientParentToChild : 1; // 0x115(0x01)
	char UnknownData_115_6 : 2; // 0x115(0x01)
	char UnknownData_116[0x2]; // 0x116(0x02)
	float MaxDeltaTime; // 0x118(0x04)
	float RelaxationSpeedScale; // 0x11c(0x04)
	struct FRuntimeFloatCurve TrailRelaxationSpeed; // 0x120(0x88)
	struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1a8(0x30)
	struct TArray<struct FRotationLimit> RotationLimits; // 0x1d8(0x10)
	struct TArray<struct FVector> RotationOffsets; // 0x1e8(0x10)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x1f8(0x10)
	float StretchLimit; // 0x208(0x04)
	struct FVector FakeVelocity; // 0x20c(0x0c)
	struct FBoneReference BaseJoint; // 0x218(0x10)
	float LastBoneRotationAnimAlphaBlend; // 0x228(0x04)
	char UnknownData_22C[0x34]; // 0x22c(0x34)
};

// ScriptStruct AnimGraphRuntime.RotationLimit
// Size: 0x18 (Inherited: 0x00)
struct FRotationLimit {
	struct FVector LimitMin; // 0x00(0x0c)
	struct FVector LimitMax; // 0x0c(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Size: 0x140 (Inherited: 0xd0)
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	struct FReferenceBoneFrame BaseFrame; // 0xd0(0x20)
	struct FReferenceBoneFrame TwistFrame; // 0xf0(0x20)
	struct FAxis TwistPlaneNormalAxis; // 0x110(0x10)
	float RangeMax; // 0x120(0x04)
	float RemappedMin; // 0x124(0x04)
	float RemappedMax; // 0x128(0x04)
	struct FAnimCurveParam Curve; // 0x12c(0x0c)
	char UnknownData_138[0x8]; // 0x138(0x08)
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// Size: 0x20 (Inherited: 0x00)
struct FReferenceBoneFrame {
	struct FBoneReference Bone; // 0x00(0x10)
	struct FAxis Axis; // 0x10(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0x1f0 (Inherited: 0xd0)
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference IKBone; // 0xd0(0x10)
	float StartStretchRatio; // 0xe0(0x04)
	float MaxStretchScale; // 0xe4(0x04)
	struct FVector EffectorLocation; // 0xe8(0x0c)
	char UnknownData_F4[0xc]; // 0xf4(0x0c)
	struct FBoneSocketTarget EffectorTarget; // 0x100(0x60)
	struct FVector JointTargetLocation; // 0x160(0x0c)
	char UnknownData_16C[0x4]; // 0x16c(0x04)
	struct FBoneSocketTarget JointTarget; // 0x170(0x60)
	struct FAxis TwistAxis; // 0x1d0(0x10)
	enum class EBoneControlSpace EffectorLocationSpace; // 0x1e0(0x01)
	enum class EBoneControlSpace JointTargetLocationSpace; // 0x1e1(0x01)
	char bAllowStretching : 1; // 0x1e2(0x01)
	char bTakeRotationFromEffectorSpace : 1; // 0x1e2(0x01)
	char bMaintainEffectorRelRot : 1; // 0x1e2(0x01)
	char bAllowTwist : 1; // 0x1e2(0x01)
	char UnknownData_1E2_4 : 4; // 0x1e2(0x01)
	char UnknownData_1E3[0xd]; // 0x1e3(0x0d)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Size: 0xc8 (Inherited: 0x10)
struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	struct FPoseLink A; // 0x10(0x10)
	struct FPoseLink B; // 0x20(0x10)
	enum class EAnimAlphaInputType AlphaInputType; // 0x30(0x01)
	char bAlphaBoolEnabled : 1; // 0x31(0x01)
	char UnknownData_31_1 : 2; // 0x31(0x01)
	char bResetChildOnActivation : 1; // 0x31(0x01)
	char UnknownData_31_4 : 4; // 0x31(0x01)
	char UnknownData_32[0x2]; // 0x32(0x02)
	float Alpha; // 0x34(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x38(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90(0x30)
	char UnknownData_C0[0x8]; // 0xc0(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// Size: 0x930 (Inherited: 0x6e0)
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy {
	char UnknownData_6E0[0x250]; // 0x6e0(0x250)
};

// ScriptStruct AnimGraphRuntime.PositionHistory
// Size: 0x30 (Inherited: 0x00)
struct FPositionHistory {
	struct TArray<struct FVector> Positions; // 0x00(0x10)
	float Range; // 0x10(0x04)
	char UnknownData_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// Size: 0x10 (Inherited: 0x00)
struct FRBFEntry {
	struct TArray<float> Values; // 0x00(0x10)
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// Size: 0xa0 (Inherited: 0x10)
struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10(0x04)
	char UnknownData_14_0 : 7; // 0x14(0x01)
	bool bApplyCustomCurve : 1; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	struct FRichCurve CustomCurve; // 0x18(0x80)
	enum class ERBFDistanceMethod DistanceMethod; // 0x98(0x01)
	enum class ERBFFunctionType FunctionType; // 0x99(0x01)
	char UnknownData_9A[0x6]; // 0x9a(0x06)
};

