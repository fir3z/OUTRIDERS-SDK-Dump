// Class FieldSystemEngine.FieldSystemActor
// Size: 0x2f8 (Inherited: 0x2f0)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x2f0(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x38 (Inherited: 0x28)
struct UFieldSystem : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x510 (Inherited: 0x4d0)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x4d0(0x08)
	char UnknownData_4D8[0x10]; // 0x4d8(0x10)
	struct TArray<struct TSoftObjectPtr<struct AChaosSolverActor>> SupportedSolvers; // 0x4e8(0x10)
	char UnknownData_4F8[0x18]; // 0x4f8(0x18)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x3954550
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x39543a0
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x39541f0
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x39540d0
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3953f60
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3953e40
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x3953cf0
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3953bd0
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand // (Final|Native|Public|BlueprintCallable) // @ game+0x3953a80
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0x180 (Inherited: 0x180)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0x188 (Inherited: 0x180)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0x180(0x04)
	char UnknownData_184[0x4]; // 0x184(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x39548a0
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0x188 (Inherited: 0x180)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0x180(0x01)
	char UnknownData_181[0x7]; // 0x181(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3954930
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0x180 (Inherited: 0x180)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0x180 (Inherited: 0x180)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0x180 (Inherited: 0x180)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0x180 (Inherited: 0x180)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0x188 (Inherited: 0x180)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0x180(0x04)
	char UnknownData_184[0x4]; // 0x184(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x39548a0
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0x1a0 (Inherited: 0x180)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0x180(0x04)
	struct FVector Position; // 0x184(0x0c)
	int32_t InteriorValue; // 0x190(0x04)
	int32_t ExteriorValue; // 0x194(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0x198(0x01)
	char UnknownData_199[0x7]; // 0x199(0x07)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3955130
};

// Class FieldSystemEngine.UniformScalar
// Size: 0x188 (Inherited: 0x180)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0x180(0x04)
	char UnknownData_184[0x4]; // 0x184(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x39553d0
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0x1a8 (Inherited: 0x180)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0x180(0x04)
	float MinRange; // 0x184(0x04)
	float MaxRange; // 0x188(0x04)
	float Default; // 0x18c(0x04)
	float Radius; // 0x190(0x04)
	struct FVector Position; // 0x194(0x0c)
	enum class EFieldFalloffType Falloff; // 0x1a0(0x01)
	char UnknownData_1A1[0x7]; // 0x1a1(0x07)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3954f10
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0x1b0 (Inherited: 0x180)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0x180(0x04)
	float MinRange; // 0x184(0x04)
	float MaxRange; // 0x188(0x04)
	float Default; // 0x18c(0x04)
	float Distance; // 0x190(0x04)
	struct FVector Position; // 0x194(0x0c)
	struct FVector Normal; // 0x1a0(0x0c)
	enum class EFieldFalloffType Falloff; // 0x1ac(0x01)
	char UnknownData_1AD[0x3]; // 0x1ad(0x03)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3954c90
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x1d0 (Inherited: 0x180)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0x180(0x04)
	float MinRange; // 0x184(0x04)
	float MaxRange; // 0x188(0x04)
	float Default; // 0x18c(0x04)
	struct FTransform Transform; // 0x190(0x30)
	enum class EFieldFalloffType Falloff; // 0x1c0(0x01)
	char UnknownData_1C1[0xf]; // 0x1c1(0x0f)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3954570
};

// Class FieldSystemEngine.NoiseField
// Size: 0x1c0 (Inherited: 0x180)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0x180(0x04)
	float MaxRange; // 0x184(0x04)
	char UnknownData_188[0x8]; // 0x188(0x08)
	struct FTransform Transform; // 0x190(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x39549c0
};

// Class FieldSystemEngine.UniformVector
// Size: 0x190 (Inherited: 0x180)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0x180(0x04)
	struct FVector Direction; // 0x184(0x0c)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x39552f0
};

// Class FieldSystemEngine.RadialVector
// Size: 0x190 (Inherited: 0x180)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0x180(0x04)
	struct FVector Position; // 0x184(0x0c)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x39552f0
};

// Class FieldSystemEngine.RandomVector
// Size: 0x188 (Inherited: 0x180)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0x180(0x04)
	char UnknownData_184[0x4]; // 0x184(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x39553d0
};

// Class FieldSystemEngine.OperatorField
// Size: 0x1a0 (Inherited: 0x180)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0x180(0x04)
	char UnknownData_184[0x4]; // 0x184(0x04)
	struct UFieldNodeBase* RightField; // 0x188(0x08)
	struct UFieldNodeBase* LeftField; // 0x190(0x08)
	enum class EFieldOperationType Operation; // 0x198(0x01)
	char UnknownData_199[0x7]; // 0x199(0x07)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* RightField, struct UFieldNodeBase* LeftField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3954b40
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0x188 (Inherited: 0x180)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0x180(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3955490
};

// Class FieldSystemEngine.ToFloatField
// Size: 0x188 (Inherited: 0x180)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0x180(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3955490
};

// Class FieldSystemEngine.CullingField
// Size: 0x198 (Inherited: 0x180)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0x180(0x08)
	struct UFieldNodeBase* Field; // 0x188(0x08)
	enum class EFieldCullingOperationType Operation; // 0x190(0x01)
	char UnknownData_191[0x7]; // 0x191(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x39547a0
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0x180 (Inherited: 0x180)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3955460
};

