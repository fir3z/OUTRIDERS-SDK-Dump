// Enum AIFramework.ESmartObjectAttachPoint
enum class ESmartObjectAttachPoint : uint8 {
	LeftHand,
	RightHand,
	ESmartObjectAttachPoint_MAX,
};

// Enum AIFramework.ESmartObjectAnimNotifyType
enum class ESmartObjectAnimNotifyType : uint8 {
	AttachItem,
	DetachItem,
	PlayAnim,
	CustomType,
	ESmartObjectAnimNotifyType_MAX,
};

// Enum AIFramework.EFWDiscreteDistance
enum class EFWDiscreteDistance : uint8 {
	Invalid,
	Melee,
	Close,
	Short,
	Medium,
	Far,
	MAX,
};

// Enum AIFramework.EFWBehaviorTag
enum class EFWBehaviorTag : uint8 {
	Invalid,
	Aggressive,
	Charge,
	RunAway,
	Fallback,
	EFWBehaviorTag_MAX,
};

// Enum AIFramework.EFWAITaskResult
enum class EFWAITaskResult : uint8 {
	NotStarted,
	InProgress,
	Success,
	Failed,
	Aborted,
	EFWAITaskResult_MAX,
};

// Enum AIFramework.ERouteType
enum class ERouteType : uint8 {
	Linear,
	Loop,
	Circle,
	ERouteType_MAX,
};

// Enum AIFramework.ERouteDirection
enum class ERouteDirection : uint8 {
	Forward,
	Reverse,
	ERouteDirection_MAX,
};

// Enum AIFramework.EReactionType
enum class EReactionType : uint8 {
	LookAt,
	LookAtAndTalk,
	LookAtWithAnimation,
	LookAtWithAnimationAndTalk,
	Animation,
	AnimationAndTalk,
	Disabled,
	EReactionType_MAX,
};

// Enum AIFramework.ESmartObjectUsageState
enum class ESmartObjectUsageState : uint8 {
	PreEnter,
	Enter,
	Loop,
	SyncLoop,
	PostSync,
	End,
	ForceOut,
	NotInUse,
	ESmartObjectUsageState_MAX,
};

// Enum AIFramework.ESmartObjectType
enum class ESmartObjectType : uint8 {
	Simple,
	Complex,
	Synchronized,
	ESmartObjectType_MAX,
};

// Enum AIFramework.EWeaponRangeType
enum class EWeaponRangeType : uint8 {
	FullRange,
	EffectiveRange,
	EWeaponRangeType_MAX,
};

// Enum AIFramework.EFWValidateCoverSelector
enum class EFWValidateCoverSelector : uint8 {
	Current,
	Destination,
	EFWValidateCoverSelector_MAX,
};

// Enum AIFramework.EFWCombatArenaScenario
enum class EFWCombatArenaScenario : uint8 {
	None,
	FallbackOnly,
	FallbackAndAssoult,
	FollowPlayer,
	EFWCombatArenaScenario_MAX,
};

// Enum AIFramework.ECirclesSpacingMethod
enum class ECirclesSpacingMethod : uint8 {
	BySpaceBetween,
	ByNumberOfCircles,
	ECirclesSpacingMethod_MAX,
};

// Enum AIFramework.ENavPathType
enum class ENavPathType : uint8 {
	Line,
	Spline,
	ENavPathType_MAX,
};

// Enum AIFramework.ESpawnState
enum class ESpawnState : uint8 {
	Character,
	Character_FinishSpawning,
	Character_WaitingForSlicedSpawn,
	Character_AISpawnStarted,
	Inventory,
	Controller,
	StartCustomization,
	WaitForCustomization,
	Possess,
	Possess2,
	Possess3,
	Goals,
	BehaviorTree,
	PreFinish,
	SetTransform,
	PostSpawnAction,
	End,
	ESpawnState_MAX,
};

// Enum AIFramework.EFWAIWeaponSlot
enum class EFWAIWeaponSlot : uint8 {
	PrimaryWeaopn,
	SecondaryWeapon,
	SideArmWeapon,
	MAX,
};

// Enum AIFramework.ECADestination
enum class ECADestination : uint8 {
	None,
	Center,
	Closest,
	Random,
	Covers,
	ECADestination_MAX,
};

// Enum AIFramework.EEQSNamedQuery
enum class EEQSNamedQuery : uint8 {
	FindCover,
	ValidateCover,
	FindFireSlot,
	ValidateFireSlot,
	SelectEnemy,
	MoveCloser,
	MoveAway,
	MoveAwayFromDanger,
	AdjustCover,
	StepAside,
	FindFlankingCover,
	FindCoverAfterDamagedInCover,
	MAX,
};

// Enum AIFramework.EOneShotActionAnimation
enum class EOneShotActionAnimation : uint8 {
	StepLeftShooting,
	StepRightShooting,
	StepForwardShooting,
	StepBackwardShooting,
	InPlaceShooting,
	FakeInPlaceShooting,
	MAX,
};

// Enum AIFramework.EAIWeaponShootingType
enum class EAIWeaponShootingType : uint8 {
	NormalShooting,
	NormalSpreadShooting,
	GangstaShooting,
	GangstaSpreadShooting,
	MAX,
};

// Enum AIFramework.EFWForceFireOrder
enum class EFWForceFireOrder : uint8 {
	Blueprint,
	Goal,
	Logic,
	MAX,
};

// Enum AIFramework.EBTCombatFlowAreas
enum class EBTCombatFlowAreas : uint8 {
	ActionArea,
	GoalSpace,
	EBTCombatFlowAreas_MAX,
};

// Enum AIFramework.EFWArithmeticOperation
enum class EFWArithmeticOperation : uint8 {
	Equal,
	NotEqual,
	Less,
	LessOrEqual,
	Greater,
	GreaterOrEqual,
	EFWArithmeticOperation_MAX,
};

