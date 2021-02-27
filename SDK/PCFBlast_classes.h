// Class PCFBlast.BlastAsset
// Size: 0xb8 (Inherited: 0x28)
struct UBlastAsset : UObject {
	struct TArray<enum class EBlastAssetChunkFlags> ChunksFlags; // 0x28(0x10)
	struct FGuid AssetGUID; // 0x38(0x10)
	char UnknownData_48[0x70]; // 0x48(0x70)
};

// Class PCFBlast.BlastAssetImportData
// Size: 0x48 (Inherited: 0x28)
struct UBlastAssetImportData : UAssetImportData {
	struct FBlastAssetImportOptions ImportOptions; // 0x28(0x20)
};

// Class PCFBlast.BlastBaseDamageComponent
// Size: 0x2d0 (Inherited: 0x2d0)
struct UBlastBaseDamageComponent : USceneComponent {
	char UnknownData_2D0_0 : 7; // 0x2d0(0x01)
	bool bDamageOnHit : 1; // 0x2c8(0x01)
};

// Class PCFBlast.BlastBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlastBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsValidToApplyForces(struct UPrimitiveComponent* Component, struct FName BoneName); // Function PCFBlast.BlastBlueprintFunctionLibrary.IsValidToApplyForces // (Final|Native|Static|Private|BlueprintCallable|BlueprintPure) // @ game+0xcd90a0
};

// Class PCFBlast.BlastExtendedSupportStructure
// Size: 0x318 (Inherited: 0x2f0)
struct ABlastExtendedSupportStructure : AInfo {
	struct TArray<struct AActor*> StructureActors; // 0x2f0(0x10)
	float bondGenerationDistance; // 0x300(0x04)
	char UnknownData_304[0x4]; // 0x304(0x04)
	struct UBlastExtendedSupportMeshComponent* ExtendedSupportMesh; // 0x308(0x08)
	char UnknownData_310_0 : 7; // 0x310(0x01)
	bool bEnabled : 1; // 0x310(0x01)
	char UnknownData_311[0x7]; // 0x311(0x07)
};

// Class PCFBlast.BlastMeshComponent
// Size: 0xab0 (Inherited: 0x750)
struct UBlastMeshComponent : USkinnedMeshComponent {
	struct UBlastMesh* BlastMesh; // 0x748(0x08)
	struct UBlastAsset* ModifiedAssetOwned; // 0x750(0x08)
	struct UBlastAsset* ModifiedAsset; // 0x758(0x08)
	struct FTransform ModifiedAssetComponentToWorldAtBake; // 0x760(0x30)
	struct ABlastExtendedSupportStructure* OwningSupportStructure; // 0x790(0x08)
	int32_t OwningSupportStructureIndex; // 0x798(0x04)
	char UnknownData_7A4_0 : 7; // 0x7a4(0x01)
	bool bSupportedByWorld : 1; // 0x79c(0x01)
	float DebrisLifetimeMinOverride; // 0x7a0(0x04)
	float DebrisLifetimeMaxOverride; // 0x7a4(0x04)
	float DebrisIncreasedDumpingDistanceOverride; // 0x7a8(0x04)
	bool bOverrideDebrisLifeTime : 1; // 0x7ac(0x01)
	bool bOverrideDebrisIncreasedDumpingDistance : 1; // 0x7ad(0x01)
	bool bSpawnWorldDeformations : 1; // 0x7ae(0x01)
	bool bDebrisIfNotConnectedToStaticChunk : 1; // 0x7af(0x01)
	bool bUseAllChunksForBounds : 1; // 0x7b0(0x01)
	char UnknownData_7B1[0x1f]; // 0x7b1(0x1f)
	struct FBodyInstance DynamicChunkBodyInstance; // 0x7d0(0x110)
	struct FMulticastInlineDelegate OnDamaged; // 0x8e0(0x10)
	struct FMulticastInlineDelegate OnActorCreated; // 0x8f0(0x10)
	struct FMulticastInlineDelegate OnActorDestroyed; // 0x900(0x10)
	struct FMulticastInlineDelegate OnActorCreatedFromDamage; // 0x910(0x10)
	struct FMulticastInlineDelegate OnBondsDamaged; // 0x920(0x10)
	struct FMulticastInlineDelegate OnChunksDamaged; // 0x930(0x10)
	char UnknownData_940[0x98]; // 0x940(0x98)
	struct TArray<struct UBodySetup*> ActorBodySetups; // 0x9d8(0x10)
	char UnknownData_9E8[0x68]; // 0x9e8(0x68)
	struct UBlastMeshPhysicInteractionPreset* PhysicsInterationPreset; // 0xa50(0x08)
	char UnknownData_A58[0x8]; // 0xa58(0x08)
	struct UBlastMeshPhysicInteractionPreset* PhysicsInteractionPressetClass; // 0xa60(0x08)
	struct TArray<struct FColor> BlastVertexColorOverride; // 0xa68(0x10)
	struct FMulticastInlineDelegate OnComponentVolumeChanged; // 0xa78(0x10)
	char UnknownData_A88[0x28]; // 0xa88(0x28)

