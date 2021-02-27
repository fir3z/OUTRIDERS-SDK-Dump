// BlueprintGeneratedClass TS_SkillsSwap.TS_SkillsSwap_C
// Size: 0xa8 (Inherited: 0x80)
struct UTS_SkillsSwap_C : UMadTutorialSequence {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x80(0x08)
	struct FText Text; // 0x88(0x18)
	struct FTimerHandle FinishTimerHandle; // 0xa0(0x08)

	void BeginSequence(); // Function TS_SkillsSwap.TS_SkillsSwap_C.BeginSequence // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnFinishSequence(bool bSuccess); // Function TS_SkillsSwap.TS_SkillsSwap_C.K2_OnFinishSequence // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void FinishAfterTime(); // Function TS_SkillsSwap.TS_SkillsSwap_C.FinishAfterTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_TS_SkillsSwap(int32_t EntryPoint); // Function TS_SkillsSwap.TS_SkillsSwap_C.ExecuteUbergraph_TS_SkillsSwap // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

