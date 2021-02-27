// BlueprintGeneratedClass MadnessBPPlayerState.MadnessBPPlayerState_C
// Size: 0xa41 (Inherited: 0xa20)
struct AMadnessBPPlayerState_C : AMadPlayerState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0xa28(0x08)
	struct FMulticastInlineDelegate DataReceived; // 0xa30(0x10)
	char UnknownData_A40_0 : 7; // 0xa40(0x01)
	bool Challenge_DataReceived : 1; // 0xa40(0x01)

	void ReceiveBeginPlay(); // Function MadnessBPPlayerState.MadnessBPPlayerState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MadnessBPPlayerState(int32_t EntryPoint); // Function MadnessBPPlayerState.MadnessBPPlayerState_C.ExecuteUbergraph_MadnessBPPlayerState // (Final|UbergraphFunction) // @ game+0x1a35c70
	void DataReceived__DelegateSignature(struct UMadMetricsComponent* NewParam); // Function MadnessBPPlayerState.MadnessBPPlayerState_C.DataReceived__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
};

