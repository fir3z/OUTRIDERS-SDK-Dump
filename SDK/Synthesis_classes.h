// Class Synthesis.ModularSynthPresetBank
// Size: 0x38 (Inherited: 0x28)
struct UModularSynthPresetBank : UObject {
	struct TArray<struct FModularSynthPresetBankEntry> Presets; // 0x28(0x10)
};

// Class Synthesis.ModularSynthLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModularSynthLibrary : UBlueprintFunctionLibrary {

	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset Preset, struct FString PresetName); // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0xf1e3e0
};

// Class Synthesis.ModularSynthComponent
// Size: 0xe40 (Inherited: 0x7a0)
struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x7a0(0x04)
	char UnknownData_7A4[0x69c]; // 0x7a4(0x69c)

	void SetSynthPreset(struct FModularSynthPreset SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf20950
	void SetSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0xf208d0
	void SetStereoDelayWetlevel(float DelayWetlevel); // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel // (Final|Native|Public|BlueprintCallable) // @ game+0xf20850
	void SetStereoDelayTime(float DelayTimeMsec); // Function Synthesis.ModularSynthComponent.SetStereoDelayTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf207d0
	void SetStereoDelayRatio(float DelayRatio); // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio // (Final|Native|Public|BlueprintCallable) // @ game+0xf20750
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode); // Function Synthesis.ModularSynthComponent.SetStereoDelayMode // (Final|Native|Public|BlueprintCallable) // @ game+0xf206d0
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xf20640
	void SetStereoDelayFeedback(float DelayFeedback); // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0xf205c0
	void SetSpread(float Spread); // Function Synthesis.ModularSynthComponent.SetSpread // (Final|Native|Public|BlueprintCallable) // @ game+0xf20540
	void SetReleaseTime(float ReleaseTimeMsec); // Function Synthesis.ModularSynthComponent.SetReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf204c0
	void SetPortamento(float Portamento); // Function Synthesis.ModularSynthComponent.SetPortamento // (Final|Native|Public|BlueprintCallable) // @ game+0xf20440
	void SetPitchBend(float PitchBend); // Function Synthesis.ModularSynthComponent.SetPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0xf203c0
	void SetPan(float Pan); // Function Synthesis.ModularSynthComponent.SetPan // (Final|Native|Public|BlueprintCallable) // @ game+0xf20340
	void SetOscType(int32_t OscIndex, enum class ESynth1OscType OscType); // Function Synthesis.ModularSynthComponent.SetOscType // (Final|Native|Public|BlueprintCallable) // @ game+0xf20280
	void SetOscSync(bool bIsSynced); // Function Synthesis.ModularSynthComponent.SetOscSync // (Final|Native|Public|BlueprintCallable) // @ game+0xf201f0
	void SetOscSemitones(int32_t OscIndex, float Semitones); // Function Synthesis.ModularSynthComponent.SetOscSemitones // (Final|Native|Public|BlueprintCallable) // @ game+0xf20120
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Function Synthesis.ModularSynthComponent.SetOscPulsewidth // (Final|Native|Public|BlueprintCallable) // @ game+0xf20050
	void SetOscOctave(int32_t OscIndex, float Octave); // Function Synthesis.ModularSynthComponent.SetOscOctave // (Final|Native|Public|BlueprintCallable) // @ game+0xf1ff80
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Function Synthesis.ModularSynthComponent.SetOscGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0xf1feb0
	void SetOscGain(int32_t OscIndex, float OscGain); // Function Synthesis.ModularSynthComponent.SetOscGain // (Final|Native|Public|BlueprintCallable) // @ game+0xf1fde0
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0xf1fd10
	void SetOscCents(int32_t OscIndex, float Cents); // Function Synthesis.ModularSynthComponent.SetOscCents // (Final|Native|Public|BlueprintCallable) // @ game+0xf1fc40
	void SetModEnvSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0xf1fbc0
	void SetModEnvReleaseTime(float Release); // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf1fb40
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvPatch // (Final|Native|Public|BlueprintCallable) // @ game+0xf1fac0
	void SetModEnvInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xf1fa30
	void SetModEnvDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetModEnvDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f9b0
	void SetModEnvDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f930
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f8b0
	void SetModEnvBiasInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f820
	void SetModEnvAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f7a0
	void SetLFOType(int32_t LFOIndex, enum class ESynthLFOType LFOType); // Function Synthesis.ModularSynthComponent.SetLFOType // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f6e0
	void SetLFOPatch(int32_t LFOIndex, enum class ESynthLFOPatchType LFOPatchType); // Function Synthesis.ModularSynthComponent.SetLFOPatch // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f620
	void SetLFOMode(int32_t LFOIndex, enum class ESynthLFOMode LFOMode); // Function Synthesis.ModularSynthComponent.SetLFOMode // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f560
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Function Synthesis.ModularSynthComponent.SetLFOGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f490
	void SetLFOGain(int32_t LFOIndex, float Gain); // Function Synthesis.ModularSynthComponent.SetLFOGain // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f3c0
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f2f0
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f220
	void SetGainDb(float GainDb); // Function Synthesis.ModularSynthComponent.SetGainDb // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f1a0
	void SetFilterType(enum class ESynthFilterType FilterType); // Function Synthesis.ModularSynthComponent.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f120
	void SetFilterQMod(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f0a0
	void SetFilterQ(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0xf1f020
	void SetFilterFrequencyMod(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0xf1efa0
	void SetFilterFrequency(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0xf1ef20
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm); // Function Synthesis.ModularSynthComponent.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0xf1eea0
	void SetEnableUnison(bool EnableUnison); // Function Synthesis.ModularSynthComponent.SetEnableUnison // (Final|Native|Public|BlueprintCallable) // @ game+0xf1ee10
	void SetEnableRetrigger(bool RetriggerEnabled); // Function Synthesis.ModularSynthComponent.SetEnableRetrigger // (Final|Native|Public|BlueprintCallable) // @ game+0xf1ed80
	void SetEnablePolyphony(bool bEnablePolyphony); // Function Synthesis.ModularSynthComponent.SetEnablePolyphony // (Final|Native|Public|BlueprintCallable) // @ game+0xf1ecf0
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled); // Function Synthesis.ModularSynthComponent.SetEnablePatch // (Final|Native|Public|BlueprintCallable) // @ game+0xf1ec20
	void SetEnableLegato(bool LegatoEnabled); // Function Synthesis.ModularSynthComponent.SetEnableLegato // (Final|Native|Public|BlueprintCallable) // @ game+0xf1eb90
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf1eb10
	void SetChorusFrequency(float Frequency); // Function Synthesis.ModularSynthComponent.SetChorusFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0xf1ea90
	void SetChorusFeedback(float Feedback); // Function Synthesis.ModularSynthComponent.SetChorusFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0xf1ea10
	void SetChorusEnabled(bool EnableChorus); // Function Synthesis.ModularSynthComponent.SetChorusEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xf1e980
	void SetChorusDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetChorusDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xf1e900
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf1e880
	void NoteOn(float Note, int32_t Velocity, float DURATION); // Function Synthesis.ModularSynthComponent.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0xf1e770
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Function Synthesis.ModularSynthComponent.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0xf1e660
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, struct TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault); // Function Synthesis.ModularSynthComponent.CreatePatch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf1e520
};

