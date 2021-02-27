// Enum GameplayFramework.EMusicState
enum class EMusicState : uint8 {
	AMS_Ambient,
	AMS_Intro,
	AMS_Tension,
	AMS_Battle,
	AMS_BridgeA,
	AMS_BridgeB,
	AMS_BridgeC,
	AMS_BridgeD,
	AMS_End,
	AMS_DBNO,
	AMS_Last,
	AMS_MAX,
};

// Enum GameplayFramework.EBlueprintAuromationTestState
enum class EBlueprintAuromationTestState : uint8 {
	NotStarted,
	Running,
	Completed,
	EBlueprintAuromationTestState_MAX,
};

// Enum GameplayFramework.EHitMarkerType
enum class EHitMarkerType : uint8 {
	None,
	Damage,
	CriticalDamage,
	Kill,
	CriticalKill,
	EHitMarkerType_MAX,
};

// Enum GameplayFramework.ETeam
enum class ETeam : uint8 {
	PlayerTeam,
	EnemyTeam,
	CreatureTeam,
	AnyTeam,
	Spectator,
	MAX,
};

// Enum GameplayFramework.ETeamSyncTaskStatus
enum class ETeamSyncTaskStatus : uint8 {
	Created,
	Started,
	Finished,
	ETeamSyncTaskStatus_MAX,
};

// Enum GameplayFramework.EVoteType
enum class EVoteType : uint8 {
	OneChoice,
	MultipleChoice,
	SkipChoice,
	EVoteType_MAX,
};

// Enum GameplayFramework.ETeamSyncReason
enum class ETeamSyncReason : uint8 {
	PlayersStartTransition,
	PlayersEndTransition,
	RegionStartedEvent,
	FadeOut,
	FadeIn,
	Streaming,
	Visibility,
	PrepareRegion,
	WaitForPrepareToFinish,
	CommitRegion,
	PlayingSequence,
	VisibilityForActors,
	WaitForSequenceToFinish,
	StartLoadingMovie,
	ShowWorldMapTravelAnimation,
	TeleportPlayers,
	GC,
	PlayingMovie,
	WaitForMovieToFinish,
	FinishResourceStreaming,
	HideLoadingScreen,
	WaitForPawnsToDie,
	StartQuestForAllPlayers,
	LoadSequence,
	UnloadSequence,
	ShowDestination,
	SetIsReloadingLevel,
	PostCineScript,
	CoversBuilding,
	SetAndWaitForUIState,
	EnqueueGlobalEvent,
	WaitForCustomizationsFullLoad,
	PhysxMemoryCleanUp,
	Delay,
	PickAllLoot,
	DemoStart,
	Max_None,
	ETeamSyncReason_MAX,
};

// Enum GameplayFramework.EWorldMapNodeType
enum class EWorldMapNodeType : uint8 {
	Hidden,
	Locked,
	Unlocked,
	MAX,
};

// Enum GameplayFramework.ERegionStartedState
enum class ERegionStartedState : uint8 {
	AllLevelsLoaded,
	StreamingCorridorLoaded,
	LevelsOutsideCorridorLoaded,
	ERegionStartedState_MAX,
};

// Enum GameplayFramework.EVOListType
enum class EVOListType : uint8 {
	Ambient,
	Break,
	Continue,
	Map,
	Challenge,
	Idle,
	Loading,
	Collectible,
	VendorStart,
	VendorBuy,
	VendorSell,
	VendorExit,
	Campfire,
	BreakRadio,
	EVOListType_MAX,
};

// Enum GameplayFramework.EVOPriority
enum class EVOPriority : uint8 {
	High,
	Low,
	Wait,
	EVOPriority_MAX,
};

// Enum GameplayFramework.ESequenceWeaponVisibility
enum class ESequenceWeaponVisibility : uint8 {
	BothHidden,
	BothVisible,
	OnlyPrimaryVisible,
	OnlySecondaryVisible,
	ESequenceWeaponVisibility_MAX,
};

// Enum GameplayFramework.ELevelTransitionType
enum class ELevelTransitionType : uint8 {
	Simple,
	Seamless,
	AlternativeSeamless,
	ELevelTransitionType_MAX,
};

// Enum GameplayFramework.EInputType
enum class EInputType : uint8 {
	KEYBOARD,
	XBOX_GAMEPAD,
	PS4_GAMEPAD,
	EInputType_MAX,
};

// Enum GameplayFramework.ERespawnReason
enum class ERespawnReason : uint8 {
	AutoRespawn,
	Teleport,
	Cheat,
	GenderChange,
	ERespawnReason_MAX,
};

// Enum GameplayFramework.EPlayerChatterType
enum class EPlayerChatterType : uint8 {
	LowHealth,
	EnteringDBNO,
	RequestingReviveWhenDBNO,
	RevivingDBNOTeammate,
	JoiningGame,
	Pain,
	MeleeAttack,
	NoAmmo,
	PickupLegendary,
	KillSpecialUnit,
	EPlayerChatterType_MAX,
};

// Enum GameplayFramework.EQuestFailReason
enum class EQuestFailReason : uint8 {
	Timeup,
	PlayerDied,
	NPCDied,
	None,
	EQuestFailReason_MAX,
};

// Enum GameplayFramework.ECustomizationSlotType
enum class ECustomizationSlotType : uint8 {
	Head,
	Hair,
	Beard,
	Torso,
	Legs,
	Hands,
	Feets,
	Body,
	Custom,
	Piercing,
	Max_None,
	ECustomizationSlotType_MAX,
};

// Enum GameplayFramework.EObjectiveStatus
enum class EObjectiveStatus : uint8 {
	EOS_Unlocked,
	EOS_Active,
	EOS_Completed,
	EOS_Failed,
	EOS_Locked,
	EOS_MAX,
};

// Enum GameplayFramework.EQuickTimeEventType
enum class EQuickTimeEventType : uint8 {
	ButtonPressBeforeTimeout,
	ButtonMashUntilTimeout,
	AnalogMoveLeft,
	AnalogMoveRight,
	AnalogMoveUp,
	AnalogMoveDown,
	AnalogSwingLeftRight,
	AnalogSwingUpDown,
	AnalogMakeCircles,
	Undefined,
	EQuickTimeEventType_MAX,
};

// Enum GameplayFramework.EQuickTimeEventButton
enum class EQuickTimeEventButton : uint8 {
	A,
	B,
	X,
	Y,
	LeftAnalog,
	RightAnalog,
	Undefined,
	MAX,
};

// Enum GameplayFramework.EQuickTimeEventResult
enum class EQuickTimeEventResult : uint8 {
	Success,
	Fail,
	InProgress,
	Undefined,
	EQuickTimeEventResult_MAX,
};

// Enum GameplayFramework.ECoverSlotPeekType
enum class ECoverSlotPeekType : uint8 {
	PopUp,
	Left,
	Right,
	Back,
	None,
	ECoverSlotPeekType_MAX,
};

// Enum GameplayFramework.ECoverMovementDirection
enum class ECoverMovementDirection : uint8 {
	Left,
	Right,
	Forward,
	None,
	MAX,
};

// Enum GameplayFramework.EAppropachResult
enum class EAppropachResult : uint8 {
	Success,
	Fail,
	Interrupted,
	Stucked,
	None,
	MAX,
};

// Enum GameplayFramework.EInteractionCameraMode
enum class EInteractionCameraMode : uint8 {
	Lock,
	Orbit,
	FromMontage,
	EInteractionCameraMode_MAX,
};

// Enum GameplayFramework.EPlayerSynchronizationType
enum class EPlayerSynchronizationType : uint8 {
	AdjustToComponent,
	AdjustTowardsComponent,
	NoAdjustment,
	AdjustTowardsComponentOnRange,
	Max_None,
	EPlayerSynchronizationType_MAX,
};

// Enum GameplayFramework.EAmmoType
enum class EAmmoType : uint8 {
	Pistol,
	Revolver,
	AssaultRifle,
	DoubleGun,
	LMG,
	SMG,
	AutoSniper,
	BoltAction,
	Marksman,
	AutoShotgun,
	PumpAction,
	AbilityInfinite,
	MAX_None,
	EAmmoType_MAX,
};

// Enum GameplayFramework.EFWAIDamageReactionOverlap
enum class EFWAIDamageReactionOverlap : uint8 {
	None,
	Cooldown,
	ReacoveryAndCooldown,
	ReactionRecoveryAndCooldown,
	EFWAIDamageReactionOverlap_MAX,
};

// Enum GameplayFramework.EFWAIDamageReactionType
enum class EFWAIDamageReactionType : uint8 {
	Twitch,
	Falter,
	Pushback,
	Knockback,
	Max,
};

// Enum GameplayFramework.EPlayerMovementSpeed
enum class EPlayerMovementSpeed : uint8 {
	Stop,
	Walk,
	Jog,
	Sprint,
	Max,
};

// Enum GameplayFramework.ECombatModePermit
enum class ECombatModePermit : uint8 {
	Allowed,
	Forbidden,
	Forced,
	ECombatModePermit_MAX,
};

// Enum GameplayFramework.EAIChatterType
enum class EAIChatterType : uint8 {
	Default,
	Death,
	Damage,
	HeavyDamage,
	SkillDamage,
	LowHealth,
	EnemySpotted,
	NewEnemySpotted,
	EnemySpotted_Team,
	NewEnemySpotted_Team,
	BeingAimedAtByPlayer,
	DamagedPlayer,
	Taunt,
	StartReloading,
	MeleeAttack,
	PreFireAttack,
	FireAttack,
	DowningPlayer,
	Reaction_PlayerAbility,
	EnrageStateActivation,
	EAIChatterType_MAX,
};

// Enum GameplayFramework.EFactExpresionType
enum class EFactExpresionType : uint8 {
	OR,
	AND,
	SEQUENCE,
	EFactExpresionType_MAX,
};

// Enum GameplayFramework.EAIHotSpotAssignmentFilter
enum class EAIHotSpotAssignmentFilter : uint8 {
	All,
	WithSlots,
	WaitingList,
	EAIHotSpotAssignmentFilter_MAX,
};

// Enum GameplayFramework.EAIHotSpotSlotFilter
enum class EAIHotSpotSlotFilter : uint8 {
	All,
	AvailableOnly,
	UnavailableOnly,
	EAIHotSpotSlotFilter_MAX,
};

// Enum GameplayFramework.EHotSpotSlot
enum class EHotSpotSlot : uint8 {
	Melee,
	MeleeHuge,
	Ranged,
	None,
	EHotSpotSlot_MAX,
};

// Enum GameplayFramework.EAIHotSpotSlot
enum class EAIHotSpotSlot : uint8 {
	Free,
	Claimed,
	Occupied,
	Blocked,
	Disabled,
	EAIHotSpotSlot_MAX,
};

// Enum GameplayFramework.EBoundingBoxSlotDirectionCalculation
enum class EBoundingBoxSlotDirectionCalculation : uint8 {
	Auto,
	FaceWall,
	FaceAwayFromWall,
	FaceCenter,
	EBoundingBoxSlotDirectionCalculation_MAX,
};

// Enum GameplayFramework.EApproximationMethod
enum class EApproximationMethod : uint8 {
	NearestLocationOnSpline,
	WeightedAverage,
	EApproximationMethod_MAX,
};

// Enum GameplayFramework.EMobilityType
enum class EMobilityType : uint8 {
	Any,
	Static,
	Dynamic,
	EMobilityType_MAX,
};

// Enum GameplayFramework.EAsyncOverlapCompProgress
enum class EAsyncOverlapCompProgress : uint8 {
	ProgressByTime,
	ProgressByDistance,
	EAsyncOverlapCompProgress_MAX,
};

// Enum GameplayFramework.EAsyncOverlapCompShape
enum class EAsyncOverlapCompShape : uint8 {
	Box,
	Sphere,
	EAsyncOverlapCompShape_MAX,
};

// Enum GameplayFramework.EBlockingVolumeGenerationType
enum class EBlockingVolumeGenerationType : uint8 {
	Convex,
	Concave,
	ConcaveMaxHeight,
	EBlockingVolumeGenerationType_MAX,
};

// Enum GameplayFramework.EIndicatorType
enum class EIndicatorType : uint8 {
	Grenade,
	Airstrike,
	TargetingSniper,
	CastingSkill,
	ChannelingSkill,
	DroppedItem,
	HealthBar,
	TurretHealthBar,
	PartyMember,
	ConvoyLabel,
	CoverVaultHint,
	CoverSlipHint,
	CoverMarker,
	GenericImage,
	Max_None,
	EIndicatorType_MAX,
};

// Enum GameplayFramework.EWidgetDisplayType
enum class EWidgetDisplayType : uint8 {
	Always,
	OnlyOnScreen,
	OnlyOffScreen,
	Max_None,
	EWidgetDisplayType_MAX,
};

// Enum GameplayFramework.EDynamicParamType
enum class EDynamicParamType : uint8 {
	Bool,
	Integer,
	Float,
	String,
	Max_None,
	EDynamicParamType_MAX,
};

// Enum GameplayFramework.EAnimDataOverridePriority
enum class EAnimDataOverridePriority : uint8 {
	Default,
	SkillPath,
	BaseWeapon,
	Weapon,
	CustomMovement,
	Ability,
	MAX,
};

// Enum GameplayFramework.ELookAtBlendSpeed
enum class ELookAtBlendSpeed : uint8 {
	RotationSpeed,
	BlendInTime,
	ELookAtBlendSpeed_MAX,
};

// Enum GameplayFramework.ELookAtPivotType
enum class ELookAtPivotType : uint8 {
	Player,
	Camera,
	ELookAtPivotType_MAX,
};

// Enum GameplayFramework.EDialogueWindowPosition
enum class EDialogueWindowPosition : uint8 {
	EDWP_Left,
	EDWP_Right,
	MAX,
};

// Enum GameplayFramework.EChoiceType
enum class EChoiceType : uint8 {
	ECT_Quest_Main,
	ECT_Quest_Side,
	ECT_Quest_Challange,
	ECT_Shop,
	ECT_Close,
	ECT_Default,
	ECT_Quest_Side_Active,
	ECT_Quest_Accept,
	ECT_Quest_Return,
	ECT_Travel,
	ECT_Crafting,
	ECT_Customization,
	MAX,
};

// Enum GameplayFramework.ETransitionTeleportType
enum class ETransitionTeleportType : uint8 {
	NoTeleport,
	Teleport,
	TeleportWithCheckpoint,
	ETransitionTeleportType_MAX,
};

// Enum GameplayFramework.ESpawnSpotAvailability
enum class ESpawnSpotAvailability : uint8 {
	Invalid,
	Occupied,
	UnOccupied,
	ESpawnSpotAvailability_MAX,
};

// Enum GameplayFramework.ELevelStreamAction
enum class ELevelStreamAction : uint8 {
	Unload,
	Hide,
	LoadButKeepHidden,
	LoadAndMakeVisible,
	ELevelStreamAction_MAX,
};

// Enum GameplayFramework.ECrosshairDragType
enum class ECrosshairDragType : uint8 {
	None,
	Drag,
	MoveDrag,
	ECrosshairDragType_MAX,
};

// Enum GameplayFramework.ECustomizationSpliceType
enum class ECustomizationSpliceType : uint8 {
	SkeletalComponent,
	SkeletalMesh,
	StaticMesh,
	Blast,
	Max_None,
	ECustomizationSpliceType_MAX,
};

// Enum GameplayFramework.ECustomizationRandomizationType
enum class ECustomizationRandomizationType : uint8 {
	Randomize,
	OneIndex,
	None,
	Max_None,
	ECustomizationRandomizationType_MAX,
};

// Enum GameplayFramework.EMaterialCustomizationSlot
enum class EMaterialCustomizationSlot : uint8 {
	EyeColor,
	HairColor,
	SkinColor,
	BeardColor,
	ScarColor,
	Scar,
	Makeup,
	Max_None,
	EMaterialCustomizationSlot_MAX,
};

// Enum GameplayFramework.ECoverSlotAction
enum class ECoverSlotAction : uint8 {
	None,
	Mantle,
	Climb,
	Slip_DEPRECATED,
	PopUp,
	LeanLeft,
	LeanRight,
	PeekLeft,
	PeekRight,
	PeekUp,
	SwatTurn,
	LeanForward,
	MAX_ELEMENTS,
	ECoverSlotAction_MAX,
};

// Enum GameplayFramework.ECoverSlotType
enum class ECoverSlotType : uint8 {
	Standing,
	MidLevel,
	Invalid,
	MAX,
};

// Enum GameplayFramework.ECoverSlotPlacementType
enum class ECoverSlotPlacementType : uint8 {
	Generated,
	Manual,
	ECoverSlotPlacementType_MAX,
};

// Enum GameplayFramework.EFactStorage
enum class EFactStorage : uint8 {
	World,
	Character,
	EFactStorage_MAX,
};

// Enum GameplayFramework.EFactValueType
enum class EFactValueType : uint8 {
	Bool,
	Integer,
	Float,
	String,
	EFactValueType_MAX,
};

