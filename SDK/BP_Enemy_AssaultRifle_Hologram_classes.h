// BlueprintGeneratedClass BP_Enemy_AssaultRifle_Hologram.BP_Enemy_AssaultRifle_Hologram_C
// Size: 0x1f5c (Inherited: 0x1f38)
struct ABP_Enemy_AssaultRifle_Hologram_C : ABP_Enemy_AssaultRifle_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f38(0x08)
	float HideWeapon_HideWeapon_752731C14C5DA400771139BB79525C0A; // 0x1f40(0x04)
	enum class ETimelineDirection HideWeapon__Direction_752731C14C5DA400771139BB79525C0A; // 0x1f44(0x01)
	char UnknownData_1F45[0x3]; // 0x1f45(0x03)
	struct UTimelineComponent* HideWeapon; // 0x1f48(0x08)
	struct UMaterialInstanceDynamic* WeaponMI; // 0x1f50(0x08)
	float StartZ; // 0x1f58(0x04)

	void HideWeapon__FinishedFunc(); // Function BP_Enemy_AssaultRifle_Hologram.BP_Enemy_AssaultRifle_Hologram_C.HideWeapon__FinishedFunc // (BlueprintEvent) // @ game+0x1a35c70
	void HideWeapon__UpdateFunc(); // Function BP_Enemy_AssaultRifle_Hologram.BP_Enemy_AssaultRifle_Hologram_C.HideWeapon__UpdateFunc // (BlueprintEvent) // @ game+0x1a35c70
	void HideHoloWeapon(); // Function BP_Enemy_AssaultRifle_Hologram.BP_Enemy_AssaultRifle_Hologram_C.HideHoloWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ReceiveBeginPlay(); // Function BP_Enemy_AssaultRifle_Hologram.BP_Enemy_AssaultRifle_Hologram_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_BP_Enemy_AssaultRifle_Hologram(int32_t EntryPoint); // Function BP_Enemy_AssaultRifle_Hologram.BP_Enemy_AssaultRifle_Hologram_C.ExecuteUbergraph_BP_Enemy_AssaultRifle_Hologram // (Final|UbergraphFunction) // @ game+0x1a35c70
};

