// Class Landscape.ControlPointMeshActor
// Size: 0x2f8 (Inherited: 0x2f0)
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x2f0(0x08)
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x580 (Inherited: 0x580)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x578(0x04)
};

// Class Landscape.LandscapeProxy
// Size: 0x610 (Inherited: 0x2f0)
struct ALandscapeProxy : AActor {
	struct ULandscapeSplinesComponent* SplineComponent; // 0x2f0(0x08)
	struct FGuid LandscapeGuid; // 0x2f8(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x308(0x08)
	int32_t MaxLODLevel; // 0x310(0x04)
	float LODDistanceFactor; // 0x314(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x318(0x01)
	char UnknownData_319[0x3]; // 0x319(0x03)
	float ComponentScreenSizeToUseSubSections; // 0x31c(0x04)
	float LOD0ScreenSize; // 0x320(0x04)
	float LOD0DistributionSetting; // 0x324(0x04)
	float LODDistributionSetting; // 0x328(0x04)
	float TessellationComponentScreenSize; // 0x32c(0x04)
	char UnknownData_330_0 : 7; // 0x330(0x01)
	bool UseTessellationComponentScreenSizeFalloff : 1; // 0x330(0x01)
	char UnknownData_331[0x3]; // 0x331(0x03)
	float TessellationComponentScreenSizeFalloff; // 0x334(0x04)
	int32_t OccluderGeometryLOD; // 0x338(0x04)
	int32_t StaticLightingLOD; // 0x33c(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x340(0x08)
	float StreamingDistanceMultiplier; // 0x348(0x04)
	char UnknownData_34C[0x4]; // 0x34c(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x350(0x08)
	char UnknownData_358[0x20]; // 0x358(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x378(0x08)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x380(0x10)
	char UnknownData_390_0 : 7; // 0x390(0x01)
	bool bMeshHoles : 1; // 0x390(0x01)
	enum class None MeshHolesMaxLod; // 0x391(0x01)
	char UnknownData_392[0x6]; // 0x392(0x06)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x398(0x10)
	int32_t VirtualTextureNumLods; // 0x3a8(0x04)
	int32_t VirtualTextureLodBias; // 0x3ac(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x3b0(0x01)
	char UnknownData_3B1[0x3]; // 0x3b1(0x03)
	float NegativeZBoundsExtension; // 0x3b4(0x04)
	float PositiveZBoundsExtension; // 0x3b8(0x04)
	char UnknownData_3BC[0x4]; // 0x3bc(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x3c0(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x3d0(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x3e0(0x10)
	char UnknownData_3F0[0x64]; // 0x3f0(0x64)
	char UnknownData_454_0 : 7; // 0x454(0x01)
	bool bHasLandscapeGrass : 1; // 0x454(0x01)
	char UnknownData_455[0x3]; // 0x455(0x03)
	float StaticLightingResolution; // 0x458(0x04)
	char bCastStaticShadow : 1; // 0x45c(0x01)
	char bCastShadowAsTwoSided : 1; // 0x45c(0x01)
	char bCastFarShadow : 1; // 0x45c(0x01)
	char UnknownData_45C_3 : 5; // 0x45c(0x01)
	char UnknownData_45D[0x3]; // 0x45d(0x03)
	char bAffectDistanceFieldLighting : 1; // 0x460(0x01)
	char UnknownData_460_1 : 7; // 0x460(0x01)
	struct FDecalChannels DecalChannels; // 0x461(0x01)
	struct FLightingChannels LightingChannels; // 0x462(0x01)
	char UnknownData_463[0x1]; // 0x463(0x01)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x464(0x01)
	char bRenderCustomDepth : 1; // 0x464(0x01)
	char UnknownData_464_2 : 6; // 0x464(0x01)
	char UnknownData_465[0x3]; // 0x465(0x03)
	int32_t CustomDepthStencilValue; // 0x468(0x04)
	float LDMaxDrawDistance; // 0x46c(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x470(0x18)
	int32_t CollisionMipLevel; // 0x488(0x04)
	int32_t SimpleCollisionMipLevel; // 0x48c(0x04)
	float CollisionThickness; // 0x490(0x04)
	char UnknownData_494[0x4]; // 0x494(0x04)
	struct FBodyInstance BodyInstance; // 0x498(0x110)
	char bGenerateOverlapEvents : 1; // 0x5a8(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x5a8(0x01)
	char UnknownData_5A8_2 : 6; // 0x5a8(0x01)
	char UnknownData_5A9[0x3]; // 0x5a9(0x03)
	int32_t ComponentSizeQuads; // 0x5ac(0x04)
	int32_t SubsectionSizeQuads; // 0x5b0(0x04)
	int32_t NumSubsections; // 0x5b4(0x04)
	char bUsedForNavigation : 1; // 0x5b8(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x5b8(0x01)
	char UnknownData_5B8_2 : 6; // 0x5b8(0x01)
	char UnknownData_5B9[0x3]; // 0x5b9(0x03)
	char UnknownData_5BC_0 : 7; // 0x5bc(0x01)
	bool bUseDynamicMaterialInstance : 1; // 0x5bc(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x5bd(0x01)
	char UnknownData_5BE_0 : 7; // 0x5be(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices : 1; // 0x5be(0x01)
	char UnknownData_5BF_0 : 7; // 0x5bf(0x01)
	bool bHasLayersContent : 1; // 0x5bf(0x01)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x5c0(0x50)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2710270
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x27101b0
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x27100e0
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x15c6560
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeProxy.EditorApplySpline // (Final|Native|Public|BlueprintCallable) // @ game+0x270fdd0
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x155f030
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x270fd50
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize // (Native|Public|BlueprintCallable) // @ game+0x270fcd0
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor // (Native|Public|BlueprintCallable) // @ game+0x15148c0
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections // (Native|Public|BlueprintCallable) // @ game+0x15fd230
};