// Enum GameplayFramework.EAnalogValueType
enum class EAnalogValueType : uint8 {
	LeftAnalog_X,
	LeftAnalog_Y,
	RightAnalog_X,
	RightAnalog_Y,
	EAnalogValueType_MAX,
};

// Enum GameplayFramework.EFWAIDamageReactionDirection
enum class EFWAIDamageReactionDirection : uint8 {
	Front,
	Back,
	Left,
	Right,
	EFWAIDamageReactionDirection_MAX,
};

// Enum GameplayFramework.EStingerType
enum class EStingerType : uint8 {
	AMS_STING_Tension,
	AMS_STING_Battle,
	AMS_STING_EndOfBattle,
	AMS_STING_EnterTrigger,
	AMS_STING_Last,
	AMS_STING_First,
	AMS_STING_MAX,
};

// Enum GameplayFramework.EBattleMusicType
enum class EBattleMusicType : uint8 {
	AMS_Ambient,
	AMS_Intro,
	AMS_Tension,
	AMS_Battle,
	AMS_BridgeA,
	AMS_BridgeB,
	AMS_BridgeC,
	AMS_BridgeD,
	AMS_End,
	AMS_DBNO,
	AMS_Last,
	AMS_MAX,
};

// Enum GameplayFramework.EMusicType
enum class EMusicType : uint8 {
	AMS_Ambient,
	AMS_Intro,
	AMS_Tension,
	AMS_Battle,
	AMS_BridgeA,
	AMS_BridgeB,
	AMS_BridgeC,
	AMS_BridgeD,
	AMS_End,
	AMS_DBNO,
	AMS_Last,
	AMS_MAX,
};

// Enum GameplayFramework.EInputTraceType
enum class EInputTraceType : uint8 {
	PC_EnableInput,
	PC_DisableInput,
	PC_IgnoreLook,
	PC_IgnoreMove,
	PC_AllowLook,
	PC_AllowMove,
	PC_ResetLook,
	PC_ResetMove,
	PC_ResetFlags,
	PC_SetInputMode_UIOnly,
	PC_SetInputMode_GameOnly,
	PC_SetInputMode_GameAndUI,
	PC_MAX,
};

// Enum GameplayFramework.ECombatState
enum class ECombatState : uint8 {
	Idle,
	Blind,
	Targeting,
	CoverPeek,
	ECombatState_MAX,
};

// Enum GameplayFramework.EShaderParamType
enum class EShaderParamType : uint8 {
	Scalar,
	Vector,
	EShaderParamType_MAX,
};

// Enum GameplayFramework.EBodyArmorWeightType
enum class EBodyArmorWeightType : uint8 {
	Light,
	Medium,
	Heavy,
	MaxNone,
	EBodyArmorWeightType_MAX,
};

// Enum GameplayFramework.EPhysMaterialType
enum class EPhysMaterialType : uint8 {
	Unknown,
	Concrete,
	Mud,
	Snow,
	Dirt,
	Water,
	Metal,
	Wood,
	Grass,
	Glass,
	Flesh,
	Ice,
	Sand,
	Rock,
	Soil,
	DirtyWater,
	Sandbags,
	Fabric,
	FabricFlesh,
	MetalFlesh,
	Rubber,
	WoodTree,
	Foliage,
	WoodMud,
	ReflectBullets,
	MetalHollow,
	WaterDeep,
	Armadillo,
	MonsterFlesh,
	GreenPerforoFlesh,
	WhiteWater,
	Tar,
	MudBlood,
	WaterBlood,
	MagmaHot,
	MagmaCold,
	LavaBossFlesh,
	EnergyShield,
	NoDraw,
	WoodBurning,
	PrimalCharge,
	Shotgunner,
	Cactus,
	YagakBody,
	YagakBack,
	RedSand,
	WaterBlob,
	Status_Ash,
	Status_Freeze,
	Status_Burn,
	Status_Toxic,
	Sand_NoFootstepDecal,
	Hologram,
	DemonNukeShield,
	Waterfall,
	MaxNone,
	EPhysMaterialType_MAX,
};

// Enum GameplayFramework.ENameValidationResult
enum class ENameValidationResult : uint8 {
	IllegalCharacter,
	TooLong,
	TooShort,
	NameAlreadyUsed,
	Valid,
	ENameValidationResult_MAX,
};

// Enum GameplayFramework.EWeaponUseReason
enum class EWeaponUseReason : uint8 {
	Any,
	Fire,
	Target,
	Reload,
	EWeaponUseReason_MAX,
};

// Enum GameplayFramework.EWeaponState
enum class EWeaponState : uint8 {
	Idle,
	Equipping,
	Unequipping,
	Holstered,
	PreFiring,
	Firing,
	PostFiring,
	Reloading,
	PostReloading,
	Dropped,
	EWeaponState_MAX,
};

// Enum GameplayFramework.EInteractionAvailability
enum class EInteractionAvailability : uint8 {
	Always,
	CanBeBlocked,
	OutOfCombat,
	EInteractionAvailability_MAX,
};

// Enum GameplayFramework.EInputCorrectionStrategy
enum class EInputCorrectionStrategy : uint8 {
	ICS_None,
	ICS_CorrectIfErrorIsAboveThreshold,
	ICS_CorrectControllerRotation,
	ICS_CorrectPlayerLocation,
	ICS_MAX,
};

// Enum GameplayFramework.EProgressBarType
enum class EProgressBarType : uint8 {
	PercentBased,
	Infinite,
	MAX,
};

// Enum GameplayFramework.EMinimapNodeStyleType
enum class EMinimapNodeStyleType : uint8 {
	Default,
	Dead,
	Custom1,
	Custom2,
	MAX,
};

// Enum GameplayFramework.EMinimapNodeDrawStatus
enum class EMinimapNodeDrawStatus : uint8 {
	Invisible,
	InRange,
	OnBorder,
	EMinimapNodeDrawStatus_MAX,
};

// Enum GameplayFramework.EQuestJumpType
enum class EQuestJumpType : uint8 {
	NoInfo,
	Locked,
	Unlocked,
	Active,
	Completed,
	Failed,
	MAX,
};

// Enum GameplayFramework.EExplosionRadiusType
enum class EExplosionRadiusType : uint8 {
	Average,
	Min,
	Max,
	Max_None,
};

// Enum GameplayFramework.EQuestFirstTimeRewardStatus
enum class EQuestFirstTimeRewardStatus : uint8 {
	NotGranted,
	Granted,
	Claimed,
	EQuestFirstTimeRewardStatus_MAX,
};

// Enum GameplayFramework.EIconPriority
enum class EIconPriority : uint8 {
	MainQuest,
	SideQuest,
	Dialogue,
	Default,
	Editor,
	EIconPriority_MAX,
};

// Enum GameplayFramework.EQuestPoolType
enum class EQuestPoolType : uint8 {
	MonsterHunter,
	BountyHunter,
	Historian,
	MAX_None,
	EQuestPoolType_MAX,
};

// Enum GameplayFramework.EQuestType
enum class EQuestType : uint8 {
	EQT_Main,
	EQT_Side,
	EQT_Challenge,
	EQT_None,
	MAX,
};

// Enum GameplayFramework.EVOAntfarmGender
enum class EVOAntfarmGender : uint8 {
	Male,
	Female,
	EVOAntfarmGender_MAX,
};

// Enum GameplayFramework.EFireAnimType
enum class EFireAnimType : uint8 {
	Current,
	Hip,
	Regular,
	EFireAnimType_MAX,
};

// Enum GameplayFramework.EReloadCancelingAction
enum class EReloadCancelingAction : uint8 {
	None,
	WeaponUsageBlocked,
	Firing,
	Targeting,
	EReloadCancelingAction_MAX,
};

// Enum GameplayFramework.EWeaponCrosshairVariant
enum class EWeaponCrosshairVariant : uint8 {
	Regular,
	Enemy,
	Ally,
	EWeaponCrosshairVariant_MAX,
};

// Enum GameplayFramework.EWeaponRangeSection
enum class EWeaponRangeSection : uint8 {
	EffectiveRange,
	MarginalRange,
	IneffectiveRange,
	OutOfRange,
	Max_None,
	EWeaponRangeSection_MAX,
};

// Enum GameplayFramework.EWeaponEquipAnimTarget
enum class EWeaponEquipAnimTarget : uint8 {
	Unarmed,
	Pistols,
	Revolver,
	Rifle,
	Minigun,
	RPG,
	EWeaponEquipAnimTarget_MAX,
};

// Enum GameplayFramework.EWeaponFireModeIcon
enum class EWeaponFireModeIcon : uint8 {
	NonAutomaticSingleShot,
	NonAutomaticMultipleShots,
	AutomaticSingleShot,
	AutomaticMultipleShots,
	EWeaponFireModeIcon_MAX,
};

// Enum GameplayFramework.EWeaponClipEmptyAction
enum class EWeaponClipEmptyAction : uint8 {
	None,
	Reload,
	Swap,
	EWeaponClipEmptyAction_MAX,
};

// Enum GameplayFramework.EWeaponCameraVariant
enum class EWeaponCameraVariant : uint8 {
	Targeting,
	BlindFire,
	TargetingInCover,
	BlindFireInCover,
	ReloadingWhileTargeting,
	EquipWhileTargeting,
	EWeaponCameraVariant_MAX,
};

// Enum GameplayFramework.EWeaponCrosshairMovementType
enum class EWeaponCrosshairMovementType : uint8 {
	Diagonal,
	Straight,
	Triangle,
	Horizontal,
	Circular,
	EWeaponCrosshairMovementType_MAX,
};

// Enum GameplayFramework.EWeaponStartTraceOverrideType
enum class EWeaponStartTraceOverrideType : uint8 {
	Never,
	InCover,
	InTargeting,
	Always,
	Max_None,
	EWeaponStartTraceOverrideType_MAX,
};

// Enum GameplayFramework.EWeaponAttachmentHand
enum class EWeaponAttachmentHand : uint8 {
	Left,
	Right,
	Max_None,
	EWeaponAttachmentHand_MAX,
};

// Enum GameplayFramework.EWeaponAttachmentPoint
enum class EWeaponAttachmentPoint : uint8 {
	Hand,
	OffHand,
	BackHolster,
	SidearmHolster,
	Clip,
	Max_None,
	EWeaponAttachmentPoint_MAX,
};

// ScriptStruct GameplayFramework.GlobalEventParams
// Size: 0x40 (Inherited: 0x00)
struct FGlobalEventParams {
	struct AActor* EventInstigator; // 0x00(0x08)
	struct UObject* GenericObject; // 0x08(0x08)
	int32_t GenericInt; // 0x10(0x04)
	float GenericFloat; // 0x14(0x04)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool GenericBool : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FText GenericText; // 0x20(0x18)
	struct FName GenericName; // 0x38(0x08)
};

// ScriptStruct GameplayFramework.TakeHitInfo
// Size: 0x200 (Inherited: 0x00)
struct FTakeHitInfo {
	float ActualDamage; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UObject* DamageTypeClass; // 0x08(0x08)
	float DamageImpulse; // 0x10(0x04)
	struct FVector_NetQuantizeNormal HitDirection; // 0x14(0x0c)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bPointDamage : 1; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct FWeakObjectPtr<struct Acharacter> PawnInstigator; // 0x28(0x08)
	struct FWeakObjectPtr<struct AActor> DamageCauser; // 0x30(0x08)
	char bKilled : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	int32_t DamageEventClassID; // 0x3c(0x04)
	enum class None EnsureReplicationByte; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
	struct FDamageEvent GeneralDamageEvent; // 0x48(0x10)
	struct FPointDamageEvent PointDamageEvent; // 0x58(0xb0)
	struct FRadialDamageEvent RadialDamageEvent; // 0x108(0x40)
	struct FBasePointDamageEvent BasePointDamageEvent; // 0x148(0xb8)
};

