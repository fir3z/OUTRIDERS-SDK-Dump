// BlueprintGeneratedClass MGAP_KnockbackPlayer.MGAP_KnockbackPlayer_C
// Size: 0x568 (Inherited: 0x560)
struct UMGAP_KnockbackPlayer_C : UMadPlayerKnockbackGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)

	void OnNotifyEnd_1387B25448AA1884A0EC66987CE1CEA8(struct FName NotifyName); // Function MGAP_KnockbackPlayer.MGAP_KnockbackPlayer_C.OnNotifyEnd_1387B25448AA1884A0EC66987CE1CEA8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyBegin_1387B25448AA1884A0EC66987CE1CEA8(struct FName NotifyName); // Function MGAP_KnockbackPlayer.MGAP_KnockbackPlayer_C.OnNotifyBegin_1387B25448AA1884A0EC66987CE1CEA8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCancelled_1387B25448AA1884A0EC66987CE1CEA8(struct FName NotifyName); // Function MGAP_KnockbackPlayer.MGAP_KnockbackPlayer_C.OnCancelled_1387B25448AA1884A0EC66987CE1CEA8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInterrupted_1387B25448AA1884A0EC66987CE1CEA8(struct FName NotifyName); // Function MGAP_KnockbackPlayer.MGAP_KnockbackPlayer_C.OnInterrupted_1387B25448AA1884A0EC66987CE1CEA8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnComplete_1387B25448AA1884A0EC66987CE1CEA8(struct FName NotifyName); // Function MGAP_KnockbackPlayer.MGAP_KnockbackPlayer_C.OnComplete_1387B25448AA1884A0EC66987CE1CEA8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnSync_82C5686D4876B2C2A38C60A988269076(); // Function MGAP_KnockbackPlayer.MGAP_KnockbackPlayer_C.OnSync_82C5686D4876B2C2A38C60A988269076 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnMoveInput_BD44596C4D04BB5307DE37BA08EDD334(); // Function MGAP_KnockbackPlayer.MGAP_KnockbackPlayer_C.OnMoveInput_BD44596C4D04BB5307DE37BA08EDD334 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnFinished_25C75EE54E1F7860E501DBB6D251EF68(); // Function MGAP_KnockbackPlayer.MGAP_KnockbackPlayer_C.OnFinished_25C75EE54E1F7860E501DBB6D251EF68 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function MGAP_KnockbackPlayer.MGAP_KnockbackPlayer_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void DoEndAbility(); // Function MGAP_KnockbackPlayer.MGAP_KnockbackPlayer_C.DoEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void StopMontage(); // Function MGAP_KnockbackPlayer.MGAP_KnockbackPlayer_C.StopMontage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGAP_KnockbackPlayer(int32_t EntryPoint); // Function MGAP_KnockbackPlayer.MGAP_KnockbackPlayer_C.ExecuteUbergraph_MGAP_KnockbackPlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

