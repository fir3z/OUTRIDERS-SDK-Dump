// BlueprintGeneratedClass TS_Crafting.TS_Crafting_C
// Size: 0xa0 (Inherited: 0x80)
struct UTS_Crafting_C : UMadTutorialSequence {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x80(0x08)
	struct FText Text; // 0x88(0x18)

	void BeginSequence(); // Function TS_Crafting.TS_Crafting_C.BeginSequence // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void End(); // Function TS_Crafting.TS_Crafting_C.End // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnFinishSequence(bool bSuccess); // Function TS_Crafting.TS_Crafting_C.K2_OnFinishSequence // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_TS_Crafting(int32_t EntryPoint); // Function TS_Crafting.TS_Crafting_C.ExecuteUbergraph_TS_Crafting // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

