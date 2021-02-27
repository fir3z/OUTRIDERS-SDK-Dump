// BlueprintGeneratedClass MadVOManager.MadVOManager_C
// Size: 0x250 (Inherited: 0x240)
struct UMadVOManager_C : UMadVOManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UUserWidget* NPCPictureWidget; // 0x248(0x08)

	void OnLoaded_CD6260A243C41BE896B8FD93CE996358(struct UObject* Loaded); // Function MadVOManager.MadVOManager_C.OnLoaded_CD6260A243C41BE896B8FD93CE996358 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void BPOnPlayVO(enum class EVOListType ListType, struct FGameplayTag NPC); // Function MadVOManager.MadVOManager_C.BPOnPlayVO // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void BPOnEndVO(); // Function MadVOManager.MadVOManager_C.BPOnEndVO // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MadVOManager(int32_t EntryPoint); // Function MadVOManager.MadVOManager_C.ExecuteUbergraph_MadVOManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

