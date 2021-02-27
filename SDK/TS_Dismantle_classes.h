// BlueprintGeneratedClass TS_Dismantle.TS_Dismantle_C
// Size: 0xa0 (Inherited: 0x80)
struct UTS_Dismantle_C : UMadTutorialSequence {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x80(0x08)
	struct FText Text; // 0x88(0x18)

	void BeginSequence(); // Function TS_Dismantle.TS_Dismantle_C.BeginSequence // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void End(); // Function TS_Dismantle.TS_Dismantle_C.End // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnFinishSequence(bool bSuccess); // Function TS_Dismantle.TS_Dismantle_C.K2_OnFinishSequence // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnInventoryItemsTakenApart(struct TArray<struct AMadItem*> Items); // Function TS_Dismantle.TS_Dismantle_C.OnInventoryItemsTakenApart // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_TS_Dismantle(int32_t EntryPoint); // Function TS_Dismantle.TS_Dismantle_C.ExecuteUbergraph_TS_Dismantle // (Final|UbergraphFunction) // @ game+0x1a35c70
};

