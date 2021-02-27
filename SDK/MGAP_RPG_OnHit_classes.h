// BlueprintGeneratedClass MGAP_RPG_OnHit.MGAP_RPG_OnHit_C
// Size: 0x4d8 (Inherited: 0x4b8)
struct UMGAP_RPG_OnHit_C : UMadGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct AMadPlayerCharacter* PlayerInstigator; // 0x4c0(0x08)
	struct AActor* Victim; // 0x4c8(0x08)
	float ArmorDebuffDuration; // 0x4d0(0x04)
	float ArmorMultiplier; // 0x4d4(0x04)

	void ApplyWeakness(); // Function MGAP_RPG_OnHit.MGAP_RPG_OnHit_C.ApplyWeakness // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ApplyFireMastery(); // Function MGAP_RPG_OnHit.MGAP_RPG_OnHit_C.ApplyFireMastery // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void SetVictim(); // Function MGAP_RPG_OnHit.MGAP_RPG_OnHit_C.SetVictim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void SetPlayerInstigator(struct AActor* NewParam); // Function MGAP_RPG_OnHit.MGAP_RPG_OnHit_C.SetPlayerInstigator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function MGAP_RPG_OnHit.MGAP_RPG_OnHit_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGAP_RPG_OnHit(int32_t EntryPoint); // Function MGAP_RPG_OnHit.MGAP_RPG_OnHit_C.ExecuteUbergraph_MGAP_RPG_OnHit // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

