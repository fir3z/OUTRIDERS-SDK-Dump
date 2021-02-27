// BlueprintGeneratedClass MGA_MeleeHit.MGA_MeleeHit_C
// Size: 0x584 (Inherited: 0x4b8)
struct UMGA_MeleeHit_C : UMadGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UAnimMontage* MeleeHitMontage; // 0x4c0(0x08)
	struct AMadPlayerCharacter* Player; // 0x4c8(0x08)
	struct AMadBaseCharacter* Enemy; // 0x4d0(0x08)
	char UnknownData_4D8_0 : 7; // 0x4d8(0x01)
	bool MovementBlocked : 1; // 0x4d8(0x01)
	char UnknownData_4D9[0x3]; // 0x4d9(0x03)
	struct FName MontageStartSection; // 0x4dc(0x08)
	char UnknownData_4E4[0x4]; // 0x4e4(0x04)
	struct FHitResult TraceHitResult; // 0x4e8(0x90)
	float MeleeDamage; // 0x578(0x04)
	struct FActiveGameplayEffectHandle BlockReactionAll; // 0x57c(0x08)

	void GetTraceParams(struct FVector TraceStart, struct FVector TraceEnd); // Function MGA_MeleeHit.MGA_MeleeHit_C.GetTraceParams // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void InitialData_A3BE08174877D3B3F9D2AE8C7EA82EA3(struct FGameplayAbilityTargetDataHandle Data); // Function MGA_MeleeHit.MGA_MeleeHit_C.InitialData_A3BE08174877D3B3F9D2AE8C7EA82EA3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Cancelled_A3BE08174877D3B3F9D2AE8C7EA82EA3(struct FGameplayAbilityTargetDataHandle Data); // Function MGA_MeleeHit.MGA_MeleeHit_C.Cancelled_A3BE08174877D3B3F9D2AE8C7EA82EA3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ValidData_A3BE08174877D3B3F9D2AE8C7EA82EA3(struct FGameplayAbilityTargetDataHandle Data); // Function MGA_MeleeHit.MGA_MeleeHit_C.ValidData_A3BE08174877D3B3F9D2AE8C7EA82EA3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyEnd_671D967E417CD62EABA5F996ADD277C5(struct FName NotifyName); // Function MGA_MeleeHit.MGA_MeleeHit_C.OnNotifyEnd_671D967E417CD62EABA5F996ADD277C5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyBegin_671D967E417CD62EABA5F996ADD277C5(struct FName NotifyName); // Function MGA_MeleeHit.MGA_MeleeHit_C.OnNotifyBegin_671D967E417CD62EABA5F996ADD277C5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCancelled_671D967E417CD62EABA5F996ADD277C5(struct FName NotifyName); // Function MGA_MeleeHit.MGA_MeleeHit_C.OnCancelled_671D967E417CD62EABA5F996ADD277C5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInterrupted_671D967E417CD62EABA5F996ADD277C5(struct FName NotifyName); // Function MGA_MeleeHit.MGA_MeleeHit_C.OnInterrupted_671D967E417CD62EABA5F996ADD277C5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnComplete_671D967E417CD62EABA5F996ADD277C5(struct FName NotifyName); // Function MGA_MeleeHit.MGA_MeleeHit_C.OnComplete_671D967E417CD62EABA5F996ADD277C5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void InitialData_5AB5903D473348BDF2C28F89DE997482(struct FGameplayAbilityTargetDataHandle Data); // Function MGA_MeleeHit.MGA_MeleeHit_C.InitialData_5AB5903D473348BDF2C28F89DE997482 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Cancelled_5AB5903D473348BDF2C28F89DE997482(struct FGameplayAbilityTargetDataHandle Data); // Function MGA_MeleeHit.MGA_MeleeHit_C.Cancelled_5AB5903D473348BDF2C28F89DE997482 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ValidData_5AB5903D473348BDF2C28F89DE997482(struct FGameplayAbilityTargetDataHandle Data); // Function MGA_MeleeHit.MGA_MeleeHit_C.ValidData_5AB5903D473348BDF2C28F89DE997482 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnMoveInput_647872EB420B0AA98DC1908733B59D99(); // Function MGA_MeleeHit.MGA_MeleeHit_C.OnMoveInput_647872EB420B0AA98DC1908733B59D99 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void InitialData_AE7C86E34EB335078B81D0B866D5A58F(struct FGameplayAbilityTargetDataHandle Data); // Function MGA_MeleeHit.MGA_MeleeHit_C.InitialData_AE7C86E34EB335078B81D0B866D5A58F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Cancelled_AE7C86E34EB335078B81D0B866D5A58F(struct FGameplayAbilityTargetDataHandle Data); // Function MGA_MeleeHit.MGA_MeleeHit_C.Cancelled_AE7C86E34EB335078B81D0B866D5A58F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ValidData_AE7C86E34EB335078B81D0B866D5A58F(struct FGameplayAbilityTargetDataHandle Data); // Function MGA_MeleeHit.MGA_MeleeHit_C.ValidData_AE7C86E34EB335078B81D0B866D5A58F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void PlayMontage(); // Function MGA_MeleeHit.MGA_MeleeHit_C.PlayMontage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnEndAbility(bool bWasCancelled); // Function MGA_MeleeHit.MGA_MeleeHit_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void K2_ActivateAbility(); // Function MGA_MeleeHit.MGA_MeleeHit_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void bLockMovement(bool bBlock); // Function MGA_MeleeHit.MGA_MeleeHit_C.bLockMovement // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGA_MeleeHit(int32_t EntryPoint); // Function MGA_MeleeHit.MGA_MeleeHit_C.ExecuteUbergraph_MGA_MeleeHit // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

