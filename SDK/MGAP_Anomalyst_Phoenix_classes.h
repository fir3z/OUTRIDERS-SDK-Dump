// BlueprintGeneratedClass MGAP_Anomalyst_Phoenix.MGAP_Anomalyst_Phoenix_C
// Size: 0x4c8 (Inherited: 0x4b8)
struct UMGAP_Anomalyst_Phoenix_C : UMadGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	float ResurectionChance; // 0x4c0(0x04)
	float HealProcentage; // 0x4c4(0x04)

	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData payload); // Function MGAP_Anomalyst_Phoenix.MGAP_Anomalyst_Phoenix_C.K2_ShouldAbilityRespondToEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
	void OnNotifyEnd_F99E3CDE49B6AB6A482C59979D662370(struct FName NotifyName); // Function MGAP_Anomalyst_Phoenix.MGAP_Anomalyst_Phoenix_C.OnNotifyEnd_F99E3CDE49B6AB6A482C59979D662370 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyBegin_F99E3CDE49B6AB6A482C59979D662370(struct FName NotifyName); // Function MGAP_Anomalyst_Phoenix.MGAP_Anomalyst_Phoenix_C.OnNotifyBegin_F99E3CDE49B6AB6A482C59979D662370 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCancelled_F99E3CDE49B6AB6A482C59979D662370(struct FName NotifyName); // Function MGAP_Anomalyst_Phoenix.MGAP_Anomalyst_Phoenix_C.OnCancelled_F99E3CDE49B6AB6A482C59979D662370 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInterrupted_F99E3CDE49B6AB6A482C59979D662370(struct FName NotifyName); // Function MGAP_Anomalyst_Phoenix.MGAP_Anomalyst_Phoenix_C.OnInterrupted_F99E3CDE49B6AB6A482C59979D662370 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnComplete_F99E3CDE49B6AB6A482C59979D662370(struct FName NotifyName); // Function MGAP_Anomalyst_Phoenix.MGAP_Anomalyst_Phoenix_C.OnComplete_F99E3CDE49B6AB6A482C59979D662370 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function MGAP_Anomalyst_Phoenix.MGAP_Anomalyst_Phoenix_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGAP_Anomalyst_Phoenix(int32_t EntryPoint); // Function MGAP_Anomalyst_Phoenix.MGAP_Anomalyst_Phoenix_C.ExecuteUbergraph_MGAP_Anomalyst_Phoenix // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

