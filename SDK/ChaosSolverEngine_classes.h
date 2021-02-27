// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0x188 (Inherited: 0x180)
struct UChaosDebugDrawComponent : UActorComponent {
	char UnknownData_180[0x8]; // 0x180(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0x188 (Inherited: 0x180)
struct UChaosEventListenerComponent : UActorComponent {
	char UnknownData_180[0x8]; // 0x180(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x340 (Inherited: 0x188)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char UnknownData_188[0x110]; // 0x188(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x298(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x2e8(0x50)
	char UnknownData_338[0x8]; // 0x338(0x08)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x394c570
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x378 (Inherited: 0x2f0)
struct AChaosSolverActor : AActor {
	float TimeStepMultiplier; // 0x2f0(0x04)
	int32_t CollisionIterations; // 0x2f4(0x04)
	int32_t PushOutIterations; // 0x2f8(0x04)
	int32_t PushOutPairIterations; // 0x2fc(0x04)
	float ClusterConnectionFactor; // 0x300(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x304(0x01)
	char UnknownData_305_0 : 7; // 0x305(0x01)
	bool DoGenerateCollisionData : 1; // 0x305(0x01)
	char UnknownData_306[0x2]; // 0x306(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x308(0x10)
	char UnknownData_318_0 : 7; // 0x318(0x01)
	bool DoGenerateBreakingData : 1; // 0x318(0x01)
	char UnknownData_319[0x3]; // 0x319(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x31c(0x10)
	char UnknownData_32C_0 : 7; // 0x32c(0x01)
	bool DoGenerateTrailingData : 1; // 0x32c(0x01)
	char UnknownData_32D[0x3]; // 0x32d(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x330(0x10)
	char UnknownData_340_0 : 7; // 0x340(0x01)
	bool bHasFloor : 1; // 0x340(0x01)
	char UnknownData_341[0x3]; // 0x341(0x03)
	float FloorHeight; // 0x344(0x04)
	float MassScale; // 0x348(0x04)
	char UnknownData_34C_0 : 7; // 0x34c(0x01)
	bool bGenerateContactGraph : 1; // 0x34c(0x01)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x34d(0x03)
	struct UBillboardComponent* SpriteComponent; // 0x350(0x08)
	char UnknownData_358[0x18]; // 0x358(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x370(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0x155efa0
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // @ game+0x394c7d0
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58 (Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings {
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
};

