// BlueprintGeneratedClass BP_EmotesRoom.BP_EmotesRoom_C
// Size: 0x740 (Inherited: 0x6c0)
struct ABP_EmotesRoom_C : AMadTheRoom {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c0(0x08)
	struct UArrowComponent* Arrow2; // 0x6c8(0x08)
	struct USpotLightComponent* char_RimLeftLight; // 0x6d0(0x08)
	struct UArrowComponent* Arrow1; // 0x6d8(0x08)
	struct USpotLightComponent* char_MainDirectLight; // 0x6e0(0x08)
	struct UArrowComponent* Arrow; // 0x6e8(0x08)
	struct USpotLightComponent* char_FaceDirectLight; // 0x6f0(0x08)
	struct UPointLightComponent* char_AddLeftLight; // 0x6f8(0x08)
	struct USpotLightComponent* SpotLight4; // 0x700(0x08)
	struct USpotLightComponent* SpotLight3; // 0x708(0x08)
	struct USpotLightComponent* SpotLight2; // 0x710(0x08)
	struct USpotLightComponent* SpotLight1; // 0x718(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x720(0x08)
	struct UStaticMeshComponent* Cube; // 0x728(0x08)
	struct UPostProcessComponent* PostProcess; // 0x730(0x08)
	struct UCameraComponent* Camera; // 0x738(0x08)

	void OnModeChanged(enum class EMadRoomMode NewMode); // Function BP_EmotesRoom.BP_EmotesRoom_C.OnModeChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ChangeCamera(struct UCameraComponent* Camera); // Function BP_EmotesRoom.BP_EmotesRoom_C.ChangeCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnLeaveTheRoom(enum class EMadRoomMode NewMode); // Function BP_EmotesRoom.BP_EmotesRoom_C.OnLeaveTheRoom // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_BP_EmotesRoom(int32_t EntryPoint); // Function BP_EmotesRoom.BP_EmotesRoom_C.ExecuteUbergraph_BP_EmotesRoom // (Final|UbergraphFunction) // @ game+0x1a35c70
};

