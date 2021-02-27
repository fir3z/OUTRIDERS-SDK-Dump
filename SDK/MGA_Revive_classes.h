// BlueprintGeneratedClass MGA_Revive.MGA_Revive_C
// Size: 0x50a (Inherited: 0x4b8)
struct UMGA_Revive_C : UMadGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct AMadPlayerCharacter* Instigator; // 0x4c0(0x08)
	struct AMadPlayerCharacter* DyingChar; // 0x4c8(0x08)
	char UnknownData_4D0_0 : 7; // 0x4d0(0x01)
	bool SelfRevive : 1; // 0x4d0(0x01)
	char UnknownData_4D1[0x3]; // 0x4d1(0x03)
	struct FActiveGameplayEffectHandle ReviveEffect; // 0x4d4(0x08)
	char UnknownData_4DC[0x4]; // 0x4dc(0x04)
	struct UAnimMontage* MontageToPlay; // 0x4e0(0x08)
	struct FActiveGameplayEffectHandle Reviving; // 0x4e8(0x08)
	struct UMadAbilityTask_PlayMontageAndWaitNotifyName* Montage; // 0x4f0(0x08)
	char UnknownData_4F8_0 : 7; // 0x4f8(0x01)
	bool bIsInterrupted : 1; // 0x4f8(0x01)
	char UnknownData_4F9_0 : 7; // 0x4f9(0x01)
	bool bIsUserCancelled : 1; // 0x4f9(0x01)
	char UnknownData_4FA[0x6]; // 0x4fa(0x06)
	struct UAbilityTask_WaitDelay* DelayTask; // 0x500(0x08)
	char UnknownData_508_0 : 7; // 0x508(0x01)
	bool bIsSuccess : 1; // 0x508(0x01)
	char UnknownData_509_0 : 7; // 0x509(0x01)
	bool Mod_RestoreFullHP : 1; // 0x509(0x01)

	void HealRevived(); // Function MGA_Revive.MGA_Revive_C.HealRevived // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void CalculateHealth(float Health); // Function MGA_Revive.MGA_Revive_C.CalculateHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a35c70
	void MontageSelection(); // Function MGA_Revive.MGA_Revive_C.MontageSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void SetInstigatorAndTarget(struct FGameplayEventData GameplayEventData); // Function MGA_Revive.MGA_Revive_C.SetInstigatorAndTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void SetWeaponVisibility(bool bShow?); // Function MGA_Revive.MGA_Revive_C.SetWeaponVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void HealForCaster(); // Function MGA_Revive.MGA_Revive_C.HealForCaster // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyEnd_BF4D9AB74B88EA33B997A3814A589F88(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnNotifyEnd_BF4D9AB74B88EA33B997A3814A589F88 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyBegin_BF4D9AB74B88EA33B997A3814A589F88(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnNotifyBegin_BF4D9AB74B88EA33B997A3814A589F88 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCancelled_BF4D9AB74B88EA33B997A3814A589F88(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnCancelled_BF4D9AB74B88EA33B997A3814A589F88 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInterrupted_BF4D9AB74B88EA33B997A3814A589F88(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnInterrupted_BF4D9AB74B88EA33B997A3814A589F88 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnComplete_BF4D9AB74B88EA33B997A3814A589F88(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnComplete_BF4D9AB74B88EA33B997A3814A589F88 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void EventReceived_CD3456CF407A6F9B52237DA45F156649(struct FGameplayEventData payload); // Function MGA_Revive.MGA_Revive_C.EventReceived_CD3456CF407A6F9B52237DA45F156649 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyEnd_58C71BF24DFB43CE6917708BEDE626D2(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnNotifyEnd_58C71BF24DFB43CE6917708BEDE626D2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyBegin_58C71BF24DFB43CE6917708BEDE626D2(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnNotifyBegin_58C71BF24DFB43CE6917708BEDE626D2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCancelled_58C71BF24DFB43CE6917708BEDE626D2(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnCancelled_58C71BF24DFB43CE6917708BEDE626D2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInterrupted_58C71BF24DFB43CE6917708BEDE626D2(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnInterrupted_58C71BF24DFB43CE6917708BEDE626D2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnComplete_58C71BF24DFB43CE6917708BEDE626D2(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnComplete_58C71BF24DFB43CE6917708BEDE626D2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyEnd_E458889540E89BFBB91B7290B49CD9A3(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnNotifyEnd_E458889540E89BFBB91B7290B49CD9A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyBegin_E458889540E89BFBB91B7290B49CD9A3(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnNotifyBegin_E458889540E89BFBB91B7290B49CD9A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCancelled_E458889540E89BFBB91B7290B49CD9A3(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnCancelled_E458889540E89BFBB91B7290B49CD9A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInterrupted_E458889540E89BFBB91B7290B49CD9A3(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnInterrupted_E458889540E89BFBB91B7290B49CD9A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnComplete_E458889540E89BFBB91B7290B49CD9A3(struct FName NotifyName); // Function MGA_Revive.MGA_Revive_C.OnComplete_E458889540E89BFBB91B7290B49CD9A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnEndAbility(bool bWasCancelled); // Function MGA_Revive.MGA_Revive_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void Play Revive Montage(); // Function MGA_Revive.MGA_Revive_C.Play Revive Montage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void StartReviving(); // Function MGA_Revive.MGA_Revive_C.StartReviving // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void CompleteReviving(); // Function MGA_Revive.MGA_Revive_C.CompleteReviving // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function MGA_Revive.MGA_Revive_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void Revive(); // Function MGA_Revive.MGA_Revive_C.Revive // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGA_Revive(int32_t EntryPoint); // Function MGA_Revive.MGA_Revive_C.ExecuteUbergraph_MGA_Revive // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

