// AnimBlueprintGeneratedClass ABP_SK_Cloth.ABP_SK_Cloth_C
// Size: 0xb04 (Inherited: 0x2c0)
struct UABP_SK_Cloth_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x2f8(0x110)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x408(0x110)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x518(0x110)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x628(0xe0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x708(0x20)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x728(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x750(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x778(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7a0(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x818(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x848(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x8c0(0x30)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x8f0(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x918(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x948(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x9f8(0xb8)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xab0(0x20)
	struct TArray<struct FVector> BonePositions; // 0xad0(0x10)
	struct TArray<struct AActor*> NearActors; // 0xae0(0x10)
	struct FVector ActorLocation; // 0xaf0(0x0c)
	int32_t CurentID; // 0xafc(0x04)
	int32_t FlagRollOutState; // 0xb00(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_SK_Cloth.ABP_SK_Cloth_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SK_Cloth_AnimGraphNode_TransitionResult_6F68AD724A7B22A6C170E69F3D958BA3(); // Function ABP_SK_Cloth.ABP_SK_Cloth_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SK_Cloth_AnimGraphNode_TransitionResult_6F68AD724A7B22A6C170E69F3D958BA3 // (BlueprintEvent) // @ game+0x1a35c70
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SK_Cloth_AnimGraphNode_TransitionResult_ACC585DC45CE8D27140539923B40EB12(); // Function ABP_SK_Cloth.ABP_SK_Cloth_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SK_Cloth_AnimGraphNode_TransitionResult_ACC585DC45CE8D27140539923B40EB12 // (BlueprintEvent) // @ game+0x1a35c70
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SK_Cloth_AnimGraphNode_TransitionResult_645FF43E4A2E74E53E50DF8B09A71D7F(); // Function ABP_SK_Cloth.ABP_SK_Cloth_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SK_Cloth_AnimGraphNode_TransitionResult_645FF43E4A2E74E53E50DF8B09A71D7F // (BlueprintEvent) // @ game+0x1a35c70
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SK_Cloth_AnimGraphNode_ModifyBone_1A31A9194A402EE8753A97A1060C0782(); // Function ABP_SK_Cloth.ABP_SK_Cloth_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SK_Cloth_AnimGraphNode_ModifyBone_1A31A9194A402EE8753A97A1060C0782 // (BlueprintEvent) // @ game+0x1a35c70
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SK_Cloth_AnimGraphNode_ModifyBone_83BF51C7446608319F904685156E6ED4(); // Function ABP_SK_Cloth.ABP_SK_Cloth_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SK_Cloth_AnimGraphNode_ModifyBone_83BF51C7446608319F904685156E6ED4 // (BlueprintEvent) // @ game+0x1a35c70
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SK_Cloth_AnimGraphNode_ModifyBone_6EE821B341F6B174E33E68A6C310BED3(); // Function ABP_SK_Cloth.ABP_SK_Cloth_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SK_Cloth_AnimGraphNode_ModifyBone_6EE821B341F6B174E33E68A6C310BED3 // (BlueprintEvent) // @ game+0x1a35c70
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_SK_Cloth.ABP_SK_Cloth_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_ABP_SK_Cloth(int32_t EntryPoint); // Function ABP_SK_Cloth.ABP_SK_Cloth_C.ExecuteUbergraph_ABP_SK_Cloth // (Final|UbergraphFunction) // @ game+0x1a35c70
};