	void SetDynamicChunkCollisionResponseToChannel(enum class ECollisionChannel Channel, enum class ECollisionResponse NewResponse); // Function PCFBlast.BlastMeshComponent.SetDynamicChunkCollisionResponseToChannel // (Final|Native|Public|BlueprintCallable) // @ game+0xcd9790
	void SetDynamicChunkCollisionResponseToAllChannels(enum class ECollisionResponse NewResponse); // Function PCFBlast.BlastMeshComponent.SetDynamicChunkCollisionResponseToAllChannels // (Final|Native|Public|BlueprintCallable) // @ game+0xcd9710
	void SetDynamicChunkCollisionProfileName(struct FName InCollisionProfileName); // Function PCFBlast.BlastMeshComponent.SetDynamicChunkCollisionProfileName // (Final|Native|Public|BlueprintCallable) // @ game+0xcd9690
	void SetDynamicChunkCollisionObjectType(enum class ECollisionChannel Channel); // Function PCFBlast.BlastMeshComponent.SetDynamicChunkCollisionObjectType // (Final|Native|Public|BlueprintCallable) // @ game+0xcd9610
	void SetDynamicChunkCollisionEnabled(enum class ECollisionEnabled NewType); // Function PCFBlast.BlastMeshComponent.SetDynamicChunkCollisionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xcd9590
	void SetBlastMeshMaxHealth_Multicast(float MaxBlastHPFromServer); // Function PCFBlast.BlastMeshComponent.SetBlastMeshMaxHealth_Multicast // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0xcd9510
	void SetBlastMesh(struct UBlastMesh* NewBlastMesh); // Function PCFBlast.BlastMeshComponent.SetBlastMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xcd9490
	void Reset(); // Function PCFBlast.BlastMeshComponent.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0xcd9470
	void RequestDamageSync(); // Function PCFBlast.BlastMeshComponent.RequestDamageSync // (Final|Native|Public|BlueprintCallable) // @ game+0xcd9430
	void RepairBlastMesh(); // Function PCFBlast.BlastMeshComponent.RepairBlastMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xcd9410
	void OnHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function PCFBlast.BlastMeshComponent.OnHit // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0xcd9160
	int32_t HasChunkInSphere(struct FVector Center, float Radius); // Function PCFBlast.BlastMeshComponent.HasChunkInSphere // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd8fc0
	float GetOverlapsSimulatedChunksVolume(struct UBoxComponent* Component); // Function PCFBlast.BlastMeshComponent.GetOverlapsSimulatedChunksVolume // (Final|Native|Public|BlueprintCallable) // @ game+0xcd8f20
	float GetOverlapsCookedChunksVolume(struct UBoxComponent* Component); // Function PCFBlast.BlastMeshComponent.GetOverlapsCookedChunksVolume // (Final|Native|Public|BlueprintCallable) // @ game+0xcd8e80
	struct FName GetDynamicChunkCollisionProfileName(); // Function PCFBlast.BlastMeshComponent.GetDynamicChunkCollisionProfileName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd8e40
	float GetDestructionProgress(); // Function PCFBlast.BlastMeshComponent.GetDestructionProgress // (Final|Native|Public|BlueprintCallable) // @ game+0xcd8e10
	struct FVector GetChunkWorldVelocity(int32_t ChunkIndex); // Function PCFBlast.BlastMeshComponent.GetChunkWorldVelocity // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd8d70
	struct FTransform GetChunkWorldTransform(int32_t ChunkIndex); // Function PCFBlast.BlastMeshComponent.GetChunkWorldTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd8cb0
	struct FBoxSphereBounds GetChunkWorldBounds(int32_t ChunkIndex); // Function PCFBlast.BlastMeshComponent.GetChunkWorldBounds // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd8c00
	struct FVector GetChunkWorldAngularVelocityInRadians(int32_t ChunkIndex); // Function PCFBlast.BlastMeshComponent.GetChunkWorldAngularVelocityInRadians // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd8b60
	struct FVector GetChunkWorldAngularVelocityInDegrees(int32_t ChunkIndex); // Function PCFBlast.BlastMeshComponent.GetChunkWorldAngularVelocityInDegrees // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd8a90
	struct FVector GetChunkCenterWorldPosition(int32_t ChunkIndex); // Function PCFBlast.BlastMeshComponent.GetChunkCenterWorldPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd89f0
	struct FTransform GetChunkActorRelativeTransform(int32_t ChunkIndex); // Function PCFBlast.BlastMeshComponent.GetChunkActorRelativeTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd8930
	struct FVector GetActorWorldVelocity(struct FName ActorName); // Function PCFBlast.BlastMeshComponent.GetActorWorldVelocity // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd8890
	struct FTransform GetActorWorldTransform(struct FName ActorName); // Function PCFBlast.BlastMeshComponent.GetActorWorldTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd87d0
	struct FBox GetActorWorldBounds(struct FName ActorName); // Function PCFBlast.BlastMeshComponent.GetActorWorldBounds // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd8720
	struct FVector GetActorWorldAngularVelocityInRadians(struct FName ActorName); // Function PCFBlast.BlastMeshComponent.GetActorWorldAngularVelocityInRadians // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd8680
	struct FVector GetActorWorldAngularVelocityInDegrees(struct FName ActorName); // Function PCFBlast.BlastMeshComponent.GetActorWorldAngularVelocityInDegrees // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd85b0
	float GetActorMass(struct FName ActorName); // Function PCFBlast.BlastMeshComponent.GetActorMass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd8510
	struct FName GetActorForChunk(int32_t ChunkIndex); // Function PCFBlast.BlastMeshComponent.GetActorForChunk // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd8480
	struct FVector GetActorCOMWorldPosition(struct FName ActorName); // Function PCFBlast.BlastMeshComponent.GetActorCOMWorldPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd83e0
	struct FName GetActorBoneName(struct FName ActorName); // Function PCFBlast.BlastMeshComponent.GetActorBoneName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xcd8360
	void FractureWholeBlastMesh(); // Function PCFBlast.BlastMeshComponent.FractureWholeBlastMesh // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0xcd8340
	void FractureMesh(); // Function PCFBlast.BlastMeshComponent.FractureMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xcd8320
	void FractureBlastMeshWithBoxComponent(struct UBoxComponent* BoxComponent, float OverlapRatioCountedAsInside); // Function PCFBlast.BlastMeshComponent.FractureBlastMeshWithBoxComponent // (Final|Native|Public|BlueprintCallable) // @ game+0xcd8250
	void FractureBlastMesh(struct FVector Center, struct FVector BoxExtent, struct FQuat Rotation, float OverlapRatioCountedAsInside); // Function PCFBlast.BlastMeshComponent.FractureBlastMesh // (Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults) // @ game+0xcd8110
	void EnablePhysicSimulationForStaticChunks(); // Function PCFBlast.BlastMeshComponent.EnablePhysicSimulationForStaticChunks // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0xcd80f0
	void DestroyDebris(); // Function PCFBlast.BlastMeshComponent.DestroyDebris // (Final|Native|Public|BlueprintCallable) // @ game+0xcd80d0
	void ApplySupportGraphState_Multicast(struct TArray<struct FBlastSupportGraphNode> DamagedBonds, struct TArray<struct FBlastNodePair> DestroyedBonds); // Function PCFBlast.BlastMeshComponent.ApplySupportGraphState_Multicast // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0xcd7fe0
	enum class EBlastDamageResult ApplyRadialDamageAll(struct FVector Origin, float MinRadius, float MaxRadius, float Damage, float ImpulseStrength, bool bImpulseVelChange); // Function PCFBlast.BlastMeshComponent.ApplyRadialDamageAll // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xcd7e10
	enum class EBlastDamageResult ApplyRadialDamage(struct FVector Origin, float MinRadius, float MaxRadius, float Damage, float ImpulseStrength, bool bImpulseVelChange); // Function PCFBlast.BlastMeshComponent.ApplyRadialDamage // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0xcd7c30
	void ApplyDamageOnClient(struct FBlastDamageBufferObject DamageObject); // Function PCFBlast.BlastMeshComponent.ApplyDamageOnClient // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0xcd7b20
	enum class EBlastDamageResult ApplyDamageComponentOverlapAll(struct UBlastBaseDamageComponent* DamageComponent, struct FVector Origin, struct FRotator Rot); // Function PCFBlast.BlastMeshComponent.ApplyDamageComponentOverlapAll // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xcd7a00
	enum class EBlastDamageResult ApplyDamageComponentOverlap(struct UBlastBaseDamageComponent* DamageComponent, struct FVector Origin, struct FRotator Rot); // Function PCFBlast.BlastMeshComponent.ApplyDamageComponentOverlap // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xcd78d0
	enum class EBlastDamageResult ApplyDamageComponent(struct UBlastBaseDamageComponent* DamageComponent, struct FVector Origin, struct FRotator Rot, struct FName BoneName); // Function PCFBlast.BlastMeshComponent.ApplyDamageComponent // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xcd7750
	enum class EBlastDamageResult ApplyCapsuleDamageAll(struct FVector Origin, struct FRotator Rot, float HalfHeight, float MinRadius, float MaxRadius, float Damage, float ImpulseStrength, bool bImpulseVelChange); // Function PCFBlast.BlastMeshComponent.ApplyCapsuleDamageAll // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xcd74e0
	enum class EBlastDamageResult ApplyCapsuleDamage(struct FVector Origin, struct FRotator Rot, float HalfHeight, float MinRadius, float MaxRadius, float Damage, float ImpulseStrength, bool bImpulseVelChange); // Function PCFBlast.BlastMeshComponent.ApplyCapsuleDamage // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xcd7270
};

