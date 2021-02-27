// BlueprintGeneratedClass MGAP_Disease_OnPlayer.MGAP_Disease_OnPlayer_C
// Size: 0x518 (Inherited: 0x510)
struct UMGAP_Disease_OnPlayer_C : UMGAP_DotStatus_OnPlayer_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)

	void GetTutorialFact(bool OutBool); // Function MGAP_Disease_OnPlayer.MGAP_Disease_OnPlayer_C.GetTutorialFact // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a35c70
	void ApplyGameplayEffect(struct APawn* Instigator, float Magnitude, bool Applied); // Function MGAP_Disease_OnPlayer.MGAP_Disease_OnPlayer_C.ApplyGameplayEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void CalculateDamagePerStack(struct AActor* Instigator, float Damage); // Function MGAP_Disease_OnPlayer.MGAP_Disease_OnPlayer_C.CalculateDamagePerStack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void AddTutorialFact(); // Function MGAP_Disease_OnPlayer.MGAP_Disease_OnPlayer_C.AddTutorialFact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGAP_Disease_OnPlayer(int32_t EntryPoint); // Function MGAP_Disease_OnPlayer.MGAP_Disease_OnPlayer_C.ExecuteUbergraph_MGAP_Disease_OnPlayer // (Final|UbergraphFunction) // @ game+0x1a35c70
};

