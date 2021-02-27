// BlueprintGeneratedClass MGA_ReflectBullets.MGA_ReflectBullets_C
// Size: 0x514 (Inherited: 0x4b8)
struct UMGA_ReflectBullets_C : UMadGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct AMadPlayerCharacter* Player; // 0x4c0(0x08)
	struct ABP_ReflectBullets_Effects_C* Spawned Barrier; // 0x4c8(0x08)
	struct AActor* Spawned Barrier Class; // 0x4d0(0x08)
	struct UAnimMontage* CastingMontage; // 0x4d8(0x08)
	struct FActiveGameplayEffectHandle Block Weapon Usage MGE; // 0x4e0(0x08)
	struct FActiveGameplayEffectHandle Reflect Bullets Base Tags MGE; // 0x4e8(0x08)
	struct FName CastinStartSection; // 0x4f0(0x08)
	struct UMadAbilityTask_PlayMontageAndWaitNotifyName* Montage Task; // 0x4f8(0x08)
	char UnknownData_500_0 : 7; // 0x500(0x01)
	bool bEndCasting : 1; // 0x500(0x01)
	char UnknownData_501[0x3]; // 0x501(0x03)
	struct FActiveGameplayEffectHandle BlockSkills; // 0x504(0x08)
	struct FActiveGameplayEffectHandle Block Reactions Al; // 0x50c(0x08)

	void Find Healthiest(struct FGameplayAbilityTargetDataHandle TargetData); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Find Healthiest // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Force Destroy Shield(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Force Destroy Shield // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Check if Player in Cover(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Check if Player in Cover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void PlayScreenShake(struct UCameraShake* Shake); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.PlayScreenShake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void PlayForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.PlayForceFeedback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Get Owner Player(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Get Owner Player // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Grant Melee Impulse Ability(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Grant Melee Impulse Ability // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Removed_1FC928D443DBC671DAA8DA92959AB058(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Removed_1FC928D443DBC671DAA8DA92959AB058 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Added_28AB51D7439A0B5045793FBCB1BAA377(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Added_28AB51D7439A0B5045793FBCB1BAA377 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnSync_D43E7EE44E97D912A25606B3E4124CAD(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.OnSync_D43E7EE44E97D912A25606B3E4124CAD // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnFinished_AF984AD44F4B7203FC6C2682C41BE91C(bool bTimedOut, float TimeWaited); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.OnFinished_AF984AD44F4B7203FC6C2682C41BE91C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnSync_3AA7E6EF406A8C34E5D8818933F31F73(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.OnSync_3AA7E6EF406A8C34E5D8818933F31F73 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyEnd_0B75D80E4AAF13C83D240B8CC6D8B31A(struct FName NotifyName); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.OnNotifyEnd_0B75D80E4AAF13C83D240B8CC6D8B31A // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyBegin_0B75D80E4AAF13C83D240B8CC6D8B31A(struct FName NotifyName); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.OnNotifyBegin_0B75D80E4AAF13C83D240B8CC6D8B31A // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCancelled_0B75D80E4AAF13C83D240B8CC6D8B31A(struct FName NotifyName); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.OnCancelled_0B75D80E4AAF13C83D240B8CC6D8B31A // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInterrupted_0B75D80E4AAF13C83D240B8CC6D8B31A(struct FName NotifyName); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.OnInterrupted_0B75D80E4AAF13C83D240B8CC6D8B31A // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnComplete_0B75D80E4AAF13C83D240B8CC6D8B31A(struct FName NotifyName); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.OnComplete_0B75D80E4AAF13C83D240B8CC6D8B31A // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyEnd_B39CAA314779A49ACF27B5B574306DDF(struct FName NotifyName); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.OnNotifyEnd_B39CAA314779A49ACF27B5B574306DDF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyBegin_B39CAA314779A49ACF27B5B574306DDF(struct FName NotifyName); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.OnNotifyBegin_B39CAA314779A49ACF27B5B574306DDF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCancelled_B39CAA314779A49ACF27B5B574306DDF(struct FName NotifyName); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.OnCancelled_B39CAA314779A49ACF27B5B574306DDF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInterrupted_B39CAA314779A49ACF27B5B574306DDF(struct FName NotifyName); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.OnInterrupted_B39CAA314779A49ACF27B5B574306DDF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnComplete_B39CAA314779A49ACF27B5B574306DDF(struct FName NotifyName); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.OnComplete_B39CAA314779A49ACF27B5B574306DDF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void DidNotSpawn_C03E741E4790AAF7F9A81997F3735FF9(struct AActor* SpawnedActor); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.DidNotSpawn_C03E741E4790AAF7F9A81997F3735FF9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Success_C03E741E4790AAF7F9A81997F3735FF9(struct AActor* SpawnedActor); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Success_C03E741E4790AAF7F9A81997F3735FF9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void InitialData_D09F89B644ABC78B27D2EF917FB64F7D(struct FGameplayAbilityTargetDataHandle Data); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.InitialData_D09F89B644ABC78B27D2EF917FB64F7D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Cancelled_D09F89B644ABC78B27D2EF917FB64F7D(struct FGameplayAbilityTargetDataHandle Data); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Cancelled_D09F89B644ABC78B27D2EF917FB64F7D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ValidData_D09F89B644ABC78B27D2EF917FB64F7D(struct FGameplayAbilityTargetDataHandle Data); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.ValidData_D09F89B644ABC78B27D2EF917FB64F7D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Check for DBNO State(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Check for DBNO State // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Check Auto Reflect Mastery(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Check Auto Reflect Mastery // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_ActivateAbility(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void Auto Reflect Ability End(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Auto Reflect Ability End // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Custom End Ability(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Custom End Ability // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Destroy Bullets(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Destroy Bullets // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnEndAbility(bool bWasCancelled); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void Reflect Shield Point Damage(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct UDamageType* DamageType, struct AActor* DamageCauser); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Reflect Shield Point Damage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Play End Cast Montage(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Play End Cast Montage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void KillCastStartTask(struct UMadAbilityTask_PlayMontageAndWaitNotifyName* Task); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.KillCastStartTask // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Spawn and Attach Barrier(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Spawn and Attach Barrier // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void End Skill Based On Mastery(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.End Skill Based On Mastery // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void PlayMontage(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.PlayMontage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Continue Default Targeting(struct FGameplayAbilityTargetDataHandle TargetData); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Continue Default Targeting // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Target(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.Target // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void StartCastingDeactivateBarrier(); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.StartCastingDeactivateBarrier // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGA_ReflectBullets(int32_t EntryPoint); // Function MGA_ReflectBullets.MGA_ReflectBullets_C.ExecuteUbergraph_MGA_ReflectBullets // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

