// BlueprintGeneratedClass MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C
// Size: 0x510 (Inherited: 0x4b8)
struct UMGAP_DotStatus_OnPlayer_C : UMadGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct APawn* Victim; // 0x4c0(0x08)
	float TickPeriod; // 0x4c8(0x04)
	struct FGameplayTag StatusTag; // 0x4cc(0x08)
	char UnknownData_4D4[0x4]; // 0x4d4(0x04)
	struct UGameplayEffect* GameplayEffectClass; // 0x4d8(0x08)
	struct UDamageType* DamageTypeClass; // 0x4e0(0x08)
	struct APawn* InstigatorPawn; // 0x4e8(0x08)
	struct AController* InstigatorController; // 0x4f0(0x08)
	float CustomDamage; // 0x4f8(0x04)
	char UnknownData_4FC[0x4]; // 0x4fc(0x04)
	struct FTimerHandle TimerHandle; // 0x500(0x08)
	struct UMadTutorialSequence* TutorialClass; // 0x508(0x08)

	void AddTutorialFact(); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.AddTutorialFact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void GetTutorialFact(bool OutBool); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.GetTutorialFact // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a35c70
	void GetStacks(int32_t Stacks); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.GetStacks // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a35c70
	void ApplyDamage(); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.ApplyDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void GetGameplayEffectClass(struct UGameplayEffect* GameplayEffect); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.GetGameplayEffectClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a35c70
	void CalculateDamagePerStack(struct AActor* Instigator, float Damage); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.CalculateDamagePerStack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void SetVictim(); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.SetVictim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Removed_4489BB7B497A5B32BF35E9BE26ACD572(); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.Removed_4489BB7B497A5B32BF35E9BE26ACD572 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnFailed_9EFBE4F0481C38A247CC07B1B6A8BA52(); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.OnFailed_9EFBE4F0481C38A247CC07B1B6A8BA52 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnSuccess_9EFBE4F0481C38A247CC07B1B6A8BA52(); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.OnSuccess_9EFBE4F0481C38A247CC07B1B6A8BA52 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void StartStatus(); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.StartStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnStatusStart(); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.OnStatusStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnDamageApplied(); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.OnDamageApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnEndAbility(bool bWasCancelled); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void K2_ActivateAbility(); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void ShowTutorialHint(); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.ShowTutorialHint // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void PreApplyDamage(); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.PreApplyDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGAP_DotStatus_OnPlayer(int32_t EntryPoint); // Function MGAP_DotStatus_OnPlayer.MGAP_DotStatus_OnPlayer_C.ExecuteUbergraph_MGAP_DotStatus_OnPlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