// Class Landscape.Landscape
// Size: 0x610 (Inherited: 0x610)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x2f0 (Inherited: 0x2f0)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0xe8aaf0
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void Initialize(struct FTransform InLandscapeTransform, struct FIntPoint InLandscapeSize, struct FIntPoint InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x1a35c70
	void GetBlueprintRenderDependencies(struct TArray<struct UTexture2D*> OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
};

// Class Landscape.LandscapeComponent
// Size: 0x6e0 (Inherited: 0x4d0)
struct ULandscapeComponent : UPrimitiveComponent {
	char UnknownData_4D0[0x8]; // 0x4d0(0x08)
	int32_t SectionBaseX; // 0x4d8(0x04)
	int32_t SectionBaseY; // 0x4dc(0x04)
	int32_t ComponentSizeQuads; // 0x4e0(0x04)
	int32_t SubsectionSizeQuads; // 0x4e4(0x04)
	int32_t NumSubsections; // 0x4e8(0x04)
	char UnknownData_4EC[0x4]; // 0x4ec(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x4f0(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x4f8(0x08)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x500(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x510(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x520(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x530(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x540(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x550(0x08)
	char UnknownData_558[0x8]; // 0x558(0x08)
	struct FVector4 WeightmapScaleBias; // 0x560(0x10)
	float WeightmapSubsectionOffset; // 0x570(0x04)
	char UnknownData_574[0xc]; // 0x574(0x0c)
	struct FVector4 HeightmapScaleBias; // 0x580(0x10)
	struct FBox CachedLocalBox; // 0x590(0x1c)
	char UnknownData_5AC[0x4]; // 0x5ac(0x04)
	LazyObjectProperty CollisionComponent; // 0x5b0(0x20)
	struct UTexture2D* HeightmapTexture; // 0x5d0(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x5d8(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x5e8(0x10)
	struct FGuid MapBuildDataId; // 0x5f8(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x608(0x10)
	int32_t CollisionMipLevel; // 0x618(0x04)
	int32_t SimpleCollisionMipLevel; // 0x61c(0x04)
	float NegativeZBoundsExtension; // 0x620(0x04)
	float PositiveZBoundsExtension; // 0x624(0x04)
	float StaticLightingResolution; // 0x628(0x04)
	int32_t ForcedLOD; // 0x62c(0x04)
	int32_t LODBias; // 0x630(0x04)
	struct FGuid StateId; // 0x634(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x644(0x10)
	char UnknownData_654[0x4]; // 0x654(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x658(0x08)
	enum class None MobileBlendableLayerMask; // 0x660(0x01)
	char UnknownData_661[0x7]; // 0x661(0x07)
	struct UMaterialInterface* MobileMaterialInterface; // 0x668(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x670(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x680(0x10)
	char UnknownData_690[0x50]; // 0x690(0x50)

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x270e7f0
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x270e710
	float EditorGetPaintLayerWeightAtLocation(struct FVector InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x270e710
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x2f0 (Inherited: 0x2f0)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x340 (Inherited: 0x2f0)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char UnknownData_2F0[0x50]; // 0x2f0(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x60 (Inherited: 0x28)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28(0x10)
	char bEnableDensityScaling : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct UStaticMesh* GrassMesh; // 0x40(0x08)
	float GrassDensity; // 0x48(0x04)
	float PlacementJitter; // 0x4c(0x04)
	int32_t StartCullDistance; // 0x50(0x04)
	int32_t EndCullDistance; // 0x54(0x04)
	char UnknownData_58_0 : 7; // 0x58(0x01)
	bool RandomRotation : 1; // 0x58(0x01)
	char UnknownData_59_0 : 7; // 0x59(0x01)
	bool AlignToSurface : 1; // 0x59(0x01)
	char UnknownData_5A[0x6]; // 0x5a(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x5c0 (Inherited: 0x4d0)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x4d0(0x10)
	int32_t SectionBaseX; // 0x4e0(0x04)
	int32_t SectionBaseY; // 0x4e4(0x04)
	int32_t CollisionSizeQuads; // 0x4e8(0x04)
	float CollisionScale; // 0x4ec(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x4f0(0x04)
	char UnknownData_4F4[0x4]; // 0x4f4(0x04)
	struct TArray<enum class None> CollisionQuadFlags; // 0x4f8(0x10)
	struct FGuid HeightfieldGuid; // 0x508(0x10)
	struct FBox CachedLocalBox; // 0x518(0x1c)
	char UnknownData_534[0x4]; // 0x534(0x04)
	LazyObjectProperty RenderComponent; // 0x538(0x20)
	char UnknownData_558[0x10]; // 0x558(0x10)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x568(0x10)
	char UnknownData_578[0x48]; // 0x578(0x48)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x270e880
};

// Class Landscape.LandscapeInfo
// Size: 0x210 (Inherited: 0x28)
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28(0x20)
	struct FGuid LandscapeGuid; // 0x48(0x10)
	int32_t ComponentSizeQuads; // 0x58(0x04)
	int32_t SubsectionSizeQuads; // 0x5c(0x04)
	int32_t ComponentNumSubsections; // 0x60(0x04)
	struct FVector DrawScale; // 0x64(0x0c)
	char UnknownData_70[0xa0]; // 0x70(0xa0)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x110(0x10)
	char UnknownData_120[0xf0]; // 0x120(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x28)
struct ULandscapeInfoMap : UObject {
	char UnknownData_28[0x58]; // 0x28(0x58)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x28(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x08)
	float Hardness; // 0x38(0x04)
	float CameraOffset; // 0x3c(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x40(0x10)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x480 (Inherited: 0x468)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x468(0x10)
	char bIsLayerThumbnail : 1; // 0x478(0x01)
	char bDisableTessellation : 1; // 0x478(0x01)
	char bMobile : 1; // 0x478(0x01)
	char bEditorToolUsage : 1; // 0x478(0x01)
	char UnknownData_478_4 : 4; // 0x478(0x01)
	char UnknownData_479[0x7]; // 0x479(0x07)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x5d0 (Inherited: 0x5c0)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x5b8(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x2f8 (Inherited: 0x2f0)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x2f0(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x5a0 (Inherited: 0x580)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x578(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x588(0x10)
	int8_t ProxyLOD; // 0x598(0x01)
};

// Class Landscape.LandscapeSettings
// Size: 0x40 (Inherited: 0x38)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x500 (Inherited: 0x4d0)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x4d0(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x4e0(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x4f0(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x2711c40
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xa8 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	float Width; // 0x40(0x04)
	float LayerWidthRatio; // 0x44(0x04)
	float SideFalloff; // 0x48(0x04)
	float LeftSideFalloffFactor; // 0x4c(0x04)
	float RightSideFalloffFactor; // 0x50(0x04)
	float LeftSideLayerFalloffFactor; // 0x54(0x04)
	float RightSideLayerFalloffFactor; // 0x58(0x04)
	float EndFalloff; // 0x5c(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x60(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xa0(0x08)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb0 (Inherited: 0x28)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28(0x30)
	struct FInterpCurveVector SplineInfo; // 0x58(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa0(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x630 (Inherited: 0x610)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x610(0x20)
};

// Class Landscape.LandscapeSubsystem
// Size: 0x228 (Inherited: 0x30)
struct ULandscapeSubsystem : UWorldSubsystem {
	char UnknownData_30[0x1f8]; // 0x30(0x1f8)
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x28(0x20)
	struct FGuid LayerGuid; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0x40(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0x40(0x10)
	struct FGuid ExpressionGUID; // 0x50(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0x40(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x41(0x01)
	char UnknownData_42[0x2]; // 0x42(0x02)
	float MappingScale; // 0x44(0x04)
	float MappingRotation; // 0x48(0x04)
	float MappingPanU; // 0x4c(0x04)
	float MappingPanV; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0x40(0x08)
	float PreviewWeight; // 0x48(0x04)
	struct FGuid ExpressionGUID; // 0x4c(0x10)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput LayerNotUsed; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	char PreviewUsed : 1; // 0x70(0x01)
	char UnknownData_70_1 : 7; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	struct FGuid ExpressionGUID; // 0x74(0x10)
	char UnknownData_84[0x4]; // 0x84(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Layer; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	float PreviewWeight; // 0x70(0x04)
	struct FVector ConstBase; // 0x74(0x0c)
	struct FGuid ExpressionGUID; // 0x80(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid ExpressionGUID; // 0x40(0x10)
};

