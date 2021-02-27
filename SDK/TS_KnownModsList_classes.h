// BlueprintGeneratedClass TS_KnownModsList.TS_KnownModsList_C
// Size: 0xa8 (Inherited: 0x80)
struct UTS_KnownModsList_C : UMadTutorialSequence {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x80(0x08)
	struct FText Text; // 0x88(0x18)
	struct FTimerHandle FinishTimerHandle; // 0xa0(0x08)

	void BeginSequence(); // Function TS_KnownModsList.TS_KnownModsList_C.BeginSequence // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnFinishSequence(bool bSuccess); // Function TS_KnownModsList.TS_KnownModsList_C.K2_OnFinishSequence // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void FinishAfterTimer(); // Function TS_KnownModsList.TS_KnownModsList_C.FinishAfterTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_TS_KnownModsList(int32_t EntryPoint); // Function TS_KnownModsList.TS_KnownModsList_C.ExecuteUbergraph_TS_KnownModsList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

