// BlueprintGeneratedClass MGAP_Bleed_OnPlayer.MGAP_Bleed_OnPlayer_C
// Size: 0x518 (Inherited: 0x510)
struct UMGAP_Bleed_OnPlayer_C : UMGAP_DotStatus_OnPlayer_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)

	void GetTutorialFact(bool OutBool); // Function MGAP_Bleed_OnPlayer.MGAP_Bleed_OnPlayer_C.GetTutorialFact // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a35c70
	void CalculateDamagePerStack(struct AActor* Instigator, float Damage); // Function MGAP_Bleed_OnPlayer.MGAP_Bleed_OnPlayer_C.CalculateDamagePerStack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnDamageApplied(); // Function MGAP_Bleed_OnPlayer.MGAP_Bleed_OnPlayer_C.OnDamageApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnStatusStart(); // Function MGAP_Bleed_OnPlayer.MGAP_Bleed_OnPlayer_C.OnStatusStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnEndAbility(bool bWasCancelled); // Function MGAP_Bleed_OnPlayer.MGAP_Bleed_OnPlayer_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void AddTutorialFact(); // Function MGAP_Bleed_OnPlayer.MGAP_Bleed_OnPlayer_C.AddTutorialFact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGAP_Bleed_OnPlayer(int32_t EntryPoint); // Function MGAP_Bleed_OnPlayer.MGAP_Bleed_OnPlayer_C.ExecuteUbergraph_MGAP_Bleed_OnPlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

