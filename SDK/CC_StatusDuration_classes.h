// BlueprintGeneratedClass CC_StatusDuration.CC_StatusDuration_C
// Size: 0x50 (Inherited: 0x40)
struct UCC_StatusDuration_C : UMadGameplayModMagnitudeCalculation {
	float MaxMultFromStatusPower; // 0x40(0x04)
	float ShortestDurationAllowed; // 0x44(0x04)
	struct FName StatusPowerFactorRow; // 0x48(0x08)

	void GetStatusPowerFactor(float Multiplier); // Function CC_StatusDuration.CC_StatusDuration_C.GetStatusPowerFactor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
	void GetDurationMultipliers(struct FGameplayEffectSpec Spec, float Magnitude); // Function CC_StatusDuration.CC_StatusDuration_C.GetDurationMultipliers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
	float CalculateBaseMagnitude(struct FGameplayEffectSpec Spec); // Function CC_StatusDuration.CC_StatusDuration_C.CalculateBaseMagnitude // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
	void GetStatusBaseDuration(struct FGameplayEffectSpec Spec, float DURATION); // Function CC_StatusDuration.CC_StatusDuration_C.GetStatusBaseDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
	void CalculateDiminishingReturn(struct FGameplayEffectSpec Spec, float Multiplier); // Function CC_StatusDuration.CC_StatusDuration_C.CalculateDiminishingReturn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
};

