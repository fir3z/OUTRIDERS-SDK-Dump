// BlueprintGeneratedClass Heatwave_SkillData.Heatwave_SkillData_C
// Size: 0x28 (Inherited: 0x28)
struct UHeatwave_SkillData_C : UMadSkillDataObject {

	void ResetSkillCharges(struct AMadBaseCharacter* MadInstigatorCharacter); // Function Heatwave_SkillData.Heatwave_SkillData_C.ResetSkillCharges // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
	bool IsSkillWithCharges(struct AMadBaseCharacter* MadInstigatorCharacter, int32_t OutCurrentCharges, int32_t OutMaxCharges); // Function Heatwave_SkillData.Heatwave_SkillData_C.IsSkillWithCharges // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
	struct FText GetSkillBarText(struct AMadBaseCharacter* MadInstigatorCharacter); // Function Heatwave_SkillData.Heatwave_SkillData_C.GetSkillBarText // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
	float GetCalculatedDamage(struct AMadBaseCharacter* MadInstigatorCharacter); // Function Heatwave_SkillData.Heatwave_SkillData_C.GetCalculatedDamage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
};

