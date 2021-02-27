// BlueprintGeneratedClass TS_ClassPoints.TS_ClassPoints_C
// Size: 0xa8 (Inherited: 0x80)
struct UTS_ClassPoints_C : UMadTutorialSequence {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x80(0x08)
	struct FText Text; // 0x88(0x18)
	struct FTimerHandle FinishAfterTimeHandle; // 0xa0(0x08)

	void BeginSequence(); // Function TS_ClassPoints.TS_ClassPoints_C.BeginSequence // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnFinishSequence(bool bSuccess); // Function TS_ClassPoints.TS_ClassPoints_C.K2_OnFinishSequence // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void FinishAfterTime(); // Function TS_ClassPoints.TS_ClassPoints_C.FinishAfterTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_TS_ClassPoints(int32_t EntryPoint); // Function TS_ClassPoints.TS_ClassPoints_C.ExecuteUbergraph_TS_ClassPoints // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

