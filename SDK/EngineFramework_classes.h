// Class EngineFramework.BlendableDecalActor
// Size: 0x330 (Inherited: 0x2f8)
struct ABlendableDecalActor : ADecalActor {
	char UnknownData_2F8[0x38]; // 0x2f8(0x38)

	void SetDecalInitialSize(float Size); // Function EngineFramework.BlendableDecalActor.SetDecalInitialSize // (Final|Native|Public|BlueprintCallable) // @ game+0x37001e0
	void BlendVectorParameterByCurve(struct FName ShaderParam, float StartDelay, struct UCurveVector* Curve); // Function EngineFramework.BlendableDecalActor.BlendVectorParameterByCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x37000d0
	void BlendVectorParameter(struct FName ShaderParam, float StartDelay, float BlendDuration, struct FVector StartValue, struct FVector EndValue, enum class EDecalParameterBlendType BlendType); // Function EngineFramework.BlendableDecalActor.BlendVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x36ffef0
	void BlendScalarParameterByCurve(struct FName ShaderParam, float StartDelay, struct UCurveFloat* Curve); // Function EngineFramework.BlendableDecalActor.BlendScalarParameterByCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x36ffde0
	void BlendScalarParameter(struct FName ShaderParam, float StartDelay, float BlendDuration, float StartValue, float EndValue, enum class EDecalParameterBlendType BlendType); // Function EngineFramework.BlendableDecalActor.BlendScalarParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x36ffc20
	void BlendDecalSizeByCurve(struct UCurveFloat* Curve); // Function EngineFramework.BlendableDecalActor.BlendDecalSizeByCurve // (Final|Native|Public|BlueprintCallable) // @ game+0x36ffba0
	void BlendDecalSize(float BlendDuration, float StartValue, float EndValue, enum class EDecalParameterBlendType BlendType); // Function EngineFramework.BlendableDecalActor.BlendDecalSize // (Final|Native|Public|BlueprintCallable) // @ game+0x36ffa50
};

// Class EngineFramework.ParticleModuleEventReceiverDecal
// Size: 0xf8 (Inherited: 0x40)
struct UParticleModuleEventReceiverDecal : UParticleModuleEventReceiverBase {
	struct UMaterialInterface* DecalMaterial; // 0x40(0x08)
	struct FRawDistributionFloat LifeSpan; // 0x48(0x30)
	struct FRawDistributionFloat Rotation; // 0x78(0x30)
	char bUseEmiterRoll : 1; // 0xa8(0x01)
	char UnknownData_A8_1 : 7; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
	struct FRawDistributionFloat InitialSize; // 0xb0(0x30)
	struct TArray<struct FDecalParam> BlendParameters; // 0xe0(0x10)
	struct FDecalChannels DecalChannels; // 0xf0(0x01)
	char UnknownData_F1[0x7]; // 0xf1(0x07)
};

// Class EngineFramework.ParticleModuleLocationSplineChain
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleLocationSplineChain : UParticleModuleLocationBase {
	float DistanceAlongSpline; // 0x30(0x04)
	struct FName SplineChainComponentName; // 0x34(0x08)
	char UnknownData_3C_0 : 7; // 0x3c(0x01)
	bool bAttachParticlesToSpline : 1; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
};

// Class EngineFramework.ParticleModuleLocationStaticVertSurface
// Size: 0x88 (Inherited: 0x30)
struct UParticleModuleLocationStaticVertSurface : UParticleModuleLocationBase {
	enum class ELocationStaticVertSurfaceSource SourceType; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FVector UniversalOffset; // 0x34(0x0c)
	char bUpdatePositionEachFrame : 1; // 0x40(0x01)
	char bOrientMeshEmitters : 1; // 0x40(0x01)
	char UnknownData_40_2 : 6; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	struct FName StaticMeshActorParamName; // 0x44(0x08)
	char bEnforceNormalCheck : 1; // 0x4c(0x01)
	char UnknownData_4C_1 : 7; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
	struct FVector NormalToCompare; // 0x50(0x0c)
	float NormalCheckToleranceDegrees; // 0x5c(0x04)
	float NormalCheckTolerance; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
	struct TArray<int32_t> ValidMaterialIndices; // 0x68(0x10)
	char bUseSpawnColorFilter : 1; // 0x78(0x01)
	char UnknownData_78_1 : 7; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	enum class EParticleLocationVertexChannel SpawnColorFilter; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
	char bInheritVertexColor : 1; // 0x80(0x01)
	char UnknownData_80_1 : 7; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// Class EngineFramework.ParticleModuleSoundCueBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleSoundCueBase : UParticleModule {
};

