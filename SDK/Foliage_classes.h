// Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0x740 (Inherited: 0x710)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x710(0x10)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x720(0x10)
	struct FGuid GenerationGuid; // 0x730(0x10)
};

// Class Foliage.FoliageStatistics
// Size: 0x28 (Inherited: 0x28)
struct UFoliageStatistics : UBlueprintFunctionLibrary {

	int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x26d3280
	int32_t FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box); // Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x26d3160
};

// Class Foliage.FoliageType
// Size: 0x368 (Inherited: 0x28)
struct UFoliageType : UObject {
	struct FGuid UpdateGuid; // 0x28(0x10)
	float Density; // 0x38(0x04)
	float DensityAdjustmentFactor; // 0x3c(0x04)
	float Radius; // 0x40(0x04)
	char UnknownData_44_0 : 7; // 0x44(0x01)
	bool bSingleInstanceModeOverrideRadius : 1; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	float SingleInstanceModeRadius; // 0x48(0x04)
	enum class EFoliageScaling Scaling; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
	struct FFloatInterval ScaleX; // 0x50(0x08)
	struct FFloatInterval ScaleY; // 0x58(0x08)
	struct FFloatInterval ScaleZ; // 0x60(0x08)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x68(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0x98(0x01)
	char UnknownData_99[0x3]; // 0x99(0x03)
	float VertexColorMaskThreshold; // 0x9c(0x04)
	char VertexColorMaskInvert : 1; // 0xa0(0x01)
	char UnknownData_A0_1 : 7; // 0xa0(0x01)
	char UnknownData_A1[0x3]; // 0xa1(0x03)
	struct FFloatInterval ZOffset; // 0xa4(0x08)
	char AlignToNormal : 1; // 0xac(0x01)
	char UnknownData_AC_1 : 7; // 0xac(0x01)
	char UnknownData_AD[0x3]; // 0xad(0x03)
	float AlignMaxAngle; // 0xb0(0x04)
	char RandomYaw : 1; // 0xb4(0x01)
	char UnknownData_B4_1 : 7; // 0xb4(0x01)
	char UnknownData_B5[0x3]; // 0xb5(0x03)
	float RandomPitchAngle; // 0xb8(0x04)
	struct FFloatInterval GroundSlopeAngle; // 0xbc(0x08)
	struct FFloatInterval Height; // 0xc4(0x08)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FName> LandscapeLayers; // 0xd0(0x10)
	float MinimumLayerWeight; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct FName> ExclusionLandscapeLayers; // 0xe8(0x10)
	float MinimumExclusionLayerWeight; // 0xf8(0x04)
	struct FName LandscapeLayer; // 0xfc(0x08)
	char CollisionWithWorld : 1; // 0x104(0x01)
	char UnknownData_104_1 : 7; // 0x104(0x01)
	char UnknownData_105[0x3]; // 0x105(0x03)
	struct FVector CollisionScale; // 0x108(0x0c)
	struct FBoxSphereBounds MeshBounds; // 0x114(0x1c)
	struct FVector LowBoundOriginRadius; // 0x130(0x0c)
	enum class EComponentMobility Mobility; // 0x13c(0x01)
	char UnknownData_13D[0x3]; // 0x13d(0x03)
	struct FInt32Interval CullDistance; // 0x140(0x08)
	char bEnableStaticLighting : 1; // 0x148(0x01)
	char CastShadow : 1; // 0x148(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x148(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x148(0x01)
	char bCastDynamicShadow : 1; // 0x148(0x01)
	char bCastStaticShadow : 1; // 0x148(0x01)
	char bCastShadowAsTwoSided : 1; // 0x148(0x01)
	char bReceivesDecals : 1; // 0x148(0x01)
	char UnknownData_149[0x3]; // 0x149(0x03)
	struct FDecalChannels DecalChannels; // 0x14c(0x01)
	char UnknownData_14D[0x3]; // 0x14d(0x03)
	char bOverrideLightMapRes : 1; // 0x150(0x01)
	char UnknownData_150_1 : 7; // 0x150(0x01)
	char UnknownData_151[0x3]; // 0x151(0x03)
	int32_t OverriddenLightMapRes; // 0x154(0x04)
	enum class ELightmapType LightmapType; // 0x158(0x01)
	char UnknownData_159[0x3]; // 0x159(0x03)
	char bUseAsOccluder : 1; // 0x15c(0x01)
	char UnknownData_15C_1 : 7; // 0x15c(0x01)
	char UnknownData_15D[0x3]; // 0x15d(0x03)
	struct FBodyInstance BodyInstance; // 0x160(0x110)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x270(0x01)
	struct FLightingChannels LightingChannels; // 0x271(0x01)
	char UnknownData_272[0x2]; // 0x272(0x02)
	char bRenderCustomDepth : 1; // 0x274(0x01)
	char UnknownData_274_1 : 7; // 0x274(0x01)
	char UnknownData_275[0x3]; // 0x275(0x03)
	int32_t CustomDepthStencilValue; // 0x278(0x04)
	int32_t TranslucencySortPriority; // 0x27c(0x04)
	float CollisionRadius; // 0x280(0x04)
	float ShadeRadius; // 0x284(0x04)
	int32_t NumSteps; // 0x288(0x04)
	float InitialSeedDensity; // 0x28c(0x04)
	float AverageSpreadDistance; // 0x290(0x04)
	float SpreadVariance; // 0x294(0x04)
	int32_t SeedsPerStep; // 0x298(0x04)
	int32_t DistributionSeed; // 0x29c(0x04)
	float MaxInitialSeedOffset; // 0x2a0(0x04)
	char UnknownData_2A4_0 : 7; // 0x2a4(0x01)
	bool bCanGrowInShade : 1; // 0x2a4(0x01)
	char UnknownData_2A5_0 : 7; // 0x2a5(0x01)
	bool bSpawnsInShade : 1; // 0x2a5(0x01)
	char UnknownData_2A6[0x2]; // 0x2a6(0x02)
	float MaxInitialAge; // 0x2a8(0x04)
	float MaxAge; // 0x2ac(0x04)
	float OverlapPriority; // 0x2b0(0x04)
	struct FFloatInterval ProceduralScale; // 0x2b4(0x08)
	char UnknownData_2BC[0x4]; // 0x2bc(0x04)
	struct FRuntimeFloatCurve ScaleCurve; // 0x2c0(0x88)
	int32_t ChangeCount; // 0x348(0x04)
	char ReapplyDensity : 1; // 0x34c(0x01)
	char ReapplyRadius : 1; // 0x34c(0x01)
	char ReapplyAlignToNormal : 1; // 0x34c(0x01)
	char ReapplyRandomYaw : 1; // 0x34c(0x01)
	char ReapplyScaling : 1; // 0x34c(0x01)
	char ReapplyScaleX : 1; // 0x34c(0x01)
	char ReapplyScaleY : 1; // 0x34c(0x01)
	char ReapplyScaleZ : 1; // 0x34c(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x34d(0x01)
	char ReapplyGroundSlope : 1; // 0x34d(0x01)
	char ReapplyHeight : 1; // 0x34d(0x01)
	char ReapplyLandscapeLayers : 1; // 0x34d(0x01)
	char ReapplyZOffset : 1; // 0x34d(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x34d(0x01)
	char ReapplyVertexColorMask : 1; // 0x34d(0x01)
	char bEnableDensityScaling : 1; // 0x34d(0x01)
	char UnknownData_34E[0x2]; // 0x34e(0x02)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x350(0x10)
	int32_t VirtualTextureCullMips; // 0x360(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x364(0x01)
	char UnknownData_365[0x3]; // 0x365(0x03)
};

