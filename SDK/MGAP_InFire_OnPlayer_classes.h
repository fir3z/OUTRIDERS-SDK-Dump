// BlueprintGeneratedClass MGAP_InFire_OnPlayer.MGAP_InFire_OnPlayer_C
// Size: 0x520 (Inherited: 0x510)
struct UMGAP_InFire_OnPlayer_C : UMGAP_DotStatus_OnPlayer_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	int32_t Rolling; // 0x518(0x04)
	int32_t RollsRequired; // 0x51c(0x04)

	void SetRollsRequired(); // Function MGAP_InFire_OnPlayer.MGAP_InFire_OnPlayer_C.SetRollsRequired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void GetTutorialFact(bool OutBool); // Function MGAP_InFire_OnPlayer.MGAP_InFire_OnPlayer_C.GetTutorialFact // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a35c70
	void CalculateDamagePerStack(struct AActor* Instigator, float Damage); // Function MGAP_InFire_OnPlayer.MGAP_InFire_OnPlayer_C.CalculateDamagePerStack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Added_469F4F3D4B4E48F6B1DF1FBCE8E6187F(); // Function MGAP_InFire_OnPlayer.MGAP_InFire_OnPlayer_C.Added_469F4F3D4B4E48F6B1DF1FBCE8E6187F // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Removed_1592EA2D466154A7EDFC039D3E312763(); // Function MGAP_InFire_OnPlayer.MGAP_InFire_OnPlayer_C.Removed_1592EA2D466154A7EDFC039D3E312763 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnStatusStart(); // Function MGAP_InFire_OnPlayer.MGAP_InFire_OnPlayer_C.OnStatusStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void WaitForRoll(); // Function MGAP_InFire_OnPlayer.MGAP_InFire_OnPlayer_C.WaitForRoll // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void AddTutorialFact(); // Function MGAP_InFire_OnPlayer.MGAP_InFire_OnPlayer_C.AddTutorialFact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void WaitForRemove(); // Function MGAP_InFire_OnPlayer.MGAP_InFire_OnPlayer_C.WaitForRemove // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGAP_InFire_OnPlayer(int32_t EntryPoint); // Function MGAP_InFire_OnPlayer.MGAP_InFire_OnPlayer_C.ExecuteUbergraph_MGAP_InFire_OnPlayer // (Final|UbergraphFunction) // @ game+0x1a35c70
};

