// BlueprintGeneratedClass CC_TrapMine_Charges.CC_TrapMine_Charges_C
// Size: 0x28 (Inherited: 0x28)
struct UCC_TrapMine_Charges_C : UMadSkillDataObject {

	float GetCalculatedDamage(struct AMadBaseCharacter* MadInstigatorCharacter); // Function CC_TrapMine_Charges.CC_TrapMine_Charges_C.GetCalculatedDamage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
	void ResetSkillCharges(struct AMadBaseCharacter* MadInstigatorCharacter); // Function CC_TrapMine_Charges.CC_TrapMine_Charges_C.ResetSkillCharges // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
	bool IsSkillWithCharges(struct AMadBaseCharacter* MadInstigatorCharacter, int32_t OutCurrentCharges, int32_t OutMaxCharges); // Function CC_TrapMine_Charges.CC_TrapMine_Charges_C.IsSkillWithCharges // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
	struct FText GetSkillBarText(struct AMadBaseCharacter* MadInstigatorCharacter); // Function CC_TrapMine_Charges.CC_TrapMine_Charges_C.GetSkillBarText // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
};

