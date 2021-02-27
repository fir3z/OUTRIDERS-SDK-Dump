// AnimBlueprintGeneratedClass SK_Weapon_Assault_Rifle_01_Skeleton_AnimBlueprint.SK_Weapon_Assault_Rifle_01_Skeleton_AnimBlueprint_C
// Size: 0x1418 (Inherited: 0x2c0)
struct USK_Weapon_Assault_Rifle_01_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8(0x60)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x358(0x20)
	char UnknownData_378[0x8]; // 0x378(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x380(0x450)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x7d0(0x450)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xc20(0x110)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xd30(0x110)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0xe40(0x5a0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x13e0(0x20)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x1400(0x18)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_Weapon_Assault_Rifle_01_Skeleton_AnimBlueprint.SK_Weapon_Assault_Rifle_01_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_SK_Weapon_Assault_Rifle_01_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function SK_Weapon_Assault_Rifle_01_Skeleton_AnimBlueprint.SK_Weapon_Assault_Rifle_01_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_Weapon_Assault_Rifle_01_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x1a35c70
};

