// Enum EngineFramework.EDecalParameterBlendType
enum class EDecalParameterBlendType : uint8 {
	ABT_Linear,
	ABT_Cubic,
	ABT_Sinusoidal,
	ABT_EaseInOutExponent2,
	ABT_EaseInOutExponent3,
	ABT_EaseInOutExponent4,
	ABT_EaseInOutExponent5,
	ABT_EaseInCirc,
	ABT_MAX,
};

// Enum EngineFramework.EMadAlphaBlendType
enum class EMadAlphaBlendType : uint8 {
	Linear,
	Cubic,
	Sinusoidal,
	EaseInOutExponent2,
	EaseInOutExponent3,
	EaseInOutExponent4,
	EaseInOutExponent5,
	Max_None,
	EMadAlphaBlendType_MAX,
};

// Enum EngineFramework.EDecalParameterVariableType
enum class EDecalParameterVariableType : uint8 {
	DPVT_MaterialParameter,
	DPVT_SizeMultiplier,
	DPVT_MAX,
};

// Enum EngineFramework.EParticleLocationVertexChannel
enum class EParticleLocationVertexChannel : uint8 {
	Red,
	Green,
	Blue,
	Alpha,
	InvRed,
	InvGreen,
	InvBlue,
	InvAlpha,
	EParticleLocationVertexChannel_MAX,
};

// Enum EngineFramework.ELocationStaticVertSurfaceSource
enum class ELocationStaticVertSurfaceSource : uint8 {
	STATICVERTSURFACESOURCE_Vert,
	STATICVERTSURFACESOURCE_Surface,
	STATICVERTSURFACESOURCE_MAX,
};

// Enum EngineFramework.EDecalsInPIEStrategy
enum class EDecalsInPIEStrategy : uint8 {
	DontSpawn,
	SpawnOnlySelected,
	SpawnAll,
	EDecalsInPIEStrategy_MAX,
};

// ScriptStruct EngineFramework.DecalParam
// Size: 0x20 (Inherited: 0x00)
struct FDecalParam {
	struct FName Name; // 0x00(0x08)
	struct UCurveBase* CurveObject; // 0x08(0x08)
	enum class EDecalParameterVariableType VariableType; // 0x10(0x01)
	enum class EDecalParameterBlendType BlendType; // 0x11(0x01)
	char UnknownData_12[0x2]; // 0x12(0x02)
	float StartValue; // 0x14(0x04)
	float EndValue; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct EngineFramework.SplineChainLink
// Size: 0x10 (Inherited: 0x00)
struct FSplineChainLink {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	float LinkLength; // 0x08(0x04)
	float Scale; // 0x0c(0x04)
};