// Enum AIFramework.EFWAICoverSlotCustomFilter
enum class EFWAICoverSlotCustomFilter : uint8 {
	All,
	WithPopupActionOnly,
	WithoutPopupAction,
	WithSideActions,
	WithAnyAction,
	EFWAICoverSlotCustomFilter_MAX,
};

// Enum AIFramework.EFWSpaceWrapping2TurnMode
enum class EFWSpaceWrapping2TurnMode : uint8 {
	UseRootMotionTurn,
	OverwriteRootMotionTurn,
	EFWSpaceWrapping2TurnMode_MAX,
};

// Enum AIFramework.EFWSpaceWrapping2TurnDirection
enum class EFWSpaceWrapping2TurnDirection : uint8 {
	Free,
	OnlyLeftThenStop,
	OnlyRightThenStop,
	OnlyLeftThenFree,
	OnlyRightThenFree,
	EFWSpaceWrapping2TurnDirection_MAX,
};

// Enum AIFramework.EFWSpaceWrappingType
enum class EFWSpaceWrappingType : uint8 {
	CurrentSection,
	WholeMontage,
	CurrentNotify,
	EFWSpaceWrappingType_MAX,
};

// Enum AIFramework.EFWVerticalSpaceWrappingDistanceMode
enum class EFWVerticalSpaceWrappingDistanceMode : uint8 {
	FromCentre,
	FromCapsuleBottom,
	FromCapsuleTop,
	EFWVerticalSpaceWrappingDistanceMode_MAX,
};

// Enum AIFramework.EAccumulatorAccessType
enum class EAccumulatorAccessType : uint8 {
	Allow,
	Deny,
	EAccumulatorAccessType_MAX,
};

// Enum AIFramework.EGameplayTagMatchingType
enum class EGameplayTagMatchingType : uint8 {
	HasGameplayTag,
	HasAllGameplayTags,
	HasAnyGameplayTag,
	EGameplayTagMatchingType_MAX,
};

// Enum AIFramework.ECoverMember
enum class ECoverMember : uint8 {
	Invalid,
	All,
	Current,
	Destination,
	Any,
	ECoverMember_MAX,
};

// Enum AIFramework.EArchetypeSortMethod
enum class EArchetypeSortMethod : uint8 {
	ByScoreAscending,
	ByScoreDescending,
	ByQuantityAscending,
	ByQuantityDescending,
	Custom,
	EArchetypeSortMethod_MAX,
};

// Enum AIFramework.EFWCoverSelector
enum class EFWCoverSelector : uint8 {
	Current,
	Destination,
	EFWCoverSelector_MAX,
};

// Enum AIFramework.EPathFindMode
enum class EPathFindMode : uint8 {
	Regular,
	Hierarchical,
	EPathFindMode_MAX,
};

// Enum AIFramework.EWssShutdownReason
enum class EWssShutdownReason : uint8 {
	BlueprintCall,
	PlayerRespawn,
	EndPlay,
	LevelTransition,
	Error,
	NextWss,
	EWssShutdownReason_MAX,
};

// Enum AIFramework.EGoalOrder
enum class EGoalOrder : uint8 {
	Default,
	Linear,
	Loop,
	LoopWithRandomSkip,
	Custom,
	EGoalOrder_MAX,
};

// Enum AIFramework.EAIGoalAssignmentType
enum class EAIGoalAssignmentType : uint8 {
	AllowInCombat,
	NotInCombat,
	Whatever,
	EAIGoalAssignmentType_MAX,
};

// Enum AIFramework.EGoalCoverGeneration
enum class EGoalCoverGeneration : uint8 {
	Volume,
	Radius,
	Linked,
	FollowerRadius,
	EGoalCoverGeneration_MAX,
};

// Enum AIFramework.EEnvCoverActions
enum class EEnvCoverActions : uint8 {
	None,
	Any,
	Left,
	Right,
	LeftAndRight,
	LeftOrRight,
	All,
	PopUp,
	EEnvCoverActions_MAX,
};

// ScriptStruct AIFramework.MeleeAttackHitData
// Size: 0x18 (Inherited: 0x00)
struct FMeleeAttackHitData {
	struct UFWAnimNotifyState_MeleeAttack* AnimNotify; // 0x00(0x08)
	struct TArray<struct AActor*> HitActors; // 0x08(0x10)
};

// ScriptStruct AIFramework.FWForceFireRequest
// Size: 0x20 (Inherited: 0x00)
struct FFWForceFireRequest {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct TArray<struct AActor*> TargetList; // 0x08(0x10)
	char UnknownData_18[0x8]; // 0x18(0x08)
};

// ScriptStruct AIFramework.LocalEnemyInfo
// Size: 0x40 (Inherited: 0x00)
struct FLocalEnemyInfo {
	struct AActor* Actor; // 0x00(0x08)
	float Damage; // 0x08(0x04)
	float ThreatFromDamage; // 0x0c(0x04)
	float Threat; // 0x10(0x04)
	float GroupThreat; // 0x14(0x04)
	float ScriptedSelectionPriority; // 0x18(0x04)
	char bIsPlayer : 1; // 0x1c(0x01)
	char UnknownData_1C_1 : 7; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
	uint32_t LastCoverTest; // 0x20(0x04)
	char bCoverVisibleLeft : 1; // 0x24(0x01)
	char bCoverVisibleRight : 1; // 0x24(0x01)
	char bCoverVisibleUp : 1; // 0x24(0x01)
	char UnknownData_24_3 : 5; // 0x24(0x01)
	char UnknownData_25[0x1b]; // 0x25(0x1b)
};