// Class Foliage.FoliageType_Actor
// Size: 0x378 (Inherited: 0x368)
struct UFoliageType_Actor : UFoliageType {
	struct AActor* ActorClass; // 0x368(0x08)
	char UnknownData_370_0 : 7; // 0x370(0x01)
	bool bShouldAttachToBaseComponent : 1; // 0x370(0x01)
	char UnknownData_371[0x7]; // 0x371(0x07)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x388 (Inherited: 0x368)
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; // 0x368(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x370(0x10)
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x380(0x08)
};

// Class Foliage.InstancedFoliageActor
// Size: 0x340 (Inherited: 0x2f0)
struct AInstancedFoliageActor : AActor {
	char UnknownData_2F0[0x50]; // 0x2f0(0x50)
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x360 (Inherited: 0x300)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x300(0x08)
	struct FVector TouchingActorEntryPosition; // 0x308(0x0c)
	struct FVector FoliageVelocity; // 0x314(0x0c)
	struct FVector FoliageForce; // 0x320(0x0c)
	struct FVector FoliagePosition; // 0x32c(0x0c)
	float FoliageDamageImpulseScale; // 0x338(0x04)
	float FoliageTouchImpulseScale; // 0x33c(0x04)
	float FoliageStiffness; // 0x340(0x04)
	float FoliageStiffnessQuadratic; // 0x344(0x04)
	float FoliageDamping; // 0x348(0x04)
	float MaxDamageImpulse; // 0x34c(0x04)
	float MaxTouchImpulse; // 0x350(0x04)
	float MaxForce; // 0x354(0x04)
	float Mass; // 0x358(0x04)
	char UnknownData_35C[0x4]; // 0x35c(0x04)

	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // (Final|Native|Protected|HasOutParms) // @ game+0x26d2ef0
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0x580 (Inherited: 0x580)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x330 (Inherited: 0x328)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x328(0x08)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0x1a8 (Inherited: 0x180)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x180(0x08)
	float TileOverlap; // 0x188(0x04)
	char UnknownData_18C[0x4]; // 0x18c(0x04)
	struct AVolume* SpawningVolume; // 0x190(0x08)
	struct FGuid ProceduralGuid; // 0x198(0x10)
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0x68 (Inherited: 0x28)
struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x28(0x04)
	float TileSize; // 0x2c(0x04)
	int32_t NumUniqueTiles; // 0x30(0x04)
	float MinimumQuadTreeSize; // 0x34(0x04)
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x40(0x10)
	char UnknownData_50[0x18]; // 0x50(0x18)

	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate // (Final|Native|Public|BlueprintCallable) // @ game+0x26d33d0
};

// Class Foliage.ProceduralFoliageTile
// Size: 0x158 (Inherited: 0x28)
struct UProceduralFoliageTile : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x28(0x08)
	char UnknownData_30[0xa0]; // 0x30(0xa0)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // 0xd0(0x10)
	char UnknownData_E0[0x78]; // 0xe0(0x78)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x330 (Inherited: 0x328)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x328(0x08)
};