// Class EngineFramework.ParticleModuleSoundCue
// Size: 0x4b8 (Inherited: 0x30)
struct UParticleModuleSoundCue : UParticleModuleSoundCueBase {
	char UnknownData_30[0x8]; // 0x30(0x08)
	struct USoundBase* Sound; // 0x38(0x08)
	struct FRawDistributionVector Pitch; // 0x40(0x48)
	struct FRawDistributionVector Volume; // 0x88(0x48)
	int32_t MaxConcurrentParticles; // 0xd0(0x04)
	char UnknownData_D4_0 : 7; // 0xd4(0x01)
	bool bOverrideAttenuation : 1; // 0xd4(0x01)
	char UnknownData_D5_0 : 7; // 0xd5(0x01)
	bool bAllowSpatialization : 1; // 0xd5(0x01)
	char UnknownData_D6[0x2]; // 0xd6(0x02)
	struct FSoundAttenuationSettings AttenuationSettings; // 0xd8(0x3a0)
	struct USoundConcurrency* ConcurrencySettings; // 0x478(0x08)
	char UnknownData_480[0x38]; // 0x480(0x38)
};

// Class EngineFramework.ParticleModuleTraceBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleTraceBase : UParticleModule {
};

// Class EngineFramework.ParticleModuleTrace
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleTrace : UParticleModuleTraceBase {
	char UnknownData_30[0x50]; // 0x30(0x50)
};

// Class EngineFramework.ParticleModuleWindBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleWindBase : UParticleModule {
};

// Class EngineFramework.ParticleModuleWind
// Size: 0x58 (Inherited: 0x30)
struct UParticleModuleWind : UParticleModuleWindBase {
	float EffectiveArea; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct UDistributionFloatParticleParameter* EffectiveAreaParameter; // 0x38(0x08)
	float SpeedMultiplier; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct UDistributionFloatParticleParameter* SpeedMultiplierParameter; // 0x48(0x08)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bEnableGusts : 1; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// Class EngineFramework.ParticlePoolJanitorComponent
// Size: 0x190 (Inherited: 0x180)
struct UParticlePoolJanitorComponent : UActorComponent {
	float TimeBetweenClearingPools; // 0x180(0x04)
	char UnknownData_184[0xc]; // 0x184(0x0c)
};

// Class EngineFramework.PCFEngineSettings
// Size: 0x40 (Inherited: 0x38)
struct UPCFEngineSettings : UDeveloperSettings {
	enum class EDecalsInPIEStrategy SpawnDecalsInEditorWindow; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// Class EngineFramework.RecordEventInterface
// Size: 0x28 (Inherited: 0x28)
struct URecordEventInterface : UInterface {
};

// Class EngineFramework.SoundNodeVolumeOverride
// Size: 0x60 (Inherited: 0x50)
struct USoundNodeVolumeOverride : USoundNode {
	float VolumeWindows; // 0x50(0x04)
	float VolumePS; // 0x54(0x04)
	float VolumeXbox; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// Class EngineFramework.SplineChainComponent
// Size: 0x5c0 (Inherited: 0x4d0)
struct USplineChainComponent : UPrimitiveComponent {
	struct TArray<struct FName> BonesChainNames; // 0x4d0(0x10)
	struct FSplineChainLink LinkType; // 0x4e0(0x10)
	int32_t MaxLinks; // 0x4f0(0x04)
	struct FName SkeletalMeshComponentName; // 0x4f4(0x08)
	float ChainCollisionElementDistance; // 0x4fc(0x04)
	float ChainCollisionElementRadius; // 0x500(0x04)
	char UnknownData_504[0x4]; // 0x504(0x04)
	struct FMulticastInlineDelegate OnComponentBeginChainDamage; // 0x508(0x10)
	struct FMulticastInlineDelegate OnComponentEndChainDamage; // 0x518(0x10)
	struct USkeletalMeshComponent* ParentSkeletalMeshComponent; // 0x528(0x08)
	struct UBodySetup* CollisionCapsuleBodySetup; // 0x530(0x08)
	struct TArray<struct Acharacter*> CharactersDamagedPreviousFrame; // 0x538(0x10)
	char UnknownData_548[0x78]; // 0x548(0x78)
};