// Class Synthesis.SourceEffectBitCrusherPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	char UnknownData_40[0x30]; // 0x40(0x30)
	struct FSourceEffectBitCrusherSettings Settings; // 0x70(0x08)

	void SetSettings(struct FSourceEffectBitCrusherSettings InSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf254c0
};

// Class Synthesis.SourceEffectChorusPreset
// Size: 0x98 (Inherited: 0x40)
struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	char UnknownData_40[0x40]; // 0x40(0x40)
	struct FSourceEffectChorusSettings Settings; // 0x80(0x18)

	void SetSettings(struct FSourceEffectChorusSettings InSettings); // Function Synthesis.SourceEffectChorusPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf25570
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size: 0xb8 (Inherited: 0x40)
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	char UnknownData_40[0x50]; // 0x40(0x50)
	struct FSourceEffectDynamicsProcessorSettings Settings; // 0x90(0x28)

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf25620
};

// Class Synthesis.EnvelopeFollowerListener
// Size: 0x1a0 (Inherited: 0x180)
struct UEnvelopeFollowerListener : UActorComponent {
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0x180(0x10)
	char UnknownData_190[0x10]; // 0x190(0x10)
};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	char UnknownData_40[0x34]; // 0x40(0x34)
	struct FSourceEffectEnvelopeFollowerSettings Settings; // 0x74(0x0c)

	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0xf25e40
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings InSettings); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf25780
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0xf253c0
};

