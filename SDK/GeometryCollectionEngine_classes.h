// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x4f0 (Inherited: 0x2d0)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x2c8(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x2c8(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x2c8(0x01)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x2cc(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x2e4(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x2fc(0x18)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x318(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x368(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x3b8(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x3c8(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x3d8(0x10)
	char UnknownData_3E8_3 : 5; // 0x3e8(0x01)
	char UnknownData_3E9[0x107]; // 0x3e9(0x107)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData> TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3970ee0
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData> CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3970df0
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData> BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3970d00
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3970c60
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x3970bd0
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3970aa0
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x3970a10
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3970970
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x39708e0
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x3970860
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x15c6560
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3970650
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x3970390
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x15c6560
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x300 (Inherited: 0x2f0)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x2f0(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x2f8(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3970680
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x50 (Inherited: 0x28)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x28(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x38(0x08)
	struct FGuid CompatibleCollectionState; // 0x40(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0x920 (Inherited: 0x500)
struct UGeometryCollectionComponent : UMeshComponent {
	struct AChaosSolverActor* ChaosSolverActor; // 0x500(0x08)
	char UnknownData_508[0xe0]; // 0x508(0xe0)
	struct UGeometryCollection* RestCollection; // 0x5e8(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x5f0(0x10)
	char UnknownData_600_0 : 7; // 0x600(0x01)
	bool Simulating : 1; // 0x600(0x01)
	char UnknownData_601[0x7]; // 0x601(0x07)
	enum class EObjectStateTypeEnum ObjectType; // 0x608(0x01)
	char UnknownData_609_0 : 7; // 0x609(0x01)
	bool EnableClustering : 1; // 0x609(0x01)
	char UnknownData_60A[0x2]; // 0x60a(0x02)
	int32_t ClusterGroupIndex; // 0x60c(0x04)
	int32_t MaxClusterLevel; // 0x610(0x04)
	char UnknownData_614[0x4]; // 0x614(0x04)
	struct TArray<float> DamageThreshold; // 0x618(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x628(0x01)
	char UnknownData_629[0x3]; // 0x629(0x03)
	int32_t CollisionGroup; // 0x62c(0x04)
	float CollisionSampleFraction; // 0x630(0x04)
	float LinearEtherDrag; // 0x634(0x04)
	float AngularEtherDrag; // 0x638(0x04)
	char UnknownData_63C[0x4]; // 0x63c(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x640(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x648(0x01)
	char UnknownData_649[0x3]; // 0x649(0x03)
	struct FVector InitialLinearVelocity; // 0x64c(0x0c)
	struct FVector InitialAngularVelocity; // 0x658(0x0c)
	char UnknownData_664[0x4]; // 0x664(0x04)
	struct FGeomComponentCacheParameters CacheParameters; // 0x668(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x6b8(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x6c8(0x10)
	char UnknownData_6D8[0x18]; // 0x6d8(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x6f0(0x10)
	float DesiredCacheTime; // 0x700(0x04)
	char UnknownData_704_0 : 7; // 0x704(0x01)
	bool CachePlayback : 1; // 0x704(0x01)
	char UnknownData_705[0x3]; // 0x705(0x03)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x708(0x10)
	char UnknownData_718_0 : 7; // 0x718(0x01)
	bool bNotifyBreaks : 1; // 0x718(0x01)
	char UnknownData_719_0 : 7; // 0x719(0x01)
	bool bNotifyCollisions : 1; // 0x719(0x01)
	char UnknownData_71A[0x1de]; // 0x71a(0x1de)
	struct UBodySetup* DummyBodySetup; // 0x8f8(0x08)
	char UnknownData_900[0x20]; // 0x900(0x20)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|Native|Public|BlueprintCallable) // @ game+0x3970b40
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x39704e0
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3970410
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x3d8 (Inherited: 0x2f0)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x2f0(0x01)
	char UnknownData_2F1[0x7]; // 0x2f1(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x2f8(0x18)
	char UnknownData_310_0 : 7; // 0x310(0x01)
	bool bDebugDrawWholeCollection : 1; // 0x310(0x01)
	char UnknownData_311_0 : 7; // 0x311(0x01)
	bool bDebugDrawHierarchy : 1; // 0x311(0x01)
	char UnknownData_312_0 : 7; // 0x312(0x01)
	bool bDebugDrawClustering : 1; // 0x312(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x313(0x01)
	char UnknownData_314_0 : 7; // 0x314(0x01)
	bool bShowRigidBodyId : 1; // 0x314(0x01)
	char UnknownData_315_0 : 7; // 0x315(0x01)
	bool bShowRigidBodyCollision : 1; // 0x315(0x01)
	char UnknownData_316_0 : 7; // 0x316(0x01)
	bool bCollisionAtOrigin : 1; // 0x316(0x01)
	char UnknownData_317_0 : 7; // 0x317(0x01)
	bool bShowRigidBodyTransform : 1; // 0x317(0x01)
	char UnknownData_318_0 : 7; // 0x318(0x01)
	bool bShowRigidBodyInertia : 1; // 0x318(0x01)
	char UnknownData_319_0 : 7; // 0x319(0x01)
	bool bShowRigidBodyVelocity : 1; // 0x319(0x01)
	char UnknownData_31A_0 : 7; // 0x31a(0x01)
	bool bShowRigidBodyForce : 1; // 0x31a(0x01)
	char UnknownData_31B_0 : 7; // 0x31b(0x01)
	bool bShowRigidBodyInfos : 1; // 0x31b(0x01)
	char UnknownData_31C_0 : 7; // 0x31c(0x01)
	bool bShowTransformIndex : 1; // 0x31c(0x01)
	char UnknownData_31D_0 : 7; // 0x31d(0x01)
	bool bShowTransform : 1; // 0x31d(0x01)
	char UnknownData_31E_0 : 7; // 0x31e(0x01)
	bool bShowParent : 1; // 0x31e(0x01)
	char UnknownData_31F_0 : 7; // 0x31f(0x01)
	bool bShowLevel : 1; // 0x31f(0x01)
	char UnknownData_320_0 : 7; // 0x320(0x01)
	bool bShowConnectivityEdges : 1; // 0x320(0x01)
	char UnknownData_321_0 : 7; // 0x321(0x01)
	bool bShowGeometryIndex : 1; // 0x321(0x01)
	char UnknownData_322_0 : 7; // 0x322(0x01)
	bool bShowGeometryTransform : 1; // 0x322(0x01)
	char UnknownData_323_0 : 7; // 0x323(0x01)
	bool bShowBoundingBox : 1; // 0x323(0x01)
	char UnknownData_324_0 : 7; // 0x324(0x01)
	bool bShowFaces : 1; // 0x324(0x01)
	char UnknownData_325_0 : 7; // 0x325(0x01)
	bool bShowFaceIndices : 1; // 0x325(0x01)
	char UnknownData_326_0 : 7; // 0x326(0x01)
	bool bShowFaceNormals : 1; // 0x326(0x01)
	char UnknownData_327_0 : 7; // 0x327(0x01)
	bool bShowSingleFace : 1; // 0x327(0x01)
	int32_t SingleFaceIndex; // 0x328(0x04)
	char UnknownData_32C_0 : 7; // 0x32c(0x01)
	bool bShowVertices : 1; // 0x32c(0x01)
	char UnknownData_32D_0 : 7; // 0x32d(0x01)
	bool bShowVertexIndices : 1; // 0x32d(0x01)
	char UnknownData_32E_0 : 7; // 0x32e(0x01)
	bool bShowVertexNormals : 1; // 0x32e(0x01)
	char UnknownData_32F_0 : 7; // 0x32f(0x01)
	bool bUseActiveVisualization : 1; // 0x32f(0x01)
	float PointThickness; // 0x330(0x04)
	float LineThickness; // 0x334(0x04)
	char UnknownData_338_0 : 7; // 0x338(0x01)
	bool bTextShadow : 1; // 0x338(0x01)
	char UnknownData_339[0x3]; // 0x339(0x03)
	float TextScale; // 0x33c(0x04)
	float NormalScale; // 0x340(0x04)
	float AxisScale; // 0x344(0x04)
	float ArrowScale; // 0x348(0x04)
	struct FColor RigidBodyIdColor; // 0x34c(0x04)
	float RigidBodyTransformScale; // 0x350(0x04)
	struct FColor RigidBodyCollisionColor; // 0x354(0x04)
	struct FColor RigidBodyInertiaColor; // 0x358(0x04)
	struct FColor RigidBodyVelocityColor; // 0x35c(0x04)
	struct FColor RigidBodyForceColor; // 0x360(0x04)
	struct FColor RigidBodyInfoColor; // 0x364(0x04)
	struct FColor TransformIndexColor; // 0x368(0x04)
	float TransformScale; // 0x36c(0x04)
	struct FColor LevelColor; // 0x370(0x04)
	struct FColor ParentColor; // 0x374(0x04)
	float ConnectivityEdgeThickness; // 0x378(0x04)
	struct FColor GeometryIndexColor; // 0x37c(0x04)
	float GeometryTransformScale; // 0x380(0x04)
	struct FColor BoundingBoxColor; // 0x384(0x04)
	struct FColor FaceColor; // 0x388(0x04)
	struct FColor FaceIndexColor; // 0x38c(0x04)
	struct FColor FaceNormalColor; // 0x390(0x04)
	struct FColor SingleFaceColor; // 0x394(0x04)
	struct FColor VertexColor; // 0x398(0x04)
	struct FColor VertexIndexColor; // 0x39c(0x04)
	struct FColor VertexNormalColor; // 0x3a0(0x04)
	char UnknownData_3A4[0x4]; // 0x3a4(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x3a8(0x08)
	char UnknownData_3B0[0x28]; // 0x3b0(0x28)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0x198 (Inherited: 0x180)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0x180(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0x188(0x08)
	char UnknownData_190[0x8]; // 0x190(0x08)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0xd0 (Inherited: 0x28)
struct UGeometryCollection : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	enum class ECollisionTypeEnum CollisionType; // 0x40(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x41(0x01)
	char UnknownData_42[0x2]; // 0x42(0x02)
	int32_t MinLevelSetResolution; // 0x44(0x04)
	int32_t MaxLevelSetResolution; // 0x48(0x04)
	int32_t MinClusterLevelSetResolution; // 0x4c(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x50(0x04)
	float CollisionObjectReductionPercentage; // 0x54(0x04)
	char UnknownData_58_0 : 7; // 0x58(0x01)
	bool bMassAsDensity : 1; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	float Mass; // 0x5c(0x04)
	float MinimumMassClamp; // 0x60(0x04)
	float CollisionParticlesFraction; // 0x64(0x04)
	int32_t MaximumCollisionParticles; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x70(0x10)
	char UnknownData_80_0 : 7; // 0x80(0x01)
	bool EnableRemovePiecesOnFracture : 1; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0x88(0x10)
	struct FGuid PersistentGuid; // 0x98(0x10)
	struct FGuid StateGuid; // 0xa8(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xb8(0x04)
	char UnknownData_BC[0x14]; // 0xbc(0x14)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x390 (Inherited: 0x2f0)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x2f0(0x08)
	struct UMaterial* RayMarchMaterial; // 0x2f8(0x08)
	float SurfaceTolerance; // 0x300(0x04)
	float Isovalue; // 0x304(0x04)
	char UnknownData_308_0 : 7; // 0x308(0x01)
	bool Enabled : 1; // 0x308(0x01)
	char UnknownData_309_0 : 7; // 0x309(0x01)
	bool RenderVolumeBoundingBox : 1; // 0x309(0x01)
	char UnknownData_30A[0x86]; // 0x30a(0x86)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x208 (Inherited: 0x180)
struct USkeletalMeshSimulationComponent : UActorComponent {
	char UnknownData_180[0x8]; // 0x180(0x08)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x188(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x190(0x08)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0x198(0x08)
	char UnknownData_1A0_0 : 7; // 0x1a0(0x01)
	bool bSimulating : 1; // 0x1a0(0x01)
	char UnknownData_1A1_0 : 7; // 0x1a1(0x01)
	bool bNotifyCollisions : 1; // 0x1a1(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0x1a2(0x01)
	char UnknownData_1A3[0x1]; // 0x1a3(0x01)
	float Density; // 0x1a4(0x04)
	float MinMass; // 0x1a8(0x04)
	float MaxMass; // 0x1ac(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0x1b0(0x01)
	char UnknownData_1B1[0x3]; // 0x1b1(0x03)
	float ImplicitShapeParticlesPerUnitArea; // 0x1b4(0x04)
	int32_t ImplicitShapeMinNumParticles; // 0x1b8(0x04)
	int32_t ImplicitShapeMaxNumParticles; // 0x1bc(0x04)
	int32_t MinLevelSetResolution; // 0x1c0(0x04)
	int32_t MaxLevelSetResolution; // 0x1c4(0x04)
	int32_t CollisionGroup; // 0x1c8(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x1cc(0x01)
	char UnknownData_1CD[0x3]; // 0x1cd(0x03)
	struct FVector InitialLinearVelocity; // 0x1d0(0x0c)
	struct FVector InitialAngularVelocity; // 0x1dc(0x0c)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x1e8(0x10)
	char UnknownData_1F8[0x10]; // 0x1f8(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x208 (Inherited: 0x180)
struct UStaticMeshSimulationComponent : UActorComponent {
	char UnknownData_180[0x8]; // 0x180(0x08)
	char UnknownData_188_0 : 7; // 0x188(0x01)
	bool Simulating : 1; // 0x188(0x01)
	char UnknownData_189_0 : 7; // 0x189(0x01)
	bool bNotifyCollisions : 1; // 0x189(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0x18a(0x01)
	char UnknownData_18B[0x1]; // 0x18b(0x01)
	float Mass; // 0x18c(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0x190(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x191(0x01)
	char UnknownData_192[0x2]; // 0x192(0x02)
	int32_t MinLevelSetResolution; // 0x194(0x04)
	int32_t MaxLevelSetResolution; // 0x198(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x19c(0x01)
	char UnknownData_19D[0x3]; // 0x19d(0x03)
	struct FVector InitialLinearVelocity; // 0x1a0(0x0c)
	struct FVector InitialAngularVelocity; // 0x1ac(0x0c)
	float DamageThreshold; // 0x1b8(0x04)
	char UnknownData_1BC[0x4]; // 0x1bc(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x1c0(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x1c8(0x08)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x1d0(0x10)
	char UnknownData_1E0[0x10]; // 0x1e0(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x1f0(0x10)
	char UnknownData_200[0x8]; // 0x200(0x08)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState // (Final|Native|Public|BlueprintCallable) // @ game+0x3970630
};

