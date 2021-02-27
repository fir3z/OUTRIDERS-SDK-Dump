// Class NavigationSystem.NavArea
// Size: 0x48 (Inherited: 0x30)
struct UNavArea : UNavAreaBase {
	float DefaultCost; // 0x30(0x04)
	float FixedAreaEnteringCost; // 0x34(0x04)
	struct FColor DrawColor; // 0x38(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x3c(0x04)
	char bSupportsAgent0 : 1; // 0x40(0x01)
	char bSupportsAgent1 : 1; // 0x40(0x01)
	char bSupportsAgent2 : 1; // 0x40(0x01)
	char bSupportsAgent3 : 1; // 0x40(0x01)
	char bSupportsAgent4 : 1; // 0x40(0x01)
	char bSupportsAgent5 : 1; // 0x40(0x01)
	char bSupportsAgent6 : 1; // 0x40(0x01)
	char bSupportsAgent7 : 1; // 0x40(0x01)
	char bSupportsAgent8 : 1; // 0x41(0x01)
	char bSupportsAgent9 : 1; // 0x41(0x01)
	char bSupportsAgent10 : 1; // 0x41(0x01)
	char bSupportsAgent11 : 1; // 0x41(0x01)
	char bSupportsAgent12 : 1; // 0x41(0x01)
	char bSupportsAgent13 : 1; // 0x41(0x01)
	char bSupportsAgent14 : 1; // 0x41(0x01)
	char bSupportsAgent15 : 1; // 0x41(0x01)
	char UnknownData_42[0x6]; // 0x42(0x06)
};

// Class NavigationSystem.NavAreaMeta
// Size: 0x48 (Inherited: 0x48)
struct UNavAreaMeta : UNavArea {
};

// Class NavigationSystem.NavArea_Obstacle
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Obstacle : UNavArea {
};

// Class NavigationSystem.NavRelevantComponent
// Size: 0x1b0 (Inherited: 0x180)
struct UNavRelevantComponent : UActorComponent {
	char UnknownData_180[0x24]; // 0x180(0x24)
	char bAttachToOwnersRoot : 1; // 0x1a4(0x01)
	char UnknownData_1A4_1 : 7; // 0x1a4(0x01)
	char UnknownData_1A5[0x3]; // 0x1a5(0x03)
	struct UObject* CachedNavParent; // 0x1a8(0x08)

	void SetNavigationRelevancy(bool bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy // (Final|Native|Public|BlueprintCallable) // @ game+0x2a65e30
};

// Class NavigationSystem.NavigationQueryFilter
// Size: 0x48 (Inherited: 0x28)
struct UNavigationQueryFilter : UObject {
	struct TArray<struct FNavigationFilterArea> Areas; // 0x28(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x38(0x04)
	struct FNavigationFilterFlags ExcludeFlags; // 0x3c(0x04)
	char UnknownData_40[0x8]; // 0x40(0x08)
};

// Class NavigationSystem.NavigationData
// Size: 0x500 (Inherited: 0x2f0)
struct ANavigationData : AActor {
	char UnknownData_2F0[0x8]; // 0x2f0(0x08)
	struct UPrimitiveComponent* RenderingComp; // 0x2f8(0x08)
	char UnknownData_300[0x10]; // 0x300(0x10)
	struct FNavDataConfig NavDataConfig; // 0x310(0x98)
	char bEnableDrawing : 1; // 0x3a8(0x01)
	char bForceRebuildOnLoad : 1; // 0x3a8(0x01)
	char bAutoDestroyWhenNoNavigation : 1; // 0x3a8(0x01)
	char bCanBeMainNavData : 1; // 0x3a8(0x01)
	char bCanSpawnOnRebuild : 1; // 0x3a8(0x01)
	char bRebuildAtRuntime : 1; // 0x3a8(0x01)
	char UnknownData_3A8_6 : 2; // 0x3a8(0x01)
	char UnknownData_3A9[0x3]; // 0x3a9(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x3ac(0x01)
	char UnknownData_3AD[0x3]; // 0x3ad(0x03)
	float ObservedPathsTickInterval; // 0x3b0(0x04)
	uint32_t DataVersion; // 0x3b4(0x04)
	char UnknownData_3B8[0xe0]; // 0x3b8(0xe0)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x498(0x10)
	char UnknownData_4A8[0x58]; // 0x4a8(0x58)
};

// Class NavigationSystem.AbstractNavData
// Size: 0x500 (Inherited: 0x500)
struct AAbstractNavData : ANavigationData {
};

// Class NavigationSystem.AnnotationBlockingVolume
// Size: 0x330 (Inherited: 0x328)
struct AAnnotationBlockingVolume : AVolume {
	struct FNavAgentSelector UnsupportedAgents; // 0x328(0x04)
	char UnknownData_32C[0x4]; // 0x32c(0x04)
};

// Class NavigationSystem.CrowdManagerBase
// Size: 0x28 (Inherited: 0x28)
struct UCrowdManagerBase : UObject {
};

// Class NavigationSystem.NavActiveTilesInvokerInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavActiveTilesInvokerInterface : UInterface {
};

