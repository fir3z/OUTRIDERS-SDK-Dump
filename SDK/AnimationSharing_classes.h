// Class AnimationSharing.AnimSharingStateInstance
// Size: 0x2e0 (Inherited: 0x2c0)
struct UAnimSharingStateInstance : UAnimInstance {
	struct UAnimSequence* AnimationToPlay; // 0x2c0(0x08)
	float PermutationTimeOffset; // 0x2c8(0x04)
	float PlayRate; // 0x2cc(0x04)
	char UnknownData_2D0_0 : 7; // 0x2d0(0x01)
	bool bStateBool : 1; // 0x2d0(0x01)
	char UnknownData_2D1[0x7]; // 0x2d1(0x07)
	struct UAnimSharingInstance* Instance; // 0x2d8(0x08)

	void GetInstancedActors(struct TArray<struct AActor*> Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xd99460
};

// Class AnimationSharing.AnimSharingTransitionInstance
// Size: 0x2e0 (Inherited: 0x2c0)
struct UAnimSharingTransitionInstance : UAnimInstance {
	struct FWeakObjectPtr<struct USkeletalMeshComponent> FromComponent; // 0x2c0(0x08)
	struct FWeakObjectPtr<struct USkeletalMeshComponent> ToComponent; // 0x2c8(0x08)
	float BlendTime; // 0x2d0(0x04)
	char UnknownData_2D4_0 : 7; // 0x2d4(0x01)
	bool bBlendBool : 1; // 0x2d4(0x01)
	char UnknownData_2D5[0xb]; // 0x2d5(0x0b)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
// Size: 0x2e0 (Inherited: 0x2c0)
struct UAnimSharingAdditiveInstance : UAnimInstance {
	struct FWeakObjectPtr<struct USkeletalMeshComponent> baseComponent; // 0x2c0(0x08)
	struct FWeakObjectPtr<struct UAnimSequence> AdditiveAnimation; // 0x2c8(0x08)
	float Alpha; // 0x2d0(0x04)
	char UnknownData_2D4_0 : 7; // 0x2d4(0x01)
	bool bStateBool : 1; // 0x2d4(0x01)
	char UnknownData_2D5[0xb]; // 0x2d5(0x0b)
};

// Class AnimationSharing.AnimSharingInstance
// Size: 0x138 (Inherited: 0x28)
struct UAnimSharingInstance : UObject {
	struct TArray<struct AActor*> RegisteredActors; // 0x28(0x10)
	char UnknownData_38[0x70]; // 0x38(0x70)
	struct UAnimationSharingStateProcessor* StateProcessor; // 0xa8(0x08)
	char UnknownData_B0[0x38]; // 0xb0(0x38)
	struct TArray<struct UAnimSequence*> UsedAnimationSequences; // 0xe8(0x10)
	char UnknownData_F8[0x10]; // 0xf8(0x10)
	struct UEnum* StateEnum; // 0x108(0x08)
	struct AActor* SharingActor; // 0x110(0x08)
	char UnknownData_118[0x20]; // 0x118(0x20)
};

// Class AnimationSharing.AnimationSharingManager
// Size: 0x150 (Inherited: 0x28)
struct UAnimationSharingManager : UObject {
	struct TArray<struct USkeleton*> Skeletons; // 0x28(0x10)
	struct TArray<struct UAnimSharingInstance*> PerSkeletonData; // 0x38(0x10)
	char UnknownData_48[0x108]; // 0x48(0x108)

	void RegisterActorWithSkeletonBP(struct AActor* InActor, struct USkeleton* SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP // (Final|Native|Public|BlueprintCallable) // @ game+0xd996c0
	struct UAnimationSharingManager* GetAnimationSharingManager(struct UObject* WorldContextObject); // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd993b0
	bool CreateAnimationSharingManager(struct UObject* WorldContextObject, struct UAnimationSharingSetup* Setup); // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd992f0
	bool AnimationSharingEnabled(); // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xd992c0
};

// Class AnimationSharing.AnimationSharingSetup
// Size: 0x48 (Inherited: 0x28)
struct UAnimationSharingSetup : UObject {
	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28(0x10)
	struct FAnimationSharingScalability ScalabilitySettings; // 0x38(0x10)
};

// Class AnimationSharing.AnimationSharingStateProcessor
// Size: 0x50 (Inherited: 0x28)
struct UAnimationSharingStateProcessor : UObject {
	struct TSoftObjectPtr<struct UEnum> AnimationStateEnum; // 0x28(0x28)

	void ProcessActorState(int32_t OutState, struct AActor* InActor, enum class None CurrentState, enum class None OnDemandState, bool bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd99510
	struct UEnum* GetAnimationStateEnum(); // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum // (Native|Event|Public|BlueprintEvent) // @ game+0xd99430
};

