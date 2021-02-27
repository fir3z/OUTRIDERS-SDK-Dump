// AnimBlueprintGeneratedClass SK_DG_Base_01_Skeleton_AnimBlueprint.SK_DG_Base_01_Skeleton_AnimBlueprint_C
// Size: 0x9b0 (Inherited: 0x2c0)
struct USK_DG_Base_01_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8(0x78)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x370(0x5a0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x910(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x930(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x950(0x60)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_DG_Base_01_Skeleton_AnimBlueprint.SK_DG_Base_01_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_SK_DG_Base_01_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function SK_DG_Base_01_Skeleton_AnimBlueprint.SK_DG_Base_01_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_DG_Base_01_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x1a35c70
};