// Class Synthesis.SourceEffectEQPreset
// Size: 0x88 (Inherited: 0x40)
struct USourceEffectEQPreset : USoundEffectSourcePreset {
	char UnknownData_40[0x38]; // 0x40(0x38)
	struct FSourceEffectEQSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSourceEffectEQSettings InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf256d0
};

// Class Synthesis.SourceEffectFilterPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	char UnknownData_40[0x34]; // 0x40(0x34)
	struct FSourceEffectFilterSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSourceEffectFilterSettings InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf25830
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	char UnknownData_40[0x34]; // 0x40(0x34)
	struct FSourceEffectFoldbackDistortionSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf258e0
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size: 0x80 (Inherited: 0x40)
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	char UnknownData_40[0x34]; // 0x40(0x34)
	struct FSourceEffectMidSideSpreaderSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf25990
};

// Class Synthesis.SourceEffectPannerPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	char UnknownData_40[0x30]; // 0x40(0x30)
	struct FSourceEffectPannerSettings Settings; // 0x70(0x08)

	void SetSettings(struct FSourceEffectPannerSettings InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf25a40
};

// Class Synthesis.SourceEffectPhaserPreset
// Size: 0x88 (Inherited: 0x40)
struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	char UnknownData_40[0x38]; // 0x40(0x38)
	struct FSourceEffectPhaserSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSourceEffectPhaserSettings InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf25af0
};

// Class Synthesis.SourceEffectRingModulationPreset
// Size: 0x90 (Inherited: 0x40)
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	char UnknownData_40[0x3c]; // 0x40(0x3c)
	struct FSourceEffectRingModulationSettings Settings; // 0x7c(0x14)

	void SetSettings(struct FSourceEffectRingModulationSettings InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf25bb0
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// Size: 0x98 (Inherited: 0x40)
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	char UnknownData_40[0x40]; // 0x40(0x40)
	struct FSourceEffectSimpleDelaySettings Settings; // 0x80(0x18)

	void SetSettings(struct FSourceEffectSimpleDelaySettings InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf25c50
};

// Class Synthesis.SourceEffectStereoDelayPreset
// Size: 0x90 (Inherited: 0x40)
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	char UnknownData_40[0x3c]; // 0x40(0x3c)
	struct FSourceEffectStereoDelaySettings Settings; // 0x7c(0x14)

	void SetSettings(struct FSourceEffectStereoDelaySettings InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf25d00
};

// Class Synthesis.SourceEffectWaveShaperPreset
// Size: 0x78 (Inherited: 0x40)
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	char UnknownData_40[0x30]; // 0x40(0x30)
	struct FSourceEffectWaveShaperSettings Settings; // 0x70(0x08)

	void SetSettings(struct FSourceEffectWaveShaperSettings InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf25a40
};

// Class Synthesis.AudioImpulseResponse
// Size: 0x58 (Inherited: 0x28)
struct UAudioImpulseResponse : UObject {
	struct TArray<float> ImpulseResponse; // 0x28(0x10)
	int32_t NumChannels; // 0x38(0x04)
	int32_t SampleRate; // 0x3c(0x04)
	float NormalizationVolumeDb; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct TArray<float> IRData; // 0x48(0x10)
};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0xb8 (Inherited: 0x40)
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectConvolutionReverbSettings Settings; // 0x40(0x20)
	struct UAudioImpulseResponse* ImpulseResponse; // 0x60(0x08)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x68(0x01)
	char UnknownData_69_0 : 7; // 0x69(0x01)
	bool bEnableHardwareAcceleration : 1; // 0x69(0x01)
	char UnknownData_6A[0x4e]; // 0x6a(0x4e)

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf25da0
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse // (Final|Native|Public|BlueprintCallable) // @ game+0xf25440
};

// Class Synthesis.SubmixEffectDelayPreset
// Size: 0x90 (Inherited: 0x40)
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	char UnknownData_40[0x34]; // 0x40(0x34)
	struct FSubmixEffectDelaySettings Settings; // 0x74(0x0c)
	struct FSubmixEffectDelaySettings DynamicSettings; // 0x80(0x0c)
	char UnknownData_8C[0x4]; // 0x8c(0x04)

	void SetSettings(struct FSubmixEffectDelaySettings InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf2b560
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf2aaa0
	void SetDelay(float Length); // Function Synthesis.SubmixEffectDelayPreset.SetDelay // (Final|Native|Public|BlueprintCallable) // @ game+0xf29c70
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // @ game+0xf28e20
};

