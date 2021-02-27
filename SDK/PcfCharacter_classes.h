// Class PcfCharacter.PcfAnimInstance
// Size: 0xb10 (Inherited: 0x380)
struct UPcfAnimInstance : UFWAnimInstance_Base {
	struct FPcfAnimInstanceProxy PcfAnimProxy; // 0x380(0x760)
	struct UPCFAnimReplication* AnimReplicationClass; // 0xae0(0x08)
	struct UPCFAnimReplication* AnimReplication; // 0xae8(0x08)
	struct FName DefaultWeaponBone; // 0xaf0(0x08)
	char UnknownData_AF8[0x18]; // 0xaf8(0x18)

	bool IsRelevantLocoAnimAdjustingRotation(int32_t MachineIndex, int32_t StateIndex); // Function PcfCharacter.PcfAnimInstance.IsRelevantLocoAnimAdjustingRotation // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x39b8460
	bool IsRelevantLocoAnimAdjustingDistance(int32_t MachineIndex, int32_t StateIndex); // Function PcfCharacter.PcfAnimInstance.IsRelevantLocoAnimAdjustingDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x39b83a0
	float GetRelevantLocoAnimTimeRemaining(int32_t MachineIndex, int32_t StateIndex); // Function PcfCharacter.PcfAnimInstance.GetRelevantLocoAnimTimeRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x39b82e0
};

// Class PcfCharacter.PCFAnimReplication
// Size: 0x260 (Inherited: 0x180)
struct UPCFAnimReplication : UActorComponent {
	struct FPcfLocomotionAnimData LocomotionParameters; // 0x180(0x48)
	struct FPcfCoverAnimData CoverParameters; // 0x1c8(0x03)
	char UnknownData_1CB_0 : 7; // 0x1cb(0x01)
	bool bShouldApplyAimOffset : 1; // 0x1cb(0x01)
	char UnknownData_1CC_0 : 7; // 0x1cc(0x01)
	bool bShouldUseAimLocation : 1; // 0x1cc(0x01)
	char UnknownData_1CD[0x3]; // 0x1cd(0x03)
	struct FPcfLocomotionOutputData LocomotionOutputData; // 0x1d0(0x10)
	struct FPcfCharacterAnimData CharacterData; // 0x1e0(0x40)
	struct FPcfCharacterCoverData CharacterCoverData; // 0x220(0x04)
	struct FVector AimLocation; // 0x224(0x0c)
	struct UPcfMovementType* CurrentMovementType; // 0x230(0x08)
	struct UPcfMovementSpeed* CurrentMovementSpeed; // 0x238(0x08)
	struct Acharacter* MyCharacter; // 0x240(0x08)
	struct UCharacterMovementComponent* MovementComponent; // 0x248(0x08)
	struct USkeletalMeshComponent* SkelMeshComponent; // 0x250(0x08)
	char UnknownData_258[0x8]; // 0x258(0x08)
};

// Class PcfCharacter.PcfCharacterMovementComponent
// Size: 0x8e0 (Inherited: 0x850)
struct UPcfCharacterMovementComponent : UCharacterMovementComponent {
	float TurningAngleThreshold; // 0x850(0x04)
	float MinimumTurningSegmentLength; // 0x854(0x04)
	struct TArray<struct UPcfMovementSpeed*> MovementSpeeds; // 0x858(0x10)
	struct UPcfMovementSpeed* ActiveMovementSpeed; // 0x868(0x08)
	struct UPcfMovementType* ActiveMovementType; // 0x870(0x08)
	char UnknownData_878_0 : 7; // 0x878(0x01)
	bool bTransitionToWalkingModeMustNotFail : 1; // 0x878(0x01)
	char UnknownData_879[0x67]; // 0x879(0x67)

