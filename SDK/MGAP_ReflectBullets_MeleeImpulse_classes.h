// BlueprintGeneratedClass MGAP_ReflectBullets_MeleeImpulse.MGAP_ReflectBullets_MeleeImpulse_C
// Size: 0x4dc (Inherited: 0x4b8)
struct UMGAP_ReflectBullets_MeleeImpulse_C : UMadGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct AMadPlayerCharacter* Player; // 0x4c0(0x08)
	float Accumulated Damage; // 0x4c8(0x04)
	char UnknownData_4CC[0x4]; // 0x4cc(0x04)
	struct FTimerHandle Impulse Timer Handle; // 0x4d0(0x08)
	int32_t NumberofHits; // 0x4d8(0x04)

	void Calculate Final Damage(float OutFinalDamage); // Function MGAP_ReflectBullets_MeleeImpulse.MGAP_ReflectBullets_MeleeImpulse_C.Calculate Final Damage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Removed_6CE9C26B4378D594A38C9EB3B76781EF(); // Function MGAP_ReflectBullets_MeleeImpulse.MGAP_ReflectBullets_MeleeImpulse_C.Removed_6CE9C26B4378D594A38C9EB3B76781EF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void InitialData_30B7F26B46F324D5E4F7D0B3EE4D761E(struct FGameplayAbilityTargetDataHandle Data); // Function MGAP_ReflectBullets_MeleeImpulse.MGAP_ReflectBullets_MeleeImpulse_C.InitialData_30B7F26B46F324D5E4F7D0B3EE4D761E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Cancelled_30B7F26B46F324D5E4F7D0B3EE4D761E(struct FGameplayAbilityTargetDataHandle Data); // Function MGAP_ReflectBullets_MeleeImpulse.MGAP_ReflectBullets_MeleeImpulse_C.Cancelled_30B7F26B46F324D5E4F7D0B3EE4D761E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ValidData_30B7F26B46F324D5E4F7D0B3EE4D761E(struct FGameplayAbilityTargetDataHandle Data); // Function MGAP_ReflectBullets_MeleeImpulse.MGAP_ReflectBullets_MeleeImpulse_C.ValidData_30B7F26B46F324D5E4F7D0B3EE4D761E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_ActivateAbility(); // Function MGAP_ReflectBullets_MeleeImpulse.MGAP_ReflectBullets_MeleeImpulse_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnEndAbility(bool bWasCancelled); // Function MGAP_ReflectBullets_MeleeImpulse.MGAP_ReflectBullets_MeleeImpulse_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void Player Take Damage(struct FTakeHitInfo TakeHitInfo); // Function MGAP_ReflectBullets_MeleeImpulse.MGAP_ReflectBullets_MeleeImpulse_C.Player Take Damage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Apply Damage Impulse(); // Function MGAP_ReflectBullets_MeleeImpulse.MGAP_ReflectBullets_MeleeImpulse_C.Apply Damage Impulse // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGAP_ReflectBullets_MeleeImpulse(int32_t EntryPoint); // Function MGAP_ReflectBullets_MeleeImpulse.MGAP_ReflectBullets_MeleeImpulse_C.ExecuteUbergraph_MGAP_ReflectBullets_MeleeImpulse // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

