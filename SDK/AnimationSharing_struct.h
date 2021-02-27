// ScriptStruct AnimationSharing.TickAnimationSharingFunction
// Size: 0xf8 (Inherited: 0xf0)
struct FTickAnimationSharingFunction : FTickFunction {
	char UnknownData_F0[0x8]; // 0xf0(0x08)
};

// ScriptStruct AnimationSharing.AnimationSharingScalability
// Size: 0x10 (Inherited: 0x00)
struct FAnimationSharingScalability {
	struct FPerPlatformBool UseBlendTransitions; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FPerPlatformFloat BlendSignificanceValue; // 0x04(0x04)
	struct FPerPlatformInt MaximumNumberConcurrentBlends; // 0x08(0x04)
	struct FPerPlatformFloat TickSignificanceValue; // 0x0c(0x04)
};

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
// Size: 0x38 (Inherited: 0x00)
struct FPerSkeletonAnimationSharingSetup {
	struct USkeleton* Skeleton; // 0x00(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x08(0x08)
	struct UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10(0x08)
	struct UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18(0x08)
	struct UAnimationSharingStateProcessor* StateProcessorClass; // 0x20(0x08)
	struct TArray<struct FAnimationStateEntry> AnimationStates; // 0x28(0x10)
};

// ScriptStruct AnimationSharing.AnimationStateEntry
// Size: 0x30 (Inherited: 0x00)
struct FAnimationStateEntry {
	enum class None State; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct FAnimationSetup> AnimationSetups; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bOnDemand : 1; // 0x18(0x01)
	char UnknownData_19_0 : 7; // 0x19(0x01)
	bool bAdditive : 1; // 0x19(0x01)
	char UnknownData_1A[0x2]; // 0x1a(0x02)
	float BlendTime; // 0x1c(0x04)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bReturnToPreviousState : 1; // 0x20(0x01)
	char UnknownData_21_0 : 7; // 0x21(0x01)
	bool bSetNextState : 1; // 0x21(0x01)
	enum class None NextState; // 0x22(0x01)
	char UnknownData_23[0x1]; // 0x23(0x01)
	struct FPerPlatformInt MaximumNumberOfConcurrentInstances; // 0x24(0x04)
	float WiggleTimePercentage; // 0x28(0x04)
	char UnknownData_2C_0 : 7; // 0x2c(0x01)
	bool bRequiresCurves : 1; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct AnimationSharing.AnimationSetup
// Size: 0x18 (Inherited: 0x00)
struct FAnimationSetup {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	struct UAnimSharingStateInstance* AnimBlueprint; // 0x08(0x08)
	struct FPerPlatformInt NumRandomizedInstances; // 0x10(0x04)
	struct FPerPlatformBool Enabled; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

