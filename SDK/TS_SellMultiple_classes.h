// BlueprintGeneratedClass TS_SellMultiple.TS_SellMultiple_C
// Size: 0xa8 (Inherited: 0x80)
struct UTS_SellMultiple_C : UMadTutorialSequence {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x80(0x08)
	struct FText Text; // 0x88(0x18)
	struct FTimerHandle TH_FinishAfterTime; // 0xa0(0x08)

	void BeginSequence(); // Function TS_SellMultiple.TS_SellMultiple_C.BeginSequence // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void End(); // Function TS_SellMultiple.TS_SellMultiple_C.End // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnFinishSequence(bool bSuccess); // Function TS_SellMultiple.TS_SellMultiple_C.K2_OnFinishSequence // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void FinishAfterTime(); // Function TS_SellMultiple.TS_SellMultiple_C.FinishAfterTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInventoryItemSell(); // Function TS_SellMultiple.TS_SellMultiple_C.OnInventoryItemSell // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_TS_SellMultiple(int32_t EntryPoint); // Function TS_SellMultiple.TS_SellMultiple_C.ExecuteUbergraph_TS_SellMultiple // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

