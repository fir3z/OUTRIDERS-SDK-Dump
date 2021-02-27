// BlueprintGeneratedClass BP_ItemRoom.BP_ItemRoom_C
// Size: 0x6f8 (Inherited: 0x6c0)
struct ABP_ItemRoom_C : AMadTheRoom {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c0(0x08)
	struct UPointLightComponent* PointLight; // 0x6c8(0x08)
	struct USpotLightComponent* SecondRimLight; // 0x6d0(0x08)
	struct USpotLightComponent* MainRimLight; // 0x6d8(0x08)
	struct UStaticMeshComponent* SM_Base_Lite; // 0x6e0(0x08)
	struct UCameraComponent* Camera_Items; // 0x6e8(0x08)
	struct UTextRenderComponent* ItemDetails; // 0x6f0(0x08)

	void OnModeChanged(enum class EMadRoomMode NewMode); // Function BP_ItemRoom.BP_ItemRoom_C.OnModeChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnLeaveTheRoom(enum class EMadRoomMode NewMode); // Function BP_ItemRoom.BP_ItemRoom_C.OnLeaveTheRoom // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ChangeCamera(struct UCameraComponent* Camera); // Function BP_ItemRoom.BP_ItemRoom_C.ChangeCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_BP_ItemRoom(int32_t EntryPoint); // Function BP_ItemRoom.BP_ItemRoom_C.ExecuteUbergraph_BP_ItemRoom // (Final|UbergraphFunction) // @ game+0x1a35c70
};

