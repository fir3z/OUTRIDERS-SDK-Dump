// BlueprintGeneratedClass MGA_PlayMoveAction.MGA_PlayMoveAction_C
// Size: 0x4e9 (Inherited: 0x4e0)
struct UMGA_PlayMoveAction_C : UMadGameplayAbility_PlayMoveAction {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	char UnknownData_4E8_0 : 7; // 0x4e8(0x01)
	bool IgnoreNextMontageFinished : 1; // 0x4e8(0x01)

	void OnNotifyEnd_4BB3E780430C726F98AE37BFADB19C25(struct FName NotifyName); // Function MGA_PlayMoveAction.MGA_PlayMoveAction_C.OnNotifyEnd_4BB3E780430C726F98AE37BFADB19C25 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyBegin_4BB3E780430C726F98AE37BFADB19C25(struct FName NotifyName); // Function MGA_PlayMoveAction.MGA_PlayMoveAction_C.OnNotifyBegin_4BB3E780430C726F98AE37BFADB19C25 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCancelled_4BB3E780430C726F98AE37BFADB19C25(struct FName NotifyName); // Function MGA_PlayMoveAction.MGA_PlayMoveAction_C.OnCancelled_4BB3E780430C726F98AE37BFADB19C25 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInterrupted_4BB3E780430C726F98AE37BFADB19C25(struct FName NotifyName); // Function MGA_PlayMoveAction.MGA_PlayMoveAction_C.OnInterrupted_4BB3E780430C726F98AE37BFADB19C25 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnComplete_4BB3E780430C726F98AE37BFADB19C25(struct FName NotifyName); // Function MGA_PlayMoveAction.MGA_PlayMoveAction_C.OnComplete_4BB3E780430C726F98AE37BFADB19C25 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function MGA_PlayMoveAction.MGA_PlayMoveAction_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void OnMontageUpdated(); // Function MGA_PlayMoveAction.MGA_PlayMoveAction_C.OnMontageUpdated // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGA_PlayMoveAction(int32_t EntryPoint); // Function MGA_PlayMoveAction.MGA_PlayMoveAction_C.ExecuteUbergraph_MGA_PlayMoveAction // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

