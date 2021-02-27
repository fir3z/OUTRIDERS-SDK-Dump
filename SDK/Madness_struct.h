// Enum Madness.EMadChallengeTimeBracket
enum class EMadChallengeTimeBracket : uint8 {
	NotQualified,
	Bronze,
	Silver,
	Gold,
	MAX_None,
	EMadChallengeTimeBracket_MAX,
};

// Enum Madness.EMadChallengeEndReason
enum class EMadChallengeEndReason : uint8 {
	Success,
	Fail,
	MapEndPlay,
	MAX_None,
	EMadChallengeEndReason_MAX,
};

// Enum Madness.EMadnessActiveSkillSlots
enum class EMadnessActiveSkillSlots : uint8 {
	ActiveSlot1,
	ActiveSlot2,
	ActiveSlot3,
	ActiveSlot4,
	ActiveSlot5,
	ActiveSlot6,
	Max_None,
	EMadnessActiveSkillSlots_MAX,
};

// Enum Madness.EPlayerMoveAction
enum class EPlayerMoveAction : uint8 {
	None,
	StartWalkForward,
	StartJogForward,
	StartWalkDirectional,
	StartJogDirectional,
	PrematureStop,
	StopWalk,
	StopJog,
	NonCombatTurnWalk,
	NonCombatTurnJog,
	CombatTurnInPlace,
	CoverTurn,
	EnterShort,
	Leave,
	LeaveInstant,
	IdleToPeek,
	PeekToIdle,
	SideToUp,
	UpToSide,
	BlindToTarget,
	TargetToBlind,
	JumpOver,
	SprintOutDirectional,
	RollOut,
	ClimbUp,
	Roll,
	StartCoverMove,
	StopCoverMove,
	CameraSwap,
	EnterInstant,
	SideToBack,
	BackToSide,
	CoverMovementTurn,
	SprintToCover,
	SprintToHop,
	EnterLong,
	EnterSwap,
	SprintOutStrafe,
	IdleToTargeting,
	TargetingToIdle,
	ApproachInteraction,
	LeaveInstantForced,
	EnterAroundCorner,
	LandingSoft,
	LandingHard,
	IdleToBlind,
	BlindToIdle,
	Max,
};

// Enum Madness.EMadSkillNotificationType
enum class EMadSkillNotificationType : uint8 {
	ConfirmTargeting,
	Activate,
	CantUse,
	QuickChange,
	SkillMessage,
	Max_None,
	EMadSkillNotificationType_MAX,
};

// Enum Madness.EMadExperienceSource
enum class EMadExperienceSource : uint8 {
	Kill,
	Quest,
	Objective,
	Collectible,
	Accolade,
	Challenge,
	EMadExperienceSource_MAX,
};

// Enum Madness.ECoverToCoverMoveType
enum class ECoverToCoverMoveType : uint8 {
	Normal,
	AroundCorner,
	Swap,
	None,
	ECoverToCoverMoveType_MAX,
};

// Enum Madness.EMadItemSlot
enum class EMadItemSlot : uint8 {
	Head,
	Torso,
	Legs,
	Hands,
	Feet,
	WeaponSide,
	Weapon1,
	Weapon2,
	Max_None,
	EMadItemSlot_MAX,
};

// Enum Madness.EMadVoteReason
enum class EMadVoteReason : uint8 {
	TeleportToTown,
	TeleportToTravelDestination,
	SkipMovie,
	CoopSync,
	TeleportToNode,
	ExplorerFlagsTeleport,
	SideQuestActivate,
	ChallengeTravel,
	Custom,
	ReturnToLobby,
	Max_None,
	EMadVoteReason_MAX,
};

// Enum Madness.ECoverUseReason
enum class ECoverUseReason : uint8 {
	Enter,
	Traversal,
	ECoverUseReason_MAX,
};

// Enum Madness.ECoverLeaveType
enum class ECoverLeaveType : uint8 {
	Standard,
	NoAnimation,
	JumpOver,
	RollOut,
	SprintOut,
	SprintOutBackDirectional,
	SprintOutBackStrafe,
	ClimbUp,
	NoAnimationForced,
	None,
	Max,
};

// Enum Madness.EMadGender
enum class EMadGender : uint8 {
	Male,
	Female,
	Max_None,
	EMadGender_MAX,
};

// Enum Madness.EMadnessSkillPath
enum class EMadnessSkillPath : uint8 {
	General,
	DNA,
	ThermalAndRadiation,
	ToxicityAndDisease,
	GravityAndMassControl,
	TimeAndSpace,
	Hub,
	Mastery,
	Debug,
	ConvoyDps,
	ConvoySkill,
	ConvoyTank,
	ConvoySupport,
	Max_None,
	EMadnessSkillPath_MAX,
};

// Enum Madness.EMadInventoryCustomizationUpdateFilter
enum class EMadInventoryCustomizationUpdateFilter : uint8 {
	Default,
	Weapon,
	Headgear,
	UpperArmor,
	LowerArmor,
	Gloves,
	Footgear,
	None,
	Max_None,
	EMadInventoryCustomizationUpdateFilter_MAX,
};

// Enum Madness.ECoverEnterType
enum class ECoverEnterType : uint8 {
	StandardNear,
	StandardMid,
	StandardFar,
	NoAnimation,
	SprintToCover,
	FromCoverSwap,
	AroundCover,
	None,
	Max,
};

// Enum Madness.EAutoCoverMode
enum class EAutoCoverMode : uint8 {
	None,
	HoldA,
	Always,
	EAutoCoverMode_MAX,
};

// Enum Madness.EMadCombatNumberType
enum class EMadCombatNumberType : uint8 {
	Damage,
	CriticalDamage,
	Healing,
	Experience,
	Immune,
	EMadCombatNumberType_MAX,
};

// Enum Madness.EMadHealthBarMode
enum class EMadHealthBarMode : uint8 {
	Hide,
	NoStatusIcons,
	Full,
	Max_None,
	EMadHealthBarMode_MAX,
};

// Enum Madness.EPerforateChargeState
enum class EPerforateChargeState : uint8 {
	START,
	CHARGE,
	ATTACKING,
	ABORTING,
	POST_ATTACK,
	EPerforateChargeState_MAX,
};

// Enum Madness.EMadCharSpawnertAnimNotifyType
enum class EMadCharSpawnertAnimNotifyType : uint8 {
	HideMeshes,
	ResumeLogic,
	CustomType,
	EMadCharSpawnertAnimNotifyType_MAX,
};

// Enum Madness.EStoreTypeData
enum class EStoreTypeData : uint8 {
	Membership,
	EStoreTypeData_MAX,
};

// Enum Madness.EEventParticipationResultData
enum class EEventParticipationResultData : uint8 {
	Recorded,
	ErrMaxAttemptReached,
	ErrMaxSuccessReached,
	EEventParticipationResultData_MAX,
};

// Enum Madness.EEventParticipationStatusData
enum class EEventParticipationStatusData : uint8 {
	Accepted,
	Abandoned,
	Succeeded,
	Failed,
	Archived,
	EEventParticipationStatusData_MAX,
};

// Enum Madness.EMadBackendEventResponse
enum class EMadBackendEventResponse : uint8 {
	Accept,
	Succeed,
	Fail,
	Abandon,
	Max_None,
	EMadBackendEventResponse_MAX,
};

// Enum Madness.EBarrierIconTypes
enum class EBarrierIconTypes : uint8 {
	DestroyObject,
	FixObject,
	GoTo,
	Interaction,
	KillTarget,
	ObtainItem,
	SecureArea,
	Unchanged,
	Max_None,
	EBarrierIconTypes_MAX,
};

// Enum Madness.EMadAttributeDomain
enum class EMadAttributeDomain : uint8 {
	None,
	WeaponOnly,
	ArmorOnly,
	All,
	EMadAttributeDomain_MAX,
};

// Enum Madness.EMadVendorOfferType
enum class EMadVendorOfferType : uint8 {
	Regular,
	Elite,
	Daily,
	Exchange,
	Max_None,
	EMadVendorOfferType_MAX,
};

// Enum Madness.EMadLobbyState
enum class EMadLobbyState : uint8 {
	PartyScreen,
	CharacterList,
	CharacterCreation,
	PressAnyButtonScreen,
	SkipPrologue,
	ExpressInvite,
	OptionsScreen,
	Max_None,
	EMadLobbyState_MAX,
};

// Enum Madness.EPlayerLocomotionState
enum class EPlayerLocomotionState : uint8 {
	Idle,
	Movement,
	SprintToCover,
	CoverIdle,
	CoverMovement,
	Max,
};

// Enum Madness.ETutorialUIPosition
enum class ETutorialUIPosition : uint8 {
	LeftMiddle,
	LeftBottom,
	MiddleBottom,
	RightMiddle,
	RightBottom,
	OverlayLeft,
	OverlayRight,
	ETutorialUIPosition_MAX,
};

// Enum Madness.EMadAbilityTargetGroup
enum class EMadAbilityTargetGroup : uint8 {
	OnlyEnemies,
	OnlyPlayers,
	Everyone,
	EMadAbilityTargetGroup_MAX,
};

// Enum Madness.EMadAccoladeRewardType
enum class EMadAccoladeRewardType : uint8 {
	Emote,
	Banner,
	Convoy,
	MAX_None,
	EMadAccoladeRewardType_MAX,
};

// Enum Madness.EMadGuardianStance
enum class EMadGuardianStance : uint8 {
	MGS_Aggressive,
	MGS_Avoidance,
	MGS_Defensive,
	MGS_MAX,
};

// Enum Madness.EPAPerforateChargeState
enum class EPAPerforateChargeState : uint8 {
	START,
	CHARGE,
	ATTACKING,
	ABORTING,
	EPAPerforateChargeState_MAX,
};

// Enum Madness.EYagakVariation
enum class EYagakVariation : uint8 {
	Any,
	Cleave,
	CleaveMQDC,
	Flying,
	FlyingMQAC,
	FlyingSQAV,
	Chains,
	EYagakVariation_MAX,
};

// Enum Madness.EVolcanoSpiderVariation
enum class EVolcanoSpiderVariation : uint8 {
	Volcano,
	Mine,
	EVolcanoSpiderVariation_MAX,
};

// Enum Madness.EMadBoss02Variation
enum class EMadBoss02Variation : uint8 {
	Phase1,
	Phase2,
	Phase3,
	EMadBoss02Variation_MAX,
};

// Enum Madness.EMadAlphaPerforoVariation
enum class EMadAlphaPerforoVariation : uint8 {
	Any,
	Regular,
	Green,
	SQ20AlphaPerforo,
	SQ22AlphaPerforo,
	SQ24AlphaPerforo,
	CQ12a1Ghost,
	CQ12a6AlphaPerforo,
	CQ12a8AlphaPerforo,
	CQ12a10AlphaPerforo,
	CH1AlphaPerforo,
	CH10AlphaPerfor,
	CH12AlphaPerforo,
	CH14AlphaPerforo,
	CH18AlphaPerforo,
	SQDCHatch,
	SQARObelisk,
	EMadAlphaPerforoVariation_MAX,
};

// Enum Madness.EMadAlteredVariation
enum class EMadAlteredVariation : uint8 {
	Any,
	Guardian,
	DemonCampaign,
	DemonChallenge,
	Bailey,
	Yagak,
	OasisBerserker,
	OasisSniper,
	Detonator,
	DetonatorMQDS,
	DetonatorSQAR,
	EMadAlteredVariation_MAX,
};

// Enum Madness.EMadVeteranVariation
enum class EMadVeteranVariation : uint8 {
	Any,
	Minigunner,
	Flamethrower,
	ArmoredSniper,
	Shaman,
	Gladiator,
	QDesert01,
	QWarzone01,
	SQ18Flameywamey,
	SQ26BossCliff02,
	CH1Minugunner,
	SQAC06,
	EMadVeteranVariation_MAX,
};

// Enum Madness.EMadCaptainHeavygunnerVariation
enum class EMadCaptainHeavygunnerVariation : uint8 {
	Any,
	Regular,
	CQ13a2Barricade,
	EMadCaptainHeavygunnerVariation_MAX,
};

// Enum Madness.EMadCaptainSniperVariation
enum class EMadCaptainSniperVariation : uint8 {
	Any,
	Regular,
	MQVenom,
	SQ05Tyson,
	SQ26BossCliff01,
	SQ26BossCatacombs,
	CQ137aCaptainSniper,
	CQ136aGunslinger,
	CH1CaptainSniper,
	EMadCaptainSniperVariation_MAX,
};

// Enum Madness.EMadCaptainShotgunneVariation
enum class EMadCaptainShotgunneVariation : uint8 {
	Any,
	Regular,
	CultLeader,
	SQ13a9Locust,
	CQ13a1Skull,
	CQ13a3CaptainShotgunner,
	CQ13a5JohnyBuffer,
	DesertTeleporter,
	CH1CaptainShotgunner,
	CH1CaptainShotgunnerTeleport,
	DD07Village,
	EMadCaptainShotgunneVariation_MAX,
};

// Enum Madness.EMadCaptainRiflemanVariation
enum class EMadCaptainRiflemanVariation : uint8 {
	Any,
	Regular,
	Reiner,
	SmugglerLeader,
	MQCaptain,
	SQ24Goliath,
	SQ24Davek,
	MQRoro,
	MQCoro,
	MQAVProtector,
	CQ13a10Doctor,
	SQ11FreeMarketBoss,
	SQ26BossMaretplace,
	SQDesert01,
	SQDesert02,
	CQ13a3CaptainRifleman,
	CQ13a4Storm,
	CQ13a8Golem,
	CH1CaptainRifleman,
	CH14CaptainRifleman,
	GA02SunkenTemple,
	EMadCaptainRiflemanVariation_MAX,
};

// Enum Madness.EDEPRECATED_MadCaptainVariation
enum class EDEPRECATED_MadCaptainVariation : uint8 {
	Any,
	Rifleman,
	Shotgunner,
	Sniper,
	Heavygunner,
	Berserker,
	EDEPRECATED_MAX,
};

// Enum Madness.EMadSciathanVariation
enum class EMadSciathanVariation : uint8 {
	Any,
	Dragonfly,
	Raptor,
	CQ12a3Basilisk,
	CQ12a9Frightwing,
	EMadSciathanVariation_MAX,
};

// Enum Madness.EMadCrawlerVariation
enum class EMadCrawlerVariation : uint8 {
	Any,
	Regular,
	SQ23Crawler,
	CQ12a5Crawler,
	CQ12a7Crawler,
	CQ12a10Crawler,
	EMadCrawlerVariation_MAX,
};

// Enum Madness.EMadAlphaLurkerVariation
enum class EMadAlphaLurkerVariation : uint8 {
	Any,
	Regular,
	CQ12a4PackMother,
	CQ12a9DreadReptile,
	CQ12a2AlphaLurker,
	SQ22TheJungleKing,
	CH3AlphaLurker,
	CH7AlphaLurker,
	CH8AlphaLurker,
	CH11AlphaLurker,
	CH13AlphaLurker,
	EMadAlphaLurkerVariation_MAX,
};

// Enum Madness.EMadPerforoVariation
enum class EMadPerforoVariation : uint8 {
	Any,
	Regular,
	Green,
	Red,
	BloodMerchant,
	BloodMerchantMQDC,
	BloodMerchantSQGT,
	EMadPerforoVariation_MAX,
};

// Enum Madness.EMadBerserkerVariation
enum class EMadBerserkerVariation : uint8 {
	Any,
	Male,
	Female,
	EMadBerserkerVariation_MAX,
};

// Enum Madness.EMadRiflemanVariations
enum class EMadRiflemanVariations : uint8 {
	Any,
	Regular,
	SmokeGrenade,
	PoisonBackpack,
	FireBackpack,
	EMadRiflemanVariations_MAX,
};

// Enum Madness.EMadAllyVariation
enum class EMadAllyVariation : uint8 {
	Any,
	Medic,
	TrenchTown,
	Warfare,
	Hub,
	WZCivMale,
	BartenderMale,
	BoxerMale,
	ForestCivMale,
	ForestAllyMaleHelm,
	ForestAllyMaleNoHelm,
	PoliticalOfficerMale,
	WZOfficerFemale,
	Vendor,
	EMadAllyVariation_MAX,
};

// Enum Madness.EMadAIAbilityResult
enum class EMadAIAbilityResult : uint8 {
	NotStarted,
	InProgress,
	Success,
	Failed,
	Aborted,
	EMadAIAbilityResult_MAX,
};

// Enum Madness.EMAPredictionMode
enum class EMAPredictionMode : uint8 {
	NoPrediction,
	UsePrediction,
	EMAPredictionMode_MAX,
};

// Enum Madness.EAttackConditionRelation
enum class EAttackConditionRelation : uint8 {
	Less,
	LessEqual,
	Greater,
	GreaterEqual,
	Equal,
	NotEqual,
	EAttackConditionRelation_MAX,
};

// Enum Madness.EDirectionalMontage
enum class EDirectionalMontage : uint8 {
	MontageForward,
	MontageLeft45,
	MontageLeft90,
	MontageLeft135,
	MontageLeft180,
	MontageRight45,
	MontageRight90,
	MontageRight135,
	MontageRight180,
	Last,
	EDirectionalMontage_MAX,
};

// Enum Madness.EMadEquipAnimNotifyType
enum class EMadEquipAnimNotifyType : uint8 {
	Detach,
	Attach,
	Swap,
	Finished,
	EMadEquipAnimNotifyType_MAX,
};

// Enum Madness.EMadReloadAnimNotifyType
enum class EMadReloadAnimNotifyType : uint8 {
	ClipDrop,
	ClipGrab,
	ClipPlug,
	AmmoFill,
	HideBaseMeshClip,
	EMadReloadAnimNotifyType_MAX,
};

// Enum Madness.EAttachedChain
enum class EAttachedChain : uint8 {
	Left,
	Right,
	EAttachedChain_MAX,
};

// Enum Madness.EIKAttachmentType
enum class EIKAttachmentType : uint8 {
	Smoking,
	Eating,
	None,
	EIKAttachmentType_MAX,
};

// Enum Madness.ETitlePosition
enum class ETitlePosition : uint8 {
	TopLeft,
	TopRight,
	BottomLeft,
	BottomRight,
	ETitlePosition_MAX,
};

// Enum Madness.EFlagState
enum class EFlagState : uint8 {
	None,
	Locked,
	Unlocked,
	EFlagState_MAX,
};

// Enum Madness.EMadArenaState
enum class EMadArenaState : uint8 {
	None,
	Idle,
	Active,
	RetreatCountdown,
	Retreating,
	EMadArenaState_MAX,
};

// Enum Madness.EMadAssaultWeaponType
enum class EMadAssaultWeaponType : uint8 {
	AssaultRifle,
	DoubleGun,
	LMG,
	SMG,
	EMadAssaultWeaponType_MAX,
};

// Enum Madness.EMadLootSoundType
enum class EMadLootSoundType : uint8 {
	Spawn,
	Impact,
	Pickup,
	EMadLootSoundType_MAX,
};

// Enum Madness.EMadBannerUsage
enum class EMadBannerUsage : uint8 {
	Unspecified,
	UsedOnTruck,
	UsedInCustomizationUI,
	UsedAsCapturePoint,
	UsedInLobby,
	EMadBannerUsage_MAX,
};

// Enum Madness.EMadBarrierConditionState
enum class EMadBarrierConditionState : uint8 {
	NotBegan,
	Began,
	RequestedMet,
	Met,
	EMadBarrierConditionState_MAX,
};

// Enum Madness.BarrierDestroyObjectType
enum class BarrierDestroyObjectType : uint8 {
	OneShot,
	Light,
	Medium,
	Heavy,
	BarrierDestroyObjectType_MAX,
};

// Enum Madness.EBlastHealthObjectType
enum class EBlastHealthObjectType : uint8 {
	OneShot,
	Light,
	Medium,
	Heavy,
	EBlastHealthObjectType_MAX,
};

// Enum Madness.ESaveCheckpointType
enum class ESaveCheckpointType : uint8 {
	SaveCharacterState,
	SaveWorldState,
	SaveCharacterAndWorldState,
	ESaveCheckpointType_MAX,
};

// Enum Madness.EAttributeTest
enum class EAttributeTest : uint8 {
	Equal,
	LessThan,
	LessThanEqual,
	MoreThan,
	MoreThanEqual,
	EAttributeTest_MAX,
};

// Enum Madness.EDodgeDirection
enum class EDodgeDirection : uint8 {
	Any,
	Left,
	Right,
	EDodgeDirection_MAX,
};

// Enum Madness.EJumpAnims
enum class EJumpAnims : uint8 {
	Start,
	Loop,
	End,
	MAX,
};

// Enum Madness.EJumpDirections
enum class EJumpDirections : uint8 {
	Forward,
	Backward,
	Left,
	Right,
	MAX,
};

// Enum Madness.EMadBulletSkillType
enum class EMadBulletSkillType : uint8 {
	TwistedBullets,
	PainfulBullets,
	FireBullets,
	Max_None,
	EMadBulletSkillType_MAX,
};

// Enum Madness.EMadChallengeEnviroType
enum class EMadChallengeEnviroType : uint8 {
	Warzone,
	Desert,
	Forest,
	Max_None,
	EMadChallengeEnviroType_MAX,
};

// Enum Madness.EHand
enum class EHand : uint8 {
	Left,
	Right,
	Both,
	EHand_MAX,
};

// Enum Madness.ENukeShieldTier
enum class ENukeShieldTier : uint8 {
	Tier1,
	Tier2,
	Tier3,
	TierMax,
	ENukeShieldTier_MAX,
};

// Enum Madness.EAvailableSkills
enum class EAvailableSkills : uint8 {
	AS_None,
	EarthTremble,
	GroundShock,
	EAvailableSkills_MAX,
};

// Enum Madness.EMadForestBossCombatState
enum class EMadForestBossCombatState : uint8 {
	Intro,
	FirstRockshelf,
	SecondRockshelf,
	TransitionLeft,
	TransitionRight,
	AttackingLeft,
	AttackingRight,
	Death,
	EMadForestBossCombatState_MAX,
};

// Enum Madness.EMadnessAIForestBossStoneSource
enum class EMadnessAIForestBossStoneSource : uint8 {
	Left,
	Right,
	Center,
	Random,
	EMadnessAIForestBossStoneSource_MAX,
};

// Enum Madness.EDesertShotgunnerShieldState
enum class EDesertShotgunnerShieldState : uint8 {
	Hidden,
	Appearing,
	Visible,
	Disappearing,
	Breaking,
	EDesertShotgunnerShieldState_MAX,
};

// Enum Madness.EAttackState
enum class EAttackState : uint8 {
	StartAttack,
	StopAttack,
	EAttackState_MAX,
};

// Enum Madness.EVolcanoBossCombatState
enum class EVolcanoBossCombatState : uint8 {
	ChasingPlayer,
	BellyAttack,
	SprayAttack,
	LeapAttack,
	ChargeAttack,
	JumpAndRotate,
	ThrowProjectileAttack,
	TransitionToPhase2,
	TransitionToPhase3,
	Phase3RotationAttack,
	Phase3Minions,
	Phase3Death,
	SwingAttack,
	HighJumpAttack,
	QuickForwardJump,
	EVolcanoBossCombatState_MAX,
};

// Enum Madness.EVolcanoBossState
enum class EVolcanoBossState : uint8 {
	Phase01,
	Phase02,
	Phase03,
	TransitionToPhase02,
	TransitionToPhase03,
	Dead,
	EVolcanoBossState_MAX,
};

// Enum Madness.EMinionInitType
enum class EMinionInitType : uint8 {
	Default,
	Spline,
	Launch,
	EMinionInitType_MAX,
};

// Enum Madness.EMadConvoyUpgradeState
enum class EMadConvoyUpgradeState : uint8 {
	Invalid,
	Unavailable,
	AvailableUnaffordable,
	AvailableAffordable,
	Bought,
	EMadConvoyUpgradeState_MAX,
};

// Enum Madness.EMadTruckObstacle
enum class EMadTruckObstacle : uint8 {
	None,
	Player,
	PlayerInCloseRange,
	Truck,
	Gate,
	PlayerIsDBNO,
	StopTrigger,
	StopTriggerInCloseRange,
	TruckInCloseRange,
	EMadTruckObstacle_MAX,
};

// Enum Madness.EMadTruckState
enum class EMadTruckState : uint8 {
	None,
	Idle,
	Starting,
	Moving,
	Stopping,
	InstantStop,
	EMadTruckState_MAX,
};

// Enum Madness.EMadConvoyCustomizationItemType
enum class EMadConvoyCustomizationItemType : uint8 {
	VehicleDecoration,
	VehicleColor,
	VehicleDecal,
	BannerFlagpole,
	BannerShape,
	BannerDamageState,
	BannerPaintingPattern,
	BannerPaintingColor,
	BannerPaintingBorderColor,
	BannerSigilImage,
	BannerSigilColor,
	Mascot_DEPRECATED,
	Emote,
	Max_None,
	EMadConvoyCustomizationItemType_MAX,
};

// Enum Madness.ETimedAccoladeTypes
enum class ETimedAccoladeTypes : uint8 {
	None,
	Period,
	TimeFrame,
	MaxTimeBetween,
	ETimedAccoladeTypes_MAX,
};

// Enum Madness.EMadEnochAccoladeEventType
enum class EMadEnochAccoladeEventType : uint8 {
	WeaponFired,
	EnemyKilled,
	DamageDone,
	ItemTakenApart,
	ItemSold,
	QuestCompleted,
	QuestPoolCompleted,
	QuestObjectiveStatusChanged,
	PlayerLevelChanged,
	SkillActivated,
	StopSkillDuration,
	ChallengeFinishedSuccess,
	ChallengeTierUnlocked,
	LocationDiscovered,
	ConvoyUpgraded,
	RevivedSomeone,
	BeenRevived,
	ResourceGained,
	SkillUnlocked,
	SkillLeveledUp,
	Heal,
	ChestOpened,
	ItemPickedUp,
	ItemCollected,
	ItemEnhanced,
	ItemModChanged,
	ItemImproved,
	ItemEquiped,
	ModsDiscovered,
	MaxDifficultyLevelChanged,
	AccoladeCompleted,
	CharacterEmotePlayed,
	HeroTreeUpgraded,
	SkillDamageAbsorbed,
	DamageAdjusted,
	EnemyActivatedAbilityFromEvent,
	GameplayEffectAppliedToTarget,
	SpecificAbilityEffectApplied,
	RicochetEffectApplied,
	SlowTrapBulletsCaught,
	CollectibleCollected,
	AccoladeLevelUnlocked,
	ResourceHarvested,
	Refresh,
	EMadEnochAccoladeEventType_MAX,
};

// Enum Madness.EAccoladeDamageEventType
enum class EAccoladeDamageEventType : uint8 {
	Point,
	Radial,
	BasePoint,
	Default,
	EAccoladeDamageEventType_MAX,
};

// Enum Madness.EHealType
enum class EHealType : uint8 {
	Self,
	Other,
	Both,
	EHealType_MAX,
};

// Enum Madness.EAccoladeSetCheckType
enum class EAccoladeSetCheckType : uint8 {
	Set,
	OneOff,
	Both,
	EAccoladeSetCheckType_MAX,
};

// Enum Madness.EAccoladeDifferentItemType
enum class EAccoladeDifferentItemType : uint8 {
	Weapon,
	Armor,
	Both,
	EAccoladeDifferentItemType_MAX,
};

// Enum Madness.EMadEnochAccoladeUnlockConditionItemPickedUp
enum class EMadEnochAccoladeUnlockConditionItemPickedUp : uint8 {
	Weapon,
	Armor,
	Both,
	EMadEnochAccoladeUnlockConditionItemPickedUp_MAX,
};

// Enum Madness.ETargetingType
enum class ETargetingType : uint8 {
	Aiming,
	Hip,
	ETargetingType_MAX,
};

// Enum Madness.EReviveType
enum class EReviveType : uint8 {
	Agent,
	Recipient,
	EReviveType_MAX,
};

// Enum Madness.EMadEnochAccoladeUnlockConditionSkillLeveledUp
enum class EMadEnochAccoladeUnlockConditionSkillLeveledUp : uint8 {
	ShardSpent,
	Mastery,
	LegendaryMastery,
	StackEffect,
	EMadEnochAccoladeUnlockConditionSkillLeveledUp_MAX,
};

// Enum Madness.EMadCapturePointVisualState
enum class EMadCapturePointVisualState : uint8 {
	NotPlanted,
	StartedPlanting,
	FinishingPlanting,
	Planted,
	MAX_None,
	EMadCapturePointVisualState_MAX,
};

// Enum Madness.EBackpackState
enum class EBackpackState : uint8 {
	EBackpack_Open,
	EBackpack_Close,
	EBackpack_MAX,
};

// Enum Madness.EMadDotConditionType
enum class EMadDotConditionType : uint8 {
	TargetToPlayer,
	PlayerToTarget,
	TargetForwardDir,
	PlayerForwardDir,
	Custom,
	Max_None,
	EMadDotConditionType_MAX,
};

// Enum Madness.EMadTargetConditionType
enum class EMadTargetConditionType : uint8 {
	HasTag,
	IsAlive,
	HasTeam,
	CastSuccess,
	DotProduct,
	Max_None,
	EMadTargetConditionType_MAX,
};

// Enum Madness.EStatusType
enum class EStatusType : uint8 {
	ClassMark,
	CoreStatus,
	SkillEffect,
	EStatusType_MAX,
};

// Enum Madness.ECustomMagnitudeCalculation
enum class ECustomMagnitudeCalculation : uint8 {
	Float,
	Attribute,
	CustomCalculationClass,
	ECustomMagnitudeCalculation_MAX,
};

// Enum Madness.EMadOptionUsageInputType
enum class EMadOptionUsageInputType : uint8 {
	Keyboard,
	Gamepad,
	MAX_None,
	EMadOptionUsageInputType_MAX,
};

// Enum Madness.EMadOptionUsage
enum class EMadOptionUsage : uint8 {
	Console,
	Console4K,
	PS4,
	XBoxOne,
	Desktop,
	All,
	Disabled,
	XBoxAny,
	MAX_None,
	EMadOptionUsage_MAX,
};

// Enum Madness.EMadAudioOutputType
enum class EMadAudioOutputType : uint8 {
	FullBandwidth,
	NightPlay,
	Television,
	Max_None,
	EMadAudioOutputType_MAX,
};

// Enum Madness.EMadHelmetVisibility
enum class EMadHelmetVisibility : uint8 {
	AlwaysHidden,
	AlwaysOn,
	Max_None,
	EMadHelmetVisibility_MAX,
};

// Enum Madness.EMadOptionType
enum class EMadOptionType : uint8 {
	Selector,
	Toggle,
	Slider,
	Vector2D,
	Trigger,
	Max_None,
	EMadOptionType_MAX,
};

// Enum Madness.EMadHeavyWeaponType
enum class EMadHeavyWeaponType : uint8 {
	Minigun,
	RPG,
	Flamethrower,
	Mortar,
	EMadHeavyWeaponType_MAX,
};

// Enum Madness.EMadHostMigrationTransitionState
enum class EMadHostMigrationTransitionState : uint8 {
	WaitingForInitialize,
	WaitingForTransitionToFinish,
	WaitingForReadyForCoopPlay,
	InitiatingTransition,
	Max_None,
	EMadHostMigrationTransitionState_MAX,
};

// Enum Madness.EMadVendorEliteItemType
enum class EMadVendorEliteItemType : uint8 {
	Weapon,
	Armor,
	Legendary,
	Predefined,
	EMadVendorEliteItemType_MAX,
};

// Enum Madness.EMadVendorWeaponCategory
enum class EMadVendorWeaponCategory : uint8 {
	Assault,
	Shotgun,
	Rifle,
	Sidearm,
	EMadVendorWeaponCategory_MAX,
};

// Enum Madness.EMadLootActionDescription
enum class EMadLootActionDescription : uint8 {
	None,
	AutoLooted,
	MovedToStash,
	MAX_None,
	EMadLootActionDescription_MAX,
};

// Enum Madness.EMadItemSpawnSource
enum class EMadItemSpawnSource : uint8 {
	Undefined,
	Loot,
	Vendor,
	Cheat,
	EMadItemSpawnSource_MAX,
};

// Enum Madness.EMadInventoryChange
enum class EMadInventoryChange : uint8 {
	Action_Undefined,
	Action_Add,
	Action_Remove,
	Container_Stash,
	Container_Backpack,
	Container_Equipment,
	Container_MasteryCards,
	Container_Resource,
	Container_Loot,
	Container_OnlineStash,
	EMadInventoryChange_MAX,
};

// Enum Madness.EMadItemTakeApartAction
enum class EMadItemTakeApartAction : uint8 {
	Scrap,
	Disassemble,
	EMadItemTakeApartAction_MAX,
};

// Enum Madness.EMadItemAttributeOperation
enum class EMadItemAttributeOperation : uint8 {
	Apply,
	ApplyForced,
	Remove,
	EMadItemAttributeOperation_MAX,
};

// Enum Madness.EPerkSize
enum class EPerkSize : uint8 {
	Small,
	Big,
	EPerkSize_MAX,
};

// Enum Madness.EMadHeroTreeUpgradeState
enum class EMadHeroTreeUpgradeState : uint8 {
	Invalid,
	Unavailable,
	AvailableUnaffordable,
	AvailableAffordable,
	Bought,
	EMadHeroTreeUpgradeState_MAX,
};

// Enum Madness.EMadSkillSlotResult
enum class EMadSkillSlotResult : uint8 {
	Success,
	Error,
	SkillOnCooldown,
	SkillIsActive,
	PlayerIsInDBNO,
	Max_None,
	EMadSkillSlotResult_MAX,
};

// Enum Madness.ELocalisedResourceType
enum class ELocalisedResourceType : uint8 {
	Basic,
	InfoCast,
	Event,
	ELocalisedResourceType_MAX,
};

// Enum Madness.EMarketingCameraLockType
enum class EMarketingCameraLockType : uint8 {
	Mode1,
	Mode2,
	Mode3,
	FocusOnly,
	MAX,
};

// Enum Madness.EMarketingCameraMovmentType
enum class EMarketingCameraMovmentType : uint8 {
	Walk,
	Float,
	MAX,
};

// Enum Madness.EMadMeleeReactionDistance
enum class EMadMeleeReactionDistance : uint8 {
	Short,
	Long,
	EMadMeleeReactionDistance_MAX,
};

// Enum Madness.EMadPlayerMeleeAttackDirection
enum class EMadPlayerMeleeAttackDirection : uint8 {
	Straight,
	Left,
	Right,
	EMadPlayerMeleeAttackDirection_MAX,
};

// Enum Madness.EMadMinigunSpinState
enum class EMadMinigunSpinState : uint8 {
	Idle,
	SpinUp,
	SpinDown,
	Spin,
	EMadMinigunSpinState_MAX,
};

// Enum Madness.EMadOreSize
enum class EMadOreSize : uint8 {
	Small,
	Medium,
	Huge,
	Max_None,
	EMadOreSize_MAX,
};

// Enum Madness.EMoveActionAnimationType
enum class EMoveActionAnimationType : uint8 {
	WithMontage,
	NoMontage,
	MAX,
};

// Enum Madness.EMoveActionRotationFixApplianceMode
enum class EMoveActionRotationFixApplianceMode : uint8 {
	AuthorityOnly,
	AuthorityAndLocal,
	All,
	EMoveActionRotationFixApplianceMode_MAX,
};

// Enum Madness.EMoveActionRotationFixApplianceType
enum class EMoveActionRotationFixApplianceType : uint8 {
	Absolute,
	Relative,
	EMoveActionRotationFixApplianceType_MAX,
};

// Enum Madness.EMoveActionInstigationMode
enum class EMoveActionInstigationMode : uint8 {
	LocalOnly,
	LocalOrServer,
	Any,
	EMoveActionInstigationMode_MAX,
};

// Enum Madness.EMoveActionMontageLoopType
enum class EMoveActionMontageLoopType : uint8 {
	Nonlooped,
	Looped,
	EMoveActionMontageLoopType_MAX,
};

// Enum Madness.EMoveActionMontageDirectionalBackalityType
enum class EMoveActionMontageDirectionalBackalityType : uint8 {
	Single,
	LeftRightSeparate,
	EMoveActionMontageDirectionalBackalityType_MAX,
};

// Enum Madness.EMoveActionMontageDirectionalityType
enum class EMoveActionMontageDirectionalityType : uint8 {
	Diagonal,
	Vertical,
	SingleFrontal,
	SingleBackal,
	EMoveActionMontageDirectionalityType_MAX,
};

// Enum Madness.EMoveActionMontageStyleType
enum class EMoveActionMontageStyleType : uint8 {
	Normal,
	Directional,
	Random,
	EMoveActionMontageStyleType_MAX,
};

// Enum Madness.EMovementSpeedValidity
enum class EMovementSpeedValidity : uint8 {
	Any,
	Walk,
	JogOrSprint,
	EMovementSpeedValidity_MAX,
};

// Enum Madness.EMoveStartType
enum class EMoveStartType : uint8 {
	Forward,
	Directional,
	None,
	EMoveStartType_MAX,
};

// Enum Madness.EMadOnlineSlotType
enum class EMadOnlineSlotType : uint8 {
	Invalid,
	AccountData,
	CharacterData,
	EMadOnlineSlotType_MAX,
};

// Enum Madness.EMadOnlineSubSlotType
enum class EMadOnlineSubSlotType : uint8 {
	Invalid,
	Character,
	Region,
	World,
	Settings,
	OnlineStash,
	Accolades,
	AccountInfo,
	EMadOnlineSubSlotType_MAX,
};

// Enum Madness.EMadSaveFlags
enum class EMadSaveFlags : uint8 {
	SF_None,
	SF_Character,
	SF_Region,
	SF_World,
	SF_Stash,
	SF_Info,
	SF_Settings,
	SF_Accolades,
	SF_All,
	SF_MAX,
};

// Enum Madness.EMadPickablePriority
enum class EMadPickablePriority : uint8 {
	AutoPickable,
	Equipment,
	FactItem,
	EMadPickablePriority_MAX,
};

// Enum Madness.EMadPostProcessIndex
enum class EMadPostProcessIndex : uint8 {
	PlayerHitVignette,
	SniperLens,
	DbnoSilhouette,
	ShowTeammatesSilhouette,
	HitIndicator,
	EMadPostProcessIndex_MAX,
};

// Enum Madness.EPlayerDeathReason
enum class EPlayerDeathReason : uint8 {
	Undefined,
	Killed,
	EPlayerDeathReason_MAX,
};

// Enum Madness.EMadPreviewMode
enum class EMadPreviewMode : uint8 {
	Inventory,
	CharacterCustomization,
	CharacterSelection,
	Emotes,
	Max_None,
	EMadPreviewMode_MAX,
};

// Enum Madness.EMadRifleType
enum class EMadRifleType : uint8 {
	Marksman,
	ASR,
	BoltAction,
	EMadRifleType_MAX,
};

// Enum Madness.EMadShotgunType
enum class EMadShotgunType : uint8 {
	SawedOff,
	PumpAction,
	AutoShotgun,
	EMadShotgunType_MAX,
};

// Enum Madness.EMadSidearmType
enum class EMadSidearmType : uint8 {
	Pistol,
	Revolver,
	EMadSidearmType_MAX,
};

// Enum Madness.EPlayerVoteType
enum class EPlayerVoteType : uint8 {
	VoteUp,
	VoteDown,
	EPlayerVoteType_MAX,
};

// Enum Madness.ETeleportBlockState
enum class ETeleportBlockState : uint8 {
	Open,
	Combat,
	Cutscene,
	ChallengeNotStarted,
	CloseDistance,
	ETeleportBlockState_MAX,
};

// Enum Madness.EMadRoomMode
enum class EMadRoomMode : uint8 {
	InvetoryPreview,
	CharacterCustomization,
	TruckCustomization,
	ItemPreview,
	EmptyRoom,
	BannerCustomization,
	ArmorPreview,
	Emotes,
	Max_None,
	EMadRoomMode_MAX,
};

// Enum Madness.EMadToastType
enum class EMadToastType : uint8 {
	Invalid,
	VoteBegin,
	VoteEnd,
	LegendaryItem,
	Kill,
	Multikill,
	Quest,
	Item,
	Loot,
	Resource,
	ShardSkill,
	ShardGeneral,
	EMadToastType_MAX,
};

// Enum Madness.EPlayerControlType
enum class EPlayerControlType : uint8 {
	Local,
	Teammate,
	EPlayerControlType_MAX,
};

// Enum Madness.EMadTutorialFactUpdateResult
enum class EMadTutorialFactUpdateResult : uint8 {
	Success,
	AlreadyUpdated,
	Failed,
	PlayerNotReady,
	EMadTutorialFactUpdateResult_MAX,
};

// Enum Madness.EMadJoinBlockState
enum class EMadJoinBlockState : uint8 {
	Open,
	Blocked_Prologue,
	Blocked_ChallengeFinalStage,
	Blocked_BossFight,
	Blocked_Cutscene,
	Blocked_HostMigration,
	Blocked_PlayerInTransition,
	Blocked_PlayerInCharacterCreator,
	Blocked_CharacterNotSelected,
	Blocked_Underage,
	Max_None,
	EMadJoinBlockState_MAX,
};

// Enum Madness.EMadChallengeRewardID
enum class EMadChallengeRewardID : uint8 {
	ID_2,
	ID_3,
	ID_4,
	ID_5,
	MAX_None,
	EMadChallengeRewardID_MAX,
};

// Enum Madness.EMadChallengeType
enum class EMadChallengeType : uint8 {
	Outer,
	Inner,
	Final,
	Secret,
	MAX_NONE,
	EMadChallengeType_MAX,
};

// Enum Madness.EChallengeTimeStatus
enum class EChallengeTimeStatus : uint8 {
	TS_None,
	TS_Started,
	TS_Finished,
	TS_MAX,
};

// Enum Madness.EMadContextPanelType
enum class EMadContextPanelType : uint8 {
	Accolade,
	AccoladeLevelUp,
	JournalEntry,
	Vote,
	WorldDifficulty,
	QuestUnlocked,
	ShareableQuest,
	QuestBegan,
	SideQuestCompleted,
	HeroSkillPoints,
	SwitchQuest,
	MatchmakingInfo,
	QuestCancelled,
	QuestIsAlreadyInProgress,
	Max_None,
	EMadContextPanelType_MAX,
};

// Enum Madness.EMadHUDElement
enum class EMadHUDElement : uint8 {
	MinimapArea,
	InfoPanel,
	GameLog,
	SkillsPanel,
	PlayerStatusesPanel,
	WeaponsPanel,
	LegendaryItemFeed,
	LootFeedPanel,
	PartyPanel,
	Crosshairs,
	CoverHints,
	TutorialsPanel,
	EnemyHPBar,
	ObjectivesArea,
	ContextPanel,
	ExperienceBar,
	BossHealthBar,
	WorldLevelBar,
	PlayerPanel,
	Max_None,
	EMadHUDElement_MAX,
};

// Enum Madness.EAccoladeSaveConditionType
enum class EAccoladeSaveConditionType : uint8 {
	ProgressChanged,
	TierCompleted,
	AccoladeCompleted,
	Custom,
	Max_None,
	EAccoladeSaveConditionType_MAX,
};

// Enum Madness.EAccoladeSaveRequestType
enum class EAccoladeSaveRequestType : uint8 {
	Instant,
	NextFrame,
	Delayed,
	PostCombat,
	Max_None,
	EAccoladeSaveRequestType_MAX,
};

// Enum Madness.EOneTimeRewardSource
enum class EOneTimeRewardSource : uint8 {
	Default,
	Twitch,
	Preorder,
	Max_None,
	EOneTimeRewardSource_MAX,
};

// Enum Madness.EMadControllerType
enum class EMadControllerType : uint8 {
	Keyboard,
	Gamepad,
	EMadControllerType_MAX,
};

// Enum Madness.EMadPlatform
enum class EMadPlatform : uint8 {
	Xbox_One,
	XSX,
	XboxLive,
	PS4,
	PS5,
	PSN,
	Steam,
	Epic,
	Stadia,
	Max_None,
	EMadPlatform_MAX,
};

// Enum Madness.EMadStatsPlayer
enum class EMadStatsPlayer : uint8 {
	TimeInDBNO,
	TimeInCover,
	DamageTaken,
	DamageBlocked,
	Accuracy,
	CriticalHits,
	NumberOfReloads,
	HighestMultiKill,
	NumberOfTimesInDBNO,
	NumberOfTimesInCover,
	HealingFromClassHeal,
	HealingFromWeaponLeech,
	HealingFromSkillLeech,
	HealingFromMod,
	HealingFromOtherPlayers,
	ShieldGenerated,
	EMadStatsPlayer_MAX,
};

// Enum Madness.EMadOrientation
enum class EMadOrientation : uint8 {
	Front,
	Left,
	Right,
	Back,
	EMadOrientation_MAX,
};

// Enum Madness.EMadCameraFromMontageBlendStartOffset
enum class EMadCameraFromMontageBlendStartOffset : uint8 {
	StartOffset,
	DefaultOffset,
	EMadCameraFromMontageBlendStartOffset_MAX,
};

// Enum Madness.EMadCameraFromMontageLocation
enum class EMadCameraFromMontageLocation : uint8 {
	Montage,
	AnimBP,
	EMadCameraFromMontageLocation_MAX,
};

// Enum Madness.EMadCameraFromMontageRotation
enum class EMadCameraFromMontageRotation : uint8 {
	Montage,
	AnimBP,
	PlayerAimPoint,
	EMadCameraFromMontageRotation_MAX,
};

// Enum Madness.EMadEaseAnimationState
enum class EMadEaseAnimationState : uint8 {
	Begin,
	Idle,
	End,
	Max_None,
	EMadEaseAnimationState_MAX,
};

// Enum Madness.EMadnessProficiencyModificationType
enum class EMadnessProficiencyModificationType : uint8 {
	Value,
	Percentage,
	Max_None,
	EMadnessProficiencyModificationType_MAX,
};

// Enum Madness.EMadnessMasterySlots
enum class EMadnessMasterySlots : uint8 {
	MasterySlot1,
	MasterySlot2,
	MasterySlot3,
	MasterySlot4,
	MasterySlot5,
	MasterySlot6,
	MasterySlot7,
	MasterySlot8,
	MasterySlot9,
	MasterySlot10,
	MasterySlot11,
	MasterySlot12,
	MasterySlot13,
	MasterySlot14,
	MasterySlot15,
	MasterySlot16,
	Max_None,
	EMadnessMasterySlots_MAX,
};

// Enum Madness.EMadnessUpgradeType
enum class EMadnessUpgradeType : uint8 {
	Path,
	ExtraPath,
	MasteryPoints,
	ConvoyPath,
	SkillUnlock,
	PerkUnlock,
	Max_None,
	EMadnessUpgradeType_MAX,
};

// Enum Madness.EMadnessDifficultylevel
enum class EMadnessDifficultylevel : uint8 {
	Normal,
	Hard,
	Extreme,
	Max_None,
	EMadnessDifficultylevel_MAX,
};

// Enum Madness.EMadEnvironmentType
enum class EMadEnvironmentType : uint8 {
	Warzone,
	Desert,
	Forest,
	Prologue,
	NoMansLand,
	Den,
	Tutorial,
	Max_None,
	EMadEnvironmentType_MAX,
};

// Enum Madness.EMadArmorPreviewView
enum class EMadArmorPreviewView : uint8 {
	FullBody,
	Head,
	Torso,
	Legs,
	Hands,
	Feet,
	Max_None,
	EMadArmorPreviewView_MAX,
};

// Enum Madness.EMadRotationType
enum class EMadRotationType : uint8 {
	Pitch,
	Yaw,
	Roll,
	Max_None,
	EMadRotationType_MAX,
};

// Enum Madness.EMadLocomotionBlendspaceParameterType
enum class EMadLocomotionBlendspaceParameterType : uint8 {
	ForwardAndRight,
	SpeedAndAngle,
	Max,
};

// Enum Madness.EPlayerMoveActionActivityType
enum class EPlayerMoveActionActivityType : uint8 {
	None,
	Start,
	Finish,
	Max,
};

// Enum Madness.EPlayerAnimDataType
enum class EPlayerAnimDataType : uint8 {
	FullBody,
	OverrideArms,
	Max,
};

// Enum Madness.EMadCoverWeaponAttachmentMode
enum class EMadCoverWeaponAttachmentMode : uint8 {
	CoverFacingAlways,
	CoverFacingWhenLeaning,
	AlwaysRight,
	AlwaysRightExceptLeftSideBlindFire,
	EMadCoverWeaponAttachmentMode_MAX,
};

// Enum Madness.ESprintToCoverReason
enum class ESprintToCoverReason : uint8 {
	Enter,
	Hop,
	Max,
};

// Enum Madness.ECoverEnterDistance
enum class ECoverEnterDistance : uint8 {
	Near,
	Mid,
	Far,
	Max,
};

// Enum Madness.EMadAimOffsetType
enum class EMadAimOffsetType : uint8 {
	Front,
	Back,
	Max,
};

// Enum Madness.EMadRarityRollSource
enum class EMadRarityRollSource : uint8 {
	LootRegular,
	LootChallenge,
	Chest,
	ChallengeEnemies,
	EMadRarityRollSource_MAX,
};

// Enum Madness.EMadPickableItemSource
enum class EMadPickableItemSource : uint8 {
	None,
	Chest,
	Pawn,
	Actor,
	Mining,
	ChallengePod,
	EMadPickableItemSource_MAX,
};

// Enum Madness.EMadChallengeModType
enum class EMadChallengeModType : uint8 {
	General,
	Enemy,
	World,
	Max_None,
	EMadChallengeModType_MAX,
};

// Enum Madness.EMadCustomizationElement
enum class EMadCustomizationElement : uint8 {
	Head,
	Hair,
	Beard,
	Scar,
	HairColor,
	EyeColor,
	ScarColor,
	SkinColor,
	Makeup,
	Piercing,
	Max_None,
	EMadCustomizationElement_MAX,
};

// Enum Madness.EMadResourceConversionType
enum class EMadResourceConversionType : uint8 {
	MaxPossible,
	DefinedConsumed,
	DefinedGained,
	Max_None,
	EMadResourceConversionType_MAX,
};

// Enum Madness.EMadResourceType
enum class EMadResourceType : uint8 {
	Scrap,
	Copper,
	Iron,
	Titanium,
	Max_None,
	EMadResourceType_MAX,
};

// Enum Madness.EMadResourceCategory
enum class EMadResourceCategory : uint8 {
	Resource,
	Currency,
	Token,
	EMadResourceCategory_MAX,
};

// Enum Madness.EMadLootRewardType
enum class EMadLootRewardType : uint8 {
	Weapon,
	Armor,
	MasteryCard,
	Scrap,
	Ore,
	FactItem,
	Ammo,
	ShardSkill,
	ShardGeneral,
	Max_None,
	EMadLootRewardType_MAX,
};

// Enum Madness.EMadLootDelayType
enum class EMadLootDelayType : uint8 {
	NoDelay,
	WaitForCutsceneEnd,
	WaitForTransitionEnd,
	EMadLootDelayType_MAX,
};

// Enum Madness.EMadLootType
enum class EMadLootType : uint8 {
	Sack,
	Trophy,
	Chest,
	Accolade,
	Challenge,
	Quest,
	Max_None,
	EMadLootType_MAX,
};

// Enum Madness.EMadArmorHeadMod
enum class EMadArmorHeadMod : uint8 {
	None,
	SwapHead,
	SwapHair,
	SwapBeard,
	SwapHairAndBeard,
	Max_None,
	EMadArmorHeadMod_MAX,
};

// Enum Madness.EMadArmorPart
enum class EMadArmorPart : uint8 {
	Headgear,
	UpperArmor,
	LowerArmor,
	Gloves,
	Footgear,
	Max_None,
	EMadArmorPart_MAX,
};

// Enum Madness.EMadCraftingOption
enum class EMadCraftingOption : uint8 {
	Enhance,
	Improve,
	ChangeMod,
	Level,
	ChangeVariant,
	EMadCraftingOption_MAX,
};

// Enum Madness.EMadItemUpgradeOption
enum class EMadItemUpgradeOption : uint8 {
	AcceptStep,
	RerollAttribute,
	FinishUpgrade,
	EMadItemUpgradeOption_MAX,
};

// Enum Madness.EMadItemAttributeValueType
enum class EMadItemAttributeValueType : uint8 {
	Percentage,
	AdditiveInteger,
	AdditiveFloat,
	Boolean,
	Max_None,
	EMadItemAttributeValueType_MAX,
};

// Enum Madness.EMadItemRarity
enum class EMadItemRarity : uint8 {
	Common,
	Unusual,
	Rare,
	Epic,
	Legendary,
	Max_None,
	EMadItemRarity_MAX,
};

// Enum Madness.EMadItemType
enum class EMadItemType : uint8 {
	Armor,
	Weapon,
	Resource,
	MasteryCard,
	ChallengeKey,
	ChallengeMod,
	FactItem,
	Ammo,
	Max_None,
	EMadItemType_MAX,
};

// Enum Madness.EMadInventoryContainer
enum class EMadInventoryContainer : uint8 {
	None,
	Equipment,
	Backpack,
	Stash,
	OnlineStash,
	Max_None,
	EMadInventoryContainer_MAX,
};

// Enum Madness.EMadInventoryOrder
enum class EMadInventoryOrder : uint8 {
	Alphabetical,
	Rarity,
	Rating,
	Type,
	Level,
	Max_None,
	EMadInventoryOrder_MAX,
};

// Enum Madness.EMadDamageCategory
enum class EMadDamageCategory : uint8 {
	Physical,
	Anomaly,
	DarkMatter,
	Max_None,
	EMadDamageCategory_MAX,
};

// Enum Madness.EMadSkillTier
enum class EMadSkillTier : uint8 {
	Tier1,
	Tier2,
	Tier3,
	Max_None,
	EMadSkillTier_MAX,
};

// Enum Madness.EMadModTriggerType
enum class EMadModTriggerType : uint8 {
	OnShot,
	OnKill,
	OnCriticalShot,
	OnCriticalKill,
	OnFirstBullet,
	OnLastBullet,
	OnPercentBullet,
	OnReloadBegin,
	OnReload,
	OnRoll,
	OnShieldDepletion,
	Max_None,
	EMadModTriggerType_MAX,
};

// Enum Madness.EMadSkillType
enum class EMadSkillType : uint8 {
	Active,
	Passive,
	Mod,
	Max_None,
	EMadSkillType_MAX,
};

// Enum Madness.EAnomalyBreakerVisState
enum class EAnomalyBreakerVisState : uint8 {
	Disabled,
	Charging,
	PreEnrage,
	Enrage,
	Max_None,
	EAnomalyBreakerVisState_MAX,
};

// Enum Madness.EThrowType
enum class EThrowType : uint8 {
	NormalLow,
	NormalMid,
	NormalHigh,
	LowCoverLeft,
	LowCoverRight,
	HighCoverLeft,
	HighCoverRight,
	EThrowType_MAX,
};

// Enum Madness.EMadCursorState
enum class EMadCursorState : uint8 {
	Default,
	Hovered,
	Pressed,
	Max_None,
	EMadCursorState_MAX,
};

// Enum Madness.EMadLoadingScreenHintType
enum class EMadLoadingScreenHintType : uint8 {
	Unassigned,
	Lore,
	Gameplay,
	Story,
	Max_None,
	EMadLoadingScreenHintType_MAX,
};

// Enum Madness.EModalErrorMsgPersistence
enum class EModalErrorMsgPersistence : uint8 {
	Persistent,
	Informative,
	Critical,
	Max_None,
	EModalErrorMsgPersistence_MAX,
};

// Enum Madness.EModalErrorMsgType
enum class EModalErrorMsgType : uint8 {
	Error,
	Notification,
	Warning,
	Max_None,
	EModalErrorMsgType_MAX,
};

// Enum Madness.EHDRCalibrationState
enum class EHDRCalibrationState : uint8 {
	Closed,
	LuminanceMin,
	LuminanceMax,
	MAX_None,
	EHDRCalibrationState_MAX,
};

// Enum Madness.EUIInputLayer
enum class EUIInputLayer : uint8 {
	Gameplay,
	PopupOverlay,
	UMG,
	MAX,
};

// Enum Madness.EInputMode
enum class EInputMode : uint8 {
	EIM_UIOnly,
	EIM_GameOnly,
	EIM_GameAndUI,
	EIM_KeepPrevious,
	EIM_Max,
};

// Enum Madness.EWanderingFlameState
enum class EWanderingFlameState : uint8 {
	None,
	WaitingToSpawn,
	FindDestinationLocation,
	WaitForPathfinding,
	WaitForEQS,
	Move,
	EWanderingFlameState_MAX,
};

// Enum Madness.EMadAdditionalComponentsHandling
enum class EMadAdditionalComponentsHandling : uint8 {
	Include,
	Exclude,
	Only,
	EMadAdditionalComponentsHandling_MAX,
};

// Enum Madness.EMadFreezingStatus
enum class EMadFreezingStatus : uint8 {
	Freezing,
	Frozen,
	Unfreezing,
	Max_None,
	EMadFreezingStatus_MAX,
};

// Enum Madness.EMadTutorialShowFrequency
enum class EMadTutorialShowFrequency : uint8 {
	Always,
	OncePerPlaythrough,
	OncePerPlaythroughRegion,
	OncePerGame,
	Never,
	EMadTutorialShowFrequency_MAX,
};

// ScriptStruct Madness.MadReactionAnimData
// Size: 0xb0 (Inherited: 0x00)
struct FMadReactionAnimData {
	struct TSoftObjectPtr<struct UAnimMontage> MontageFront; // 0x00(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> MontageLeft; // 0x28(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> MontageRight; // 0x50(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> MontageBack; // 0x78(0x28)
	char UnknownData_A0[0x10]; // 0xa0(0x10)
};

// ScriptStruct Madness.GameplayCueOverrides
// Size: 0x88 (Inherited: 0x00)
struct FGameplayCueOverrides {
	struct USoundBase* StartSound; // 0x00(0x08)
	struct USoundBase* StopSound; // 0x08(0x08)
	struct UParticleSystem* StartParticle; // 0x10(0x08)
	struct UParticleSystem* StopParticle; // 0x18(0x08)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bOverrideCharacterShaders : 1; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct TArray<struct UMadCharacterShaderEffect*> CharacterShaders; // 0x28(0x10)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool bOverrideWeaponShaders : 1; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct TArray<struct UMadWeaponShaderEffect*> WeaponShaders; // 0x40(0x10)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bOverrideSkeletonShaders : 1; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct TArray<struct UMadGoreSkeletonShaderEffect*> GoreSkeletonShaders; // 0x58(0x10)
	char UnknownData_68_0 : 7; // 0x68(0x01)
	bool bOverrideGibShaders : 1; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct TArray<struct UMadGoreGibShaderEffect*> GoreGibShaders; // 0x70(0x10)
	struct AMadGameplayCue* GoreOverrides; // 0x80(0x08)
};

// ScriptStruct Madness.PostInitAttributeSetsData
// Size: 0x3c (Inherited: 0x00)
struct FPostInitAttributeSetsData {
	float Level; // 0x00(0x04)
	float Armor; // 0x04(0x04)
	float Resistance; // 0x08(0x04)
	float Health; // 0x0c(0x04)
	float MaxHealth; // 0x10(0x04)
	float CritChance; // 0x14(0x04)
	float ArmorPenetration; // 0x18(0x04)
	float ResistancePenetration; // 0x1c(0x04)
	float AbilityPower; // 0x20(0x04)
	float StatusPower; // 0x24(0x04)
	float HealthRegen; // 0x28(0x04)
	float LifeLeechWeapons; // 0x2c(0x04)
	float LifeLeechSkills; // 0x30(0x04)
	float MovementSpeed; // 0x34(0x04)
	float HealingReceivedBonus; // 0x38(0x04)
};

// ScriptStruct Madness.AbilityHandleWithPriority
// Size: 0x08 (Inherited: 0x00)
struct FAbilityHandleWithPriority {
	struct FGameplayAbilitySpecHandle Handle; // 0x00(0x04)
	int32_t Priority; // 0x04(0x04)
};

// ScriptStruct Madness.MadWeakSpot
// Size: 0x20 (Inherited: 0x00)
struct FMadWeakSpot {
	struct FName BoneName; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bPropagateToChilden : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bForceCrit : 1; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	float DamageMult; // 0x0c(0x04)
	struct TArray<struct FMadWeakSpotHit> WeakSpotHits; // 0x10(0x10)
};

// ScriptStruct Madness.MadWeakSpotHit
// Size: 0x18 (Inherited: 0x00)
struct FMadWeakSpotHit {
	float DamageMult; // 0x00(0x04)
	struct FVector DamageDirection; // 0x04(0x0c)
	float ConeAngle; // 0x10(0x04)
	char UnknownData_14_0 : 7; // 0x14(0x01)
	bool bForceCrit : 1; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Madness.MadTimeDilationHelper
// Size: 0x0c (Inherited: 0x00)
struct FMadTimeDilationHelper {
	float TimeDilation; // 0x00(0x04)
	struct FGameplayTag Reason; // 0x04(0x08)
};

// ScriptStruct Madness.ItemData
// Size: 0x88 (Inherited: 0x00)
struct FItemData {
	struct FString Name; // 0x00(0x10)
	struct FString Type; // 0x10(0x10)
	int32_t Count; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct TArray<struct FName> Labels; // 0x28(0x10)
	struct FAttributeMap AttributeMap; // 0x38(0x50)
};

// ScriptStruct Madness.AttributeMap
// Size: 0x50 (Inherited: 0x00)
struct FAttributeMap {
	struct TMap<struct FString, struct FString> Attributes; // 0x00(0x50)
};

// ScriptStruct Madness.ItemOfferData
// Size: 0x3c8 (Inherited: 0x00)
struct FItemOfferData {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct FName> Labels; // 0x10(0x10)
	struct FScheduleInfo Schedule; // 0x20(0x38)
	struct FAttributeMap AttributeMap; // 0x58(0x50)
	struct FString OnAccept; // 0xa8(0x10)
	struct TArray<struct FString> IncludedOffers; // 0xb8(0x10)
	struct FItemOfferDataPreconditions Preconditions; // 0xc8(0x40)
	struct TArray<struct FItemQuantityData> Consumes; // 0x108(0x10)
	struct TArray<struct FItemQuantityData> Debits; // 0x118(0x10)
	struct TArray<struct FItemQuantityData> Credits; // 0x128(0x10)
	struct TArray<struct FItemQuantityData> Grants; // 0x138(0x10)
	char UnknownData_148[0x280]; // 0x148(0x280)
};

// ScriptStruct Madness.ItemQuantityData
// Size: 0x28 (Inherited: 0x00)
struct FItemQuantityData {
	struct FString ItemName; // 0x00(0x10)
	struct FString Type; // 0x10(0x10)
	int32_t Count; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Madness.ItemOfferDataPreconditions
// Size: 0x40 (Inherited: 0x00)
struct FItemOfferDataPreconditions {
	struct FItemOfferDataPreconditionsItemTypePrecondition Type; // 0x00(0x30)
	struct TArray<struct FItemQuantityData> Quantities; // 0x30(0x10)
};

// ScriptStruct Madness.ItemOfferDataPreconditionsItemTypePrecondition
// Size: 0x30 (Inherited: 0x00)
struct FItemOfferDataPreconditionsItemTypePrecondition {
	struct TArray<struct FName> AnyOf; // 0x00(0x10)
	struct TArray<struct FName> AllOf; // 0x10(0x10)
	struct TArray<struct FName> NoneOf; // 0x20(0x10)
};

// ScriptStruct Madness.ScheduleInfo
// Size: 0x38 (Inherited: 0x00)
struct FScheduleInfo {
	struct FString Name; // 0x00(0x10)
	struct FDateTime From; // 0x10(0x08)
	struct FDateTime To; // 0x18(0x08)
	struct FString Rrule; // 0x20(0x10)
	int32_t AnnounceSeconds; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.MadWeaponsHudData
// Size: 0x28 (Inherited: 0x00)
struct FMadWeaponsHudData {
	struct AMadWeaponEntry* WeaponSide; // 0x00(0x08)
	struct AMadWeaponEntry* Weapon1; // 0x08(0x08)
	struct AMadWeaponEntry* Weapon2; // 0x10(0x08)
	enum class EMadItemSlot ActiveWeaponSlot; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	int32_t ClipAmmo; // 0x1c(0x04)
	int32_t SpareAmmo; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Madness.MoveActionStartData
// Size: 0x10 (Inherited: 0x00)
struct FMoveActionStartData {
	float MoveAngle; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FWeakObjectPtr<struct UObject> OptionalActionObject; // 0x08(0x08)
};

// ScriptStruct Madness.CoverPickInfo
// Size: 0x18 (Inherited: 0x00)
struct FCoverPickInfo {
	struct FWeakObjectPtr<struct ACover> Cover; // 0x00(0x08)
	int32_t SlotIdx; // 0x08(0x04)
	struct FVector_NetQuantize EnterLocation; // 0x0c(0x0c)
};

// ScriptStruct Madness.CoverSearchParams
// Size: 0x40 (Inherited: 0x00)
struct FCoverSearchParams {
	struct FVector OriginLocation; // 0x00(0x0c)
	struct FVector CollisionTraceOriginLocation; // 0x0c(0x0c)
	float DetectionRadius; // 0x18(0x04)
	struct FVector SearchDirection; // 0x1c(0x0c)
	float SearchDirectionDot; // 0x28(0x04)
	char UnknownData_2C_0 : 7; // 0x2c(0x01)
	bool bSideSearch : 1; // 0x2c(0x01)
	char UnknownData_2D_0 : 7; // 0x2d(0x01)
	bool bSearchAroundCorner : 1; // 0x2d(0x01)
	char UnknownData_2E[0x2]; // 0x2e(0x02)
	struct FVector SearchPawnDirection; // 0x30(0x0c)
	char UnknownData_3C_0 : 7; // 0x3c(0x01)
	bool bWeighDistanceFromCrosshair : 1; // 0x3c(0x01)
	char UnknownData_3D_0 : 7; // 0x3d(0x01)
	bool bSearchingFromCrosshair : 1; // 0x3d(0x01)
	enum class ECoverUseReason CoverUseReason; // 0x3e(0x01)
	char UnknownData_3F[0x1]; // 0x3f(0x01)
};

// ScriptStruct Madness.CharacterCustomiationData
// Size: 0x0b (Inherited: 0x00)
struct FCharacterCustomiationData {
	enum class None HeadIndex; // 0x00(0x01)
	enum class None EyeColorIndex; // 0x01(0x01)
	enum class None HairIndex; // 0x02(0x01)
	enum class None BeardIndex; // 0x03(0x01)
	enum class None HairColorIndex; // 0x04(0x01)
	enum class None SkinColorIndex; // 0x05(0x01)
	enum class None BeardColorIndex; // 0x06(0x01)
	enum class None ScarIndex; // 0x07(0x01)
	enum class None ScarColorIndex; // 0x08(0x01)
	enum class None MakeupIndex; // 0x09(0x01)
	enum class None PiercingIndex; // 0x0a(0x01)
};

// ScriptStruct Madness.MadEmoteSaveData
// Size: 0x30 (Inherited: 0x00)
struct FMadEmoteSaveData {
	struct TArray<struct FString> OwnedEmotes; // 0x00(0x10)
	struct TArray<struct FString> FavouriteEmotes; // 0x10(0x10)
	struct FString QuickEmote; // 0x20(0x10)
};

// ScriptStruct Madness.MadActiveSkill
// Size: 0x18 (Inherited: 0x00)
struct FMadActiveSkill {
	struct UMadSkillData* SkillData; // 0x00(0x08)
	struct FGameplayAbilitySpecHandle AbilityHandle; // 0x08(0x04)
	int32_t AbilityRandomSeed; // 0x0c(0x04)
	enum class EMadSkillNotificationType CurrentNotification; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Madness.CoverEnterInfo
// Size: 0x18 (Inherited: 0x00)
struct FCoverEnterInfo {
	enum class ECoverEnterType EnterType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float EnterAngle; // 0x04(0x04)
	struct FVector_NetQuantize EnterLocation; // 0x08(0x0c)
	enum class ECoverToCoverMoveType CoverToCoverMoveType; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Madness.CoverLeaveInfo
// Size: 0x08 (Inherited: 0x00)
struct FCoverLeaveInfo {
	enum class ECoverLeaveType LeaveType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float LeaveAngle; // 0x04(0x04)
};

// ScriptStruct Madness.TriggerVolumesEventQueueData
// Size: 0xa0 (Inherited: 0x00)
struct FTriggerVolumesEventQueueData {
	char UnknownData_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Madness.MadPassiveSkill
// Size: 0x18 (Inherited: 0x00)
struct FMadPassiveSkill {
	struct UMadSkillData* SkillData; // 0x00(0x08)
	float SkillLevel; // 0x08(0x04)
	struct FActiveGameplayEffectHandle EffectHandle; // 0x0c(0x08)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Madness.MadnessMontageCameraOverrideData
// Size: 0x40 (Inherited: 0x00)
struct FMadnessMontageCameraOverrideData {
	char UnknownData_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Madness.OccupiedCoverInfo
// Size: 0x10 (Inherited: 0x00)
struct FOccupiedCoverInfo {
	struct FWeakObjectPtr<struct ACover> Cover; // 0x00(0x08)
	int32_t SlotIdx; // 0x08(0x04)
	enum class ECoverMovementDirection CoverFacing; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Madness.CoverMarkerCoverPeek
// Size: 0x38 (Inherited: 0x00)
struct FCoverMarkerCoverPeek {
	struct FVector PlayerLocation; // 0x00(0x0c)
	struct FVector UnderCrosshairLocation; // 0x0c(0x0c)
	struct FCoverPickInfo PickInfo; // 0x18(0x18)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bNeedCoverMark : 1; // 0x30(0x01)
	char UnknownData_31_0 : 7; // 0x31(0x01)
	bool bPrevNeedCoverMark : 1; // 0x31(0x01)
	char UnknownData_32_0 : 7; // 0x32(0x01)
	bool bRequiresUpdate : 1; // 0x32(0x01)
	char UnknownData_33[0x5]; // 0x33(0x05)
};

// ScriptStruct Madness.LayeredBlendSetup
// Size: 0x18 (Inherited: 0x00)
struct FLayeredBlendSetup {
	struct FInputBlendPose BlendSetup; // 0x00(0x10)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool bActive : 1; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Madness.MadAnimProxyOverrideData
// Size: 0x03 (Inherited: 0x00)
struct FMadAnimProxyOverrideData {
	char UnknownData_0[0x1]; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bFiring : 1; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bTargeting : 1; // 0x02(0x01)
};

// ScriptStruct Madness.MadCombatNumber
// Size: 0x28 (Inherited: 0x00)
struct FMadCombatNumber {
	struct ABaseCharacter* Victim; // 0x00(0x08)
	struct UDamageType* DamageType; // 0x08(0x08)
	int32_t Value; // 0x10(0x04)
	int32_t Combo; // 0x14(0x04)
	struct FVector WorldPosition; // 0x18(0x0c)
	enum class EMadCombatNumberType Type; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Madness.MadSkillLevelData
// Size: 0x18 (Inherited: 0x00)
struct FMadSkillLevelData {
	struct UMadSkillData* Skill; // 0x00(0x08)
	struct FMadSkillProgressKey Key; // 0x08(0x08)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool IsNewSkill : 1; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Madness.MadSkillProgressKey
// Size: 0x08 (Inherited: 0x00)
struct FMadSkillProgressKey {
	enum class EMadnessSkillPath Path; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	uint32_t Index; // 0x04(0x04)
};

// ScriptStruct Madness.360AttackBandInfo
// Size: 0x18 (Inherited: 0x00)
struct F360AttackBandInfo {
	float MinDistance; // 0x00(0x04)
	float MaxDistance; // 0x04(0x04)
	float MinProjectileDistance; // 0x08(0x04)
	float MaxProjectileDistance; // 0x0c(0x04)
	struct AProjectile* Projectile; // 0x10(0x08)
};

// ScriptStruct Madness.PAAnomalySlash_MontageSection
// Size: 0x18 (Inherited: 0x00)
struct FPAAnomalySlash_MontageSection {
	struct FString SectionName; // 0x00(0x10)
	float Angle; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Madness.EntitlementData
// Size: 0x28 (Inherited: 0x00)
struct FEntitlementData {
	enum class EStoreTypeData StoreType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FString Name; // 0x08(0x10)
	struct FString Type; // 0x18(0x10)
};

// ScriptStruct Madness.EventParticipationResponseData
// Size: 0xf0 (Inherited: 0x00)
struct FEventParticipationResponseData {
	struct FEventParticipationData Participation; // 0x00(0xc0)
	enum class EEventParticipationResultData Result; // 0xc0(0x01)
	char UnknownData_C1[0x3]; // 0xc1(0x03)
	int32_t ResultID; // 0xc4(0x04)
	struct FEventParticipationStatsData Stats; // 0xc8(0x08)
	struct FOSDKObjectIdData AttachmentId; // 0xd0(0x20)
};

// ScriptStruct Madness.OSDKObjectIdData
// Size: 0x20 (Inherited: 0x00)
struct FOSDKObjectIdData {
	struct FString OriginID; // 0x00(0x10)
	int32_t TimeInSeconds; // 0x10(0x04)
	char UnknownData_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct Madness.EventParticipationStatsData
// Size: 0x08 (Inherited: 0x00)
struct FEventParticipationStatsData {
	int32_t Attempted; // 0x00(0x04)
	int32_t Succeeded; // 0x04(0x04)
};

// ScriptStruct Madness.EventParticipationData
// Size: 0xc0 (Inherited: 0x00)
struct FEventParticipationData {
	struct FOSDKObjectIdData ID; // 0x00(0x20)
	struct FString Pid; // 0x20(0x10)
	struct FString EventName; // 0x30(0x10)
	struct FDateTime Occurrence; // 0x40(0x08)
	float Score; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FDateTime Attempt; // 0x50(0x08)
	enum class EEventParticipationStatusData Status; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	int32_t StatusID; // 0x5c(0x04)
	struct FDateTime Started; // 0x60(0x08)
	struct FDateTime Finished; // 0x68(0x08)
	struct FAttributeMap Attributes; // 0x70(0x50)
};

// ScriptStruct Madness.BackendEventData
// Size: 0x498 (Inherited: 0x00)
struct FBackendEventData {
	struct FString Name; // 0x00(0x10)
	int32_t Rank; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct FName> Labels; // 0x18(0x10)
	struct FScheduleInfo Schedule; // 0x28(0x38)
	int32_t AnnounceSeconds; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
	struct FLocalizedResourceData Title; // 0x68(0x30)
	struct FLocalizedResourceData ShortDescription; // 0x98(0x30)
	struct FLocalizedResourceData LongDescription; // 0xc8(0x30)
	struct FAttributeMap AttributeMap; // 0xf8(0x50)
	int32_t MaxAttempts; // 0x148(0x04)
	int32_t MaxSucceeds; // 0x14c(0x04)
	struct FString ScriptName; // 0x150(0x10)
	struct FEventDataUserData User; // 0x160(0x08)
	char UnknownData_168[0x330]; // 0x168(0x330)
};

// ScriptStruct Madness.EventDataUserData
// Size: 0x08 (Inherited: 0x00)
struct FEventDataUserData {
	int32_t Attempted; // 0x00(0x04)
	int32_t Succeeded; // 0x04(0x04)
};

// ScriptStruct Madness.LocalizedResourceData
// Size: 0x30 (Inherited: 0x00)
struct FLocalizedResourceData {
	struct FString Name; // 0x00(0x10)
	struct FString Locale; // 0x10(0x10)
	struct FString Text; // 0x20(0x10)
};

// ScriptStruct Madness.InfoCastData
// Size: 0xd8 (Inherited: 0x00)
struct FInfoCastData {
	struct FName Name; // 0x00(0x08)
	float Rank; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> Labels; // 0x10(0x10)
	struct FScheduleInfo Schedule; // 0x20(0x38)
	struct FLocalizedResourceData Message; // 0x58(0x30)
	struct FAttributeMap AttributeMap; // 0x88(0x50)
};

// ScriptStruct Madness.OnlineFriendData
// Size: 0x18 (Inherited: 0x00)
struct FOnlineFriendData {
	struct FString DisplayName; // 0x00(0x10)
	struct FName Presence; // 0x10(0x08)
};

// ScriptStruct Madness.MadBannerFlagModel
// Size: 0x24 (Inherited: 0x00)
struct FMadBannerFlagModel {
	int32_t PoleMeshId; // 0x00(0x04)
	int32_t ShapeId; // 0x04(0x04)
	int32_t DamageStateId; // 0x08(0x04)
	int32_t PatternId; // 0x0c(0x04)
	int32_t SigilId; // 0x10(0x04)
	int32_t MainColorId; // 0x14(0x04)
	int32_t BorderColorId; // 0x18(0x04)
	int32_t SigilColorId; // 0x1c(0x04)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bShouldBeEnabledOnTruck : 1; // 0x20(0x01)
	char UnknownData_21_0 : 7; // 0x21(0x01)
	bool bShouldUseDefaultSaveInstead : 1; // 0x21(0x01)
	char UnknownData_22[0x2]; // 0x22(0x02)
};

// ScriptStruct Madness.TierCompleteData
// Size: 0x38 (Inherited: 0x00)
struct FTierCompleteData {
	struct FBaseTier Tier; // 0x00(0x30)
	int32_t TierIdx; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.BaseTier
// Size: 0x30 (Inherited: 0x00)
struct FBaseTier {
	struct TArray<struct FName> Rewards; // 0x00(0x10)
	int32_t APP; // 0x10(0x04)
	char UnknownData_14_0 : 7; // 0x14(0x01)
	bool bIsAchievement : 1; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	struct FName AchievementID; // 0x18(0x08)
	char UnknownData_20[0x4]; // 0x20(0x04)
	float MinAchProgressDelta; // 0x24(0x04)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bIsRewardClaimed : 1; // 0x28(0x01)
	char UnknownData_29_0 : 7; // 0x29(0x01)
	bool bIsRewardSeen : 1; // 0x29(0x01)
	char UnknownData_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Madness.MadAnomalyCrystal
// Size: 0x28 (Inherited: 0x00)
struct FMadAnomalyCrystal {
	struct FName AttributeName; // 0x00(0x08)
	struct FString AttributeFullName; // 0x08(0x10)
	int32_t Quantity; // 0x18(0x04)
	enum class EMadAttributeDomain Domain; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
	float CrystalChance; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Madness.MadKillfeedEntry
// Size: 0x20 (Inherited: 0x00)
struct FMadKillfeedEntry {
	struct AMadBaseCharacter* Victim; // 0x00(0x08)
	struct AMadBaseCharacter* Killer; // 0x08(0x08)
	struct UDamageType* DamageType; // 0x10(0x08)
	int32_t Combo; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Madness.MadArenaRetreatUIModel
// Size: 0x18 (Inherited: 0x00)
struct FMadArenaRetreatUIModel {
	struct TArray<struct FString> PlayersNetIds; // 0x00(0x10)
	int32_t TimeLeftMs; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Madness.AssetCoolDown
// Size: 0x18 (Inherited: 0x00)
struct FAssetCoolDown {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Madness.TargetChain
// Size: 0x10 (Inherited: 0x00)
struct FTargetChain {
	struct AMadBaseCharacter* character; // 0x00(0x08)
	struct UParticleSystemComponent* BeamParticle; // 0x08(0x08)
};

// ScriptStruct Madness.CombatNumberAnimData
// Size: 0xd0 (Inherited: 0x00)
struct FCombatNumberAnimData {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bEnabled : 1; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FSlateFontInfo Font; // 0x08(0x50)
	struct FText MessgeFromat; // 0x58(0x18)
	struct FSlateColor Color; // 0x70(0x28)
	float LifeSpan; // 0x98(0x04)
	char UnknownData_9C_0 : 7; // 0x9c(0x01)
	bool bProjectWorldLocation : 1; // 0x9c(0x01)
	char UnknownData_9D[0x3]; // 0x9d(0x03)
	float SpreadDegrees; // 0xa0(0x04)
	struct FVector2D OffsetFromCrosshair; // 0xa4(0x08)
	float BaseOffsetFromHitLocation; // 0xac(0x04)
	float BlowFactor; // 0xb0(0x04)
	float BlowRadious; // 0xb4(0x04)
	float DurationDecreasePerNewCombatNumber; // 0xb8(0x04)
	char UnknownData_BC[0x4]; // 0xbc(0x04)
	struct UCurveFloat* Alpha; // 0xc0(0x08)
	struct UCurveFloat* Scale; // 0xc8(0x08)
};

// ScriptStruct Madness.MadAbilityGlobals_Mod
// Size: 0x10 (Inherited: 0x00)
struct FMadAbilityGlobals_Mod {
	struct UCurveTable* ModsValuesCT; // 0x00(0x08)
	struct UDataTable* ModAssetsDT; // 0x08(0x08)
};

// ScriptStruct Madness.MadAttributeDefinition
// Size: 0x20 (Inherited: 0x08)
struct FMadAttributeDefinition : FTableRowBase {
	struct FText AttributeDisplay; // 0x08(0x18)
};

// ScriptStruct Madness.MadModAssets
// Size: 0x88 (Inherited: 0x08)
struct FMadModAssets : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct UMadSkillData* SkillData; // 0x38(0x08)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x40(0x28)
	enum class EMadSkillTier Tier; // 0x68(0x01)
	char UnknownData_69_0 : 7; // 0x69(0x01)
	bool ModAssault : 1; // 0x69(0x01)
	char UnknownData_6A_0 : 7; // 0x6a(0x01)
	bool ModAssassin : 1; // 0x6a(0x01)
	char UnknownData_6B_0 : 7; // 0x6b(0x01)
	bool ModAnomalyst : 1; // 0x6b(0x01)
	char UnknownData_6C_0 : 7; // 0x6c(0x01)
	bool ModMarksman : 1; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
	struct FNameWrapper UnlockedWithSkillID; // 0x70(0x10)
	enum class EMadArmorPart Armor; // 0x80(0x01)
	char UnknownData_81[0x3]; // 0x81(0x03)
	float InternalCooldown; // 0x84(0x04)
};

// ScriptStruct Madness.MadAbilityDefinition
// Size: 0x88 (Inherited: 0x08)
struct FMadAbilityDefinition : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TArray<struct FText> Keywords; // 0x38(0x10)
	struct FText Note; // 0x48(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x60(0x28)
};

// ScriptStruct Madness.MadHeroTreeUpgradeDefinition
// Size: 0x48 (Inherited: 0x08)
struct FMadHeroTreeUpgradeDefinition : FTableRowBase {
	struct FText FullName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TArray<struct FText> Keywords; // 0x38(0x10)
};

// ScriptStruct Madness.AbilitySetWithRandomCount
// Size: 0x30 (Inherited: 0x00)
struct FAbilitySetWithRandomCount {
	int32_t Count; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<SoftClassProperty> Abilities; // 0x08(0x10)
	char UnknownData_18[0x18]; // 0x18(0x18)
};

// ScriptStruct Madness.MadAbilitySetAplicationHandle
// Size: 0x10 (Inherited: 0x00)
struct FMadAbilitySetAplicationHandle {
	struct TArray<struct FGameplayAbilitySpecHandle> AbilityHandles; // 0x00(0x10)
};

// ScriptStruct Madness.MadAI_Reaction
// Size: 0x28 (Inherited: 0x00)
struct FMadAI_Reaction {
	struct FMontageAssetSelector Montage; // 0x00(0x20)
	int32_t AngleOfReaction; // 0x20(0x04)
	float RotationBlendInTime; // 0x24(0x04)
};

// ScriptStruct Madness.MadEnochAccoladeUIWrapper_DEPRECATED
// Size: 0x40 (Inherited: 0x00)
struct FMadEnochAccoladeUIWrapper_DEPRECATED {
	struct FText AccoladeName; // 0x00(0x18)
	struct FText AccoladeDescription; // 0x18(0x18)
	struct FString AccoladeImagePath; // 0x30(0x10)
};

// ScriptStruct Madness.MadAccoladeSummaryUIData
// Size: 0x08 (Inherited: 0x00)
struct FMadAccoladeSummaryUIData {
	int32_t Count; // 0x00(0x04)
	int32_t Completed; // 0x04(0x04)
};

// ScriptStruct Madness.MadAccoladeCategoryUIData
// Size: 0x40 (Inherited: 0x00)
struct FMadAccoladeCategoryUIData {
	struct FName Image; // 0x00(0x08)
	struct FText Title; // 0x08(0x18)
	int32_t CurrentPoints; // 0x20(0x04)
	int32_t MaxPoints; // 0x24(0x04)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bSeen : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct TArray<struct FMadAccoladeUIData> Accolades; // 0x30(0x10)
};

// ScriptStruct Madness.MadAccoladeUIData
// Size: 0x50 (Inherited: 0x00)
struct FMadAccoladeUIData {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	int32_t CurrentProgress; // 0x30(0x04)
	struct FName Guid; // 0x34(0x08)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FMadAccoladeTierUIData> TiersList; // 0x40(0x10)
};

// ScriptStruct Madness.MadAccoladeTierUIData
// Size: 0x20 (Inherited: 0x00)
struct FMadAccoladeTierUIData {
	int32_t Points; // 0x00(0x04)
	int32_t Target; // 0x04(0x04)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bClaimed : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bSeen : 1; // 0x09(0x01)
	char UnknownData_A_0 : 7; // 0x0a(0x01)
	bool bCompleted : 1; // 0x0a(0x01)
	char UnknownData_B[0x5]; // 0x0b(0x05)
	struct TArray<struct FMadAccoladeRewardUIData> Rewards; // 0x10(0x10)
};

// ScriptStruct Madness.MadAccoladeRewardUIData
// Size: 0x60 (Inherited: 0x00)
struct FMadAccoladeRewardUIData {
	struct FName Icon; // 0x00(0x08)
	struct FText Title; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	enum class EMadItemRarity Rarity; // 0x38(0x01)
	enum class EMadAccoladeRewardType RewardType; // 0x39(0x01)
	char UnknownData_3A[0x2]; // 0x3a(0x02)
	struct FName CustomizationSectionID; // 0x3c(0x08)
	struct FName CustomizationTabID; // 0x44(0x08)
	struct FName CustomizationCategoryID; // 0x4c(0x08)
	struct FName CustomizationItemID; // 0x54(0x08)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Madness.MadAccoladeLevelUIData
// Size: 0x20 (Inherited: 0x00)
struct FMadAccoladeLevelUIData {
	int32_t Level; // 0x00(0x04)
	int32_t Target; // 0x04(0x04)
	struct TArray<struct FMadAccoladeRewardUIData> Rewards; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bClaimed : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Madness.CrawlerFailInfo
// Size: 0x10 (Inherited: 0x00)
struct FCrawlerFailInfo {
	float FailedTime; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct AActor* FailedActor; // 0x08(0x08)
};

// ScriptStruct Madness.GuardianChangeStanceAvoidance
// Size: 0x0c (Inherited: 0x00)
struct FGuardianChangeStanceAvoidance {
	float MaxHealthPercentThreshold; // 0x00(0x04)
	float MinTargetHealthPercent; // 0x04(0x04)
	float MinDamageReceivedPercentInAWhilePerEnemy; // 0x08(0x04)
};

// ScriptStruct Madness.GuardianChangeStanceDefensive
// Size: 0x10 (Inherited: 0x00)
struct FGuardianChangeStanceDefensive {
	float MinTargetHealthPercent; // 0x00(0x04)
	float LowHealthThreshold; // 0x04(0x04)
	float MinDamageReceivedPercentInAWhile; // 0x08(0x04)
	float MaxHealthForDamageCounting; // 0x0c(0x04)
};

// ScriptStruct Madness.MadPADamageWindow
// Size: 0x28 (Inherited: 0x20)
struct FMadPADamageWindow : FAIDamageWindow {
	struct ABaseCharacter* DamagingActor; // 0x20(0x08)
};

// ScriptStruct Madness.WaveAndTargetData
// Size: 0x20 (Inherited: 0x00)
struct FWaveAndTargetData {
	struct AMadAI_Bailey_StoneWaveProjectile* WaveActor; // 0x00(0x08)
	struct AActor* TargetActor; // 0x08(0x08)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Madness.PhaseShiftQueryParams
// Size: 0x0c (Inherited: 0x00)
struct FPhaseShiftQueryParams {
	float MinDistToTarget; // 0x00(0x04)
	float MaxDistToTarget; // 0x04(0x04)
	float MinDistToQuerier; // 0x08(0x04)
};

// ScriptStruct Madness.CastedBaseTickFunction
// Size: 0xf8 (Inherited: 0xf0)
struct FCastedBaseTickFunction : FTickFunction {
	char UnknownData_F0[0x8]; // 0xf0(0x08)
};

// ScriptStruct Madness.BarrageProjectileAndDestinationData
// Size: 0x18 (Inherited: 0x00)
struct FBarrageProjectileAndDestinationData {
	struct AScrapBarrage_Projectile* Projectile; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Madness.LurkerChargeTickFunction
// Size: 0xf8 (Inherited: 0xf0)
struct FLurkerChargeTickFunction : FTickFunction {
	char UnknownData_F0[0x8]; // 0xf0(0x08)
};

// ScriptStruct Madness.SciathanFlyByTargetTickFunction
// Size: 0xf8 (Inherited: 0xf0)
struct FSciathanFlyByTargetTickFunction : FTickFunction {
	char UnknownData_F0[0x8]; // 0xf0(0x08)
};

// ScriptStruct Madness.TrajectoryCorrectionData
// Size: 0x30 (Inherited: 0x00)
struct FTrajectoryCorrectionData {
	float MaxAngleDeviationDegrees; // 0x00(0x04)
	float LowArcMultiplier; // 0x04(0x04)
	struct FVector2D ArcDeviation; // 0x08(0x08)
	char UnknownData_10[0x20]; // 0x10(0x20)
};

// ScriptStruct Madness.MadAI_SingleMeleeAttack
// Size: 0x58 (Inherited: 0x00)
struct FMadAI_SingleMeleeAttack {
	struct FMontageAssetSelector Montage; // 0x00(0x20)
	int32_t AngleOfAttack; // 0x20(0x04)
	int32_t AngleRangeOfAttack; // 0x24(0x04)
	int32_t MinDistanceOfAttack; // 0x28(0x04)
	int32_t MaxDistanceOfAttack; // 0x2c(0x04)
	int32_t OverrideMaxPredictionDistance; // 0x30(0x04)
	float OverridePredictionDuration; // 0x34(0x04)
	float RandomSelectionWeight; // 0x38(0x04)
	float GlobalCoolDownDuration; // 0x3c(0x04)
	float LocalCoolDownDuration; // 0x40(0x04)
	char UnknownData_44_0 : 7; // 0x44(0x01)
	bool bCheckDistanceOnNavmesh : 1; // 0x44(0x01)
	char UnknownData_45_0 : 7; // 0x45(0x01)
	bool bAttackDisabled : 1; // 0x45(0x01)
	char UnknownData_46[0x2]; // 0x46(0x02)
	struct FVector CachedAnimTranslation; // 0x48(0x0c)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Madness.MadAI_SFThrowEntry
// Size: 0x88 (Inherited: 0x00)
struct FMadAI_SFThrowEntry {
	struct FMontageAssetSelector Montage; // 0x00(0x20)
	struct AProjectile* Projectile; // 0x20(0x08)
	struct FString NotifyName; // 0x28(0x10)
	struct TArray<struct FString> ExtraNotifyNames; // 0x38(0x10)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bOverrideDistance : 1; // 0x48(0x01)
	char UnknownData_49_0 : 7; // 0x49(0x01)
	bool bOverrideDirection : 1; // 0x49(0x01)
	char UnknownData_4A_0 : 7; // 0x4a(0x01)
	bool bAttackDisable : 1; // 0x4a(0x01)
	char UnknownData_4B[0x1]; // 0x4b(0x01)
	float GroundSpeed; // 0x4c(0x04)
	float MaxVertAngle; // 0x50(0x04)
	float MinVertAngle; // 0x54(0x04)
	float DeltaHorAngle; // 0x58(0x04)
	float MinDistance; // 0x5c(0x04)
	float MaxDistance; // 0x60(0x04)
	float MaxPredictionDistance; // 0x64(0x04)
	float ExtraHeight; // 0x68(0x04)
	char UnknownData_6C_0 : 7; // 0x6c(0x01)
	bool bExtraHeightInMiddle : 1; // 0x6c(0x01)
	char UnknownData_6D_0 : 7; // 0x6d(0x01)
	bool bSetLifeTime : 1; // 0x6d(0x01)
	char UnknownData_6E_0 : 7; // 0x6e(0x01)
	bool bForceUseBone2DDirection : 1; // 0x6e(0x01)
	char UnknownData_6F_0 : 7; // 0x6f(0x01)
	bool bAimAtGround : 1; // 0x6f(0x01)
	float ForceUseBoneMaxAngleDifference; // 0x70(0x04)
	float Distance; // 0x74(0x04)
	float ExtraDistance; // 0x78(0x04)
	float ExtraDistanceStep; // 0x7c(0x04)
	float Direction; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Madness.PAAnomalyEruption_OverlappingActors
// Size: 0x10 (Inherited: 0x00)
struct FPAAnomalyEruption_OverlappingActors {
	struct AActor* Actor; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Madness.MadAI_SingleDodge
// Size: 0x28 (Inherited: 0x00)
struct FMadAI_SingleDodge {
	struct FMontageAssetSelector Montage; // 0x00(0x20)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bDodgeDisabled : 1; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Madness.MadAI_SequentialThrowEntry
// Size: 0xb0 (Inherited: 0x00)
struct FMadAI_SequentialThrowEntry {
	struct FMontageAssetSelector Montage; // 0x00(0x20)
	struct AProjectile* Projectile; // 0x20(0x08)
	struct FName BoneName; // 0x28(0x08)
	float FireTime; // 0x30(0x04)
	struct FVector LocalFireLocation; // 0x34(0x0c)
	struct FTransform LocalRootMotionTransform; // 0x40(0x30)
	struct FName ThrowNotifyName; // 0x70(0x08)
	struct FName CheckThrowNotifyName; // 0x78(0x08)
	float ProjectileGroundSpeed; // 0x80(0x04)
	float MaxVertAngle; // 0x84(0x04)
	float MinVertAngle; // 0x88(0x04)
	float DeltaHorAngle; // 0x8c(0x04)
	float MinDistance; // 0x90(0x04)
	float MaxDistance; // 0x94(0x04)
	float MaxPredictionDistance; // 0x98(0x04)
	float ExtraHeight; // 0x9c(0x04)
	char UnknownData_A0_0 : 7; // 0xa0(0x01)
	bool bExtraHeightInMiddle : 1; // 0xa0(0x01)
	char UnknownData_A1_0 : 7; // 0xa1(0x01)
	bool bSetLifeTime : 1; // 0xa1(0x01)
	char UnknownData_A2_0 : 7; // 0xa2(0x01)
	bool bForceUseBone2DDirection : 1; // 0xa2(0x01)
	char UnknownData_A3[0x1]; // 0xa3(0x01)
	float ForceUseBoneMaxAngleDifference; // 0xa4(0x04)
	char UnknownData_A8_0 : 7; // 0xa8(0x01)
	bool bIsHeavyVariant : 1; // 0xa8(0x01)
	char UnknownData_A9_0 : 7; // 0xa9(0x01)
	bool bAttackDisable : 1; // 0xa9(0x01)
	char UnknownData_AA[0x6]; // 0xaa(0x06)
};

// ScriptStruct Madness.MadAIMeleeAttackRuntime
// Size: 0x1b0 (Inherited: 0x00)
struct FMadAIMeleeAttackRuntime {
	struct AActor* Owner; // 0x00(0x08)
	struct TArray<struct FMadAIMeleeAttackData> AttacksData; // 0x08(0x10)
	char UnknownData_18[0x198]; // 0x18(0x198)
};

// ScriptStruct Madness.MadAIMeleeAttackData
// Size: 0x20 (Inherited: 0x00)
struct FMadAIMeleeAttackData {
	struct UMadDataAsset_SMMeleeAttacks* DataAsset; // 0x00(0x08)
	struct AActor* Target; // 0x08(0x08)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Madness.MadAINextMeleeAttack
// Size: 0x08 (Inherited: 0x00)
struct FMadAINextMeleeAttack {
	struct UMadAIMeleeAttack* Object; // 0x00(0x08)
};

// ScriptStruct Madness.AnimInstanceProxy_AIBase
// Size: 0x6e0 (Inherited: 0x6e0)
struct FAnimInstanceProxy_AIBase : FAnimInstanceProxy {
};

// ScriptStruct Madness.MadAnimNode_YagakChainAttach
// Size: 0x100 (Inherited: 0xd0)
struct FMadAnimNode_YagakChainAttach : FAnimNode_SkeletalControlBase {
	struct FBoneReference ChainAttachingBone; // 0xd0(0x10)
	struct FBoneReference CharacterAttachmentBone; // 0xe0(0x10)
	struct FVector AttachingChainOffsetCS; // 0xf0(0x0c)
	enum class None ChainsWithFullDisplacement; // 0xfc(0x01)
	enum class None ChainBoneDepth; // 0xfd(0x01)
	char UnknownData_FE[0x2]; // 0xfe(0x02)
};

// ScriptStruct Madness.MadAnimNode_YagakChainSnap
// Size: 0x110 (Inherited: 0xd0)
struct FMadAnimNode_YagakChainSnap : FAnimNode_SkeletalControlBase {
	struct FBoneReference ChainTipBone; // 0xd0(0x10)
	enum class None ChainBoneDepth; // 0xe0(0x01)
	char UnknownData_E1[0x3]; // 0xe1(0x03)
	struct FVector TargetLocationWS; // 0xe4(0x0c)
	struct FVector UpVector; // 0xf0(0x0c)
	float YagakHeight; // 0xfc(0x04)
	float PlayerHitHookOffset; // 0x100(0x04)
	float GroundHitHookOffset; // 0x104(0x04)
	char UnknownData_108_0 : 7; // 0x108(0x01)
	bool bIsGroundHit : 1; // 0x108(0x01)
	char UnknownData_109[0x7]; // 0x109(0x07)
};

// ScriptStruct Madness.MadAnimNode_YagakChainStretch
// Size: 0x120 (Inherited: 0xd0)
struct FMadAnimNode_YagakChainStretch : FAnimNode_SkeletalControlBase {
	struct FBoneReference ChainTipBone; // 0xd0(0x10)
	struct FBoneReference DistanceBone; // 0xe0(0x10)
	struct FVector TargetLocation; // 0xf0(0x0c)
	float ClampStretchMax; // 0xfc(0x04)
	float ClampStretchMin; // 0x100(0x04)
	enum class None ChainBoneDepth; // 0x104(0x01)
	char UnknownData_105[0x3]; // 0x105(0x03)
	struct FVector DirectionToCastRay; // 0x108(0x0c)
	float HookRayLength; // 0x114(0x04)
	float HookOffset; // 0x118(0x04)
	char UnknownData_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct Madness.MadAnimNotify_StaticMeshDatas
// Size: 0x10 (Inherited: 0x00)
struct FMadAnimNotify_StaticMeshDatas {
	struct TArray<struct FMadAnimNotify_StaticMeshData> Datas; // 0x00(0x10)
};

// ScriptStruct Madness.MadAnimNotify_StaticMeshData
// Size: 0x10 (Inherited: 0x00)
struct FMadAnimNotify_StaticMeshData {
	struct UStaticMeshComponent* Mesh; // 0x00(0x08)
	struct UMadMeshShaderEffect* ShaderEffect; // 0x08(0x08)
};

// ScriptStruct Madness.AreaNodeData
// Size: 0xf0 (Inherited: 0x00)
struct FAreaNodeData {
	struct FGameplayTag ID; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool bIsHUB : 1; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	struct FVector2D ScreenPosition; // 0x3c(0x08)
	enum class ETitlePosition TitlePosition; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	struct TSoftObjectPtr<struct UTexture2D> ImageTexture; // 0x48(0x28)
	struct TArray<struct FPointOfInterestData> PointsOfInterest; // 0x70(0x10)
	struct TArray<struct FGameplayTag> NodeConnections; // 0x80(0x10)
	struct FFactExpression UnlockedExpression; // 0x90(0x18)
	struct FString IconPath; // 0xa8(0x10)
	struct TArray<struct FName> Connections; // 0xb8(0x10)
	enum class EFlagState FlagState; // 0xc8(0x01)
	char UnknownData_C9[0x3]; // 0xc9(0x03)
	struct FName FlagName; // 0xcc(0x08)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
	struct APlayerController* Controller; // 0xd8(0x08)
	char UnknownData_E0[0x8]; // 0xe0(0x08)
	char UnknownData_E8_0 : 7; // 0xe8(0x01)
	bool bVisited : 1; // 0xe8(0x01)
	char UnknownData_E9_0 : 7; // 0xe9(0x01)
	bool bIsCurrent : 1; // 0xe9(0x01)
	char UnknownData_EA_0 : 7; // 0xea(0x01)
	bool bIsUnlocked : 1; // 0xea(0x01)
	char UnknownData_EB[0x5]; // 0xeb(0x05)
};

// ScriptStruct Madness.PointOfInterestData
// Size: 0x80 (Inherited: 0x00)
struct FPointOfInterestData {
	struct FGameplayTag ID; // 0x00(0x08)
	struct FFactExpression HUDVisibilityExpression; // 0x08(0x18)
	struct FText Name; // 0x20(0x18)
	struct TSoftObjectPtr<struct UTexture2D> ImageTexture; // 0x38(0x28)
	struct FString IconPath; // 0x60(0x10)
	char UnknownData_70_0 : 7; // 0x70(0x01)
	bool bIsVisibleOnHUD : 1; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct APlayerController* Controller; // 0x78(0x08)
};

// ScriptStruct Madness.MadArmorLoadDelegateData
// Size: 0x48 (Inherited: 0x00)
struct FMadArmorLoadDelegateData {
	struct FMadArmorCosmeticId ArmorId; // 0x00(0x18)
	struct FWeakObjectPtr<struct UCharacterCustomizationComponent> Customization; // 0x18(0x08)
	enum class ECustomizationSlotType Slot; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct TArray<struct FSoftObjectPath> MaterialGroupPaths; // 0x28(0x10)
	struct FDelegate OnIconLoaded; // 0x38(0x10)
};

// ScriptStruct Madness.MadArmorCosmeticId
// Size: 0x18 (Inherited: 0x00)
struct FMadArmorCosmeticId {
	struct FName ArmorName; // 0x00(0x08)
	struct FName SkinName; // 0x08(0x08)
	struct FName PaintName; // 0x10(0x08)
};

// ScriptStruct Madness.MadArmorMaterialGroup
// Size: 0x10 (Inherited: 0x00)
struct FMadArmorMaterialGroup {
	struct TArray<struct UMaterialInstance*> Materials; // 0x00(0x10)
};

// ScriptStruct Madness.MadArmorCosmeticData
// Size: 0x78 (Inherited: 0x00)
struct FMadArmorCosmeticData {
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x00(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> Mesh; // 0x28(0x28)
	struct TArray<struct FItemMaterialOverride> MaterialOverrides; // 0x50(0x10)
	enum class EMadArmorPart ArmorPart; // 0x60(0x01)
	enum class EMadArmorHeadMod HeadMod; // 0x61(0x01)
	char UnknownData_62[0x2]; // 0x62(0x02)
	float HolsterOffset; // 0x64(0x04)
	float SidearmHolsterLeftOffset; // 0x68(0x04)
	float SidearmHolsterRightOffset; // 0x6c(0x04)
	char UnknownData_70_0 : 7; // 0x70(0x01)
	bool bShouldHideLowerCloth : 1; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Madness.ItemMaterialOverride
// Size: 0x30 (Inherited: 0x00)
struct FItemMaterialOverride {
	struct TSoftObjectPtr<struct UMaterialInstance> Material; // 0x00(0x28)
	struct FName MaterialSlotName; // 0x28(0x08)
};

// ScriptStruct Madness.AttributeSetData
// Size: 0x88 (Inherited: 0x08)
struct FAttributeSetData : FTableRowBase {
	struct TArray<struct FDifficultyLevel> DifficultyLevels; // 0x08(0x10)
	struct TArray<struct FDifficultyLevel> ChallengeDifficultyLevels; // 0x18(0x10)
	int32_t MidWorldLevel; // 0x28(0x04)
	int32_t HighWorldLevel; // 0x2c(0x04)
	int32_t MidChallengeTier; // 0x30(0x04)
	int32_t HighChallengeTier; // 0x34(0x04)
	float ExperienceFactorWhenOnePlayer; // 0x38(0x04)
	float ExperienceFactorWhenTwoPlayers; // 0x3c(0x04)
	float ExperienceFactorWhenThreePlayers; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct UCurveFloat* LevelDifferenceExperienceModifierCurve; // 0x48(0x08)
	float MinIncomingPhysicalDamageMultiplier; // 0x50(0x04)
	float MinIncomingAnomalyDamageMultiplier; // 0x54(0x04)
	float MinIncomingDarkMatterDamageMultiplier; // 0x58(0x04)
	float MinArmor; // 0x5c(0x04)
	float MinResistance; // 0x60(0x04)
	float MinDarkMatterProtection; // 0x64(0x04)
	float DamageReductionModifier; // 0x68(0x04)
	float ArmorConst; // 0x6c(0x04)
	float ArmorDamageReductionMaxCap; // 0x70(0x04)
	float ResistanceDamageReductionMaxCap; // 0x74(0x04)
	float DarkMatterDamageReductionMaxCap; // 0x78(0x04)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
	struct UCurveFloat* LevelDifferenceModifierCurve; // 0x80(0x08)
};

// ScriptStruct Madness.DifficultyLevel
// Size: 0x190 (Inherited: 0x00)
struct FDifficultyLevel {
	struct FString DiffcultyName; // 0x00(0x10)
	float ExperienceFactor; // 0x10(0x04)
	float EnemyHealthFactor; // 0x14(0x04)
	float EnemyDamageMultiplayer; // 0x18(0x04)
	float ExperienceRequriedToUnlock; // 0x1c(0x04)
	int32_t EnemyLevelModifier; // 0x20(0x04)
	float DropRateModifier; // 0x24(0x04)
	float SpikeDamageLimitMultiplier; // 0x28(0x04)
	float GlobalCooldownMultiplierBonus; // 0x2c(0x04)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bShouldReward : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct FUniversalReward Reward; // 0x38(0x150)
	float LifeLeechSkillMaxDifficultyMultiplier; // 0x188(0x04)
	float LifeLeechWeaponsMaxDifficultyMultiplier; // 0x18c(0x04)
};

// ScriptStruct Madness.UniversalReward
// Size: 0x150 (Inherited: 0x08)
struct FUniversalReward : FTableRowBase {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bGiveItemOfferConsumables : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct TArray<struct FMadItemConsumableReward> ItemOfferConsumables; // 0x10(0x10)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bGiveExperience : 1; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	float Experience; // 0x24(0x04)
	enum class EMadExperienceSource ExperienceSource; // 0x28(0x01)
	char UnknownData_29_0 : 7; // 0x29(0x01)
	bool bGiveClassPoints : 1; // 0x29(0x01)
	char UnknownData_2A[0x2]; // 0x2a(0x02)
	float ClassPoints; // 0x2c(0x04)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bEditFacts : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct TArray<struct FMadFactReward> Facts; // 0x38(0x10)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bGiveLoot : 1; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct FString LootId; // 0x50(0x10)
	char UnknownData_60_0 : 7; // 0x60(0x01)
	bool bOverrideLootDetails : 1; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	struct FMadLootDetails LootDetails; // 0x64(0x08)
	char UnknownData_6C_0 : 7; // 0x6c(0x01)
	bool bGiveEmotes : 1; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
	struct TArray<struct FString> EmoteNames; // 0x70(0x10)
	char UnknownData_80_0 : 7; // 0x80(0x01)
	bool bGiveResources : 1; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
	struct TMap<struct FName, int32_t> Resources; // 0x88(0x50)
	char UnknownData_D8_0 : 7; // 0xd8(0x01)
	bool bGiveBanner : 1; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
	struct FMadBannerRewardModel BannerReward; // 0xe0(0x30)
	char UnknownData_110_0 : 7; // 0x110(0x01)
	bool bGiveConvoy : 1; // 0x110(0x01)
	char UnknownData_111[0x7]; // 0x111(0x07)
	struct FMadConvoyRewardModel ConvoyReward; // 0x118(0x30)
	enum class EMadLootDelayType BroadcastDelayType; // 0x148(0x01)
	char UnknownData_149[0x3]; // 0x149(0x03)
	int32_t DifficultyLevel; // 0x14c(0x04)
};

// ScriptStruct Madness.MadConvoyRewardModel
// Size: 0x30 (Inherited: 0x00)
struct FMadConvoyRewardModel {
	struct TArray<struct FNameWrapper> AttachableDecorationsNames; // 0x00(0x10)
	struct TArray<int32_t> PatternIndexes; // 0x10(0x10)
	struct TArray<struct FNameWrapper> ConvoyAccoladesSetsNames; // 0x20(0x10)
};

// ScriptStruct Madness.MadBannerRewardModel
// Size: 0x30 (Inherited: 0x00)
struct FMadBannerRewardModel {
	struct TArray<int32_t> FlagpoleIndexes; // 0x00(0x10)
	struct TArray<int32_t> PatternIndexes; // 0x10(0x10)
	struct TArray<int32_t> SigilIndexes; // 0x20(0x10)
};

// ScriptStruct Madness.MadLootDetails
// Size: 0x08 (Inherited: 0x00)
struct FMadLootDetails {
	enum class EMadItemRarity LootRarity; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bUsePlayerLevel : 1; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	int32_t LootLevel; // 0x04(0x04)
};

// ScriptStruct Madness.MadFactReward
// Size: 0x28 (Inherited: 0x00)
struct FMadFactReward {
	struct FFactValue Fact; // 0x00(0x28)
};

// ScriptStruct Madness.MadItemConsumableReward
// Size: 0x18 (Inherited: 0x00)
struct FMadItemConsumableReward {
	struct FString Name; // 0x00(0x10)
	float Chance; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Madness.ArchetypeFactors
// Size: 0x20 (Inherited: 0x08)
struct FArchetypeFactors : FTableRowBase {
	float DamageFactor; // 0x08(0x04)
	float HealthFactor; // 0x0c(0x04)
	float ArmorFactor; // 0x10(0x04)
	float ResistanceFactor; // 0x14(0x04)
	float StatusResistanceFactor; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Madness.PlayingAudioComponents
// Size: 0x50 (Inherited: 0x00)
struct FPlayingAudioComponents {
	struct TSet<struct UAudioComponent*> Components; // 0x00(0x50)
};

// ScriptStruct Madness.AudioVersionsSet
// Size: 0x10 (Inherited: 0x00)
struct FAudioVersionsSet {
	struct TArray<struct FName> Versions; // 0x00(0x10)
};

// ScriptStruct Madness.MadAudioGlobals_Loot
// Size: 0x120 (Inherited: 0x00)
struct FMadAudioGlobals_Loot {
	struct TMap<enum class EMadItemRarity, struct FMadLootSounds> Armors; // 0x00(0x50)
	struct TMap<enum class EMadItemRarity, struct FMadLootSounds> Weapons; // 0x50(0x50)
	struct TMap<struct FNameWrapper, struct FMadLootSounds> Resources; // 0xa0(0x50)
	struct FMadLootSounds Fact; // 0xf0(0x18)
	struct FMadLootSounds Ammo; // 0x108(0x18)
};

// ScriptStruct Madness.MadLootSounds
// Size: 0x18 (Inherited: 0x00)
struct FMadLootSounds {
	struct USoundCue* SpawnSound; // 0x00(0x08)
	struct USoundCue* ImpactSound; // 0x08(0x08)
	struct USoundCue* PickupSound; // 0x10(0x08)
};

// ScriptStruct Madness.MadAudioGlobals_Weapons
// Size: 0x08 (Inherited: 0x00)
struct FMadAudioGlobals_Weapons {
	struct UDataTable* WeaponsSoundsDT; // 0x00(0x08)
};

// ScriptStruct Madness.AuraData
// Size: 0x28 (Inherited: 0x00)
struct FAuraData {
	struct UMadGameplayEffect* AuraGameplayEffectClass; // 0x00(0x08)
	int32_t AuraRadius; // 0x08(0x04)
	enum class ETeamAttitude TeamAffectedByAura; // 0x0c(0x01)
	char UnknownData_D_0 : 7; // 0x0d(0x01)
	bool bAffectsOwner : 1; // 0x0d(0x01)
	char UnknownData_E[0x2]; // 0x0e(0x02)
	float AuraDuration; // 0x10(0x04)
	float EffectLevel; // 0x14(0x04)
	int32_t MaxCharactersAffectedInRadius; // 0x18(0x04)
	char UnknownData_1C_0 : 7; // 0x1c(0x01)
	bool bLimitMaxCharactersAffectedInRadius : 1; // 0x1c(0x01)
	char UnknownData_1D[0x3]; // 0x1d(0x03)
	float AuraAddedTime; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Madness.MadBackMenuOption
// Size: 0x60 (Inherited: 0x08)
struct FMadBackMenuOption : FTableRowBase {
	struct FText ButtonLabel; // 0x08(0x18)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bIsForLeader : 1; // 0x20(0x01)
	char UnknownData_21_0 : 7; // 0x21(0x01)
	bool bIsForChallenges : 1; // 0x21(0x01)
	char UnknownData_22[0x6]; // 0x22(0x06)
	struct FMadBackMenuModalContent ModalContent; // 0x28(0x30)
	struct FName Method; // 0x58(0x08)
};

// ScriptStruct Madness.MadBackMenuModalContent
// Size: 0x30 (Inherited: 0x00)
struct FMadBackMenuModalContent {
	struct FText Header; // 0x00(0x18)
	struct FText Message; // 0x18(0x18)
};

// ScriptStruct Madness.ObtainItemDetails
// Size: 0x30 (Inherited: 0x00)
struct FObtainItemDetails {
	struct FName FactName; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bSpawnItemOnwaveKilled : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct TArray<struct FName> WaveNames; // 0x10(0x10)
	struct FName LootName; // 0x20(0x08)
	struct FWeakObjectPtr<struct AMadBarrierLootChest> LootChest; // 0x28(0x08)
};

// ScriptStruct Madness.AIWeaponInfo
// Size: 0x10 (Inherited: 0x00)
struct FAIWeaponInfo {
	struct AWeapon* CurrentAIWeapon; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bEquipped : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Madness.EnemySkillsDefinitionItem
// Size: 0x60 (Inherited: 0x08)
struct FEnemySkillsDefinitionItem : FTableRowBase {
	struct FText SkillName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x38(0x28)
};

// ScriptStruct Madness.AITargetMarkerUpdateData
// Size: 0x10 (Inherited: 0x00)
struct FAITargetMarkerUpdateData {
	struct AActor* TargetActor; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Madness.MadAITargetMarker
// Size: 0x28 (Inherited: 0x00)
struct FMadAITargetMarker {
	struct UParticleSystem* MarkerParticle; // 0x00(0x08)
	struct FVector MarkerScale; // 0x08(0x0c)
	struct FLinearColor MarkerColor; // 0x14(0x10)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Madness.MapAnchor
// Size: 0x10 (Inherited: 0x00)
struct FMapAnchor {
	struct FVector2D PointOnMap; // 0x00(0x08)
	struct FWeakObjectPtr<struct AActor> RelatedActor; // 0x08(0x08)
};

// ScriptStruct Madness.TurnAnimationAngle
// Size: 0x18 (Inherited: 0x00)
struct FTurnAnimationAngle {
	struct UAnimMontage* TurnAnimation; // 0x00(0x08)
	struct FName SectionName; // 0x08(0x08)
	float AngleOfTurn; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Madness.FWParticleSetup
// Size: 0x30 (Inherited: 0x00)
struct FFWParticleSetup {
	struct UParticleSystem* PSTemplate; // 0x00(0x08)
	struct FVector LocationOffset; // 0x08(0x0c)
	struct FRotator RotationOffset; // 0x14(0x0c)
	struct FVector Scale; // 0x20(0x0c)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Madness.AttractorLocationToCombatState
// Size: 0x18 (Inherited: 0x00)
struct FAttractorLocationToCombatState {
	struct TArray<struct FName> AttractorIds; // 0x00(0x10)
	enum class EMadForestBossCombatState CombatState; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Madness.CombatStateToAttractors
// Size: 0x18 (Inherited: 0x00)
struct FCombatStateToAttractors {
	enum class EMadForestBossCombatState CombatState; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct FAttractorToPunchLocation> AttractorsToLocations; // 0x08(0x10)
};

// ScriptStruct Madness.AttractorToPunchLocation
// Size: 0x0c (Inherited: 0x00)
struct FAttractorToPunchLocation {
	struct FName AttractorId; // 0x00(0x08)
	int32_t PunchLocationIdx; // 0x08(0x04)
};

// ScriptStruct Madness.MadAI_ThrowAnimData
// Size: 0x10 (Inherited: 0x00)
struct FMadAI_ThrowAnimData {
	struct UAnimMontage* Animation; // 0x00(0x08)
	float Angle; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Madness.JumpData
// Size: 0x130 (Inherited: 0x00)
struct FJumpData {
	struct FGameplayTagContainer EffectsToRemove; // 0x00(0x20)
	struct FName NormalStartingSections[0x4]; // 0x20(0x20)
	struct FName NormalEndingSections[0x4]; // 0x40(0x20)
	struct UAnimMontage* NormalAnims[0x3]; // 0x60(0x18)
	float NormalStartAnimDuration; // 0x78(0x04)
	struct FName NormalLoopSolidSection; // 0x7c(0x08)
	struct FName NormalLoopMeltedSection; // 0x84(0x08)
	struct FGameplayTag MeltedTag; // 0x8c(0x08)
	char UnknownData_94[0x4]; // 0x94(0x04)
	struct UAnimMontage* StrafeRightAnims[0x3]; // 0x98(0x18)
	struct UAnimMontage* StrafeLeftAnims[0x3]; // 0xb0(0x18)
	struct FName StrafeAnimSection[0x3]; // 0xc8(0x18)
	float GravityZForJumpVelocity; // 0xe0(0x04)
	float GravityDuringJump; // 0xe4(0x04)
	float ExactLocationJumpArcParam; // 0xe8(0x04)
	float NormalJumpArcParam; // 0xec(0x04)
	float LandingMarkerDuration; // 0xf0(0x04)
	float LandingMarkerPredictionSimTime; // 0xf4(0x04)
	struct FScalableFloat LandingDamage; // 0xf8(0x20)
	float DamageRadius; // 0x118(0x04)
	char UnknownData_11C[0x4]; // 0x11c(0x04)
	struct UDamageType* DamageType; // 0x120(0x08)
	char UnknownData_128_0 : 7; // 0x128(0x01)
	bool bFullDamage : 1; // 0x128(0x01)
	char UnknownData_129[0x7]; // 0x129(0x07)
};

// ScriptStruct Madness.MoveTowardsTargetData
// Size: 0x18 (Inherited: 0x00)
struct FMoveTowardsTargetData {
	struct UGameplayEffect* WalkingEffect; // 0x00(0x08)
	struct FName WalkMontageSection; // 0x08(0x08)
	float MoveToAcceptaceRadius; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Madness.RotateTowardsTargetData
// Size: 0x78 (Inherited: 0x00)
struct FRotateTowardsTargetData {
	struct TArray<struct UAnimMontage*> RotateLeftAnimsForPhases; // 0x00(0x10)
	struct TArray<struct UAnimMontage*> RotateRightAnimsForPhases; // 0x10(0x10)
	struct TArray<struct FAngleSectionData> AngleToSectionData; // 0x20(0x10)
	struct FGameplayTagContainer EffectsToRemove; // 0x30(0x20)
	struct UAnimMontage* AdditiveAnimMontage; // 0x50(0x08)
	struct TArray<struct FName> LeftAdditiveSectionsForPhases; // 0x58(0x10)
	struct TArray<struct FName> RightAdditiveSectionsForPhases; // 0x68(0x10)
};

// ScriptStruct Madness.AngleSectionData
// Size: 0x0c (Inherited: 0x00)
struct FAngleSectionData {
	float Angle; // 0x00(0x04)
	struct FName Section; // 0x04(0x08)
};

// ScriptStruct Madness.LandingShakeData
// Size: 0x30 (Inherited: 0x00)
struct FLandingShakeData {
	struct UCameraShake* CameraShakeClass; // 0x00(0x08)
	float CameraShakeInnerRadius; // 0x08(0x04)
	float CameraShakeOuterRadius; // 0x0c(0x04)
	struct FVector TileImpulseOffset; // 0x10(0x0c)
	float TileImpulseSpeed; // 0x1c(0x04)
	float TileImpulseWidth; // 0x20(0x04)
	float TileImpulseAmount; // 0x24(0x04)
	float TileImpulseRange; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Madness.CameraChargingBeamAngleLimits
// Size: 0x1c (Inherited: 0x00)
struct FCameraChargingBeamAngleLimits {
	float AdditiveMaxLimit; // 0x00(0x04)
	float AdditiveMinLimit; // 0x04(0x04)
	char UnknownData_8[0x14]; // 0x08(0x14)
};

// ScriptStruct Madness.MadCameraPreset
// Size: 0x30 (Inherited: 0x00)
struct FMadCameraPreset {
	float DefaultFOV; // 0x00(0x04)
	float DefaultSpringArmLength; // 0x04(0x04)
	struct FVector DefaultTargetSocket; // 0x08(0x0c)
	struct FVector DefaultOffsetSocket; // 0x14(0x0c)
	struct TArray<struct FMadCameraSettingsOverride> CameraStates; // 0x20(0x10)
};

// ScriptStruct Madness.MadCameraSettingsOverride
// Size: 0x10 (Inherited: 0x00)
struct FMadCameraSettingsOverride {
	struct UCameraState* CameraStateClassToOverride; // 0x00(0x08)
	struct UCameraState* OverridingCameraClass; // 0x08(0x08)
};

// ScriptStruct Madness.MadChallengeRewardDropLogic
// Size: 0x14 (Inherited: 0x00)
struct FMadChallengeRewardDropLogic {
	float BaseRewardsDropDelay; // 0x00(0x04)
	float MinCachedItemsDropDelay; // 0x04(0x04)
	float MaxCachedItemsDropDelay; // 0x08(0x04)
	int32_t MinCachedItemsDropAtOnce; // 0x0c(0x04)
	int32_t MaxCachedItemsDropAtOnce; // 0x10(0x04)
};

// ScriptStruct Madness.MadMigrationChallengeData
// Size: 0x50 (Inherited: 0x00)
struct FMadMigrationChallengeData {
	char UnknownData_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Madness.MadResourceSwapper
// Size: 0x20 (Inherited: 0x00)
struct FMadResourceSwapper {
	struct FNameWrapper From; // 0x00(0x10)
	struct FNameWrapper To; // 0x10(0x10)
};

// ScriptStruct Madness.MadChallengeStoryRewardData_DEPRECATED
// Size: 0x08 (Inherited: 0x08)
struct FMadChallengeStoryRewardData_DEPRECATED : FTableRowBase {
};

// ScriptStruct Madness.MadChallengeDifficultyTableData_DEPRECATED
// Size: 0x08 (Inherited: 0x08)
struct FMadChallengeDifficultyTableData_DEPRECATED : FTableRowBase {
};

// ScriptStruct Madness.MadChallengeEnviroData
// Size: 0x20 (Inherited: 0x00)
struct FMadChallengeEnviroData {
	enum class EMadChallengeEnviroType EnviroType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FText EnviroDisplayName; // 0x08(0x18)
};

// ScriptStruct Madness.MadPreviousChallengeSummaryUIData
// Size: 0x10 (Inherited: 0x00)
struct FMadPreviousChallengeSummaryUIData {
	struct TArray<struct FMadChallengePlayerSummaryUIData> PlayerSummaries; // 0x00(0x10)
};

// ScriptStruct Madness.MadChallengePlayerSummaryUIData
// Size: 0x70 (Inherited: 0x00)
struct FMadChallengePlayerSummaryUIData {
	struct FText PlayerName; // 0x00(0x18)
	int32_t DamageDealt; // 0x18(0x04)
	int32_t Accuracy; // 0x1c(0x04)
	int32_t EnemiesKilled; // 0x20(0x04)
	int32_t CriticalHits; // 0x24(0x04)
	int32_t DamageBlocked; // 0x28(0x04)
	int32_t DamageTaken; // 0x2c(0x04)
	int32_t NumberOfTimesInCover; // 0x30(0x04)
	int32_t NumberOfTimesInDBNO; // 0x34(0x04)
	float TimeInCover; // 0x38(0x04)
	float TimeInDBNO; // 0x3c(0x04)
	struct TArray<struct FMadChallengeStatsTypeUIData> EnemyTypes; // 0x40(0x10)
	struct TArray<struct FMadChallengeStatsTypeUIData> DamageSources; // 0x50(0x10)
	struct TArray<struct FMadChallengeStatsTypeUIData> SkillsUsed; // 0x60(0x10)
};

// ScriptStruct Madness.MadChallengeStatsTypeUIData
// Size: 0x20 (Inherited: 0x00)
struct FMadChallengeStatsTypeUIData {
	struct FText Name; // 0x00(0x18)
	int32_t Count; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Madness.MadPostChallengeUIData
// Size: 0x60 (Inherited: 0x00)
struct FMadPostChallengeUIData {
	struct FText Name; // 0x00(0x18)
	enum class EMadChallengeEndReason Status; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	int32_t Tier; // 0x1c(0x04)
	int32_t Time; // 0x20(0x04)
	int32_t TierIncrease; // 0x24(0x04)
	int32_t NumberOfRetries; // 0x28(0x04)
	int32_t MonsterLevel; // 0x2c(0x04)
	struct TArray<struct FMadTimeTargetUIData> TimeTargets; // 0x30(0x10)
	struct TArray<struct FMadChallengeRewardUIData> Essence; // 0x40(0x10)
	struct TArray<struct FMadChallengeRarityRewardUIData> RarityRewards; // 0x50(0x10)
};

// ScriptStruct Madness.MadChallengeRarityRewardUIData
// Size: 0x02 (Inherited: 0x00)
struct FMadChallengeRarityRewardUIData {
	enum class EMadChallengeRewardID RewardId; // 0x00(0x01)
	enum class EMadItemRarity Rarity; // 0x01(0x01)
};

// ScriptStruct Madness.MadChallengeRewardUIData
// Size: 0x0c (Inherited: 0x00)
struct FMadChallengeRewardUIData {
	struct FName Name; // 0x00(0x08)
	int32_t Tokens; // 0x08(0x04)
};

// ScriptStruct Madness.MadTimeTargetUIData
// Size: 0x08 (Inherited: 0x00)
struct FMadTimeTargetUIData {
	int32_t Time; // 0x00(0x04)
	int32_t Reward; // 0x04(0x04)
};

// ScriptStruct Madness.MadChallengeProgressionUIData
// Size: 0x18 (Inherited: 0x00)
struct FMadChallengeProgressionUIData {
	struct TArray<int32_t> TimeFrames; // 0x00(0x10)
	int32_t LastTimeFrame; // 0x10(0x04)
	int32_t CurrentTime; // 0x14(0x04)
};

// ScriptStruct Madness.MadPreChallengeUIData
// Size: 0x38 (Inherited: 0x00)
struct FMadPreChallengeUIData {
	struct FText Name; // 0x00(0x18)
	int32_t Tier; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FText Description; // 0x20(0x18)
};

// ScriptStruct Madness.MadChallengeSystemUIData
// Size: 0x28 (Inherited: 0x00)
struct FMadChallengeSystemUIData {
	int32_t UnlockedTier; // 0x00(0x04)
	int32_t MaxTierThisWeek; // 0x04(0x04)
	struct TArray<struct FMadChallengeResourceUIData> Resources; // 0x08(0x10)
	struct TArray<struct FMadChallengeUIData> Challenges; // 0x18(0x10)
};

// ScriptStruct Madness.MadChallengeUIData
// Size: 0xb8 (Inherited: 0x00)
struct FMadChallengeUIData {
	int32_t ChallengeID; // 0x00(0x04)
	int32_t Tier; // 0x04(0x04)
	int32_t MinTier; // 0x08(0x04)
	enum class EMadChallengeType ChallengeType; // 0x0c(0x01)
	char UnknownData_D_0 : 7; // 0x0d(0x01)
	bool bIsActive : 1; // 0x0d(0x01)
	char UnknownData_E_0 : 7; // 0x0e(0x01)
	bool bCanStart : 1; // 0x0e(0x01)
	char UnknownData_F[0x1]; // 0x0f(0x01)
	struct FText Name; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText QuestDescription; // 0x40(0x18)
	struct FName IconPath; // 0x58(0x08)
	struct FName PhotoPath; // 0x60(0x08)
	struct FVector2D Coordinates; // 0x68(0x08)
	struct TArray<struct FMadTimeTargetUIData> TimeTargets; // 0x70(0x10)
	int32_t ExpeditionCost; // 0x80(0x04)
	char UnknownData_84_0 : 7; // 0x84(0x01)
	bool bIsHUB : 1; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
	int32_t TitlePosition; // 0x88(0x04)
	struct FMadChallengeScoreUIData BestScore; // 0x8c(0x10)
	enum class EMadChallengeEnviroType EnviroType; // 0x9c(0x01)
	char UnknownData_9D[0x3]; // 0x9d(0x03)
	struct FText EnviroName; // 0xa0(0x18)
};

// ScriptStruct Madness.MadChallengeScoreUIData
// Size: 0x10 (Inherited: 0x00)
struct FMadChallengeScoreUIData {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bScoreExists : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t Tier; // 0x04(0x04)
	int32_t Time; // 0x08(0x04)
	enum class EMadChallengeTimeBracket TimeBracket; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Madness.MadChallengeResourceUIData
// Size: 0x40 (Inherited: 0x00)
struct FMadChallengeResourceUIData {
	struct FString IconPath; // 0x00(0x10)
	struct FText Name; // 0x10(0x18)
	struct FName ShortName; // 0x28(0x08)
	int32_t Count; // 0x30(0x04)
	int32_t MaxValue; // 0x34(0x04)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool bShowLimit : 1; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Madness.GroundSpikeData
// Size: 0x58 (Inherited: 0x00)
struct FGroundSpikeData {
	struct UExplosionTemplate* SpikeSpawnExploion; // 0x00(0x08)
	struct FMadAITargetMarker MarkerParticle; // 0x08(0x28)
	struct FCollisionResponseContainer SpikesCollisionResponses; // 0x30(0x20)
	float MarkerSpawnRandomTimeDeviation; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Madness.MadBossFightPhase
// Size: 0x20 (Inherited: 0x00)
struct FMadBossFightPhase {
	float Debug_PhaseHealth; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FMadBossFightSubPhase> SubPhases; // 0x08(0x10)
	int32_t PhaseNumber; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Madness.MadBossFightSubPhase
// Size: 0x10 (Inherited: 0x00)
struct FMadBossFightSubPhase {
	struct FName SubPhaseName; // 0x00(0x08)
	float HealthPercent; // 0x08(0x04)
	char UnknownData_C_0 : 7; // 0x0c(0x01)
	bool bEventSent : 1; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Madness.DamagableGroupConfig
// Size: 0x58 (Inherited: 0x00)
struct FDamagableGroupConfig {
	int32_t CustomizationComponentSlotIdx; // 0x00(0x04)
	struct FName BoneForFXBind; // 0x04(0x08)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> WeakSpotBones; // 0x10(0x10)
	struct FDamagableGroupWeakSpotConfig WeakSpotConfig; // 0x20(0x02)
	char UnknownData_22[0x36]; // 0x22(0x36)
};

// ScriptStruct Madness.DamagableGroupWeakSpotConfig
// Size: 0x02 (Inherited: 0x00)
struct FDamagableGroupWeakSpotConfig {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bPropagateToChilden : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bForceCrit : 1; // 0x01(0x01)
};

// ScriptStruct Madness.DamagablePiece
// Size: 0x28 (Inherited: 0x00)
struct FDamagablePiece {
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x00(0x08)
	float Health; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMaterialInstances; // 0x10(0x10)
	char UnknownData_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Madness.LurkerMovementSpeedData
// Size: 0x18 (Inherited: 0x08)
struct FLurkerMovementSpeedData : FTableRowBase {
	float MovementPlayRate; // 0x08(0x04)
	float SpeedWarpingScale; // 0x0c(0x04)
	float Speed; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Madness.AngryStatusValueStruct
// Size: 0x04 (Inherited: 0x00)
struct FAngryStatusValueStruct {
	char bAngryOn : 1; // 0x00(0x01)
	char bAngryEffectEnabled : 1; // 0x00(0x01)
	char UnknownData_0_2 : 6; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Madness.TickSoundData
// Size: 0x10 (Inherited: 0x00)
struct FTickSoundData {
	struct USoundBase* Sound; // 0x00(0x08)
	float VolumeMultiplier; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Madness.IKLegsTurningData
// Size: 0x0c (Inherited: 0x00)
struct FIKLegsTurningData {
	float TurnPower; // 0x00(0x04)
	float ClampMin; // 0x04(0x04)
	float ClampMax; // 0x08(0x04)
};

// ScriptStruct Madness.StateData
// Size: 0x18 (Inherited: 0x00)
struct FStateData {
	struct FName BlackboardStateKey; // 0x00(0x08)
	struct FName BlackboardCombatStateKey; // 0x08(0x08)
	struct FName FactStateKey; // 0x10(0x08)
};

// ScriptStruct Madness.MeltedStateData
// Size: 0x80 (Inherited: 0x00)
struct FMeltedStateData {
	struct UPhysicalMaterial* MeltedState; // 0x00(0x08)
	struct UPhysicalMaterial* NotMeltedState; // 0x08(0x08)
	struct UGameplayEffect* EffectToApplyOnMelted; // 0x10(0x08)
	struct UGameplayEffect* EffectToApplyOnNotMelted; // 0x18(0x08)
	struct FGameplayTagContainer EffectsToRemoveOnNotMelted; // 0x20(0x20)
	float Timeout; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct FGameplayTagContainer CannotStartWalkCycleTags; // 0x48(0x20)
	struct FName WalkAnimSection; // 0x68(0x08)
	char UnknownData_70[0x10]; // 0x70(0x10)
};

// ScriptStruct Madness.BlastMeshRegenerationData
// Size: 0xb8 (Inherited: 0x00)
struct FBlastMeshRegenerationData {
	struct FScalableFloat RegenerationDelay; // 0x00(0x20)
	struct TArray<struct FSocketBonePair> Sockets; // 0x20(0x10)
	struct UCurveFloat* Curve; // 0x30(0x08)
	float UpdateRate; // 0x38(0x04)
	float Time; // 0x3c(0x04)
	struct FName MaterialParameterName; // 0x40(0x08)
	char UnknownData_48[0x60]; // 0x48(0x60)
	struct TArray<struct FProgressData> InProgress; // 0xa8(0x10)
};

// ScriptStruct Madness.ProgressData
// Size: 0x10 (Inherited: 0x00)
struct FProgressData {
	struct UObject* Object; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Madness.SocketBonePair
// Size: 0x10 (Inherited: 0x00)
struct FSocketBonePair {
	struct FName Socket; // 0x00(0x08)
	struct FName Bone; // 0x08(0x08)
};

// ScriptStruct Madness.ProximityKnockbackData
// Size: 0x30 (Inherited: 0x00)
struct FProximityKnockbackData {
	float BaseDamage; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UMadDamageType* DamageType; // 0x08(0x08)
	struct FGameplayTagContainer CooldownTag; // 0x10(0x20)
};

// ScriptStruct Madness.PhaseData
// Size: 0xf8 (Inherited: 0x00)
struct FPhaseData {
	struct TArray<struct FName> VisibleBlastMeshes; // 0x00(0x10)
	struct TArray<struct FName> HiddenBlastMeshes; // 0x10(0x10)
	struct TArray<struct FName> AttractorBones; // 0x20(0x10)
	struct USkeletalMesh* Mesh; // 0x30(0x08)
	struct FVector RelativeMeshScale; // 0x38(0x0c)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct UAnimInstance* AnimInstanceClass; // 0x48(0x08)
	struct TArray<struct UGameplayEffect*> EffectsToApply; // 0x50(0x10)
	struct FGameplayTagContainer ActiveEffectsWithGrantedTagsToRemove; // 0x60(0x20)
	struct TArray<struct UMaterialInterface*> MeshMaterials; // 0x80(0x10)
	struct TArray<struct FWeakSpots> WeakSpots; // 0x90(0x10)
	struct TArray<struct FAimTargetWeakSpot> AimTargetWeakSpots; // 0xa0(0x10)
	struct UAnimMontage* WalkMontage; // 0xb0(0x08)
	struct UAnimMontage* RunMontage; // 0xb8(0x08)
	struct FWeakSpots MeltedStateWeakSpots; // 0xc0(0x38)
};

// ScriptStruct Madness.WeakSpots
// Size: 0x38 (Inherited: 0x00)
struct FWeakSpots {
	struct TArray<struct FName> BonesNames; // 0x00(0x10)
	struct FScalableFloat DamageMultiplier; // 0x10(0x20)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bForceCritical : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Madness.ChargeAttackData
// Size: 0x30 (Inherited: 0x00)
struct FChargeAttackData {
	struct FScalableFloat ChargeDamage; // 0x00(0x20)
	struct UDamageType* DamageType; // 0x20(0x08)
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Madness.Phase3HitDamage
// Size: 0x30 (Inherited: 0x00)
struct FPhase3HitDamage {
	float HitDamage; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UDamageType* HitDamageType; // 0x08(0x08)
	struct FGameplayTagContainer RequiredTag; // 0x10(0x20)
};

// ScriptStruct Madness.HighWallJumpData
// Size: 0x48 (Inherited: 0x00)
struct FHighWallJumpData {
	struct FName DisableCustomStartPointBlackboardKey; // 0x00(0x08)
	struct FName EnableMirrorStartPointBlackboardKey; // 0x08(0x08)
	struct FName StartActorBlackboardKey; // 0x10(0x08)
	struct FName MirrorAnimBlackboardKey; // 0x18(0x08)
	struct AActor* StartPointCustom; // 0x20(0x08)
	struct TArray<struct AActor*> StartPoints; // 0x28(0x10)
	struct TArray<struct AActor*> MirrorStartPoints; // 0x38(0x10)
};

// ScriptStruct Madness.KnockbackData
// Size: 0x88 (Inherited: 0x00)
struct FKnockbackData {
	struct UExplosionTemplate* ExplosionTemplate; // 0x00(0x08)
	float KnockbacksRatio; // 0x08(0x04)
	int32_t KnockbacksMax; // 0x0c(0x04)
	struct FGameplayTagContainer TagToRemoveOnDamage; // 0x10(0x20)
	float ReactionUpdateRatio; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct UCurveFloat* ReactionAlpha; // 0x38(0x08)
	struct UCurveFloat* ReactionReverseAlpha; // 0x40(0x08)
	float ReactionTime; // 0x48(0x04)
	float Radius; // 0x4c(0x04)
	struct UMadDamageType* RestoreCollisionDamageType; // 0x50(0x08)
	struct FVector KnockbackLocationOffset; // 0x58(0x0c)
	char UnknownData_64[0x24]; // 0x64(0x24)
};

// ScriptStruct Madness.LaserAttackData
// Size: 0x70 (Inherited: 0x00)
struct FLaserAttackData {
	struct FScalableFloat LaserAttackDamage; // 0x00(0x20)
	struct UDamageType* LaserAttackDamageType; // 0x20(0x08)
	struct FName CollisionAttachSocket; // 0x28(0x08)
	struct FVector InitialSize; // 0x30(0x0c)
	struct FVector EndSize; // 0x3c(0x0c)
	float SizeUpTime; // 0x48(0x04)
	float SizeUpUpdateTime; // 0x4c(0x04)
	char UnknownData_50[0x10]; // 0x50(0x10)
	struct TArray<struct AActor*> LaserAttackDamagedActors; // 0x60(0x10)
};

// ScriptStruct Madness.RotationAttackData
// Size: 0x68 (Inherited: 0x00)
struct FRotationAttackData {
	float RotationAttackDamageRate; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FScalableFloat RotationAttackDamageScalable; // 0x08(0x20)
	struct UDamageType* RotationAttackDamageType; // 0x28(0x08)
	struct TArray<struct FName> ComponentsAttachSockets; // 0x30(0x10)
	struct TArray<struct AMadBaseCharacter*> RotationAttackVictims; // 0x40(0x10)
	char UnknownData_50[0x18]; // 0x50(0x18)
};

// ScriptStruct Madness.SwingAttackData
// Size: 0x78 (Inherited: 0x00)
struct FSwingAttackData {
	float FullSwingDuration; // 0x00(0x04)
	float SwingTimerStartOffset; // 0x04(0x04)
	float SwingMaxAngle; // 0x08(0x04)
	float SwingDamageTimerRate; // 0x0c(0x04)
	struct FScalableFloat SwingAttackDamageScalable; // 0x10(0x20)
	struct UDamageType* SwingAttackDamageType; // 0x30(0x08)
	struct FName LavaSprayParticlesAttachSocket; // 0x38(0x08)
	float SizeChangeTime; // 0x40(0x04)
	float SizeChangeUpdateRate; // 0x44(0x04)
	struct UCurveFloat* SizeChangeCurve; // 0x48(0x08)
	char UnknownData_50[0x28]; // 0x50(0x28)
};

// ScriptStruct Madness.MinionInitData
// Size: 0x18 (Inherited: 0x00)
struct FMinionInitData {
	struct FVector LaunchDirection; // 0x00(0x0c)
	float LaunchPower; // 0x0c(0x04)
	struct USplineComponent* SplineComponent; // 0x10(0x08)
};

// ScriptStruct Madness.YagakHostileData
// Size: 0x40 (Inherited: 0x00)
struct FYagakHostileData {
	struct ABaseCharacter* Hostile; // 0x00(0x08)
	char UnknownData_8[0x38]; // 0x08(0x38)
};

// ScriptStruct Madness.JournalCategory
// Size: 0x40 (Inherited: 0x00)
struct FJournalCategory {
	struct FName Key; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FFactExpression FactExpressionToLock; // 0x20(0x18)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool bLockIfEmpty : 1; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Madness.BestiaryEntryFilter
// Size: 0x90 (Inherited: 0x00)
struct FBestiaryEntryFilter {
	SoftClassProperty ExactClass; // 0x00(0x28)
	struct FString ExactClassName; // 0x28(0x10)
	struct FFWAIArchetypeVariation Archetype; // 0x38(0x20)
	struct TSoftObjectPtr<struct UBaseBiomeData> Biome; // 0x58(0x28)
	struct FAssetPath BiomeAssetPath; // 0x80(0x10)
};

// ScriptStruct Madness.JournalEntryData
// Size: 0x90 (Inherited: 0x08)
struct FJournalEntryData : FTableRowBase {
	struct FName Key; // 0x08(0x08)
	char UnknownData_10[0x8]; // 0x10(0x08)
	int32_t SortIndex; // 0x18(0x04)
	struct FName Category; // 0x1c(0x08)
	struct FName Subcategory; // 0x24(0x08)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FText Title; // 0x30(0x18)
	struct FText Subheading; // 0x48(0x18)
	struct FText Description; // 0x60(0x18)
	struct FName Region; // 0x78(0x08)
	char UnknownData_80_0 : 7; // 0x80(0x01)
	bool HasVO : 1; // 0x80(0x01)
	char UnknownData_81_0 : 7; // 0x81(0x01)
	bool HasIcon : 1; // 0x81(0x01)
	char UnknownData_82_0 : 7; // 0x82(0x01)
	bool HasHorizontalImage : 1; // 0x82(0x01)
	char UnknownData_83_0 : 7; // 0x83(0x01)
	bool HasVerticalImage : 1; // 0x83(0x01)
	int32_t ImageVersion; // 0x84(0x04)
	int32_t EntryType; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct Madness.MadCollectibleBoxesViewData
// Size: 0x40 (Inherited: 0x08)
struct FMadCollectibleBoxesViewData : FTableRowBase {
	struct TSoftObjectPtr<struct UStaticMesh> InteractableMesh; // 0x08(0x28)
	struct TArray<struct TSoftObjectPtr<struct UStaticMesh>> AdditionalMeshes; // 0x30(0x10)
};

// ScriptStruct Madness.CollectibleJournalEntryStatus
// Size: 0x120 (Inherited: 0x00)
struct FCollectibleJournalEntryStatus {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bCollected : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bSeen : 1; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct FJournalEntryData Data; // 0x08(0x90)
	char UnknownData_98[0x88]; // 0x98(0x88)
};

// ScriptStruct Madness.CoherentActionKeys
// Size: 0x30 (Inherited: 0x00)
struct FCoherentActionKeys {
	struct TArray<struct FCoherentIntKeyBinding> KeyboardKeys; // 0x00(0x10)
	struct TArray<struct FCoherentIntKeyBinding> GamepadKeys; // 0x10(0x10)
	struct TArray<struct FCoherentStringKeyBinding> MouseKeys; // 0x20(0x10)
};

// ScriptStruct Madness.CoherentStringKeyBinding
// Size: 0x30 (Inherited: 0x00)
struct FCoherentStringKeyBinding {
	struct FString ActionName; // 0x00(0x10)
	struct FString KeyName; // 0x10(0x10)
	struct FString IconPath; // 0x20(0x10)
};

// ScriptStruct Madness.CoherentIntKeyBinding
// Size: 0x28 (Inherited: 0x00)
struct FCoherentIntKeyBinding {
	struct FString ActionName; // 0x00(0x10)
	int32_t KeyID; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString IconPath; // 0x18(0x10)
};

// ScriptStruct Madness.BindingUIData
// Size: 0xc8 (Inherited: 0x00)
struct FBindingUIData {
	struct FText DisplayName; // 0x00(0x18)
	struct FBindingKeyUIData PrimaryKey; // 0x18(0x50)
	struct FBindingKeyUIData SecondaryKey; // 0x68(0x50)
	char UnknownData_B8[0x10]; // 0xb8(0x10)
};

// ScriptStruct Madness.BindingKeyUIData
// Size: 0x50 (Inherited: 0x00)
struct FBindingKeyUIData {
	struct FText DisplayName; // 0x00(0x18)
	struct FName ActionName; // 0x18(0x08)
	struct FString KeyIconPath; // 0x20(0x10)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bIsListening : 1; // 0x30(0x01)
	char UnknownData_31_0 : 7; // 0x31(0x01)
	bool bIsKeyMappingSet : 1; // 0x31(0x01)
	char UnknownData_32[0x1e]; // 0x32(0x1e)
};

// ScriptStruct Madness.MadTutorialConvoyElementData
// Size: 0x10 (Inherited: 0x00)
struct FMadTutorialConvoyElementData {
	struct UMadTutorialSequence* TutorialSequenceClass; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bOncePerPlaythroughRegion : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bShowOnOverlap : 1; // 0x09(0x01)
	char UnknownData_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Madness.MadConvoyGlobalsUserInterface
// Size: 0x1c8 (Inherited: 0x00)
struct FMadConvoyGlobalsUserInterface {
	struct FText VehicleSectionName; // 0x00(0x18)
	struct FText VehicleDecorationsTabName; // 0x18(0x18)
	struct FText VehiclePaintTabName; // 0x30(0x18)
	struct FText VehiclePaintColorCategoryName; // 0x48(0x18)
	struct FText VehiclePaintDecalCategoryName; // 0x60(0x18)
	struct FText BannerSectionName; // 0x78(0x18)
	struct FText BannerShapeTabName; // 0x90(0x18)
	struct FText BannerFlagpoleCategoryName; // 0xa8(0x18)
	struct FText BannerShapeCategoryName; // 0xc0(0x18)
	struct FText BannerDamageStateCategoryName; // 0xd8(0x18)
	struct FText BannerPaintingTabName; // 0xf0(0x18)
	struct FText BannerPaintingPatternCategoryName; // 0x108(0x18)
	struct FText BannerPaintingColorCategoryName; // 0x120(0x18)
	struct FText BannerPaintingBorderColorCategoryName; // 0x138(0x18)
	struct FText BannerSigilTabName; // 0x150(0x18)
	struct FText BannerSigilImageCategoryName; // 0x168(0x18)
	struct FText BannerSigilColorCategoryName; // 0x180(0x18)
	struct FText EmotesSectionName; // 0x198(0x18)
	struct FText EmotesCategoryName; // 0x1b0(0x18)
};

// ScriptStruct Madness.MadConvoyGlobalsCinematic
// Size: 0x28 (Inherited: 0x00)
struct FMadConvoyGlobalsCinematic {
	struct TSoftObjectPtr<struct USkeletalMesh> TruckBase; // 0x00(0x28)
};

// ScriptStruct Madness.MadConvoyGlobalsBannerConfigurations
// Size: 0xd0 (Inherited: 0x00)
struct FMadConvoyGlobalsBannerConfigurations {
	struct TArray<struct FMadConvoyGlobalsBannerPattern> Patterns; // 0x00(0x10)
	struct TArray<struct FLinearColor> FlagColors; // 0x10(0x10)
	struct TArray<struct FLinearColor> FlagBorderColors; // 0x20(0x10)
	struct TArray<struct FLinearColor> SigilColors; // 0x30(0x10)
	struct TArray<struct FMadConvoyGlobalsBannerSigil> Sigils; // 0x40(0x10)
	struct TArray<struct FMadConvoyGlobalsBannerFlagPole> FlagPoles; // 0x50(0x10)
	struct TArray<struct FMadConvoyCustomizationUIModel> FlagShapes; // 0x60(0x10)
	struct TArray<struct FMadConvoyCustomizationUIModel> FlagDamageStates; // 0x70(0x10)
	struct UDataTable* TextureMapsDT; // 0x80(0x08)
	struct AMadBannerFlag* BannerFlagClass; // 0x88(0x08)
	struct FName BannerSocketOnTruck; // 0x90(0x08)
	struct TSoftObjectPtr<struct UMaterialInterface> BannerUIRenderingMaterial; // 0x98(0x28)
	struct TArray<struct TSoftObjectPtr<struct UTextureRenderTarget2D>> BannerUIRenderTargets; // 0xc0(0x10)
};

// ScriptStruct Madness.MadConvoyCustomizationUIModel
// Size: 0x90 (Inherited: 0x00)
struct FMadConvoyCustomizationUIModel {
	struct FText Name; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct FText Requirements; // 0x30(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Thumbnail; // 0x48(0x28)
	enum class EMadItemRarity Rarity; // 0x70(0x01)
	char UnknownData_71_0 : 7; // 0x71(0x01)
	bool bIsAvailableByDefault : 1; // 0x71(0x01)
	char UnknownData_72[0x6]; // 0x72(0x06)
	struct FMadDLCLink DLCLink; // 0x78(0x10)
	char UnknownData_88_0 : 7; // 0x88(0x01)
	bool bHideUntilUnlockedOverride : 1; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
};

// ScriptStruct Madness.MadDLCLink
// Size: 0x10 (Inherited: 0x00)
struct FMadDLCLink {
	struct FNameWrapper WrapperName; // 0x00(0x10)
};

// ScriptStruct Madness.MadConvoyGlobalsBannerFlagPole
// Size: 0xb8 (Inherited: 0x90)
struct FMadConvoyGlobalsBannerFlagPole : FMadConvoyCustomizationUIModel {
	struct TSoftObjectPtr<struct USkeletalMesh> FlagMesh; // 0x90(0x28)
};

// ScriptStruct Madness.MadConvoyGlobalsBannerSigil
// Size: 0xa8 (Inherited: 0x90)
struct FMadConvoyGlobalsBannerSigil : FMadConvoyCustomizationUIModel {
	char UnknownData_90_0 : 7; // 0x90(0x01)
	bool bCanBeColored : 1; // 0x90(0x01)
	char UnknownData_91[0x3]; // 0x91(0x03)
	int32_t NumberOnTextureMap; // 0x94(0x04)
	struct FNameWrapper TextureMapName; // 0x98(0x10)
};

// ScriptStruct Madness.MadConvoyGlobalsBannerPattern
// Size: 0xa8 (Inherited: 0x90)
struct FMadConvoyGlobalsBannerPattern : FMadConvoyCustomizationUIModel {
	int32_t NumberOnTextureMap; // 0x90(0x04)
	char UnknownData_94[0x4]; // 0x94(0x04)
	struct FNameWrapper TextureMapName; // 0x98(0x10)
};

// ScriptStruct Madness.MadConvoyGlobalsDecoration
// Size: 0x68 (Inherited: 0x00)
struct FMadConvoyGlobalsDecoration {
	struct TArray<struct FMadConvoyGlobalsTrucksDecal> Decals; // 0x00(0x10)
	struct TArray<struct FLinearColor> Colors; // 0x10(0x10)
	struct FName DefaultSocket; // 0x20(0x08)
	struct TArray<struct FNameWrapper> DefaultDecorations; // 0x28(0x10)
	struct TArray<struct FNameWrapper> DecorationsFromPreorder; // 0x38(0x10)
	struct UDataTable* DecorationSlotsDT; // 0x48(0x08)
	struct UDataTable* DecorationsDT; // 0x50(0x08)
	struct UDataTable* SkinSetsDT; // 0x58(0x08)
	struct UDataTable* AccoladeSetsDT; // 0x60(0x08)
};

// ScriptStruct Madness.MadConvoyGlobalsTrucksDecal
// Size: 0xa0 (Inherited: 0x90)
struct FMadConvoyGlobalsTrucksDecal : FMadConvoyCustomizationUIModel {
	struct TArray<struct FMadConvoyGlobalsMaterialSlotPair> DecalMaterials; // 0x90(0x10)
};

// ScriptStruct Madness.MadConvoyGlobalsMaterialSlotPair
// Size: 0x30 (Inherited: 0x00)
struct FMadConvoyGlobalsMaterialSlotPair {
	struct TSoftObjectPtr<struct UMaterialInterface> DecalMaterial; // 0x00(0x28)
	struct FName SlotName; // 0x28(0x08)
};

// ScriptStruct Madness.MadConvoyCustomizationTextureData
// Size: 0x30 (Inherited: 0x08)
struct FMadConvoyCustomizationTextureData : FTableRowBase {
	struct TSoftObjectPtr<struct UTexture2D> Texture; // 0x08(0x28)
};

// ScriptStruct Madness.MadConvoyCustomizationUIData
// Size: 0x78 (Inherited: 0x08)
struct FMadConvoyCustomizationUIData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FText Requirements; // 0x38(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Thumbnail; // 0x50(0x28)
};

// ScriptStruct Madness.MadConvoyAccoladeSetData
// Size: 0x58 (Inherited: 0x08)
struct FMadConvoyAccoladeSetData : FTableRowBase {
	struct FText FullName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TArray<int32_t> DecalsIds; // 0x38(0x10)
	struct TArray<struct FNameWrapper> Decorations; // 0x48(0x10)
};

// ScriptStruct Madness.MadConvoySkinSetData
// Size: 0x50 (Inherited: 0x08)
struct FMadConvoySkinSetData : FTableRowBase {
	struct FText FullName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	int32_t ColorId; // 0x38(0x04)
	int32_t DecalId; // 0x3c(0x04)
	struct TArray<struct FNameWrapper> Decorations; // 0x40(0x10)
};

// ScriptStruct Madness.MadConvoyDecorationData
// Size: 0xc0 (Inherited: 0x08)
struct FMadConvoyDecorationData : FTableRowBase {
	struct FMadConvoyCustomizationUIModel UIModel; // 0x08(0x90)
	struct FNameWrapper Slot; // 0x98(0x10)
	struct TArray<struct FMadConvoyAttachment> Attachments; // 0xa8(0x10)
	char UnknownData_B8_0 : 7; // 0xb8(0x01)
	bool bIsAvailableInUI : 1; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct Madness.MadConvoyAttachment
// Size: 0x70 (Inherited: 0x00)
struct FMadConvoyAttachment {
	struct FTransform LocalTransform; // 0x00(0x30)
	struct TArray<struct FName> Sockets; // 0x30(0x10)
	struct TSoftObjectPtr<struct UStaticMesh> Mesh; // 0x40(0x28)
	char UnknownData_68_0 : 7; // 0x68(0x01)
	bool bDepenetratePawnsUponCreation : 1; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// ScriptStruct Madness.MadConvoyDecorationSlotData
// Size: 0x40 (Inherited: 0x08)
struct FMadConvoyDecorationSlotData : FTableRowBase {
	struct FText FullName; // 0x08(0x18)
	struct FName CameraComponentName; // 0x20(0x08)
	struct FName CameraSocket; // 0x28(0x08)
	float CameraRadius; // 0x30(0x04)
	struct FRotator CameraRotation; // 0x34(0x0c)
};

// ScriptStruct Madness.MadConvoyDevelopmentData
// Size: 0x48 (Inherited: 0x08)
struct FMadConvoyDevelopmentData : FTableRowBase {
	enum class EMadnessSkillPath SkillPath; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bSkillUnlock : 1; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	int32_t UpgradesRequired; // 0x0c(0x04)
	struct TSoftObjectPtr<struct UMadSkillData> SkillData; // 0x10(0x28)
	struct TArray<struct FMadConvoyAttachment> Attachments; // 0x38(0x10)
};

// ScriptStruct Madness.MadConvoyUpgradeData
// Size: 0x168 (Inherited: 0x08)
struct FMadConvoyUpgradeData : FTableRowBase {
	struct FText FullName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	enum class EMadnessSkillPath SkillPath; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct TSoftObjectPtr<struct UMadSkillData> SkillData; // 0x40(0x28)
	struct TSoftObjectPtr<struct UTexture2D> IconUnavailable; // 0x68(0x28)
	struct TSoftObjectPtr<struct UTexture2D> IconAvailableUnaffordable; // 0x90(0x28)
	struct TSoftObjectPtr<struct UTexture2D> IconAvailableAffordable; // 0xb8(0x28)
	struct TSoftObjectPtr<struct UTexture2D> IconBought; // 0xe0(0x28)
	struct TArray<struct FNameWrapper> LinkedUpgrades; // 0x108(0x10)
	struct TMap<struct FName, int32_t> Cost; // 0x118(0x50)
};

// ScriptStruct Madness.MadConvoyDevelopment
// Size: 0xc0 (Inherited: 0x00)
struct FMadConvoyDevelopment {
	char UnknownData_0[0x30]; // 0x00(0x30)
	struct FWeakObjectPtr<struct USkeletalMeshComponent> TruckMesh; // 0x30(0x08)
	struct TMap<struct FName, struct FMadConvoyParts> DecorationParts; // 0x38(0x50)
	struct TArray<struct UMaterialInstanceDynamic*> TruckMaterials; // 0x88(0x10)
	char UnknownData_98[0x28]; // 0x98(0x28)
};

// ScriptStruct Madness.MadConvoyParts
// Size: 0x18 (Inherited: 0x00)
struct FMadConvoyParts {
	struct FName PartsName; // 0x00(0x08)
	struct TArray<struct AMadConvoyPart*> Parts; // 0x08(0x10)
};

// ScriptStruct Madness.CheckpointToProgressPair
// Size: 0x08 (Inherited: 0x00)
struct FCheckpointToProgressPair {
	int32_t CheckpointId; // 0x00(0x04)
	float ProgressToLoad; // 0x04(0x04)
};

// ScriptStruct Madness.MadTruckObstacles
// Size: 0x50 (Inherited: 0x00)
struct FMadTruckObstacles {
	struct TSet<struct FWeakObjectPtr<struct AActor>> Obstacles; // 0x00(0x50)
};

// ScriptStruct Madness.MadConvoyCustomizationSection
// Size: 0x38 (Inherited: 0x00)
struct FMadConvoyCustomizationSection {
	struct FText Title; // 0x00(0x18)
	struct FName ID; // 0x18(0x08)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool HasTabs : 1; // 0x20(0x01)
	char UnknownData_21_0 : 7; // 0x21(0x01)
	bool bEnabled : 1; // 0x21(0x01)
	char UnknownData_22_0 : 7; // 0x22(0x01)
	bool bSeen : 1; // 0x22(0x01)
	char UnknownData_23[0x5]; // 0x23(0x05)
	struct TArray<struct FMadConvoyCustomizationTab> Tabs; // 0x28(0x10)
};

// ScriptStruct Madness.MadConvoyCustomizationTab
// Size: 0x30 (Inherited: 0x00)
struct FMadConvoyCustomizationTab {
	struct FText Title; // 0x00(0x18)
	struct FName ID; // 0x18(0x08)
	struct TArray<struct FMadConvoyCustomizationCategory> Categories; // 0x20(0x10)
};

// ScriptStruct Madness.MadConvoyCustomizationCategory
// Size: 0x40 (Inherited: 0x00)
struct FMadConvoyCustomizationCategory {
	struct FText Title; // 0x00(0x18)
	struct FName ID; // 0x18(0x08)
	struct TArray<struct FMadConvoyCustomizationItem> Items; // 0x20(0x10)
	struct TArray<int32_t> EquippedItemsIndexes; // 0x30(0x10)
};

// ScriptStruct Madness.MadConvoyCustomizationItem
// Size: 0xb0 (Inherited: 0x00)
struct FMadConvoyCustomizationItem {
	struct FName ID; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool IsOwned : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool IsLocked : 1; // 0x09(0x01)
	char UnknownData_A_0 : 7; // 0x0a(0x01)
	bool IsEquipped : 1; // 0x0a(0x01)
	char UnknownData_B_0 : 7; // 0x0b(0x01)
	bool bUseColorCode : 1; // 0x0b(0x01)
	char UnknownData_C_0 : 7; // 0x0c(0x01)
	bool bIsAvailableByDefault : 1; // 0x0c(0x01)
	char UnknownData_D_0 : 7; // 0x0d(0x01)
	bool bIsAvailableInUI : 1; // 0x0d(0x01)
	char UnknownData_E[0x2]; // 0x0e(0x02)
	struct FText Name; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct FText Requirements; // 0x40(0x18)
	struct FString IconPath; // 0x58(0x10)
	enum class EMadItemRarity Rarity; // 0x68(0x01)
	char UnknownData_69[0x3]; // 0x69(0x03)
	struct FMadConvoyCustomizationColorData Color; // 0x6c(0x10)
	enum class EMadConvoyCustomizationItemType ItemType; // 0x7c(0x01)
	char UnknownData_7D_0 : 7; // 0x7d(0x01)
	bool bHideUntilUnlocked : 1; // 0x7d(0x01)
	char UnknownData_7E[0x32]; // 0x7e(0x32)
};

// ScriptStruct Madness.MadConvoyCustomizationColorData
// Size: 0x10 (Inherited: 0x00)
struct FMadConvoyCustomizationColorData {
	float R; // 0x00(0x04)
	float G; // 0x04(0x04)
	float B; // 0x08(0x04)
	float A; // 0x0c(0x04)
};

// ScriptStruct Madness.MadCreditsUIData
// Size: 0x50 (Inherited: 0x00)
struct FMadCreditsUIData {
	struct TArray<struct FMadCreditsItemUIData> CreditsItems; // 0x00(0x10)
	struct FText Title; // 0x10(0x18)
	struct FText Copyright; // 0x28(0x18)
	struct FString Image; // 0x40(0x10)
};

// ScriptStruct Madness.MadCreditsItemUIData
// Size: 0x60 (Inherited: 0x00)
struct FMadCreditsItemUIData {
	struct FName ID; // 0x00(0x08)
	struct FName SectionKey; // 0x08(0x08)
	struct FString Title; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FString Position; // 0x30(0x10)
	struct FString Type; // 0x40(0x10)
	struct FString Image; // 0x50(0x10)
};

// ScriptStruct Madness.BlastComponentAndMeshPair
// Size: 0x28 (Inherited: 0x00)
struct FBlastComponentAndMeshPair {
	struct UMadBlastComponent* Component; // 0x00(0x08)
	struct UBlastMesh* Mesh; // 0x08(0x08)
	struct TArray<struct TSoftObjectPtr<struct UMaterialInstance>> Materials; // 0x10(0x10)
	char UnknownData_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Madness.CustomizationBlastAttachment
// Size: 0x18 (Inherited: 0x00)
struct FCustomizationBlastAttachment {
	struct FName SocketName; // 0x00(0x08)
	struct TArray<struct FBlastMeshWithProbability> BlastMeshesWithProbabilities; // 0x08(0x10)
};

// ScriptStruct Madness.BlastMeshWithProbability
// Size: 0x100 (Inherited: 0x00)
struct FBlastMeshWithProbability {
	struct TSoftObjectPtr<struct UBlastMesh> BlastMesh; // 0x00(0x28)
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FTransform MeshTransform; // 0x30(0x30)
	struct TArray<struct TSoftObjectPtr<struct UMaterialInstance>> Materials; // 0x60(0x10)
	struct TArray<struct FBlastMaterialProperty> HealthMaterialProperties; // 0x70(0x10)
	char UnknownData_80_0 : 7; // 0x80(0x01)
	bool HidesHair : 1; // 0x80(0x01)
	char UnknownData_81_0 : 7; // 0x81(0x01)
	bool HidesBeard : 1; // 0x81(0x01)
	char UnknownData_82_0 : 7; // 0x82(0x01)
	bool HidesPiercing : 1; // 0x82(0x01)
	char UnknownData_83_0 : 7; // 0x83(0x01)
	bool bHiddeOnSpawn : 1; // 0x83(0x01)
	float Probability; // 0x84(0x04)
	float NormalizedProbability; // 0x88(0x04)
	float DefaultHealth; // 0x8c(0x04)
	struct FScalableFloat ScaledHealth; // 0x90(0x20)
	char UnknownData_B0_0 : 7; // 0xb0(0x01)
	bool bUseScaledHealthAsOwnersHealthMultiplier : 1; // 0xb0(0x01)
	char UnknownData_B1_0 : 7; // 0xb1(0x01)
	bool bOverrideBlastMaterial : 1; // 0xb1(0x01)
	char UnknownData_B2[0x2]; // 0xb2(0x02)
	struct FBlastMaterial BlastMaterial; // 0xb4(0x18)
	float DamageSoakFactor; // 0xcc(0x04)
	char UnknownData_D0_0 : 7; // 0xd0(0x01)
	bool IgnoreDamageSoakFactorOnSelf : 1; // 0xd0(0x01)
	char UnknownData_D1[0x3]; // 0xd1(0x03)
	float OnBreakImpulsStrength; // 0xd4(0x04)
	float OnBreakImpulsRadius; // 0xd8(0x04)
	float OnBreakDamageMinRadius; // 0xdc(0x04)
	float OnBreakDamageMaxRadius; // 0xe0(0x04)
	float OnBreakDamage; // 0xe4(0x04)
	struct FVector OnBreakOffsetVector; // 0xe8(0x0c)
	char UnknownData_F4[0xc]; // 0xf4(0x0c)
};

// ScriptStruct Madness.BlastMaterialProperty
// Size: 0x0c (Inherited: 0x00)
struct FBlastMaterialProperty {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool ReverseValue : 1; // 0x00(0x01)
	enum class None MaterialIndex; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	struct FName PropertyName; // 0x04(0x08)
};

// ScriptStruct Madness.MadBlastProgram
// Size: 0x10 (Inherited: 0x00)
struct FMadBlastProgram {
	float MinRadius; // 0x00(0x04)
	float MaxRadius; // 0x04(0x04)
	float DamageMult; // 0x08(0x04)
	char UnknownData_C_0 : 7; // 0x0c(0x01)
	bool bImpulseVelChange : 1; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Madness.BaseChoiceUIData
// Size: 0x50 (Inherited: 0x00)
struct FBaseChoiceUIData {
	struct FText DisplayText; // 0x00(0x18)
	struct FText QuestToReplay; // 0x18(0x18)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bAlreadyUsed : 1; // 0x30(0x01)
	char UnknownData_31_0 : 7; // 0x31(0x01)
	bool bVisible : 1; // 0x31(0x01)
	char UnknownData_32[0x6]; // 0x32(0x06)
	struct FString IconPath; // 0x38(0x10)
	enum class EChoiceType Type; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Madness.MadDifficultyUnlockUI
// Size: 0xf8 (Inherited: 0x00)
struct FMadDifficultyUnlockUI {
	enum class None DiffcultyLevel; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FMadUniversalRewardUIData Reward; // 0x08(0xf0)
};

// ScriptStruct Madness.MadUniversalRewardUIData
// Size: 0xf0 (Inherited: 0x00)
struct FMadUniversalRewardUIData {
	float Experience; // 0x00(0x04)
	enum class None ClassPoints; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct FMadUniversalRewardUIItemData Weapon; // 0x08(0x50)
	struct FMadUniversalRewardUIItemData Armor; // 0x58(0x50)
	struct TArray<struct FMadResourceUIData> Resources; // 0xa8(0x10)
	struct TArray<struct FText> Emotes; // 0xb8(0x10)
	struct TArray<struct FItemOfferData> ConsumableReward; // 0xc8(0x10)
	char UnknownData_D8_0 : 7; // 0xd8(0x01)
	bool bIsRepeatableReward : 1; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct FMadLootReward> SelectableRewards; // 0xe0(0x10)
};

// ScriptStruct Madness.MadLootReward
// Size: 0x1c (Inherited: 0x00)
struct FMadLootReward {
	enum class EMadLootRewardType Type; // 0x00(0x01)
	enum class EMadItemRarity ForcedRarity; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float Weight; // 0x04(0x04)
	struct FName UniqueName; // 0x08(0x08)
	struct FFloatInterval ResourceMult; // 0x10(0x08)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bMandatory : 1; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Madness.MadResourceUIData
// Size: 0x60 (Inherited: 0x00)
struct FMadResourceUIData {
	struct FName ID; // 0x00(0x08)
	struct FText FullName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FString IconPath; // 0x38(0x10)
	enum class EMadResourceCategory Category; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	float Value; // 0x4c(0x04)
	int32_t Limit; // 0x50(0x04)
	char UnknownData_54_0 : 7; // 0x54(0x01)
	bool bShowLimit : 1; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	float Equivalent; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Madness.MadUniversalRewardUIItemData
// Size: 0x50 (Inherited: 0x00)
struct FMadUniversalRewardUIItemData {
	struct TMap<enum class EMadItemRarity, uint32_t> Items; // 0x00(0x50)
};

// ScriptStruct Madness.MadDifficultyUnlock
// Size: 0x02 (Inherited: 0x00)
struct FMadDifficultyUnlock {
	enum class None DiffcultyLevel; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bIsRewardClaimed : 1; // 0x01(0x01)
};

// ScriptStruct Madness.MarketingCameraEffectData
// Size: 0x40 (Inherited: 0x00)
struct FMarketingCameraEffectData {
	struct TSoftObjectPtr<struct UParticleSystem> ParticleEffect; // 0x00(0x28)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bOverrideInstanceParams : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct TArray<struct FParticleSysParam> InstanceParameters; // 0x30(0x10)
};

// ScriptStruct Madness.MadEffectsGlobals_Loot
// Size: 0xe0 (Inherited: 0x00)
struct FMadEffectsGlobals_Loot {
	struct TMap<enum class EMadItemRarity, struct FMadLootEffects> Items; // 0x00(0x50)
	struct TMap<struct FNameWrapper, struct FMadLootEffects> Resources; // 0x50(0x50)
	struct FMadLootEffects Fact; // 0xa0(0x20)
	struct FMadLootEffects Ammo; // 0xc0(0x20)
};

// ScriptStruct Madness.MadLootEffects
// Size: 0x20 (Inherited: 0x00)
struct FMadLootEffects {
	struct UParticleSystem* SpawnEffect; // 0x00(0x08)
	struct UParticleSystem* ImpactEffect; // 0x08(0x08)
	struct FLinearColor Color; // 0x10(0x10)
};

// ScriptStruct Madness.EmoteAbilityData
// Size: 0x60 (Inherited: 0x00)
struct FEmoteAbilityData {
	struct TSoftObjectPtr<struct UAnimMontage> EmoteMontage; // 0x00(0x28)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bEnableAdvancedConfig : 1; // 0x28(0x01)
	char UnknownData_29_0 : 7; // 0x29(0x01)
	bool bBlockSkills : 1; // 0x29(0x01)
	char UnknownData_2A_0 : 7; // 0x2a(0x01)
	bool bBlockCoverUsage : 1; // 0x2a(0x01)
	char UnknownData_2B_0 : 7; // 0x2b(0x01)
	bool bBlockShooting : 1; // 0x2b(0x01)
	char UnknownData_2C_0 : 7; // 0x2c(0x01)
	bool bBlockMoveActions : 1; // 0x2c(0x01)
	char UnknownData_2D_0 : 7; // 0x2d(0x01)
	bool bBlockTargeting : 1; // 0x2d(0x01)
	char UnknownData_2E_0 : 7; // 0x2e(0x01)
	bool bHideLeftHandWeapon : 1; // 0x2e(0x01)
	char UnknownData_2F_0 : 7; // 0x2f(0x01)
	bool bHideRightHandWeapon : 1; // 0x2f(0x01)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bHideSideArm : 1; // 0x30(0x01)
	char UnknownData_31_0 : 7; // 0x31(0x01)
	bool bHideHolsteredWeapon : 1; // 0x31(0x01)
	char UnknownData_32_0 : 7; // 0x32(0x01)
	bool bInterruptByMoveInput : 1; // 0x32(0x01)
	char UnknownData_33_0 : 7; // 0x33(0x01)
	bool bInterruptByCoverChange : 1; // 0x33(0x01)
	char UnknownData_34_0 : 7; // 0x34(0x01)
	bool bInterruptByShooting : 1; // 0x34(0x01)
	char UnknownData_35_0 : 7; // 0x35(0x01)
	bool bInterruptByUsingSkills : 1; // 0x35(0x01)
	char UnknownData_36_0 : 7; // 0x36(0x01)
	bool bInterruptByTargeting : 1; // 0x36(0x01)
	char UnknownData_37[0x1]; // 0x37(0x01)
	struct FText TextToDisplay; // 0x38(0x18)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bDisplayText : 1; // 0x50(0x01)
	char UnknownData_51_0 : 7; // 0x51(0x01)
	bool bIgnoreLookInput : 1; // 0x51(0x01)
	char UnknownData_52_0 : 7; // 0x52(0x01)
	bool bNeedsToBeStationary : 1; // 0x52(0x01)
	char UnknownData_53_0 : 7; // 0x53(0x01)
	bool bNeedsIdleWeapon : 1; // 0x53(0x01)
	char UnknownData_54_0 : 7; // 0x54(0x01)
	bool bCannotBeInCover : 1; // 0x54(0x01)
	char UnknownData_55_0 : 7; // 0x55(0x01)
	bool bPlayExitSection : 1; // 0x55(0x01)
	char UnknownData_56_0 : 7; // 0x56(0x01)
	bool bRotateToLookAt : 1; // 0x56(0x01)
	char UnknownData_57[0x1]; // 0x57(0x01)
	float RotateToLookAtDuration; // 0x58(0x04)
	char UnknownData_5C_0 : 7; // 0x5c(0x01)
	bool bBlockMovement : 1; // 0x5c(0x01)
	char UnknownData_5D_0 : 7; // 0x5d(0x01)
	bool bFirstSectionIsInterruptable : 1; // 0x5d(0x01)
	char UnknownData_5E[0x2]; // 0x5e(0x02)
};

// ScriptStruct Madness.EmoteData
// Size: 0xa0 (Inherited: 0x00)
struct FEmoteData {
	struct FText DisplayName; // 0x00(0x18)
	int32_t Index; // 0x18(0x04)
	char UnknownData_1C_0 : 7; // 0x1c(0x01)
	bool bIsOwned : 1; // 0x1c(0x01)
	char UnknownData_1D_0 : 7; // 0x1d(0x01)
	bool bIsLocked : 1; // 0x1d(0x01)
	char UnknownData_1E_0 : 7; // 0x1e(0x01)
	bool bIsEquipped : 1; // 0x1e(0x01)
	char UnknownData_1F[0x1]; // 0x1f(0x01)
	struct FString ID; // 0x20(0x10)
	struct FText ItemName; // 0x30(0x18)
	enum class EMadItemRarity ItemRarity; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct FText ItemDescription; // 0x50(0x18)
	struct FText ItemRequirements; // 0x68(0x18)
	struct FString IconPath; // 0x80(0x10)
	char UnknownData_90[0x10]; // 0x90(0x10)
};

// ScriptStruct Madness.MadEncounterChallengeSetupInfo
// Size: 0x48 (Inherited: 0x00)
struct FMadEncounterChallengeSetupInfo {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bEnabled : 1; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FText ChallengeModId; // 0x08(0x18)
	struct TSoftObjectPtr<struct UFWEncounterSetupOverrideData> SetupOverrideData; // 0x20(0x28)
};

// ScriptStruct Madness.MadEnochAccoladeSaveData
// Size: 0x38 (Inherited: 0x00)
struct FMadEnochAccoladeSaveData {
	struct FMadEnochAccoladeConditionSaveData SavedProgress; // 0x00(0x28)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bOverrideHidden : 1; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	int32_t TiersRewardClaimed; // 0x2c(0x04)
	int32_t TiersRewardSeen; // 0x30(0x04)
	int32_t CurrentTierIdx; // 0x34(0x04)
};

// ScriptStruct Madness.MadEnochAccoladeConditionSaveData
// Size: 0x28 (Inherited: 0x00)
struct FMadEnochAccoladeConditionSaveData {
	struct FMadEnochAccoladeTrackerSaveData TrackerSaveData; // 0x00(0x28)
};

// ScriptStruct Madness.MadEnochAccoladeTrackerSaveData
// Size: 0x28 (Inherited: 0x00)
struct FMadEnochAccoladeTrackerSaveData {
	int32_t TrackedValue; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> TrackedNames; // 0x08(0x10)
	struct FString TrackedString; // 0x18(0x10)
};

// ScriptStruct Madness.MadEnochAccoladeArrayWrapper
// Size: 0x10 (Inherited: 0x00)
struct FMadEnochAccoladeArrayWrapper {
	struct TArray<struct UMadEnochAccolade*> Accolades; // 0x00(0x10)
};

// ScriptStruct Madness.MadEnochAccoladesControllerSaveData
// Size: 0x88 (Inherited: 0x00)
struct FMadEnochAccoladesControllerSaveData {
	struct TArray<struct FGuid> SavedCompletedAccoladesIDs; // 0x00(0x10)
	struct TMap<struct FGuid, struct FMadEnochAccoladeSaveData> SavedAccolades; // 0x10(0x50)
	struct FMadEnochAccoladesProgressData SavedAccoladesProgressData; // 0x60(0x18)
	char UnknownData_78_0 : 7; // 0x78(0x01)
	bool bWasSavedInDemo : 1; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	struct FName LastSavedPlatformName; // 0x7c(0x08)
	char UnknownData_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Madness.MadEnochAccoladesProgressData
// Size: 0x18 (Inherited: 0x00)
struct FMadEnochAccoladesProgressData {
	int32_t Level; // 0x00(0x04)
	int32_t APP; // 0x04(0x04)
	struct TArray<struct FAccoladeLevelUnlockData> UnlockedLevels; // 0x08(0x10)
};

// ScriptStruct Madness.AccoladeLevelUnlockData
// Size: 0x08 (Inherited: 0x00)
struct FAccoladeLevelUnlockData {
	int32_t Level; // 0x00(0x04)
	char UnknownData_4_0 : 7; // 0x04(0x01)
	bool bRewardClaimed : 1; // 0x04(0x01)
	char UnknownData_5_0 : 7; // 0x05(0x01)
	bool bRewardSeen : 1; // 0x05(0x01)
	char UnknownData_6[0x2]; // 0x06(0x02)
};

// ScriptStruct Madness.EnochAccoladesLevelInfo
// Size: 0x18 (Inherited: 0x00)
struct FEnochAccoladesLevelInfo {
	int32_t Level; // 0x00(0x04)
	int32_t AppRequired; // 0x04(0x04)
	struct TArray<struct FName> Rewards; // 0x08(0x10)
};

// ScriptStruct Madness.MadEnochAccoladeTimedSettings
// Size: 0x28 (Inherited: 0x00)
struct FMadEnochAccoladeTimedSettings {
	enum class ETimedAccoladeTypes TimedAccoladeType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FDateTime StartPeriod; // 0x08(0x08)
	struct FDateTime EndPeriod; // 0x10(0x08)
	struct FTimespan TimeFrame; // 0x18(0x08)
	struct FTimespan MaxTimeBetween; // 0x20(0x08)
};

// ScriptStruct Madness.AccoladeLevelUnlockedTier
// Size: 0x38 (Inherited: 0x30)
struct FAccoladeLevelUnlockedTier : FBaseTier {
	int32_t LevelRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.ChallengeTier
// Size: 0x38 (Inherited: 0x30)
struct FChallengeTier : FBaseTier {
	int32_t ChallengesRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.ChallengeTierUnlockedTier
// Size: 0x38 (Inherited: 0x30)
struct FChallengeTierUnlockedTier : FBaseTier {
	int32_t UnlocksRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.ChestOpenedTier
// Size: 0x38 (Inherited: 0x30)
struct FChestOpenedTier : FBaseTier {
	int32_t ChestsRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.CompleteAccoladesTier
// Size: 0x38 (Inherited: 0x30)
struct FCompleteAccoladesTier : FBaseTier {
	int32_t AccoladesRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.CompleteQuestTier
// Size: 0x38 (Inherited: 0x30)
struct FCompleteQuestTier : FBaseTier {
	int32_t QuestsCompledRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.CompleteQuestPoolTier
// Size: 0x38 (Inherited: 0x30)
struct FCompleteQuestPoolTier : FBaseTier {
	int32_t QuestPoolsCompledRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.ConvoyUpgraded
// Size: 0x38 (Inherited: 0x30)
struct FConvoyUpgraded : FBaseTier {
	int32_t UpgradesRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.DamageDoneTier
// Size: 0x38 (Inherited: 0x30)
struct FDamageDoneTier : FBaseTier {
	int32_t DamageRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.DiaryTier
// Size: 0x38 (Inherited: 0x30)
struct FDiaryTier : FBaseTier {
	int32_t EntriesRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.EffectOnTargetTier
// Size: 0x38 (Inherited: 0x30)
struct FEffectOnTargetTier : FBaseTier {
	int32_t ValueRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.EmoteTier
// Size: 0x38 (Inherited: 0x30)
struct FEmoteTier : FBaseTier {
	int32_t PlayedRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.EnemyEventActionTier
// Size: 0x38 (Inherited: 0x30)
struct FEnemyEventActionTier : FBaseTier {
	int32_t ActionsRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.AccoladeHarvestTier
// Size: 0x38 (Inherited: 0x30)
struct FAccoladeHarvestTier : FBaseTier {
	int32_t Value; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.HealTier
// Size: 0x38 (Inherited: 0x30)
struct FHealTier : FBaseTier {
	int32_t HealingRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.ItemCollectedTier
// Size: 0x38 (Inherited: 0x30)
struct FItemCollectedTier : FBaseTier {
	int32_t ItemsRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.ItemEnhancedTier
// Size: 0x38 (Inherited: 0x30)
struct FItemEnhancedTier : FBaseTier {
	int32_t EnhancesRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.ItemEquipTier
// Size: 0x38 (Inherited: 0x30)
struct FItemEquipTier : FBaseTier {
	int32_t EquipRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.ItemImprovedTier
// Size: 0x38 (Inherited: 0x30)
struct FItemImprovedTier : FBaseTier {
	int32_t ImprovementsRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.ItemModChangedTier
// Size: 0x38 (Inherited: 0x30)
struct FItemModChangedTier : FBaseTier {
	int32_t ModsRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.ItemPickedUpTier
// Size: 0x38 (Inherited: 0x30)
struct FItemPickedUpTier : FBaseTier {
	int32_t ItemsRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.ItemSellTier
// Size: 0x38 (Inherited: 0x30)
struct FItemSellTier : FBaseTier {
	int32_t ItemsSoldRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.KillTier
// Size: 0x38 (Inherited: 0x30)
struct FKillTier : FBaseTier {
	int32_t KillsRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.LocationDiscoveredTier
// Size: 0x38 (Inherited: 0x30)
struct FLocationDiscoveredTier : FBaseTier {
	int32_t LocationsRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.MaxDifficultyChangedTier
// Size: 0x38 (Inherited: 0x30)
struct FMaxDifficultyChangedTier : FBaseTier {
	int32_t ChangesRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.ModsDiscoveredTier
// Size: 0x38 (Inherited: 0x30)
struct FModsDiscoveredTier : FBaseTier {
	int32_t ModsRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.PlayerLevelChangedTier
// Size: 0x38 (Inherited: 0x30)
struct FPlayerLevelChangedTier : FBaseTier {
	int32_t LevelRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.QuestObjectiveTier
// Size: 0x38 (Inherited: 0x30)
struct FQuestObjectiveTier : FBaseTier {
	int32_t ValueRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.ResourceGainedTier
// Size: 0x38 (Inherited: 0x30)
struct FResourceGainedTier : FBaseTier {
	int32_t ResourceRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.ReviveTier
// Size: 0x38 (Inherited: 0x30)
struct FReviveTier : FBaseTier {
	int32_t RevivesRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.SkillDamageAbsorbedTier
// Size: 0x38 (Inherited: 0x30)
struct FSkillDamageAbsorbedTier : FBaseTier {
	int32_t DamageAbsorbed; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.SkillLeveledUpTier
// Size: 0x38 (Inherited: 0x30)
struct FSkillLeveledUpTier : FBaseTier {
	int32_t NumberRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.SkillUnlockedTier
// Size: 0x38 (Inherited: 0x30)
struct FSkillUnlockedTier : FBaseTier {
	int32_t SkillsRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.SkillUsedTier
// Size: 0x38 (Inherited: 0x30)
struct FSkillUsedTier : FBaseTier {
	int32_t UsesRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.SlowTrapBulletsTier
// Size: 0x38 (Inherited: 0x30)
struct FSlowTrapBulletsTier : FBaseTier {
	int32_t BulletsRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.AccoladeCollectiveCheck
// Size: 0x20 (Inherited: 0x00)
struct FAccoladeCollectiveCheck {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bCheckTime : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t CollectiveValueRequired; // 0x04(0x04)
	struct FTimespan TimeSpanRequired; // 0x08(0x08)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Madness.AccoladeRicochetCheck
// Size: 0x10 (Inherited: 0x00)
struct FAccoladeRicochetCheck {
	struct UMadDamageType* DamageType; // 0x00(0x08)
	struct UMadGameplayEffect* TargetEffect; // 0x08(0x08)
};

// ScriptStruct Madness.SpecificEffectAppliedTier
// Size: 0x38 (Inherited: 0x30)
struct FSpecificEffectAppliedTier : FBaseTier {
	int32_t ValueRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.TakeApartTier
// Size: 0x38 (Inherited: 0x30)
struct FTakeApartTier : FBaseTier {
	int32_t ItemsTakenApartRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.TimeSpentInGroupTier
// Size: 0x38 (Inherited: 0x30)
struct FTimeSpentInGroupTier : FBaseTier {
	struct FTimespan TimeRequired; // 0x30(0x08)
};

// ScriptStruct Madness.TreeUpgraded
// Size: 0x38 (Inherited: 0x30)
struct FTreeUpgraded : FBaseTier {
	int32_t UpgradesRequired; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Madness.MadExplorerFlagsCapturePointStatus
// Size: 0x10 (Inherited: 0x00)
struct FMadExplorerFlagsCapturePointStatus {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bEnabled : 1; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UMadExplorerFlagsCapturePointData* Data; // 0x08(0x08)
};

// ScriptStruct Madness.MadTargetCondition
// Size: 0x38 (Inherited: 0x00)
struct FMadTargetCondition {
	enum class EMadTargetConditionType Type; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FGameplayTag Tag; // 0x04(0x08)
	enum class ETeam Team; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct AActor* ActorClass; // 0x10(0x08)
	enum class EMadDotConditionType FirstVector; // 0x18(0x01)
	enum class EMadDotConditionType SecondVector; // 0x19(0x01)
	char UnknownData_1A[0x2]; // 0x1a(0x02)
	struct FVector CustomVector; // 0x1c(0x0c)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bIgnoreZ : 1; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	float MinDot; // 0x2c(0x04)
	float MaxDot; // 0x30(0x04)
	char UnknownData_34_0 : 7; // 0x34(0x01)
	bool bInvertedCondition : 1; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
};

// ScriptStruct Madness.MadKeywordData
// Size: 0x18 (Inherited: 0x00)
struct FMadKeywordData {
	struct FText KeywordName; // 0x00(0x18)
};

// ScriptStruct Madness.MadStatusData
// Size: 0x28 (Inherited: 0x00)
struct FMadStatusData {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bFlashHealthBarOnReceivingStatus : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bIsDebuff : 1; // 0x01(0x01)
	enum class EStatusType Type; // 0x02(0x01)
	char UnknownData_3[0x5]; // 0x03(0x05)
	struct FText DisplayName; // 0x08(0x18)
	struct UTexture2D* Icon; // 0x20(0x08)
};

// ScriptStruct Madness.MadThrowData
// Size: 0x88 (Inherited: 0x00)
struct FMadThrowData {
	float MinThrowPitch; // 0x00(0x04)
	float MaxThrowPitch; // 0x04(0x04)
	struct UCurveVector* ThrowOriginOffsetCurve; // 0x08(0x08)
	struct UCurveVector* ThrowOriginOffsetCurve_Yaw; // 0x10(0x08)
	struct UCurveVector* ThrowOriginOffsetCurve_MidCoverYaw; // 0x18(0x08)
	struct UCurveVector* ThrowOriginOffsetCurve_MidCoverPitch; // 0x20(0x08)
	struct UCurveVector* ThrowOriginOffsetCurve_HighCoverYaw; // 0x28(0x08)
	struct UCurveVector* ThrowOriginOffsetCurve_HighCoverPitch; // 0x30(0x08)
	struct FVector ThrowOriginOffsetMidCover; // 0x38(0x0c)
	struct FVector ThrowOriginOffsetHighCover; // 0x44(0x0c)
	struct UCurveFloat* ThrowPitchCurve; // 0x50(0x08)
	struct UCurveFloat* ThrowSpeedCurve; // 0x58(0x08)
	float ThrowZoomLength; // 0x60(0x04)
	float ThrowZoomFOV; // 0x64(0x04)
	float ThrowZoomInDuration; // 0x68(0x04)
	float ThrowZoomOutDuration; // 0x6c(0x04)
	struct FVector ThrowZoomOffset; // 0x70(0x0c)
	float HighThrowThreshold; // 0x7c(0x04)
	float MidThrowThreshold; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Madness.DamageAttributeData
// Size: 0x48 (Inherited: 0x00)
struct FDamageAttributeData {
	char UnknownData_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Madness.MadnessPathData
// Size: 0x30 (Inherited: 0x00)
struct FMadnessPathData {
	struct FName RootNodeName; // 0x00(0x08)
	struct FColor Color; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UMadSkillData*> Skills; // 0x10(0x10)
	struct UMadPlayerAnimData* PathAnimData; // 0x20(0x08)
	struct UDataTable* ClassTreeTable; // 0x28(0x08)
};

// ScriptStruct Madness.MadnessLevelUnlock
// Size: 0x14 (Inherited: 0x00)
struct FMadnessLevelUnlock {
	enum class EMadnessUpgradeType UpgradeType; // 0x00(0x01)
	enum class EMadnessSkillPath Path; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	int32_t Level; // 0x04(0x04)
	int32_t MasteryPoints; // 0x08(0x04)
	int32_t SkillIndex; // 0x0c(0x04)
	int32_t PathIndex; // 0x10(0x04)
};

// ScriptStruct Madness.CustomMagnitude
// Size: 0x68 (Inherited: 0x00)
struct FCustomMagnitude {
	enum class ECustomMagnitudeCalculation MagnitudeCalculationType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FScalableFloat FloatMagnitude; // 0x08(0x20)
	struct FGameplayAttribute AttributeMagnitude; // 0x28(0x38)
	struct UMadCustomMagnitudeCalculation* CustomCalculationClassMagnitude; // 0x60(0x08)
};

// ScriptStruct Madness.PartyQuestInfo
// Size: 0x20 (Inherited: 0x00)
struct FPartyQuestInfo {
	struct FName QuestID; // 0x00(0x08)
	int32_t QuestStage; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> ObjectivesID; // 0x10(0x10)
};

// ScriptStruct Madness.DisplayAdvancedSettings
// Size: 0x20 (Inherited: 0x00)
struct FDisplayAdvancedSettings {
	int32_t QualityPreset; // 0x00(0x04)
	int32_t ViewDistanceQuality; // 0x04(0x04)
	int32_t AntialiasingQuality; // 0x08(0x04)
	int32_t FoliageQuality; // 0x0c(0x04)
	int32_t PostProcessQuality; // 0x10(0x04)
	int32_t ShadowQuality; // 0x14(0x04)
	int32_t EffectsQuality; // 0x18(0x04)
	int32_t TextureQuality; // 0x1c(0x04)
};

// ScriptStruct Madness.DisplaySettings
// Size: 0x30 (Inherited: 0x00)
struct FDisplaySettings {
	float BRIGHTNESS; // 0x00(0x04)
	float ResolutionScaling; // 0x04(0x04)
	float CameraFov; // 0x08(0x04)
	struct FIntPoint CurrentResolution; // 0x0c(0x08)
	char UnknownData_14[0x4]; // 0x14(0x04)
	int32_t FrameRateLimit; // 0x18(0x04)
	enum class EWindowMode MadFullscreenMode; // 0x1c(0x01)
	char UnknownData_1D_0 : 7; // 0x1d(0x01)
	bool bWindowLock : 1; // 0x1d(0x01)
	char UnknownData_1E_0 : 7; // 0x1e(0x01)
	bool bFrameRateLimitEnabled : 1; // 0x1e(0x01)
	char UnknownData_1F_0 : 7; // 0x1f(0x01)
	bool bUseVSync : 1; // 0x1f(0x01)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bUseHDRDisplayOutput : 1; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	float HDRLuminanceMid; // 0x24(0x04)
	int32_t DLSSQuality; // 0x28(0x04)
	int32_t FullscreenMonitorIndex; // 0x2c(0x04)
};

// ScriptStruct Madness.MadOptionIDArray
// Size: 0x18 (Inherited: 0x08)
struct FMadOptionIDArray : FTableRowBase {
	struct TArray<struct FName> IDs; // 0x08(0x10)
};

// ScriptStruct Madness.MadOptionUIData
// Size: 0xf0 (Inherited: 0x08)
struct FMadOptionUIData : FTableRowBase {
	struct FName CategoryID; // 0x08(0x08)
	struct FName SubCategoryID; // 0x10(0x08)
	struct FName ID; // 0x18(0x08)
	struct FText DisplayName; // 0x20(0x18)
	struct FText PlaystationDisplayName; // 0x38(0x18)
	struct FText XBoxDisplayName; // 0x50(0x18)
	struct FText Tooltip; // 0x68(0x18)
	struct FText PlaystationTooltip; // 0x80(0x18)
	struct FText XboxTooltip; // 0x98(0x18)
	enum class EMadOptionUsage Usage; // 0xb0(0x01)
	enum class EMadOptionUsageInputType UsageByInputType; // 0xb1(0x01)
	enum class EMadOptionType OptionType; // 0xb2(0x01)
	char UnknownData_B3_0 : 7; // 0xb3(0x01)
	bool ToggleDefaultValue : 1; // 0xb3(0x01)
	char UnknownData_B4_0 : 7; // 0xb4(0x01)
	bool bShouldDisplayAsDropdown : 1; // 0xb4(0x01)
	char UnknownData_B5_0 : 7; // 0xb5(0x01)
	bool bRequiresConfirmation : 1; // 0xb5(0x01)
	char UnknownData_B6_0 : 7; // 0xb6(0x01)
	bool bTriggerIsHandledInJavascript : 1; // 0xb6(0x01)
	char UnknownData_B7[0x1]; // 0xb7(0x01)
	int32_t SortOrder; // 0xb8(0x04)
	float SliderMinValue; // 0xbc(0x04)
	float SliderMaxValue; // 0xc0(0x04)
	float SliderStepValue; // 0xc4(0x04)
	float SliderScaleValue; // 0xc8(0x04)
	float SliderDefaultValue; // 0xcc(0x04)
	int32_t SelectorDefaultValue; // 0xd0(0x04)
	struct FVector2D VectorDefaultValue; // 0xd4(0x08)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
	struct TArray<struct FText> ValueDisplayNames; // 0xe0(0x10)
};

// ScriptStruct Madness.MadOptionCategoryUIData
// Size: 0x28 (Inherited: 0x08)
struct FMadOptionCategoryUIData : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	int32_t SortOrder; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Madness.MadHealthBarDynamicOffsetParams
// Size: 0x14 (Inherited: 0x00)
struct FMadHealthBarDynamicOffsetParams {
	float OffsetShrinkStartDistance; // 0x00(0x04)
	float OffsetShrinkEndDistance; // 0x04(0x04)
	float MinOffsetValuePercentage; // 0x08(0x04)
	float MaxOffsetValuePercentage; // 0x0c(0x04)
	float LocationInterpolationSpeed; // 0x10(0x04)
};

// ScriptStruct Madness.MadHeroTreeNodeDataTable
// Size: 0xe0 (Inherited: 0x08)
struct FMadHeroTreeNodeDataTable : FTableRowBase {
	struct FMadHeroTreeNode Data; // 0x08(0xc0)
	struct TArray<struct FMadHeroTreeLinkedUpgrade> LinkedUpgrades; // 0xc8(0x10)
	struct FVector2D Position; // 0xd8(0x08)
};

// ScriptStruct Madness.MadHeroTreeLinkedUpgrade
// Size: 0x0c (Inherited: 0x00)
struct FMadHeroTreeLinkedUpgrade {
	struct FName Name; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bStartLineWithBevel : 1; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Madness.MadHeroTreeNode
// Size: 0xc0 (Inherited: 0x00)
struct FMadHeroTreeNode {
	enum class None Cost; // 0x00(0x01)
	enum class None CoordX; // 0x01(0x01)
	enum class None CoordY; // 0x02(0x01)
	char UnknownData_3_0 : 7; // 0x03(0x01)
	bool IsMinor : 1; // 0x03(0x01)
	char UnknownData_4_0 : 7; // 0x04(0x01)
	bool IsEndNode : 1; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct UMadSkillDataObject* DescriptionHelperObject; // 0x08(0x08)
	struct TArray<struct TSoftObjectPtr<struct UMadSkillData>> SkillData; // 0x10(0x10)
	struct TSoftObjectPtr<struct UTexture2D> IconUnavailable; // 0x20(0x28)
	struct TSoftObjectPtr<struct UTexture2D> IconAvailableUnaffordable; // 0x48(0x28)
	struct TSoftObjectPtr<struct UTexture2D> IconAvailableAffordable; // 0x70(0x28)
	struct TSoftObjectPtr<struct UTexture2D> IconBought; // 0x98(0x28)
};

// ScriptStruct Madness.EnemyNameMarqueeEffectSettings
// Size: 0x08 (Inherited: 0x00)
struct FEnemyNameMarqueeEffectSettings {
	float EffectDelay; // 0x00(0x04)
	float EffectDuration; // 0x04(0x04)
};

// ScriptStruct Madness.DynamicScalableWidget
// Size: 0x40 (Inherited: 0x00)
struct FDynamicScalableWidget {
	struct FVector2D Position; // 0x00(0x08)
	struct FVector2D Scaling; // 0x08(0x08)
	struct FVector2D MaxSize; // 0x10(0x08)
	struct FVector2D AspectRatioLogicSwitch; // 0x18(0x08)
	struct UUserWidget* Class; // 0x20(0x08)
	float Point; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct UUserWidget* Ptr; // 0x30(0x08)
	char UnknownData_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Madness.InsectAutoAttackParams
// Size: 0x30 (Inherited: 0x00)
struct FInsectAutoAttackParams {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bEnableAutoAttack : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bDoNotMoveWhileAttacking : 1; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float AttackCooldown; // 0x04(0x04)
	struct FScalableFloat DamageCurve; // 0x08(0x20)
	struct UMadDamageType* DamageType; // 0x28(0x08)
};

// ScriptStruct Madness.MadInventoryUIData
// Size: 0xa8 (Inherited: 0x00)
struct FMadInventoryUIData {
	struct FMadArmorsUIData Armors; // 0x00(0x20)
	struct FMadWeaponsUIData Weapons; // 0x20(0x20)
	struct TArray<struct FMadItemLightUIData> Items; // 0x40(0x10)
	enum class EMadItemSlot ActiveWeaponSlot; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct TMap<enum class EMadItemSlot, int32_t> Capacity; // 0x58(0x50)
};

// ScriptStruct Madness.MadItemLightUIData
// Size: 0xb0 (Inherited: 0x00)
struct FMadItemLightUIData {
	struct FName IDName; // 0x00(0x08)
	uint32_t UniqueId; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FString TypeName; // 0x10(0x10)
	struct FString LongName; // 0x20(0x10)
	struct FName IconPath; // 0x30(0x08)
	enum class EMadItemType ItemType; // 0x38(0x01)
	enum class EMadItemSlot TargetSlot; // 0x39(0x01)
	enum class EMadItemRarity Rarity; // 0x3a(0x01)
	char UnknownData_3B[0x1]; // 0x3b(0x01)
	struct FMadItemInventoryLocation Location; // 0x3c(0x08)
	int32_t Level; // 0x44(0x04)
	int32_t Rating; // 0x48(0x04)
	int32_t FirepowerOrArmor; // 0x4c(0x04)
	struct FMadItemSkillData SkillData; // 0x50(0x48)
	struct TArray<struct FMadAttribute> Attributes; // 0x98(0x10)
	char UnknownData_A8_0 : 7; // 0xa8(0x01)
	bool bRecent : 1; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct Madness.MadAttribute
// Size: 0x60 (Inherited: 0x00)
struct FMadAttribute {
	struct FName Name; // 0x00(0x08)
	struct FText FullName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FName GroupRowName; // 0x38(0x08)
	int32_t Crystals; // 0x40(0x04)
	int32_t CraftedStages; // 0x44(0x04)
	int32_t ImproveStage; // 0x48(0x04)
	int32_t MaxImproveStage; // 0x4c(0x04)
	float BonusAfterImprovement; // 0x50(0x04)
	enum class EMadItemAttributeValueType ValueType; // 0x54(0x01)
	char UnknownData_55_0 : 7; // 0x55(0x01)
	bool bPrimary : 1; // 0x55(0x01)
	char UnknownData_56[0x2]; // 0x56(0x02)
	float Value; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Madness.MadItemSkillData
// Size: 0x48 (Inherited: 0x00)
struct FMadItemSkillData {
	struct UMadSkillData* SkillData1; // 0x00(0x08)
	struct UMadSkillData* SkillData2; // 0x08(0x08)
	struct FText DescriptionSkillData1; // 0x10(0x18)
	struct FText DescriptionSkillData2; // 0x28(0x18)
	int32_t ChangedModId; // 0x40(0x04)
	int32_t HiddenModId; // 0x44(0x04)
};

// ScriptStruct Madness.MadItemInventoryLocation
// Size: 0x08 (Inherited: 0x00)
struct FMadItemInventoryLocation {
	enum class EMadInventoryContainer Container; // 0x00(0x01)
	enum class EMadItemSlot EquipmentSlot; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bIsValid : 1; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	int32_t Slot; // 0x04(0x04)
};

// ScriptStruct Madness.MadWeaponsUIData
// Size: 0x20 (Inherited: 0x00)
struct FMadWeaponsUIData {
	struct TArray<struct FMadItemLightUIData> EquippedItems; // 0x00(0x10)
	struct TArray<struct FMadItemLightUIData> BackpackItems; // 0x10(0x10)
};

// ScriptStruct Madness.MadArmorsUIData
// Size: 0x20 (Inherited: 0x00)
struct FMadArmorsUIData {
	struct TArray<struct FMadItemLightUIData> EquippedItems; // 0x00(0x10)
	struct TArray<struct FMadItemLightUIData> BackpackItems; // 0x10(0x10)
};

// ScriptStruct Madness.MadMinimalEquippedItemsUIData
// Size: 0x18 (Inherited: 0x00)
struct FMadMinimalEquippedItemsUIData {
	enum class EMadItemSlot ActiveWeaponSlot; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct FMadMinimalItemUIData> EquippedItems; // 0x08(0x10)
};

// ScriptStruct Madness.MadMinimalItemUIData
// Size: 0x08 (Inherited: 0x00)
struct FMadMinimalItemUIData {
	enum class EMadItemSlot TargetSlot; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t FirepowerOrArmor; // 0x04(0x04)
};

// ScriptStruct Madness.MadCachedWeaponsConfigLimits
// Size: 0x10 (Inherited: 0x00)
struct FMadCachedWeaponsConfigLimits {
	float MinRange; // 0x00(0x04)
	float MaxRange; // 0x04(0x04)
	float WorstAvgAccuracy; // 0x08(0x04)
	float WorstAvgStability; // 0x0c(0x04)
};

// ScriptStruct Madness.MadInventoryGlobalsCombatPower
// Size: 0xb0 (Inherited: 0x00)
struct FMadInventoryGlobalsCombatPower {
	struct TMap<SoftClassProperty, float> DamageClassMod; // 0x00(0x50)
	struct TMap<enum class EMadItemRarity, float> RarityMod; // 0x50(0x50)
	float GMul; // 0xa0(0x04)
	float LogBase; // 0xa4(0x04)
	float CosmeticA; // 0xa8(0x04)
	float CosmeticB; // 0xac(0x04)
};

// ScriptStruct Madness.MadInventoryGlobalsLoot
// Size: 0x168 (Inherited: 0x00)
struct FMadInventoryGlobalsLoot {
	struct TMap<enum class EMadRarityRollSource, struct FString> RarityRollPrefixes; // 0x00(0x50)
	struct TMap<int32_t, struct FMadLuckIncreaseSetup> LuckIncreasePerWorldLevel; // 0x50(0x50)
	struct TMap<int32_t, struct FMadLuckIncreaseSetup> LuckIncreasePerChallengeTier; // 0xa0(0x50)
	float DelayBetweenDrops; // 0xf0(0x04)
	float LootChestMaxDropAngleDegrees; // 0xf4(0x04)
	int32_t BasicItemModWeight; // 0xf8(0x04)
	char UnknownData_FC[0x4]; // 0xfc(0x04)
	struct UDataTable* EnemyLootsDT; // 0x100(0x08)
	struct TArray<struct FName> RegionsWithMovableFloor; // 0x108(0x10)
	struct TMap<enum class EMadLootActionDescription, struct FText> LootActionsDescriptions; // 0x118(0x50)
};

// ScriptStruct Madness.MadLuckIncreaseSetup
// Size: 0x10 (Inherited: 0x00)
struct FMadLuckIncreaseSetup {
	float IncreaseMin; // 0x00(0x04)
	float IncreaseMax; // 0x04(0x04)
	float MultiplierIf2Players; // 0x08(0x04)
	float MultiplierIf3Players; // 0x0c(0x04)
};

// ScriptStruct Madness.MadEnemyLootData
// Size: 0x38 (Inherited: 0x08)
struct FMadEnemyLootData : FTableRowBase {
	float LootDropChancePct; // 0x08(0x04)
	float LootDropCoop2Multiplier; // 0x0c(0x04)
	float LootDropCoop3Multiplier; // 0x10(0x04)
	float AmmoDropChancePct; // 0x14(0x04)
	float BonusLootRarityMod; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FMadWeightedName> LootChances; // 0x20(0x10)
	enum class EMadLootDelayType BroadcastDelayType; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Madness.MadWeightedName
// Size: 0x0c (Inherited: 0x00)
struct FMadWeightedName {
	struct FName Name; // 0x00(0x08)
	float Weight; // 0x08(0x04)
};

// ScriptStruct Madness.MadInventoryGlobalsAmmo
// Size: 0x170 (Inherited: 0x00)
struct FMadInventoryGlobalsAmmo {
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x00(0x28)
	struct FText Name; // 0x28(0x18)
	struct FName LootName; // 0x40(0x08)
	struct TMap<enum class EAmmoType, int32_t> DefaultAmmo; // 0x48(0x50)
	struct TMap<enum class EAmmoType, int32_t> DroppedAmmo; // 0x98(0x50)
	struct TMap<enum class EAmmoType, int32_t> MaxAmmo; // 0xe8(0x50)
	float PickableLifeSpan; // 0x138(0x04)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
	struct FText ToastMessageOnPickup; // 0x140(0x18)
	struct FText ToastMessageOnReplenish; // 0x158(0x18)
};

// ScriptStruct Madness.MadInventoryGlobalsChallengeMod
// Size: 0x40 (Inherited: 0x00)
struct FMadInventoryGlobalsChallengeMod {
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x00(0x28)
	struct FText Description; // 0x28(0x18)
};

// ScriptStruct Madness.MadInventoryGlobalsChallengeKey
// Size: 0xa8 (Inherited: 0x00)
struct FMadInventoryGlobalsChallengeKey {
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x00(0x28)
	struct FText Name; // 0x28(0x18)
	struct FText Description; // 0x40(0x18)
	struct TMap<int32_t, float> TierModChances; // 0x58(0x50)
};

// ScriptStruct Madness.MadInventoryGlobalsDebug
// Size: 0x60 (Inherited: 0x00)
struct FMadInventoryGlobalsDebug {
	struct TMap<enum class EMadItemSlot, struct FName> SlotBones; // 0x00(0x50)
	struct FVector DebugTextOffset; // 0x50(0x0c)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Madness.MadInventoryGlobalsWeapon
// Size: 0x90 (Inherited: 0x00)
struct FMadInventoryGlobalsWeapon {
	struct UDataTable* WeaponSkinsDT; // 0x00(0x08)
	struct UDataTable* WeaponConfigsDT; // 0x08(0x08)
	struct UCurveTable* WeaponConfigsPerLevelCT; // 0x10(0x08)
	struct UDataTable* WeaponTranslationDT; // 0x18(0x08)
	struct ADroppedClip* DroppedClipClass; // 0x20(0x08)
	struct TMap<enum class EWeaponFireModeIcon, struct TSoftObjectPtr<struct UTexture2D>> FireModeIcons; // 0x28(0x50)
	struct FMadStatsBarScaled AccuracyBarScale; // 0x78(0x0c)
	struct FMadStatsBarScaled StabilityBarScale; // 0x84(0x0c)
};

// ScriptStruct Madness.MadStatsBarScaled
// Size: 0x0c (Inherited: 0x00)
struct FMadStatsBarScaled {
	float ToShrink; // 0x00(0x04)
	float ToFit; // 0x04(0x04)
	float Min; // 0x08(0x04)
};

// ScriptStruct Madness.MadWeaponSkinData
// Size: 0xd8 (Inherited: 0x08)
struct FMadWeaponSkinData : FTableRowBase {
	struct FText FullName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	SoftClassProperty Archetype; // 0x38(0x28)
	SoftClassProperty Scheme; // 0x60(0x28)
	struct TSoftObjectPtr<struct UWeaponEffects> Effects; // 0x88(0x28)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0xb0(0x28)
};

// ScriptStruct Madness.MadInventoryGlobalsVendor
// Size: 0xa0 (Inherited: 0x00)
struct FMadInventoryGlobalsVendor {
	struct UDataTable* VendorsDT; // 0x00(0x08)
	struct UDataTable* VendorPricesDT; // 0x08(0x08)
	struct UDataTable* VendorPricesTemplateDT; // 0x10(0x08)
	struct TMap<enum class EMadVendorWeaponCategory, struct FNameArrayWrapper> WeaponCategories; // 0x18(0x50)
	struct TArray<struct FNameWrapper> SellPrices; // 0x68(0x10)
	int32_t HigherRarityMinLevel; // 0x78(0x04)
	float RegularOfferRareChance; // 0x7c(0x04)
	float RegularOfferEpicChance; // 0x80(0x04)
	float DailyOfferEpicChance; // 0x84(0x04)
	int32_t RegularOfferItemLimit; // 0x88(0x04)
	int32_t ExchangeOfferItemLimit; // 0x8c(0x04)
	int32_t EliteOfferItemLimit; // 0x90(0x04)
	float ExtraLevelChance; // 0x94(0x04)
	int32_t PlayerLevelCap; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct Madness.MadInventoryGlobalsResource
// Size: 0x60 (Inherited: 0x00)
struct FMadInventoryGlobalsResource {
	struct UDataTable* ResourcesDT; // 0x00(0x08)
	struct UCurveTable* ResourceProgressionCT; // 0x08(0x08)
	struct TMap<enum class EMadResourceType, struct FName> BasicResources; // 0x10(0x50)
};

// ScriptStruct Madness.MadInventoryGlobalsArmor
// Size: 0x98 (Inherited: 0x00)
struct FMadInventoryGlobalsArmor {
	struct UDataTable* ArmorsDT; // 0x00(0x08)
	struct UCurveTable* ArmorValueCT; // 0x08(0x08)
	struct UDataTable* ArmorTranslationDT; // 0x10(0x08)
	struct FName ArmorAttributeRowName; // 0x18(0x08)
	struct FName ReferenceValueRowName; // 0x20(0x08)
	float ArmorValueVariation; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct UDataTable* ItemSetsDT; // 0x30(0x08)
	struct UDataTable* ItemSetsDescriptionsDT; // 0x38(0x08)
	struct UDataTable* ArmorSkinsDT; // 0x40(0x08)
	struct TMap<enum class EMadArmorPart, struct FNameWrapper> PartNames; // 0x48(0x50)
};

// ScriptStruct Madness.MadInventoryGlobalsAttributes
// Size: 0x20 (Inherited: 0x00)
struct FMadInventoryGlobalsAttributes {
	struct UDataTable* AttributesDT; // 0x00(0x08)
	struct UDataTable* AttributesGroupsDT; // 0x08(0x08)
	struct UDataTable* PlayerStatsAttributesDT; // 0x10(0x08)
	struct UCurveTable* AttributeValueCT; // 0x18(0x08)
};

// ScriptStruct Madness.MadArmorSetElements
// Size: 0x10 (Inherited: 0x00)
struct FMadArmorSetElements {
	struct TArray<struct FName> Elements; // 0x00(0x10)
};

// ScriptStruct Madness.MadArmorSetElement
// Size: 0x0c (Inherited: 0x00)
struct FMadArmorSetElement {
	char UnknownData_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Madness.MadArmorSkinData
// Size: 0x40 (Inherited: 0x08)
struct FMadArmorSkinData : FTableRowBase {
	struct FText FullName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	enum class EMadArmorPart Part; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Madness.MadInventoryGlobalsCrafting
// Size: 0x20 (Inherited: 0x00)
struct FMadInventoryGlobalsCrafting {
	struct UDataTable* CraftingCostsDT; // 0x00(0x08)
	struct UCurveTable* AnomalyCrystalsCT; // 0x08(0x08)
	struct FName CrystalsGrantedRowName; // 0x10(0x08)
	struct FName CrystalsCostsRowName; // 0x18(0x08)
};

// ScriptStruct Madness.MadInventoryGlobalsItem
// Size: 0x130 (Inherited: 0x00)
struct FMadInventoryGlobalsItem {
	struct UDataTable* PresavedItemsDT; // 0x00(0x08)
	struct UDataTable* PredefinedItemsDT; // 0x08(0x08)
	struct UDataTable* LegendaryItemsDT; // 0x10(0x08)
	struct TMap<enum class EMadItemType, struct FName> DefaultLegendary; // 0x18(0x50)
	struct UDataTable* PaintsDT; // 0x68(0x08)
	struct FName PatternMaterialParam; // 0x70(0x08)
	struct FName PatternOpacityMaterialParam; // 0x78(0x08)
	struct FName PatternTilingMaterialParam; // 0x80(0x08)
	struct TArray<struct FName> ColorMaterialParams; // 0x88(0x10)
	struct UDataTable* FactItemDT; // 0x98(0x08)
	struct FText UnusualItemPrefix; // 0xa0(0x18)
	struct TMap<enum class EMadItemSlot, int32_t> BackpackCapacity; // 0xb8(0x50)
	int32_t OnlineStashCapacity; // 0x108(0x04)
	float RefinementPrimaryFactorMax; // 0x10c(0x04)
	float RefinementAttributeFactorMax; // 0x110(0x04)
	char UnknownData_114[0x4]; // 0x114(0x04)
	struct TArray<struct FMadItemDismantleYield> DismantleYield; // 0x118(0x10)
	struct UDataTable* PreorderItems; // 0x128(0x08)
};

// ScriptStruct Madness.MadItemDismantleYield
// Size: 0x18 (Inherited: 0x00)
struct FMadItemDismantleYield {
	struct FNameWrapper PriceData; // 0x00(0x10)
	float EntryChance; // 0x10(0x04)
	float ValueSpread; // 0x14(0x04)
};

// ScriptStruct Madness.MadFactItemEntry
// Size: 0x68 (Inherited: 0x08)
struct FMadFactItemEntry : FTableRowBase {
	struct FName ItemName; // 0x08(0x08)
	struct FText DisplayName; // 0x10(0x18)
	struct FText ItemDescription; // 0x28(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x40(0x28)
};

// ScriptStruct Madness.MadCraftingCostData
// Size: 0x1f48 (Inherited: 0x08)
struct FMadCraftingCostData : FTableRowBase {
	struct TMap<struct FName, int32_t> L_2; // 0x08(0x50)
	struct TMap<struct FName, int32_t> L_3; // 0x58(0x50)
	struct TMap<struct FName, int32_t> L_4; // 0xa8(0x50)
	struct TMap<struct FName, int32_t> L_5; // 0xf8(0x50)
	struct TMap<struct FName, int32_t> L_6; // 0x148(0x50)
	struct TMap<struct FName, int32_t> L_7; // 0x198(0x50)
	struct TMap<struct FName, int32_t> L_8; // 0x1e8(0x50)
	struct TMap<struct FName, int32_t> L_9; // 0x238(0x50)
	struct TMap<struct FName, int32_t> L_10; // 0x288(0x50)
	struct TMap<struct FName, int32_t> L_11; // 0x2d8(0x50)
	struct TMap<struct FName, int32_t> L_12; // 0x328(0x50)
	struct TMap<struct FName, int32_t> L_13; // 0x378(0x50)
	struct TMap<struct FName, int32_t> L_14; // 0x3c8(0x50)
	struct TMap<struct FName, int32_t> L_15; // 0x418(0x50)
	struct TMap<struct FName, int32_t> L_16; // 0x468(0x50)
	struct TMap<struct FName, int32_t> L_17; // 0x4b8(0x50)
	struct TMap<struct FName, int32_t> L_18; // 0x508(0x50)
	struct TMap<struct FName, int32_t> L_19; // 0x558(0x50)
	struct TMap<struct FName, int32_t> L_20; // 0x5a8(0x50)
	struct TMap<struct FName, int32_t> L_21; // 0x5f8(0x50)
	struct TMap<struct FName, int32_t> L_22; // 0x648(0x50)
	struct TMap<struct FName, int32_t> L_23; // 0x698(0x50)
	struct TMap<struct FName, int32_t> L_24; // 0x6e8(0x50)
	struct TMap<struct FName, int32_t> L_25; // 0x738(0x50)
	struct TMap<struct FName, int32_t> L_26; // 0x788(0x50)
	struct TMap<struct FName, int32_t> L_27; // 0x7d8(0x50)
	struct TMap<struct FName, int32_t> L_28; // 0x828(0x50)
	struct TMap<struct FName, int32_t> L_29; // 0x878(0x50)
	struct TMap<struct FName, int32_t> L_30; // 0x8c8(0x50)
	struct TMap<struct FName, int32_t> L_31; // 0x918(0x50)
	struct TMap<struct FName, int32_t> L_32; // 0x968(0x50)
	struct TMap<struct FName, int32_t> L_33; // 0x9b8(0x50)
	struct TMap<struct FName, int32_t> L_34; // 0xa08(0x50)
	struct TMap<struct FName, int32_t> L_35; // 0xa58(0x50)
	struct TMap<struct FName, int32_t> L_36; // 0xaa8(0x50)
	struct TMap<struct FName, int32_t> L_37; // 0xaf8(0x50)
	struct TMap<struct FName, int32_t> L_38; // 0xb48(0x50)
	struct TMap<struct FName, int32_t> L_39; // 0xb98(0x50)
	struct TMap<struct FName, int32_t> L_40; // 0xbe8(0x50)
	struct TMap<struct FName, int32_t> L_41; // 0xc38(0x50)
	struct TMap<struct FName, int32_t> L_42; // 0xc88(0x50)
	struct TMap<struct FName, int32_t> L_43; // 0xcd8(0x50)
	struct TMap<struct FName, int32_t> L_44; // 0xd28(0x50)
	struct TMap<struct FName, int32_t> L_45; // 0xd78(0x50)
	struct TMap<struct FName, int32_t> L_46; // 0xdc8(0x50)
	struct TMap<struct FName, int32_t> L_47; // 0xe18(0x50)
	struct TMap<struct FName, int32_t> L_48; // 0xe68(0x50)
	struct TMap<struct FName, int32_t> L_49; // 0xeb8(0x50)
	struct TMap<struct FName, int32_t> L_50; // 0xf08(0x50)
	struct TMap<struct FName, int32_t> L_51; // 0xf58(0x50)
	struct TMap<struct FName, int32_t> L_52; // 0xfa8(0x50)
	struct TMap<struct FName, int32_t> L_53; // 0xff8(0x50)
	struct TMap<struct FName, int32_t> L_54; // 0x1048(0x50)
	struct TMap<struct FName, int32_t> L_55; // 0x1098(0x50)
	struct TMap<struct FName, int32_t> L_56; // 0x10e8(0x50)
	struct TMap<struct FName, int32_t> L_57; // 0x1138(0x50)
	struct TMap<struct FName, int32_t> L_58; // 0x1188(0x50)
	struct TMap<struct FName, int32_t> L_59; // 0x11d8(0x50)
	struct TMap<struct FName, int32_t> L_60; // 0x1228(0x50)
	struct TMap<struct FName, int32_t> L_61; // 0x1278(0x50)
	struct TMap<struct FName, int32_t> L_62; // 0x12c8(0x50)
	struct TMap<struct FName, int32_t> L_63; // 0x1318(0x50)
	struct TMap<struct FName, int32_t> L_64; // 0x1368(0x50)
	struct TMap<struct FName, int32_t> L_65; // 0x13b8(0x50)
	struct TMap<struct FName, int32_t> L_66; // 0x1408(0x50)
	struct TMap<struct FName, int32_t> L_67; // 0x1458(0x50)
	struct TMap<struct FName, int32_t> L_68; // 0x14a8(0x50)
	struct TMap<struct FName, int32_t> L_69; // 0x14f8(0x50)
	struct TMap<struct FName, int32_t> L_70; // 0x1548(0x50)
	struct TMap<struct FName, int32_t> L_71; // 0x1598(0x50)
	struct TMap<struct FName, int32_t> L_72; // 0x15e8(0x50)
	struct TMap<struct FName, int32_t> L_73; // 0x1638(0x50)
	struct TMap<struct FName, int32_t> L_74; // 0x1688(0x50)
	struct TMap<struct FName, int32_t> L_75; // 0x16d8(0x50)
	struct TMap<struct FName, int32_t> L_76; // 0x1728(0x50)
	struct TMap<struct FName, int32_t> L_77; // 0x1778(0x50)
	struct TMap<struct FName, int32_t> L_78; // 0x17c8(0x50)
	struct TMap<struct FName, int32_t> L_79; // 0x1818(0x50)
	struct TMap<struct FName, int32_t> L_80; // 0x1868(0x50)
	struct TMap<struct FName, int32_t> L_81; // 0x18b8(0x50)
	struct TMap<struct FName, int32_t> L_82; // 0x1908(0x50)
	struct TMap<struct FName, int32_t> L_83; // 0x1958(0x50)
	struct TMap<struct FName, int32_t> L_84; // 0x19a8(0x50)
	struct TMap<struct FName, int32_t> L_85; // 0x19f8(0x50)
	struct TMap<struct FName, int32_t> L_86; // 0x1a48(0x50)
	struct TMap<struct FName, int32_t> L_87; // 0x1a98(0x50)
	struct TMap<struct FName, int32_t> L_88; // 0x1ae8(0x50)
	struct TMap<struct FName, int32_t> L_89; // 0x1b38(0x50)
	struct TMap<struct FName, int32_t> L_90; // 0x1b88(0x50)
	struct TMap<struct FName, int32_t> L_91; // 0x1bd8(0x50)
	struct TMap<struct FName, int32_t> L_92; // 0x1c28(0x50)
	struct TMap<struct FName, int32_t> L_93; // 0x1c78(0x50)
	struct TMap<struct FName, int32_t> L_94; // 0x1cc8(0x50)
	struct TMap<struct FName, int32_t> L_95; // 0x1d18(0x50)
	struct TMap<struct FName, int32_t> L_96; // 0x1d68(0x50)
	struct TMap<struct FName, int32_t> L_97; // 0x1db8(0x50)
	struct TMap<struct FName, int32_t> L_98; // 0x1e08(0x50)
	struct TMap<struct FName, int32_t> L_99; // 0x1e58(0x50)
	struct TMap<struct FName, int32_t> L_100; // 0x1ea8(0x50)
	char UnknownData_1EF8[0x50]; // 0x1ef8(0x50)
};

// ScriptStruct Madness.MadInventoryGlobalsPickableItem
// Size: 0x140 (Inherited: 0x00)
struct FMadInventoryGlobalsPickableItem {
	SoftClassProperty ItemClass; // 0x00(0x28)
	SoftClassProperty EquipableItemClass; // 0x28(0x28)
	struct TMap<enum class EMadItemType, struct TSoftObjectPtr<struct UStaticMesh>> ItemMeshes; // 0x50(0x50)
	struct TMap<enum class EMadItemType, float> ItemMeshesVerticalOffsets; // 0xa0(0x50)
	struct TMap<enum class EMadPickableItemSource, struct FMadPickableItemDropConfig> DropConfigs; // 0xf0(0x50)
};

// ScriptStruct Madness.MadPickableItemDropConfig
// Size: 0x28 (Inherited: 0x00)
struct FMadPickableItemDropConfig {
	struct FFloatInterval Radius; // 0x00(0x08)
	struct TArray<struct FVector> NavStartPointOffset; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bOffsetRelativeToPlayersLocation : 1; // 0x18(0x01)
	char UnknownData_19_0 : 7; // 0x19(0x01)
	bool bHighArc : 1; // 0x19(0x01)
	char UnknownData_1A[0x2]; // 0x1a(0x02)
	float Speed; // 0x1c(0x04)
	float SimTime; // 0x20(0x04)
	float SimFrequency; // 0x24(0x04)
};

// ScriptStruct Madness.MadCraftingModsTierUIData
// Size: 0x28 (Inherited: 0x00)
struct FMadCraftingModsTierUIData {
	struct TArray<struct FMadCraftingModUIData> Mods; // 0x00(0x10)
	int32_t UnlockedNum; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct FMadResourceUIData> ResourcesCost; // 0x18(0x10)
};

// ScriptStruct Madness.MadCraftingModUIData
// Size: 0xd0 (Inherited: 0x00)
struct FMadCraftingModUIData {
	struct FString IconPath; // 0x00(0x10)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x10(0x28)
	struct FName KeyName; // 0x38(0x08)
	struct FString Name; // 0x40(0x10)
	struct FString Description; // 0x50(0x10)
	struct TMap<struct FString, int32_t> Cost; // 0x60(0x50)
	int32_t TierId; // 0xb0(0x04)
	int32_t ID; // 0xb4(0x04)
	struct FMadCraftingModAvailability Availability; // 0xb8(0x18)
};

// ScriptStruct Madness.MadCraftingModAvailability
// Size: 0x18 (Inherited: 0x00)
struct FMadCraftingModAvailability {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bUnlocked : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bAffordable : 1; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct TArray<bool> bAvailableForSlot; // 0x08(0x10)
};

// ScriptStruct Madness.MadOnlineStashInventoryUIData
// Size: 0x10 (Inherited: 0x00)
struct FMadOnlineStashInventoryUIData {
	struct TArray<struct FMadItemLightUIData> OnlineStashItems; // 0x00(0x10)
};

// ScriptStruct Madness.OneTimeRewardUIData
// Size: 0x2e8 (Inherited: 0x00)
struct FOneTimeRewardUIData {
	struct FString Name; // 0x00(0x10)
	struct FMadItemUIData ItemData; // 0x10(0x208)
	struct FOneTimeRewardDefinition Definition; // 0x218(0xd0)
};

// ScriptStruct Madness.OneTimeRewardDefinition
// Size: 0xd0 (Inherited: 0x08)
struct FOneTimeRewardDefinition : FTableRowBase {
	struct FNameWrapper LootId; // 0x08(0x10)
	struct UMadEmoteData* EmoteAsset; // 0x18(0x08)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bUseCustomDefinition : 1; // 0x20(0x01)
	char UnknownData_21_0 : 7; // 0x21(0x01)
	bool bMysteryReward : 1; // 0x21(0x01)
	char UnknownData_22[0x6]; // 0x22(0x06)
	struct TSoftObjectPtr<struct UTexture2D> Icon_Miniature; // 0x28(0x28)
	struct FString Icon_Miniature_Path; // 0x50(0x10)
	struct TSoftObjectPtr<struct UTexture2D> Icon_Description; // 0x60(0x28)
	struct FString Icon_Description_Path; // 0x88(0x10)
	struct FText Title; // 0x98(0x18)
	struct FText Description; // 0xb0(0x18)
	enum class EOneTimeRewardSource Source; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct Madness.MadItemUIData
// Size: 0x208 (Inherited: 0xb0)
struct FMadItemUIData : FMadItemLightUIData {
	struct FText Description; // 0xb0(0x18)
	int32_t LevelRequirement; // 0xc8(0x04)
	char UnknownData_CC[0x14]; // 0xcc(0x14)
	struct TArray<struct FMadResourceUIData> EnhanceCost; // 0xe0(0x10)
	struct TArray<struct UMadSkillData*> EnhanceMods; // 0xf0(0x10)
	struct TArray<struct FText> EnhanceModsDescription; // 0x100(0x10)
	struct TArray<struct FMadResourceUIData> ImproveCost; // 0x110(0x10)
	struct TArray<int32_t> ImproveCrystalCost; // 0x120(0x10)
	struct TArray<struct FMadResourceUIData> LevelUpCost; // 0x130(0x10)
	struct TArray<struct FMadResourceUIData> ScrapResources; // 0x140(0x10)
	struct TArray<struct FMadAnomalyCrystal> ScrapCrystals; // 0x150(0x10)
	struct TArray<struct FString> ScrapMods; // 0x160(0x10)
	struct FText SetNameDisplayed; // 0x170(0x18)
	int32_t SetMinItemsSize; // 0x188(0x04)
	char UnknownData_18C[0x4]; // 0x18c(0x04)
	struct TArray<struct FMadItemSetsBonusesUIData> SetBonuses; // 0x190(0x10)
	struct TArray<struct FMadItemSetElementUIData> SetItems; // 0x1a0(0x10)
	struct TArray<struct FMadCraftingConfigVariantUIData> WeaponVariants; // 0x1b0(0x10)
	float MinWeaponRange; // 0x1c0(0x04)
	float MaxWeaponRange; // 0x1c4(0x04)
	char UnknownData_1C8_0 : 7; // 0x1c8(0x01)
	bool bScrappable : 1; // 0x1c8(0x01)
	char UnknownData_1C9[0x3]; // 0x1c9(0x03)
	struct FName CurrentSkin; // 0x1cc(0x08)
	struct FName CurrentPaint; // 0x1d4(0x08)
	char UnknownData_1DC[0x4]; // 0x1dc(0x04)
	struct TArray<struct FMadItemSkinUIData> Skins; // 0x1e0(0x10)
	struct TArray<struct FMadItemPaintUIData> Paints; // 0x1f0(0x10)
	char UnknownData_200_0 : 7; // 0x200(0x01)
	bool bCanBeMovedToOnlineStash : 1; // 0x200(0x01)
	char UnknownData_201_0 : 7; // 0x201(0x01)
	bool bCanBeMovedToInventory : 1; // 0x201(0x01)
	char UnknownData_202_0 : 7; // 0x202(0x01)
	bool bIsInOnlineStash : 1; // 0x202(0x01)
	char UnknownData_203_0 : 7; // 0x203(0x01)
	bool bWasCrafted : 1; // 0x203(0x01)
	char UnknownData_204_0 : 7; // 0x204(0x01)
	bool bSkillData1IsDuplicated : 1; // 0x204(0x01)
	char UnknownData_205_0 : 7; // 0x205(0x01)
	bool bSkillData2IsDuplicated : 1; // 0x205(0x01)
	char UnknownData_206[0x2]; // 0x206(0x02)
};

// ScriptStruct Madness.MadItemPaintUIData
// Size: 0x48 (Inherited: 0x00)
struct FMadItemPaintUIData {
	struct FName PaintID; // 0x00(0x08)
	struct FText PaintName; // 0x08(0x18)
	struct FText PaintDescription; // 0x20(0x18)
	struct FString PaintIconPath; // 0x38(0x10)
};

// ScriptStruct Madness.MadItemSkinUIData
// Size: 0x48 (Inherited: 0x00)
struct FMadItemSkinUIData {
	struct FName SkinID; // 0x00(0x08)
	struct FText SkinName; // 0x08(0x18)
	struct FText SkinDescription; // 0x20(0x18)
	struct FString SkinIconPath; // 0x38(0x10)
};

// ScriptStruct Madness.MadCraftingConfigVariantUIData
// Size: 0x60 (Inherited: 0x00)
struct FMadCraftingConfigVariantUIData {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bCurrent : 1; // 0x00(0x01)
	struct FMadCraftingConfigVariantAvailability Availability; // 0x01(0x03)
	int32_t UnlockedAtLevel; // 0x04(0x04)
	struct TArray<struct FMadResourceUIData> ResourcesCost; // 0x08(0x10)
	struct FMadWeaponConfigStatUI Stats; // 0x18(0x24)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FText DisplayName; // 0x40(0x18)
	struct FName ID; // 0x58(0x08)
};

// ScriptStruct Madness.MadWeaponConfigStatUI
// Size: 0x24 (Inherited: 0x00)
struct FMadWeaponConfigStatUI {
	int32_t FireModeType; // 0x00(0x04)
	float HitDamage; // 0x04(0x04)
	float Accuracy; // 0x08(0x04)
	float ReloadSpeed; // 0x0c(0x04)
	float Range; // 0x10(0x04)
	float Stability; // 0x14(0x04)
	float RPM; // 0x18(0x04)
	int32_t ClipCapacity; // 0x1c(0x04)
	float CritDamageMult; // 0x20(0x04)
};

// ScriptStruct Madness.MadCraftingConfigVariantAvailability
// Size: 0x03 (Inherited: 0x00)
struct FMadCraftingConfigVariantAvailability {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bUnlocked : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bAffordable : 1; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bAvailable : 1; // 0x02(0x01)
};

// ScriptStruct Madness.MadItemSetElementUIData
// Size: 0x02 (Inherited: 0x00)
struct FMadItemSetElementUIData {
	enum class EMadArmorPart PartType; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bEquipped : 1; // 0x01(0x01)
};

// ScriptStruct Madness.MadItemSetsBonusesUIData
// Size: 0x20 (Inherited: 0x00)
struct FMadItemSetsBonusesUIData {
	struct FText Description; // 0x00(0x18)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool IsActive : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Madness.MadItemCraftingPreview
// Size: 0x58 (Inherited: 0x00)
struct FMadItemCraftingPreview {
	int32_t NumberOfAttributes; // 0x00(0x04)
	int32_t FirepowerOrArmor; // 0x04(0x04)
	float WeaponDamage; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FMadItemSkillData SkillData; // 0x10(0x48)
};

// ScriptStruct Madness.MadInventorySaveData
// Size: 0xd0 (Inherited: 0x00)
struct FMadInventorySaveData {
	struct TArray<struct FMadItemSaveData> Items; // 0x00(0x10)
	struct FMadItemModsSaveData Mods; // 0x10(0x20)
	struct TArray<struct FMadMasteryCardEntrySaveData> Cards; // 0x30(0x10)
	struct TArray<struct FMadResourcePocket> Resources; // 0x40(0x10)
	struct TArray<struct FMadAnomalyCrystal> AnomalyCrystals; // 0x50(0x10)
	struct TArray<struct FMadVendorSaveDataWrapper> Vendors; // 0x60(0x10)
	struct TArray<struct FMadLoot> Loots; // 0x70(0x10)
	struct TArray<struct FMadItemOfferConsumable> ItemOfferConsumables; // 0x80(0x10)
	struct FLuckSaveData Luck; // 0x90(0x04)
	enum class EMadItemSlot ActiveWeaponSlot; // 0x94(0x01)
	char UnknownData_95[0x3]; // 0x95(0x03)
	struct TArray<struct FString> AvailableOneTimeRewards; // 0x98(0x10)
	struct TArray<struct FString> ClaimedOneTimeRewards; // 0xa8(0x10)
	char UnknownData_B8_0 : 7; // 0xb8(0x01)
	bool bHasPreorderDLC : 1; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
	struct TArray<struct FQuestRewardInfoRow> QuestRewards; // 0xc0(0x10)
};

// ScriptStruct Madness.QuestRewardInfoRow
// Size: 0x38 (Inherited: 0x00)
struct FQuestRewardInfoRow {
	struct FName QuestOrObjectiveID; // 0x00(0x08)
	struct FQuestRewardInfo RewardInfo; // 0x08(0x30)
};

// ScriptStruct Madness.QuestRewardInfo
// Size: 0x30 (Inherited: 0x00)
struct FQuestRewardInfo {
	enum class EQuestFirstTimeRewardStatus FirstTimeRewardStatus; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FQuestRewardData FirstTimeReward; // 0x08(0x18)
	struct TArray<struct FQuestRewardData> RepeatableRewards; // 0x20(0x10)
};

// ScriptStruct Madness.QuestRewardData
// Size: 0x18 (Inherited: 0x00)
struct FQuestRewardData {
	struct TArray<struct FMadItemSaveData> SelectableRewards; // 0x00(0x10)
	enum class EMadLootDelayType BroadcastDelayType; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Madness.MadItemSaveData
// Size: 0xa8 (Inherited: 0x00)
struct FMadItemSaveData {
	struct FGuid BackendId; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	int32_t NameIndex; // 0x18(0x04)
	struct FMadItemInventoryLocation Location; // 0x1c(0x08)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct TArray<struct FMadAttribute> Attributes; // 0x28(0x10)
	float Value; // 0x38(0x04)
	float InitialRandRoll; // 0x3c(0x04)
	float RefinementPrimary; // 0x40(0x04)
	float RefinementAttribute; // 0x44(0x04)
	int32_t Level; // 0x48(0x04)
	enum class EMadItemType Type; // 0x4c(0x01)
	enum class EMadItemRarity Rarity; // 0x4d(0x01)
	char UnknownData_4E_0 : 7; // 0x4e(0x01)
	bool bRecent : 1; // 0x4e(0x01)
	char UnknownData_4F_0 : 7; // 0x4f(0x01)
	bool bScrappable : 1; // 0x4f(0x01)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bWasCrafted : 1; // 0x50(0x01)
	enum class EMadItemSpawnSource SpawnSource; // 0x51(0x01)
	char UnknownData_52[0x2]; // 0x52(0x02)
	int32_t VendorId; // 0x54(0x04)
	struct TArray<struct FString> SkillDataNames; // 0x58(0x10)
	struct TArray<int32_t> SkillDataIndices; // 0x68(0x10)
	int32_t ChangedSkillDataId; // 0x78(0x04)
	int32_t HiddenSkillDataId; // 0x7c(0x04)
	struct TArray<struct FName> EnhanceMods; // 0x80(0x10)
	struct FName ConfigName; // 0x90(0x08)
	struct FName SkinName; // 0x98(0x08)
	struct FName PaintName; // 0xa0(0x08)
};

// ScriptStruct Madness.MadItemOfferConsumable
// Size: 0x58 (Inherited: 0x00)
struct FMadItemOfferConsumable {
	struct FString VisibleName; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
	struct FString IconPath; // 0x20(0x10)
	struct FString ItemOfferName; // 0x30(0x10)
	struct FGuid Guid; // 0x40(0x10)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bIsValid : 1; // 0x50(0x01)
	char UnknownData_51_0 : 7; // 0x51(0x01)
	bool bHasJustBeenReceived : 1; // 0x51(0x01)
	char UnknownData_52[0x6]; // 0x52(0x06)
};

// ScriptStruct Madness.MadLoot
// Size: 0x48 (Inherited: 0x00)
struct FMadLoot {
	char UnknownData_0[0x10]; // 0x00(0x10)
	struct FName DataName; // 0x10(0x08)
	int32_t Level; // 0x18(0x04)
	enum class EMadItemRarity Rarity; // 0x1c(0x01)
	enum class EMadRarityRollSource Source; // 0x1d(0x01)
	char UnknownData_1E[0x2]; // 0x1e(0x02)
	struct FString IconPath; // 0x20(0x10)
	float RarityModifier; // 0x30(0x04)
	char UnknownData_34[0x14]; // 0x34(0x14)
};

// ScriptStruct Madness.MadVendorSaveDataWrapper
// Size: 0x38 (Inherited: 0x00)
struct FMadVendorSaveDataWrapper {
	struct FName Key; // 0x00(0x08)
	struct FMadVendorSaveData Value; // 0x08(0x30)
};

// ScriptStruct Madness.MadVendorSaveData
// Size: 0x30 (Inherited: 0x00)
struct FMadVendorSaveData {
	int32_t RegularOfferSeed; // 0x00(0x04)
	int32_t DailyOfferBoughtFromSeed; // 0x04(0x04)
	struct TArray<int32_t> BoughtRegularItemsIds; // 0x08(0x10)
	struct TArray<struct FMadItemSaveData> AvailableEliteItems; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bEliteOfferGenerated : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Madness.MadResourcePocket
// Size: 0x0c (Inherited: 0x00)
struct FMadResourcePocket {
	struct FName Name; // 0x00(0x08)
	int32_t Quantity; // 0x08(0x04)
};

// ScriptStruct Madness.MadMasteryCardEntrySaveData
// Size: 0x18 (Inherited: 0x00)
struct FMadMasteryCardEntrySaveData {
	struct FString SkillDataName; // 0x00(0x10)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool bInUse : 1; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	int32_t Stacks; // 0x14(0x04)
};

// ScriptStruct Madness.MadItemModsSaveData
// Size: 0x20 (Inherited: 0x00)
struct FMadItemModsSaveData {
	struct TArray<struct FMadItemModWeight> ModsWeights; // 0x00(0x10)
	struct TArray<struct FString> AvailableCraftingMods; // 0x10(0x10)
};

// ScriptStruct Madness.MadItemModWeight
// Size: 0x18 (Inherited: 0x00)
struct FMadItemModWeight {
	struct FString ModName; // 0x00(0x10)
	int32_t Weight; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Madness.MadItemBatchSaveData
// Size: 0x10 (Inherited: 0x00)
struct FMadItemBatchSaveData {
	struct TArray<struct FMadItemSaveData> Items; // 0x00(0x10)
};

// ScriptStruct Madness.MadVendorPriceTemplateData
// Size: 0x38 (Inherited: 0x08)
struct FMadVendorPriceTemplateData : FTableRowBase {
	struct TArray<struct FNameWrapper> RegularOfferPrices; // 0x08(0x10)
	struct TArray<struct FNameWrapper> EliteOfferPrices; // 0x18(0x10)
	struct TArray<struct FNameWrapper> DailyOfferPrices; // 0x28(0x10)
};

// ScriptStruct Madness.MadVendorPriceData
// Size: 0x120 (Inherited: 0x08)
struct FMadVendorPriceData : FTableRowBase {
	struct FNameWrapper ResourceName; // 0x08(0x10)
	struct FNameWrapper ProgressionName; // 0x18(0x10)
	struct TMap<enum class EMadItemRarity, float> RarityMult; // 0x28(0x50)
	struct TMap<enum class EMadVendorWeaponCategory, float> WeaponCategoryMult; // 0x78(0x50)
	struct TMap<enum class EMadArmorPart, float> ArmorPartMult; // 0xc8(0x50)
	char UnknownData_118_0 : 7; // 0x118(0x01)
	bool bRefinementAffected : 1; // 0x118(0x01)
	char UnknownData_119[0x7]; // 0x119(0x07)
};

// ScriptStruct Madness.MadVendorData
// Size: 0x1a8 (Inherited: 0x08)
struct FMadVendorData : FTableRowBase {
	struct FName Name; // 0x08(0x08)
	struct FNameWrapper PricesTemplate; // 0x10(0x10)
	struct FMadVendorOffer RegularOffer; // 0x20(0xa0)
	int32_t RegularOfferRefreshRate; // 0xc0(0x04)
	float RegularOfferRareChance; // 0xc4(0x04)
	float RegularOfferEpicChance; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FMadVendorEliteItem> EliteOffer; // 0xd0(0x10)
	struct FMadVendorDailyOffer DailyOffer; // 0xe0(0xa8)
	float DailyOfferEpicChance; // 0x188(0x04)
	char UnknownData_18C[0x4]; // 0x18c(0x04)
	struct TArray<struct FMadVendorExchangeOffer> ExchangeOffer; // 0x190(0x10)
	int32_t ExchangeOfferRefreshRate; // 0x1a0(0x04)
	char UnknownData_1A4[0x4]; // 0x1a4(0x04)
};

// ScriptStruct Madness.MadVendorExchangeOffer
// Size: 0x30 (Inherited: 0x00)
struct FMadVendorExchangeOffer {
	struct FNameWrapper WillGain; // 0x00(0x10)
	struct FNameWrapper WillConsume; // 0x10(0x10)
	float Markup; // 0x20(0x04)
	int32_t QuantityStep; // 0x24(0x04)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bIsSellOffer : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Madness.MadVendorDailyOffer
// Size: 0xa8 (Inherited: 0x00)
struct FMadVendorDailyOffer {
	struct TMap<enum class EMadVendorWeaponCategory, bool> Weapons; // 0x00(0x50)
	struct TMap<enum class EMadArmorPart, bool> Armors; // 0x50(0x50)
	float Discount; // 0xa0(0x04)
	int32_t RefreshRate; // 0xa4(0x04)
};

// ScriptStruct Madness.MadVendorEliteItem
// Size: 0xb8 (Inherited: 0x00)
struct FMadVendorEliteItem {
	enum class EMadVendorEliteItemType Type; // 0x00(0x01)
	enum class EMadVendorWeaponCategory WeaponCategory; // 0x01(0x01)
	enum class EMadArmorPart ArmorPart; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	int32_t Level; // 0x04(0x04)
	struct FMadLegendaryClassItem LegendaryItem; // 0x08(0x50)
	struct FNameWrapper PredefinedItem; // 0x58(0x10)
	struct TMap<struct FNameWrapper, int32_t> Cost; // 0x68(0x50)
};

// ScriptStruct Madness.MadLegendaryClassItem
// Size: 0x50 (Inherited: 0x00)
struct FMadLegendaryClassItem {
	struct TMap<enum class EMadnessSkillPath, struct FNameWrapper> Legendaries; // 0x00(0x50)
};

// ScriptStruct Madness.MadVendorOffer
// Size: 0xa0 (Inherited: 0x00)
struct FMadVendorOffer {
	struct TMap<enum class EMadVendorWeaponCategory, struct FInt32Interval> Weapons; // 0x00(0x50)
	struct TMap<enum class EMadArmorPart, struct FInt32Interval> Armors; // 0x50(0x50)
};

// ScriptStruct Madness.MadExchangeOfferItemData
// Size: 0x10 (Inherited: 0x00)
struct FMadExchangeOfferItemData {
	float CostPerUnit; // 0x00(0x04)
	char UnknownData_4_0 : 7; // 0x04(0x01)
	bool bIsSellOffer : 1; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct FName ResourceToConsume; // 0x08(0x08)
};

// ScriptStruct Madness.MadResourceData
// Size: 0xa8 (Inherited: 0x08)
struct FMadResourceData : FTableRowBase {
	enum class EMadResourceCategory Category; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FText FullName; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x40(0x28)
	struct TSoftObjectPtr<struct UTexture2D> VendorIcon; // 0x68(0x28)
	int32_t Limit; // 0x90(0x04)
	int32_t LimitInDemo; // 0x94(0x04)
	char UnknownData_98_0 : 7; // 0x98(0x01)
	bool bShowLimit : 1; // 0x98(0x01)
	char UnknownData_99[0x3]; // 0x99(0x03)
	float Equivalent; // 0x9c(0x04)
	float MiningProbability; // 0xa0(0x04)
	char UnknownData_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct Madness.MadResourceConversionQuantities
// Size: 0x0c (Inherited: 0x00)
struct FMadResourceConversionQuantities {
	int32_t WillConsume; // 0x00(0x04)
	int32_t WillGain; // 0x04(0x04)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bConversionPossible : 1; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Madness.MadResourceConversionParams
// Size: 0x1c (Inherited: 0x00)
struct FMadResourceConversionParams {
	struct FName ConsumedResource; // 0x00(0x08)
	struct FName GainedResource; // 0x08(0x08)
	float RatioMult; // 0x10(0x04)
	enum class EMadResourceConversionType ConversionType; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	int32_t ResourceQuantity; // 0x18(0x04)
};

// ScriptStruct Madness.MadLootGainParams
// Size: 0x38 (Inherited: 0x00)
struct FMadLootGainParams {
	struct FWeakObjectPtr<struct AActor> ActorSource; // 0x00(0x08)
	struct FName LootName; // 0x08(0x08)
	int32_t Level; // 0x10(0x04)
	enum class EMadRarityRollSource RaritySource; // 0x14(0x01)
	enum class EMadItemRarity Rarity; // 0x15(0x01)
	char UnknownData_16_0 : 7; // 0x16(0x01)
	bool bEquip : 1; // 0x16(0x01)
	enum class EMadLootDelayType BroadcastDelayType; // 0x17(0x01)
	float BonusLootRarityMod; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FMadItemSaveData> PredefinedItems; // 0x20(0x10)
	char UnknownData_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Madness.MadQuestRewards
// Size: 0x18 (Inherited: 0x00)
struct FMadQuestRewards {
	struct FName LastUpdatedQuestOrObjective; // 0x00(0x08)
	struct TArray<struct FQuestRewardInfoRow> QuestRewards; // 0x08(0x10)
};

// ScriptStruct Madness.MadAmmoInfo
// Size: 0x30 (Inherited: 0x00)
struct FMadAmmoInfo {
	struct FText Description; // 0x00(0x18)
	struct FString IconPath; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bWasPickedUp : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Madness.MadPresavedItemData
// Size: 0xc8 (Inherited: 0x08)
struct FMadPresavedItemData : FTableRowBase {
	enum class EMadItemRarity Rarity; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	int32_t Level; // 0x0c(0x04)
	struct FMadItemSkillData Mods; // 0x10(0x48)
	struct TMap<struct FNameWrapper, int32_t> AttributeCrystals; // 0x58(0x50)
	struct FName WeaponVariant; // 0xa8(0x08)
	float Value; // 0xb0(0x04)
	float InitialRandRoll; // 0xb4(0x04)
	float RefinementPrimary; // 0xb8(0x04)
	float RefinementAttribute; // 0xbc(0x04)
	char UnknownData_C0_0 : 7; // 0xc0(0x01)
	bool bScrappable : 1; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
};

// ScriptStruct Madness.MadSetsDescriptionsData
// Size: 0x80 (Inherited: 0x08)
struct FMadSetsDescriptionsData : FTableRowBase {
	struct FText Descr2; // 0x08(0x18)
	struct FText Descr3; // 0x20(0x18)
	struct FText Descr4; // 0x38(0x18)
	struct FText Descr5; // 0x50(0x18)
	struct FText SetName; // 0x68(0x18)
};

// ScriptStruct Madness.MadPaintData
// Size: 0x78 (Inherited: 0x08)
struct FMadPaintData : FTableRowBase {
	struct FText FullName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Pattern; // 0x38(0x28)
	float PatternOpacity; // 0x60(0x04)
	float PatternTiling; // 0x64(0x04)
	struct TArray<struct FLinearColor> Colors; // 0x68(0x10)
};

// ScriptStruct Madness.MadAutoPickupParams
// Size: 0x02 (Inherited: 0x00)
struct FMadAutoPickupParams {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bClearRemaining : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bPickupRarestFirst : 1; // 0x01(0x01)
};

// ScriptStruct Madness.MadPredefinedItemData
// Size: 0x70 (Inherited: 0x08)
struct FMadPredefinedItemData : FTableRowBase {
	struct FMadItemSkillData Mods; // 0x08(0x48)
	struct TArray<struct FNameWrapper> Attributes; // 0x50(0x10)
	struct FName Variant; // 0x60(0x08)
	char UnknownData_68_0 : 7; // 0x68(0x01)
	bool bScrappable : 1; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// ScriptStruct Madness.MadLegendaryItemData
// Size: 0x78 (Inherited: 0x70)
struct FMadLegendaryItemData : FMadPredefinedItemData {
	char UnknownData_70_0 : 7; // 0x70(0x01)
	bool bIsChallengeSpecific : 1; // 0x70(0x01)
	char UnknownData_71_0 : 7; // 0x71(0x01)
	bool bIsClassSpecific : 1; // 0x71(0x01)
	enum class EMadnessSkillPath Class; // 0x72(0x01)
	char UnknownData_73[0x5]; // 0x73(0x05)
};

// ScriptStruct Madness.MadItemIconLoadData
// Size: 0x38 (Inherited: 0x00)
struct FMadItemIconLoadData {
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x00(0x28)
	struct FDelegate LoadedDelegate; // 0x28(0x10)
};

// ScriptStruct Madness.MadAsyncItemsLoader
// Size: 0x10 (Inherited: 0x00)
struct FMadAsyncItemsLoader {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bCheckNulls : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bCheckReplicated : 1; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bCheckLoaded : 1; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	float RepeatDelay; // 0x04(0x04)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Madness.MadArmorData
// Size: 0x78 (Inherited: 0x08)
struct FMadArmorData : FTableRowBase {
	struct FText FullName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x38(0x28)
	struct FNameWrapper ItemSetName; // 0x60(0x10)
	enum class EMadArmorPart Part; // 0x70(0x01)
	enum class EBodyArmorWeightType Weight; // 0x71(0x01)
	char UnknownData_72_0 : 7; // 0x72(0x01)
	bool bHideSideWeapons : 1; // 0x72(0x01)
	char UnknownData_73[0x5]; // 0x73(0x05)
};

// ScriptStruct Madness.MadItemProperties
// Size: 0xa0 (Inherited: 0x00)
struct FMadItemProperties {
	struct FString FullName; // 0x00(0x10)
	struct FText Description; // 0x10(0x18)
	struct FMadItemSkillData SkillData; // 0x28(0x48)
	struct TArray<struct FMadAttribute> Attributes; // 0x70(0x10)
	enum class EMadItemRarity Rarity; // 0x80(0x01)
	char UnknownData_81_0 : 7; // 0x81(0x01)
	bool bRecent : 1; // 0x81(0x01)
	char UnknownData_82_0 : 7; // 0x82(0x01)
	bool bScrappable : 1; // 0x82(0x01)
	char UnknownData_83_0 : 7; // 0x83(0x01)
	bool bReplicated : 1; // 0x83(0x01)
	int32_t Rating; // 0x84(0x04)
	float InitialRandRoll; // 0x88(0x04)
	float RefinementPrimary; // 0x8c(0x04)
	float RefinementAttribute; // 0x90(0x04)
	int32_t Level; // 0x94(0x04)
	char UnknownData_98_0 : 7; // 0x98(0x01)
	bool bWasCrafted : 1; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// ScriptStruct Madness.MadAttributeGroupUIData
// Size: 0x20 (Inherited: 0x00)
struct FMadAttributeGroupUIData {
	struct FName RowName; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct Madness.MadPlayerStatsAttributeData
// Size: 0x50 (Inherited: 0x08)
struct FMadPlayerStatsAttributeData : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FNameWrapper GroupName; // 0x38(0x10)
	enum class EMadItemAttributeValueType MainValueType; // 0x48(0x01)
	enum class EMadItemAttributeValueType TooltipValueType; // 0x49(0x01)
	char UnknownData_4A_0 : 7; // 0x4a(0x01)
	bool bShowTooltip : 1; // 0x4a(0x01)
	char UnknownData_4B_0 : 7; // 0x4b(0x01)
	bool bShowMainValueInTooltip : 1; // 0x4b(0x01)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Madness.MadAttributeData
// Size: 0x60 (Inherited: 0x08)
struct FMadAttributeData : FTableRowBase {
	struct FText FullName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FNameWrapper GroupName; // 0x38(0x10)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bIsPrimary : 1; // 0x48(0x01)
	enum class EMadAttributeDomain Domain; // 0x49(0x01)
	char UnknownData_4A[0x2]; // 0x4a(0x02)
	float CrystalChance; // 0x4c(0x04)
	float ImproveLimit; // 0x50(0x04)
	float ImproveDiff; // 0x54(0x04)
	int32_t MaxStartingImprovements; // 0x58(0x04)
	enum class EMadItemAttributeValueType ValueType; // 0x5c(0x01)
	char UnknownData_5D_0 : 7; // 0x5d(0x01)
	bool bIsClassSpecific : 1; // 0x5d(0x01)
	enum class EMadnessSkillPath Class; // 0x5e(0x01)
	char UnknownData_5F[0x1]; // 0x5f(0x01)
};

// ScriptStruct Madness.MadAttributesGroups
// Size: 0x20 (Inherited: 0x08)
struct FMadAttributesGroups : FTableRowBase {
	struct FText FullName; // 0x08(0x18)
};

// ScriptStruct Madness.MadEnhanceMods
// Size: 0x10 (Inherited: 0x00)
struct FMadEnhanceMods {
	struct TArray<struct UMadSkillData*> Mods; // 0x00(0x10)
};

// ScriptStruct Madness.MadCraftingCostParams
// Size: 0x08 (Inherited: 0x00)
struct FMadCraftingCostParams {
	enum class EMadCraftingOption Option; // 0x00(0x01)
	enum class EMadSkillTier ModTier; // 0x01(0x01)
	enum class EMadItemType ItemType; // 0x02(0x01)
	enum class EMadItemRarity Rarity; // 0x03(0x01)
	int32_t Level; // 0x04(0x04)
};

// ScriptStruct Madness.MadItemModRollParams
// Size: 0x18 (Inherited: 0x00)
struct FMadItemModRollParams {
	enum class EMadItemType Type; // 0x00(0x01)
	enum class EMadSkillTier Tier; // 0x01(0x01)
	enum class EMadnessSkillPath PlayerClass; // 0x02(0x01)
	enum class EMadArmorPart Armor; // 0x03(0x01)
	char UnknownData_4[0xc]; // 0x04(0x0c)
	int32_t ItemLevel; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Madness.MadItemSetData
// Size: 0x98 (Inherited: 0x08)
struct FMadItemSetData : FTableRowBase {
	struct FText FullName; // 0x08(0x18)
	struct TSoftObjectPtr<struct UMadSkillData> Bonus3Items; // 0x20(0x28)
	struct TSoftObjectPtr<struct UMadSkillData> Bonus4Items; // 0x48(0x28)
	struct TSoftObjectPtr<struct UMadSkillData> Bonus5Items; // 0x70(0x28)
};

// ScriptStruct Madness.MadItemSet
// Size: 0x18 (Inherited: 0x00)
struct FMadItemSet {
	struct FName Name; // 0x00(0x08)
	int32_t ItemsEquipped; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UMadSkillData* BonusEffect; // 0x10(0x08)
};

// ScriptStruct Madness.MadClassTreeUIData
// Size: 0xf0 (Inherited: 0x00)
struct FMadClassTreeUIData {
	struct TArray<struct FMadPerkItemUIData> SkillTree; // 0x00(0x10)
	struct FMadPerkClassInfoUIData ClassInfo; // 0x10(0xe0)
};

// ScriptStruct Madness.MadPerkClassInfoUIData
// Size: 0xe0 (Inherited: 0x00)
struct FMadPerkClassInfoUIData {
	struct FText Name; // 0x00(0x18)
	struct FName Icon; // 0x18(0x08)
	enum class None UpgradePoints; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct TArray<struct FText> Keywords; // 0x28(0x10)
	struct TArray<struct FText> PathNames; // 0x38(0x10)
	struct FText Description; // 0x48(0x18)
	struct FText HealingMechanismExplanation; // 0x60(0x18)
	struct TArray<struct FName> DescriptionIcons; // 0x78(0x10)
	struct FName ClassTreeBackgroundTexture; // 0x88(0x08)
	struct TMap<struct FName, struct FName> ClassTreeEndNodeBackgroundTextures; // 0x90(0x50)
};

// ScriptStruct Madness.MadPerkItemUIData
// Size: 0x78 (Inherited: 0x00)
struct FMadPerkItemUIData {
	struct FName Key; // 0x00(0x08)
	struct TArray<struct FMadPerkParentUIData> AdjacentParents; // 0x08(0x10)
	struct FText Name; // 0x18(0x18)
	struct TArray<struct FText> Keywords; // 0x30(0x10)
	enum class None CoordX; // 0x40(0x01)
	enum class None CoordY; // 0x41(0x01)
	enum class EPerkSize Size; // 0x42(0x01)
	enum class EMadHeroTreeUpgradeState Status; // 0x43(0x01)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct FText Description; // 0x48(0x18)
	struct TArray<struct FName> Icons; // 0x60(0x10)
	char UnknownData_70_0 : 7; // 0x70(0x01)
	bool bIsEndNode : 1; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Madness.MadPerkParentUIData
// Size: 0x0c (Inherited: 0x00)
struct FMadPerkParentUIData {
	struct FName PerkID; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bStartLineWithBevel : 1; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Madness.MadLevelUpUIData
// Size: 0x38 (Inherited: 0x00)
struct FMadLevelUpUIData {
	enum class None UnlockedPaths; // 0x00(0x01)
	enum class None UnlockedPerk; // 0x01(0x01)
	enum class None SkillPoint; // 0x02(0x01)
	enum class None MasteryPoints; // 0x03(0x01)
	enum class None ConvoyPoints; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct TArray<struct FMadSkillProgressKey> UnlockedSkills; // 0x08(0x10)
	struct TArray<enum class EMadnessSkillPath> CommonPathsToUnlock; // 0x18(0x10)
	struct TArray<struct FMadLevelUpUIStatData> StatDifferences; // 0x28(0x10)
};

// ScriptStruct Madness.MadLevelUpUIStatData
// Size: 0x20 (Inherited: 0x00)
struct FMadLevelUpUIStatData {
	struct FText Name; // 0x00(0x18)
	float Difference; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Madness.UIActiveSKillData
// Size: 0x78 (Inherited: 0x00)
struct FUIActiveSKillData {
	enum class EMadnessActiveSkillSlots SkillSlot; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool IsUnlocked : 1; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct TArray<struct FUIPassiveSkillData> Masteries; // 0x08(0x10)
	enum class None SkillIndex; // 0x18(0x01)
	enum class None UnlockLevel; // 0x19(0x01)
	char UnknownData_1A[0x2]; // 0x1a(0x02)
	float DURATION; // 0x1c(0x04)
	float COOLDOWN; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
	struct FText Name; // 0x28(0x18)
	struct FText Description; // 0x40(0x18)
	struct TArray<struct FText> Keywords; // 0x58(0x10)
	char UnknownData_68_0 : 7; // 0x68(0x01)
	bool IsSkillNew : 1; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct UMadSkillData* Skill; // 0x70(0x08)
};

// ScriptStruct Madness.UIPassiveSkillData
// Size: 0x50 (Inherited: 0x00)
struct FUIPassiveSkillData {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool IsUnlocked : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool IsActive : 1; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	int32_t UnlockedAt; // 0x04(0x04)
	int32_t Cost; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UMadSkillData* Skill; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	enum class None ParentSkillIndex; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Madness.MadnessCharacterProgress
// Size: 0x50 (Inherited: 0x00)
struct FMadnessCharacterProgress {
	struct TArray<enum class EMadnessSkillPath> CommonPaths; // 0x00(0x10)
	struct TArray<enum class EMadnessSkillPath> UnlockedPaths; // 0x10(0x10)
	struct TArray<struct FMadSkillProgressKey> NewSkills; // 0x20(0x10)
	int32_t Level; // 0x30(0x04)
	float Experience; // 0x34(0x04)
	int32_t UpgradePoints; // 0x38(0x04)
	int32_t TotalUpgradePoints; // 0x3c(0x04)
	struct TArray<struct FName> UnlockedNodes; // 0x40(0x10)
};

// ScriptStruct Madness.MadLevelingUIData
// Size: 0x30 (Inherited: 0x00)
struct FMadLevelingUIData {
	struct TArray<enum class EMadnessSkillPath> UnlockedPaths; // 0x00(0x10)
	int32_t Level; // 0x10(0x04)
	float Experience; // 0x14(0x04)
	float NextLevelExperience; // 0x18(0x04)
	float LevelProgress; // 0x1c(0x04)
	int32_t UpgradePoints; // 0x20(0x04)
	int32_t TotalUpgradePoints; // 0x24(0x04)
	int32_t MasteryPoints; // 0x28(0x04)
	int32_t TotalMasteryPoints; // 0x2c(0x04)
};

// ScriptStruct Madness.MadLoadingScreenHintUIData
// Size: 0x40 (Inherited: 0x00)
struct FMadLoadingScreenHintUIData {
	struct FName HintID; // 0x00(0x08)
	struct FText HintTitle; // 0x08(0x18)
	struct FText HintText; // 0x20(0x18)
	enum class EMadLoadingScreenHintType HintType; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Madness.UIFriend
// Size: 0x68 (Inherited: 0x00)
struct FUIFriend {
	struct FString FriendName; // 0x00(0x10)
	struct FString PresenceString; // 0x10(0x10)
	struct FString SessionId; // 0x20(0x10)
	struct FString NetId; // 0x30(0x10)
	char UnknownData_40_0 : 7; // 0x40(0x01)
	bool bIsOnline : 1; // 0x40(0x01)
	char UnknownData_41_0 : 7; // 0x41(0x01)
	bool bIsInGame : 1; // 0x41(0x01)
	char UnknownData_42_0 : 7; // 0x42(0x01)
	bool bIsInClosedParty : 1; // 0x42(0x01)
	char UnknownData_43[0x5]; // 0x43(0x05)
	int32_t FriendLevel; // 0x48(0x04)
	int32_t PartyPlayersCount; // 0x4c(0x04)
	int32_t JoinBlockerReasonId; // 0x50(0x04)
	enum class EMadnessSkillPath CharacterClass; // 0x54(0x01)
	enum class EMadPlatform FriendPlatform; // 0x55(0x01)
	char UnknownData_56[0x12]; // 0x56(0x12)
};

// ScriptStruct Madness.LocalisedResourceUIData
// Size: 0x78 (Inherited: 0x00)
struct FLocalisedResourceUIData {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct FName> Labels; // 0x08(0x10)
	struct FAttributeMap AttributeMap; // 0x18(0x50)
	enum class ELocalisedResourceType ResourceType; // 0x68(0x01)
	char UnknownData_69[0xf]; // 0x69(0x0f)
};

// ScriptStruct Madness.MadPlayerInfo
// Size: 0x24 (Inherited: 0x00)
struct FMadPlayerInfo {
	int32_t CharacterLevel; // 0x00(0x04)
	int32_t WorldLevel; // 0x04(0x04)
	int32_t CombatPower; // 0x08(0x04)
	int32_t StoryChapter; // 0x0c(0x04)
	enum class EMadnessSkillPath CharacterClass; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
	int32_t ChallengeTier; // 0x14(0x04)
	int32_t FromLobby; // 0x18(0x04)
	int32_t BackfillingStoryLineMatch; // 0x1c(0x04)
	int32_t AverageGearLevel; // 0x20(0x04)
};

// ScriptStruct Madness.MadLootData
// Size: 0x58 (Inherited: 0x08)
struct FMadLootData : FTableRowBase {
	enum class EMadLootType Type; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bAutoClaim : 1; // 0x09(0x01)
	enum class EMadItemRarity DefaultRarity; // 0x0a(0x01)
	char UnknownData_B_0 : 7; // 0x0b(0x01)
	bool bIncreaseItemsQuantityByRarityTier : 1; // 0x0b(0x01)
	struct FInt32Interval MandatoryItemsQuantity; // 0x0c(0x08)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct FMadLootRewards> MandatoryRewards; // 0x18(0x10)
	struct FMadLootRewards RandomRewards; // 0x28(0x10)
	struct TArray<struct FMadLootReward> SelectableRewards; // 0x38(0x10)
	struct TArray<struct FMadLootConditionalRewards> ConditionalRewards; // 0x48(0x10)
};

// ScriptStruct Madness.MadLootConditionalRewards
// Size: 0x28 (Inherited: 0x00)
struct FMadLootConditionalRewards {
	struct TArray<struct FMadLootReward> Rewards; // 0x00(0x10)
	struct FFactExpression FactExpression; // 0x10(0x18)
};

// ScriptStruct Madness.MadLootRewards
// Size: 0x10 (Inherited: 0x00)
struct FMadLootRewards {
	struct TArray<struct FMadLootReward> Rewards; // 0x00(0x10)
};

// ScriptStruct Madness.MadChest
// Size: 0x30 (Inherited: 0x00)
struct FMadChest {
	struct UStaticMesh* ChestBase; // 0x00(0x08)
	struct UStaticMesh* ChestLid; // 0x08(0x08)
	struct UMaterialInterface* NormalMaterial; // 0x10(0x08)
	struct UMaterialInterface* HighlightMaterial; // 0x18(0x08)
	struct UAnimSequence* ChestOpeningAnim; // 0x20(0x08)
	struct UAnimMontage* PlayerOpeningMontage; // 0x28(0x08)
};

// ScriptStruct Madness.MadLootDropRewardDetails
// Size: 0x30 (Inherited: 0x00)
struct FMadLootDropRewardDetails {
	struct FNameWrapper Reward; // 0x00(0x10)
	enum class EMadRarityRollSource RaritySource; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct TArray<struct FName> WavesRequired; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bGranted : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Madness.MadStatArray
// Size: 0x118 (Inherited: 0x108)
struct FMadStatArray : FFastArraySerializer {
	struct TArray<struct FMadStatItem> Items; // 0x108(0x10)
};

// ScriptStruct Madness.MadStatItem
// Size: 0x14 (Inherited: 0x0c)
struct FMadStatItem : FFastArraySerializerItem {
	int32_t StatID; // 0x0c(0x04)
	int32_t StatValue; // 0x10(0x04)
};

// ScriptStruct Madness.MadStatIDData
// Size: 0x28 (Inherited: 0x08)
struct FMadStatIDData : FTableRowBase {
	int32_t UniqueId; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
};

// ScriptStruct Madness.ModValidEnemy
// Size: 0x10 (Inherited: 0x00)
struct FModValidEnemy {
	struct AMadBaseCharacter* Enemy; // 0x00(0x08)
	enum class EHitMarkerType MarkerType; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Madness.MadModPassive
// Size: 0x18 (Inherited: 0x00)
struct FMadModPassive {
	struct UMadSkillData* SkillData; // 0x00(0x08)
	struct FName ModID; // 0x08(0x08)
	float ItemLevel; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Madness.MadModList
// Size: 0x10 (Inherited: 0x00)
struct FMadModList {
	struct TArray<struct FMadModData> Mods; // 0x00(0x10)
};

// ScriptStruct Madness.MadModData
// Size: 0x38 (Inherited: 0x00)
struct FMadModData {
	struct UMadGameplayEffect* TriggerEffect; // 0x00(0x08)
	char UnknownData_8[0x30]; // 0x08(0x30)
};

// ScriptStruct Madness.MadModCooldownData
// Size: 0x08 (Inherited: 0x00)
struct FMadModCooldownData {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Madness.MadMountedGunAxisSettings
// Size: 0x1c (Inherited: 0x00)
struct FMadMountedGunAxisSettings {
	struct FName AxisInputName; // 0x00(0x08)
	float MaxForce; // 0x08(0x04)
	float Accel; // 0x0c(0x04)
	float Damping; // 0x10(0x04)
	float Range; // 0x14(0x04)
	float CurrentForce; // 0x18(0x04)
};

// ScriptStruct Madness.MadMoveActionData
// Size: 0x08 (Inherited: 0x00)
struct FMadMoveActionData {
	float CharacterWorldYaw; // 0x00(0x04)
	enum class None RandSeed; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Madness.MadMoveActionCoverData
// Size: 0x1c (Inherited: 0x08)
struct FMadMoveActionCoverData : FMadMoveActionData {
	struct FVector_NetQuantize DesiredEnterCoverLocation; // 0x08(0x0c)
	float DistanceToCover; // 0x14(0x04)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bFacingLeft : 1; // 0x18(0x01)
	char UnknownData_19_0 : 7; // 0x19(0x01)
	bool bLowCover : 1; // 0x19(0x01)
	char UnknownData_1A_0 : 7; // 0x1a(0x01)
	bool bSidePeek : 1; // 0x1a(0x01)
	char UnknownData_1B_0 : 7; // 0x1b(0x01)
	bool bBackPeek : 1; // 0x1b(0x01)
};

// ScriptStruct Madness.MadMultiInteractionUser
// Size: 0x18 (Inherited: 0x00)
struct FMadMultiInteractionUser {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Madness.MadOnlineSlotData
// Size: 0x48 (Inherited: 0x00)
struct FMadOnlineSlotData {
	char UnknownData_0[0x8]; // 0x00(0x08)
	enum class EMadOnlineSlotType SlotType; // 0x08(0x01)
	char UnknownData_9[0x2f]; // 0x09(0x2f)
	struct FString SlotName; // 0x38(0x10)
};

// ScriptStruct Madness.MadAccountOnlineData
// Size: 0x3d0 (Inherited: 0x48)
struct FMadAccountOnlineData : FMadOnlineSlotData {
	struct FMadOnlineStashData OnlineStash; // 0x48(0x120)
	struct FMadOnlineUserSettingsData OnlineUserSettings; // 0x168(0x110)
	struct FMadOnlineAccountInfo AccountInfo; // 0x278(0x80)
	struct FMadOnlineAccoladesData OnlineAccolades; // 0x2f8(0xd8)
};

// ScriptStruct Madness.MadOnlineSubSlotData
// Size: 0x50 (Inherited: 0x00)
struct FMadOnlineSubSlotData {
	char UnknownData_0[0xc]; // 0x00(0x0c)
	uint32_t Version; // 0x0c(0x04)
	struct FString SubSlotName; // 0x10(0x10)
	enum class EMadOnlineSubSlotType SubSlotType; // 0x20(0x01)
	char UnknownData_21[0x2f]; // 0x21(0x2f)
};

// ScriptStruct Madness.MadOnlineAccoladesData
// Size: 0xd8 (Inherited: 0x50)
struct FMadOnlineAccoladesData : FMadOnlineSubSlotData {
	struct FMadEnochAccoladesControllerSaveData EnochAccolades; // 0x50(0x88)
};

// ScriptStruct Madness.MadOnlineAccountInfo
// Size: 0x80 (Inherited: 0x50)
struct FMadOnlineAccountInfo : FMadOnlineSubSlotData {
	struct FString LastPlayerCharacter; // 0x50(0x10)
	char UnknownData_60_0 : 7; // 0x60(0x01)
	bool bHasEverSeenPrologue : 1; // 0x60(0x01)
	char UnknownData_61_0 : 7; // 0x61(0x01)
	bool bHasAcceptedPrivacyPolicy : 1; // 0x61(0x01)
	char UnknownData_62[0x6]; // 0x62(0x06)
	struct FDateTime PrivacyPolicyAcceptanceDate; // 0x68(0x08)
	struct TArray<struct FName> SeenGlobalTutorials; // 0x70(0x10)
};

// ScriptStruct Madness.MadOnlineUserSettingsData
// Size: 0x110 (Inherited: 0x50)
struct FMadOnlineUserSettingsData : FMadOnlineSubSlotData {
	enum class EMadHelmetVisibility HELMET; // 0x50(0x01)
	char UnknownData_51_0 : 7; // 0x51(0x01)
	bool bShowSubtitles : 1; // 0x51(0x01)
	char UnknownData_52_0 : 7; // 0x52(0x01)
	bool bDisablePlayingVOs : 1; // 0x52(0x01)
	char UnknownData_53_0 : 7; // 0x53(0x01)
	bool bDisablePlayingAntfarmVOs : 1; // 0x53(0x01)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct FString WrittenLanguage; // 0x58(0x10)
	struct FString AudioLanguage; // 0x68(0x10)
	char UnknownData_78_0 : 7; // 0x78(0x01)
	bool bOSLanguageOverridden : 1; // 0x78(0x01)
	enum class EPartyPrivacy DefaultPartyPrivacy; // 0x79(0x01)
	char UnknownData_7A_0 : 7; // 0x7a(0x01)
	bool bWorldLevelUpAutomatic : 1; // 0x7a(0x01)
	enum class EMadItemRarity AutoLootMinRarity; // 0x7b(0x01)
	char UnknownData_7C_0 : 7; // 0x7c(0x01)
	bool bEnableCrossPlatform : 1; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
	struct FVector2D DisplayAdjustment; // 0x80(0x08)
	float BRIGHTNESS; // 0x88(0x04)
	float FOV; // 0x8c(0x04)
	float HDRLuminanceMid; // 0x90(0x04)
	float MasterVolume; // 0x94(0x04)
	float DialogueVolume; // 0x98(0x04)
	float SfxVolume; // 0x9c(0x04)
	float MusicVolume; // 0xa0(0x04)
	float VoipVolume; // 0xa4(0x04)
	char UnknownData_A8_0 : 7; // 0xa8(0x01)
	bool bEnableBackgroundSound : 1; // 0xa8(0x01)
	enum class EMadAudioOutputType AudioOutputType; // 0xa9(0x01)
	char UnknownData_AA_0 : 7; // 0xaa(0x01)
	bool bUsePS4ControllerSpeaker : 1; // 0xaa(0x01)
	char UnknownData_AB_0 : 7; // 0xab(0x01)
	bool bEnableVoip : 1; // 0xab(0x01)
	char UnknownData_AC_0 : 7; // 0xac(0x01)
	bool bPushToTalk : 1; // 0xac(0x01)
	enum class None VoipInputDeviceIndex; // 0xad(0x01)
	char UnknownData_AE_0 : 7; // 0xae(0x01)
	bool bShowCombatTextDmg : 1; // 0xae(0x01)
	char UnknownData_AF_0 : 7; // 0xaf(0x01)
	bool bShowCombatTextExp : 1; // 0xaf(0x01)
	char UnknownData_B0_0 : 7; // 0xb0(0x01)
	bool bShowMinimap : 1; // 0xb0(0x01)
	char UnknownData_B1_0 : 7; // 0xb1(0x01)
	bool bShowXpBar : 1; // 0xb1(0x01)
	char UnknownData_B2_0 : 7; // 0xb2(0x01)
	bool bShowWorldLevelBar : 1; // 0xb2(0x01)
	char UnknownData_B3_0 : 7; // 0xb3(0x01)
	bool bShowQuestTracker : 1; // 0xb3(0x01)
	char UnknownData_B4_0 : 7; // 0xb4(0x01)
	bool CrosshairEnabled : 1; // 0xb4(0x01)
	char UnknownData_B5_0 : 7; // 0xb5(0x01)
	bool bShowSkillBar : 1; // 0xb5(0x01)
	char UnknownData_B6_0 : 7; // 0xb6(0x01)
	bool bShowWeaponsPanel : 1; // 0xb6(0x01)
	char UnknownData_B7_0 : 7; // 0xb7(0x01)
	bool bShowContextPanel : 1; // 0xb7(0x01)
	char UnknownData_B8_0 : 7; // 0xb8(0x01)
	bool bShowGameLog : 1; // 0xb8(0x01)
	char UnknownData_B9_0 : 7; // 0xb9(0x01)
	bool bShowTeammateHealthbars : 1; // 0xb9(0x01)
	char UnknownData_BA_0 : 7; // 0xba(0x01)
	bool bShowPartyPanel : 1; // 0xba(0x01)
	char UnknownData_BB_0 : 7; // 0xbb(0x01)
	bool bShowNpcIcons : 1; // 0xbb(0x01)
	char UnknownData_BC_0 : 7; // 0xbc(0x01)
	bool bForceClampAspectRatio : 1; // 0xbc(0x01)
	enum class EMadHealthBarMode PlayerPanelMode; // 0xbd(0x01)
	enum class EMadHealthBarMode EnemyHealthBarsMode; // 0xbe(0x01)
	char UnknownData_BF[0x1]; // 0xbf(0x01)
	float HUDScaleValue; // 0xc0(0x04)
	char UnknownData_C4_0 : 7; // 0xc4(0x01)
	bool bSprintOnToggle : 1; // 0xc4(0x01)
	char UnknownData_C5_0 : 7; // 0xc5(0x01)
	bool bDoubleTapToRoll : 1; // 0xc5(0x01)
	char UnknownData_C6_0 : 7; // 0xc6(0x01)
	bool bInvertXAxis_Gamepad : 1; // 0xc6(0x01)
	char UnknownData_C7_0 : 7; // 0xc7(0x01)
	bool bInvertYAxis_Gamepad : 1; // 0xc7(0x01)
	char UnknownData_C8_0 : 7; // 0xc8(0x01)
	bool bForceFeedback : 1; // 0xc8(0x01)
	char UnknownData_C9[0x3]; // 0xc9(0x03)
	float ForceFeedbackScale; // 0xcc(0x04)
	char UnknownData_D0_0 : 7; // 0xd0(0x01)
	bool bSwapBumpers : 1; // 0xd0(0x01)
	char UnknownData_D1_0 : 7; // 0xd1(0x01)
	bool bSwapSticks : 1; // 0xd1(0x01)
	char UnknownData_D2_0 : 7; // 0xd2(0x01)
	bool bSwapTriggers : 1; // 0xd2(0x01)
	char UnknownData_D3_0 : 7; // 0xd3(0x01)
	bool bAimAssist : 1; // 0xd3(0x01)
	char UnknownData_D4_0 : 7; // 0xd4(0x01)
	bool bToggleTargeting : 1; // 0xd4(0x01)
	char UnknownData_D5[0x3]; // 0xd5(0x03)
	float GamepadSensitivity; // 0xd8(0x04)
	float GamepadADSMultiplier; // 0xdc(0x04)
	float GamepadADSZoomMultiplier; // 0xe0(0x04)
	char UnknownData_E4_0 : 7; // 0xe4(0x01)
	bool bInvertXAxis_Mouse : 1; // 0xe4(0x01)
	char UnknownData_E5_0 : 7; // 0xe5(0x01)
	bool bInvertYAxis_Mouse : 1; // 0xe5(0x01)
	char UnknownData_E6[0x2]; // 0xe6(0x02)
	float MouseSensitivity; // 0xe8(0x04)
	float MouseAcceleration; // 0xec(0x04)
	float MenuCursorSpeedMultiplier; // 0xf0(0x04)
	float ADSMouseMultiplier; // 0xf4(0x04)
	float ADSMouseZoomMultiplier; // 0xf8(0x04)
	char UnknownData_FC_0 : 7; // 0xfc(0x01)
	bool bEnableLargeFonts : 1; // 0xfc(0x01)
	char UnknownData_FD_0 : 7; // 0xfd(0x01)
	bool bEnableHighContrast : 1; // 0xfd(0x01)
	char UnknownData_FE_0 : 7; // 0xfe(0x01)
	bool bEnableMenuNarration : 1; // 0xfe(0x01)
	char UnknownData_FF_0 : 7; // 0xff(0x01)
	bool bEnableDescriptiveSubtitles : 1; // 0xff(0x01)
	char UnknownData_100_0 : 7; // 0x100(0x01)
	bool bEnableSubtitleSpeakerNames : 1; // 0x100(0x01)
	char UnknownData_101[0x3]; // 0x101(0x03)
	float MenuNarrationVolume; // 0x104(0x04)
	enum class EColorVisionDeficiency ColorBlindMode; // 0x108(0x01)
	char UnknownData_109[0x7]; // 0x109(0x07)
};

// ScriptStruct Madness.MadOnlineStashData
// Size: 0x120 (Inherited: 0x50)
struct FMadOnlineStashData : FMadOnlineSubSlotData {
	struct FMadInventorySaveData InventorySaveData; // 0x50(0xd0)
};

// ScriptStruct Madness.MadCharacterOnlineData
// Size: 0x568 (Inherited: 0x48)
struct FMadCharacterOnlineData : FMadOnlineSlotData {
	struct FMadCharacterSaveStructure CharacterSave; // 0x48(0x438)
	struct FMadRegionSaveSlotInfo RegionSave; // 0x480(0x88)
	struct FMadWorldSaveSlotInfo WorldSave; // 0x508(0x60)
};

// ScriptStruct Madness.MadWorldSaveSlotInfo
// Size: 0x60 (Inherited: 0x50)
struct FMadWorldSaveSlotInfo : FMadOnlineSubSlotData {
	struct TArray<struct FFactEntryDTO> WorldData; // 0x50(0x10)
};

// ScriptStruct Madness.MadRegionSaveSlotInfo
// Size: 0x88 (Inherited: 0x50)
struct FMadRegionSaveSlotInfo : FMadOnlineSubSlotData {
	struct FString PreviousRegionName; // 0x50(0x10)
	int32_t RegionTransitionConnectionNumber; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
	struct FString regionname; // 0x68(0x10)
	struct FGameplayTag LastPlayerStartTag; // 0x78(0x08)
	int32_t RegionLightScenario; // 0x80(0x04)
	char UnknownData_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Madness.MadCharacterSaveStructure
// Size: 0x438 (Inherited: 0x50)
struct FMadCharacterSaveStructure : FMadOnlineSubSlotData {
	struct FMadPlayerSaveSlotInfo PlayerSaveSlotInfo; // 0x50(0x70)
	struct TArray<struct FString> ActiveSkills; // 0xc0(0x10)
	struct TArray<struct FMadDifficultyUnlock> DifficultyUnlocks; // 0xd0(0x10)
	struct FMadInventorySaveData InventorySaveData; // 0xe0(0xd0)
	struct FMadQuestUnclaimedRewardsSaveData QuestUnclaimedRewardsSaveData; // 0x1b0(0x20)
	struct FMadConvoySaveData ConvoySaveData; // 0x1d0(0x158)
	struct FMadnessCharacterProgress CharacterProgress; // 0x328(0x50)
	struct FCharacterCustomiationData CharacterCustomization; // 0x378(0x0b)
	char UnknownData_383[0x5]; // 0x383(0x05)
	struct TArray<bool> TutorialVariables; // 0x388(0x10)
	struct FMadEmoteSaveData CharacterEmotes; // 0x398(0x30)
	struct FCharacterTelemetryData TelemetryData; // 0x3c8(0x10)
	struct FHeroStatsData HeroStatsData; // 0x3d8(0x10)
	struct FMadCharacterChallengesData CharacterChallengesData; // 0x3e8(0x50)
};

// ScriptStruct Madness.MadCharacterChallengesData
// Size: 0x50 (Inherited: 0x00)
struct FMadCharacterChallengesData {
	struct TMap<int32_t, struct FMadChallengeScoreData> BestScores; // 0x00(0x50)
};

// ScriptStruct Madness.MadChallengeScoreData
// Size: 0x08 (Inherited: 0x00)
struct FMadChallengeScoreData {
	int32_t Tier; // 0x00(0x04)
	int32_t Time; // 0x04(0x04)
};

// ScriptStruct Madness.HeroStatsData
// Size: 0x10 (Inherited: 0x00)
struct FHeroStatsData {
	struct TArray<struct FName> LegendaryItemsCollected; // 0x00(0x10)
};

// ScriptStruct Madness.CharacterTelemetryData
// Size: 0x10 (Inherited: 0x00)
struct FCharacterTelemetryData {
	int32_t DeathCount; // 0x00(0x04)
	int32_t DBNOCount; // 0x04(0x04)
	int32_t RevivalCount; // 0x08(0x04)
	int32_t HasRevivedSomeoneCount; // 0x0c(0x04)
};

// ScriptStruct Madness.MadConvoySaveData
// Size: 0x158 (Inherited: 0x00)
struct FMadConvoySaveData {
	struct TArray<struct FName> Upgrades; // 0x00(0x10)
	int32_t UpgradePoints; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct FName> Decorations; // 0x18(0x10)
	int32_t SelectedColorId; // 0x28(0x04)
	int32_t SelectedDecalId; // 0x2c(0x04)
	int32_t SelectedPet; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct FMadConvoySkinSetSaveData LastCustomSkinSetup; // 0x38(0x20)
	struct FMadBannerFlagModel BannerModel; // 0x58(0x24)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
	struct TMap<struct FName, int32_t> TrucksDriveCheckpointByRegion; // 0x80(0x50)
	struct FMadConvoyUnlockableCustomizationsSaveModel UnlockedCustomizations; // 0xd0(0x80)
	char UnknownData_150_0 : 7; // 0x150(0x01)
	bool bTruckWasUnlocked : 1; // 0x150(0x01)
	char UnknownData_151[0x7]; // 0x151(0x07)
};

// ScriptStruct Madness.MadConvoyUnlockableCustomizationsSaveModel
// Size: 0x80 (Inherited: 0x00)
struct FMadConvoyUnlockableCustomizationsSaveModel {
	struct TArray<int32_t> UnlockedBannerFlagpoles; // 0x00(0x10)
	struct TArray<int32_t> UnlockedBannerShapes; // 0x10(0x10)
	struct TArray<int32_t> UnlockedBannerDamageStates; // 0x20(0x10)
	struct TArray<int32_t> UnlockedBannerPatterns; // 0x30(0x10)
	struct TArray<int32_t> UnlockedBannerSigils; // 0x40(0x10)
	struct TArray<int32_t> UnlockedTruckPatterns; // 0x50(0x10)
	struct TArray<struct FName> UnlockedTruckDecorations; // 0x60(0x10)
	struct TArray<struct FName> UnlockedTruckAccoladeSets; // 0x70(0x10)
};

// ScriptStruct Madness.MadConvoySkinSetSaveData
// Size: 0x20 (Inherited: 0x00)
struct FMadConvoySkinSetSaveData {
	int32_t ColorId; // 0x00(0x04)
	int32_t DecalId; // 0x04(0x04)
	struct TArray<struct FName> DecorationsNames; // 0x08(0x10)
	struct FName UsedSkinSetName; // 0x18(0x08)
};

// ScriptStruct Madness.MadQuestUnclaimedRewardsSaveData
// Size: 0x20 (Inherited: 0x00)
struct FMadQuestUnclaimedRewardsSaveData {
	struct FName RewardId; // 0x00(0x08)
	struct FString RewardSourceName; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bIsRepetableReward : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Madness.MadPlayerSaveSlotInfo
// Size: 0x70 (Inherited: 0x00)
struct FMadPlayerSaveSlotInfo {
	struct FString CharacterName; // 0x00(0x10)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool FinishedProlog : 1; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct FString Playthrough_id; // 0x18(0x10)
	int32_t MaxDifficultyLevel; // 0x28(0x04)
	int32_t LastDifficultyLevel; // 0x2c(0x04)
	float Level; // 0x30(0x04)
	float Experience; // 0x34(0x04)
	float DifficultyExperience; // 0x38(0x04)
	enum class EMadGender Gender; // 0x3c(0x01)
	enum class EMadnessSkillPath CharacterClass; // 0x3d(0x01)
	char UnknownData_3E[0x2]; // 0x3e(0x02)
	int32_t CombatRating; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct TArray<struct FName> SeenUIHeroTabs; // 0x48(0x10)
	struct TArray<struct FName> SeenConvoyTabs; // 0x58(0x10)
	char UnknownData_68_0 : 7; // 0x68(0x01)
	bool bIsDemoCharacter : 1; // 0x68(0x01)
	char UnknownData_69_0 : 7; // 0x69(0x01)
	bool bBlocked : 1; // 0x69(0x01)
	char UnknownData_6A[0x6]; // 0x6a(0x06)
};

// ScriptStruct Madness.MadNewCharacterData
// Size: 0x20 (Inherited: 0x00)
struct FMadNewCharacterData {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Madness.MadOnlineCharacterSlot
// Size: 0x578 (Inherited: 0x00)
struct FMadOnlineCharacterSlot {
	char UnknownData_0[0x10]; // 0x00(0x10)
	struct FMadCharacterOnlineData CharacterData; // 0x10(0x568)
};

// ScriptStruct Madness.MadPartyMemberData
// Size: 0x190 (Inherited: 0x00)
struct FMadPartyMemberData {
	char UnknownData_0[0x190]; // 0x00(0x190)
};

// ScriptStruct Madness.MadPartyMemberStatsData
// Size: 0x04 (Inherited: 0x00)
struct FMadPartyMemberStatsData {
	int32_t Armor; // 0x00(0x04)
};

// ScriptStruct Madness.MadJoinCodeUserInfo
// Size: 0x20 (Inherited: 0x00)
struct FMadJoinCodeUserInfo {
	struct FString PeerId; // 0x00(0x10)
	struct FString Gamertag; // 0x10(0x10)
};

// ScriptStruct Madness.DeathAnimationData
// Size: 0x28 (Inherited: 0x08)
struct FDeathAnimationData : FSoftPtrAnimData {
	struct FAnimMontageData MontageData; // 0x08(0x20)
};

// ScriptStruct Madness.AnimMontageData
// Size: 0x20 (Inherited: 0x08)
struct FAnimMontageData : FSoftPtrAnimData {
	struct UAnimMontage* Montage; // 0x08(0x08)
	struct UAnimMontage* FemaleMontage; // 0x10(0x08)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bNullOverride : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Madness.VelocityData
// Size: 0x50 (Inherited: 0x00)
struct FVelocityData {
	struct FVelocityTypeData Forward; // 0x00(0x10)
	struct FVelocityTypeData Backward; // 0x10(0x10)
	struct FVelocityTypeData Targeting; // 0x20(0x10)
	struct FVelocityTypeData CoverLo; // 0x30(0x10)
	struct FVelocityTypeData CoverHi; // 0x40(0x10)
};

// ScriptStruct Madness.VelocityTypeData
// Size: 0x10 (Inherited: 0x00)
struct FVelocityTypeData {
	float Velocity[0x4]; // 0x00(0x10)
};

// ScriptStruct Madness.CoverData
// Size: 0x1660 (Inherited: 0x08)
struct FCoverData : FSoftPtrAnimData {
	struct FIdleData IdleLeftData; // 0x08(0x48)
	struct FIdleData IdleRightData; // 0x50(0x48)
	struct FIdleData IdleBoundaryLeftData; // 0x98(0x48)
	struct FIdleData IdleBoundaryRightData; // 0xe0(0x48)
	struct FIdleData SprintOrRollOutIndicatorLeftData; // 0x128(0x48)
	struct FIdleData SprintOrRollOutIndicatorRightData; // 0x170(0x48)
	struct FAnimMontageData TurnToLeft; // 0x1b8(0x20)
	struct FAnimMontageData TurnToRight; // 0x1d8(0x20)
	struct FAnimMontageData MovementTurnToLeft; // 0x1f8(0x20)
	struct FAnimMontageData MovementTurnToRight; // 0x218(0x20)
	struct FCoverPeekTypeData Aim; // 0x238(0x7b0)
	struct FCoverPeekTypeData Blind; // 0x9e8(0x7b0)
	struct FCoverTransitionBetweenPeekData AimAndBlind; // 0x1198(0x128)
	struct FWeaponAnim FireAnim; // 0x12c0(0x38)
	struct FWeaponAnim FemaleFireAnim; // 0x12f8(0x38)
	struct FWeaponAnim HipFireAnim; // 0x1330(0x38)
	struct FWeaponAnim FemaleHipFireAnim; // 0x1368(0x38)
	struct FAnimMontageData LeaveLeft; // 0x13a0(0x20)
	struct FAnimMontageData LeaveRight; // 0x13c0(0x20)
	struct FAnimMontageData EntersLeft[0x3]; // 0x13e0(0x60)
	struct FAnimMontageData EntersRight[0x3]; // 0x1440(0x60)
	struct FAnimMontageData EnterRunAdditiveLeft; // 0x14a0(0x20)
	struct FAnimMontageData EnterRunAdditiveRight; // 0x14c0(0x20)
	struct FAnimMontageData JumpOverLeft; // 0x14e0(0x20)
	struct FAnimMontageData JumpOverRight; // 0x1500(0x20)
	struct FAnimMontageData JumpOverSprint; // 0x1520(0x20)
	struct FAnimMontageData ClimbUpLeft; // 0x1540(0x20)
	struct FAnimMontageData ClimbUpRight; // 0x1560(0x20)
	struct FAnimMontageData ClimbUpSprint; // 0x1580(0x20)
	struct FAnimMontageData SprintOutLeftDirectional; // 0x15a0(0x20)
	struct FAnimMontageData SprintOutRightDirectional; // 0x15c0(0x20)
	struct FAnimMontageData SprintOutLeftStrafe; // 0x15e0(0x20)
	struct FAnimMontageData SprintOutRightStrafe; // 0x1600(0x20)
	struct FAnimMontageData SprintOutLeftAroundCorner; // 0x1620(0x20)
	struct FAnimMontageData SprintOutRightAroundCorner; // 0x1640(0x20)
};

// ScriptStruct Madness.CoverTransitionBetweenPeekData
// Size: 0x128 (Inherited: 0x08)
struct FCoverTransitionBetweenPeekData : FSoftPtrAnimData {
	struct FCoverTransitionBetweenPeekTypeData UpRight; // 0x08(0x48)
	struct FCoverTransitionBetweenPeekTypeData UpLeft; // 0x50(0x48)
	struct FCoverTransitionBetweenPeekTypeData Right; // 0x98(0x48)
	struct FCoverTransitionBetweenPeekTypeData Left; // 0xe0(0x48)
};

// ScriptStruct Madness.CoverTransitionBetweenPeekTypeData
// Size: 0x48 (Inherited: 0x08)
struct FCoverTransitionBetweenPeekTypeData : FSoftPtrAnimData {
	struct FAnimMontageData AimToBlind; // 0x08(0x20)
	struct FAnimMontageData BlindToAim; // 0x28(0x20)
};

// ScriptStruct Madness.CoverPeekTypeData
// Size: 0x7b0 (Inherited: 0x08)
struct FCoverPeekTypeData : FSoftPtrAnimData {
	struct FCoverPeekData UpRight; // 0x08(0x180)
	struct FCoverPeekData UpLeft; // 0x188(0x180)
	struct FCoverPeekData Right; // 0x308(0x180)
	struct FCoverPeekData Left; // 0x488(0x180)
	struct FCoverPeekUpToSideTransitionData UpRightAndRight; // 0x608(0x48)
	struct FCoverPeekUpToSideTransitionData UpLeftAndLeft; // 0x650(0x48)
	struct FAnimMontageData UpLeftToUpRight; // 0x698(0x20)
	struct FAnimMontageData UpRightToUpLeft; // 0x6b8(0x20)
	struct FCoverMovementData MovementData; // 0x6d8(0xd8)
};

// ScriptStruct Madness.CoverMovementData
// Size: 0xd8 (Inherited: 0x08)
struct FCoverMovementData : FSoftPtrAnimData {
	struct FIdleData MovementLeftData; // 0x08(0x48)
	struct FIdleData MovementRightData; // 0x50(0x48)
	struct FAnimMontageData IdleToMovement; // 0x98(0x20)
	struct FAnimMontageData MovementToIdle; // 0xb8(0x20)
};

// ScriptStruct Madness.IdleData
// Size: 0x48 (Inherited: 0x08)
struct FIdleData : FSoftPtrAnimData {
	struct UAnimationAsset* IdleAnimation; // 0x08(0x08)
	struct UAnimationAsset* FemaleIdleAnimation; // 0x10(0x08)
	float BlendInTime; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FArcData ArcData; // 0x20(0x08)
	struct FAnimMontageData FlavorMontage; // 0x28(0x20)
};

// ScriptStruct Madness.ArcData
// Size: 0x08 (Inherited: 0x00)
struct FArcData {
	struct UCurveFloat* VelocityCurve; // 0x00(0x08)
};

// ScriptStruct Madness.CoverPeekUpToSideTransitionData
// Size: 0x48 (Inherited: 0x08)
struct FCoverPeekUpToSideTransitionData : FSoftPtrAnimData {
	struct FAnimMontageData UpToSide; // 0x08(0x20)
	struct FAnimMontageData SideToUp; // 0x28(0x20)
};

// ScriptStruct Madness.CoverPeekData
// Size: 0x180 (Inherited: 0x08)
struct FCoverPeekData : FSoftPtrAnimData {
	struct FIdleData PeekData; // 0x08(0x48)
	struct FAnimMontageData IdleToPeek; // 0x50(0x20)
	struct FAnimMontageData PeekToIdle; // 0x70(0x20)
	struct FAimOffsetData AimOffset; // 0x90(0xf0)
};

// ScriptStruct Madness.AimOffsetData
// Size: 0xf0 (Inherited: 0x08)
struct FAimOffsetData : FSoftPtrAnimData {
	struct FIdleData IdleFrontData; // 0x08(0x48)
	struct FIdleData IdleBackData; // 0x50(0x48)
	struct UAimOffsetBlendSpace* AimOffsetFront; // 0x98(0x08)
	struct UAimOffsetBlendSpace* AimOffsetBack; // 0xa0(0x08)
	struct FCoverPeekSideToBackTransitionData FrontAndBack; // 0xa8(0x48)
};

// ScriptStruct Madness.CoverPeekSideToBackTransitionData
// Size: 0x48 (Inherited: 0x08)
struct FCoverPeekSideToBackTransitionData : FSoftPtrAnimData {
	struct FAnimMontageData SideToBack; // 0x08(0x20)
	struct FAnimMontageData BackToSide; // 0x28(0x20)
};

// ScriptStruct Madness.MovementData
// Size: 0x5d8 (Inherited: 0x08)
struct FMovementData : FSoftPtrAnimData {
	struct FIdleData IdleData; // 0x08(0x48)
	struct FAimOffsetData AimOffset; // 0x50(0xf0)
	struct FAimOffsetData AimOffsetIdle; // 0x140(0xf0)
	struct FAnimMontageData IdleToMovementDirectionalWalkMontage; // 0x230(0x20)
	struct FAnimMontageData IdleToMovementDirectionalJogMontage; // 0x250(0x20)
	struct FAnimMontageData IdleToMovementWalkMontage; // 0x270(0x20)
	struct FAnimMontageData IdleToMovementJogMontage; // 0x290(0x20)
	struct FAnimMontageData MovementToIdleMontage_Premature; // 0x2b0(0x20)
	struct FAnimMontageData MovementToIdleWalkMontage; // 0x2d0(0x20)
	struct FAnimMontageData MovementToIdleJogMontage; // 0x2f0(0x20)
	struct FIdleData MovementData; // 0x310(0x48)
	struct FAnimMontagesByGameplayTags RollMontage; // 0x358(0x38)
	struct FAnimMontageData TargetingFacingChange; // 0x390(0x20)
	struct FSpeedChangeDataAdditive SpeedChangeDataAdditive; // 0x3b0(0x228)
};

// ScriptStruct Madness.SpeedChangeDataAdditive
// Size: 0x228 (Inherited: 0x08)
struct FSpeedChangeDataAdditive : FSoftPtrAnimData {
	struct FSpeedChangeDataToAdditive FromSpeed[0x4]; // 0x08(0x220)
};

// ScriptStruct Madness.SpeedChangeDataToAdditive
// Size: 0x88 (Inherited: 0x08)
struct FSpeedChangeDataToAdditive : FSoftPtrAnimData {
	struct FAnimMontageData ToSpeed[0x4]; // 0x08(0x80)
};

// ScriptStruct Madness.AnimMontagesByGameplayTags
// Size: 0x38 (Inherited: 0x08)
struct FAnimMontagesByGameplayTags : FSoftPtrAnimData {
	struct TArray<struct FAnimMontageForGameplayTag> MontagesByTags; // 0x08(0x10)
	struct FAnimMontageData DefaultMontageData; // 0x18(0x20)
};

// ScriptStruct Madness.AnimMontageForGameplayTag
// Size: 0x30 (Inherited: 0x08)
struct FAnimMontageForGameplayTag : FSoftPtrAnimData {
	struct FGameplayTag RequiredTag; // 0x08(0x08)
	struct FAnimMontageData MontageData; // 0x10(0x20)
};

// ScriptStruct Madness.TurnInPlaceData
// Size: 0x20 (Inherited: 0x00)
struct FTurnInPlaceData {
	struct FTurnInPlaceAnimations LeftHandAttachment; // 0x00(0x10)
	struct FTurnInPlaceAnimations RightHandAttachment; // 0x10(0x10)
};

// ScriptStruct Madness.TurnInPlaceAnimations
// Size: 0x10 (Inherited: 0x00)
struct FTurnInPlaceAnimations {
	struct UBlendSpace1D* TurnInPlaceBlendspace; // 0x00(0x08)
	struct UAnimSequence* TurnInPlaceSettle; // 0x08(0x08)
};

// ScriptStruct Madness.FacingDependantData
// Size: 0x18 (Inherited: 0x08)
struct FFacingDependantData : FSoftPtrAnimData {
	struct UBlendSpace1D* WeaponGrip; // 0x08(0x08)
	struct UBlendSpace1D* FemaleWeaponGrip; // 0x10(0x08)
};

// ScriptStruct Madness.BestCover
// Size: 0x20 (Inherited: 0x00)
struct FBestCover {
	struct FCoverSlotWeight Weight; // 0x00(0x0c)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FWeakObjectPtr<struct ACover> Cover; // 0x10(0x08)
	int32_t SlotIdx; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Madness.CoverSlotWeight
// Size: 0x0c (Inherited: 0x00)
struct FCoverSlotWeight {
	float AngleWeight; // 0x00(0x04)
	float DistanceWeight; // 0x04(0x04)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bInCone : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bValid : 1; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Madness.CameraViewLimits
// Size: 0x14 (Inherited: 0x00)
struct FCameraViewLimits {
	float PitchMin; // 0x00(0x04)
	float PitchMax; // 0x04(0x04)
	float YawMin; // 0x08(0x04)
	float YawMax; // 0x0c(0x04)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool bDoNotApplyLimits : 1; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Madness.MadGroupedCombatNumber
// Size: 0x30 (Inherited: 0x00)
struct FMadGroupedCombatNumber {
	struct FMadCombatNumber CombatNumber; // 0x00(0x28)
	struct FTimerHandle Timer; // 0x28(0x08)
};

// ScriptStruct Madness.PlayerParticleEffectData
// Size: 0x48 (Inherited: 0x00)
struct FPlayerParticleEffectData {
	struct UParticleSystem* ParticleEffect; // 0x00(0x08)
	struct FName AttachPointName; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	struct FVector Scale; // 0x28(0x0c)
	enum class EAttachLocation LocationType; // 0x34(0x01)
	char UnknownData_35_0 : 7; // 0x35(0x01)
	bool bAutoDestroy : 1; // 0x35(0x01)
	char UnknownData_36_0 : 7; // 0x36(0x01)
	bool bOverrideInstanceParams : 1; // 0x36(0x01)
	char UnknownData_37[0x1]; // 0x37(0x01)
	struct TArray<struct FParticleSysParam> InstanceParameters; // 0x38(0x10)
};

// ScriptStruct Madness.MadPlayerHealthBarTintSettings
// Size: 0x18 (Inherited: 0x00)
struct FMadPlayerHealthBarTintSettings {
	float TintThreshold; // 0x00(0x04)
	struct FLinearColor TintColor; // 0x04(0x10)
	char UnknownData_14_0 : 7; // 0x14(0x01)
	bool bInterpolateColor : 1; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Madness.MadSensSettingsInfo
// Size: 0x24 (Inherited: 0x00)
struct FMadSensSettingsInfo {
	char UnknownData_0[0x24]; // 0x00(0x24)
};

// ScriptStruct Madness.PlayerPreviewParameters
// Size: 0x68 (Inherited: 0x00)
struct FPlayerPreviewParameters {
	struct AActor* PreviewEnvironmentClass; // 0x00(0x08)
	struct TMap<enum class EMadGender, struct AActor*> ActorToPreviewClasses; // 0x08(0x50)
	struct FVector Position; // 0x58(0x0c)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Madness.VoteStateUIData
// Size: 0x18 (Inherited: 0x00)
struct FVoteStateUIData {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bHasAcknowledgedVote : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bHasVoted : 1; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bVoteAccepted : 1; // 0x02(0x01)
	char UnknownData_3_0 : 7; // 0x03(0x01)
	bool bVoteDelayed : 1; // 0x03(0x01)
	enum class None VoteChoice; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct FString CharacterName; // 0x08(0x10)
};

// ScriptStruct Madness.MadHeroScreenTabStateUIData
// Size: 0x60 (Inherited: 0x00)
struct FMadHeroScreenTabStateUIData {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bEnabled : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bSeen : 1; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct FText DisplayName; // 0x08(0x18)
	struct FName NameID; // 0x20(0x08)
	struct TArray<int32_t> NewItems; // 0x28(0x10)
	struct FFactExpression EnableFactExpression; // 0x38(0x18)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bEnabledDebugForced : 1; // 0x50(0x01)
	char UnknownData_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct Madness.MadPlayersBaseStatsUIData
// Size: 0x2c (Inherited: 0x00)
struct FMadPlayersBaseStatsUIData {
	float WeaponDamage; // 0x00(0x04)
	float CritChance; // 0x04(0x04)
	float WeaponCritDamageMultiplier; // 0x08(0x04)
	float ArmorPenetration; // 0x0c(0x04)
	float ResistancePenetration; // 0x10(0x04)
	float Resistance; // 0x14(0x04)
	float HealthRegen; // 0x18(0x04)
	float LifeLeechWeapons; // 0x1c(0x04)
	float LifeLeechSkills; // 0x20(0x04)
	float MovementSpeed; // 0x24(0x04)
	float HealingReceivedBonus; // 0x28(0x04)
};

// ScriptStruct Madness.MadPlayerStatsAttributeUIData
// Size: 0x58 (Inherited: 0x00)
struct FMadPlayerStatsAttributeUIData {
	struct FName StatID; // 0x00(0x08)
	float MainValue; // 0x08(0x04)
	float TooltipBaseValue; // 0x0c(0x04)
	float TooltipBonusValue; // 0x10(0x04)
	char UnknownData_14_0 : 7; // 0x14(0x01)
	bool bShowTooltip : 1; // 0x14(0x01)
	char UnknownData_15_0 : 7; // 0x15(0x01)
	bool bShowMainValueInTooltip : 1; // 0x15(0x01)
	char UnknownData_16[0x2]; // 0x16(0x02)
	struct FText DisplayName; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct FName GroupId; // 0x48(0x08)
	enum class EMadItemAttributeValueType MainValueType; // 0x50(0x01)
	enum class EMadItemAttributeValueType TooltipValueType; // 0x51(0x01)
	char UnknownData_52[0x6]; // 0x52(0x06)
};

// ScriptStruct Madness.MadStatusUIData
// Size: 0x28 (Inherited: 0x00)
struct FMadStatusUIData {
	struct FText Name; // 0x00(0x18)
	struct FName IconPath; // 0x18(0x08)
	char UnknownData_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Madness.OreData
// Size: 0x0c (Inherited: 0x00)
struct FOreData {
	int32_t Copper; // 0x00(0x04)
	int32_t Iron; // 0x04(0x04)
	int32_t Titanium; // 0x08(0x04)
};

// ScriptStruct Madness.WidgetData3D
// Size: 0x18 (Inherited: 0x00)
struct FWidgetData3D {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FVector2D ScreenPos; // 0x08(0x08)
	float Scale; // 0x10(0x04)
	float LifeTime; // 0x14(0x04)
};

// ScriptStruct Madness.HealthBarData
// Size: 0x18 (Inherited: 0x18)
struct FHealthBarData : FWidgetData3D {
};

// ScriptStruct Madness.CombatNumberData
// Size: 0x40 (Inherited: 0x18)
struct FCombatNumberData : FWidgetData3D {
	struct FMadCombatNumber CombatNumber; // 0x18(0x28)
};

// ScriptStruct Madness.IndicatorData
// Size: 0x80 (Inherited: 0x18)
struct FIndicatorData : FWidgetData3D {
	char UnknownData_18[0x8]; // 0x18(0x08)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bVisible : 1; // 0x20(0x01)
	char UnknownData_21_0 : 7; // 0x21(0x01)
	bool bOffscreen : 1; // 0x21(0x01)
	char UnknownData_22_0 : 7; // 0x22(0x01)
	bool bRemoveOnDeactivate : 1; // 0x22(0x01)
	char UnknownData_23_0 : 7; // 0x23(0x01)
	bool bBoolParam : 1; // 0x23(0x01)
	enum class EIndicatorType IndicatorType; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
	float FloatParam; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FString IconPath; // 0x30(0x10)
	struct FString StringParam; // 0x40(0x10)
	struct TArray<struct FString> DynamicParams; // 0x50(0x10)
	struct TArray<struct FInteractionActionInfo> Actions; // 0x60(0x10)
	int32_t IndicatorDataHandleID; // 0x70(0x04)
	char UnknownData_74[0x4]; // 0x74(0x04)
	int32_t MinorID; // 0x78(0x04)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Madness.InteractionActionInfo
// Size: 0x48 (Inherited: 0x00)
struct FInteractionActionInfo {
	struct FText VisibleName; // 0x00(0x18)
	struct FName InputActionName; // 0x18(0x08)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bHoldToInteract : 1; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	float Progress; // 0x24(0x04)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bIsActive : 1; // 0x28(0x01)
	char UnknownData_29_0 : 7; // 0x29(0x01)
	bool bRecentlyFailedInteraction : 1; // 0x29(0x01)
	char UnknownData_2A_0 : 7; // 0x2a(0x01)
	bool bIsDisabled : 1; // 0x2a(0x01)
	char UnknownData_2B[0x5]; // 0x2b(0x05)
	struct FText ErrorMessage; // 0x30(0x18)
};

// ScriptStruct Madness.IndicatorDataUniqueIDHandle
// Size: 0x04 (Inherited: 0x00)
struct FIndicatorDataUniqueIDHandle {
	int32_t Handle; // 0x00(0x04)
};

// ScriptStruct Madness.NewDiscoveredAreaData
// Size: 0x10 (Inherited: 0x00)
struct FNewDiscoveredAreaData {
	struct FString AreaName; // 0x00(0x10)
};

// ScriptStruct Madness.MadShowTravelDestinationUIData
// Size: 0x18 (Inherited: 0x00)
struct FMadShowTravelDestinationUIData {
	struct FString Destination; // 0x00(0x10)
	float NotificationTime; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Madness.PartyQuestInfoUIData
// Size: 0x50 (Inherited: 0x00)
struct FPartyQuestInfoUIData {
	struct FText Name; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct TArray<struct FObjectiveUIWrapper> Objectives; // 0x30(0x10)
	enum class EQuestType Type; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	struct FName QuestID; // 0x44(0x08)
	int32_t QuestStage; // 0x4c(0x04)
};

// ScriptStruct Madness.ObjectiveUIWrapper
// Size: 0x70 (Inherited: 0x00)
struct FObjectiveUIWrapper {
	struct UBaseObjective* Objective; // 0x00(0x08)
	struct FName IDName; // 0x08(0x08)
	struct FString Description; // 0x10(0x10)
	struct FText LongDescription; // 0x20(0x18)
	struct FText regionname; // 0x38(0x18)
	struct FText PersistentName; // 0x50(0x18)
	char UnknownData_68_0 : 7; // 0x68(0x01)
	bool IsVisibleInUI : 1; // 0x68(0x01)
	char UnknownData_69_0 : 7; // 0x69(0x01)
	bool bIsNew : 1; // 0x69(0x01)
	enum class EObjectiveStatus Status; // 0x6a(0x01)
	enum class EObjectiveStatus OverrideStatus; // 0x6b(0x01)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Madness.QuestZoneUIWrapper
// Size: 0x60 (Inherited: 0x00)
struct FQuestZoneUIWrapper {
	struct FText DisplayName; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct FString background; // 0x30(0x10)
	struct FName regionname; // 0x40(0x08)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bUnlocked : 1; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct TArray<struct FQuestCheckpointUIWrapper> Checkpoints; // 0x50(0x10)
};

// ScriptStruct Madness.QuestCheckpointUIWrapper
// Size: 0x28 (Inherited: 0x00)
struct FQuestCheckpointUIWrapper {
	struct FName ID; // 0x00(0x08)
	struct FText Title; // 0x08(0x18)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bUnlocked : 1; // 0x20(0x01)
	char UnknownData_21_0 : 7; // 0x21(0x01)
	bool bCurrent : 1; // 0x21(0x01)
	char UnknownData_22_0 : 7; // 0x22(0x01)
	bool bIsBlocked : 1; // 0x22(0x01)
	char UnknownData_23[0x5]; // 0x23(0x05)
};

// ScriptStruct Madness.QuestPool
// Size: 0x168 (Inherited: 0x00)
struct FQuestPool {
	struct FText DisplayName; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct FText RestartDescription; // 0x30(0x18)
	int32_t Progress; // 0x48(0x04)
	char UnknownData_4C_0 : 7; // 0x4c(0x01)
	bool bUnlocked : 1; // 0x4c(0x01)
	char UnknownData_4D_0 : 7; // 0x4d(0x01)
	bool bWorldmapIconVisible : 1; // 0x4d(0x01)
	char UnknownData_4E[0x2]; // 0x4e(0x02)
	struct FMadUniversalRewardUIData RewardData; // 0x50(0xf0)
	struct TArray<struct FQuestUIWrapper> Quests; // 0x140(0x10)
	char UnknownData_150[0x18]; // 0x150(0x18)
};

// ScriptStruct Madness.QuestUIWrapper
// Size: 0x90 (Inherited: 0x00)
struct FQuestUIWrapper {
	struct TArray<struct FObjectiveUIWrapper> Objectives; // 0x00(0x10)
	struct UBaseQuest* quest; // 0x10(0x08)
	struct FString IconPath; // 0x18(0x10)
	struct FText Description; // 0x28(0x18)
	struct FText LongDescription; // 0x40(0x18)
	struct FText StartPersistentName; // 0x58(0x18)
	struct FName IDName; // 0x70(0x08)
	enum class EObjectiveStatus Status; // 0x78(0x01)
	enum class EQuestType QuestType; // 0x79(0x01)
	enum class EQuestPoolType PoolType; // 0x7a(0x01)
	enum class EMadChallengeType ChallengeType; // 0x7b(0x01)
	int32_t MinObjectiveLevel; // 0x7c(0x04)
	char UnknownData_80_0 : 7; // 0x80(0x01)
	bool bTracked : 1; // 0x80(0x01)
	char UnknownData_81_0 : 7; // 0x81(0x01)
	bool bCanBeAbandoned : 1; // 0x81(0x01)
	char UnknownData_82[0x2]; // 0x82(0x02)
	int32_t StartCount; // 0x84(0x04)
	int32_t CompletedCount; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct Madness.TimelineUIWrapper_DEPRECATED
// Size: 0x10 (Inherited: 0x00)
struct FTimelineUIWrapper_DEPRECATED {
	struct TArray<struct FChapterUIWrapper_DEPRECATED> Chapters; // 0x00(0x10)
};

// ScriptStruct Madness.ChapterUIWrapper_DEPRECATED
// Size: 0x28 (Inherited: 0x00)
struct FChapterUIWrapper_DEPRECATED {
	struct FText Title; // 0x00(0x18)
	struct TArray<struct FCheckpointUIWrapper_DEPRECATED> Checkpoints; // 0x18(0x10)
};

// ScriptStruct Madness.CheckpointUIWrapper_DEPRECATED
// Size: 0x68 (Inherited: 0x00)
struct FCheckpointUIWrapper_DEPRECATED {
	struct FName ID; // 0x00(0x08)
	struct FText Title; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct FText regionname; // 0x38(0x18)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bUnlocked : 1; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct UBaseObjective* OriginObjective; // 0x58(0x08)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// ScriptStruct Madness.QuestUIPopup
// Size: 0x20 (Inherited: 0x00)
struct FQuestUIPopup {
	struct FText DisplayName; // 0x00(0x18)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bShown : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Madness.MadWidgetDecoratorParams
// Size: 0x20 (Inherited: 0x00)
struct FMadWidgetDecoratorParams {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct UUserWidget* WidgetClass; // 0x08(0x08)
	int32_t Idx; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct UActionMappingWidget* ActionMappingWidgetClass; // 0x18(0x08)
};

// ScriptStruct Madness.MadActionMappingDecoratorParams
// Size: 0x20 (Inherited: 0x20)
struct FMadActionMappingDecoratorParams : FMadWidgetDecoratorParams {
};

// ScriptStruct Madness.MadSciathanAnimInstanceProxy
// Size: 0x6e0 (Inherited: 0x6e0)
struct FMadSciathanAnimInstanceProxy : FAnimInstanceProxy {
};

// ScriptStruct Madness.MadSciathanCachedAssetPlayerData
// Size: 0x18 (Inherited: 0x00)
struct FMadSciathanCachedAssetPlayerData {
	struct FName StateMachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	char UnknownData_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Madness.MadSciathanCharacterAnimData
// Size: 0x4c (Inherited: 0x00)
struct FMadSciathanCharacterAnimData {
	float DeltaSeconds; // 0x00(0x04)
	struct FVector WorldAccel; // 0x04(0x0c)
	float MaxAccel; // 0x10(0x04)
	struct FVector WorldVelocity; // 0x14(0x0c)
	struct FVector Location; // 0x20(0x0c)
	struct FRotator Rotation; // 0x2c(0x0c)
	struct FVector GlideToLocation; // 0x38(0x0c)
	char UnknownData_44_0 : 7; // 0x44(0x01)
	bool bIsAccelerating2D : 1; // 0x44(0x01)
	char UnknownData_45_0 : 7; // 0x45(0x01)
	bool bIsMoving2D : 1; // 0x45(0x01)
	char UnknownData_46_0 : 7; // 0x46(0x01)
	bool bIsOnGround : 1; // 0x46(0x01)
	char UnknownData_47_0 : 7; // 0x47(0x01)
	bool bIsMovementFalling : 1; // 0x47(0x01)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bIsMovementFlying : 1; // 0x48(0x01)
	char UnknownData_49_0 : 7; // 0x49(0x01)
	bool bIsGlideActive : 1; // 0x49(0x01)
	char UnknownData_4A_0 : 7; // 0x4a(0x01)
	bool bSyncGroupIsBetweenMarkers : 1; // 0x4a(0x01)
	char UnknownData_4B[0x1]; // 0x4b(0x01)
};

// ScriptStruct Madness.MadSciathanCapsuleAnimData
// Size: 0x60 (Inherited: 0x00)
struct FMadSciathanCapsuleAnimData {
	struct FTransform LocalToWorld; // 0x00(0x30)
	struct FVector Location; // 0x30(0x0c)
	struct FVector WorldVelocity; // 0x3c(0x0c)
	struct FVector WorldAccel; // 0x48(0x0c)
	char UnknownData_54[0xc]; // 0x54(0x0c)
};

// ScriptStruct Madness.MadDlcInfo
// Size: 0x18 (Inherited: 0x00)
struct FMadDlcInfo {
	struct FText DlcName; // 0x00(0x18)
};

// ScriptStruct Madness.ShaderGroupMap
// Size: 0x60 (Inherited: 0x00)
struct FShaderGroupMap {
	struct TMap<struct FName, struct FShaderGroup> ShaderGroupMap; // 0x00(0x50)
	struct FName CurrentGroupName; // 0x50(0x08)
	struct FName PreviousGroupName; // 0x58(0x08)
};

// ScriptStruct Madness.ShaderGroup
// Size: 0xb0 (Inherited: 0x00)
struct FShaderGroup {
	struct TMap<struct UMadLiteShaderEffect*, struct UMadLiteShaderEffect*> ClassEffectMap; // 0x00(0x50)
	struct TSet<struct UMadLiteShaderEffect*> EffectsDeactivating; // 0x50(0x50)
	struct FName GroupName; // 0xa0(0x08)
	int32_t Priority; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Madness.IndependentShaderEffect
// Size: 0x50 (Inherited: 0x00)
struct FIndependentShaderEffect {
	struct TMap<struct UMadShaderEffect*, struct UMadShaderEffect*> ClassEffectMap; // 0x00(0x50)
};

// ScriptStruct Madness.MadShaderEffectManagerTickFunction
// Size: 0xf8 (Inherited: 0xf0)
struct FMadShaderEffectManagerTickFunction : FTickFunction {
	char UnknownData_F0[0x8]; // 0xf0(0x08)
};

// ScriptStruct Madness.MadSideQuestInfo
// Size: 0x38 (Inherited: 0x00)
struct FMadSideQuestInfo {
	struct UBaseQuest* SideQuest; // 0x00(0x08)
	struct FName SetToObjectiveID; // 0x08(0x08)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool bDisableQuestSharing : 1; // 0x10(0x01)
	char UnknownData_11_0 : 7; // 0x11(0x01)
	bool bHandledByScript : 1; // 0x11(0x01)
	char UnknownData_12_0 : 7; // 0x12(0x01)
	bool bFadeOut : 1; // 0x12(0x01)
	char UnknownData_13_0 : 7; // 0x13(0x01)
	bool bFadeIn : 1; // 0x13(0x01)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FGameplayTagContainer SpawnPointsTags; // 0x18(0x20)
};

// ScriptStruct Madness.MadSkillWithCharges
// Size: 0x0c (Inherited: 0x00)
struct FMadSkillWithCharges {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bHasChargees : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t CurrentCharges; // 0x04(0x04)
	int32_t MaxCharges; // 0x08(0x04)
};

// ScriptStruct Madness.MadnessStackEffect
// Size: 0x40 (Inherited: 0x00)
struct FMadnessStackEffect {
	SoftClassProperty Effect; // 0x00(0x28)
	struct FText Description; // 0x28(0x18)
};

// ScriptStruct Madness.SpringArmHelperTrace
// Size: 0x60 (Inherited: 0x00)
struct FSpringArmHelperTrace {
	char UnknownData_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Madness.SpringArmHitInfo
// Size: 0xa0 (Inherited: 0x00)
struct FSpringArmHitInfo {
	char UnknownData_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Madness.BeamDetectionHelper
// Size: 0x38 (Inherited: 0x00)
struct FBeamDetectionHelper {
	struct UMadGameplayAbility* TargetingAbility; // 0x00(0x08)
	char UnknownData_8[0x30]; // 0x08(0x30)
};

// ScriptStruct Madness.ConeDetectionHelper
// Size: 0x30 (Inherited: 0x00)
struct FConeDetectionHelper {
	struct UMadGameplayAbility* TargetingAbility; // 0x00(0x08)
	char UnknownData_8[0x28]; // 0x08(0x28)
};

// ScriptStruct Madness.MadTargetHighlight
// Size: 0x14 (Inherited: 0x00)
struct FMadTargetHighlight {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bUseHighlight : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FLinearColor HighlightColor; // 0x04(0x10)
};

// ScriptStruct Madness.MadTargetMarker
// Size: 0x40 (Inherited: 0x00)
struct FMadTargetMarker {
	struct UStaticMesh* MarkerMesh; // 0x00(0x08)
	float MarkerScale; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UParticleSystem* MarkerParticle; // 0x10(0x08)
	float MarkerParticleScale; // 0x18(0x04)
	struct FLinearColor ShowColor; // 0x1c(0x10)
	struct FLinearColor HideColor; // 0x2c(0x10)
	char UnknownData_3C_0 : 7; // 0x3c(0x01)
	bool bShowToAll : 1; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Madness.MadTargetCollisionTest
// Size: 0x0c (Inherited: 0x00)
struct FMadTargetCollisionTest {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bDoCollisionTest : 1; // 0x00(0x01)
	enum class ECollisionChannel CollisionChannel; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bUseCeilingCorrection : 1; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	float CollisionCapsuleRadius; // 0x04(0x04)
	float CollisionCapsuleHalfHeight; // 0x08(0x04)
};

// ScriptStruct Madness.WeaponEquipParams
// Size: 0x10 (Inherited: 0x00)
struct FWeaponEquipParams {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bEquipped : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bUnequipped : 1; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bPrimary : 1; // 0x02(0x01)
	char UnknownData_3_0 : 7; // 0x03(0x01)
	bool bSecondary : 1; // 0x03(0x01)
	char UnknownData_4_0 : 7; // 0x04(0x01)
	bool bSideArm : 1; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct UWeaponType* WeaponType; // 0x08(0x08)
};

// ScriptStruct Madness.MadItemPreviewRotationParams
// Size: 0x30 (Inherited: 0x00)
struct FMadItemPreviewRotationParams {
	struct FRotator SmoothedRotationAcceleration; // 0x00(0x0c)
	struct FRotator SmoothedRotationDeceleration; // 0x0c(0x0c)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bSmoothRotation : 1; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
	struct FRotator LinearRotationSpeed; // 0x1c(0x0c)
	float PitchRotationTolerance; // 0x28(0x04)
	float YawRotationTolerance; // 0x2c(0x04)
};

// ScriptStruct Madness.MadItemPreviewParameters
// Size: 0x44 (Inherited: 0x00)
struct FMadItemPreviewParameters {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bUseRotationOverride : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bUseScaleOverride : 1; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bClampPitchRotation : 1; // 0x02(0x01)
	char UnknownData_3_0 : 7; // 0x03(0x01)
	bool bClampRollRotation : 1; // 0x03(0x01)
	char UnknownData_4_0 : 7; // 0x04(0x01)
	bool bClampYawRotation : 1; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	struct FRotator OverridePreviewRotation; // 0x08(0x0c)
	struct FVector OverridePreviewScale; // 0x14(0x0c)
	float MaxRotationChangePerFrame; // 0x20(0x04)
	struct FVector2D YawRotationRange; // 0x24(0x08)
	struct FVector2D PitchRotationRange; // 0x2c(0x08)
	float ZoomRange; // 0x34(0x04)
	struct FVector PreviewLocationOffset; // 0x38(0x0c)
};

// ScriptStruct Madness.RoomParameters
// Size: 0x58 (Inherited: 0x00)
struct FRoomParameters {
	enum class EMadRoomMode Mode; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	SoftClassProperty RoomClass; // 0x08(0x28)
	struct TArray<SoftClassProperty> AssetsToPreload; // 0x30(0x10)
	struct FVector Position; // 0x40(0x0c)
	float OffsetAboveKillZ; // 0x4c(0x04)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bCanChangeGender : 1; // 0x50(0x01)
	char UnknownData_51_0 : 7; // 0x51(0x01)
	bool bSetDefaultsOnSpawn : 1; // 0x51(0x01)
	char UnknownData_52[0x6]; // 0x52(0x06)
};

// ScriptStruct Madness.TickAutoAttackParams
// Size: 0x38 (Inherited: 0x00)
struct FTickAutoAttackParams {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bEnableAutoAttack : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bDoNotMoveWhileAttacking : 1; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float AttackCooldown; // 0x04(0x04)
	struct UAnimMontage* AttacksMontage; // 0x08(0x08)
	struct FScalableFloat DamageCurve; // 0x10(0x20)
	struct UMadDamageType* DamageType; // 0x30(0x08)
};

// ScriptStruct Madness.TickSinusoidalMovementParams
// Size: 0x10 (Inherited: 0x00)
struct FTickSinusoidalMovementParams {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bEnableSinusoidalMovement : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float MaxAngle; // 0x04(0x04)
	float AngleChangeSpeed; // 0x08(0x04)
	float ReduceEffectRange; // 0x0c(0x04)
};

// ScriptStruct Madness.MadToastDTO
// Size: 0x20 (Inherited: 0x00)
struct FMadToastDTO {
	struct FWeakObjectPtr<struct UScriptStruct> ToastClass; // 0x00(0x08)
	struct FString JsonString; // 0x08(0x10)
	char UnknownData_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Madness.MadToastBase
// Size: 0x28 (Inherited: 0x00)
struct FMadToastBase {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FString PlayerNetID; // 0x08(0x10)
	struct FDateTime Timestamp; // 0x18(0x08)
	struct FWeakObjectPtr<struct AMadPlayerCharacter> Instigator; // 0x20(0x08)
};

// ScriptStruct Madness.MadToastMod
// Size: 0xf8 (Inherited: 0x28)
struct FMadToastMod : FMadToastBase {
	struct FMadCraftingModUIData Mod; // 0x28(0xd0)
};

// ScriptStruct Madness.MadToastCrystal
// Size: 0x50 (Inherited: 0x28)
struct FMadToastCrystal : FMadToastBase {
	struct FMadAnomalyCrystal Crystal; // 0x28(0x28)
};

// ScriptStruct Madness.MadToastAmmo
// Size: 0x58 (Inherited: 0x28)
struct FMadToastAmmo : FMadToastBase {
	struct FMadAmmoInfo Ammo; // 0x28(0x30)
};

// ScriptStruct Madness.MadToastPlayerAFK
// Size: 0x30 (Inherited: 0x28)
struct FMadToastPlayerAFK : FMadToastBase {
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bIsAFK : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Madness.MadToastExplorerFlagCaptured
// Size: 0x40 (Inherited: 0x28)
struct FMadToastExplorerFlagCaptured : FMadToastBase {
	struct FText FlagName; // 0x28(0x18)
};

// ScriptStruct Madness.MadToastQuestSuggest
// Size: 0x40 (Inherited: 0x28)
struct FMadToastQuestSuggest : FMadToastBase {
	struct FText QuestName; // 0x28(0x18)
};

// ScriptStruct Madness.MadToastNewEmote
// Size: 0x58 (Inherited: 0x28)
struct FMadToastNewEmote : FMadToastBase {
	struct FText DisplayName; // 0x28(0x18)
	struct FSoftObjectPath IconPath; // 0x40(0x18)
};

// ScriptStruct Madness.MadToastConsumable
// Size: 0x80 (Inherited: 0x28)
struct FMadToastConsumable : FMadToastBase {
	struct FMadItemOfferConsumable Consumable; // 0x28(0x58)
};

// ScriptStruct Madness.MadToastReward
// Size: 0x100 (Inherited: 0x28)
struct FMadToastReward : FMadToastBase {
	struct FUniversalRewardSummary RewardSummary; // 0x28(0xd8)
};

// ScriptStruct Madness.UniversalRewardSummary
// Size: 0xd8 (Inherited: 0x00)
struct FUniversalRewardSummary {
	enum class EMadExperienceSource Source; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FText SourceName; // 0x08(0x18)
	float Experience; // 0x20(0x04)
	float ClassPoints; // 0x24(0x04)
	struct TArray<struct FMadItemUIDataMinimal> Items; // 0x28(0x10)
	struct TArray<struct FMadItemOfferConsumable> ItemOfferConsumables; // 0x38(0x10)
	struct TArray<struct FText> Emotes; // 0x48(0x10)
	struct FMadConvoyUnlockableCustomizationsSaveModel ConvoyCustomizations; // 0x58(0x80)
};

// ScriptStruct Madness.MadItemUIDataMinimal
// Size: 0x38 (Inherited: 0x00)
struct FMadItemUIDataMinimal {
	struct FText DisplayName; // 0x00(0x18)
	enum class EMadItemType Type; // 0x18(0x01)
	enum class EMadItemRarity Rarity; // 0x19(0x01)
	char UnknownData_1A[0x6]; // 0x1a(0x06)
	struct FString IconPath; // 0x20(0x10)
	int32_t Rating; // 0x30(0x04)
	int32_t FirepowerOrArmor; // 0x34(0x04)
};

// ScriptStruct Madness.MadToastDBNO
// Size: 0x48 (Inherited: 0x28)
struct FMadToastDBNO : FMadToastBase {
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bInDBNO : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FString ReviverOrKiller; // 0x30(0x10)
	struct FWeakObjectPtr<struct ABaseCharacter> KillerCharacter; // 0x40(0x08)
};

// ScriptStruct Madness.MadToastLevelUp
// Size: 0x30 (Inherited: 0x28)
struct FMadToastLevelUp : FMadToastBase {
	int32_t Level; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Madness.MadToastEmote
// Size: 0x70 (Inherited: 0x28)
struct FMadToastEmote : FMadToastBase {
	struct FText DisplayName; // 0x28(0x18)
	struct FSoftObjectPath IconPath; // 0x40(0x18)
	struct FText TextFeed; // 0x58(0x18)
};

// ScriptStruct Madness.MadToastShard
// Size: 0x58 (Inherited: 0x28)
struct FMadToastShard : FMadToastBase {
	struct FName NameID; // 0x28(0x08)
	enum class EMadSkillType SkillType; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct FString DisplayName; // 0x38(0x10)
	struct FString IconPath; // 0x48(0x10)
};

// ScriptStruct Madness.MadToastResource
// Size: 0x88 (Inherited: 0x28)
struct FMadToastResource : FMadToastBase {
	struct FMadResourceUIData Resource; // 0x28(0x60)
};

// ScriptStruct Madness.MadToastLoot
// Size: 0x70 (Inherited: 0x28)
struct FMadToastLoot : FMadToastBase {
	struct FMadLoot Loot; // 0x28(0x48)
};

// ScriptStruct Madness.MadToastItem
// Size: 0x80 (Inherited: 0x28)
struct FMadToastItem : FMadToastBase {
	struct FMadItemWrapper Item; // 0x28(0x58)
};

// ScriptStruct Madness.MadItemWrapper
// Size: 0x58 (Inherited: 0x00)
struct FMadItemWrapper {
	struct FName Name; // 0x00(0x08)
	struct FString DisplayName; // 0x08(0x10)
	struct FString LootActionDescription; // 0x18(0x10)
	enum class EMadItemType Type; // 0x28(0x01)
	enum class EMadItemRarity Rarity; // 0x29(0x01)
	char UnknownData_2A[0x6]; // 0x2a(0x06)
	struct UMadSkillData* SkillData; // 0x30(0x08)
	struct FString IconPath; // 0x38(0x10)
	int32_t Rating; // 0x48(0x04)
	int32_t FirepowerOrArmor; // 0x4c(0x04)
	enum class EMadLootActionDescription LootActionDescriptionType; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Madness.MadToastQuest
// Size: 0x38 (Inherited: 0x28)
struct FMadToastQuest : FMadToastBase {
	struct FWeakObjectPtr<struct UQuestEventHandler> QuestOrObjective; // 0x28(0x08)
	enum class EObjectiveStatus NewStatus; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Madness.MadToastMultikill
// Size: 0x30 (Inherited: 0x28)
struct FMadToastMultikill : FMadToastBase {
	int32_t Combo; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Madness.MadToastKill
// Size: 0x50 (Inherited: 0x28)
struct FMadToastKill : FMadToastBase {
	struct FWeakObjectPtr<struct AMadBaseCharacter> Victim; // 0x28(0x08)
	struct FText VictimName; // 0x30(0x18)
	struct UDamageType* DamageType; // 0x48(0x08)
};

// ScriptStruct Madness.MadToastLegendaryItem
// Size: 0x90 (Inherited: 0x28)
struct FMadToastLegendaryItem : FMadToastBase {
	struct FMadItemWrapper Item; // 0x28(0x58)
	struct FString OwnerNetId; // 0x80(0x10)
};

// ScriptStruct Madness.MadToastVote
// Size: 0x30 (Inherited: 0x28)
struct FMadToastVote : FMadToastBase {
	enum class EMadVoteReason Reason; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Madness.TresholdBasedParticle
// Size: 0x70 (Inherited: 0x00)
struct FTresholdBasedParticle {
	struct TSoftObjectPtr<struct UParticleSystem> DamageParticle; // 0x00(0x28)
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FTransform Transform; // 0x30(0x30)
	float ThresholdDamageParticle; // 0x60(0x04)
	char UnknownData_64[0xc]; // 0x64(0x0c)
};

// ScriptStruct Madness.TripWireData
// Size: 0x1c (Inherited: 0x00)
struct FTripWireData {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bIsEnabled : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FVector_NetQuantize StartPoint; // 0x04(0x0c)
	struct FVector_NetQuantize EndPoint; // 0x10(0x0c)
};

// ScriptStruct Madness.FactQuery
// Size: 0x28 (Inherited: 0x00)
struct FFactQuery {
	struct FFactNameFromList FactName; // 0x00(0x08)
	struct FFactQueryResult Result; // 0x08(0x20)
};

// ScriptStruct Madness.MadWorldLevelSelectionTutorialInfo
// Size: 0x14 (Inherited: 0x00)
struct FMadWorldLevelSelectionTutorialInfo {
	struct FFactNameFromList FactName; // 0x00(0x08)
	struct FName regionname; // 0x08(0x08)
	int32_t WorldLevelUnlocked; // 0x10(0x04)
};

// ScriptStruct Madness.MadStatusBarData
// Size: 0x28 (Inherited: 0x00)
struct FMadStatusBarData {
	struct UTexture2D* ClassMarkIcon; // 0x00(0x08)
	struct TArray<struct UTexture2D*> CoreStatusIcons; // 0x08(0x10)
	struct TArray<struct UTexture2D*> SkillEffectIcons; // 0x18(0x10)
};

// ScriptStruct Madness.GenericLocalizationText
// Size: 0x30 (Inherited: 0x08)
struct FGenericLocalizationText : FTableRowBase {
	struct FText Text; // 0x08(0x18)
	struct FString Context; // 0x20(0x10)
};

// ScriptStruct Madness.MadCreditsItem
// Size: 0x78 (Inherited: 0x08)
struct FMadCreditsItem : FTableRowBase {
	struct FName SectionKey; // 0x08(0x08)
	struct FString Title; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FString Position; // 0x30(0x10)
	struct FString Type; // 0x40(0x10)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x50(0x28)
};

// ScriptStruct Madness.MadFactData
// Size: 0x28 (Inherited: 0x00)
struct FMadFactData {
	struct FName FactName; // 0x00(0x08)
	enum class EFactValueType FactType; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool BoolValue : 1; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	int32_t IntValue; // 0x0c(0x04)
	float FloatValue; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString StringValue; // 0x18(0x10)
};

// ScriptStruct Madness.MadLowerDifficultyLogicData
// Size: 0x38 (Inherited: 0x00)
struct FMadLowerDifficultyLogicData {
	int32_t DeathCountShowTutorial; // 0x00(0x04)
	int32_t DeathCountFBShowPrompt; // 0x04(0x04)
	int32_t DeathCountFBShowSubsequentPrompt; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	SoftClassProperty ForestBossArchetype; // 0x10(0x28)
};

// ScriptStruct Madness.MadLowerDifficultyPromptData
// Size: 0x60 (Inherited: 0x00)
struct FMadLowerDifficultyPromptData {
	struct FText PromptName; // 0x00(0x18)
	struct FText PromptMessage; // 0x18(0x18)
	struct FText PrimaryKeyLabel; // 0x30(0x18)
	struct FText SecondaryKeyLabel; // 0x48(0x18)
};

// ScriptStruct Madness.ServerMessageInfo
// Size: 0x60 (Inherited: 0x00)
struct FServerMessageInfo {
	struct FString Message; // 0x00(0x10)
	struct FString Code; // 0x10(0x10)
	struct FString Key; // 0x20(0x10)
	struct FString URL; // 0x30(0x10)
	struct FString Icon; // 0x40(0x10)
	int32_t Importance; // 0x50(0x04)
	char UnknownData_54_0 : 7; // 0x54(0x01)
	bool bBackToGame : 1; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	struct FDateTime Timer; // 0x58(0x08)
};

// ScriptStruct Madness.MadEnrageLevelData
// Size: 0x20 (Inherited: 0x08)
struct FMadEnrageLevelData : FTableRowBase {
	struct FGameplayTag Tag; // 0x08(0x08)
	float Value; // 0x10(0x04)
	float MidWorldLevelValue; // 0x14(0x04)
	float HighWorldLevelValue; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Madness.MadChallengeAbsoluteData
// Size: 0x1f0 (Inherited: 0x00)
struct FMadChallengeAbsoluteData {
	struct FMadChallengeData DataFromDataTable; // 0x00(0x1e8)
	struct FWeakObjectPtr<struct UMadChallengeDataAsset> DataFromDataAsset; // 0x1e8(0x08)
};

// ScriptStruct Madness.MadChallengeData
// Size: 0x1e8 (Inherited: 0x08)
struct FMadChallengeData : FTableRowBase {
	int32_t ChallengeID; // 0x08(0x04)
	int32_t RequiredTier; // 0x0c(0x04)
	int32_t EssenceCost; // 0x10(0x04)
	enum class EMadChallengeType Type; // 0x14(0x01)
	char UnknownData_15[0x3]; // 0x15(0x03)
	int32_t BronzeTimeIsSeconds; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32_t> TierBronzeTimeIsSeconds; // 0x20(0x10)
	int32_t SilverTimeIsSeconds; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct TArray<int32_t> TierSilverTimeIsSeconds; // 0x38(0x10)
	int32_t GoldTimeIsSeconds; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct TArray<int32_t> TierGoldTimeIsSeconds; // 0x50(0x10)
	int32_t EnemyLevel; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
	struct FUniversalReward Reward; // 0x68(0x150)
	struct TArray<struct FMadChallengeTierProgression> TierProgression; // 0x1b8(0x10)
	struct TArray<struct TSoftObjectPtr<struct UMadChallengeModDataAsset>> Mods; // 0x1c8(0x10)
	char UnknownData_1D8_0 : 7; // 0x1d8(0x01)
	bool bCanBeJoinedInProgress : 1; // 0x1d8(0x01)
	char UnknownData_1D9[0x3]; // 0x1d9(0x03)
	float LootDropChanceMultiplier; // 0x1dc(0x04)
	int32_t MaxGuaranteedEnemyLootDrops; // 0x1e0(0x04)
	char UnknownData_1E4_0 : 7; // 0x1e4(0x01)
	bool bDisableFromMapPool : 1; // 0x1e4(0x01)
	char UnknownData_1E5[0x3]; // 0x1e5(0x03)
};

// ScriptStruct Madness.MadChallengeTierProgression
// Size: 0x50 (Inherited: 0x00)
struct FMadChallengeTierProgression {
	struct TMap<enum class EMadChallengeTimeBracket, int32_t> TierRewardPerTimeBracket; // 0x00(0x50)
};

// ScriptStruct Madness.MadChallengeRewardRarity
// Size: 0x60 (Inherited: 0x08)
struct FMadChallengeRewardRarity : FTableRowBase {
	enum class EMadChallengeTimeBracket TimeBracket; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct TMap<enum class EMadChallengeRewardID, struct FMadChallengeTiersRarity> RewardTiersRarityMap; // 0x10(0x50)
};

// ScriptStruct Madness.MadChallengeTiersRarity
// Size: 0x10 (Inherited: 0x00)
struct FMadChallengeTiersRarity {
	struct TArray<enum class EMadItemRarity> RarityPerTier; // 0x00(0x10)
};

// ScriptStruct Madness.MadChallengeResourceReward
// Size: 0x20 (Inherited: 0x08)
struct FMadChallengeResourceReward : FTableRowBase {
	int32_t Tier; // 0x08(0x04)
	int32_t Gold; // 0x0c(0x04)
	int32_t Silver; // 0x10(0x04)
	int32_t Bronze; // 0x14(0x04)
	int32_t NoMedal; // 0x18(0x04)
	int32_t Failed; // 0x1c(0x04)
};

// ScriptStruct Madness.MadChallengePickChance
// Size: 0x10 (Inherited: 0x08)
struct FMadChallengePickChance : FTableRowBase {
	int32_t ChallengeID; // 0x08(0x04)
	float Chance; // 0x0c(0x04)
};

// ScriptStruct Madness.MadChallengeVOSettings
// Size: 0x10 (Inherited: 0x00)
struct FMadChallengeVOSettings {
	struct FName Tag; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bAntfarm : 1; // 0x08(0x01)
	enum class EVOPriority Priority; // 0x09(0x01)
	enum class EVOListType Type; // 0x0a(0x01)
	char UnknownData_B[0x1]; // 0x0b(0x01)
	float Delay; // 0x0c(0x04)
};

// ScriptStruct Madness.VOSubtitle
// Size: 0x18 (Inherited: 0x08)
struct FVOSubtitle : FTableRowBase {
	struct FString Subtitle; // 0x08(0x10)
};

// ScriptStruct Madness.DestroyObjectData
// Size: 0x10 (Inherited: 0x08)
struct FDestroyObjectData : FTableRowBase {
	float Value; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Madness.MadStoryRecapData
// Size: 0x70 (Inherited: 0x08)
struct FMadStoryRecapData : FTableRowBase {
	struct FText Description; // 0x08(0x18)
	struct TSet<struct FGameplayTag> Regions; // 0x20(0x50)
};

// ScriptStruct Madness.EnochAccoladeBackendData
// Size: 0x20 (Inherited: 0x08)
struct FEnochAccoladeBackendData : FTableRowBase {
	struct FString AccoladeName; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bActive : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Madness.EnochAccoladesLevelData
// Size: 0x20 (Inherited: 0x08)
struct FEnochAccoladesLevelData : FTableRowBase {
	struct TArray<struct FName> Rewards; // 0x08(0x10)
	int32_t AppRequired; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Madness.AccoladeCategory
// Size: 0x50 (Inherited: 0x08)
struct FAccoladeCategory : FTableRowBase {
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x08(0x28)
	struct FText Title; // 0x30(0x18)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bHidden : 1; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Madness.QuestUniversalReward
// Size: 0x2a8 (Inherited: 0x08)
struct FQuestUniversalReward : FTableRowBase {
	struct FUniversalReward FirstTimeReward; // 0x08(0x150)
	struct FUniversalReward RepeatableReward; // 0x158(0x150)
};

// ScriptStruct Madness.OneTimeRewardSpawnedItem
// Size: 0x18 (Inherited: 0x00)
struct FOneTimeRewardSpawnedItem {
	struct FString Name; // 0x00(0x10)
	struct AMadItem* Item; // 0x10(0x08)
};

// ScriptStruct Madness.OneTimeReward
// Size: 0x18 (Inherited: 0x08)
struct FOneTimeReward : FTableRowBase {
	struct FNameWrapper UniqueOneTimeRewardID; // 0x08(0x10)
};

// ScriptStruct Madness.MadPlayerClassDefinitionData
// Size: 0x1e0 (Inherited: 0x08)
struct FMadPlayerClassDefinitionData : FTableRowBase {
	struct FText ClassName; // 0x08(0x18)
	enum class EMadnessSkillPath ClassID; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct FText ClassKeywords; // 0x28(0x18)
	struct TArray<struct FText> PathNames; // 0x40(0x10)
	struct FText ClassDescription; // 0x50(0x18)
	struct FText ClassHealingDescription; // 0x68(0x18)
	struct TSoftObjectPtr<struct UTexture2D> ClassIcon; // 0x80(0x28)
	struct TSoftObjectPtr<struct UTexture2D> ClassPicture; // 0xa8(0x28)
	struct TSoftObjectPtr<struct UTexture2D> ClassBackgroundTexture; // 0xd0(0x28)
	struct TSoftObjectPtr<struct UTexture2D> ClassPortraitSelectedTexture; // 0xf8(0x28)
	struct TSoftObjectPtr<struct UTexture2D> ClassPortraitDeselectedTexture; // 0x120(0x28)
	struct TSoftObjectPtr<struct UTexture2D> ClassTreeBackgroundTexture; // 0x148(0x28)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UTexture2D>> ClassTreeEndNodeBackgroundTextures; // 0x170(0x50)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> DescriptionIcons; // 0x1c0(0x10)
	struct TArray<struct FMadnessPathTypesAtrribiutesData> Attributes; // 0x1d0(0x10)
};

// ScriptStruct Madness.MadnessPathTypesAtrribiutesData
// Size: 0x30 (Inherited: 0x00)
struct FMadnessPathTypesAtrribiutesData {
	struct FText AttributeName; // 0x00(0x18)
	struct FText AttributeDescription; // 0x18(0x18)
};

// ScriptStruct Madness.StringDataTableKey
// Size: 0x18 (Inherited: 0x08)
struct FStringDataTableKey : FTableRowBase {
	struct FString string; // 0x08(0x10)
};

// ScriptStruct Madness.WSSSetup
// Size: 0x58 (Inherited: 0x08)
struct FWSSSetup : FTableRowBase {
	struct FString EnemyId; // 0x08(0x10)
	struct FString MapName; // 0x18(0x10)
	struct FString WSSName; // 0x28(0x10)
	struct FString WaveName; // 0x38(0x10)
	int32_t OnePlayerEnemyCount; // 0x48(0x04)
	int32_t TwoPlayersEnemyCount; // 0x4c(0x04)
	int32_t ThreePlayersEnemyCount; // 0x50(0x04)
	char UnknownData_54_0 : 7; // 0x54(0x01)
	bool bOverride : 1; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
};

// ScriptStruct Madness.DifficultyForRegion
// Size: 0x20 (Inherited: 0x08)
struct FDifficultyForRegion : FTableRowBase {
	struct FGameplayTag Region; // 0x08(0x08)
	int32_t DefaultDifficulty; // 0x10(0x04)
	int32_t AllowedLootChestCount; // 0x14(0x04)
	int32_t AllowedMiningResourceCount; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Madness.EventData
// Size: 0x20 (Inherited: 0x08)
struct FEventData : FTableRowBase {
	struct FString EventName; // 0x08(0x10)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bValue : 1; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Madness.PlayerControlOverrides
// Size: 0x18 (Inherited: 0x00)
struct FPlayerControlOverrides {
	struct TArray<struct FInputActionKeyMapping> ActionMappings; // 0x00(0x10)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool bSingleButtonForSkill3 : 1; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Madness.MadActionMapping
// Size: 0x40 (Inherited: 0x00)
struct FMadActionMapping {
	struct FName ActionName; // 0x00(0x08)
	struct FKey PrimaryActionMapping; // 0x08(0x18)
	struct FKey SecondaryActionMapping; // 0x20(0x18)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool bIsMouseAxisMapping : 1; // 0x38(0x01)
	char UnknownData_39_0 : 7; // 0x39(0x01)
	bool bIsGamepadMapping : 1; // 0x39(0x01)
	char UnknownData_3A_0 : 7; // 0x3a(0x01)
	bool bIsActionMapping : 1; // 0x3a(0x01)
	char UnknownData_3B_0 : 7; // 0x3b(0x01)
	bool bIsAxisMapping : 1; // 0x3b(0x01)
	float AxisScale; // 0x3c(0x04)
};

// ScriptStruct Madness.MadShaderSequence
// Size: 0x38 (Inherited: 0x00)
struct FMadShaderSequence {
	struct TArray<struct FMadSequenceSegment> Segments; // 0x00(0x10)
	int32_t CurrentSegment; // 0x10(0x04)
	char UnknownData_14[0x1c]; // 0x14(0x1c)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bSequenceActive : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Madness.MadSequenceSegment
// Size: 0x68 (Inherited: 0x00)
struct FMadSequenceSegment {
	struct FMadShaderManipulator Manipulator; // 0x00(0x60)
	float PauseTime; // 0x60(0x04)
	char UnknownData_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Madness.MadShaderManipulator
// Size: 0x60 (Inherited: 0x00)
struct FMadShaderManipulator {
	struct FName ShaderParam; // 0x00(0x08)
	float BlendDuration; // 0x08(0x04)
	char UnknownData_C_0 : 7; // 0x0c(0x01)
	bool bUseCurrentValueAsStartValue : 1; // 0x0c(0x01)
	char UnknownData_D_0 : 7; // 0x0d(0x01)
	bool bUseBlendCurve : 1; // 0x0d(0x01)
	struct FWeaponSelector WeaponSelector; // 0x0e(0x02)
	enum class EDecalParameterBlendType BlendType; // 0x10(0x01)
	char UnknownData_11_0 : 7; // 0x11(0x01)
	bool bUseVectorValue : 1; // 0x11(0x01)
	char UnknownData_12[0x6]; // 0x12(0x06)
	float StartValue; // 0x18(0x04)
	float EndValue; // 0x1c(0x04)
	struct UCurveFloat* BlendCurve; // 0x20(0x08)
	struct FLinearColor VectorStartValue; // 0x28(0x10)
	struct FLinearColor VectorEndValue; // 0x38(0x10)
	struct UCurveLinearColor* VectorBlendCurve; // 0x48(0x08)
	char UnknownData_50[0x10]; // 0x50(0x10)
};

// ScriptStruct Madness.MadDebugWidget
// Size: 0x40 (Inherited: 0x00)
struct FMadDebugWidget {
	struct FName DebugWidgetName; // 0x00(0x08)
	SoftClassProperty DebugWidgetClass; // 0x08(0x28)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bCloseAllWindows : 1; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	int32_t ZOrder; // 0x34(0x04)
	int32_t AdditionalData; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Madness.MadGenericData
// Size: 0x18 (Inherited: 0x08)
struct FMadGenericData : FTableRowBase {
	struct FString Comment; // 0x08(0x10)
};

// ScriptStruct Madness.MadGamepadInputHelper
// Size: 0x0c (Inherited: 0x00)
struct FMadGamepadInputHelper {
	int32_t SkillNumber; // 0x00(0x04)
	char UnknownData_4_0 : 7; // 0x04(0x01)
	bool bPressed : 1; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	float PressedTime; // 0x08(0x04)
};

// ScriptStruct Madness.MadDelimiterPair
// Size: 0x28 (Inherited: 0x00)
struct FMadDelimiterPair {
	char UnknownData_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Madness.CameraFromMontage
// Size: 0x28 (Inherited: 0x00)
struct FCameraFromMontage {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bUseCameraFromMontage : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bPlayCameraRelativeToPlayerRotation : 1; // 0x01(0x01)
	enum class EMadCameraFromMontageLocation Location; // 0x02(0x01)
	enum class EMadCameraFromMontageRotation Rotation; // 0x03(0x01)
	char UnknownData_4_0 : 7; // 0x04(0x01)
	bool bBlendCameraAfterAnimationBlend : 1; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
	float BlendIn; // 0x08(0x04)
	float BlendOut; // 0x0c(0x04)
	float DURATION; // 0x10(0x04)
	char UnknownData_14_0 : 7; // 0x14(0x01)
	bool bSetCameraFovFromCurve : 1; // 0x14(0x01)
	char UnknownData_15_0 : 7; // 0x15(0x01)
	bool bAllowCameraMovement : 1; // 0x15(0x01)
	char UnknownData_16[0x2]; // 0x16(0x02)
	float PitchLimit; // 0x18(0x04)
	float YawLimit; // 0x1c(0x04)
	float AlignSpeed; // 0x20(0x04)
	char UnknownData_24_0 : 7; // 0x24(0x01)
	bool bDoCollisionTest : 1; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Madness.MadEaseAnimation
// Size: 0x18 (Inherited: 0x00)
struct FMadEaseAnimation {
	struct UCurveFloat* EasingCurve; // 0x00(0x08)
	float DURATION; // 0x08(0x04)
	char UnknownData_C_0 : 7; // 0x0c(0x01)
	bool bReverse : 1; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	float CurrentTime; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Madness.FaceAnimation
// Size: 0x58 (Inherited: 0x08)
struct FFaceAnimation : FTableRowBase {
	struct TSoftObjectPtr<struct USkeletalMesh> Face; // 0x08(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> FaceAnimation; // 0x30(0x28)
};

// ScriptStruct Madness.CoverTraceContext
// Size: 0x0c (Inherited: 0x00)
struct FCoverTraceContext {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bBehindCover : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bForTraversalPurpose : 1; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bSideCorrection : 1; // 0x02(0x01)
	char UnknownData_3[0x1]; // 0x03(0x01)
	float DistanceFromOrigin; // 0x04(0x04)
	float ApproachAngle; // 0x08(0x04)
};

// ScriptStruct Madness.CoverEnterData
// Size: 0x180 (Inherited: 0x00)
struct FCoverEnterData {
	struct FCoverEnterDataByDistance ByDirection[0x2]; // 0x00(0x180)
};

// ScriptStruct Madness.CoverEnterDataByDistance
// Size: 0xc0 (Inherited: 0x00)
struct FCoverEnterDataByDistance {
	struct FCoverEnterDataByHeight ByDistance[0x3]; // 0x00(0xc0)
};

// ScriptStruct Madness.CoverEnterDataByHeight
// Size: 0x40 (Inherited: 0x00)
struct FCoverEnterDataByHeight {
	struct FCoverEnterDataBySection ByHeight[0x2]; // 0x00(0x40)
};

// ScriptStruct Madness.CoverEnterDataBySection
// Size: 0x20 (Inherited: 0x00)
struct FCoverEnterDataBySection {
	struct TArray<float> DistanceBySection; // 0x00(0x10)
	struct TArray<float> WeightBySection; // 0x10(0x10)
};

// ScriptStruct Madness.CoverLeaveContext
// Size: 0x04 (Inherited: 0x00)
struct FCoverLeaveContext {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bPressedLeaveButton : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bPressedHopButton : 1; // 0x01(0x01)
	enum class EInputType InputType; // 0x02(0x01)
	enum class ECoverToCoverMoveType CoverToCoverMoveType; // 0x03(0x01)
};

// ScriptStruct Madness.MadConvoyHealingItemAttributeValues
// Size: 0x18 (Inherited: 0x00)
struct FMadConvoyHealingItemAttributeValues {
	struct FName AttributeName; // 0x00(0x08)
	struct TArray<float> AttributeValues; // 0x08(0x10)
};

// ScriptStruct Madness.MadModConditionalMultiplierData
// Size: 0x40 (Inherited: 0x00)
struct FMadModConditionalMultiplierData {
	struct FGameplayTag RequiredTag; // 0x00(0x08)
	struct FGameplayAttribute AttributeMultiplier; // 0x08(0x38)
};

// ScriptStruct Madness.MadPickableItemData
// Size: 0x50 (Inherited: 0x00)
struct FMadPickableItemData {
	struct AMadItem* Item; // 0x00(0x08)
	enum class EMadPickableItemSource SourceType; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FTransform SourceTransform; // 0x10(0x30)
	struct ANavigationData* NavData; // 0x40(0x08)
	float DropAngle; // 0x48(0x04)
	float SpawnDelay; // 0x4c(0x04)
};

// ScriptStruct Madness.MadRarityData
// Size: 0x20 (Inherited: 0x08)
struct FMadRarityData : FTableRowBase {
	struct FLinearColor Color; // 0x08(0x10)
	int32_t LootItemQuantityBonus; // 0x18(0x04)
	float WeaponDamageSpikeChance; // 0x1c(0x04)
};

// ScriptStruct Madness.MadDLCWrapperData
// Size: 0x78 (Inherited: 0x08)
struct FMadDLCWrapperData : FTableRowBase {
	struct FText FriendlyName; // 0x08(0x18)
	struct FString AppID_Steam; // 0x20(0x10)
	struct FString AppID_XboxOne; // 0x30(0x10)
	struct FString AppID_PS4; // 0x40(0x10)
	struct FString AppID_XboxSeriesX; // 0x50(0x10)
	struct FString AppID_PS5; // 0x60(0x10)
	char UnknownData_70_0 : 7; // 0x70(0x01)
	bool bIsPreorderDLC : 1; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Madness.MadHardRefReactionAnimData
// Size: 0x20 (Inherited: 0x00)
struct FMadHardRefReactionAnimData {
	struct UAnimMontage* MontageFront; // 0x00(0x08)
	struct UAnimMontage* MontageLeft; // 0x08(0x08)
	struct UAnimMontage* MontageRight; // 0x10(0x08)
	struct UAnimMontage* MontageBack; // 0x18(0x08)
};

// ScriptStruct Madness.MadReactionData
// Size: 0xb8 (Inherited: 0x00)
struct FMadReactionData {
	struct FMadReactionAnimData ReactionAnimData; // 0x00(0xb0)
	struct UDamageType* ReactionDamageType; // 0xb0(0x08)
};

// ScriptStruct Madness.DamageInfo
// Size: 0x28 (Inherited: 0x00)
struct FDamageInfo {
	struct AActor* DamagedActor; // 0x00(0x08)
	float Damage; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UDamageType* DamageType; // 0x10(0x08)
	struct AController* InstigatedBy; // 0x18(0x08)
	struct AActor* DamageCauser; // 0x20(0x08)
};

// ScriptStruct Madness.MadAsyncSkillDataHandle
// Size: 0x10 (Inherited: 0x00)
struct FMadAsyncSkillDataHandle {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Madness.MadKeywordTriggerData
// Size: 0x0c (Inherited: 0x00)
struct FMadKeywordTriggerData {
	struct FGameplayTag KeywordTag; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bAlreadyTriggered : 1; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Madness.CustomVoteNameWrapper
// Size: 0x10 (Inherited: 0x10)
struct FCustomVoteNameWrapper : FNameWrapper {
};

// ScriptStruct Madness.MadPlayerNameLocalizedData
// Size: 0x20 (Inherited: 0x08)
struct FMadPlayerNameLocalizedData : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct Madness.MadAICharacterLocalizedData
// Size: 0x20 (Inherited: 0x08)
struct FMadAICharacterLocalizedData : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
};

// ScriptStruct Madness.MadCategoriesScreenUIData
// Size: 0x40 (Inherited: 0x00)
struct FMadCategoriesScreenUIData {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct TArray<struct FMadCategoryScreenItemUIData> Categories; // 0x30(0x10)
};

// ScriptStruct Madness.MadCategoryScreenItemUIData
// Size: 0x70 (Inherited: 0x00)
struct FMadCategoryScreenItemUIData {
	struct FName Key; // 0x00(0x08)
	struct FText Title; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x38(0x28)
	struct FString ImagePath; // 0x60(0x10)
};

// ScriptStruct Madness.MadOptionsGlobals
// Size: 0x20 (Inherited: 0x00)
struct FMadOptionsGlobals {
	struct UDataTable* CategoriesDT; // 0x00(0x08)
	struct UDataTable* OptionsDT; // 0x08(0x08)
	struct FNameWrapper KeyBindingsCategoryID; // 0x10(0x10)
};

// ScriptStruct Madness.MadDifficultyDescritpion
// Size: 0x80 (Inherited: 0x08)
struct FMadDifficultyDescritpion : FTableRowBase {
	struct FText DifficultyName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TArray<struct FText> Changes; // 0x38(0x10)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x48(0x28)
	float DropItemBonus; // 0x70(0x04)
	float ChanceForHighRarityItems; // 0x74(0x04)
	float LegendaryItemDropRate; // 0x78(0x04)
	float WearableItemCap; // 0x7c(0x04)
};

// ScriptStruct Madness.MadLoadingScreenHintsData
// Size: 0xa0 (Inherited: 0x00)
struct FMadLoadingScreenHintsData {
	struct TMap<struct FName, struct FMadLoadingScreenHint> LoadingScreenHints; // 0x00(0x50)
	char UnknownData_50[0x50]; // 0x50(0x50)
};

// ScriptStruct Madness.MadLoadingScreenHint
// Size: 0x88 (Inherited: 0x08)
struct FMadLoadingScreenHint : FTableRowBase {
	struct FText HintTitle; // 0x08(0x18)
	struct FText HintText; // 0x20(0x18)
	float DisplayTime; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FFactExpression AllowingFactExpression; // 0x40(0x18)
	struct FFactExpression BlockingFactExpression; // 0x58(0x18)
	struct TArray<struct FGameplayTag> ValidRegions; // 0x70(0x10)
	enum class EMadLoadingScreenHintType HintType; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
};

// ScriptStruct Madness.BasicLoadingRegionData
// Size: 0x40 (Inherited: 0x00)
struct FBasicLoadingRegionData {
	struct TSoftObjectPtr<struct UTexture2D> LoadingImage; // 0x00(0x28)
	struct FText RegionDescription; // 0x28(0x18)
};

// ScriptStruct Madness.BarrierAssetsData
// Size: 0x58 (Inherited: 0x00)
struct FBarrierAssetsData {
	struct TSoftObjectPtr<struct UTexture2D> Large; // 0x00(0x28)
	struct TSoftObjectPtr<struct UTexture2D> Small; // 0x28(0x28)
	struct UMinimapNodeStyle* NodeStyleTemplate; // 0x50(0x08)
};

// ScriptStruct Madness.MadUIGlobalsCrosshairs
// Size: 0x58 (Inherited: 0x00)
struct FMadUIGlobalsCrosshairs {
	struct TMap<SoftClassProperty, struct FWeaponCrosshairData> Crosshairs; // 0x00(0x50)
	float OutOfAmmoSpreadMult; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Madness.MadUIGlobalsIcons
// Size: 0xa0 (Inherited: 0x00)
struct FMadUIGlobalsIcons {
	struct TMap<enum class EMadItemRarity, struct TSoftObjectPtr<struct UTexture2D>> LootIcons; // 0x00(0x50)
	struct TMap<enum class EChoiceType, struct TSoftObjectPtr<struct UTexture2D>> DialogueChoiceIcons; // 0x50(0x50)
};

// ScriptStruct Madness.MadUIGlobalsMessages
// Size: 0x18 (Inherited: 0x00)
struct FMadUIGlobalsMessages {
	struct FText GeneralShardGained; // 0x00(0x18)
};

// ScriptStruct Madness.MadUIGlobalsHitFeedback
// Size: 0x10 (Inherited: 0x00)
struct FMadUIGlobalsHitFeedback {
	struct UForceFeedbackEffect* EnemyHitFeedback; // 0x00(0x08)
	struct UForceFeedbackEffect* EnemyKilledFeedback; // 0x08(0x08)
};

// ScriptStruct Madness.MadUIGlobalsGroupingPeriods
// Size: 0x08 (Inherited: 0x00)
struct FMadUIGlobalsGroupingPeriods {
	float Experience; // 0x00(0x04)
	float Damage; // 0x04(0x04)
};

// ScriptStruct Madness.MadTutorialsTextData
// Size: 0x70 (Inherited: 0x08)
struct FMadTutorialsTextData : FTableRowBase {
	struct FText Title; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TArray<struct FText> Pages; // 0x38(0x10)
	struct FText Category; // 0x48(0x18)
	struct FString Notes; // 0x60(0x10)
};

// ScriptStruct Madness.MadUISoundData
// Size: 0x30 (Inherited: 0x08)
struct FMadUISoundData : FTableRowBase {
	struct TSoftObjectPtr<struct USoundCue> UISound; // 0x08(0x28)
};

// ScriptStruct Madness.MadCustomizationUIData
// Size: 0x88 (Inherited: 0x08)
struct FMadCustomizationUIData : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x38(0x28)
	struct FText UnlockRequirements; // 0x60(0x18)
	struct FString IconPath; // 0x78(0x10)
};

// ScriptStruct Madness.MadHeroScreenTabStateData
// Size: 0x40 (Inherited: 0x00)
struct FMadHeroScreenTabStateData {
	struct FText DisplayName; // 0x00(0x18)
	struct FName NameID; // 0x18(0x08)
	struct FFactNameFromList HeroTabFact; // 0x20(0x08)
	struct FFactExpression EnableFactExpression; // 0x28(0x18)
};

// ScriptStruct Madness.ModalErrorMsg
// Size: 0xc0 (Inherited: 0x00)
struct FModalErrorMsg {
	int32_t ErrorCode; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FText ErrorName; // 0x08(0x18)
	struct FText ErrorMessage; // 0x20(0x18)
	struct FModalErrorMsgButton PrimaryKey; // 0x38(0x28)
	struct FModalErrorMsgButton SecondaryKey; // 0x60(0x28)
	struct FModalErrorMsgButton TertiaryKey; // 0x88(0x28)
	struct FName PromptID; // 0xb0(0x08)
	enum class EModalErrorMsgType ErrorType; // 0xb8(0x01)
	enum class EModalErrorMsgPersistence ErrorPersistence; // 0xb9(0x01)
	char UnknownData_BA[0x6]; // 0xba(0x06)
};

// ScriptStruct Madness.ModalErrorMsgButton
// Size: 0x28 (Inherited: 0x00)
struct FModalErrorMsgButton {
	struct FText Label; // 0x00(0x18)
	struct FString TriggerName; // 0x18(0x10)
};

// ScriptStruct Madness.MadUIPopupError
// Size: 0x18 (Inherited: 0x00)
struct FMadUIPopupError {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Madness.MadDifficultyUIData
// Size: 0x58 (Inherited: 0x00)
struct FMadDifficultyUIData {
	struct FText DifficultyName; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	enum class None Level; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float EnemyLevelModifier; // 0x34(0x04)
	float DropRateModifier; // 0x38(0x04)
	float DropItemBonus; // 0x3c(0x04)
	float ChanceForHighRarityItems; // 0x40(0x04)
	float LegendaryItemDropRate; // 0x44(0x04)
	float WearableItemCap; // 0x48(0x04)
	struct FName ImageUrl; // 0x4c(0x08)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Madness.MadPlayerClassDefinitionUIData
// Size: 0x108 (Inherited: 0x00)
struct FMadPlayerClassDefinitionUIData {
	struct FText ClassName; // 0x00(0x18)
	struct FText ClassKeywords; // 0x18(0x18)
	struct TArray<struct FText> PathNames; // 0x30(0x10)
	struct FText ClassDescription; // 0x40(0x18)
	struct FName ClassIcon; // 0x58(0x08)
	struct FName ClassPicture; // 0x60(0x08)
	struct TArray<struct FName> DescriptionIcons; // 0x68(0x10)
	struct FName ClassBackgroundTexture; // 0x78(0x08)
	struct FName ClassPortraitSelectedTexture; // 0x80(0x08)
	struct FName ClassPortraitDeselectedTexture; // 0x88(0x08)
	struct FName ClassTreeBackgroundTexture; // 0x90(0x08)
	struct TMap<struct FName, struct FName> ClassTreeEndNodeBackgroundTextures; // 0x98(0x50)
	struct FText ClassHealingDescription; // 0xe8(0x18)
	enum class None ClassID; // 0x100(0x01)
	char UnknownData_101[0x7]; // 0x101(0x07)
};

// ScriptStruct Madness.MadUIStateTransition
// Size: 0x14 (Inherited: 0x00)
struct FMadUIStateTransition {
	struct FName FromStateName; // 0x00(0x08)
	struct FName ToStateName; // 0x08(0x08)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool bShouldFadeAudio : 1; // 0x10(0x01)
	char UnknownData_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Madness.MadVendorItemUIData
// Size: 0x248 (Inherited: 0x00)
struct FMadVendorItemUIData {
	struct FMadItemUIData Item; // 0x00(0x208)
	struct TArray<struct FMadResourceUIData> CostData; // 0x208(0x10)
	struct TArray<struct FMadResourceUIData> CostPerUnit; // 0x218(0x10)
	char UnknownData_228_0 : 7; // 0x228(0x01)
	bool bCanBuy : 1; // 0x228(0x01)
	char UnknownData_229_0 : 7; // 0x229(0x01)
	bool bIsSellOffer : 1; // 0x229(0x01)
	enum class EMadVendorOfferType Offer; // 0x22a(0x01)
	char UnknownData_22B[0x1]; // 0x22b(0x01)
	uint32_t UniqueId; // 0x22c(0x04)
	int32_t NumberOfUnits; // 0x230(0x04)
	char UnknownData_234[0x14]; // 0x234(0x14)
};

// ScriptStruct Madness.OverlappedActorData
// Size: 0x10 (Inherited: 0x00)
struct FOverlappedActorData {
	struct AActor* Actor; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Madness.FlameTrailData
// Size: 0x20 (Inherited: 0x00)
struct FFlameTrailData {
	struct UParticleSystemComponent* Particle; // 0x00(0x08)
	char UnknownData_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Madness.MadConfigInitData
// Size: 0x0c (Inherited: 0x00)
struct FMadConfigInitData {
	struct FName ConfigName; // 0x00(0x08)
	int32_t Level; // 0x08(0x04)
};

// ScriptStruct Madness.MadWeaponData
// Size: 0xe0 (Inherited: 0x08)
struct FMadWeaponData : FTableRowBase {
	struct FText FullName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct AMadWeapon* Archetype; // 0x38(0x08)
	SoftClassProperty Scheme; // 0x40(0x28)
	struct TSoftObjectPtr<struct UWeaponEffects> Effects; // 0x68(0x28)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x90(0x28)
	struct TSoftObjectPtr<struct UObject> CrosshairMaterial; // 0xb8(0x28)
};

// ScriptStruct Madness.MadMeshAttachment
// Size: 0x10 (Inherited: 0x00)
struct FMadMeshAttachment {
	struct UMeshComponent* Mesh; // 0x00(0x08)
	struct FName Socket; // 0x08(0x08)
};

// ScriptStruct Madness.MadMeshMIDs
// Size: 0x18 (Inherited: 0x00)
struct FMadMeshMIDs {
	struct UMeshComponent* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> MIDs; // 0x08(0x10)
};

// ScriptStruct Madness.MadMaterialParams
// Size: 0x30 (Inherited: 0x00)
struct FMadMaterialParams {
	struct TArray<struct FMadColorParam> ColorParams; // 0x00(0x10)
	struct TArray<struct FMadNumberParam> NumberParams; // 0x10(0x10)
	struct TArray<struct FMadTextureParam> TextureParams; // 0x20(0x10)
};

// ScriptStruct Madness.MadMaterialParam
// Size: 0x20 (Inherited: 0x00)
struct FMadMaterialParam {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FName ParamName; // 0x08(0x08)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool bWeaponBase : 1; // 0x10(0x01)
	char UnknownData_11_0 : 7; // 0x11(0x01)
	bool bClip : 1; // 0x11(0x01)
	char UnknownData_12_0 : 7; // 0x12(0x01)
	bool bMuzzle : 1; // 0x12(0x01)
	char UnknownData_13_0 : 7; // 0x13(0x01)
	bool bPump : 1; // 0x13(0x01)
	char UnknownData_14_0 : 7; // 0x14(0x01)
	bool bSlot1 : 1; // 0x14(0x01)
	char UnknownData_15_0 : 7; // 0x15(0x01)
	bool bSlot2 : 1; // 0x15(0x01)
	char UnknownData_16_0 : 7; // 0x16(0x01)
	bool bSlot3 : 1; // 0x16(0x01)
	char UnknownData_17_0 : 7; // 0x17(0x01)
	bool bSlot4 : 1; // 0x17(0x01)
	char UnknownData_18_0 : 7; // 0x18(0x01)
	bool bSlot5 : 1; // 0x18(0x01)
	char UnknownData_19_0 : 7; // 0x19(0x01)
	bool bAdditionalSlots : 1; // 0x19(0x01)
	char UnknownData_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct Madness.MadTextureParam
// Size: 0x28 (Inherited: 0x20)
struct FMadTextureParam : FMadMaterialParam {
	struct UTexture2D* TextureValue; // 0x20(0x08)
};

// ScriptStruct Madness.MadNumberParam
// Size: 0x28 (Inherited: 0x20)
struct FMadNumberParam : FMadMaterialParam {
	float NumberValue; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Madness.MadColorParam
// Size: 0x30 (Inherited: 0x20)
struct FMadColorParam : FMadMaterialParam {
	struct FLinearColor ColorValue; // 0x20(0x10)
};

// ScriptStruct Madness.WorldMapNodeUIData
// Size: 0x78 (Inherited: 0x00)
struct FWorldMapNodeUIData {
	int32_t NodeID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FText NodeTitle; // 0x08(0x18)
	struct FText NodeDescription; // 0x20(0x18)
	enum class EWorldMapNodeType NodeType; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	struct FVector2D NodePosition; // 0x3c(0x08)
	char UnknownData_44_0 : 7; // 0x44(0x01)
	bool bIsCurrentRegion : 1; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	struct FString RegionTexturePath; // 0x48(0x10)
	struct FString FogOfWarTexturePath; // 0x58(0x10)
	struct FName regionname; // 0x68(0x08)
	struct FWeakObjectPtr<struct UBaseWorldMapNode> BaseWorldNode; // 0x70(0x08)
};

// ScriptStruct Madness.BackToHubStructure
// Size: 0x38 (Inherited: 0x00)
struct FBackToHubStructure {
	struct FAssetPath OwningPersistentLevelPath; // 0x00(0x10)
	struct FGameplayTag OwningRegionName; // 0x10(0x08)
	struct FGameplayTagContainer HubSpawnPointsTags; // 0x18(0x20)
};

// ScriptStruct Madness.MadPlayerEffectHandle
// Size: 0x18 (Inherited: 0x00)
struct FMadPlayerEffectHandle {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Madness.ScrapShieldParams
// Size: 0x10 (Inherited: 0x00)
struct FScrapShieldParams {
	float ChannelDuration; // 0x00(0x04)
	float ShieldDurability; // 0x04(0x04)
	float ShieldDotDamage; // 0x08(0x04)
	float ShieldShrapnelDamage; // 0x0c(0x04)
};

// ScriptStruct Madness.MadTutorialCustomLogicData
// Size: 0x38 (Inherited: 0x00)
struct FMadTutorialCustomLogicData {
	struct FName TutorialIdName; // 0x00(0x08)
	struct UMadTutorialSequence* TutorialClass; // 0x08(0x08)
	enum class EMadTutorialShowFrequency ShowFrequency; // 0x10(0x01)
	char UnknownData_11_0 : 7; // 0x11(0x01)
	bool bCheckDLC : 1; // 0x11(0x01)
	char UnknownData_12[0x6]; // 0x12(0x06)
	struct FMadDLCLink DLCLink; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bCheckMinPlayerLevel : 1; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	int32_t MinPlayerLevel; // 0x2c(0x04)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bCheckMaxPlayerLevel : 1; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	int32_t MaxPlayerLevel; // 0x34(0x04)
};

// ScriptStruct Madness.MadTutorialSequenceData
// Size: 0x20 (Inherited: 0x00)
struct FMadTutorialSequenceData {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Madness.HintUIData
// Size: 0x30 (Inherited: 0x00)
struct FHintUIData {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
};

// ScriptStruct Madness.TutorialUIData
// Size: 0x50 (Inherited: 0x00)
struct FTutorialUIData {
	struct FName TutorialID; // 0x00(0x08)
	struct FText Title; // 0x08(0x18)
	struct FText Category; // 0x20(0x18)
	struct TArray<struct FText> Descriptions; // 0x38(0x10)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool IsSkippable : 1; // 0x48(0x01)
	enum class ETutorialUIPosition Position; // 0x49(0x01)
	char UnknownData_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct Madness.MadCoverHintOrientation
// Size: 0x10 (Inherited: 0x00)
struct FMadCoverHintOrientation {
	enum class ECoverMovementDirection Direction; // 0x00(0x01)
	enum class ECoverSlotType SlotType; // 0x01(0x01)
	char UnknownData_2[0x2]; // 0x02(0x02)
	struct FVector Position; // 0x04(0x0c)
};

