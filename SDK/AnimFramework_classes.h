// Class AnimFramework.FWAnimInstance_Base
// Size: 0x380 (Inherited: 0x2c0)
struct UFWAnimInstance_Base : UAnimInstance {
	struct TArray<struct FAnimRootMotionAdjuster> RootMotionAdjustments; // 0x2c0(0x10)
	char UnknownData_2D0[0xb0]; // 0x2d0(0xb0)

	bool TurnOnRagdollByBones(float TransitionTime, struct TArray<struct FName> BoneNamesToStartRagdoll, bool bIncludeSelf); // Function AnimFramework.FWAnimInstance_Base.TurnOnRagdollByBones // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x36f2150
	bool TurnOnRagdoll(float TransitionTime); // Function AnimFramework.FWAnimInstance_Base.TurnOnRagdoll // (Final|Native|Public|BlueprintCallable) // @ game+0x36f20c0
	bool TurnOffRagdoll(float TransitionTime); // Function AnimFramework.FWAnimInstance_Base.TurnOffRagdoll // (Final|Native|Public|BlueprintCallable) // @ game+0x36f2030
	bool IsSlotPlayingAnyAnimation(struct FName SlotNodeName); // Function AnimFramework.FWAnimInstance_Base.IsSlotPlayingAnyAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36f1dc0
	bool IsRagdollBlending(); // Function AnimFramework.FWAnimInstance_Base.IsRagdollBlending // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36f1ce0
	bool IsPlayingSlotAdditiveAnimation(struct FName SlotNodeName); // Function AnimFramework.FWAnimInstance_Base.IsPlayingSlotAdditiveAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36f1c50
};

// Class AnimFramework.AnimProxyBasedAnimInstance
// Size: 0x9b0 (Inherited: 0x2c0)
struct UAnimProxyBasedAnimInstance : UAnimInstance {
	enum class EFootStatus FootStatus; // 0x2c0(0x01)
	enum class EFootStatus PreviousFootStatus; // 0x2c1(0x01)
	enum class EFootStatus RightFootStatus; // 0x2c2(0x01)
	enum class EFootStatus LeftFootStatus; // 0x2c3(0x01)
	char bIsCorrectPoseForTransition : 1; // 0x2c4(0x01)
	char bIsCorrectFootStatusForTransition : 1; // 0x2c4(0x01)
	char UnknownData_2C4_2 : 6; // 0x2c4(0x01)
	char UnknownData_2C5[0x3]; // 0x2c5(0x03)
	float CorrectPoseForTransitionTimeout; // 0x2c8(0x04)
	char UnknownData_2CC[0x4]; // 0x2cc(0x04)
	struct FAnimInstanceProxy Proxy; // 0x2d0(0x6e0)

	void StopMontageOnSlot(struct FName SlotNodeName, float BlendOut); // Function AnimFramework.AnimProxyBasedAnimInstance.StopMontageOnSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x36f1f60
	void StopMontageOnGroup(struct FName InGroupName, float BlendOut); // Function AnimFramework.AnimProxyBasedAnimInstance.StopMontageOnGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x36f1e90
	bool IsSlotNodePlayingMontage(struct FName SlotNodeName, bool bIncludeBlendingOut); // Function AnimFramework.AnimProxyBasedAnimInstance.IsSlotNodePlayingMontage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36f1d00
	bool IsMontagePlayingOnGroup(struct FName InGroupName, bool bIncludeBlendingOut); // Function AnimFramework.AnimProxyBasedAnimInstance.IsMontagePlayingOnGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36f1b90
	float GetRelevantGateTimeRemaining(int32_t MachineIndex, int32_t StateIndex); // Function AnimFramework.AnimProxyBasedAnimInstance.GetRelevantGateTimeRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x36f1ad0
	bool GetIsCorrectPoseForTransition(int32_t MachineIndex, int32_t StateIndex, int32_t TransitionIndex); // Function AnimFramework.AnimProxyBasedAnimInstance.GetIsCorrectPoseForTransition // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x36f18d0
	bool GetIsCorrectFootStatusForTransition(int32_t MachineIndex, int32_t StateIndex, int32_t TransitionIndex); // Function AnimFramework.AnimProxyBasedAnimInstance.GetIsCorrectFootStatusForTransition // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x36f17d0
};

// Class AnimFramework.AnimNotify_RequestClothExtendedSimulation
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_RequestClothExtendedSimulation : UAnimNotify {
	int32_t ExtendedFrames; // 0x38(0x04)
	float ExtendedSimulationTime; // 0x3c(0x04)
};

// Class AnimFramework.AnimNotifyState_WithAudioSettings
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotifyState_WithAudioSettings : UAnimNotifyState {
	float VolumeMultiplier; // 0x38(0x04)
	float PitchMultiplier; // 0x3c(0x04)
};

