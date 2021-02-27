// BlueprintGeneratedClass MGAP_PhantomStabbers_ShardCut.MGAP_PhantomStabbers_ShardCut_C
// Size: 0x4c9 (Inherited: 0x4b8)
struct UMGAP_PhantomStabbers_ShardCut_C : UMadGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct AMadBaseCharacter* Instigator Player; // 0x4c0(0x08)
	char UnknownData_4C8_0 : 7; // 0x4c8(0x01)
	bool Damaged : 1; // 0x4c8(0x01)

	void K2_OnEndAbility(bool bWasCancelled); // Function MGAP_PhantomStabbers_ShardCut.MGAP_PhantomStabbers_ShardCut_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void K2_ActivateAbility(); // Function MGAP_PhantomStabbers_ShardCut.MGAP_PhantomStabbers_ShardCut_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void Check for Damage(struct FTakeHitInfo TakeHitInfo); // Function MGAP_PhantomStabbers_ShardCut.MGAP_PhantomStabbers_ShardCut_C.Check for Damage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGAP_PhantomStabbers_ShardCut(int32_t EntryPoint); // Function MGAP_PhantomStabbers_ShardCut.MGAP_PhantomStabbers_ShardCut_C.ExecuteUbergraph_MGAP_PhantomStabbers_ShardCut // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