// Class Synthesis.SubmixEffectFilterPreset
// Size: 0x80 (Inherited: 0x40)
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	char UnknownData_40[0x34]; // 0x40(0x34)
	struct FSubmixEffectFilterSettings Settings; // 0x74(0x0c)

	void SetSettings(struct FSubmixEffectFilterSettings InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf2b620
	void SetFilterType(enum class ESubmixFilterType InType); // Function Synthesis.SubmixEffectFilterPreset.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0xf2a390
	void SetFilterQMod(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0xf2a310
	void SetFilterQ(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0xf2a290
	void SetFilterCutoffFrequencyMod(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0xf29df0
	void SetFilterCutoffFrequency(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0xf29d70
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm); // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0xf29cf0
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// Size: 0x88 (Inherited: 0x40)
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	char UnknownData_40[0x38]; // 0x40(0x38)
	struct FSubmixEffectFlexiverbSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSubmixEffectFlexiverbSettings InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf2b6d0
};

// Class Synthesis.SubmixEffectTapDelayPreset
// Size: 0xb0 (Inherited: 0x40)
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	char UnknownData_40[0x40]; // 0x40(0x40)
	struct FSubmixEffectTapDelaySettings Settings; // 0x80(0x18)
	char UnknownData_98[0x18]; // 0x98(0x18)

	void SetTap(int32_t TapId, struct FTapDelayInfo TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf2bae0
	void SetSettings(struct FSubmixEffectTapDelaySettings InSettings); // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf2b790
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf2ab20
	void RemoveTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap // (Final|Native|Public|BlueprintCallable) // @ game+0xf294c0
	void GetTapIds(struct TArray<int32_t> TapIds); // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf28fe0
	void GetTap(int32_t TapId, struct FTapDelayInfo TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.GetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf28f00
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // @ game+0xf28e40
	void AddTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.AddTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xf28bf0
};

// Class Synthesis.Synth2DSlider
// Size: 0x478 (Inherited: 0x108)
struct USynth2DSlider : UWidget {
	float ValueX; // 0x108(0x04)
	float ValueY; // 0x10c(0x04)
	struct FDelegate ValueXDelegate; // 0x110(0x10)
	struct FDelegate ValueYDelegate; // 0x120(0x10)
	struct FSynth2DSliderStyle WidgetStyle; // 0x130(0x2b8)
	struct FLinearColor SliderHandleColor; // 0x3e8(0x10)
	char UnknownData_3F8_0 : 7; // 0x3f8(0x01)
	bool IndentHandle : 1; // 0x3f8(0x01)
	char UnknownData_3F9_0 : 7; // 0x3f9(0x01)
	bool Locked : 1; // 0x3f9(0x01)
	char UnknownData_3FA[0x2]; // 0x3fa(0x02)
	float StepSize; // 0x3fc(0x04)
	char UnknownData_400_0 : 7; // 0x400(0x01)
	bool IsFocusable : 1; // 0x400(0x01)
	char UnknownData_401[0x7]; // 0x401(0x07)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x408(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x418(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x428(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x438(0x10)
	struct FMulticastInlineDelegate OnValueChangedX; // 0x448(0x10)
	struct FMulticastInlineDelegate OnValueChangedY; // 0x458(0x10)
	char UnknownData_468[0x10]; // 0x468(0x10)

	void SetValue(struct FVector2D InValue); // Function Synthesis.Synth2DSlider.SetValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xf2bbc0
	void SetStepSize(float InValue); // Function Synthesis.Synth2DSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0xf2b950
	void SetSliderHandleColor(struct FLinearColor InValue); // Function Synthesis.Synth2DSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xf2b850
	void SetLocked(bool InValue); // Function Synthesis.Synth2DSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0xf2aba0
	void SetIndentHandle(bool InValue); // Function Synthesis.Synth2DSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0xf2aa10
	struct FVector2D GetValue(); // Function Synthesis.Synth2DSlider.GetValue // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xf29090
};

// Class Synthesis.GranularSynth
// Size: 0xb60 (Inherited: 0x7a0)
struct UGranularSynth : USynthComponent {
	struct USoundWave* GranulatedSoundWave; // 0x7a0(0x08)
	char UnknownData_7A8[0x3b8]; // 0x7a8(0x3b8)

	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0xf2b9d0
	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.GranularSynth.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0xf2b8d0
	void SetScrubMode(bool bScrubMode); // Function Synthesis.GranularSynth.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0xf2b4d0
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // Function Synthesis.GranularSynth.SetReleaseTimeMsec // (Final|Native|Public|BlueprintCallable) // @ game+0xf2b450
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType); // Function Synthesis.GranularSynth.SetPlayheadTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf2adb0
	void SetPlaybackSpeed(float InPlayheadRate); // Function Synthesis.GranularSynth.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0xf2ad30
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange); // Function Synthesis.GranularSynth.SetGrainVolume // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xf2a8d0
	void SetGrainsPerSecond(float InGrainsPerSecond); // Function Synthesis.GranularSynth.SetGrainsPerSecond // (Final|Native|Public|BlueprintCallable) // @ game+0xf2a990
	void SetGrainProbability(float InGrainProbability); // Function Synthesis.GranularSynth.SetGrainProbability // (Final|Native|Public|BlueprintCallable) // @ game+0xf2a850
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange); // Function Synthesis.GranularSynth.SetGrainPitch // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xf2a790
	void SetGrainPan(float BasePan, struct FVector2D PanRange); // Function Synthesis.GranularSynth.SetGrainPan // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xf2a6d0
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType); // Function Synthesis.GranularSynth.SetGrainEnvelopeType // (Final|Native|Public|BlueprintCallable) // @ game+0xf2a650
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange); // Function Synthesis.GranularSynth.SetGrainDuration // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xf2a590
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.GranularSynth.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf29960
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.GranularSynth.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf29960
	void NoteOn(float Note, int32_t Velocity, float DURATION); // Function Synthesis.GranularSynth.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0xf29250
	void NoteOff(float Note, bool bKill); // Function Synthesis.GranularSynth.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0xf29100
	bool IsLoaded(); // Function Synthesis.GranularSynth.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xf290d0
	float GetSampleDuration(); // Function Synthesis.GranularSynth.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xf28ed0
	float GetCurrentPlayheadTime(); // Function Synthesis.GranularSynth.GetCurrentPlayheadTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xf28c80
};

