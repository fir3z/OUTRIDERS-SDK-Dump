// Enum PCFBlast.EBlastAssetChunkFlags
enum class EBlastAssetChunkFlags : uint8 {
	None,
	Static,
	EBlastAssetChunkFlags_MAX,
};

// Enum PCFBlast.EDamageType
enum class EDamageType : uint8 {
	RadialDamage,
	CapsuleDamage,
	ShearDamage,
	NonSupported,
	EDamageType_MAX,
};

// Enum PCFBlast.EBlastDamageResult
enum class EBlastDamageResult : uint8 {
	None,
	Damaged,
	Split,
	EBlastDamageResult_MAX,
};

// ScriptStruct PCFBlast.BondDamageEvent
// Size: 0x2c (Inherited: 0x00)
struct FBondDamageEvent {
	int32_t ChunkIndex; // 0x00(0x04)
	int32_t OtherChunkIndex; // 0x04(0x04)
	float Damage; // 0x08(0x04)
	float HealthLeft; // 0x0c(0x04)
	float BondArea; // 0x10(0x04)
	struct FVector WorldCentroid; // 0x14(0x0c)
	struct FVector WorldNormal; // 0x20(0x0c)
};

// ScriptStruct PCFBlast.ChunkDamageEvent
// Size: 0x14 (Inherited: 0x00)
struct FChunkDamageEvent {
	int32_t ChunkIndex; // 0x00(0x04)
	float Damage; // 0x04(0x04)
	struct FVector WorldCentroid; // 0x08(0x0c)
};

// ScriptStruct PCFBlast.BlastAssetImportOptions
// Size: 0x20 (Inherited: 0x00)
struct FBlastAssetImportOptions {
	struct FName RootName; // 0x00(0x08)
	struct FFilePath SkeletalMeshPath; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bImportCollisionData : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct PCFBlast.BlastDamageProgramProxy
// Size: 0x1c (Inherited: 0x00)
struct FBlastDamageProgramProxy {
	enum class EDamageType DamageType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float Damage; // 0x04(0x04)
	float MinRadius; // 0x08(0x04)
	float MaxRadius; // 0x0c(0x04)
	float HalfHeight; // 0x10(0x04)
	float ImpulseStrength; // 0x14(0x04)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bImpulseVelChange : 1; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct PCFBlast.BlastExtendedStructureComponent
// Size: 0x70 (Inherited: 0x00)
struct FBlastExtendedStructureComponent {
	struct UBlastMeshComponent* MeshComponent; // 0x00(0x08)
	struct FGuid GUIDAtMerge; // 0x08(0x10)
	char UnknownData_18[0x8]; // 0x18(0x08)
	struct FTransform TransformAtMerge; // 0x20(0x30)
	struct TArray<int32_t> ChunkIDs; // 0x50(0x10)
	struct TArray<struct FTransform> LastActorTransforms; // 0x60(0x10)
};

// ScriptStruct PCFBlast.BlastMaterial
// Size: 0x18 (Inherited: 0x00)
struct FBlastMaterial {
	float Health; // 0x00(0x04)
	float MinDamageThreshold; // 0x04(0x04)
	float MaxDamageThreshold; // 0x08(0x04)
	char UnknownData_C_0 : 7; // 0x0c(0x01)
	bool bGenerateHitEventsForLeafActors : 1; // 0x0c(0x01)
	char UnknownData_D_0 : 7; // 0x0d(0x01)
	bool bOverrideDamageRadius : 1; // 0x0d(0x01)
	char UnknownData_E[0x2]; // 0x0e(0x02)
	float MinDamageRadius; // 0x10(0x04)
	float MaxDamageRadius; // 0x14(0x04)
};

// ScriptStruct PCFBlast.BlastFractureToolData
// Size: 0x60 (Inherited: 0x00)
struct FBlastFractureToolData {
	struct TArray<enum class None> Vertices; // 0x00(0x10)
	struct TArray<enum class None> Edges; // 0x10(0x10)
	struct TArray<enum class None> Faces; // 0x20(0x10)
	struct TArray<uint32_t> VerticesOffset; // 0x30(0x10)
	struct TArray<uint32_t> EdgesOffset; // 0x40(0x10)
	struct TArray<uint32_t> FacesOffset; // 0x50(0x10)
};

// ScriptStruct PCFBlast.BlastCookedChunkData
// Size: 0x08 (Inherited: 0x00)
struct FBlastCookedChunkData {
	struct UBodySetup* CookedBodySetup; // 0x00(0x08)
};

// ScriptStruct PCFBlast.BlastImpactDamageProperties
// Size: 0x24 (Inherited: 0x00)
struct FBlastImpactDamageProperties {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bEnabled : 1; // 0x00(0x01)
	char UnknownData_1[0x23]; // 0x01(0x23)
};

// ScriptStruct PCFBlast.DamageEffects
// Size: 0x50 (Inherited: 0x00)
struct FDamageEffects {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FTransform ParticleSystemTransform; // 0x10(0x30)
	struct USoundBase* Sound; // 0x40(0x08)
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// ScriptStruct PCFBlast.BlastMeshComponentInstanceData
// Size: 0x140 (Inherited: 0xf0)
struct FBlastMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	char UnknownData_F0[0x50]; // 0xf0(0x50)
};

// ScriptStruct PCFBlast.BlastSupportGraphNode
// Size: 0x08 (Inherited: 0x00)
struct FBlastSupportGraphNode {
	float Health; // 0x00(0x04)
	uint16 BondIndex; // 0x04(0x02)
	struct FBlastNodePair Pair; // 0x06(0x02)
};

// ScriptStruct PCFBlast.BlastNodePair
// Size: 0x02 (Inherited: 0x00)
struct FBlastNodePair {
	enum class None Node0; // 0x00(0x01)
	enum class None Node1; // 0x01(0x01)
};

// ScriptStruct PCFBlast.BlastDamageBufferObject
// Size: 0x50 (Inherited: 0x00)
struct FBlastDamageBufferObject {
	struct FBlastDamageProgramProxy DamageProgramProxy; // 0x00(0x1c)
	struct FVector Origin; // 0x1c(0x0c)
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FQuat Rot; // 0x30(0x10)
	uint32_t ActorIndex; // 0x40(0x04)
	float Damage; // 0x44(0x04)
	char UnknownData_48[0x8]; // 0x48(0x08)
};

