// BlueprintGeneratedClass MGC_Disease.MGC_Disease_C
// Size: 0x570 (Inherited: 0x548)
struct AMGC_Disease_C : AMadGameplayCue {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x550(0x08)
	float PoisonAlphaCurve_Alpha_6942442442DCA2D28ACEA5B88A4B6515; // 0x558(0x04)
	enum class ETimelineDirection PoisonAlphaCurve__Direction_6942442442DCA2D28ACEA5B88A4B6515; // 0x55c(0x01)
	char UnknownData_55D[0x3]; // 0x55d(0x03)
	struct UTimelineComponent* PoisonAlphaCurve; // 0x560(0x08)
	struct ABaseCharacter* OwnerCharacter; // 0x568(0x08)

	void UpdateAndStartPoisonFX(); // Function MGC_Disease.MGC_Disease_C.UpdateAndStartPoisonFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function MGC_Disease.MGC_Disease_C.OnActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function MGC_Disease.MGC_Disease_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void PoisonAlphaCurve__FinishedFunc(); // Function MGC_Disease.MGC_Disease_C.PoisonAlphaCurve__FinishedFunc // (BlueprintEvent) // @ game+0x1a35c70
	void PoisonAlphaCurve__UpdateFunc(); // Function MGC_Disease.MGC_Disease_C.PoisonAlphaCurve__UpdateFunc // (BlueprintEvent) // @ game+0x1a35c70
	void DisableMaterial(); // Function MGC_Disease.MGC_Disease_C.DisableMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void EnableMaterial(); // Function MGC_Disease.MGC_Disease_C.EnableMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGC_Disease(int32_t EntryPoint); // Function MGC_Disease.MGC_Disease_C.ExecuteUbergraph_MGC_Disease // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