// Class Synthesis.MonoWaveTableSynthPreset
// Size: 0x170 (Inherited: 0x28)
struct UMonoWaveTableSynthPreset : UObject {
	struct FString PresetName; // 0x28(0x10)
	char bLockKeyframesToGridBool : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	int32_t LockKeyframesToGrid; // 0x3c(0x04)
	int32_t WaveTableResolution; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct TArray<struct FRuntimeFloatCurve> WaveTable; // 0x48(0x10)
	char bNormalizeWaveTables : 1; // 0x58(0x01)
	char UnknownData_58_1 : 7; // 0x58(0x01)
	char UnknownData_59[0x117]; // 0x59(0x117)
};

// Class Synthesis.SynthComponentMonoWaveTable
// Size: 0xee0 (Inherited: 0x7a0)
struct USynthComponentMonoWaveTable : USynthComponent {
	struct FMulticastInlineDelegate OnTableAltered; // 0x7a0(0x10)
	struct FMulticastInlineDelegate OnNumTablesChanged; // 0x7b0(0x10)
	struct UMonoWaveTableSynthPreset* CurrentPreset; // 0x7c0(0x08)
	char UnknownData_7C8[0x718]; // 0x7c8(0x718)

	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition // (Final|Native|Public|BlueprintCallable) // @ game+0xf2bc40
	void SetSustainPedalState(bool InSustainPedalState); // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState // (Final|Native|Public|BlueprintCallable) // @ game+0xf2ba50
	void SetPosLfoType(enum class ESynthLFOType InLfoType); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType // (Final|Native|Public|BlueprintCallable) // @ game+0xf2afb0
	void SetPosLfoFrequency(float InLfoFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0xf2af30
	void SetPosLfoDepth(float InLfoDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xf2aeb0
	void SetPositionEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0xf2b3d0
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf2b350
	void SetPositionEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xf2b2c0
	void SetPositionEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xf2b240
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf2b1c0
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xf2b130
	void SetPositionEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xf2b0b0
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf2b030
	void SetLowPassFilterResonance(float InNewQ); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance // (Final|Native|Public|BlueprintCallable) // @ game+0xf2acb0
	void SetLowPassFilterFrequency(float InNewFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0xf2ac30
	void SetFrequencyWithMidiNote(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote // (Final|Native|Public|BlueprintCallable) // @ game+0xf2a510
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0xf2a490
	void SetFrequency(float FrequencyHz); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0xf2a410
	void SetFilterEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0xf2a190
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf2a110
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf2a210
	void SetFilterEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xf2a080
	void SetFilterEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xf2a000
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xf29f70
	void SetFilterEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xf29ef0
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf29e70
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0xf29b70
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0xf29aa0
	bool SetCurveInterpolationType(enum class CurveInterpolationType InterpolationType, int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType // (Final|Native|Public|BlueprintCallable) // @ game+0xf299e0
	void SetAmpEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0xf298e0
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf29860
	void SetAmpEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xf297d0
	void SetAmpEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xf29750
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf296d0
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0xf29640
	void SetAmpEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0xf295c0
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf29540
	void RefreshWaveTable(int32_t Index); // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable // (Final|Native|Public|BlueprintCallable) // @ game+0xf29440
	void RefreshAllWaveTables(); // Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables // (Final|Native|Public|BlueprintCallable) // @ game+0xf29420
	void NoteOn(float InMidiNote, float InVelocity); // Function Synthesis.SynthComponentMonoWaveTable.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0xf29360
	void NoteOff(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0xf291d0
	int32_t GetNumTableEntries(); // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries // (Final|Native|Public|BlueprintCallable) // @ game+0xf28ea0
	int32_t GetMaxTableIndex(); // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xf28e60
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xf28d40
	float GetCurveTangent(int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0xf28cb0
};

// Class Synthesis.SynthSamplePlayer
// Size: 0x8d0 (Inherited: 0x7a0)
struct USynthSamplePlayer : USynthComponent {
	struct USoundWave* SoundWave; // 0x7a0(0x08)
	struct FMulticastInlineDelegate OnSampleLoaded; // 0x7a8(0x10)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x7b8(0x10)
	char UnknownData_7C8[0x108]; // 0x7c8(0x108)

	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0xf2cd30
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xf2ccb0
	void SetScrubMode(bool bScrubMode); // Function Synthesis.SynthSamplePlayer.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0xf2cc20
	void SetPitch(float InPitch, float TimeSec); // Function Synthesis.SynthSamplePlayer.SetPitch // (Final|Native|Public|BlueprintCallable) // @ game+0xf2cb60
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap); // Function Synthesis.SynthSamplePlayer.SeekToTime // (Final|Native|Public|BlueprintCallable) // @ game+0xf2c9c0
	bool IsLoaded(); // Function Synthesis.SynthSamplePlayer.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xf2c990
	float GetSampleDuration(); // Function Synthesis.SynthSamplePlayer.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xf2c930
	float GetCurrentPlaybackProgressTime(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xf2c900
	float GetCurrentPlaybackProgressPercent(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xf2c8d0
};

// Class Synthesis.SynthKnob
// Size: 0x400 (Inherited: 0x108)
struct USynthKnob : UWidget {
	float Value; // 0x108(0x04)
	float StepSize; // 0x10c(0x04)
	float MouseSpeed; // 0x110(0x04)
	float MouseFineTuneSpeed; // 0x114(0x04)
	char ShowTooltipInfo : 1; // 0x118(0x01)
	char UnknownData_118_1 : 7; // 0x118(0x01)
	char UnknownData_119[0x7]; // 0x119(0x07)
	struct FText ParameterName; // 0x120(0x18)
	struct FText ParameterUnits; // 0x138(0x18)
	struct FDelegate ValueDelegate; // 0x150(0x10)
	struct FSynthKnobStyle WidgetStyle; // 0x160(0x238)
	char UnknownData_398_0 : 7; // 0x398(0x01)
	bool Locked : 1; // 0x398(0x01)
	char UnknownData_399_0 : 7; // 0x399(0x01)
	bool IsFocusable : 1; // 0x399(0x01)
	char UnknownData_39A[0x6]; // 0x39a(0x06)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x3b0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x3e0(0x10)
	char UnknownData_3F0[0x10]; // 0x3f0(0x10)

	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0xf2ce30
	void SetStepSize(float InValue); // Function Synthesis.SynthKnob.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0xf2cdb0
	void SetLocked(bool InValue); // Function Synthesis.SynthKnob.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0xf2cad0
	float GetValue(); // Function Synthesis.SynthKnob.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xf2c960
};