	void SetMovementType(struct UPcfMovementType* MovementType); // Function PcfCharacter.PcfCharacterMovementComponent.SetMovementType // (Final|Native|Public|BlueprintCallable) // @ game+0x39b8620
	void SetMovementSpeed(struct UPcfMovementSpeed* SpeedClass); // Function PcfCharacter.PcfCharacterMovementComponent.SetMovementSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x39b85a0
	void RestoreDefaultCollision(int32_t ID); // Function PcfCharacter.PcfCharacterMovementComponent.RestoreDefaultCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x39b8520
	struct UPcfMovementType* GetActiveMovementType(); // Function PcfCharacter.PcfCharacterMovementComponent.GetActiveMovementType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39b82a0
	struct UPcfMovementSpeed* GetActiveMovementSpeedType(); // Function PcfCharacter.PcfCharacterMovementComponent.GetActiveMovementSpeedType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39b8260
	int32_t ForceCollision(struct FName Reason); // Function PcfCharacter.PcfCharacterMovementComponent.ForceCollision // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39b81c0
};

// Class PcfCharacter.PcfPathFollowingComponent
// Size: 0x348 (Inherited: 0x328)
struct UPcfPathFollowingComponent : UPathFollowingComponent {
	char UnknownData_328[0xc]; // 0x328(0x0c)
	float DirInterpolationMaxRadiusScale; // 0x334(0x04)
	char UnknownData_338[0xd]; // 0x338(0x0d)
	char UnknownData_345_0 : 7; // 0x345(0x01)
	bool bDoDirectionInterpolation : 1; // 0x345(0x01)
	char UnknownData_346[0x2]; // 0x346(0x02)
};

// Class PcfCharacter.DummyClassForPcfCharacterModule
// Size: 0x28 (Inherited: 0x28)
struct UDummyClassForPcfCharacterModule : UObject {
};

// Class PcfCharacter.PcfAnimationAssetBase
// Size: 0xf0 (Inherited: 0xa8)
struct UPcfAnimationAssetBase : UAnimCompositeBase {
	char UnknownData_A8[0x38]; // 0xa8(0x38)
	struct TArray<struct FPcfAnimTrack> AnimTracks; // 0xe0(0x10)
};

// Class PcfCharacter.PcfAnimMetaData_CachedDistanceCurve
// Size: 0x48 (Inherited: 0x28)
struct UPcfAnimMetaData_CachedDistanceCurve : UAnimMetaData {
	struct FPcfCachedDistanceCurve CachedDistanceCurve; // 0x28(0x20)
};

// Class PcfCharacter.PcfAnimMetaData_JumpLinkAnimMetaData
// Size: 0x70 (Inherited: 0x28)
struct UPcfAnimMetaData_JumpLinkAnimMetaData : UAnimMetaData {
	struct FPcfCachedDistanceCurve JumpStartCachedDistanceCurveMeta; // 0x28(0x20)
	struct FPcfCachedDistanceCurve JumpEndCachedDistanceCurveMeta; // 0x48(0x20)
	float MaxJumpHeightTime; // 0x68(0x04)
	float FallingStartTime; // 0x6c(0x04)
};

