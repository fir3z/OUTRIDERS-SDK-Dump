// BlueprintGeneratedClass BP_InventoryRoom.BP_InventoryRoom_C
// Size: 0x788 (Inherited: 0x6c0)
struct ABP_InventoryRoom_C : AMadTheRoom {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c0(0x08)
	struct UArrowComponent* Arrow2; // 0x6c8(0x08)
	struct USpotLightComponent* char_RimLeftLight; // 0x6d0(0x08)
	struct UArrowComponent* Arrow1; // 0x6d8(0x08)
	struct USpotLightComponent* char_MainDirectLight; // 0x6e0(0x08)
	struct UArrowComponent* Arrow; // 0x6e8(0x08)
	struct USpotLightComponent* char_FaceDirectLight; // 0x6f0(0x08)
	struct UPointLightComponent* char_AddLeftLight; // 0x6f8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x700(0x08)
	struct UStaticMeshComponent* Cube; // 0x708(0x08)
	struct UPostProcessComponent* PostProcess; // 0x710(0x08)
	struct UCameraComponent* MovingCamera; // 0x718(0x08)
	struct UCameraComponent* HeadCamera; // 0x720(0x08)
	struct UCameraComponent* FeetCamera; // 0x728(0x08)
	struct UCameraComponent* LegsCamera; // 0x730(0x08)
	struct UCameraComponent* TorsoCamera; // 0x738(0x08)
	struct UCameraComponent* CameraFace; // 0x740(0x08)
	struct UParticleSystemComponent* P_dust_motes_01; // 0x748(0x08)
	struct USceneComponent* InventoryScreen; // 0x750(0x08)
	struct UCameraComponent* Camera; // 0x758(0x08)
	enum class ETimelineDirection Timeline_0__Direction_2DB3FF644C3F585E1CC66B9047BE2F41; // 0x760(0x01)
	char UnknownData_761[0x7]; // 0x761(0x07)
	struct UTimelineComponent* Timeline_1; // 0x768(0x08)
	char UnknownData_770_0 : 7; // 0x770(0x01)
	bool bIsCameraMoving : 1; // 0x770(0x01)
	char UnknownData_771[0x7]; // 0x771(0x07)
	struct UCameraComponent* TargetCamera; // 0x778(0x08)
	float ViewFieldChange; // 0x780(0x04)
	float MoveTime; // 0x784(0x04)

	void CalculateFieldChange(); // Function BP_InventoryRoom.BP_InventoryRoom_C.CalculateFieldChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	bool IsCameraMoving(); // Function BP_InventoryRoom.BP_InventoryRoom_C.IsCameraMoving // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
	void Timeline_0__FinishedFunc(); // Function BP_InventoryRoom.BP_InventoryRoom_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1a35c70
	void Timeline_0__UpdateFunc(); // Function BP_InventoryRoom.BP_InventoryRoom_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1a35c70
	void OnModeChanged(enum class EMadRoomMode NewMode); // Function BP_InventoryRoom.BP_InventoryRoom_C.OnModeChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnLeaveTheRoom(enum class EMadRoomMode NewMode); // Function BP_InventoryRoom.BP_InventoryRoom_C.OnLeaveTheRoom // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ChangeCamera(struct UCameraComponent* Camera); // Function BP_InventoryRoom.BP_InventoryRoom_C.ChangeCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void MoveCamera(enum class None SlotIndex); // Function BP_InventoryRoom.BP_InventoryRoom_C.MoveCamera // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_BP_InventoryRoom(int32_t EntryPoint); // Function BP_InventoryRoom.BP_InventoryRoom_C.ExecuteUbergraph_BP_InventoryRoom // (Final|UbergraphFunction) // @ game+0x1a35c70
};

