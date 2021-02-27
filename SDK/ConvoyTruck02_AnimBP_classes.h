// AnimBlueprintGeneratedClass ConvoyTruck02_AnimBP.ConvoyTruck02_AnimBP_C
// Size: 0x1a64 (Inherited: 0x2d0)
struct UConvoyTruck02_AnimBP_C : UMadAnimInstance_ConvoyTruck {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2d8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308(0x60)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x368(0x60)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x3c8(0x18)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x3e0(0xc0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x4a0(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x558(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x580(0x28)
	char UnknownData_5A8[0x8]; // 0x5a8(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x5b0(0x450)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xa00(0x20)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0xa20(0x450)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0xe70(0x450)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x12c0(0x450)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x1710(0x110)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1820(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x1840(0x110)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1950(0x110)
	float Weight; // 0x1a60(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ConvoyTruck02_AnimBP.ConvoyTruck02_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ConvoyTruck02_AnimBP_AnimGraphNode_ModifyBone_94FEF9CD456347F7502CE8BA1D0FEBD7(); // Function ConvoyTruck02_AnimBP.ConvoyTruck02_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ConvoyTruck02_AnimBP_AnimGraphNode_ModifyBone_94FEF9CD456347F7502CE8BA1D0FEBD7 // (BlueprintEvent) // @ game+0x1a35c70
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ConvoyTruck02_AnimBP_AnimGraphNode_ModifyBone_2FD2BDED4D765980EEC1B0BE392DC62A(); // Function ConvoyTruck02_AnimBP.ConvoyTruck02_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ConvoyTruck02_AnimBP_AnimGraphNode_ModifyBone_2FD2BDED4D765980EEC1B0BE392DC62A // (BlueprintEvent) // @ game+0x1a35c70
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ConvoyTruck02_AnimBP_AnimGraphNode_ModifyBone_B68AD69E44E87F7EFF14F9A89B81CCE1(); // Function ConvoyTruck02_AnimBP.ConvoyTruck02_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ConvoyTruck02_AnimBP_AnimGraphNode_ModifyBone_B68AD69E44E87F7EFF14F9A89B81CCE1 // (BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_ConvoyTruck02_AnimBP(int32_t EntryPoint); // Function ConvoyTruck02_AnimBP.ConvoyTruck02_AnimBP_C.ExecuteUbergraph_ConvoyTruck02_AnimBP // (Final|UbergraphFunction) // @ game+0x1a35c70
};