// Class NavigationSystem.NavArea_Default
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Default : UNavArea {
};

// Class NavigationSystem.NavArea_LowHeight
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_LowHeight : UNavArea {
};

// Class NavigationSystem.NavArea_Null
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Null : UNavArea {
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xc8 (Inherited: 0x48)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UNavArea* Agent0Area; // 0x48(0x08)
	struct UNavArea* Agent1Area; // 0x50(0x08)
	struct UNavArea* Agent2Area; // 0x58(0x08)
	struct UNavArea* Agent3Area; // 0x60(0x08)
	struct UNavArea* Agent4Area; // 0x68(0x08)
	struct UNavArea* Agent5Area; // 0x70(0x08)
	struct UNavArea* Agent6Area; // 0x78(0x08)
	struct UNavArea* Agent7Area; // 0x80(0x08)
	struct UNavArea* Agent8Area; // 0x88(0x08)
	struct UNavArea* Agent9Area; // 0x90(0x08)
	struct UNavArea* Agent10Area; // 0x98(0x08)
	struct UNavArea* Agent11Area; // 0xa0(0x08)
	struct UNavArea* Agent12Area; // 0xa8(0x08)
	struct UNavArea* Agent13Area; // 0xb0(0x08)
	struct UNavArea* Agent14Area; // 0xb8(0x08)
	struct UNavArea* Agent15Area; // 0xc0(0x08)
};

// Class NavigationSystem.NavCollision
// Size: 0xd8 (Inherited: 0x70)
struct UNavCollision : UNavCollisionBase {
	char UnknownData_70[0x10]; // 0x70(0x10)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x80(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x90(0x10)
	struct UNavArea* AreaClass; // 0xa0(0x08)
	char bGatherConvexGeometry : 1; // 0xa8(0x01)
	char bCreateOnClient : 1; // 0xa8(0x01)
	char UnknownData_A8_2 : 6; // 0xa8(0x01)
	char UnknownData_A9[0x2f]; // 0xa9(0x2f)
};

// Class NavigationSystem.NavigationGraph
// Size: 0x500 (Inherited: 0x500)
struct ANavigationGraph : ANavigationData {
};

// Class NavigationSystem.NavigationGraphNode
// Size: 0x2f0 (Inherited: 0x2f0)
struct ANavigationGraphNode : AActor {
};

// Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x2f0 (Inherited: 0x2d0)
struct UNavigationGraphNodeComponent : USceneComponent {
	struct FNavGraphNode Node; // 0x2c8(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x2e0(0x08)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x2e8(0x08)
};

// Class NavigationSystem.NavigationInvokerComponent
// Size: 0x188 (Inherited: 0x180)
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0x180(0x04)
	float TileRemovalRadius; // 0x184(0x04)
};

// Class NavigationSystem.NavigationPath
// Size: 0x88 (Inherited: 0x28)
struct UNavigationPath : UObject {
	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x28(0x10)
	struct TArray<struct FVector> PathPoints; // 0x38(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x48(0x01)
	char UnknownData_49[0x3f]; // 0x49(0x3f)