// ScriptStruct AIFramework.AIDamageWindow
// Size: 0x20 (Inherited: 0x00)
struct FAIDamageWindow {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct AIFramework.ContinousSpawnSetup
// Size: 0x48 (Inherited: 0x00)
struct FContinousSpawnSetup {
	struct TArray<struct ACharacterSpawner*> CollectedSpawners; // 0x00(0x10)
	char UnknownData_10[0x38]; // 0x10(0x38)
};

// ScriptStruct AIFramework.AISpawnSubsystemTickFunction
// Size: 0xf8 (Inherited: 0xf0)
struct FAISpawnSubsystemTickFunction : FTickFunction {
	char UnknownData_F0[0x8]; // 0xf0(0x08)
};

// ScriptStruct AIFramework.MovementMoodSetup
// Size: 0x24 (Inherited: 0x00)
struct FMovementMoodSetup {
	float MaxSpeed; // 0x00(0x04)
	float MaxAcceleration; // 0x04(0x04)
	struct FRotator RotationRate; // 0x08(0x0c)
	struct FRotator InPlaceRotationRate; // 0x14(0x0c)
	char bUseControllerDesiredRotation : 1; // 0x20(0x01)
	char bOrientRotationToMovement : 1; // 0x20(0x01)
	char UnknownData_20_2 : 6; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
};

// ScriptStruct AIFramework.RepSmartObjectAnimNotify
// Size: 0x0c (Inherited: 0x00)
struct FRepSmartObjectAnimNotify {
	struct FName NotifyName; // 0x00(0x08)
	enum class ESmartObjectAnimNotifyType NotifyType; // 0x08(0x01)
	enum class ESmartObjectAttachPoint Attachment; // 0x09(0x01)
	enum class EAttachmentRule LocationRule; // 0x0a(0x01)
	enum class EAttachmentRule RotationRule; // 0x0b(0x01)
};

// ScriptStruct AIFramework.FactReaction
// Size: 0x30 (Inherited: 0x00)
struct FFactReaction {
	struct FFactExpression Expression; // 0x00(0x18)
	struct FReactionsGoalPointSettings Reaction; // 0x18(0x18)
};

// ScriptStruct AIFramework.ReactionsGoalPointSettings
// Size: 0x18 (Inherited: 0x00)
struct FReactionsGoalPointSettings {
	enum class EReactionType Reaction; // 0x00(0x01)
	enum class None ReactionTime; // 0x01(0x01)
	enum class None ReactionCooldownTime; // 0x02(0x01)
	enum class None ReactionCooldownMaxTime; // 0x03(0x01)
	char bSpeakOnlyOnce : 1; // 0x04(0x01)
	char UnknownData_4_1 : 7; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct FNameWrapper SpeechLineToPlay; // 0x08(0x10)
};

// ScriptStruct AIFramework.CharacterCacheRepData
// Size: 0x28 (Inherited: 0x00)
struct FCharacterCacheRepData {
	int32_t SynchronizationStreamSeed; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FUint64Group> BiomeLoadedCharacters_NetworkState; // 0x08(0x10)
	struct TArray<struct UBaseBiomeData*> Biomes_NetworkState; // 0x18(0x10)
};

// ScriptStruct AIFramework.Uint64Group
// Size: 0x10 (Inherited: 0x00)
struct FUint64Group {
	uint64_t High; // 0x00(0x08)
	uint64_t Low; // 0x08(0x08)
};

// ScriptStruct AIFramework.MasterBiome
// Size: 0x68 (Inherited: 0x00)
struct FMasterBiome {
	char UnknownData_0[0x28]; // 0x00(0x28)
	struct TArray<struct FBiomeCharacterData> BiomeCharacterDatas; // 0x28(0x10)
	struct TArray<struct FLoadedCharacterData> LoadedCharacterDatas; // 0x38(0x10)
	char UnknownData_48[0x20]; // 0x48(0x20)
};

// ScriptStruct AIFramework.LoadedCharacterData
// Size: 0x18 (Inherited: 0x00)
struct FLoadedCharacterData {
	struct UObject* CharacterClass; // 0x00(0x08)
	struct TArray<struct FCharacterSkeletalMeshReplicationData> Presets; // 0x08(0x10)
};

// ScriptStruct AIFramework.BiomeCharacterData
// Size: 0x28 (Inherited: 0x00)
struct FBiomeCharacterData {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FFWAIArchetypeVariation Variation; // 0x08(0x20)
};

// ScriptStruct AIFramework.CharacterAssetPool
// Size: 0x50 (Inherited: 0x00)
struct FCharacterAssetPool {
	char UnknownData_0[0x40]; // 0x00(0x40)
	struct TArray<struct UObject*> LoadedObjects; // 0x40(0x10)
};

// ScriptStruct AIFramework.AISpawnGroup
// Size: 0x260 (Inherited: 0x00)
struct FAISpawnGroup {
	int32_t SpawnGroupSeed; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	SoftClassProperty CharacterClassPtr; // 0x08(0x28)
	struct FFWAIArchetypeVariation ArchetypeVariation; // 0x30(0x20)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bIsEnabled : 1; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	int32_t Weight; // 0x54(0x04)
	char UnknownData_58_0 : 7; // 0x58(0x01)
	bool bRespawnOnDeath : 1; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	int32_t NumberOfAllSpawns; // 0x5c(0x04)
	int32_t MaxAlive; // 0x60(0x04)
	float InitialSpawnDelay; // 0x64(0x04)
	float SpawnDelayInSeconds; // 0x68(0x04)
	enum class ETeam TeamToSet; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
	struct UBehaviorTree* CustomBehaviorTree; // 0x70(0x08)
	struct TArray<struct FNameWrapper> CustomLoadoutClasses; // 0x78(0x10)
	float DefaultHealth; // 0x88(0x04)
	char UnknownData_8C_0 : 7; // 0x8c(0x01)
	bool PlayPreviewAnimation : 1; // 0x8c(0x01)
	char UnknownData_8D_0 : 7; // 0x8d(0x01)
	bool PlayPreviewAnimationWithoutSelection : 1; // 0x8d(0x01)
	char UnknownData_8E[0x2]; // 0x8e(0x02)
	int32_t PreviewAnimationFrame; // 0x90(0x04)
	char UnknownData_94_0 : 7; // 0x94(0x01)
	bool bSnapToGround : 1; // 0x94(0x01)
	char UnknownData_95_0 : 7; // 0x95(0x01)
	bool bDisableCollision : 1; // 0x95(0x01)
	char UnknownData_96_0 : 7; // 0x96(0x01)
	bool bWaitForCustomization : 1; // 0x96(0x01)
	char UnknownData_97_0 : 7; // 0x97(0x01)
	bool bNPCReactionsEnabled : 1; // 0x97(0x01)
	char UnknownData_98_0 : 7; // 0x98(0x01)
	bool bNotifyAboutEndOfAnimation : 1; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
	struct FMontageAssetSelector Montage; // 0xa0(0x20)
	struct AActor* SpawnLocation; // 0xc0(0x08)
	struct FName SquadName; // 0xc8(0x08)
	struct TArray<struct FAntFarmControlAttributeDelta> AntFarmInitialState; // 0xd0(0x10)
	char UnknownData_E0_0 : 7; // 0xe0(0x01)
	bool bSpawnUsingSmartObject : 1; // 0xe0(0x01)
	char UnknownData_E1[0x7]; // 0xe1(0x07)
	struct AAntFarmGoal* DefaultAntFarm; // 0xe8(0x08)
	struct TArray<struct AGoalPoint*> GoalsToAssign; // 0xf0(0x10)
	char UnknownData_100_0 : 7; // 0x100(0x01)
	bool bSpawnWithWeaponFromStart : 1; // 0x100(0x01)
	char UnknownData_101_0 : 7; // 0x101(0x01)
	bool bAutoAcquireEnemy : 1; // 0x101(0x01)
	char UnknownData_102[0xe]; // 0x102(0x0e)
	struct FTransform SpawnCheckPoint; // 0x110(0x30)
	struct FRotator SkelMeshRotationOffset; // 0x140(0x0c)
	struct FVector SkelMeshTranslationOffset; // 0x14c(0x0c)
	struct FVector SkelMeshScale3D; // 0x158(0x0c)
	char UnknownData_164[0xc]; // 0x164(0x0c)
	struct FTransform AnimTransformation; // 0x170(0x30)
	int32_t SpawnRequests; // 0x1a0(0x04)
	int32_t SpawnsCounter; // 0x1a4(0x04)
	char UnknownData_1A8[0x70]; // 0x1a8(0x70)
	struct TArray<struct ABaseCharacter*> CharactersArray; // 0x218(0x10)
	char UnknownData_228[0x18]; // 0x228(0x18)
	float VODistance; // 0x240(0x04)
	char UnknownData_244_0 : 7; // 0x244(0x01)
	bool bVOIsMale : 1; // 0x244(0x01)
	char UnknownData_245_0 : 7; // 0x245(0x01)
	bool bVOIsCivilian : 1; // 0x245(0x01)
	char UnknownData_246_0 : 7; // 0x246(0x01)
	bool bVOIsCivilianGroup : 1; // 0x246(0x01)
	char UnknownData_247[0x1]; // 0x247(0x01)
	struct FName VOAntfarmTag; // 0x248(0x08)
	char UnknownData_250_0 : 7; // 0x250(0x01)
	bool bStartEnabled : 1; // 0x250(0x01)
	char UnknownData_251[0xf]; // 0x251(0x0f)
};

// ScriptStruct AIFramework.AntFarmControlAttributeDelta
// Size: 0x0c (Inherited: 0x00)
struct FAntFarmControlAttributeDelta {
	struct FGameplayTag Attribute; // 0x00(0x08)
	float DeltaValue; // 0x08(0x04)
};

// ScriptStruct AIFramework.GoalFireTarget
// Size: 0x18 (Inherited: 0x00)
struct FGoalFireTarget {
	struct AActor* Target; // 0x00(0x08)
	struct TArray<struct AFWAIController*> Shooters; // 0x08(0x10)
};

// ScriptStruct AIFramework.AINavLOSCacher
// Size: 0x40 (Inherited: 0x00)
struct FAINavLOSCacher {
	struct TArray<struct FAINavPredictionEntry> PredictionEntries; // 0x00(0x10)
	struct TArray<struct FAINavLOSEntryPerPawn> LOSEntriesPerPawn; // 0x10(0x10)
	float PredictionMaxTestDistance; // 0x20(0x04)
	float PredictionTestDistanceExtra; // 0x24(0x04)
	float MaxPredictionDirectionVarianceDeg; // 0x28(0x04)
	float MaxUnusedTime; // 0x2c(0x04)
	float MaxLOSDelta; // 0x30(0x04)
	char UnknownData_34_0 : 7; // 0x34(0x01)
	bool bEnablePredictionCaching : 1; // 0x34(0x01)
	char UnknownData_35_0 : 7; // 0x35(0x01)
	bool bEnableLOSCaching : 1; // 0x35(0x01)
	char UnknownData_36[0x2]; // 0x36(0x02)
	float CleanupDelay; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct AIFramework.AINavLOSEntryPerPawn
// Size: 0x18 (Inherited: 0x00)
struct FAINavLOSEntryPerPawn {
	struct APawn* Pawn; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct AIFramework.AINavPredictionEntry
// Size: 0x38 (Inherited: 0x00)
struct FAINavPredictionEntry {
	struct APawn* Pawn; // 0x00(0x08)
	char UnknownData_8[0x30]; // 0x08(0x30)
};

// ScriptStruct AIFramework.AIReactionsManagerTickFunction
// Size: 0xf8 (Inherited: 0xf0)
struct FAIReactionsManagerTickFunction : FTickFunction {
	char UnknownData_F0[0x8]; // 0xf0(0x08)
};

// ScriptStruct AIFramework.WAIResChannel_AbilityTagStatus
// Size: 0x0c (Inherited: 0x00)
struct FWAIResChannel_AbilityTagStatus {
	struct FGameplayTag Tag; // 0x00(0x08)
	int32_t TagCounter; // 0x08(0x04)
};

// ScriptStruct AIFramework.FWAISquadTickFunction
// Size: 0xf8 (Inherited: 0xf0)
struct FFWAISquadTickFunction : FTickFunction {
	char UnknownData_F0[0x8]; // 0xf0(0x08)
};

// ScriptStruct AIFramework.FWSquadMemberInfo
// Size: 0x08 (Inherited: 0x00)
struct FFWSquadMemberInfo {
	struct AController* Member; // 0x00(0x08)
};

// ScriptStruct AIFramework.FWSquadEnemyInfo
// Size: 0x48 (Inherited: 0x00)
struct FFWSquadEnemyInfo {
	struct Acharacter* character; // 0x00(0x08)
	struct FVector KnownLocation; // 0x08(0x0c)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FCoverSlotInfo KnownCover; // 0x18(0x18)
	float LastContactTime; // 0x30(0x04)
	float InitialContactTime; // 0x34(0x04)
	struct TArray<struct AFWAIController*> VisibleTo; // 0x38(0x10)
};

// ScriptStruct AIFramework.FWExtendedSquadEnemyInfo
// Size: 0x108 (Inherited: 0x00)
struct FFWExtendedSquadEnemyInfo {
	struct Acharacter* character; // 0x00(0x08)
	struct FFWDestinationOffsetInfo DestinationOffsets[0x8]; // 0x08(0x100)
};

// ScriptStruct AIFramework.FWDestinationOffsetInfo
// Size: 0x20 (Inherited: 0x00)
struct FFWDestinationOffsetInfo {
	char UnknownData_0[0x10]; // 0x00(0x10)
	struct AFWAIController* OffsetClaimedBy; // 0x10(0x08)
	char UnknownData_18[0x8]; // 0x18(0x08)
};

// ScriptStruct AIFramework.SemaphorePendingUnlockItem
// Size: 0x20 (Inherited: 0x00)
struct FSemaphorePendingUnlockItem {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct AActor* Target; // 0x08(0x08)
	struct AFWAIController* Owner; // 0x10(0x08)
	char UnknownData_18[0x8]; // 0x18(0x08)
};

// ScriptStruct AIFramework.WAIConcurentSemaphoreGroup
// Size: 0x50 (Inherited: 0x00)
struct FWAIConcurentSemaphoreGroup {
	struct TMap<struct UFWAISemaphoreGroupClass*, struct FFWAISemaphoreGroupData> Map; // 0x00(0x50)
};

// ScriptStruct AIFramework.FWAISemaphoreGroupData
// Size: 0x18 (Inherited: 0x00)
struct FFWAISemaphoreGroupData {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct TArray<struct AFWAIController*> ClaimedBy; // 0x08(0x10)
};

// ScriptStruct AIFramework.AISystemTickFunction
// Size: 0xf8 (Inherited: 0xf0)
struct FAISystemTickFunction : FTickFunction {
	char UnknownData_F0[0x8]; // 0xf0(0x08)
};

// ScriptStruct AIFramework.FWCombatSpot
// Size: 0x30 (Inherited: 0x00)
struct FFWCombatSpot {
	struct FCoverSlotInfo CoverSlotInfo; // 0x00(0x18)
	struct FVector Location; // 0x18(0x0c)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct AActor* Actor; // 0x28(0x08)
};

// ScriptStruct AIFramework.AISpawnParams
// Size: 0x1a0 (Inherited: 0x00)
struct FAISpawnParams {
	struct FFWAIArchetypeVariation ArchetypeVariation; // 0x00(0x20)
	struct APawn* PawnClass; // 0x20(0x08)
	struct AAIController* ControllerClass; // 0x28(0x08)
	struct FSpawnParamsAI ParamsAI; // 0x30(0x18)
	char UnknownData_48[0x8]; // 0x48(0x08)
	struct FTransform SpawnCheckPoint; // 0x50(0x30)
	struct TArray<struct FNameWrapper> LoadoutClasses; // 0x80(0x10)
	struct FMontageAssetSelector SpawnAnimation; // 0x90(0x20)
	struct AActor* Instigator; // 0xb0(0x08)
	char UnknownData_B8_0 : 7; // 0xb8(0x01)
	bool bSnapToGround : 1; // 0xb8(0x01)
	char UnknownData_B9_0 : 7; // 0xb9(0x01)
	bool bWaitForCustomization : 1; // 0xb9(0x01)
	char UnknownData_BA_0 : 7; // 0xba(0x01)
	bool bNotifyAboutEndOfAnimation : 1; // 0xba(0x01)
	enum class ENavPathType NavigationPathType; // 0xbb(0x01)
	char UnknownData_BC_0 : 7; // 0xbc(0x01)
	bool bLaunchCharacter : 1; // 0xbc(0x01)
	char UnknownData_BD[0x3]; // 0xbd(0x03)
	struct FVector LaunchDestination; // 0xc0(0x0c)
	float LaunchExtraHeightInMiddle; // 0xcc(0x04)
	float LaunchGroundSpeed; // 0xd0(0x04)
	char UnknownData_D4_0 : 7; // 0xd4(0x01)
	bool bNotifyAboutEndOfLaunch : 1; // 0xd4(0x01)
	char UnknownData_D5[0x3]; // 0xd5(0x03)
	struct FName AnimNotifyNameToWaitFor; // 0xd8(0x08)
	int32_t UserData; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct AGoalPoint*> GoalsToAssign; // 0xe8(0x10)
	char UnknownData_F8_0 : 7; // 0xf8(0x01)
	bool bSpawnUsingSmartObject : 1; // 0xf8(0x01)
	char UnknownData_F9_0 : 7; // 0xf9(0x01)
	bool bNPCReactionsEnabled : 1; // 0xf9(0x01)
	char UnknownData_FA_0 : 7; // 0xfa(0x01)
	bool bSpawnWithWeaponFromStart : 1; // 0xfa(0x01)
	char UnknownData_FB_0 : 7; // 0xfb(0x01)
	bool bAutoAcquireEnemy : 1; // 0xfb(0x01)
	char UnknownData_FC[0x64]; // 0xfc(0x64)
	struct ABaseCharacter* character; // 0x160(0x08)
	struct AAIController* Controller; // 0x168(0x08)
	char UnknownData_170[0x30]; // 0x170(0x30)
};

// ScriptStruct AIFramework.SpawnParamsAI
// Size: 0x18 (Inherited: 0x00)
struct FSpawnParamsAI {
	struct UBehaviorTree* BehaviorTree; // 0x00(0x08)
	struct FGenericTeamId TeamID; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bUseTeamId : 1; // 0x09(0x01)
	char UnknownData_A_0 : 7; // 0x0a(0x01)
	bool bDisableAI : 1; // 0x0a(0x01)
	char UnknownData_B[0x1]; // 0x0b(0x01)
	struct FName SquadName; // 0x0c(0x08)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct AIFramework.EQSQueryOverrideItem
// Size: 0x10 (Inherited: 0x00)
struct FEQSQueryOverrideItem {
	struct UEnvQuery* EnvQuery; // 0x00(0x08)
	enum class EEQSNamedQuery QueryType; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct AIFramework.SightTraceData
// Size: 0x38 (Inherited: 0x00)
struct FSightTraceData {
	struct FFWPendingSightInfo SightCheck; // 0x00(0x18)
	char UnknownData_18[0x20]; // 0x18(0x20)
};

// ScriptStruct AIFramework.FWPendingSightInfo
// Size: 0x18 (Inherited: 0x00)
struct FFWPendingSightInfo {
	struct AFWAIController* TestFrom; // 0x00(0x08)
	struct APawn* TestTo; // 0x08(0x08)
	char UnknownData_10[0x8]; // 0x10(0x08)
};

// ScriptStruct AIFramework.AIVisibilitySystemTickFunction
// Size: 0xf8 (Inherited: 0xf0)
struct FAIVisibilitySystemTickFunction : FTickFunction {
	char UnknownData_F0[0x8]; // 0xf0(0x08)
};

// ScriptStruct AIFramework.MadAI_SingleThrowEntry
// Size: 0x20 (Inherited: 0x00)
struct FMadAI_SingleThrowEntry {
	struct FMontageAssetSelector Montage; // 0x00(0x20)
};

// ScriptStruct AIFramework.FWProjectileController
// Size: 0x150 (Inherited: 0x00)
struct FFWProjectileController {
	struct AActor* OwnerActor; // 0x00(0x08)
	struct Acharacter* PawnInstigatorOverride; // 0x08(0x08)
	uint32_t NumberOfTrajectories; // 0x10(0x04)
	float StartArcValue; // 0x14(0x04)
	float EndArcValue; // 0x18(0x04)
	char bRecalculateProjectileTrajectory : 1; // 0x1c(0x01)
	char bAsyncProjectileTrajectoryCheck : 1; // 0x1c(0x01)
	char UnknownData_1C_2 : 6; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
	struct FName BoneName; // 0x20(0x08)
	struct FVector ThrowLocationOffset; // 0x28(0x0c)
	float ProjectileTrajectoryCalculationFrequency; // 0x34(0x04)
	enum class EDrawDebugTrace ProjectileTrajectoryDrawDebugType; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	float ProjectileTrajectoryDrawDebugTime; // 0x3c(0x04)
	struct AProjectile* DefaultProjectileClass; // 0x40(0x08)
	float TargetLocationPrecisionPct; // 0x48(0x04)
	char UnknownData_4C[0x104]; // 0x4c(0x104)
};

// ScriptStruct AIFramework.FWAIWeaponAnimationData
// Size: 0x268 (Inherited: 0x00)
struct FFWAIWeaponAnimationData {
	struct FFWAIActionAnimationData ShootingType[0x4]; // 0x00(0x240)
	struct FSoftObjectPath DefaultShooting; // 0x240(0x18)
	struct TArray<struct FSoftObjectPath> Dash; // 0x258(0x10)
};

// ScriptStruct AIFramework.FWAIActionAnimationData
// Size: 0x90 (Inherited: 0x00)
struct FFWAIActionAnimationData {
	struct FSoftObjectPath OneShotAnimations[0x6]; // 0x00(0x90)
};

// ScriptStruct AIFramework.GroupMaterialData
// Size: 0x50 (Inherited: 0x00)
struct FGroupMaterialData {
	struct TMap<int8_t, struct UMaterialInterface*> Materials; // 0x00(0x50)
};

// ScriptStruct AIFramework.FWAIWeaponCoverAnimationData
// Size: 0x798 (Inherited: 0x00)
struct FFWAIWeaponCoverAnimationData {
	struct FFWAICoverActionAnimationData CoverType[0x3]; // 0x00(0x780)
	struct FSoftObjectPath DefaultShooting; // 0x780(0x18)
};

// ScriptStruct AIFramework.FWAICoverActionAnimationData
// Size: 0x280 (Inherited: 0x00)
struct FFWAICoverActionAnimationData {
	struct FSoftObjectPath LeanLeft[0x4]; // 0x00(0x60)
	struct FSoftObjectPath LeanRight[0x4]; // 0x60(0x60)
	struct FSoftObjectPath LeftPopUp[0x4]; // 0xc0(0x60)
	struct FSoftObjectPath RightPopUp[0x4]; // 0x120(0x60)
	struct TArray<struct FSoftObjectPath> CustomLeanLeft; // 0x180(0x10)
	struct TArray<struct FSoftObjectPath> CustomLeanRight; // 0x190(0x10)
	struct TArray<struct FSoftObjectPath> CustomLeftPopUp; // 0x1a0(0x10)
	struct TArray<struct FSoftObjectPath> CustomRightPopUp; // 0x1b0(0x10)
	struct TArray<struct FFWAICoverActionPeekHideAnimationData> PeekHideLeft; // 0x1c0(0x10)
	struct TArray<struct FFWAICoverActionPeekHideAnimationData> PeekHideRight; // 0x1d0(0x10)
	struct TArray<struct FFWAICoverActionPeekHideAnimationData> PeekHideUpLeft; // 0x1e0(0x10)
	struct TArray<struct FFWAICoverActionPeekHideAnimationData> PeekHideUpRight; // 0x1f0(0x10)
	struct FSoftObjectPath ChangeDirection; // 0x200(0x18)
	struct FSoftObjectPath SlideToCoverMontage[0x4]; // 0x218(0x60)
	uint32_t ValidActionsSignature; // 0x278(0x04)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
};

// ScriptStruct AIFramework.FWAICoverActionPeekHideAnimationData
// Size: 0x30 (Inherited: 0x00)
struct FFWAICoverActionPeekHideAnimationData {
	struct FSoftObjectPath Peek; // 0x00(0x18)
	struct FSoftObjectPath Hide; // 0x18(0x18)
};

// ScriptStruct AIFramework.FWAISlideToCoverAnimationData
// Size: 0x60 (Inherited: 0x00)
struct FFWAISlideToCoverAnimationData {
	struct FSoftObjectPath SlideToCoverMontage[0x4]; // 0x00(0x60)
};

// ScriptStruct AIFramework.FWArchetypesMapping
// Size: 0x10 (Inherited: 0x00)
struct FFWArchetypesMapping {
	struct TArray<struct FFWArchetypesMappingReplacement> Replacements; // 0x00(0x10)
};

// ScriptStruct AIFramework.FWArchetypesMappingReplacement
// Size: 0x18 (Inherited: 0x00)
struct FFWArchetypesMappingReplacement {
	struct UFWAIArchetype* Source; // 0x00(0x08)
	struct TArray<struct UFWAIArchetype*> Targets; // 0x08(0x10)
};

// ScriptStruct AIFramework.ConditionalEncounterSetupGroup
// Size: 0x10 (Inherited: 0x00)
struct FConditionalEncounterSetupGroup {
	struct TArray<struct FEncounterSetup> Setups; // 0x00(0x10)
};

// ScriptStruct AIFramework.EncounterSetup
// Size: 0x20 (Inherited: 0x00)
struct FEncounterSetup {
	struct FName EventName; // 0x00(0x08)
	int32_t EncounterLevel; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FFWEncounterWaveData> Waves; // 0x10(0x10)
};

// ScriptStruct AIFramework.FWEncounterWaveData
// Size: 0xa8 (Inherited: 0x00)
struct FFWEncounterWaveData {
	struct FText Description; // 0x00(0x18)
	struct FFWEncounterSpawnGroupSetup SpawnGroupInfo; // 0x18(0x20)
	float WarmupTime; // 0x38(0x04)
	float MinDelayTimePerSpawn; // 0x3c(0x04)
	float MaxDelayTimePerSpawn; // 0x40(0x04)
	float WaveTime; // 0x44(0x04)
	int32_t SpawnQuantityPerInterval; // 0x48(0x04)
	float SpawnInterval; // 0x4c(0x04)
	float RadiusAroundInstigator; // 0x50(0x04)
	int32_t SpawnsPerWave; // 0x54(0x04)
	int32_t MaxCharactersAlivePerWave; // 0x58(0x04)
	int32_t NumCharactersKilledToNotify; // 0x5c(0x04)
	char UnknownData_60_0 : 7; // 0x60(0x01)
	bool bUseTotal : 1; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct TArray<struct ACombatArena*> Arenas; // 0x68(0x10)
	char UnknownData_78_0 : 7; // 0x78(0x01)
	bool bDontSpawnWhenVisible : 1; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
	struct FFWEncounterWaveDifficultyDescriptor GameDifficultyDescriptor; // 0x80(0x28)
};

// ScriptStruct AIFramework.FWEncounterWaveDifficultyDescriptor
// Size: 0x28 (Inherited: 0x00)
struct FFWEncounterWaveDifficultyDescriptor {
	enum class EArchetypeSortMethod SortMethod; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct FFWAIArchetypeVariation> CustomSortList; // 0x08(0x10)
	struct TArray<struct FFWAIArchetypeVariation> Blacklist; // 0x18(0x10)
};

// ScriptStruct AIFramework.FWEncounterSpawnGroupSetup
// Size: 0x20 (Inherited: 0x00)
struct FFWEncounterSpawnGroupSetup {
	struct TArray<struct FFWEncounterArchWhitelistEntry> ArchetypesWhitelist; // 0x00(0x10)
	struct TArray<struct ABaseCharacter*> CharactersWhitelist; // 0x10(0x10)
};

// ScriptStruct AIFramework.FWEncounterArchWhitelistEntry
// Size: 0x48 (Inherited: 0x00)
struct FFWEncounterArchWhitelistEntry {
	float PercentagePerWave; // 0x00(0x04)
	int32_t TotalSpawns; // 0x04(0x04)
	struct UFWAIArchetype* Archetype; // 0x08(0x08)
	struct ABaseCharacter* CharacterType; // 0x10(0x08)
	struct FFWAIArchetypeVariation ArchetypeVariation; // 0x18(0x20)
	struct UFWAIRank* Rank; // 0x38(0x08)
	struct UFWAIFaction* Faction; // 0x40(0x08)
};

// ScriptStruct AIFramework.FWWaveDataOverride
// Size: 0x30 (Inherited: 0x00)
struct FFWWaveDataOverride {
	struct FText Description; // 0x00(0x18)
	struct TArray<struct FFWEncounterArchWhitelistEntry> ArchetypesWhitelist; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bUseTotal : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct AIFramework.FWEnvLine
// Size: 0x10 (Inherited: 0x00)
struct FFWEnvLine {
	struct UEnvQueryContext* LineFrom; // 0x00(0x08)
	struct UEnvQueryContext* LineTo; // 0x08(0x08)
};

// ScriptStruct AIFramework.FWRepathData
// Size: 0x08 (Inherited: 0x00)
struct FFWRepathData {
	float PathDistance; // 0x00(0x04)
	float GoalDistance; // 0x04(0x04)
};

// ScriptStruct AIFramework.WssTransient
// Size: 0x78 (Inherited: 0x00)
struct FWssTransient {
	struct TArray<struct ABaseCharacter*> LivingCharacters; // 0x00(0x10)
	struct UBaseBiomeData* SelectedBiome; // 0x10(0x08)
	struct TArray<struct APlayerCameraManager*> ActiveCameraManagers; // 0x18(0x10)
	char UnknownData_28[0x50]; // 0x28(0x50)
};

// ScriptStruct AIFramework.SpawnWaveData
// Size: 0x88 (Inherited: 0x00)
struct FSpawnWaveData {
	struct FName WaveName; // 0x00(0x08)
	struct TArray<struct FSpawnVariationData> SpawnVariations; // 0x08(0x10)
	struct TArray<struct ASpawnVolume*> SpawnVolumes; // 0x18(0x10)
	struct FIntPlayerCount SpawnQuantityPerInterval; // 0x28(0x0c)
	struct FFloatPlayerCount SpawnInterval; // 0x34(0x0c)
	struct FFloatPlayerCount IntervalDelta; // 0x40(0x0c)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FIntPlayerCount> NotifiyCharactersCountKilled; // 0x50(0x10)
	struct TArray<struct FFloatPlayerCount> NotifyAverageHealth; // 0x60(0x10)
	struct FIntPlayerCount CharactersCountKilledToNotify; // 0x70(0x0c)
	struct FFloatPlayerCount AverageHealthToNotify; // 0x7c(0x0c)
};

// ScriptStruct AIFramework.FloatPlayerCount
// Size: 0x0c (Inherited: 0x00)
struct FFloatPlayerCount {
	float One; // 0x00(0x04)
	float Two; // 0x04(0x04)
	float Three; // 0x08(0x04)
};

// ScriptStruct AIFramework.IntPlayerCount
// Size: 0x0c (Inherited: 0x00)
struct FIntPlayerCount {
	int32_t One; // 0x00(0x04)
	int32_t Two; // 0x04(0x04)
	int32_t Three; // 0x08(0x04)
};

// ScriptStruct AIFramework.SpawnVariationData
// Size: 0x38 (Inherited: 0x00)
struct FSpawnVariationData {
	struct FIntPlayerCount Quantity; // 0x00(0x0c)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FFWAIArchetypeVariation Variation; // 0x10(0x20)
	char UnknownData_30[0x8]; // 0x30(0x08)
};

// ScriptStruct AIFramework.AntFarmControlAttributeState
// Size: 0x38 (Inherited: 0x00)
struct FAntFarmControlAttributeState {
	struct FGameplayTagContainer AttributeTag; // 0x00(0x20)
	float AttributeValue; // 0x20(0x04)
	float CurrentWeightedValue; // 0x24(0x04)
	struct TArray<struct USmartObjectSlotComponent*> CurrentSmartObjectsSlots; // 0x28(0x10)
};

// ScriptStruct AIFramework.AntFarmControlAttributeData
// Size: 0x30 (Inherited: 0x00)
struct FAntFarmControlAttributeData {
	struct FGameplayTagContainer AttributeTag; // 0x00(0x20)
	struct UCurveFloat* ControlCurve; // 0x20(0x08)
	float ControlWeight; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AIFramework.WaypointAutoConnectSettings
// Size: 0x20 (Inherited: 0x00)
struct FWaypointAutoConnectSettings {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bAutoConnect : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bConnectBothWays : 1; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float MaxConnectRange; // 0x04(0x04)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bPreferIndirectConnection : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bTraceCheckWithGeometry : 1; // 0x09(0x01)
	char UnknownData_A[0x6]; // 0x0a(0x06)
	struct TArray<struct AWaypoint*> ExcludedWaypoints; // 0x10(0x10)
};

// ScriptStruct AIFramework.WaypointConnection
// Size: 0x28 (Inherited: 0x00)
struct FWaypointConnection {
	struct AWaypoint* End; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char UnknownData_C_0 : 7; // 0x0c(0x01)
	bool bCustomConnection : 1; // 0x0c(0x01)
	char UnknownData_D_0 : 7; // 0x0d(0x01)
	bool bUseDisableExpr : 1; // 0x0d(0x01)
	char UnknownData_E[0x2]; // 0x0e(0x02)
	struct FFactExpression DisableExpr; // 0x10(0x18)
};