// Class PCFBlast.BlastExtendedSupportMeshComponent
// Size: 0xae0 (Inherited: 0xab0)
struct UBlastExtendedSupportMeshComponent : UBlastMeshComponent {
	struct TArray<struct FBlastExtendedStructureComponent> SavedComponents; // 0xab0(0x10)
	struct TArray<struct FIntPoint> ChunkToOriginalChunkMap; // 0xac0(0x10)
	char UnknownData_AD0[0x10]; // 0xad0(0x10)
};

// Class PCFBlast.BlastMesh
// Size: 0x1a0 (Inherited: 0xb8)
struct UBlastMesh : UBlastAsset {
	char UnknownData_B8[0x10]; // 0xb8(0x10)
	struct USkeletalMesh* Mesh; // 0xc8(0x08)
	struct USkeleton* Skeleton; // 0xd0(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0xd8(0x08)
	struct FDamageEffects DamageEffects; // 0xe0(0x50)
	struct FBlastImpactDamageProperties ImpactDamageProperties; // 0x130(0x24)
	char UnknownData_154[0x4]; // 0x154(0x04)
	struct TArray<struct FName> ChunkIndexToBoneName; // 0x158(0x10)
	struct TArray<uint32_t> ChunkIndexToBoneIndex; // 0x168(0x10)
	struct TArray<struct FBlastCookedChunkData> CookedChunkData; // 0x178(0x10)
	struct TArray<struct FTransform> ComponentSpaceInitialBoneTransforms; // 0x188(0x10)
	char UnknownData_198[0x8]; // 0x198(0x08)
};