// ScriptStruct GameplayFramework.BasePointDamageEvent
// Size: 0xb8 (Inherited: 0xb0)
struct FBasePointDamageEvent : FPointDamageEvent {
	float AdditionalCriticalDamage; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct GameplayFramework.WeaponHit
// Size: 0xa8 (Inherited: 0x00)
struct FWeaponHit {
	struct FHitResult Impact; // 0x00(0x90)
	struct ABaseCharacter* Victim; // 0x90(0x08)
	struct UDamageType* DamageType; // 0x98(0x08)
	float Damage; // 0xa0(0x04)
	char UnknownData_A4_0 : 7; // 0xa4(0x01)
	bool bCrit : 1; // 0xa4(0x01)
	enum class EHitMarkerType MarkerType; // 0xa5(0x01)
	char UnknownData_A6[0x2]; // 0xa6(0x02)
};

// ScriptStruct GameplayFramework.FactEntryDTO
// Size: 0x10 (Inherited: 0x00)
struct FFactEntryDTO {
	struct TArray<enum class None> SerializedEntry; // 0x00(0x10)
};

// ScriptStruct GameplayFramework.VoteRequest
// Size: 0x28 (Inherited: 0x00)
struct FVoteRequest {
	enum class EVoteType VoteType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t VoteFailedChoice; // 0x04(0x04)
	int32_t VoteReason; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString GenericString; // 0x10(0x10)
	struct UObject* SourceObject; // 0x20(0x08)
};

// ScriptStruct GameplayFramework.VoteState
// Size: 0x05 (Inherited: 0x00)
struct FVoteState {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bHasAcknowledgedVote : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bHasVoted : 1; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bVoteAccepted : 1; // 0x02(0x01)
	char UnknownData_3_0 : 7; // 0x03(0x01)
	bool bVoteDelayed : 1; // 0x03(0x01)
	enum class None VoteChoice; // 0x04(0x01)
};

// ScriptStruct GameplayFramework.CheckpointLocationData
// Size: 0x14 (Inherited: 0x00)
struct FCheckpointLocationData {
	struct FGameplayTag ExpectedRegion; // 0x00(0x08)
	struct FGameplayTag PlayerStartTag; // 0x08(0x08)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool bReady : 1; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct GameplayFramework.TeamSyncTaskData
// Size: 0x02 (Inherited: 0x00)
struct FTeamSyncTaskData {
	enum class ETeamSyncReason TaskType; // 0x00(0x01)
	enum class ETeamSyncTaskStatus TaskStatus; // 0x01(0x01)
};

// ScriptStruct GameplayFramework.FrameworkPlayerPlayParams
// Size: 0x68 (Inherited: 0x00)
struct FFrameworkPlayerPlayParams {
	struct ABasePlayerController* PC; // 0x00(0x08)
	struct ULevelSequence* LevelSequence; // 0x08(0x08)
	struct UObject* ContextObject; // 0x10(0x08)
	struct TArray<struct AActor*> ActorsToHide; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bHideConvoyCamp : 1; // 0x28(0x01)
	char UnknownData_29_0 : 7; // 0x29(0x01)
	bool bReplaceActors : 1; // 0x29(0x01)
	char UnknownData_2A_0 : 7; // 0x2a(0x01)
	bool bFadeOnEnd : 1; // 0x2a(0x01)
	char UnknownData_2B[0x1]; // 0x2b(0x01)
	float FadeDuration; // 0x2c(0x04)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bAsDialogue : 1; // 0x30(0x01)
	char UnknownData_31_0 : 7; // 0x31(0x01)
	bool bShowHeadgear : 1; // 0x31(0x01)
	char UnknownData_32_0 : 7; // 0x32(0x01)
	bool bShowHandGear : 1; // 0x32(0x01)
	char UnknownData_33_0 : 7; // 0x33(0x01)
	bool bShowPrimaryWeapon : 1; // 0x33(0x01)
	char UnknownData_34_0 : 7; // 0x34(0x01)
	bool bShowSecondaryWeapon : 1; // 0x34(0x01)
	char UnknownData_35_0 : 7; // 0x35(0x01)
	bool bBlockPlayerMovement : 1; // 0x35(0x01)
	char UnknownData_36_0 : 7; // 0x36(0x01)
	bool bBlockPlayerTurning : 1; // 0x36(0x01)
	char UnknownData_37[0x1]; // 0x37(0x01)
	struct AActor* OriginActor; // 0x38(0x08)
	struct FLevelSequenceCameraSettings LevelSequenceCameraSettings; // 0x40(0x02)
	char UnknownData_42[0x6]; // 0x42(0x06)
	struct UObject* OverridePlaybackContext; // 0x48(0x08)
	char UnknownData_50[0x10]; // 0x50(0x10)
	char UnknownData_60_0 : 7; // 0x60(0x01)
	bool bUseVOManager : 1; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// ScriptStruct GameplayFramework.ChatterPlayData
// Size: 0x20 (Inherited: 0x00)
struct FChatterPlayData {
	struct FName SpeakerID; // 0x00(0x08)
	struct FName VoiceTypeID; // 0x08(0x08)
	struct AActor* Source; // 0x10(0x08)
	float VolumeMultiplier; // 0x18(0x04)
	float PitchMultiplier; // 0x1c(0x04)
};

// ScriptStruct GameplayFramework.VoteReplicatedData
// Size: 0x40 (Inherited: 0x00)
struct FVoteReplicatedData {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bNeedsVisibilityUpdate : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bVoteStarted : 1; // 0x01(0x01)
	enum class EVoteType VoteType; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	int32_t VoteFailedChoice; // 0x04(0x04)
	int32_t VoteReason; // 0x08(0x04)
	float VoteDuration; // 0x0c(0x04)
	struct FString GenericString; // 0x10(0x10)
	struct FString VoteInstigatorName; // 0x20(0x10)
	struct APlayerController* VoteInstigator; // 0x30(0x08)
	struct UObject* SourceObject; // 0x38(0x08)
};

// ScriptStruct GameplayFramework.LevelTransitionData
// Size: 0xa8 (Inherited: 0x00)
struct FLevelTransitionData {
	struct FName FromRegion; // 0x00(0x08)
	struct FName ToRegion; // 0x08(0x08)
	enum class ELevelTransitionType Type; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	int32_t ConnectionNumber; // 0x14(0x04)
	int32_t LightScenarioNumber; // 0x18(0x04)
	char UnknownData_1C_0 : 7; // 0x1c(0x01)
	bool bNoFadeOut : 1; // 0x1c(0x01)
	char UnknownData_1D_0 : 7; // 0x1d(0x01)
	bool bNoFadeIn : 1; // 0x1d(0x01)
	char UnknownData_1E[0x2]; // 0x1e(0x02)
	struct FName CinematicLevelName; // 0x20(0x08)
	struct TSoftObjectPtr<struct ULevelSequence> CinematicSequence; // 0x28(0x28)
	struct TArray<struct AActor*> ActorsToHide; // 0x50(0x10)
	enum class ESequenceWeaponVisibility WeaponsVisibility; // 0x60(0x01)
	char UnknownData_61_0 : 7; // 0x61(0x01)
	bool bHideHeadGear : 1; // 0x61(0x01)
	char UnknownData_62_0 : 7; // 0x62(0x01)
	bool bHideHandGear : 1; // 0x62(0x01)
	char UnknownData_63[0x5]; // 0x63(0x05)
	struct UStreamableCinematic* StreamableCinematicToPass; // 0x68(0x08)
	char UnknownData_70_0 : 7; // 0x70(0x01)
	bool bNoTeleport : 1; // 0x70(0x01)
	char UnknownData_71_0 : 7; // 0x71(0x01)
	bool bNoPlayerStopping : 1; // 0x71(0x01)
	char UnknownData_72_0 : 7; // 0x72(0x01)
	bool bNoDestinationNotify : 1; // 0x72(0x01)
	char UnknownData_73_0 : 7; // 0x73(0x01)
	bool bForceTransitionFromAnywhere : 1; // 0x73(0x01)
	char UnknownData_74_0 : 7; // 0x74(0x01)
	bool bBlockArenaReset : 1; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
	struct FGameplayTagContainer SpawnPointsTags; // 0x78(0x20)
	struct FString Context; // 0x98(0x10)
};

// ScriptStruct GameplayFramework.DialogueRequestParams
// Size: 0xd8 (Inherited: 0x00)
struct FDialogueRequestParams {
	struct FWeakObjectPtr<struct UObject> Instigator; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bHideInstigator : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FWeakObjectPtr<struct ABasePlayerController> TargetPlayer; // 0x10(0x08)
	struct FSoftObjectPath DialogueLevelPath; // 0x18(0x18)
	struct TSoftObjectPtr<struct UWorld> DialogueLevel; // 0x30(0x28)
	struct FSoftObjectPath DialogueAssetPath; // 0x58(0x18)
	struct TSoftObjectPtr<struct ULevelSequence> DialogueAsset; // 0x70(0x28)
	char UnknownData_98_0 : 7; // 0x98(0x01)
	bool bPlayWhenLoaded : 1; // 0x98(0x01)
	char UnknownData_99_0 : 7; // 0x99(0x01)
	bool bFadeBeforeDialogue : 1; // 0x99(0x01)
	char UnknownData_9A_0 : 7; // 0x9a(0x01)
	bool bFadeAfterDialogue : 1; // 0x9a(0x01)
	char UnknownData_9B_0 : 7; // 0x9b(0x01)
	bool bUseVOManager : 1; // 0x9b(0x01)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct AActor*> ActorsToHide; // 0xa0(0x10)
	char UnknownData_B0[0x28]; // 0xb0(0x28)
};

// ScriptStruct GameplayFramework.CollisionShapeBPWrapper
// Size: 0x10 (Inherited: 0x00)
struct FCollisionShapeBPWrapper {
	float HEX_Radius_Radius; // 0x00(0x04)
	float HEY_HH_None; // 0x04(0x04)
	float HEZ_None_None; // 0x08(0x04)
	enum class None ShapeType; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct GameplayFramework.InputThumbstickDirections
// Size: 0xa0 (Inherited: 0x00)
struct FInputThumbstickDirections {
	struct FInputThumbstickDirection WorldSpace; // 0x00(0x20)
	struct FInputThumbstickDirection ControllerSpace; // 0x20(0x20)
	struct FInputThumbstickDirection CharacterSpace; // 0x40(0x20)
	struct FInputThumbstickDirection VelocitySpace; // 0x60(0x20)
	struct FInputThumbstickDirection CoverSpace; // 0x80(0x20)
};

// ScriptStruct GameplayFramework.InputThumbstickDirection
// Size: 0x20 (Inherited: 0x00)
struct FInputThumbstickDirection {
	struct FVector Vector; // 0x00(0x0c)
	struct FRotator Rotator; // 0x0c(0x0c)
	float Size; // 0x18(0x04)
	float Size2D; // 0x1c(0x04)
};

// ScriptStruct GameplayFramework.QuickTimeEventDescription
// Size: 0x02 (Inherited: 0x00)
struct FQuickTimeEventDescription {
	enum class EQuickTimeEventButton ButtonToCapture; // 0x00(0x01)
	enum class EQuickTimeEventType EventType; // 0x01(0x01)
};

// ScriptStruct GameplayFramework.QuickTimeEventStatistics
// Size: 0x10 (Inherited: 0x00)
struct FQuickTimeEventStatistics {
	float ReactionTime; // 0x00(0x04)
	float Timeout; // 0x04(0x04)
	float CompletionLevel; // 0x08(0x04)
	struct FQuickTimeEventDescription Description; // 0x0c(0x02)
	enum class EQuickTimeEventResult Result; // 0x0e(0x01)
	char UnknownData_F[0x1]; // 0x0f(0x01)
};

// ScriptStruct GameplayFramework.InterpolatorHandle
// Size: 0x08 (Inherited: 0x00)
struct FInterpolatorHandle {
	uint64_t Handle; // 0x00(0x08)
};

// ScriptStruct GameplayFramework.EquipParams
// Size: 0x10 (Inherited: 0x00)
struct FEquipParams {
	struct AWeapon* Weapon; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bSkipAnimation : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bOverride : 1; // 0x09(0x01)
	char UnknownData_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct GameplayFramework.RepAttachmentInfo
// Size: 0x50 (Inherited: 0x00)
struct FRepAttachmentInfo {
	struct FTransform InitialTransform; // 0x00(0x30)
	struct USceneComponent* ComponentToAttach; // 0x30(0x08)
	struct FName SocketName; // 0x38(0x08)
	struct USceneComponent* OwnerComponent; // 0x40(0x08)
	enum class EAttachmentRule LocationRule; // 0x48(0x01)
	enum class EAttachmentRule RotationRule; // 0x49(0x01)
	char UnknownData_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct GameplayFramework.ReloadParams
// Size: 0x06 (Inherited: 0x00)
struct FReloadParams {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bActiveWeapon : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bBackHolsterWeapon : 1; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bSideHolsterWeapon : 1; // 0x02(0x01)
	char UnknownData_3_0 : 7; // 0x03(0x01)
	bool bIgnoreAnimation : 1; // 0x03(0x01)
	char UnknownData_4_0 : 7; // 0x04(0x01)
	bool bIgnoreFullClip : 1; // 0x04(0x01)
	char UnknownData_5_0 : 7; // 0x05(0x01)
	bool bIgnoreRequiredAmmo : 1; // 0x05(0x01)
};

// ScriptStruct GameplayFramework.ApproachData
// Size: 0x38 (Inherited: 0x00)
struct FApproachData {
	struct UObject* Target; // 0x00(0x08)
	enum class EPlayerSynchronizationType SynchronizationType; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bSynchronizeLocationWithTarget : 1; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	float ProximityRequired; // 0x0c(0x04)
	float OnRangeRequired; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct UAnimMontage* InteractionMontage; // 0x18(0x08)
	enum class EInteractionCameraMode CameraMode; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	struct FRotator CameraLimits; // 0x24(0x0c)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bHideWeapon : 1; // 0x30(0x01)
	char UnknownData_31_0 : 7; // 0x31(0x01)
	bool bHideWeaponWithoutAnimation : 1; // 0x31(0x01)
	char UnknownData_32[0x6]; // 0x32(0x06)
};

// ScriptStruct GameplayFramework.WeaponSlotSelector
// Size: 0x04 (Inherited: 0x00)
struct FWeaponSlotSelector {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bPrimaryHand : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bSecondaryHand : 1; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bBackHolster : 1; // 0x02(0x01)
	char UnknownData_3_0 : 7; // 0x03(0x01)
	bool bSidearmsHolster : 1; // 0x03(0x01)
};

// ScriptStruct GameplayFramework.NameWrapper
// Size: 0x10 (Inherited: 0x00)
struct FNameWrapper {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct GameplayFramework.FWAIArchetypeVariation
// Size: 0x20 (Inherited: 0x00)
struct FFWAIArchetypeVariation {
	enum class None VariationId; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UFWAIArchetype* AIArchetype; // 0x08(0x08)
	struct UFWAIRank* AIRank; // 0x10(0x08)
	struct UFWAIFaction* AIFaction; // 0x18(0x08)
};

// ScriptStruct GameplayFramework.WeaponAttachmentSockets
// Size: 0x48 (Inherited: 0x00)
struct FWeaponAttachmentSockets {
	struct FName HandL; // 0x00(0x08)
	struct FName HandR; // 0x08(0x08)
	struct FName OffHandL; // 0x10(0x08)
	struct FName OffHandR; // 0x18(0x08)
	struct FName BackHolster; // 0x20(0x08)
	struct FName SidearmHolsterL; // 0x28(0x08)
	struct FName SidearmHolsterR; // 0x30(0x08)
	struct FName ClipL; // 0x38(0x08)
	struct FName ClipR; // 0x40(0x08)
};

// ScriptStruct GameplayFramework.FWAIDamageReactionTypeData
// Size: 0x0c (Inherited: 0x00)
struct FFWAIDamageReactionTypeData {
	enum class EFWAIDamageReactionType Type; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float HealthPercent; // 0x04(0x04)
	float COOLDOWN; // 0x08(0x04)
};

// ScriptStruct GameplayFramework.WeaponNameWrapper
// Size: 0x10 (Inherited: 0x10)
struct FWeaponNameWrapper : FNameWrapper {
};

// ScriptStruct GameplayFramework.MontageAssetSelector
// Size: 0x20 (Inherited: 0x00)
struct FMontageAssetSelector {
	struct UAnimMontage* MontageAsset; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bPlayRandomSection : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString SectionToPlay; // 0x10(0x10)
};

// ScriptStruct GameplayFramework.RememberedInput
// Size: 0xa4 (Inherited: 0x00)
struct FRememberedInput {
	float Timestamp; // 0x00(0x04)
	struct FInputThumbstickDirections Input; // 0x04(0xa0)
};

// ScriptStruct GameplayFramework.FactExpression
// Size: 0x18 (Inherited: 0x00)
struct FFactExpression {
	enum class EFactExpresionType ExprType; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FFactExprOperand> Operands; // 0x08(0x10)
};

// ScriptStruct GameplayFramework.FactExprOperand
// Size: 0x58 (Inherited: 0x00)
struct FFactExprOperand {
	struct FFactNameFromList FactName; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bNegate : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct UFactValueEvalStrategy* EvalStrategyClass; // 0x10(0x08)
	char UnknownData_18[0x40]; // 0x18(0x40)
};

// ScriptStruct GameplayFramework.FactNameFromList
// Size: 0x08 (Inherited: 0x00)
struct FFactNameFromList {
	struct FName FullName; // 0x00(0x08)
};

// ScriptStruct GameplayFramework.TutorialNameWrapper
// Size: 0x10 (Inherited: 0x10)
struct FTutorialNameWrapper : FNameWrapper {
};

// ScriptStruct GameplayFramework.FactValue
// Size: 0x28 (Inherited: 0x00)
struct FFactValue {
	struct FName FactName; // 0x00(0x08)
	struct FFactQueryResult Result; // 0x08(0x20)
};

// ScriptStruct GameplayFramework.FactQueryResult
// Size: 0x20 (Inherited: 0x00)
struct FFactQueryResult {
	struct FString StringValue; // 0x00(0x10)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool bFound : 1; // 0x10(0x01)
	char UnknownData_11_0 : 7; // 0x11(0x01)
	bool BoolValue : 1; // 0x11(0x01)
	char UnknownData_12[0x2]; // 0x12(0x02)
	int32_t IntegerValue; // 0x14(0x04)
	float FloatValue; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct GameplayFramework.AimTargetWeakSpot
// Size: 0x10 (Inherited: 0x00)
struct FAimTargetWeakSpot {
	struct FName BoneName; // 0x00(0x08)
	float Radius; // 0x08(0x04)
	float InnerRangeMultiplier; // 0x0c(0x04)
};

// ScriptStruct GameplayFramework.AssetPath
// Size: 0x10 (Inherited: 0x00)
struct FAssetPath {
	struct FString Path; // 0x00(0x10)
};

// ScriptStruct GameplayFramework.NameArrayWrapper
// Size: 0x10 (Inherited: 0x00)
struct FNameArrayWrapper {
	struct TArray<struct FName> Names; // 0x00(0x10)
};

// ScriptStruct GameplayFramework.LuckSaveData
// Size: 0x04 (Inherited: 0x00)
struct FLuckSaveData {
	float LuckLevel; // 0x00(0x04)
};

// ScriptStruct GameplayFramework.SoftPtrAnimData
// Size: 0x08 (Inherited: 0x00)
struct FSoftPtrAnimData {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct GameplayFramework.WeaponAnim
// Size: 0x38 (Inherited: 0x08)
struct FWeaponAnim : FSoftPtrAnimData {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bRandomizeSection : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bLoopedCharMontage : 1; // 0x09(0x01)
	char UnknownData_A[0x6]; // 0x0a(0x06)
	struct UAnimMontage* CharMontage; // 0x10(0x08)
	struct UAnimMontage* SecondaryCharMontage; // 0x18(0x08)
	struct UAnimMontage* CharMontage_LeftSide; // 0x20(0x08)
	struct UAnimMontage* SecondaryCharMontage_LeftSide; // 0x28(0x08)
	struct UAnimMontage* WeaponMontage; // 0x30(0x08)
};

// ScriptStruct GameplayFramework.WeaponSelector
// Size: 0x02 (Inherited: 0x00)
struct FWeaponSelector {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bActive : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bHolstered : 1; // 0x01(0x01)
};

// ScriptStruct GameplayFramework.WeaponCrosshairData
// Size: 0xc8 (Inherited: 0x00)
struct FWeaponCrosshairData {
	struct TSoftObjectPtr<struct UTexture2D> CrosshairTexture; // 0x00(0x28)
	float CrosshairScale; // 0x28(0x04)
	float Offset; // 0x2c(0x04)
	struct TSoftObjectPtr<struct UTexture2D> DotTexture; // 0x30(0x28)
	float DotScale; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct TSoftObjectPtr<struct UTexture2D> StaticTexture; // 0x60(0x28)
	float StaticScale; // 0x88(0x04)
	enum class EWeaponCrosshairMovementType MovementType; // 0x8c(0x01)
	char UnknownData_8D[0x3]; // 0x8d(0x03)
	struct FFloatInterval SpreadRange; // 0x90(0x08)
	float InterpolationSpeed; // 0x98(0x04)
	float CursorSpreadMultiplier; // 0x9c(0x04)
	SoftClassProperty AmmoWidget; // 0xa0(0x28)
};

// ScriptStruct GameplayFramework.ActionPromptParams
// Size: 0x40 (Inherited: 0x00)
struct FActionPromptParams {
	struct FText PrefixText; // 0x00(0x18)
	struct FText PostfixText; // 0x18(0x18)
	struct FName ActionName; // 0x30(0x08)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool bPlayBtnPressAnim : 1; // 0x38(0x01)
	char UnknownData_39_0 : 7; // 0x39(0x01)
	bool bUseProgressBar : 1; // 0x39(0x01)
	char UnknownData_3A_0 : 7; // 0x3a(0x01)
	bool bShowButton : 1; // 0x3a(0x01)
	char UnknownData_3B[0x5]; // 0x3b(0x05)
};

// ScriptStruct GameplayFramework.AIHotSpotSlotConfig
// Size: 0x1c (Inherited: 0x00)
struct FAIHotSpotSlotConfig {
	struct FVector Offset; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	enum class EHotSpotSlot SlotType; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct GameplayFramework.AIHotSpotSlotInfo
// Size: 0x10 (Inherited: 0x00)
struct FAIHotSpotSlotInfo {
	struct AAIHotSpot* HotSpot; // 0x00(0x08)
	int32_t SlotIndex; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct GameplayFramework.SlotOwnershipState
// Size: 0x10 (Inherited: 0x00)
struct FSlotOwnershipState {
	struct APawn* Owner; // 0x00(0x08)
	enum class EAIHotSpotSlot SlotState; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct GameplayFramework.AimAssistPerWeaponSettings
// Size: 0x50 (Inherited: 0x00)
struct FAimAssistPerWeaponSettings {
	struct AWeapon* WeaponClass; // 0x00(0x08)
	struct FAimAssistSettings AimAssistSettings; // 0x08(0x48)
};

// ScriptStruct GameplayFramework.AimAssistSettings
// Size: 0x48 (Inherited: 0x00)
struct FAimAssistSettings {
	float EffectiveRange; // 0x00(0x04)
	float NotRenderedDuration; // 0x04(0x04)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bTargetingHelper : 1; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float TargetingHelperDuration; // 0x0c(0x04)
	float TargetingHelperInterpolationSpeed; // 0x10(0x04)
	float MaxAllowedTargetingRotationInDegrees; // 0x14(0x04)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bTargetingInterpolationEnabled : 1; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	float TargetingInterpolationSpeed; // 0x1c(0x04)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bAimingHelper : 1; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	float FarTargetDistance; // 0x24(0x04)
	float AimingInputDamping; // 0x28(0x04)
	float AimingInputDampingFarTarget; // 0x2c(0x04)
	float AimingNearInputDamping; // 0x30(0x04)
	float AimingNearInputDampingFarTarget; // 0x34(0x04)
	float FiringInputDamping; // 0x38(0x04)
	float FiringInputDampingFarTarget; // 0x3c(0x04)
	float DampingIncreaseInterpolationSpeed; // 0x40(0x04)
	float DampingDecreaseInterpolationSpeed; // 0x44(0x04)
};

// ScriptStruct GameplayFramework.DynamicParam
// Size: 0x38 (Inherited: 0x00)
struct FDynamicParam {
	struct FName ParamName; // 0x00(0x08)
	enum class EDynamicParamType ParamType; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FString ParamValue; // 0x10(0x10)
	char UnknownData_20[0x18]; // 0x20(0x18)
};

// ScriptStruct GameplayFramework.CameraVolumeSettings
// Size: 0x18 (Inherited: 0x00)
struct FCameraVolumeSettings {
	struct FVector SocketOffset; // 0x00(0x0c)
	struct FVector TargetOffset; // 0x0c(0x0c)
};

// ScriptStruct GameplayFramework.InCombatCameraOffset
// Size: 0xa4 (Inherited: 0x00)
struct FInCombatCameraOffset {
	struct FVectorByPitchMod SocketOffset; // 0x00(0x24)
	struct FVectorByPitchMod TargetOffset; // 0x24(0x24)
	float ArmOffset; // 0x48(0x04)
	float BlendTime; // 0x4c(0x04)
	enum class EAlphaBlendOption BlendType; // 0x50(0x01)
	char UnknownData_51[0x53]; // 0x51(0x53)
};

// ScriptStruct GameplayFramework.VectorByPitchMod
// Size: 0x24 (Inherited: 0x00)
struct FVectorByPitchMod {
	struct FVector ModTop; // 0x00(0x0c)
	struct FVector ModMid; // 0x0c(0x0c)
	struct FVector ModBot; // 0x18(0x0c)
};

// ScriptStruct GameplayFramework.CrosshairDragPointOverride
// Size: 0x14 (Inherited: 0x00)
struct FCrosshairDragPointOverride {
	char UnknownData_0[0x14]; // 0x00(0x14)
};

// ScriptStruct GameplayFramework.CameraModPitchInterp
// Size: 0x0c (Inherited: 0x00)
struct FCameraModPitchInterp {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bEnabled : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bDeactivateOnInput : 1; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float Pitch; // 0x04(0x04)
	float InterpTime; // 0x08(0x04)
};

// ScriptStruct GameplayFramework.LookAtParams
// Size: 0x58 (Inherited: 0x00)
struct FLookAtParams {
	struct FName LookAtID; // 0x00(0x08)
	struct AVolume* LookAtVolume; // 0x08(0x08)
	enum class ELookAtBlendSpeed BlendSpeedType; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float CameraRotationSpeed; // 0x14(0x04)
	float BlendInTime; // 0x18(0x04)
	float BlendOutTime; // 0x1c(0x04)
	float LookAtTime; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct AActor* LookAtTarget; // 0x28(0x08)
	float PromptOnScreenTime; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct AActor* OptionalCameraTarget; // 0x38(0x08)
	float FOVMod; // 0x40(0x04)
	struct FVector SocketOffset; // 0x44(0x0c)
	enum class ELookAtPivotType PivotType; // 0x50(0x01)
	char UnknownData_51_0 : 7; // 0x51(0x01)
	bool bReturnToStartRotation : 1; // 0x51(0x01)
	char UnknownData_52_0 : 7; // 0x52(0x01)
	bool bHideHud : 1; // 0x52(0x01)
	char UnknownData_53[0x5]; // 0x53(0x05)
};

// ScriptStruct GameplayFramework.LiteMaterialTags
// Size: 0x10 (Inherited: 0x00)
struct FLiteMaterialTags {
	struct TArray<struct FName> Tags; // 0x00(0x10)
};

// ScriptStruct GameplayFramework.GameplayCueGroupsRow
// Size: 0x20 (Inherited: 0x08)
struct FGameplayCueGroupsRow : FTableRowBase {
	struct TArray<struct FGameplayTag> RelatedTags; // 0x08(0x10)
	struct UGameplayEffect* DeathGameplayEffect; // 0x18(0x08)
};

// ScriptStruct GameplayFramework.LiteMaterialUserTypeRow
// Size: 0x18 (Inherited: 0x08)
struct FLiteMaterialUserTypeRow : FTableRowBase {
	struct TArray<struct FName> MaterialGroupHierarchy; // 0x08(0x10)
};

// ScriptStruct GameplayFramework.LiteMaterialGroupRow
// Size: 0x28 (Inherited: 0x08)
struct FLiteMaterialGroupRow : FTableRowBase {
	struct TArray<struct FGameplayTag> SkillsTagsAffected; // 0x08(0x10)
	struct TArray<struct FString> AffectedLiteMaterialUsers; // 0x18(0x10)
};

// ScriptStruct GameplayFramework.BaseChoice
// Size: 0xe8 (Inherited: 0x00)
struct FBaseChoice {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FText DisplayText; // 0x08(0x18)
	struct FNameWrapper DisplayTextKey; // 0x20(0x10)
	float JumpTime; // 0x30(0x04)
	struct FName QuestToBegin; // 0x34(0x08)
	char UnknownData_3C_0 : 7; // 0x3c(0x01)
	bool bDontJump : 1; // 0x3c(0x01)
	char UnknownData_3D_0 : 7; // 0x3d(0x01)
	bool bHideWidget : 1; // 0x3d(0x01)
	char UnknownData_3E[0x2]; // 0x3e(0x02)
	struct FName ChoiceEventName; // 0x40(0x08)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bAlreadyUsed : 1; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct FFactValue VisibilityFact; // 0x50(0x28)
	struct FFactExpression VisibilityFactExpr; // 0x78(0x18)
	struct FFactValue ChoiceFact; // 0x90(0x28)
	char UnknownData_B8_0 : 7; // 0xb8(0x01)
	bool bVisible : 1; // 0xb8(0x01)
	enum class EChoiceType ChoiceType; // 0xb9(0x01)
	char UnknownData_BA[0x6]; // 0xba(0x06)
	struct FSectionLink ChoiceSectionLink; // 0xc0(0x20)
	char UnknownData_E0_0 : 7; // 0xe0(0x01)
	bool bSeamlessJump : 1; // 0xe0(0x01)
	char UnknownData_E1_0 : 7; // 0xe1(0x01)
	bool bForceLeave : 1; // 0xe1(0x01)
	char UnknownData_E2[0x6]; // 0xe2(0x06)
};

// ScriptStruct GameplayFramework.SectionLink
// Size: 0x20 (Inherited: 0x00)
struct FSectionLink {
	struct FWeakObjectPtr<struct UMovieSceneSection> Owner; // 0x00(0x08)
	struct FWeakObjectPtr<struct UMovieSceneSection> Section; // 0x08(0x08)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool bJumpToStartTime : 1; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	struct FFrameNumber JumpFrame; // 0x14(0x04)
	float JumpTime; // 0x18(0x04)
	char UnknownData_1C_0 : 7; // 0x1c(0x01)
	bool bJumpsToEndOfSequence : 1; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct GameplayFramework.DialogueSequence
// Size: 0x20 (Inherited: 0x00)
struct FDialogueSequence {
	struct TArray<struct FDialogueLine> Lines; // 0x00(0x10)
	struct FName SequenceEndedEvent; // 0x10(0x08)
	struct FName FactName; // 0x18(0x08)
};

// ScriptStruct GameplayFramework.DialogueLine
// Size: 0x60 (Inherited: 0x00)
struct FDialogueLine {
	struct FName Source; // 0x00(0x08)
	struct FText Text; // 0x08(0x18)
	struct FName DialogueLineID; // 0x20(0x08)
	struct TSoftObjectPtr<struct USoundBase> SoundWave; // 0x28(0x28)
	struct FGuid UniqueId; // 0x50(0x10)
};

// ScriptStruct GameplayFramework.DialogueEditorSettings
// Size: 0x18 (Inherited: 0x00)
struct FDialogueEditorSettings {
	struct TArray<struct FName> DialogueParticipants; // 0x00(0x10)
	struct UDataTable* DialogueLines; // 0x10(0x08)
};

// ScriptStruct GameplayFramework.FactJumpTime
// Size: 0x30 (Inherited: 0x28)
struct FFactJumpTime : FFactValue {
	float JumpTime; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct GameplayFramework.ChoiceLocalizedData
// Size: 0x20 (Inherited: 0x08)
struct FChoiceLocalizedData : FTableRowBase {
	struct FText DisplayText; // 0x08(0x18)
};

// ScriptStruct GameplayFramework.DialogueDataTableRow
// Size: 0x60 (Inherited: 0x08)
struct FDialogueDataTableRow : FTableRowBase {
	struct FName Source; // 0x08(0x08)
	struct FName Target; // 0x10(0x08)
	struct FText Text; // 0x18(0x18)
	struct TSoftObjectPtr<struct USoundBase> AudioAsset; // 0x30(0x28)
	struct FName Loc; // 0x58(0x08)
};

// ScriptStruct GameplayFramework.KillRequest
// Size: 0x28 (Inherited: 0x00)
struct FKillRequest {
	char UnknownData_0[0x10]; // 0x00(0x10)
	struct AController* Instigator; // 0x10(0x08)
	struct AActor* DamageCauser; // 0x18(0x08)
	char UnknownData_20[0x8]; // 0x20(0x08)
};

// ScriptStruct GameplayFramework.CanvasMarkerIcon
// Size: 0x20 (Inherited: 0x00)
struct FCanvasMarkerIcon {
	struct UTexture2D* Texture; // 0x00(0x08)
	char UnknownData_8[0x18]; // 0x08(0x18)
};

// ScriptStruct GameplayFramework.LevelStreamingHelper
// Size: 0x10 (Inherited: 0x00)
struct FLevelStreamingHelper {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayFramework.WorldMapNodeConnection
// Size: 0x14 (Inherited: 0x00)
struct FWorldMapNodeConnection {
	struct FGameplayTag FromNode; // 0x00(0x08)
	struct FGameplayTag ToNode; // 0x08(0x08)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool bShowTravelAnimation : 1; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct GameplayFramework.WorldMapNodeBasicData
// Size: 0xe8 (Inherited: 0x00)
struct FWorldMapNodeBasicData {
	struct FGameplayTag regionname; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bUsePersistentLocalizedNameAsDisplayName : 1; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct FText Description; // 0x28(0x18)
	char UnknownData_40_0 : 7; // 0x40(0x01)
	bool bCanExectueTravelAction : 1; // 0x40(0x01)
	char UnknownData_41_0 : 7; // 0x41(0x01)
	bool bCanExectueZoomAction : 1; // 0x41(0x01)
	enum class EWorldMapNodeType NodeType; // 0x42(0x01)
	char UnknownData_43[0x5]; // 0x43(0x05)
	struct FSoftObjectPath RegionTexture; // 0x48(0x18)
	struct FSoftObjectPath FogOfWarTexture; // 0x60(0x18)
	int32_t NodeID; // 0x78(0x04)
	struct FVector2D NodePosition; // 0x7c(0x08)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct UBaseWorldMapNode* NodeClass; // 0x88(0x08)
	char UnknownData_90_0 : 7; // 0x90(0x01)
	bool bUseUnlockNodeFactExpr : 1; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
	struct FFactExpression UnlockNodeFactExpr; // 0x98(0x18)
	struct FFactExpression HideNodeFactExpr; // 0xb0(0x18)
	struct FFactExpression ShowDescriptionFactExpr; // 0xc8(0x18)
	struct FEventName GlobalEventName; // 0xe0(0x08)
};

// ScriptStruct GameplayFramework.EventName
// Size: 0x08 (Inherited: 0x00)
struct FEventName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct GameplayFramework.CinematicStreamingData
// Size: 0x50 (Inherited: 0x00)
struct FCinematicStreamingData {
	struct FAssetPath CineSequence; // 0x00(0x10)
	struct FGameplayTag CineRegion; // 0x10(0x08)
	int32_t LightScenarioDuringCine; // 0x18(0x04)
	int32_t LightScenarioAfterCine; // 0x1c(0x04)
	struct TArray<struct FLevelStreamAction> ActionsBeforeCine; // 0x20(0x10)
	struct TArray<struct FLevelStreamAction> ActionsDuringCine; // 0x30(0x10)
	struct TArray<struct FLevelStreamAction> ActionsAfterCine; // 0x40(0x10)
};

// ScriptStruct GameplayFramework.LevelStreamAction
// Size: 0x18 (Inherited: 0x00)
struct FLevelStreamAction {
	struct FAssetPath LevelPath; // 0x00(0x10)
	enum class ELevelStreamAction LevelStreamAction; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GameplayFramework.BaseRegionConnection
// Size: 0x48 (Inherited: 0x00)
struct FBaseRegionConnection {
	struct FGameplayTag FromRegion; // 0x00(0x08)
	struct FGameplayTag ToRegion; // 0x08(0x08)
	int32_t ConnectionNumber; // 0x10(0x04)
	struct FGameplayTag PortalName; // 0x14(0x08)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FGameplayTagContainer SpawnPointsTags; // 0x20(0x20)
	char UnknownData_40_0 : 7; // 0x40(0x01)
	bool bOverrideResetArenaBehaviour : 1; // 0x40(0x01)
	char UnknownData_41_0 : 7; // 0x41(0x01)
	bool bResetArenas : 1; // 0x41(0x01)
	char UnknownData_42[0x6]; // 0x42(0x06)
};

// ScriptStruct GameplayFramework.SeamlessRegionConnection
// Size: 0x78 (Inherited: 0x48)
struct FSeamlessRegionConnection : FBaseRegionConnection {
	struct TArray<struct FLevelStreamAction> PreStreamActions; // 0x48(0x10)
	struct TArray<struct FLevelStreamAction> StreamActions; // 0x58(0x10)
	struct TArray<struct FLevelStreamAction> PostStreamActions; // 0x68(0x10)
};

// ScriptStruct GameplayFramework.SimpleRegionConnection
// Size: 0xa0 (Inherited: 0x48)
struct FSimpleRegionConnection : FBaseRegionConnection {
	struct TArray<struct FLevelStreamAction> LevelStreamActions; // 0x48(0x10)
	struct FTransitionCinematicData StartTransitionCine; // 0x58(0x48)
};

// ScriptStruct GameplayFramework.TransitionCinematicData
// Size: 0x48 (Inherited: 0x00)
struct FTransitionCinematicData {
	struct FFactExpression ShowCineFactExp; // 0x00(0x18)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bOnlyOnPersistentChange : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FAssetPath CineSequence; // 0x20(0x10)
	struct TArray<struct FAssetPath> CineLevelPaths; // 0x30(0x10)
	struct FEventName GlobalEventName; // 0x40(0x08)
};

// ScriptStruct GameplayFramework.BaseNamedActorToRegionTableRow
// Size: 0x10 (Inherited: 0x08)
struct FBaseNamedActorToRegionTableRow : FTableRowBase {
	struct FName regionname; // 0x08(0x08)
};

// ScriptStruct GameplayFramework.ReplicatedRegionConnection
// Size: 0x14 (Inherited: 0x00)
struct FReplicatedRegionConnection {
	struct FName CurrentRegion; // 0x00(0x08)
	struct FName PreviousRegion; // 0x08(0x08)
	int32_t ConnectionNumber; // 0x10(0x04)
};

// ScriptStruct GameplayFramework.BasePersistentWorldStructure
// Size: 0x88 (Inherited: 0x00)
struct FBasePersistentWorldStructure {
	struct FAssetPath PersistentLevelPathToLoad; // 0x00(0x10)
	struct TMap<struct FAssetPath, struct FFactExpression> FactBoundLevels; // 0x10(0x50)
	struct FText LocalizedName; // 0x60(0x18)
	struct TArray<struct FBaseRegionData> Regions; // 0x78(0x10)
};

// ScriptStruct GameplayFramework.BaseRegionData
// Size: 0x260 (Inherited: 0x00)
struct FBaseRegionData {
	struct FGameplayTag regionname; // 0x00(0x08)
	struct FText LocalizedRegionName; // 0x08(0x18)
	struct TSoftObjectPtr<struct UTexture2D> BackgroundImage; // 0x20(0x28)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bRequiresManualFadeIn : 1; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct FFactExpression ManualFadeInFactExp; // 0x50(0x18)
	struct TArray<struct FAssetPath> SubLevelPathsToLoad; // 0x68(0x10)
	struct FTransitionCinematicData StartRegionCine; // 0x78(0x48)
	struct FTransitionCinematicData EndRegionCine; // 0xc0(0x48)
	struct TMap<struct FGameplayTag, struct FTransitionCinematicData> PostTeleportCine; // 0x108(0x50)
	struct FLightScenarioData LightScenario0; // 0x158(0x30)
	struct FLightScenarioData LightScenario1; // 0x188(0x30)
	struct FAssetPath LightScenarioPath0; // 0x1b8(0x10)
	struct FAssetPath LightScenarioPath1; // 0x1c8(0x10)
	struct FFactExpression RandomLightScenarioFactExp; // 0x1d8(0x18)
	struct TArray<struct FRegionUpdateData> RegionUpdates; // 0x1f0(0x10)
	enum class ECombatModePermit DefaultCombatModePermit; // 0x200(0x01)
	char UnknownData_201[0x7]; // 0x201(0x07)
	struct TMap<struct FGameplayTag, struct FRegionAreaData> AreaMap; // 0x208(0x50)
	char UnknownData_258_0 : 7; // 0x258(0x01)
	bool bAutoRespawnPlayer : 1; // 0x258(0x01)
	char UnknownData_259[0x7]; // 0x259(0x07)
};

// ScriptStruct GameplayFramework.RegionAreaData
// Size: 0x30 (Inherited: 0x00)
struct FRegionAreaData {
	struct FText AreaDisplayName; // 0x00(0x18)
	struct FText AreaDescription; // 0x18(0x18)
};

// ScriptStruct GameplayFramework.RegionUpdateData
// Size: 0x18 (Inherited: 0x00)
struct FRegionUpdateData {
	struct FGameplayTag GameplayTag; // 0x00(0x08)
	struct TArray<struct FLevelStreamAction> LevelStreamActions; // 0x08(0x10)
};

// ScriptStruct GameplayFramework.LightScenarioData
// Size: 0x30 (Inherited: 0x00)
struct FLightScenarioData {
	struct FAssetPath LightLevelPath; // 0x00(0x10)
	struct FAssetPath AudioLevelPath; // 0x10(0x10)
	struct FAssetPath MusicLevelPath; // 0x20(0x10)
};

// ScriptStruct GameplayFramework.CameraInternalStateSettings
// Size: 0xa0 (Inherited: 0x00)
struct FCameraInternalStateSettings {
	float BlendInTime; // 0x00(0x04)
	enum class EAlphaBlendOption BlendType; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct FCameraStateSettings CameraSettings; // 0x08(0x98)
};

// ScriptStruct GameplayFramework.CameraStateSettings
// Size: 0x98 (Inherited: 0x00)
struct FCameraStateSettings {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bKeepCrosshairInPlaceDuringMirroring : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float CameraMirrorSpeed; // 0x04(0x04)
	struct FVectorByPitchMod SpringArmSocketOffset; // 0x08(0x24)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct UCurveVector* CustomSocketOffsetCurve; // 0x30(0x08)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool bAdditiveSocketOffset : 1; // 0x38(0x01)
	char UnknownData_39_0 : 7; // 0x39(0x01)
	bool bAbsoluteSocketOffset : 1; // 0x39(0x01)
	char UnknownData_3A[0x2]; // 0x3a(0x02)
	struct FVectorByPitchMod SpringArmTargetOffset; // 0x3c(0x24)
	char UnknownData_60_0 : 7; // 0x60(0x01)
	bool bAdditiveTargetOffset : 1; // 0x60(0x01)
	char UnknownData_61_0 : 7; // 0x61(0x01)
	bool bAbsoluteTargetOffset : 1; // 0x61(0x01)
	char UnknownData_62[0x2]; // 0x62(0x02)
	float SpringArmLengthOffset; // 0x64(0x04)
	float FOVModifier; // 0x68(0x04)
	char UnknownData_6C_0 : 7; // 0x6c(0x01)
	bool bLagSpringArm : 1; // 0x6c(0x01)
	char UnknownData_6D_0 : 7; // 0x6d(0x01)
	bool bDoCollisionTest : 1; // 0x6d(0x01)
	char UnknownData_6E_0 : 7; // 0x6e(0x01)
	bool bDoAdvancedCollisionTest : 1; // 0x6e(0x01)
	char UnknownData_6F[0x1]; // 0x6f(0x01)
	struct FCameraModPitchInterp PitchInterp; // 0x70(0x0c)
	char UnknownData_7C[0x1c]; // 0x7c(0x1c)
};

// ScriptStruct GameplayFramework.CameraControlParameters
// Size: 0x18 (Inherited: 0x00)
struct FCameraControlParameters {
	struct FWeakObjectPtr<struct AActor> TargetActor; // 0x00(0x08)
	struct FVector TargetLocation; // 0x08(0x0c)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct GameplayFramework.CameraFloatMod
// Size: 0x08 (Inherited: 0x00)
struct FCameraFloatMod {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct GameplayFramework.ActiveCameraStateDebugInfo
// Size: 0x68 (Inherited: 0x00)
struct FActiveCameraStateDebugInfo {
	char UnknownData_0[0x68]; // 0x00(0x68)
};

// ScriptStruct GameplayFramework.CameraStateHistory
// Size: 0x10 (Inherited: 0x00)
struct FCameraStateHistory {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayFramework.MaterialGroupSpliceRequest
// Size: 0x68 (Inherited: 0x00)
struct FMaterialGroupSpliceRequest {
	char UnknownData_0[0x68]; // 0x00(0x68)
};

// ScriptStruct GameplayFramework.CustomizationSpliceRequest
// Size: 0x0c (Inherited: 0x00)
struct FCustomizationSpliceRequest {
	char UnknownData_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct GameplayFramework.CharacterSkeletalMeshReplicationData
// Size: 0x20 (Inherited: 0x00)
struct FCharacterSkeletalMeshReplicationData {
	enum class None HeadIndex; // 0x00(0x01)
	enum class None SkinColorIndex; // 0x01(0x01)
	enum class None EyeColorIndex; // 0x02(0x01)
	enum class None HairIndex; // 0x03(0x01)
	enum class None HairColorIndex; // 0x04(0x01)
	enum class None BeardIndex; // 0x05(0x01)
	enum class None BeardColorIndex; // 0x06(0x01)
	enum class None TorsoIndex; // 0x07(0x01)
	enum class None HandIndex; // 0x08(0x01)
	enum class None LegsIndex; // 0x09(0x01)
	enum class None FootIndex; // 0x0a(0x01)
	enum class None BodyIndex; // 0x0b(0x01)
	enum class None ScarIndex; // 0x0c(0x01)
	enum class None PiercingIndex; // 0x0d(0x01)
	enum class None MakeupIndex; // 0x0e(0x01)
	enum class None ScarColorIndex; // 0x0f(0x01)
	struct TArray<enum class None> CustomMeshes; // 0x10(0x10)
};

// ScriptStruct GameplayFramework.AttachmentToSocketOverride
// Size: 0x10 (Inherited: 0x00)
struct FAttachmentToSocketOverride {
	struct USceneComponent* CompToAttach; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct GameplayFramework.CustomizationComponentData
// Size: 0x10 (Inherited: 0x00)
struct FCustomizationComponentData {
	struct USkeletalMeshComponent* MeshComponent; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bIsModifed : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bIsPendingReset : 1; // 0x09(0x01)
	char UnknownData_A_0 : 7; // 0x0a(0x01)
	bool bIsPendingForceChange : 1; // 0x0a(0x01)
	char UnknownData_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct GameplayFramework.SkeletalLightSetting
// Size: 0x0c (Inherited: 0x00)
struct FSkeletalLightSetting {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool CastShadow : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bPropagateLightingChannels : 1; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bCastCapsuleDirectShadowDirectionalLights : 1; // 0x02(0x01)
	char UnknownData_3_0 : 7; // 0x03(0x01)
	bool bCastCapsuleDirectShadowPointLights : 1; // 0x03(0x01)
	char UnknownData_4_0 : 7; // 0x04(0x01)
	bool bCastCapsuleIndirectShadow : 1; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	float CapsuleIndirectShadowMinVisibility; // 0x08(0x04)
};

// ScriptStruct GameplayFramework.MainCustomizationSlot
// Size: 0x18 (Inherited: 0x00)
struct FMainCustomizationSlot {
	enum class ECustomizationSlotType SlotType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct FHeadMeshWithProbability> Meshes; // 0x08(0x10)
};

// ScriptStruct GameplayFramework.SkeletalMeshWithProbability
// Size: 0x78 (Inherited: 0x00)
struct FSkeletalMeshWithProbability {
	struct TSoftObjectPtr<struct USkeletalMesh> SkeletalMesh; // 0x00(0x28)
	float Probability; // 0x28(0x04)
	float NormalizedProbability; // 0x2c(0x04)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bIsUnlockable : 1; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FName UnlockIdentifierName; // 0x34(0x08)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FMaterialOverride> MaterialOverrides; // 0x40(0x10)
	char bHideOnDetach : 1; // 0x50(0x01)
	char bDisableClothSimulation : 1; // 0x50(0x01)
	char bCollideWithEnvironment : 1; // 0x50(0x01)
	char bCollideWithAttachedChildren : 1; // 0x50(0x01)
	char bLocalSpaceSimulation : 1; // 0x50(0x01)
	char bClothMorphTarget : 1; // 0x50(0x01)
	char bDisableMorphTarget : 1; // 0x50(0x01)
	char bResetAfterTeleport : 1; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	float TeleportDistanceThreshold; // 0x54(0x04)
	float TeleportRotationThreshold; // 0x58(0x04)
	float ClothBlendWeight; // 0x5c(0x04)
	char UnknownData_60_0 : 7; // 0x60(0x01)
	bool HidesHair : 1; // 0x60(0x01)
	char UnknownData_61_0 : 7; // 0x61(0x01)
	bool HidesBeard : 1; // 0x61(0x01)
	char UnknownData_62[0x6]; // 0x62(0x06)
	struct TArray<struct FColorWithProbability> TintColor; // 0x68(0x10)
};

// ScriptStruct GameplayFramework.ColorWithProbability
// Size: 0x4c (Inherited: 0x00)
struct FColorWithProbability {
	float Probability; // 0x00(0x04)
	float NormalizedProbability; // 0x04(0x04)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bIsUnlockable : 1; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FName UnlockIdentifierName; // 0x0c(0x08)
	float RootTipContrast; // 0x14(0x04)
	float Scatter; // 0x18(0x04)
	float TintMap1; // 0x1c(0x04)
	float TintMap2; // 0x20(0x04)
	float SkinBrightness; // 0x24(0x04)
	float SkinTone; // 0x28(0x04)
	struct FLinearColor Color; // 0x2c(0x10)
	struct FLinearColor DisplayColor; // 0x3c(0x10)
};

// ScriptStruct GameplayFramework.MaterialOverride
// Size: 0x30 (Inherited: 0x00)
struct FMaterialOverride {
	struct TSoftObjectPtr<struct UMaterialInstance> Material; // 0x00(0x28)
	struct FName MaterialSlotName; // 0x28(0x08)
};

// ScriptStruct GameplayFramework.HeadMeshWithProbability
// Size: 0x100 (Inherited: 0x78)
struct FHeadMeshWithProbability : FSkeletalMeshWithProbability {
	struct TArray<struct FColorWithProbability> BodyColor; // 0x78(0x10)
	struct TArray<struct FColorWithProbability> EyeColor; // 0x88(0x10)
	struct TArray<struct FColorWithProbability> ScarColor; // 0x98(0x10)
	struct TArray<struct FScarWithProbability> Scars; // 0xa8(0x10)
	struct TSoftObjectPtr<struct UMaterialInstance> NoScarMaterial; // 0xb8(0x28)
	struct TArray<struct FSkeletalMeshWithProbability> BeardSkeletalMeshes; // 0xe0(0x10)
	struct TArray<struct FSkeletalMeshWithProbability> HairSkeletalMeshes; // 0xf0(0x10)
};

// ScriptStruct GameplayFramework.ScarWithProbability
// Size: 0xa8 (Inherited: 0x00)
struct FScarWithProbability {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bIsUnlockable : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FName UnlockIdentifierName; // 0x04(0x08)
	float Brigtness; // 0x0c(0x04)
	struct FLinearColor ColorA; // 0x10(0x10)
	struct FLinearColor ColorB; // 0x20(0x10)
	float NormalStrength; // 0x30(0x04)
	struct FVector2D Postion; // 0x34(0x08)
	float Rotation; // 0x3c(0x04)
	struct FVector2D Scale; // 0x40(0x08)
	struct TSoftObjectPtr<struct UTexture2D> Mask; // 0x48(0x28)
	struct TSoftObjectPtr<struct UTexture2D> NormalMap; // 0x70(0x28)
	float Probability; // 0x98(0x04)
	float NormalizedProbability; // 0x9c(0x04)
	char UnknownData_A0_0 : 7; // 0xa0(0x01)
	bool bCanColorBeOverriden : 1; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct GameplayFramework.SubCustomizationSlot
// Size: 0x18 (Inherited: 0x00)
struct FSubCustomizationSlot {
	enum class ECustomizationSlotType SlotType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct FSkeletalMeshWithProbability> Meshes; // 0x08(0x10)
};

// ScriptStruct GameplayFramework.CustomizationAttachment
// Size: 0x18 (Inherited: 0x00)
struct FCustomizationAttachment {
	struct FName SocketName; // 0x00(0x08)
	struct TArray<struct FStaticMeshWithProbability> StaticMeshesWithProbabilities; // 0x08(0x10)
};

// ScriptStruct GameplayFramework.StaticMeshWithProbability
// Size: 0x48 (Inherited: 0x00)
struct FStaticMeshWithProbability {
	struct TSoftObjectPtr<struct UStaticMesh> StaticMesh; // 0x00(0x28)
	struct TArray<struct FMaterialOverride> MaterialOverrides; // 0x28(0x10)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool HidesHair : 1; // 0x38(0x01)
	char UnknownData_39_0 : 7; // 0x39(0x01)
	bool HidesBeard : 1; // 0x39(0x01)
	char UnknownData_3A_0 : 7; // 0x3a(0x01)
	bool HidesPiercing : 1; // 0x3a(0x01)
	char UnknownData_3B[0x1]; // 0x3b(0x01)
	float Probability; // 0x3c(0x04)
	float NormalizedProbability; // 0x40(0x04)
	char UnknownData_44_0 : 7; // 0x44(0x01)
	bool bCastShadow : 1; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
};

// ScriptStruct GameplayFramework.CustomizationSubSlot
// Size: 0x18 (Inherited: 0x00)
struct FCustomizationSubSlot {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool IsSubSlot : 1; // 0x00(0x01)
	enum class ECustomizationSlotType SlotType; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct TArray<struct FSkelMeshWithProbability> Meshes; // 0x08(0x10)
};

// ScriptStruct GameplayFramework.SkelMeshWithProbability
// Size: 0x90 (Inherited: 0x00)
struct FSkelMeshWithProbability {
	struct TSoftObjectPtr<struct USkeletalMesh> SkeletalMesh; // 0x00(0x28)
	float Probability; // 0x28(0x04)
	float NormalizedProbability; // 0x2c(0x04)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bIsUnlockable : 1; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FName UnlockIdentifierName; // 0x34(0x08)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FMaterialOverride> MaterialOverrides; // 0x40(0x10)
	char bHideOnDetach : 1; // 0x50(0x01)
	char bDisableClothSimulation : 1; // 0x50(0x01)
	char bCollideWithEnvironment : 1; // 0x50(0x01)
	char bCollideWithAttachedChildren : 1; // 0x50(0x01)
	char bLocalSpaceSimulation : 1; // 0x50(0x01)
	char bClothMorphTarget : 1; // 0x50(0x01)
	char bDisableMorphTarget : 1; // 0x50(0x01)
	char bResetAfterTeleport : 1; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	float TeleportDistanceThreshold; // 0x54(0x04)
	float TeleportRotationThreshold; // 0x58(0x04)
	int32_t BoneIndexToCheckClothTeleportation; // 0x5c(0x04)
	int32_t ClothBlendingFramesAfterTeleportation; // 0x60(0x04)
	int32_t ClothResetFramesAfterTeleportation; // 0x64(0x04)
	int32_t InitialFramesWithExtendedSimulationSteps; // 0x68(0x04)
	float ExtendedSimulationTime; // 0x6c(0x04)
	float ClothBlendWeight; // 0x70(0x04)
	char UnknownData_74_0 : 7; // 0x74(0x01)
	bool HidesHair : 1; // 0x74(0x01)
	char UnknownData_75_0 : 7; // 0x75(0x01)
	bool HidesBeard : 1; // 0x75(0x01)
	char UnknownData_76_0 : 7; // 0x76(0x01)
	bool HidesPiercing : 1; // 0x76(0x01)
	char UnknownData_77_0 : 7; // 0x77(0x01)
	bool IsSubSlotMesh : 1; // 0x77(0x01)
	struct UDataTable* MeshDataTable; // 0x78(0x08)
	char UnknownData_80_0 : 7; // 0x80(0x01)
	bool IsHeadMesh : 1; // 0x80(0x01)
	char UnknownData_81[0x3]; // 0x81(0x03)
	struct FName SkinColorPresetName; // 0x84(0x08)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct GameplayFramework.CustomizationMainSlot
// Size: 0x28 (Inherited: 0x18)
struct FCustomizationMainSlot : FCustomizationSubSlot {
	struct TArray<struct FCustomizationSubSlot> DependendSubSlots; // 0x18(0x10)
};

// ScriptStruct GameplayFramework.SubMeshTableRow
// Size: 0x30 (Inherited: 0x08)
struct FSubMeshTableRow : FTableRowBase {
	struct TSoftObjectPtr<struct USkeletalMesh> SkeletalMesh; // 0x08(0x28)
};

// ScriptStruct GameplayFramework.CustomizationMaterialData
// Size: 0x50 (Inherited: 0x00)
struct FCustomizationMaterialData {
	struct TArray<struct FColorWithProbability> EyeColors; // 0x00(0x10)
	struct TArray<struct FColorWithProbability> ScarColors; // 0x10(0x10)
	struct TArray<struct FColorWithProbability> HairColors; // 0x20(0x10)
	struct TArray<struct FScarWithProbability> Scars; // 0x30(0x10)
	struct TArray<struct FMakeupWithProbability> Makeups; // 0x40(0x10)
};

// ScriptStruct GameplayFramework.MakeupWithProbability
// Size: 0x60 (Inherited: 0x00)
struct FMakeupWithProbability {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bIsUnlockable : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FName UnlockIdentifierName; // 0x04(0x08)
	struct FLinearColor EyeColor; // 0x0c(0x10)
	struct FLinearColor LipColor; // 0x1c(0x10)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct TSoftObjectPtr<struct UTexture2D> Mask; // 0x30(0x28)
	float Probability; // 0x58(0x04)
	float NormalizedProbability; // 0x5c(0x04)
};

// ScriptStruct GameplayFramework.CustomizationColorSet
// Size: 0x10 (Inherited: 0x00)
struct FCustomizationColorSet {
	struct TArray<struct FColorWithProbability> Colors; // 0x00(0x10)
};

// ScriptStruct GameplayFramework.ChatterRequest
// Size: 0x30 (Inherited: 0x00)
struct FChatterRequest {
	struct FChatterPlayData PlayData; // 0x00(0x20)
	struct TArray<struct AActor*> Targets; // 0x20(0x10)
};

// ScriptStruct GameplayFramework.PrimaryChatterVoiceSettings
// Size: 0x98 (Inherited: 0x00)
struct FPrimaryChatterVoiceSettings {
	struct TSoftObjectPtr<struct USoundCue> AudioAsset; // 0x00(0x28)
	float LastPlaybackTime; // 0x28(0x04)
	float PlaybackTimeThreshold; // 0x2c(0x04)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bGenerateResponse : 1; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FName RespondVoiceID; // 0x34(0x08)
	float RespondDelay; // 0x3c(0x04)
	float Probability; // 0x40(0x04)
	float MinPlayDistance; // 0x44(0x04)
	float MaxPlayDistance; // 0x48(0x04)
	char UnknownData_4C_0 : 7; // 0x4c(0x01)
	bool bPlayForSpeakerOnly : 1; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
	struct FFactValue Fact; // 0x50(0x28)
	char UnknownData_78_0 : 7; // 0x78(0x01)
	bool bOverrideSettings : 1; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
	struct UChatterVoiceSettings* OverrideSettings; // 0x80(0x08)
	struct FLinearColor DebugColor; // 0x88(0x10)
};

// ScriptStruct GameplayFramework.ChatterLocalizaitonTableRow
// Size: 0x80 (Inherited: 0x08)
struct FChatterLocalizaitonTableRow : FTableRowBase {
	struct TSoftObjectPtr<struct USoundWave> CloseAssetPath; // 0x08(0x28)
	struct TSoftObjectPtr<struct USoundWave> DistantAssetPath; // 0x30(0x28)
	struct FText Line; // 0x58(0x18)
	struct FString Context; // 0x70(0x10)
};

// ScriptStruct GameplayFramework.ChatterGlobalTableRow
// Size: 0x10 (Inherited: 0x08)
struct FChatterGlobalTableRow : FTableRowBase {
	float LastPlaybackTime; // 0x08(0x04)
	float PlaybackTimeThreshold; // 0x0c(0x04)
};

// ScriptStruct GameplayFramework.ChatterSpeakerTableRow
// Size: 0x118 (Inherited: 0x08)
struct FChatterSpeakerTableRow : FTableRowBase {
	struct TSoftObjectPtr<struct USoundCue> AudioAssetMale; // 0x08(0x28)
	struct TSoftObjectPtr<struct USoundCue> AudioAssetFemale; // 0x30(0x28)
	struct TSoftObjectPtr<struct USoundCue> AudioAssetGroup; // 0x58(0x28)
	struct TSoftObjectPtr<struct USoundCue> AudioAsset3p; // 0x80(0x28)
	float LastPlaybackTime; // 0xa8(0x04)
	float PlaybackTimeThreshold; // 0xac(0x04)
	char UnknownData_B0_0 : 7; // 0xb0(0x01)
	bool bGenerateResponse : 1; // 0xb0(0x01)
	char UnknownData_B1[0x3]; // 0xb1(0x03)
	struct FName RespondVoiceID; // 0xb4(0x08)
	float RespondDelay; // 0xbc(0x04)
	float Probability; // 0xc0(0x04)
	float MinPlayDistance; // 0xc4(0x04)
	float MaxPlayDistance; // 0xc8(0x04)
	char UnknownData_CC_0 : 7; // 0xcc(0x01)
	bool bPlayForSpeakerOnly : 1; // 0xcc(0x01)
	char UnknownData_CD[0x3]; // 0xcd(0x03)
	struct FFactValue Fact; // 0xd0(0x28)
	char UnknownData_F8_0 : 7; // 0xf8(0x01)
	bool bOverrideSettings : 1; // 0xf8(0x01)
	char UnknownData_F9[0x7]; // 0xf9(0x07)
	struct UChatterVoiceSettings* OverrideSettings; // 0x100(0x08)
	struct FLinearColor DebugColor; // 0x108(0x10)
};

// ScriptStruct GameplayFramework.CoverBoxSlotData
// Size: 0x30 (Inherited: 0x00)
struct FCoverBoxSlotData {
	struct TSoftObjectPtr<struct ACover> Cover; // 0x00(0x28)
	int32_t SlotID; // 0x28(0x04)
	char bOriginCanLeanLeft : 1; // 0x2c(0x01)
	char bOriginCanLeanRight : 1; // 0x2c(0x01)
	char UnknownData_2C_2 : 6; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct GameplayFramework.SlotsLine
// Size: 0x38 (Inherited: 0x00)
struct FSlotsLine {
	struct FVector Positions[0x2]; // 0x00(0x18)
	struct FString Name; // 0x18(0x10)
	struct TArray<struct FWeakObjectPtr<struct UCoverSlot>> OwningSlots; // 0x28(0x10)
};

// ScriptStruct GameplayFramework.CoverSlotInfo
// Size: 0x18 (Inherited: 0x10)
struct FCoverSlotInfo : FAIHotSpotSlotInfo {
	enum class ECoverMovementDirection CoverDirection; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GameplayFramework.CoverSlotMantleLinkData
// Size: 0x20 (Inherited: 0x00)
struct FCoverSlotMantleLinkData {
	struct FVector Left; // 0x00(0x0c)
	struct FVector Right; // 0x0c(0x0c)
	char bEnabled : 1; // 0x18(0x01)
	char UnknownData_18_1 : 7; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	int32_t SupportedAgentIndex; // 0x1c(0x04)
};

// ScriptStruct GameplayFramework.ExplosionPerSurface
// Size: 0x10 (Inherited: 0x00)
struct FExplosionPerSurface {
	enum class EPhysMaterialType SurfaceType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct AExplosionEffect* ExplosionEffect; // 0x08(0x08)
};

// ScriptStruct GameplayFramework.FactEntryRepArray
// Size: 0x170 (Inherited: 0x108)
struct FFactEntryRepArray : FFastArraySerializer {
	char UnknownData_108[0x58]; // 0x108(0x58)
	struct TArray<struct FFactEntryRepArrayItem> Items; // 0x160(0x10)
};

// ScriptStruct GameplayFramework.FactEntryRepArrayItem
// Size: 0x58 (Inherited: 0x0c)
struct FFactEntryRepArrayItem : FFastArraySerializerItem {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FFactEntryDTO EntryDTO; // 0x10(0x10)
	char UnknownData_20[0x38]; // 0x20(0x38)
};

// ScriptStruct GameplayFramework.FactEntryDeltaItem
// Size: 0x18 (Inherited: 0x00)
struct FFactEntryDeltaItem {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bAdded : 1; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FFactEntryDTO EntryDTO; // 0x08(0x10)
};

// ScriptStruct GameplayFramework.FactRegistryEntry
// Size: 0x18 (Inherited: 0x00)
struct FFactRegistryEntry {
	struct FName FactName; // 0x00(0x08)
	struct FString FactDescription; // 0x08(0x10)
};

// ScriptStruct GameplayFramework.SimpleBolleanFact
// Size: 0x0c (Inherited: 0x00)
struct FSimpleBolleanFact {
	struct FFactNameFromList Fact; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool Negate : 1; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct GameplayFramework.DamageReactionAndRecoveryData
// Size: 0xa0 (Inherited: 0x00)
struct FDamageReactionAndRecoveryData {
	enum class EFWAIDamageReactionType Type; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FDamageReactionDirectionData Forward; // 0x08(0x20)
	struct FDamageReactionDirectionData Backward; // 0x28(0x20)
	struct FDamageReactionDirectionData Left; // 0x48(0x20)
	struct FDamageReactionDirectionData Right; // 0x68(0x20)
	char UnknownData_88_0 : 7; // 0x88(0x01)
	bool bHasRecovery : 1; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
	struct TArray<struct UAnimMontage*> Recovery; // 0x90(0x10)
};

// ScriptStruct GameplayFramework.DamageReactionDirectionData
// Size: 0x20 (Inherited: 0x00)
struct FDamageReactionDirectionData {
	struct TArray<struct UAnimMontage*> Default; // 0x00(0x10)
	struct TArray<struct FDamageReactionBoneAndMontageData> PerBone; // 0x10(0x10)
};

// ScriptStruct GameplayFramework.DamageReactionBoneAndMontageData
// Size: 0x18 (Inherited: 0x00)
struct FDamageReactionBoneAndMontageData {
	struct FName Bone; // 0x00(0x08)
	struct TArray<struct UAnimMontage*> Montages; // 0x08(0x10)
};

// ScriptStruct GameplayFramework.MusicBase
// Size: 0x18 (Inherited: 0x00)
struct FMusicBase {
	float FadeInTime; // 0x00(0x04)
	float FadeOutTime; // 0x04(0x04)
	float FadeOutExitPoint; // 0x08(0x04)
	float FadeInVolume; // 0x0c(0x04)
	float FadeOutVolume; // 0x10(0x04)
	char UnknownData_14_0 : 7; // 0x14(0x01)
	bool bIsLooped : 1; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct GameplayFramework.MusicEpic
// Size: 0x58 (Inherited: 0x18)
struct FMusicEpic : FMusicBase {
	struct TSoftObjectPtr<struct USoundCue> Music; // 0x18(0x28)
	struct TArray<float> ExitPoints; // 0x40(0x10)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool LoadExitPointFromCSV : 1; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// ScriptStruct GameplayFramework.MusicEpicWithDelay
// Size: 0x60 (Inherited: 0x58)
struct FMusicEpicWithDelay : FMusicEpic {
	float Delay; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct GameplayFramework.ChangeLightScenarioParams
// Size: 0x08 (Inherited: 0x00)
struct FChangeLightScenarioParams {
	int32_t LightScenarioNumber; // 0x00(0x04)
	char UnknownData_4_0 : 7; // 0x04(0x01)
	bool bNoFadeOut : 1; // 0x04(0x01)
	char UnknownData_5_0 : 7; // 0x05(0x01)
	bool bNoFadeIn : 1; // 0x05(0x01)
	char UnknownData_6[0x2]; // 0x06(0x02)
};

// ScriptStruct GameplayFramework.CinematicPlaybackParams
// Size: 0x90 (Inherited: 0x00)
struct FCinematicPlaybackParams {
	struct FDelegate PostCineScriptDelegate; // 0x00(0x10)
	struct FName CinematicLevelName; // 0x10(0x08)
	struct TSoftObjectPtr<struct ULevelSequence> Sequence; // 0x18(0x28)
	struct FGameplayTag Region; // 0x40(0x08)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bNoFadeOut : 1; // 0x48(0x01)
	char UnknownData_49_0 : 7; // 0x49(0x01)
	bool bNoFadeIn : 1; // 0x49(0x01)
	char UnknownData_4A_0 : 7; // 0x4a(0x01)
	bool bUseShortFades : 1; // 0x4a(0x01)
	char UnknownData_4B_0 : 7; // 0x4b(0x01)
	bool bDoNotLoadCineLevel : 1; // 0x4b(0x01)
	enum class ESequenceWeaponVisibility WeaponVisibility; // 0x4c(0x01)
	char UnknownData_4D_0 : 7; // 0x4d(0x01)
	bool bHideHeadGear : 1; // 0x4d(0x01)
	char UnknownData_4E_0 : 7; // 0x4e(0x01)
	bool bHideHandGear : 1; // 0x4e(0x01)
	char UnknownData_4F_0 : 7; // 0x4f(0x01)
	bool bBlockPlayerMovement : 1; // 0x4f(0x01)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bBlockPlayerTurning : 1; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct AActor* OriginActor; // 0x58(0x08)
	struct TArray<struct AActor*> ActorsToHide; // 0x60(0x10)
	char UnknownData_70_0 : 7; // 0x70(0x01)
	bool bHideConvoyCamp : 1; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct ACoopPlayerStart* TeleportTo; // 0x78(0x08)
	char UnknownData_80_0 : 7; // 0x80(0x01)
	bool bSaveCheckpoint : 1; // 0x80(0x01)
	char UnknownData_81[0x3]; // 0x81(0x03)
	int32_t CineLightScenarioNumber; // 0x84(0x04)
	char UnknownData_88_0 : 7; // 0x88(0x01)
	bool bBlockStartWave : 1; // 0x88(0x01)
	char UnknownData_89_0 : 7; // 0x89(0x01)
	bool bForceShowLoadingScreen : 1; // 0x89(0x01)
	char UnknownData_8A_0 : 7; // 0x8a(0x01)
	bool bForceEnableSubtitles : 1; // 0x8a(0x01)
	char UnknownData_8B[0x5]; // 0x8b(0x05)
};

// ScriptStruct GameplayFramework.LocationInterpolator
// Size: 0x30 (Inherited: 0x00)
struct FLocationInterpolator {
	char UnknownData_0[0x30]; // 0x00(0x30)
};

// ScriptStruct GameplayFramework.RotationInterpolator
// Size: 0x40 (Inherited: 0x00)
struct FRotationInterpolator {
	char UnknownData_0[0x40]; // 0x00(0x40)
};

// ScriptStruct GameplayFramework.DecalData
// Size: 0x20 (Inherited: 0x00)
struct FDecalData {
	struct TArray<struct TSoftObjectPtr<struct UMaterialInterface>> DecalMaterials; // 0x00(0x10)
	float DecalSize; // 0x10(0x04)
	float LifeSpan; // 0x14(0x04)
	float FadeStartDelay; // 0x18(0x04)
	float FadeDuration; // 0x1c(0x04)
};

// ScriptStruct GameplayFramework.BaseSoundObject
// Size: 0x20 (Inherited: 0x00)
struct FBaseSoundObject {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UAudioComponent* LoopAC; // 0x08(0x08)
	struct FName SoundInfoName; // 0x10(0x08)
	int32_t SoundInfo; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct GameplayFramework.BaseSoundObjectDefinition
// Size: 0x28 (Inherited: 0x00)
struct FBaseSoundObjectDefinition {
	struct FGameplayTag SoundObjectId; // 0x00(0x08)
	struct USoundCue* StartCue; // 0x08(0x08)
	struct USoundCue* LoopCue; // 0x10(0x08)
	float LoopFadeOutDuration; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct USoundCue* StopCue; // 0x20(0x08)
};

// ScriptStruct GameplayFramework.ArmorNameWrapper
// Size: 0x10 (Inherited: 0x10)
struct FArmorNameWrapper : FNameWrapper {
};

// ScriptStruct GameplayFramework.GlobalEventInfo
// Size: 0x20 (Inherited: 0x00)
struct FGlobalEventInfo {
	struct FName EventName; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bCanUserExecute : 1; // 0x08(0x01)
	char UnknownData_9[0x17]; // 0x09(0x17)
};

// ScriptStruct GameplayFramework.SocketPair
// Size: 0x10 (Inherited: 0x00)
struct FSocketPair {
	struct FName HoleBoneSocket; // 0x00(0x08)
	struct FName ParentHoleBoneSocket; // 0x08(0x08)
};

// ScriptStruct GameplayFramework.DirectionalDeathAnimationAndSound
// Size: 0x28 (Inherited: 0x00)
struct FDirectionalDeathAnimationAndSound {
	struct TArray<struct FDirectionalDeathAnimations> DirectionalDeathAnimations; // 0x00(0x10)
	struct TArray<struct FDeathAnimationsInMovement> DeathAnimationsInMovement; // 0x10(0x10)
	struct USoundBase* Sound; // 0x20(0x08)
};

// ScriptStruct GameplayFramework.DirectionalDeathAnimations
// Size: 0x48 (Inherited: 0x00)
struct FDirectionalDeathAnimations {
	struct FVector Direction; // 0x00(0x0c)
	float ConeHalfAngle; // 0x0c(0x04)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool bVisualize : 1; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct TArray<struct UAnimSequenceBase*> DeathAnimations; // 0x18(0x10)
	struct TArray<struct UAnimSequenceBase*> HeavyHitAnimations; // 0x28(0x10)
	struct TArray<struct UAnimSequenceBase*> GibDeathAnimations; // 0x38(0x10)
};

// ScriptStruct GameplayFramework.DeathAnimationsInMovement
// Size: 0x50 (Inherited: 0x48)
struct FDeathAnimationsInMovement : FDirectionalDeathAnimations {
	float MovementThreshold; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct GameplayFramework.LimbExposionParameters
// Size: 0x28 (Inherited: 0x00)
struct FLimbExposionParameters {
	enum class EGoreSlot GoreSlot; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct USkeletalMesh* HolePlug; // 0x08(0x08)
	struct UStaticMesh* HolePlugStatic; // 0x10(0x08)
	struct USoundBase* RipOffSound; // 0x18(0x08)
	struct UParticleSystem* RupturePointEmitter; // 0x20(0x08)
};

// ScriptStruct GameplayFramework.BoneDeathAnimations
// Size: 0x30 (Inherited: 0x00)
struct FBoneDeathAnimations {
	struct FName BoneName; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bPropagateToChildren : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct TArray<struct FDirectionalDeathAnimations> DirectionalDeathAnimations; // 0x10(0x10)
	struct TArray<struct FDeathAnimationsInMovement> DeathAnimationsInMovement; // 0x20(0x10)
};

// ScriptStruct GameplayFramework.DeathAnimationWithProbability
// Size: 0x28 (Inherited: 0x00)
struct FDeathAnimationWithProbability {
	struct UAnimSequenceBase* Animations; // 0x00(0x08)
	float Probability; // 0x08(0x04)
	struct FVector Direction; // 0x0c(0x0c)
	float DirectionConeAngle; // 0x18(0x04)
	char UnknownData_1C_0 : 7; // 0x1c(0x01)
	bool bVisualize : 1; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
	float NormalizedProbability; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct GameplayFramework.DetachableBone
// Size: 0x48 (Inherited: 0x00)
struct FDetachableBone {
	struct FName BoneName; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	struct USoundBase* RipOffSound; // 0x10(0x08)
	struct USkeletalMesh* HolePlug; // 0x18(0x08)
	struct USkeletalMesh* ParentBoneHolePlug; // 0x20(0x08)
	enum class EGoreSlot GoreSlot; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct UStaticMesh* HolePlugStatic; // 0x30(0x08)
	struct UStaticMesh* ParentBoneHolePlugStatic; // 0x38(0x08)
	struct UParticleSystem* RupturePointEmitter; // 0x40(0x08)
};

// ScriptStruct GameplayFramework.SoundSpawnParams
// Size: 0x08 (Inherited: 0x00)
struct FSoundSpawnParams {
	struct USoundCue* SoundCue; // 0x00(0x08)
};

// ScriptStruct GameplayFramework.DecalSpawnParams
// Size: 0x10 (Inherited: 0x00)
struct FDecalSpawnParams {
	float Size; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UMaterialInstance* Material; // 0x08(0x08)
};

// ScriptStruct GameplayFramework.HighlightMaterialLayerMap
// Size: 0x50 (Inherited: 0x00)
struct FHighlightMaterialLayerMap {
	struct TMap<int32_t, struct FHighlightMaterialMap> LayerMap; // 0x00(0x50)
};

// ScriptStruct GameplayFramework.HighlightMaterialMap
// Size: 0x50 (Inherited: 0x00)
struct FHighlightMaterialMap {
	struct TMap<struct UMaterialInterface*, struct UMaterialInstance*> MaterialMap; // 0x00(0x50)
};

// ScriptStruct GameplayFramework.FootstepImpactEffectData
// Size: 0x2140 (Inherited: 0x00)
struct FFootstepImpactEffectData {
	struct FFootstepImpactEffect DefaultImpact; // 0x00(0x98)
	struct FFootstepImpactEffect MaterialImpacts[0x37]; // 0x98(0x20a8)
};

// ScriptStruct GameplayFramework.ImpactEffectData
// Size: 0x78 (Inherited: 0x00)
struct FImpactEffectData {
	struct TSoftObjectPtr<struct UParticleSystem> Particle; // 0x00(0x28)
	struct TSoftObjectPtr<struct USoundCue> Sound; // 0x28(0x28)
	struct FAudioFadeoutData SoundFadeoutData; // 0x50(0x08)
	struct FDecalData Decal; // 0x58(0x20)
};

// ScriptStruct GameplayFramework.AudioFadeoutData
// Size: 0x08 (Inherited: 0x00)
struct FAudioFadeoutData {
	float FadeOutTime; // 0x00(0x04)
	float FadeOutVolume; // 0x04(0x04)
};

// ScriptStruct GameplayFramework.FootstepImpactEffect
// Size: 0x98 (Inherited: 0x78)
struct FFootstepImpactEffect : FImpactEffectData {
	struct FDecalData BarefootDecal; // 0x78(0x20)
};

// ScriptStruct GameplayFramework.SurfaceSoundImpactData
// Size: 0xa80 (Inherited: 0x00)
struct FSurfaceSoundImpactData {
	struct TSoftObjectPtr<struct USoundCue> DefaultSound; // 0x00(0x28)
	struct FAudioFadeoutData DefaultSoundFadeoutData; // 0x28(0x08)
	struct TSoftObjectPtr<struct USoundCue> Sounds[0x37]; // 0x30(0x898)
	struct FAudioFadeoutData SoundsFadeoutData[0x37]; // 0x8c8(0x1b8)
};

// ScriptStruct GameplayFramework.SoundParticleImpactData
// Size: 0x58 (Inherited: 0x00)
struct FSoundParticleImpactData {
	struct TSoftObjectPtr<struct UParticleSystem> Particle; // 0x00(0x28)
	struct TSoftObjectPtr<struct USoundCue> Sound; // 0x28(0x28)
	struct FAudioFadeoutData SoundFadeoutData; // 0x50(0x08)
};

// ScriptStruct GameplayFramework.TimedEffectOwner
// Size: 0x10 (Inherited: 0x00)
struct FTimedEffectOwner {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayFramework.ImpactSpawnData
// Size: 0xf0 (Inherited: 0x00)
struct FImpactSpawnData {
	char UnknownData_0[0xf0]; // 0x00(0xf0)
};

// ScriptStruct GameplayFramework.BaseInputDataRecord
// Size: 0x10 (Inherited: 0x00)
struct FBaseInputDataRecord {
	struct FInputRecordTimeStamp Timestamp; // 0x00(0x10)
};

// ScriptStruct GameplayFramework.InputRecordTimeStamp
// Size: 0x10 (Inherited: 0x00)
struct FInputRecordTimeStamp {
	float WorldRealTime; // 0x00(0x04)
	float WorldLogicTime; // 0x04(0x04)
	int64_t FrameNum; // 0x08(0x08)
};

// ScriptStruct GameplayFramework.PlayerStateDataRecord
// Size: 0x20 (Inherited: 0x10)
struct FPlayerStateDataRecord : FBaseInputDataRecord {
	struct TArray<enum class None> SerializedState; // 0x10(0x10)
};

// ScriptStruct GameplayFramework.AxisInputDataRecord
// Size: 0x38 (Inherited: 0x10)
struct FAxisInputDataRecord : FBaseInputDataRecord {
	struct FKey Key; // 0x10(0x18)
	float Delta; // 0x28(0x04)
	float DeltaTime; // 0x2c(0x04)
	int32_t NumSamples; // 0x30(0x04)
	char UnknownData_34_0 : 7; // 0x34(0x01)
	bool bGamepad : 1; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
};

// ScriptStruct GameplayFramework.KeyInputDataRecord
// Size: 0x38 (Inherited: 0x10)
struct FKeyInputDataRecord : FBaseInputDataRecord {
	struct FKey Key; // 0x10(0x18)
	enum class None EventType; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float AmountDepressed; // 0x2c(0x04)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bGamepad : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GameplayFramework.InteractionComponentConstraints
// Size: 0x40 (Inherited: 0x00)
struct FInteractionComponentConstraints {
	struct FGameplayTagContainer RequiredTags; // 0x00(0x20)
	struct FGameplayTagContainer BlockingTags; // 0x20(0x20)
};

// ScriptStruct GameplayFramework.KeyToImageBinding
// Size: 0xa0 (Inherited: 0x00)
struct FKeyToImageBinding {
	struct FKey Key; // 0x00(0x18)
	struct FSlateBrush Brush; // 0x18(0x88)
};

// ScriptStruct GameplayFramework.LocalizedData
// Size: 0x30 (Inherited: 0x08)
struct FLocalizedData : FTableRowBase {
	struct FText Text; // 0x08(0x18)
	struct FString Context; // 0x20(0x10)
};

// ScriptStruct GameplayFramework.MinimapBrushImage
// Size: 0x08 (Inherited: 0x00)
struct FMinimapBrushImage {
	struct FWeakObjectPtr<struct UObject> ResourceObject; // 0x00(0x08)
};

// ScriptStruct GameplayFramework.TerrainMinimapData
// Size: 0x04 (Inherited: 0x00)
struct FTerrainMinimapData {
	float TerrainNodeScale; // 0x00(0x04)
};

// ScriptStruct GameplayFramework.MovieSceneAudioSyncTemplate
// Size: 0xd8 (Inherited: 0xd8)
struct FMovieSceneAudioSyncTemplate : FMovieSceneBoolPropertySectionTemplate {
};

// ScriptStruct GameplayFramework.MovieSceneClothSectionTemplate
// Size: 0xc8 (Inherited: 0x20)
struct FMovieSceneClothSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel ClothBlendWeightCurve; // 0x20(0xa0)
	enum class EMovieSceneBlendType BlendType; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
};

// ScriptStruct GameplayFramework.MovieSceneDialogueTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneDialogueTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneDialogueSection* DialogueSection; // 0x20(0x08)
};

// ScriptStruct GameplayFramework.MovieSceneSoundMixSectionTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneSoundMixSectionTemplate : FMovieSceneEvalTemplate {
	struct USoundMix* SoundMix; // 0x20(0x08)
};

// ScriptStruct GameplayFramework.ConfigItem_DefaultActorRegion
// Size: 0x20 (Inherited: 0x00)
struct FConfigItem_DefaultActorRegion {
	struct FString ActorName; // 0x00(0x10)
	struct FString regionname; // 0x10(0x10)
};

// ScriptStruct GameplayFramework.SoundSimpleWaveInfo
// Size: 0x10 (Inherited: 0x00)
struct FSoundSimpleWaveInfo {
	struct USoundWave* SoundWave; // 0x00(0x08)
	float Volume; // 0x08(0x04)
	float Pitch; // 0x0c(0x04)
};

// ScriptStruct GameplayFramework.ExplosionBySurface
// Size: 0x10 (Inherited: 0x00)
struct FExplosionBySurface {
	enum class EPhysMaterialType SurfaceType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct AExplosionEffect* ExplosionEffect; // 0x08(0x08)
};

// ScriptStruct GameplayFramework.QuestDataPatchTableRow
// Size: 0x68 (Inherited: 0x08)
struct FQuestDataPatchTableRow : FTableRowBase {
	struct FText QuestName; // 0x08(0x18)
	struct FText NewQuestName; // 0x20(0x18)
	struct FText DescriptionText; // 0x38(0x18)
	struct FText LongDescriptionText; // 0x50(0x18)
};

// ScriptStruct GameplayFramework.QuestMakerBrushes
// Size: 0x220 (Inherited: 0x00)
struct FQuestMakerBrushes {
	struct FSlateBrush QuestActiveTracked; // 0x00(0x88)
	struct FSlateBrush QuestActiveUntracked; // 0x88(0x88)
	struct FSlateBrush QuestInactiveTracked; // 0x110(0x88)
	struct FSlateBrush QuestInactiveUntracked; // 0x198(0x88)
};

// ScriptStruct GameplayFramework.QuestReward
// Size: 0x18 (Inherited: 0x00)
struct FQuestReward {
	float Experience; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct AInventoryItem*> Items; // 0x08(0x10)
};

// ScriptStruct GameplayFramework.QuestMarkerIcon
// Size: 0x18 (Inherited: 0x00)
struct FQuestMarkerIcon {
	struct UTexture2D* Icon; // 0x00(0x08)
	struct UTexture2D* MinimapIcon; // 0x08(0x08)
	enum class EIconPriority Priority; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GameplayFramework.Chapter
// Size: 0x28 (Inherited: 0x00)
struct FChapter {
	struct FText Title; // 0x00(0x18)
	struct TArray<struct UBaseQuest*> Quests; // 0x18(0x10)
};

// ScriptStruct GameplayFramework.QuickTimeEventRequest
// Size: 0x10 (Inherited: 0x00)
struct FQuickTimeEventRequest {
	enum class EQuickTimeEventType EventType; // 0x00(0x01)
	enum class EQuickTimeEventButton Button; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float Timeout; // 0x04(0x04)
	int32_t MinRepeatNum; // 0x08(0x04)
	char UnknownData_C_0 : 7; // 0x0c(0x01)
	bool bStrictMode : 1; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct GameplayFramework.RandomNamesWeightsTableRow
// Size: 0x18 (Inherited: 0x08)
struct FRandomNamesWeightsTableRow : FTableRowBase {
	struct FName Name; // 0x08(0x08)
	float Weight; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct GameplayFramework.TileFloorSpringParams
// Size: 0x0c (Inherited: 0x00)
struct FTileFloorSpringParams {
	float Frequency; // 0x00(0x04)
	float DampingFactor; // 0x04(0x04)
	float Limit; // 0x08(0x04)
};

// ScriptStruct GameplayFramework.TileFloorConstraintHandle
// Size: 0x02 (Inherited: 0x00)
struct FTileFloorConstraintHandle {
	char UnknownData_0[0x2]; // 0x00(0x02)
};

// ScriptStruct GameplayFramework.TileFloorInfluenceData
// Size: 0x0c (Inherited: 0x00)
struct FTileFloorInfluenceData {
	struct FName SocketName; // 0x00(0x08)
	float InfluenceRadius; // 0x08(0x04)
};

// ScriptStruct GameplayFramework.VOListData
// Size: 0x78 (Inherited: 0x08)
struct FVOListData : FTableRowBase {
	struct FName Tag; // 0x08(0x08)
	int32_t Priority; // 0x10(0x04)
	float Weight; // 0x14(0x04)
	struct FName AntfarmTag; // 0x18(0x08)
	enum class EVOListType Type; // 0x20(0x01)
	char UnknownData_21_0 : 7; // 0x21(0x01)
	bool bPlayOnce : 1; // 0x21(0x01)
	char UnknownData_22_0 : 7; // 0x22(0x01)
	bool bSessionPlayOnce : 1; // 0x22(0x01)
	char UnknownData_23_0 : 7; // 0x23(0x01)
	bool bNullifyPriorityAfterPlaying : 1; // 0x23(0x01)
	char UnknownData_24_0 : 7; // 0x24(0x01)
	bool bCheckRegions : 1; // 0x24(0x01)
	char UnknownData_25_0 : 7; // 0x25(0x01)
	bool bCheckTrackedQuests : 1; // 0x25(0x01)
	char UnknownData_26_0 : 7; // 0x26(0x01)
	bool bCheckFactExpression : 1; // 0x26(0x01)
	char UnknownData_27_0 : 7; // 0x27(0x01)
	bool bCanBeInterrupted : 1; // 0x27(0x01)
	struct TArray<struct FVOSound> Sounds; // 0x28(0x10)
	struct TArray<struct FGameplayTag> Regions; // 0x38(0x10)
	struct TArray<struct FName> TrackedQuests; // 0x48(0x10)
	struct FFactExpression FactExpression; // 0x58(0x18)
	char UnknownData_70_0 : 7; // 0x70(0x01)
	bool bIgnoreDisablingVOOption : 1; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// ScriptStruct GameplayFramework.VOSound
// Size: 0xa0 (Inherited: 0x00)
struct FVOSound {
	struct TSoftObjectPtr<struct USoundBase> Sound; // 0x00(0x28)
	struct TSoftObjectPtr<struct UAnimSequenceBase> LipSyncAnimation; // 0x28(0x28)
	struct TSoftObjectPtr<struct UAnimSequenceBase> LipSyncFemaleAnimation; // 0x50(0x28)
	char UnknownData_78_0 : 7; // 0x78(0x01)
	bool bIsNPC : 1; // 0x78(0x01)
	char UnknownData_79_0 : 7; // 0x79(0x01)
	bool bIsAntfarm : 1; // 0x79(0x01)
	char UnknownData_7A_0 : 7; // 0x7a(0x01)
	bool bBreak : 1; // 0x7a(0x01)
	enum class EVOAntfarmGender AntfarmGender; // 0x7b(0x01)
	struct FGameplayTag NPC; // 0x7c(0x08)
	int32_t AntfarmId; // 0x84(0x04)
	struct FText SpeakerName; // 0x88(0x18)
};

// ScriptStruct GameplayFramework.WaterSplashTemplate
// Size: 0x50 (Inherited: 0x00)
struct FWaterSplashTemplate {
	struct TSoftObjectPtr<struct UParticleSystem> Particle; // 0x00(0x28)
	struct TSoftObjectPtr<struct USoundCue> Sound; // 0x28(0x28)
};

// ScriptStruct GameplayFramework.InstantHitInfo
// Size: 0x18 (Inherited: 0x00)
struct FInstantHitInfo {
	struct FVector_NetQuantize Origin; // 0x00(0x0c)
	struct FVector_NetQuantizeNormal Direction; // 0x0c(0x0c)
};

// ScriptStruct GameplayFramework.ProjectileWeaponData
// Size: 0x40 (Inherited: 0x00)
struct FProjectileWeaponData {
	struct AProjectile* ProjectileClass; // 0x00(0x08)
	float ProjectileLife; // 0x08(0x04)
	float SpawnProjectileDelay; // 0x0c(0x04)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool bExplodeOnImpact : 1; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	float IgnoreImpactsWithDotToUpVectorSmallerThan; // 0x14(0x04)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bIgnoreImpactWithPawns : 1; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	float DelayAfterImpact; // 0x1c(0x04)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bForceExplodeOnImpactWithPawns : 1; // 0x20(0x01)
	char UnknownData_21_0 : 7; // 0x21(0x01)
	bool bExplodeOnTimeout : 1; // 0x21(0x01)
	char UnknownData_22[0x6]; // 0x22(0x06)
	struct UExplosionTemplate* ExplosionTemplate; // 0x28(0x08)
	float AIProjectileRangeMin; // 0x30(0x04)
	float AIProjectileRangeMax; // 0x34(0x04)
	float AIProjectileDestinationOffset; // 0x38(0x04)
	float OnOwnerHitDropChance; // 0x3c(0x04)
};

// ScriptStruct GameplayFramework.WeaponAbilityEffects
// Size: 0x10 (Inherited: 0x00)
struct FWeaponAbilityEffects {
	struct AWeapon* WeaponClass; // 0x00(0x08)
	struct UWeaponEffects* Effects; // 0x08(0x08)
};

// ScriptStruct GameplayFramework.WeaponAnimDataCollection
// Size: 0x70 (Inherited: 0x00)
struct FWeaponAnimDataCollection {
	struct TSoftObjectPtr<struct UWeaponAnimData> AnimData; // 0x00(0x28)
	struct TSoftObjectPtr<struct UWeaponAnimData> BaseAnimData; // 0x28(0x28)
	struct TArray<struct UWeaponAnimData*> LoadedAnimsData; // 0x50(0x10)
	char UnknownData_60[0x10]; // 0x60(0x10)
};

// ScriptStruct GameplayFramework.WeaponEquipAnim
// Size: 0x80 (Inherited: 0x00)
struct FWeaponEquipAnim {
	enum class EWeaponEquipAnimTarget From; // 0x00(0x01)
	enum class EWeaponEquipAnimTarget To; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct TSoftObjectPtr<struct UAnimMontage> BattleMontage; // 0x08(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> FlavorMontage; // 0x30(0x28)
	SoftClassProperty ExtraActor; // 0x58(0x28)
};

// ScriptStruct GameplayFramework.WeaponSoundsData
// Size: 0x150 (Inherited: 0x08)
struct FWeaponSoundsData : FTableRowBase {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bLoopedFire : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct TSoftObjectPtr<struct USoundCue> Fire; // 0x10(0x28)
	struct TSoftObjectPtr<struct USoundCue> FireFinish; // 0x38(0x28)
	struct TSoftObjectPtr<struct USoundCue> ClipNearEmpty; // 0x60(0x28)
	struct TSoftObjectPtr<struct USoundCue> ShootingLocked; // 0x88(0x28)
	struct TSoftObjectPtr<struct USoundCue> Equip; // 0xb0(0x28)
	struct TSoftObjectPtr<struct USoundCue> ReloadStart; // 0xd8(0x28)
	struct TSoftObjectPtr<struct USoundCue> ReloadLoop; // 0x100(0x28)
	struct TSoftObjectPtr<struct USoundCue> ReloadEnd; // 0x128(0x28)
};

// ScriptStruct GameplayFramework.MadItemTranslationData
// Size: 0x20 (Inherited: 0x08)
struct FMadItemTranslationData : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct GameplayFramework.WeaponConfigData
// Size: 0x2f8 (Inherited: 0x08)
struct FWeaponConfigData : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bAvailableInCraftingMenu : 1; // 0x20(0x01)
	enum class EAmmoType AmmoType; // 0x21(0x01)
	char UnknownData_22[0x2]; // 0x22(0x02)
	int32_t AmmoPerClip; // 0x24(0x04)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bCanBeReloaded : 1; // 0x28(0x01)
	char UnknownData_29_0 : 7; // 0x29(0x01)
	bool bShouldAutoReload : 1; // 0x29(0x01)
	char UnknownData_2A[0x2]; // 0x2a(0x02)
	float ReloadSpeedMult; // 0x2c(0x04)
	float AutoReloadDelay; // 0x30(0x04)
	struct FVector ReloadClipImpulse; // 0x34(0x0c)
	char UnknownData_40_0 : 7; // 0x40(0x01)
	bool bOverrideReloadClipOffset : 1; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	struct FVector ReloadClipOffset; // 0x44(0x0c)
	float KeepFiringAimOffsetLength; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct FWeaponTimeBetweenShots TimeBetweenShots; // 0x58(0x48)
	float DamageTraceOffset; // 0xa0(0x04)
	float FireDirectionThreshold; // 0xa4(0x04)
	enum class EWeaponStartTraceOverrideType StartTraceOverride; // 0xa8(0x01)
	char UnknownData_A9[0x3]; // 0xa9(0x03)
	float CritDamageMult; // 0xac(0x04)
	struct FWeaponFireMode FireMode; // 0xb0(0x0c)
	char UnknownData_BC[0x4]; // 0xbc(0x04)
	struct FNameWrapper DamageRow; // 0xc0(0x10)
	struct FInstantWeaponData InstantConfig; // 0xd0(0x50)
	struct TMap<enum class EWeaponCameraVariant, struct FWeaponCameraData> CameraData; // 0x120(0x50)
	SoftClassProperty RecoilCameraShake; // 0x170(0x28)
	struct UObject* RecoilCameraShakePtr; // 0x198(0x08)
	struct TArray<struct FWeaponCameraShake> FireCameraShakes; // 0x1a0(0x10)
	char UnknownData_1B0_0 : 7; // 0x1b0(0x01)
	bool bIgnoreCoverBoundaryForCamera : 1; // 0x1b0(0x01)
	char UnknownData_1B1[0x3]; // 0x1b1(0x03)
	float LeftPeekOffset; // 0x1b4(0x04)
	float RightPeekOffset; // 0x1b8(0x04)
	char UnknownData_1BC[0x4]; // 0x1bc(0x04)
	struct TSoftObjectPtr<struct UForceFeedbackEffect> FireForceFeedback; // 0x1c0(0x28)
	struct UForceFeedbackEffect* FireForceFeedbackPtr; // 0x1e8(0x08)
	struct TSoftObjectPtr<struct UForceFeedbackEffect> ReloadForceFeedback; // 0x1f0(0x28)
	struct UForceFeedbackEffect* ReloadForceFeedbackPtr; // 0x218(0x08)
	float TargetingInputDampingMult; // 0x220(0x04)
	char UnknownData_224_0 : 7; // 0x224(0x01)
	bool bShouldBeIncludedInStatsCalculation : 1; // 0x224(0x01)
	char UnknownData_225[0x3]; // 0x225(0x03)
	struct FWeaponSpread Spread; // 0x228(0x60)
	struct FWeaponRecoil Recoil; // 0x288(0x58)
	char UnknownData_2E0[0x10]; // 0x2e0(0x10)
	char UnknownData_2F0_0 : 7; // 0x2f0(0x01)
	bool bRefreshAnimDataOnEquipBegin : 1; // 0x2f0(0x01)
	char UnknownData_2F1[0x7]; // 0x2f1(0x07)
};

// ScriptStruct GameplayFramework.WeaponRecoil
// Size: 0x58 (Inherited: 0x00)
struct FWeaponRecoil {
	float Base; // 0x00(0x04)
	float RecoilMultiplier; // 0x04(0x04)
	float ShakeMultiplier; // 0x08(0x04)
	float AddPerShot; // 0x0c(0x04)
	float MinPerBurst; // 0x10(0x04)
	float MaxPerBurst; // 0x14(0x04)
	float IncrementSpeed; // 0x18(0x04)
	float DecrementSpeed; // 0x1c(0x04)
	float MaxPitchDecrementAfterBurst; // 0x20(0x04)
	float DampingMultiplier; // 0x24(0x04)
	float DampingBase; // 0x28(0x04)
	float DampingAddPerShot; // 0x2c(0x04)
	float DampingMaxPerBurst; // 0x30(0x04)
	float DampingStabilizationSpeed; // 0x34(0x04)
	char UnknownData_38[0x10]; // 0x38(0x10)
	float Current; // 0x48(0x04)
	float CurrentBurstDamping; // 0x4c(0x04)
	char UnknownData_50[0x8]; // 0x50(0x08)
};

// ScriptStruct GameplayFramework.WeaponSpread
// Size: 0x60 (Inherited: 0x00)
struct FWeaponSpread {
	float Base; // 0x00(0x04)
	float Targeting; // 0x04(0x04)
	float AddPerShot; // 0x08(0x04)
	float MinPerBurst; // 0x0c(0x04)
	float MaxPerBurst; // 0x10(0x04)
	float MovingMult; // 0x14(0x04)
	float TurningMult; // 0x18(0x04)
	float StabilizationSpeed; // 0x1c(0x04)
	struct AWeapon* OwnerWeapon; // 0x20(0x08)
	struct ABaseCharacter* OwnerCharacter; // 0x28(0x08)
	float Current; // 0x30(0x04)
	float CurrentBase; // 0x34(0x04)
	float CurrentFiring; // 0x38(0x04)
	float CurrentMoving; // 0x3c(0x04)
	float CurrentTurning; // 0x40(0x04)
	struct FVector LastOwnerLocation; // 0x44(0x0c)
	struct FVector LastOwnerRotation; // 0x50(0x0c)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct GameplayFramework.WeaponCameraShake
// Size: 0x38 (Inherited: 0x00)
struct FWeaponCameraShake {
	SoftClassProperty CameraShake; // 0x00(0x28)
	struct UObject* CameraShakePtr; // 0x28(0x08)
	float TargetingMultiplier; // 0x30(0x04)
	float BlindFireMultiplier; // 0x34(0x04)
};

// ScriptStruct GameplayFramework.WeaponCameraData
// Size: 0x68 (Inherited: 0x00)
struct FWeaponCameraData {
	float ZoomLength; // 0x00(0x04)
	struct FVectorByPitchMod CameraOffset; // 0x04(0x24)
	float InDuration; // 0x28(0x04)
	float OutDuration; // 0x2c(0x04)
	float FOV; // 0x30(0x04)
	float CameraPushBackDelay; // 0x34(0x04)
	float CameraPushBackWhenFiring; // 0x38(0x04)
	float CameraPushBackInterpSpeed; // 0x3c(0x04)
	float FOVPushBackWhenFiring; // 0x40(0x04)
	float FOVPushBackInterpSpeed; // 0x44(0x04)
	float MaxHorizontalAngle; // 0x48(0x04)
	float MaxVerticalAngle; // 0x4c(0x04)
	struct FWeaponZoomSettings ZoomLevels; // 0x50(0x18)
};

// ScriptStruct GameplayFramework.WeaponZoomSettings
// Size: 0x18 (Inherited: 0x00)
struct FWeaponZoomSettings {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bHasMultipleZoomLevels : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float BlendTime; // 0x04(0x04)
	struct TArray<float> ZoomLevels; // 0x08(0x10)
};

// ScriptStruct GameplayFramework.InstantWeaponData
// Size: 0x50 (Inherited: 0x00)
struct FInstantWeaponData {
	float WeaponRange; // 0x00(0x04)
	float MaxRange; // 0x04(0x04)
	float MarginalRangePct; // 0x08(0x04)
	float MarginalDamagePct; // 0x0c(0x04)
	char UnknownData_10[0x10]; // 0x10(0x10)
	struct TSoftObjectPtr<struct UCurveFloat> WeaponRangeFalloffCurve; // 0x20(0x28)
	struct UCurveFloat* WeaponRangeFalloffCurveHardPtr; // 0x48(0x08)
};

// ScriptStruct GameplayFramework.WeaponFireMode
// Size: 0x0c (Inherited: 0x00)
struct FWeaponFireMode {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bAutomatic : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t ShotsPerSeries; // 0x04(0x04)
	float SeriesDelay; // 0x08(0x04)
};

// ScriptStruct GameplayFramework.WeaponTimeBetweenShots
// Size: 0x48 (Inherited: 0x00)
struct FWeaponTimeBetweenShots {
	char UnknownData_0[0x10]; // 0x00(0x10)
	float DefaultTime; // 0x10(0x04)
	float TargetTime; // 0x14(0x04)
	struct TSoftObjectPtr<struct UCurveFloat> ShotToTimeCurve; // 0x18(0x28)
	struct UCurveFloat* ShotToTimeCurvePtr; // 0x40(0x08)
};

// ScriptStruct GameplayFramework.WeaponEquipData
// Size: 0x10 (Inherited: 0x00)
struct FWeaponEquipData {
	struct ABaseCharacter* Owner; // 0x00(0x08)
	enum class EWeaponAttachmentHand Hand; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bPlaySound : 1; // 0x09(0x01)
	char UnknownData_A[0x6]; // 0x0a(0x06)
};

