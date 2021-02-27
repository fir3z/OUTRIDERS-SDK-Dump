// BlueprintGeneratedClass MGC_Frozen.MGC_Frozen_C
// Size: 0x5a0 (Inherited: 0x588)
struct AMGC_Frozen_C : AMGC_Freezing {
	struct UParticleSystemComponent* FrozenFX; // 0x588(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x590(0x08)
	struct ABaseCharacter* OwnerCharacter; // 0x598(0x08)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function MGC_Frozen.MGC_Frozen_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void UpdateAndStartFrozenFX(); // Function MGC_Frozen.MGC_Frozen_C.UpdateAndStartFrozenFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function MGC_Frozen.MGC_Frozen_C.OnActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
};

