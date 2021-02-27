// BlueprintGeneratedClass BP_TruckRoom.BP_TruckRoom_C
// Size: 0x760 (Inherited: 0x6c0)
struct ABP_TruckRoom_C : AMadTheRoom {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c0(0x08)
	struct UPointLightComponent* WheelsLight; // 0x6c8(0x08)
	struct UArrowComponent* Arrow5; // 0x6d0(0x08)
	struct USpotLightComponent* MainLight; // 0x6d8(0x08)
	struct UArrowComponent* Arrow4; // 0x6e0(0x08)
	struct USpotLightComponent* FrontLight_02; // 0x6e8(0x08)
	struct UArrowComponent* Arrow3; // 0x6f0(0x08)
	struct USpotLightComponent* TruckTopLight; // 0x6f8(0x08)
	struct UArrowComponent* Arrow2; // 0x700(0x08)
	struct USpotLightComponent* BackLight; // 0x708(0x08)
	struct UArrowComponent* Arrow1; // 0x710(0x08)
	struct USpotLightComponent* AmbinetCounterLight_02; // 0x718(0x08)
	struct UArrowComponent* Arrow; // 0x720(0x08)
	struct USpotLightComponent* AmbinetCounterLight_01; // 0x728(0x08)
	struct UStaticMeshComponent* SM_Base_Lite4; // 0x730(0x08)
	struct UStaticMeshComponent* SM_Base_Lite3; // 0x738(0x08)
	struct UStaticMeshComponent* SM_Base_Lite2; // 0x740(0x08)
	struct UPostProcessComponent* PostProcess; // 0x748(0x08)
	struct UStaticMeshComponent* SM_Base_Lite; // 0x750(0x08)
	struct UCameraComponent* Camera; // 0x758(0x08)

	bool IsCameraMoving(); // Function BP_TruckRoom.BP_TruckRoom_C.IsCameraMoving // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
	void OnModeChanged(enum class EMadRoomMode NewMode); // Function BP_TruckRoom.BP_TruckRoom_C.OnModeChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnLeaveTheRoom(enum class EMadRoomMode NewMode); // Function BP_TruckRoom.BP_TruckRoom_C.OnLeaveTheRoom // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ChangeCamera(struct UCameraComponent* Camera); // Function BP_TruckRoom.BP_TruckRoom_C.ChangeCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void MoveCamera(enum class None SlotIndex); // Function BP_TruckRoom.BP_TruckRoom_C.MoveCamera // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_BP_TruckRoom(int32_t EntryPoint); // Function BP_TruckRoom.BP_TruckRoom_C.ExecuteUbergraph_BP_TruckRoom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