	bool IsValid(); // Function NavigationSystem.NavigationPath.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a62e70
	bool IsStringPulled(); // Function NavigationSystem.NavigationPath.IsStringPulled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a62e40
	bool IsPartial(); // Function NavigationSystem.NavigationPath.IsPartial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a62e10
	float GetPathLength(); // Function NavigationSystem.NavigationPath.GetPathLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a62720
	float GetPathCost(); // Function NavigationSystem.NavigationPath.GetPathCost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a624d0
	struct FString GetDebugString(); // Function NavigationSystem.NavigationPath.GetDebugString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2a623d0
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation); // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation // (Final|Native|Public|BlueprintCallable) // @ game+0x2a61fb0
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor); // Function NavigationSystem.NavigationPath.EnableDebugDrawing // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2a61ed0
};

// Class NavigationSystem.NavigationPathGenerator
// Size: 0x28 (Inherited: 0x28)
struct UNavigationPathGenerator : UInterface {
};

// Class NavigationSystem.NavigationSystemV1
// Size: 0x550 (Inherited: 0x28)
struct UNavigationSystemV1 : UNavigationSystemBase {
	struct ANavigationData* MainNavData; // 0x28(0x08)
	struct ANavigationData* AbstractNavData; // 0x30(0x08)
	struct FName DefaultAgentName; // 0x38(0x08)
	SoftClassProperty CrowdManagerClass; // 0x40(0x28)
	char bAutoCreateNavigationData : 1; // 0x68(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x68(0x01)
	char bAllowClientSideNavigation : 1; // 0x68(0x01)
	char bShouldDiscardSubLevelNavData : 1; // 0x68(0x01)
	char bTickWhilePaused : 1; // 0x68(0x01)
	char bSupportRebuilding : 1; // 0x68(0x01)
	char bInitialBuildingLocked : 1; // 0x68(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x69(0x01)
	char UnknownData_69_1 : 7; // 0x69(0x01)
	char UnknownData_6A[0x2]; // 0x6a(0x02)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x70(0x01)
	char UnknownData_70_1 : 7; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	float ActiveTilesUpdateInterval; // 0x74(0x04)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x78(0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct ANavigationData*> NavDataSet; // 0x90(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0xa0(0x10)
	char UnknownData_B0[0x10]; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xd0(0x10)
	char UnknownData_E0[0xe0]; // 0xe0(0xe0)
	struct TArray<struct AActor*> ActiveTilesInvokers; // 0x1c0(0x10)
	enum class FNavigationSystemRunMode OperationMode; // 0x1d0(0x01)
	char UnknownData_1D1[0x35b]; // 0x1d1(0x35b)
	float DirtyAreasUpdateFreq; // 0x52c(0x04)
	char UnknownData_530[0x20]; // 0x530(0x20)

	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0x2a63d80
	void SimpleMoveToLocation(struct AController* Controller, struct FVector Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2a63cc0
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x158b370
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // @ game+0x2a63c40
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode); // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode // (Final|Native|Public|BlueprintCallable) // @ game+0x2a63bc0
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // @ game+0x2a63ba0
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius); // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0x2a63aa0
	struct FVector ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector Point, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2a638d0
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume); // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated // (Final|Native|Public|BlueprintCallable) // @ game+0x2a63850
	bool NavigationRaycast(struct UObject* WorldContextObject, struct FVector RayStart, struct FVector RayEnd, struct FVector HitLocation, struct UNavigationQueryFilter* FilterClass, struct AController* Querier); // Function NavigationSystem.NavigationSystemV1.NavigationRaycast // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2a63640
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, struct UNavArea* OldArea, struct UNavArea* NewArea); // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData // (Final|Native|Public|BlueprintCallable) // @ game+0x2a63540
	bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector Point, struct FVector ProjectedLocation, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2a63360
	bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector Origin, struct FVector RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2a63160
	bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector Origin, struct FVector RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2a62f60
	bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector Origin, struct FVector RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2a62f60
	struct ANavigationData* K2_GetNavDataForActor(struct AActor* Actor); // Function NavigationSystem.NavigationSystemV1.K2_GetNavDataForActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2a62ea0
	bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2a62d90
	bool IsNavigationBeingBuilt(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2a62d10
	struct FVector GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2a62b40
	struct FVector GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2a62970
	enum class ENavigationQueryResult GetPathLength(struct UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, float PathLength, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathLength // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2a62750
	enum class ENavigationQueryResult GetPathCost(struct UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, float PathCost, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathCost // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x2a62500
	struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2a62450
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2a62220
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2a62030
};

// Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x58 (Inherited: 0x50)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x50(0x01)
	char bCreateOnClient : 1; // 0x50(0x01)
	char bAutoSpawnMissingNavData : 1; // 0x50(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50(0x01)
	char UnknownData_50_4 : 4; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// Class NavigationSystem.NavigationTestingActor
// Size: 0x3e8 (Inherited: 0x2f0)
struct ANavigationTestingActor : AActor {
	char UnknownData_2F0[0x10]; // 0x2f0(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x300(0x08)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x308(0x08)
	char bActAsNavigationInvoker : 1; // 0x310(0x01)
	char UnknownData_310_1 : 7; // 0x310(0x01)
	char UnknownData_311[0x7]; // 0x311(0x07)
	struct FNavAgentProperties NavAgentProps; // 0x318(0x38)
	struct FVector QueryingExtent; // 0x350(0x0c)
	char UnknownData_35C[0x4]; // 0x35c(0x04)
	struct ANavigationData* MyNavData; // 0x360(0x08)
	struct FVector ProjectedLocation; // 0x368(0x0c)
	char bProjectedLocationValid : 1; // 0x374(0x01)
	char bSearchStart : 1; // 0x374(0x01)
	char UnknownData_374_2 : 6; // 0x374(0x01)
	char UnknownData_375[0x3]; // 0x375(0x03)
	float CostLimitFactor; // 0x378(0x04)
	float MinimumCostLimit; // 0x37c(0x04)
	char bBacktracking : 1; // 0x380(0x01)
	char bUseHierarchicalPathfinding : 1; // 0x380(0x01)
	char bGatherDetailedInfo : 1; // 0x380(0x01)
	char bDrawDistanceToWall : 1; // 0x380(0x01)
	char bShowNodePool : 1; // 0x380(0x01)
	char bShowBestPath : 1; // 0x380(0x01)
	char bShowDiffWithPreviousStep : 1; // 0x380(0x01)
	char bShouldBeVisibleInGame : 1; // 0x380(0x01)
	char UnknownData_381[0x3]; // 0x381(0x03)
	enum class ENavCostDisplay CostDisplayMode; // 0x384(0x01)
	char UnknownData_385[0x3]; // 0x385(0x03)
	struct FVector2D TextCanvasOffset; // 0x388(0x08)
	char bPathExist : 1; // 0x390(0x01)
	char bPathIsPartial : 1; // 0x390(0x01)
	char bPathSearchOutOfNodes : 1; // 0x390(0x01)
	char UnknownData_390_3 : 5; // 0x390(0x01)
	char UnknownData_391[0x3]; // 0x391(0x03)
	float PathfindingTime; // 0x394(0x04)
	float PathCost; // 0x398(0x04)
	int32_t PathfindingSteps; // 0x39c(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x3a0(0x08)
	struct UNavigationQueryFilter* FilterClass; // 0x3a8(0x08)
	int32_t ShowStepIndex; // 0x3b0(0x04)
	float OffsetFromCornersDistance; // 0x3b4(0x04)
	char UnknownData_3B8[0x30]; // 0x3b8(0x30)
};

// Class NavigationSystem.NavLinkComponent
// Size: 0x4f0 (Inherited: 0x4d0)
struct UNavLinkComponent : UPrimitiveComponent {
	char UnknownData_4D0[0x8]; // 0x4d0(0x08)
	struct TArray<struct FNavigationLink> Links; // 0x4d8(0x10)
	char UnknownData_4E8[0x8]; // 0x4e8(0x08)
};

// Class NavigationSystem.NavLinkCustomComponent
// Size: 0x260 (Inherited: 0x1b0)
struct UNavLinkCustomComponent : UNavRelevantComponent {
	char UnknownData_1B0[0x8]; // 0x1b0(0x08)
	uint32_t NavLinkUserId; // 0x1b8(0x04)
	char UnknownData_1BC[0x4]; // 0x1bc(0x04)
	struct UNavArea* EnabledAreaClass; // 0x1c0(0x08)
	struct UNavArea* DisabledAreaClass; // 0x1c8(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x1d0(0x04)
	struct FVector LinkRelativeStart; // 0x1d4(0x0c)
	struct FVector LinkRelativeEnd; // 0x1e0(0x0c)
	enum class ENavLinkDirection LinkDirection; // 0x1ec(0x01)
	char UnknownData_1ED[0x3]; // 0x1ed(0x03)
	char bLinkEnabled : 1; // 0x1f0(0x01)
	char bNotifyWhenEnabled : 1; // 0x1f0(0x01)
	char bNotifyWhenDisabled : 1; // 0x1f0(0x01)
	char bCreateBoxObstacle : 1; // 0x1f0(0x01)
	char UnknownData_1F0_4 : 4; // 0x1f0(0x01)
	char UnknownData_1F1[0x3]; // 0x1f1(0x03)
	struct FVector ObstacleOffset; // 0x1f4(0x0c)
	struct FVector ObstacleExtent; // 0x200(0x0c)
	char UnknownData_20C[0x4]; // 0x20c(0x04)
	struct UNavArea* ObstacleAreaClass; // 0x210(0x08)
	float BroadcastRadius; // 0x218(0x04)
	float BroadcastInterval; // 0x21c(0x04)
	enum class ECollisionChannel BroadcastChannel; // 0x220(0x01)
	char UnknownData_221[0x3f]; // 0x221(0x3f)
};

// Class NavigationSystem.NavLinkCustomInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavLinkCustomInterface : UInterface {
};

// Class NavigationSystem.NavLinkHostInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavLinkHostInterface : UInterface {
};

// Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UNavLinkRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavLinkTrivial
// Size: 0x50 (Inherited: 0x50)
struct UNavLinkTrivial : UNavLinkDefinition {
};

// Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x330 (Inherited: 0x328)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x328(0x04)
	char UnknownData_32C[0x4]; // 0x32c(0x04)
};

// Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x4e0 (Inherited: 0x4d0)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
	char UnknownData_4D0[0x10]; // 0x4d0(0x10)
};

// Class NavigationSystem.NavModifierComponent
// Size: 0x210 (Inherited: 0x1b0)
struct UNavModifierComponent : UNavRelevantComponent {
	struct UNavArea* AreaClass; // 0x1b0(0x08)
	struct FVector FailsafeExtent; // 0x1b8(0x0c)
	char bIncludeAgentHeight : 1; // 0x1c4(0x01)
	char UnknownData_1C4_1 : 7; // 0x1c4(0x01)
	char UnknownData_1C5[0x4b]; // 0x1c5(0x4b)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x2a65db0
};

// Class NavigationSystem.NavModifierVolume
// Size: 0x338 (Inherited: 0x328)
struct ANavModifierVolume : AVolume {
	char UnknownData_328[0x8]; // 0x328(0x08)
	struct UNavArea* AreaClass; // 0x330(0x08)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x2a65d30
};

