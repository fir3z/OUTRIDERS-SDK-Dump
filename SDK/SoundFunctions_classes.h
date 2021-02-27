// BlueprintGeneratedClass SoundFunctions.SoundFunctions_C
// Size: 0x28 (Inherited: 0x28)
struct USoundFunctions_C : UBlueprintFunctionLibrary {

	void PlayUILoop(struct USoundBase* SoundToPlay, struct FString DebugMessage, struct UObject* __WorldContext, struct UAudioComponent* ComponentRef); // Function SoundFunctions.SoundFunctions_C.PlayUILoop // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void PopMix(struct USoundMix* MixToPop, struct UObject* __WorldContext); // Function SoundFunctions.SoundFunctions_C.PopMix // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void PushMix(struct USoundMix* MixToPush, struct UObject* __WorldContext); // Function SoundFunctions.SoundFunctions_C.PushMix // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void StopUILoop(struct UAudioComponent* AudioComponent, struct UObject* __WorldContext); // Function SoundFunctions.SoundFunctions_C.StopUILoop // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void PlayUISound(struct USoundBase* SoundToPlay, struct FString DebugMessage, struct UObject* __WorldContext, struct UAudioComponent* ComponentRef); // Function SoundFunctions.SoundFunctions_C.PlayUISound // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
};

