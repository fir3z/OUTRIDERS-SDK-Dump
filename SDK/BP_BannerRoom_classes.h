// BlueprintGeneratedClass BP_BannerRoom.BP_BannerRoom_C
// Size: 0x6e8 (Inherited: 0x6c0)
struct ABP_BannerRoom_C : AMadTheRoom {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c0(0x08)
	struct USpotLightComponent* SpotLight1; // 0x6c8(0x08)
	struct UStaticMeshComponent* SM_Base_Lite; // 0x6d0(0x08)
	struct UPointLightComponent* PointLight; // 0x6d8(0x08)
	struct UPostProcessComponent* PostProcess; // 0x6e0(0x08)

	void OnModeChanged(enum class EMadRoomMode NewMode); // Function BP_BannerRoom.BP_BannerRoom_C.OnModeChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnLeaveTheRoom(enum class EMadRoomMode NewMode); // Function BP_BannerRoom.BP_BannerRoom_C.OnLeaveTheRoom // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ChangeCamera(struct UCameraComponent* Camera); // Function BP_BannerRoom.BP_BannerRoom_C.ChangeCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_BP_BannerRoom(int32_t EntryPoint); // Function BP_BannerRoom.BP_BannerRoom_C.ExecuteUbergraph_BP_BannerRoom // (Final|UbergraphFunction) // @ game+0x1a35c70
};