// Class PcfCharacter.PcfAnimMetaData_RotationSpeed
// Size: 0x38 (Inherited: 0x28)
struct UPcfAnimMetaData_RotationSpeed : UAnimMetaData {
	float AngularSpeed; // 0x28(0x04)
	float TimeToStop; // 0x2c(0x04)
	float TimeToStart; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// Class PcfCharacter.PcfAnimMetaData_WeaponParentBone
// Size: 0x48 (Inherited: 0x28)
struct UPcfAnimMetaData_WeaponParentBone : UAnimMetaData {
	struct TArray<struct FTimeInterval> KeyTimes; // 0x28(0x10)
	struct TArray<int32_t> KeyTimeWeaponParentIndex; // 0x38(0x10)
};

// Class PcfCharacter.PcfAnimNotifyState_RootMotionAdjuster
// Size: 0x60 (Inherited: 0x38)
struct UPcfAnimNotifyState_RootMotionAdjuster : UAnimNotifyState {
	struct UFWSpaceWrappingDestinationProvider* DestinationProvider; // 0x38(0x08)
	struct FVector ExtraLocationOffsetWorldSpace; // 0x40(0x0c)
	float MaxDistanceErrorFromToAdjustRoot; // 0x4c(0x04)
	struct FRotator ExtraRotationOffsetWorldSpace; // 0x50(0x0c)
	char UnknownData_5C_0 : 7; // 0x5c(0x01)
	bool bAdjustTargetLocationHeight : 1; // 0x5c(0x01)
	char UnknownData_5D_0 : 7; // 0x5d(0x01)
	bool bAdjustTargetLocationOnSurface : 1; // 0x5d(0x01)
	char UnknownData_5E_0 : 7; // 0x5e(0x01)
	bool bAdjustTargetRotation : 1; // 0x5e(0x01)
	char UnknownData_5F_0 : 7; // 0x5f(0x01)
	bool bUseMaxDistanceErrorForRootAdjustment : 1; // 0x5f(0x01)
};

// Class PcfCharacter.PcfMovementType
// Size: 0x28 (Inherited: 0x28)
struct UPcfMovementType : UObject {
};

// Class PcfCharacter.PcfMovementType_Normal
// Size: 0x28 (Inherited: 0x28)
struct UPcfMovementType_Normal : UPcfMovementType {
};

// Class PcfCharacter.PcfMovementType_Combat
// Size: 0x28 (Inherited: 0x28)
struct UPcfMovementType_Combat : UPcfMovementType {
};

// Class PcfCharacter.PcfMovementType_Patrol
// Size: 0x28 (Inherited: 0x28)
struct UPcfMovementType_Patrol : UPcfMovementType {
};

// Class PcfCharacter.PcfMovementType_InCoverMovement
// Size: 0x28 (Inherited: 0x28)
struct UPcfMovementType_InCoverMovement : UPcfMovementType {
};

// Class PcfCharacter.PcfMovementSpeed
// Size: 0x40 (Inherited: 0x28)
struct UPcfMovementSpeed : UObject {
	struct FRotator RotationRate; // 0x28(0x0c)
	float MaxSpeed; // 0x34(0x04)
	float BrakingDeceleration; // 0x38(0x04)
	float MaxAcceleration; // 0x3c(0x04)
};

// Class PcfCharacter.PcfMovementSpeed_Walk
// Size: 0x40 (Inherited: 0x40)
struct UPcfMovementSpeed_Walk : UPcfMovementSpeed {
};

// Class PcfCharacter.PcfMovementSpeed_PatrolWalk
// Size: 0x40 (Inherited: 0x40)
struct UPcfMovementSpeed_PatrolWalk : UPcfMovementSpeed {
};

// Class PcfCharacter.PcfMovementSpeed_PatrolWalk_Unarmed
// Size: 0x40 (Inherited: 0x40)
struct UPcfMovementSpeed_PatrolWalk_Unarmed : UPcfMovementSpeed {
};

// Class PcfCharacter.PcfMovementSpeed_Run
// Size: 0x40 (Inherited: 0x40)
struct UPcfMovementSpeed_Run : UPcfMovementSpeed {
};

// Class PcfCharacter.PcfMovementSpeed_InCoverMovement
// Size: 0x40 (Inherited: 0x40)
struct UPcfMovementSpeed_InCoverMovement : UPcfMovementSpeed {
};

// Class PcfCharacter.PcfTestAI
// Size: 0x408 (Inherited: 0x408)
struct APcfTestAI : AAIController {
};

// Class PcfCharacter.PcfTestCharacter
// Size: 0x590 (Inherited: 0x590)
struct APcfTestCharacter : Acharacter {
};

// Class PcfCharacter.WeaponParentBoneMapping
// Size: 0x40 (Inherited: 0x30)
struct UWeaponParentBoneMapping : UDataAsset {
	struct TArray<struct FWeaponParentBoneReference> BoneMap; // 0x30(0x10)
};

