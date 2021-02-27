// BlueprintGeneratedClass MGAP_Anomalyst_FireGrantsAshed.MGAP_Anomalyst_FireGrantsAshed_C
// Size: 0x4d0 (Inherited: 0x4b8)
struct UMGAP_Anomalyst_FireGrantsAshed_C : UMadGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct AMadBaseCharacter* Target; // 0x4c0(0x08)
	struct AController* Instigator; // 0x4c8(0x08)

	void K2_OnEndAbility(bool bWasCancelled); // Function MGAP_Anomalyst_FireGrantsAshed.MGAP_Anomalyst_FireGrantsAshed_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void K2_ActivateAbility(); // Function MGAP_Anomalyst_FireGrantsAshed.MGAP_Anomalyst_FireGrantsAshed_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGAP_Anomalyst_FireGrantsAshed(int32_t EntryPoint); // Function MGAP_Anomalyst_FireGrantsAshed.MGAP_Anomalyst_FireGrantsAshed_C.ExecuteUbergraph_MGAP_Anomalyst_FireGrantsAshed // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

