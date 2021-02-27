// BlueprintGeneratedClass MGAP_Assault_RevivePlayer.MGAP_Assault_RevivePlayer_C
// Size: 0x4c4 (Inherited: 0x4b8)
struct UMGAP_Assault_RevivePlayer_C : UMadGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	float ResurectionChance; // 0x4c0(0x04)

	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData payload); // Function MGAP_Assault_RevivePlayer.MGAP_Assault_RevivePlayer_C.K2_ShouldAbilityRespondToEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function MGAP_Assault_RevivePlayer.MGAP_Assault_RevivePlayer_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGAP_Assault_RevivePlayer(int32_t EntryPoint); // Function MGAP_Assault_RevivePlayer.MGAP_Assault_RevivePlayer_C.ExecuteUbergraph_MGAP_Assault_RevivePlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