// Class AnimFramework.AnimNotifyState_CharacterEffect
// Size: 0x50 (Inherited: 0x40)
struct UAnimNotifyState_CharacterEffect : UAnimNotifyState_WithAudioSettings {
	struct FName BoneSocket; // 0x40(0x08)
	enum class EAxis LocalUp; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class AnimFramework.AnimNotifyState_Foot
// Size: 0x58 (Inherited: 0x50)
struct UAnimNotifyState_Foot : UAnimNotifyState_CharacterEffect {
	char UnknownData_50[0x8]; // 0x50(0x08)
};

// Class AnimFramework.AnimNotifyState_RightFootDown
// Size: 0x58 (Inherited: 0x58)
struct UAnimNotifyState_RightFootDown : UAnimNotifyState_Foot {
};

// Class AnimFramework.AnimNotifyState_LeftFootDown
// Size: 0x58 (Inherited: 0x58)
struct UAnimNotifyState_LeftFootDown : UAnimNotifyState_Foot {
};

// Class AnimFramework.AnimNotifyState_SlideToCover
// Size: 0x58 (Inherited: 0x50)
struct UAnimNotifyState_SlideToCover : UAnimNotifyState_CharacterEffect {
	float TraceDistance; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// Class AnimFramework.AnimNotify_WithAudioSettings
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_WithAudioSettings : UAnimNotify {
	float VolumeMultiplier; // 0x38(0x04)
	float PitchMultiplier; // 0x3c(0x04)
};

// Class AnimFramework.AnimNotify_Foot
// Size: 0x60 (Inherited: 0x40)
struct UAnimNotify_Foot : UAnimNotify_WithAudioSettings {
	char UnknownData_40[0x4]; // 0x40(0x04)
	struct FName BoneSocket; // 0x44(0x08)
	struct FVector FXScale; // 0x4c(0x0c)
	float TraceDistance; // 0x58(0x04)
	enum class EAxis LocalUp; // 0x5c(0x01)
	char UnknownData_5D_0 : 7; // 0x5d(0x01)
	bool bCallBPFunction : 1; // 0x5d(0x01)
	char UnknownData_5E[0x2]; // 0x5e(0x02)
};

// Class AnimFramework.AnimNotify_LeftFootDown
// Size: 0x60 (Inherited: 0x60)
struct UAnimNotify_LeftFootDown : UAnimNotify_Foot {
};

// Class AnimFramework.AnimNotify_LeftFootUp
// Size: 0x60 (Inherited: 0x60)
struct UAnimNotify_LeftFootUp : UAnimNotify_Foot {
};

// Class AnimFramework.AnimNotify_RightFootDown
// Size: 0x60 (Inherited: 0x60)
struct UAnimNotify_RightFootDown : UAnimNotify_Foot {
};

// Class AnimFramework.AnimNotify_RightFootUp
// Size: 0x60 (Inherited: 0x60)
struct UAnimNotify_RightFootUp : UAnimNotify_Foot {
};

// Class AnimFramework.AnimNotify_CoverHighOut
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_CoverHighOut : UAnimNotify_WithAudioSettings {
};

// Class AnimFramework.AnimNotify_CoverLowOut
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_CoverLowOut : UAnimNotify_WithAudioSettings {
};

// Class AnimFramework.AnimNotify_CoverHighIn
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_CoverHighIn : UAnimNotify_WithAudioSettings {
};

// Class AnimFramework.AnimNotify_CoverLowIn
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_CoverLowIn : UAnimNotify_WithAudioSettings {
};

// Class AnimFramework.AnimNotify_Roll
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_Roll : UAnimNotify_WithAudioSettings {
};

// Class AnimFramework.AnimNotify_JumpOverObstacle
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_JumpOverObstacle : UAnimNotify_WithAudioSettings {
	struct FName BoneSocket; // 0x40(0x08)
};

// Class AnimFramework.AnimNotify_MeleeSwing
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_MeleeSwing : UAnimNotify_WithAudioSettings {
};

// Class AnimFramework.AnimNotify_Bodyfall
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_Bodyfall : UAnimNotify_WithAudioSettings {
	struct FName BoneSocket; // 0x40(0x08)
};

// Class AnimFramework.AnimNotify_CustomAudio
// Size: 0x58 (Inherited: 0x40)
struct UAnimNotify_CustomAudio : UAnimNotify_WithAudioSettings {
	struct FName NotifyName; // 0x40(0x08)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bReactsToSurface : 1; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	struct FName BoneSocket; // 0x4c(0x08)
	enum class EAxis LocalUp; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
};

// Class AnimFramework.AnimNotify_BodyMove_Base
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_BodyMove_Base : UAnimNotify_WithAudioSettings {
};

// Class AnimFramework.AnimNotify_BodyMove_Base_WithHiddenValue
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_BodyMove_Base_WithHiddenValue : UAnimNotify_BodyMove_Base {
	char UnknownData_40[0x8]; // 0x40(0x08)
};

// Class AnimFramework.AnimNotify_BodyMove
// Size: 0x48 (Inherited: 0x40)
struct UAnimNotify_BodyMove : UAnimNotify_BodyMove_Base {
	enum class EMoveVelocityType MoveVelocityType; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class AnimFramework.AnimNotify_BodyMove_Slow
// Size: 0x48 (Inherited: 0x48)
struct UAnimNotify_BodyMove_Slow : UAnimNotify_BodyMove_Base_WithHiddenValue {
};

// Class AnimFramework.AnimNotify_BodyMove_Medium
// Size: 0x48 (Inherited: 0x48)
struct UAnimNotify_BodyMove_Medium : UAnimNotify_BodyMove_Base_WithHiddenValue {
};

// Class AnimFramework.AnimNotify_BodyMove_Fast
// Size: 0x48 (Inherited: 0x48)
struct UAnimNotify_BodyMove_Fast : UAnimNotify_BodyMove_Base_WithHiddenValue {
};

// Class AnimFramework.AnimNotifyState_SpawnCameraAndForceFeedbackEffects
// Size: 0xa0 (Inherited: 0x38)
struct UAnimNotifyState_SpawnCameraAndForceFeedbackEffects : UAnimNotifyState {
	struct TSoftObjectPtr<struct UForceFeedbackEffect> ForceFeedbackEffect; // 0x38(0x28)
	struct TSoftObjectPtr<struct UForceFeedbackAttenuation> ForceFeedbackAttenuation; // 0x60(0x28)
	char UnknownData_88_0 : 7; // 0x88(0x01)
	bool bLoopForceFeedback : 1; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
	struct UCameraShake* CameraShakeEffect; // 0x90(0x08)
	float Radius; // 0x98(0x04)
	char UnknownData_9C_0 : 7; // 0x9c(0x01)
	bool bOrientShakeTowardsEpicenter : 1; // 0x9c(0x01)
	char UnknownData_9D[0x3]; // 0x9d(0x03)
};

// Class AnimFramework.CharacterEffectsSystemInterface
// Size: 0x28 (Inherited: 0x28)
struct UCharacterEffectsSystemInterface : UInterface {
};

// Class AnimFramework.CharacterEffectsInterface
// Size: 0x28 (Inherited: 0x28)
struct UCharacterEffectsInterface : UInterface {
};

// Class AnimFramework.AnimNotify_PoseSync
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_PoseSync : UAnimNotify {
};

// Class AnimFramework.BaseAnimInstanceForHumanNPC
// Size: 0x9c0 (Inherited: 0x9b0)
struct UBaseAnimInstanceForHumanNPC : UAnimProxyBasedAnimInstance {
	struct FVector ReactionLookAtTarget; // 0x9b0(0x0c)
	float ReactionLookAtHeadAlpha; // 0x9bc(0x04)
};

// Class AnimFramework.CinematicContainerActor
// Size: 0x2f8 (Inherited: 0x2f0)
struct ACinematicContainerActor : AActor {
	struct ULevelSequence* Sequence; // 0x2f0(0x08)
};

// Class AnimFramework.FWAnimNotify_StartRagdoll
// Size: 0x40 (Inherited: 0x38)
struct UFWAnimNotify_StartRagdoll : UAnimNotify {
	float TransitionTime; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class AnimFramework.FWAnimNotifyState_EnableRagdoll
// Size: 0x50 (Inherited: 0x38)
struct UFWAnimNotifyState_EnableRagdoll : UAnimNotifyState {
	struct TArray<struct FName> BoneNames; // 0x38(0x10)
	float TransitionTime; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class AnimFramework.FWAnimNotifyState_PlaySound
// Size: 0x60 (Inherited: 0x38)
struct UFWAnimNotifyState_PlaySound : UAnimNotifyState {
	struct USoundBase* Sound; // 0x38(0x08)
	float VolumeMultiplier; // 0x40(0x04)
	float PitchMultiplier; // 0x44(0x04)
	float FadeOutTime; // 0x48(0x04)
	float FadeOutVolume; // 0x4c(0x04)
	struct FName AttachName; // 0x50(0x08)
	struct UAudioComponent* PlayingSoundComponent; // 0x58(0x08)
};

// Class AnimFramework.StreamableCinematic
// Size: 0x50 (Inherited: 0x28)
struct UStreamableCinematic : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct ULevelSequence* Sequence; // 0x30(0x08)
	char UnknownData_38[0x18]; // 0x38(0x18)

	void Unload(); // Function AnimFramework.StreamableCinematic.Unload // (Final|Native|Public|BlueprintCallable) // @ game+0x36f2290
	void OnLevelLoaded(); // Function AnimFramework.StreamableCinematic.OnLevelLoaded // (Final|Native|Private) // @ game+0x36f1e70
	void Load(); // Function AnimFramework.StreamableCinematic.Load // (Final|Native|Public|BlueprintCallable) // @ game+0x36f1e50
	void GetOrWait(struct FDelegate Callback); // Function AnimFramework.StreamableCinematic.GetOrWait // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x36f19d0
};

// Class AnimFramework.AnimFrameworkBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimFrameworkBlueprintLibrary : UBlueprintFunctionLibrary {

	struct UStreamableCinematic* CreateStreamableCinematicSequence(struct FName CinematicLevelName); // Function AnimFramework.AnimFrameworkBlueprintLibrary.CreateStreamableCinematicSequence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x36f1750
};

