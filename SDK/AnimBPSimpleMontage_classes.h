// AnimBlueprintGeneratedClass AnimBPSimpleMontage.AnimBPSimpleMontage_C
// Size: 0xa70 (Inherited: 0x3e0)
struct UAnimBPSimpleMontage_C : UMadAnimInstance_AntFarmSimple {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3e8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x418(0x78)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x490(0x60)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x4f0(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x5b0(0x60)
	struct FAnimNode_RigLogic AnimGraphNode_RigLogic; // 0x610(0xa0)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x6b0(0x18)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x6c8(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x768(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x820(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x848(0x28)
	struct FAnimNode_AimOffsetLookAt AnimGraphNode_AimOffsetLookAt; // 0x870(0x1f0)
	struct UDNAContext* DNAC; // 0xa60(0x08)
	struct UAnimSequenceBase* IdleAnimation; // 0xa68(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function AnimBPSimpleMontage.AnimBPSimpleMontage_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void BlueprintBeginPlay(); // Function AnimBPSimpleMontage.AnimBPSimpleMontage_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void DNAContextChanged(); // Function AnimBPSimpleMontage.AnimBPSimpleMontage_C.DNAContextChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void BlueprintInitializeAnimation(); // Function AnimBPSimpleMontage.AnimBPSimpleMontage_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_AnimBPSimpleMontage(int32_t EntryPoint); // Function AnimBPSimpleMontage.AnimBPSimpleMontage_C.ExecuteUbergraph_AnimBPSimpleMontage // (Final|UbergraphFunction) // @ game+0x1a35c70
};