// Class NavigationSystem.NavNodeInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavNodeInterface : UInterface {
};

// Class NavigationSystem.NavSystemConfigOverride
// Size: 0x300 (Inherited: 0x2f0)
struct ANavSystemConfigOverride : AActor {
	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x2f0(0x08)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x2f8(0x01)
	char bLoadOnClient : 1; // 0x2f9(0x01)
	char UnknownData_2F9_1 : 7; // 0x2f9(0x01)
	char UnknownData_2FA[0x6]; // 0x2fa(0x06)
};

// Class NavigationSystem.NavTestRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UNavTestRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x48 (Inherited: 0x48)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
};

// Class NavigationSystem.RecastNavMesh
// Size: 0x5b8 (Inherited: 0x500)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x500(0x01)
	char bDrawPolyEdges : 1; // 0x500(0x01)
	char bDrawFilledPolys : 1; // 0x500(0x01)
	char bDrawNavMeshEdges : 1; // 0x500(0x01)
	char bDrawTileBounds : 1; // 0x500(0x01)
	char bDrawPathCollidingGeometry : 1; // 0x500(0x01)
	char bDrawTileLabels : 1; // 0x500(0x01)
	char bDrawPolygonLabels : 1; // 0x500(0x01)
	char bDrawDefaultPolygonCost : 1; // 0x501(0x01)
	char bDrawLabelsOnPathNodes : 1; // 0x501(0x01)
	char bDrawNavLinks : 1; // 0x501(0x01)
	char bDrawFailedNavLinks : 1; // 0x501(0x01)
	char bDrawClusters : 1; // 0x501(0x01)
	char bDrawOctree : 1; // 0x501(0x01)
	char bDrawOctreeDetails : 1; // 0x501(0x01)
	char bDrawMarkedForbiddenPolys : 1; // 0x501(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x502(0x01)
	char bDrawNavMesh : 1; // 0x502(0x01)
	char UnknownData_502_2 : 6; // 0x502(0x01)
	char UnknownData_503[0x1]; // 0x503(0x01)
	float DrawOffset; // 0x504(0x04)
	char bFixedTilePoolSize : 1; // 0x508(0x01)
	char UnknownData_508_1 : 7; // 0x508(0x01)
	char UnknownData_509[0x3]; // 0x509(0x03)
	int32_t TilePoolSize; // 0x50c(0x04)
	float TileSizeUU; // 0x510(0x04)
	float CellSize; // 0x514(0x04)
	float CellHeight; // 0x518(0x04)
	float AgentRadius; // 0x51c(0x04)
	float AgentHeight; // 0x520(0x04)
	float AgentMaxHeight; // 0x524(0x04)
	float AgentMaxSlope; // 0x528(0x04)
	float AgentMaxStepHeight; // 0x52c(0x04)
	float MinRegionArea; // 0x530(0x04)
	float MergeRegionSize; // 0x534(0x04)
	float MaxSimplificationError; // 0x538(0x04)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x53c(0x04)
	int32_t TileNumberHardLimit; // 0x540(0x04)
	int32_t PolyRefTileBits; // 0x544(0x04)
	int32_t PolyRefNavPolyBits; // 0x548(0x04)
	int32_t PolyRefSaltBits; // 0x54c(0x04)
	struct FVector NavMeshOriginOffset; // 0x550(0x0c)
	float DefaultDrawDistance; // 0x55c(0x04)
	float DefaultMaxSearchNodes; // 0x560(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x564(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x568(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x569(0x01)
	char UnknownData_56A[0x2]; // 0x56a(0x02)
	int32_t RegionChunkSplits; // 0x56c(0x04)
	int32_t LayerChunkSplits; // 0x570(0x04)
	char bSortNavigationAreasByCost : 1; // 0x574(0x01)
	char bPerformVoxelFiltering : 1; // 0x574(0x01)
	char bMarkLowHeightAreas : 1; // 0x574(0x01)
	char bFilterLowSpanSequences : 1; // 0x574(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x574(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x574(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x574(0x01)
	char bStoreEmptyTileLayers : 1; // 0x574(0x01)
	char bUseVirtualFilters : 1; // 0x575(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x575(0x01)
	char bUseVoxelCache : 1; // 0x575(0x01)
	char UnknownData_575_3 : 5; // 0x575(0x01)
	char UnknownData_576[0x2]; // 0x576(0x02)
	float TileSetUpdateInterval; // 0x578(0x04)
	float HeuristicScale; // 0x57c(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x580(0x04)
	char UnknownData_584[0x34]; // 0x584(0x34)

	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UNavArea* OldArea, struct UNavArea* NewArea, bool ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2a65ba0
};

// Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x40 (Inherited: 0x30)
struct URecastNavMeshDataChunk : UNavigationDataChunk {
	char UnknownData_30[0x10]; // 0x30(0x10)
};

