// BlueprintGeneratedClass ThermalBomb_Counter.ThermalBomb_Counter_C
// Size: 0x28 (Inherited: 0x28)
struct UThermalBomb_Counter_C : UMadSkillDataObject {

	float GetPrimaryExtraData(struct AMadBaseCharacter* MadInstigatorCharacter, int32_t ItemLevel); // Function ThermalBomb_Counter.ThermalBomb_Counter_C.GetPrimaryExtraData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
	float GetCalculatedDamage(struct AMadBaseCharacter* MadInstigatorCharacter); // Function ThermalBomb_Counter.ThermalBomb_Counter_C.GetCalculatedDamage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
	void ResetSkillCharges(struct AMadBaseCharacter* MadInstigatorCharacter); // Function ThermalBomb_Counter.ThermalBomb_Counter_C.ResetSkillCharges // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
	bool IsSkillWithCharges(struct AMadBaseCharacter* MadInstigatorCharacter, int32_t OutCurrentCharges, int32_t OutMaxCharges); // Function ThermalBomb_Counter.ThermalBomb_Counter_C.IsSkillWithCharges // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
	struct FText GetSkillBarText(struct AMadBaseCharacter* MadInstigatorCharacter); // Function ThermalBomb_Counter.ThermalBomb_Counter_C.GetSkillBarText // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
};