// Class PCFBlast.BlastMeshExtendedSupport
// Size: 0x1a0 (Inherited: 0x1a0)
struct UBlastMeshExtendedSupport : UBlastMesh {
};

// Class PCFBlast.BlastGlueWorldTag
// Size: 0x28 (Inherited: 0x28)
struct UBlastGlueWorldTag : UObject {
};

// Class PCFBlast.BlastGlueVolume
// Size: 0x338 (Inherited: 0x328)
struct ABlastGlueVolume : AVolume {
	char UnknownData_328_0 : 7; // 0x328(0x01)
	bool bEnabled : 1; // 0x328(0x01)
	char UnknownData_329[0x3]; // 0x329(0x03)
	struct FVector GlueVector; // 0x32c(0x0c)
};

// Class PCFBlast.BlastMeshActor
// Size: 0x310 (Inherited: 0x2f0)
struct ABlastMeshActor : AActor {
	struct UBlastMeshComponent* BlastMeshComponent; // 0x2f0(0x08)
	char UnknownData_2F8[0x8]; // 0x2f8(0x08)
	struct FMulticastInlineDelegate OnRapairBlastMesh; // 0x300(0x10)

	void RequestInternatBlastStateSync(); // Function PCFBlast.BlastMeshActor.RequestInternatBlastStateSync // (Final|Native|Private) // @ game+0xcd9450
	void RepairBlastMesh(struct AActor* PlayerStart); // Function PCFBlast.BlastMeshActor.RepairBlastMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xcd9390
	void OnRapairBlastMesh__DelegateSignature(); // DelegateFunction PCFBlast.BlastMeshActor.OnRapairBlastMesh__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
};

// Class PCFBlast.BlastMeshPhysicInteractionPreset
// Size: 0x40 (Inherited: 0x30)
struct UBlastMeshPhysicInteractionPreset : UDataAsset {
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bCanBeDestroyedOnPlayerTouch : 1; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float PlayerMovementVelocityThreshold; // 0x34(0x04)
	float ImpulseNeededToFractureMesh; // 0x38(0x04)
	float Hardness; // 0x3c(0x04)
};

// Class PCFBlast.BlastRadialDamageComponent
// Size: 0x300 (Inherited: 0x2d0)
struct UBlastRadialDamageComponent : UBlastBaseDamageComponent {
	float Damage; // 0x2d0(0x04)
	float MinRadius; // 0x2d4(0x04)
	float MaxRadius; // 0x2d8(0x04)
	char UnknownData_2DC_0 : 7; // 0x2dc(0x01)
	bool bAddPhysicsImpulse : 1; // 0x2dc(0x01)
	char UnknownData_2DD[0x1b]; // 0x2dd(0x1b)
	struct URadialForceComponent* ForceComponent; // 0x2f8(0x08)
};

