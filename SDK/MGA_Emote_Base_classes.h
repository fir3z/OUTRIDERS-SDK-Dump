// BlueprintGeneratedClass MGA_Emote_Base.MGA_Emote_Base_C
// Size: 0x558 (Inherited: 0x4b8)
struct UMGA_Emote_Base_C : UMadGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct AMadPlayerCharacter* Player; // 0x4c0(0x08)
	struct FEmoteAbilityData EmoteData; // 0x4c8(0x60)
	struct FRotator TargetLookAtRotation; // 0x528(0x0c)
	char UnknownData_534[0x4]; // 0x534(0x04)
	struct UAnimMontage* EmoteMontage; // 0x538(0x08)
	char UnknownData_540_0 : 7; // 0x540(0x01)
	bool IsEnding : 1; // 0x540(0x01)
	char UnknownData_541[0x7]; // 0x541(0x07)
	struct UMadAbilityTask_PlayMontageAndWaitNotifyName* CurrentMontageTask; // 0x548(0x08)
	struct FActiveGameplayEffectHandle BlockSwapWeaponsHandle; // 0x550(0x08)

	void CanInterrupt(bool CanInterrupt); // Function MGA_Emote_Base.MGA_Emote_Base_C.CanInterrupt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a35c70
	void ShouldPlayExitSection(struct UAnimMontage* InMontage, bool ShouldPlay, struct FName SectionName); // Function MGA_Emote_Base.MGA_Emote_Base_C.ShouldPlayExitSection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ApplyEventData(struct FGameplayEventData EventData); // Function MGA_Emote_Base.MGA_Emote_Base_C.ApplyEventData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void HandleLookAt(); // Function MGA_Emote_Base.MGA_Emote_Base_C.HandleLookAt // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void SetIgnoreInput(bool SetIgnoreInput); // Function MGA_Emote_Base.MGA_Emote_Base_C.SetIgnoreInput // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function MGA_Emote_Base.MGA_Emote_Base_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
	bool CanActivateEmote(); // Function MGA_Emote_Base.MGA_Emote_Base_C.CanActivateEmote // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
	void OnNotifyEnd_BF8520E9417C6301E99DE8A72C68E460(struct FName NotifyName); // Function MGA_Emote_Base.MGA_Emote_Base_C.OnNotifyEnd_BF8520E9417C6301E99DE8A72C68E460 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyBegin_BF8520E9417C6301E99DE8A72C68E460(struct FName NotifyName); // Function MGA_Emote_Base.MGA_Emote_Base_C.OnNotifyBegin_BF8520E9417C6301E99DE8A72C68E460 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCancelled_BF8520E9417C6301E99DE8A72C68E460(struct FName NotifyName); // Function MGA_Emote_Base.MGA_Emote_Base_C.OnCancelled_BF8520E9417C6301E99DE8A72C68E460 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInterrupted_BF8520E9417C6301E99DE8A72C68E460(struct FName NotifyName); // Function MGA_Emote_Base.MGA_Emote_Base_C.OnInterrupted_BF8520E9417C6301E99DE8A72C68E460 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnComplete_BF8520E9417C6301E99DE8A72C68E460(struct FName NotifyName); // Function MGA_Emote_Base.MGA_Emote_Base_C.OnComplete_BF8520E9417C6301E99DE8A72C68E460 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnMoveInput_968205CD448A17D8875C648AF9445889(); // Function MGA_Emote_Base.MGA_Emote_Base_C.OnMoveInput_968205CD448A17D8875C648AF9445889 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnLoaded_0AB6750C48A40DF12D892A82B97F2472(struct UObject* Loaded); // Function MGA_Emote_Base.MGA_Emote_Base_C.OnLoaded_0AB6750C48A40DF12D892A82B97F2472 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ShowWeapon(bool bShow); // Function MGA_Emote_Base.MGA_Emote_Base_C.ShowWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Cleanup(); // Function MGA_Emote_Base.MGA_Emote_Base_C.Cleanup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnEndAbility(bool bWasCancelled); // Function MGA_Emote_Base.MGA_Emote_Base_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void BindDelegates(); // Function MGA_Emote_Base.MGA_Emote_Base_C.BindDelegates // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void UnbindDelegates(); // Function MGA_Emote_Base.MGA_Emote_Base_C.UnbindDelegates // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void EmoteInterrupted(bool bInterruptedBySkill); // Function MGA_Emote_Base.MGA_Emote_Base_C.EmoteInterrupted // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnKilled_Interrupt(struct ABaseCharacter* character, struct FTakeHitInfo TakeHitInfo); // Function MGA_Emote_Base.MGA_Emote_Base_C.OnKilled_Interrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnWeaponFired_Interrupt(struct FHitResult Trace, struct TArray<struct ABaseCharacter*> EnemiesHit, enum class EHitMarkerType HitMarkerType); // Function MGA_Emote_Base.MGA_Emote_Base_C.OnWeaponFired_Interrupt // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnSkillActivated_Interrupted(struct UMadSkillData* ActivatedSkill); // Function MGA_Emote_Base.MGA_Emote_Base_C.OnSkillActivated_Interrupted // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCoverStatusChange_Interrupt(bool bInCover); // Function MGA_Emote_Base.MGA_Emote_Base_C.OnCoverStatusChange_Interrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void StartMontage(struct FName SectionName, struct UAnimMontage* Montage); // Function MGA_Emote_Base.MGA_Emote_Base_C.StartMontage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ApplyTags(); // Function MGA_Emote_Base.MGA_Emote_Base_C.ApplyTags // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void PrepareEmote(); // Function MGA_Emote_Base.MGA_Emote_Base_C.PrepareEmote // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function MGA_Emote_Base.MGA_Emote_Base_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void PlayExitSection(); // Function MGA_Emote_Base.MGA_Emote_Base_C.PlayExitSection // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnWantsToFireChanged_Interrupt(bool bWantsToFire); // Function MGA_Emote_Base.MGA_Emote_Base_C.OnWantsToFireChanged_Interrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnTargeting_Interrupt(bool bIsTargeting); // Function MGA_Emote_Base.MGA_Emote_Base_C.OnTargeting_Interrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnMoveAction_interrupt(enum class EPlayerMoveAction MoveAction); // Function MGA_Emote_Base.MGA_Emote_Base_C.OnMoveAction_interrupt // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGA_Emote_Base(int32_t EntryPoint); // Function MGA_Emote_Base.MGA_Emote_Base_C.ExecuteUbergraph_MGA_Emote_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

