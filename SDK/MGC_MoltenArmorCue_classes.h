// BlueprintGeneratedClass MGC_MoltenArmorCue.MGC_MoltenArmorCue_C
// Size: 0x570 (Inherited: 0x548)
struct AMGC_MoltenArmorCue_C : AMadGameplayCue {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)
	struct Acharacter* OwnerCharacter; // 0x558(0x08)
	struct UPhysicalMaterial* PrimaryMaterial; // 0x560(0x08)
	struct UPhysicalMaterial* MoltenArmorMaterial; // 0x568(0x08)

	void Restore Physical Material(); // Function MGC_MoltenArmorCue.MGC_MoltenArmorCue_C.Restore Physical Material // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void EnableMaterial(); // Function MGC_MoltenArmorCue.MGC_MoltenArmorCue_C.EnableMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Get Current And Replace Physical Material(); // Function MGC_MoltenArmorCue.MGC_MoltenArmorCue_C.Get Current And Replace Physical Material // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInventoryChanged_Event_1(int32_t ChangeBitFlags); // Function MGC_MoltenArmorCue.MGC_MoltenArmorCue_C.OnInventoryChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void DisableMaterial(); // Function MGC_MoltenArmorCue.MGC_MoltenArmorCue_C.DisableMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGC_MoltenArmorCue(int32_t EntryPoint); // Function MGC_MoltenArmorCue.MGC_MoltenArmorCue_C.ExecuteUbergraph_MGC_MoltenArmorCue // (Final|UbergraphFunction) // @ game+0x1a35c70
};

