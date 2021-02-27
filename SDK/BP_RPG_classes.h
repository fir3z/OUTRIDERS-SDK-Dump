// BlueprintGeneratedClass BP_RPG.BP_RPG_C
// Size: 0x1f90 (Inherited: 0x1f88)
struct ABP_RPG_C : AMadRPG {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f88(0x08)

	void ReceiveBeginPlay(); // Function BP_RPG.BP_RPG_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void UnequipFinished(struct FName WeaponName); // Function BP_RPG.BP_RPG_C.UnequipFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_BP_RPG(int32_t EntryPoint); // Function BP_RPG.BP_RPG_C.ExecuteUbergraph_BP_RPG // (Final|UbergraphFunction) // @ game+0x1a35c70
};

