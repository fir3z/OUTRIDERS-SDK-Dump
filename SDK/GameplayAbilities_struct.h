// Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8 {
	CancelAbilityImmediately,
	RemoveAbilityOnEnd,
	DoNothing,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX,
};

// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8 {
	Source,
	Target,
	EGameplayEffectAttributeCaptureSource_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8 {
	Authority,
	NonAuthority,
	Predicting,
	Confirmed,
	Rejected,
	EGameplayAbilityActivationMode_MAX,
};

// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8 {
	GenericConfirm,
	GenericCancel,
	InputPressed,
	InputReleased,
	GenericSignalFromClient,
	GenericSignalFromServer,
	GameCustom1,
	GameCustom2,
	GameCustom3,
	GameCustom4,
	GameCustom5,
	GameCustom6,
	MAX,
};

// Enum GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8 {
	Minimal,
	Mixed,
	Full,
	EGameplayEffectReplicationMode_MAX,
};

// Enum GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState : uint8 {
	WaitingOnGame,
	WaitingOnUser,
	WaitingOnAvatar,
	EAbilityTaskWaitState_MAX,
};

// Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType : uint8 {
	AlignFromTargetToSource,
	AlignToTargetForward,
	AlignToWorldSpace,
	ERootMotionMoveToActorTargetOffsetType_MAX,
};

// Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8 {
	BothWait,
	OnlyServerWait,
	OnlyClientWait,
	EAbilityTaskNetSyncType_MAX,
};

// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8 {
	None,
	GreaterThan,
	LessThan,
	GreaterThanOrEqualTo,
	LessThanOrEqualTo,
	NotEqualTo,
	ExactlyEqualTo,
	MAX,
};

// Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8 {
	Ability1,
	Ability2,
	Ability3,
	Ability4,
	Ability5,
	Ability6,
	Ability7,
	Ability8,
	Ability9,
	EGameplayAbilityInputBinds_MAX,
};

// Enum GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8 {
	TDFS_Any,
	TDFS_NoSelf,
	TDFS_NoOthers,
	TDFS_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8 {
	LiteralTransform,
	ActorTransform,
	SocketTransform,
	EGameplayAbilityTargetingLocationType_MAX,
};

// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8 {
	Instant,
	UserConfirmed,
	Custom,
	CustomMulti,
	EGameplayTargetingConfirmation_MAX,
};

// Enum GameplayAbilities.ERepAnimPositionMethod
enum class ERepAnimPositionMethod : uint8 {
	Position,
	CurrentSectionId,
	ERepAnimPositionMethod_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8 {
	GameplayEvent,
	OwnedTagAdded,
	OwnedTagPresent,
	EGameplayAbilityTriggerSource_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8 {
	ReplicateNo,
	ReplicateYes,
	EGameplayAbilityReplicationPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityNetSecurityPolicy
enum class EGameplayAbilityNetSecurityPolicy : uint8 {
	ClientOrServer,
	ServerOnlyExecution,
	ServerOnlyTermination,
	ServerOnly,
	EGameplayAbilityNetSecurityPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8 {
	LocalPredicted,
	LocalOnly,
	ServerInitiated,
	ServerOnly,
	EGameplayAbilityNetExecutionPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8 {
	NonInstanced,
	InstancedPerActor,
	InstancedPerExecution,
	EGameplayAbilityInstancingPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8 {
	CueParameters,
	FromSpec,
	EGameplayCuePayloadType_MAX,
};

// Enum GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8 {
	NeverReset,
	ResetPeriod,
	ExecuteAndResetPeriod,
	EGameplayEffectPeriodInhibitionRemovedPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8 {
	ClearEntireStack,
	RemoveSingleStackAndRefreshDuration,
	RefreshDuration,
	EGameplayEffectStackingExpirationPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8 {
	ResetOnSuccessfulApplication,
	NeverReset,
	EGameplayEffectStackingPeriodPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8 {
	RefreshOnSuccessfulApplication,
	NeverRefresh,
	EGameplayEffectStackingDurationPolicy_MAX,
};

// Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8 {
	Instant,
	Infinite,
	HasDuration,
	EGameplayEffectDurationType_MAX,
};

// Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8 {
	CapturedAttributeBacked,
	Transient,
	EGameplayEffectScopedModifierAggregatorType_MAX,
};

// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8 {
	AttributeMagnitude,
	AttributeBaseValue,
	AttributeBonusMagnitude,
	AttributeMagnitudeEvaluatedUpToChannel,
	EAttributeBasedFloatCalculationType_MAX,
};

// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8 {
	ScalableFloat,
	AttributeBased,
	CustomCalculationClass,
	SetByCaller,
	EGameplayEffectMagnitudeCalculation_MAX,
};

// Enum GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8 {
	NewOrRemoved,
	AnyCountChange,
	EGameplayTagEventType_MAX,
};

// Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8 {
	OnActive,
	WhileActive,
	Executed,
	Removed,
	EGameplayCueEvent_MAX,
};

// Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8 {
	None,
	AggregateBySource,
	AggregateByTarget,
	EGameplayEffectStackingType_MAX,
};

// Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8 {
	Additive,
	Multiplicitive,
	Division,
	Override,
	Max,
};

// Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8 {
	Channel0,
	Channel1,
	Channel2,
	Channel3,
	Channel4,
	Channel5,
	Channel6,
	Channel7,
	Channel8,
	Channel9,
	Channel_MAX,
	EGameplayModEvaluationChannel_MAX,
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// Size: 0x370 (Inherited: 0x0c)
struct FActiveGameplayEffect : FFastArraySerializerItem {
	char UnknownData_C[0xc]; // 0x0c(0x0c)
	struct FGameplayEffectSpec Spec; // 0x18(0x298)
	struct FPredictionKey PredictionKey; // 0x2b0(0x18)
	float StartServerWorldTime; // 0x2c8(0x04)
	float CachedStartServerWorldTime; // 0x2cc(0x04)
	float StartWorldTime; // 0x2d0(0x04)
	char UnknownData_2D4_0 : 7; // 0x2d4(0x01)
	bool bIsInhibited : 1; // 0x2d4(0x01)
	char UnknownData_2D5[0x9b]; // 0x2d5(0x9b)
};

// ScriptStruct GameplayAbilities.PredictionKey
// Size: 0x18 (Inherited: 0x00)
struct FPredictionKey {
	int16_t Current; // 0x00(0x02)
	int16_t Base; // 0x02(0x02)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UPackageMap* PredictiveConnection; // 0x08(0x08)
	char UnknownData_10_0 : 7; // 0x10(0x01)
	bool bIsStale : 1; // 0x10(0x01)
	char UnknownData_11_0 : 7; // 0x11(0x01)
	bool bIsServerInitiated : 1; // 0x11(0x01)
	char UnknownData_12[0x6]; // 0x12(0x06)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpec
// Size: 0x298 (Inherited: 0x00)
struct FGameplayEffectSpec {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x08(0x10)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes; // 0x18(0x28)
	char UnknownData_40[0x10]; // 0x40(0x10)
	float DURATION; // 0x50(0x04)
	float Period; // 0x54(0x04)
	float ChanceToApplyToTarget; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FTagContainerAggregator CapturedSourceTags; // 0x60(0x88)
	struct FTagContainerAggregator CapturedTargetTags; // 0xe8(0x88)
	struct FGameplayTagContainer DynamicGrantedTags; // 0x170(0x20)
	struct FGameplayTagContainer DynamicAssetTags; // 0x190(0x20)
	struct TArray<struct FModifierSpec> Modifiers; // 0x1b0(0x10)
	int32_t StackCount; // 0x1c0(0x04)
	char bCompletedSourceAttributeCapture : 1; // 0x1c4(0x01)
	char bCompletedTargetAttributeCapture : 1; // 0x1c4(0x01)
	char bDurationLocked : 1; // 0x1c4(0x01)
	char UnknownData_1C4_3 : 5; // 0x1c4(0x01)
	char UnknownData_1C5[0x3]; // 0x1c5(0x03)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilitySpecs; // 0x1c8(0x10)
	char UnknownData_1D8[0xa0]; // 0x1d8(0xa0)
	struct FGameplayEffectContextHandle EffectContext; // 0x278(0x18)
	float Level; // 0x290(0x04)
	char UnknownData_294[0x4]; // 0x294(0x04)
};

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// Size: 0x18 (Inherited: 0x00)
struct FGameplayEffectContextHandle {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// Size: 0x90 (Inherited: 0x00)
struct FGameplayAbilitySpecDef {
	struct UGameplayAbility* Ability; // 0x00(0x08)
	struct FScalableFloat LevelScalableFloat; // 0x08(0x20)
	int32_t InputID; // 0x28(0x04)
	enum class EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	struct UObject* SourceObject; // 0x30(0x08)
	char UnknownData_38[0x50]; // 0x38(0x50)
	struct FGameplayAbilitySpecHandle AssignedHandle; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// Size: 0x04 (Inherited: 0x00)
struct FGameplayAbilitySpecHandle {
	int32_t Handle; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.ScalableFloat
// Size: 0x20 (Inherited: 0x00)
struct FScalableFloat {
	float Value; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FCurveTableRowHandle Curve; // 0x08(0x10)
	char UnknownData_18[0x8]; // 0x18(0x08)
};

// ScriptStruct GameplayAbilities.ModifierSpec
// Size: 0x04 (Inherited: 0x00)
struct FModifierSpec {
	float EvaluatedMagnitude; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.TagContainerAggregator
// Size: 0x88 (Inherited: 0x00)
struct FTagContainerAggregator {
	struct FGameplayTagContainer CapturedActorTags; // 0x00(0x20)
	struct FGameplayTagContainer CapturedSpecTags; // 0x20(0x20)
	struct FGameplayTagContainer ScopedTags; // 0x40(0x20)
	char UnknownData_60[0x28]; // 0x60(0x28)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// Size: 0x28 (Inherited: 0x00)
struct FGameplayEffectAttributeCaptureSpecContainer {
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes; // 0x00(0x10)
	struct TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes; // 0x10(0x10)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bHasNonSnapshottedAttributes : 1; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// Size: 0x50 (Inherited: 0x00)
struct FGameplayEffectAttributeCaptureSpec {
	struct FGameplayEffectAttributeCaptureDefinition BackingDefinition; // 0x00(0x40)
	char UnknownData_40[0x10]; // 0x40(0x10)
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// Size: 0x40 (Inherited: 0x00)
struct FGameplayEffectAttributeCaptureDefinition {
	struct FGameplayAttribute AttributeToCapture; // 0x00(0x38)
	enum class EGameplayEffectAttributeCaptureSource AttributeSource; // 0x38(0x01)
	char UnknownData_39_0 : 7; // 0x39(0x01)
	bool bSnapshot : 1; // 0x39(0x01)
	char UnknownData_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct GameplayAbilities.GameplayAttribute
// Size: 0x38 (Inherited: 0x00)
struct FGameplayAttribute {
	struct FString AttributeName; // 0x00(0x10)
	FieldPathProperty Attribute; // 0x10(0x20)
	struct UStruct* AttributeOwner; // 0x30(0x08)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// Size: 0x40 (Inherited: 0x00)
struct FGameplayEffectModifiedAttribute {
	struct FGameplayAttribute Attribute; // 0x00(0x38)
	float TotalMagnitude; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// Size: 0x08 (Inherited: 0x00)
struct FActiveGameplayEffectHandle {
	int32_t Handle; // 0x00(0x04)
	char UnknownData_4_0 : 7; // 0x04(0x01)
	bool bPassedFiltersAndWasExecuted : 1; // 0x04(0x01)
	char UnknownData_5[0x3]; // 0x05(0x03)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// Size: 0x10 (Inherited: 0x00)
struct FGameplayEffectSpecHandle {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
// Size: 0x20 (Inherited: 0x00)
struct FGameplayEffectRemovalInfo {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bPrematureRemoval : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	int32_t StackCount; // 0x04(0x04)
	struct FGameplayEffectContextHandle EffectContext; // 0x08(0x18)
};

// ScriptStruct GameplayAbilities.GameplayEventData
// Size: 0xc0 (Inherited: 0x00)
struct FGameplayEventData {
	struct FGameplayTag EventTag; // 0x00(0x08)
	struct AActor* Instigator; // 0x08(0x08)
	struct AActor* Target; // 0x10(0x08)
	struct UObject* OptionalObject; // 0x18(0x08)
	struct UObject* OptionalObject2; // 0x20(0x08)
	struct TArray<enum class None> OptionalData; // 0x28(0x10)
	struct FGameplayEffectContextHandle ContextHandle; // 0x38(0x18)
	struct FGameplayTagContainer InstigatorTags; // 0x50(0x20)
	struct FGameplayTagContainer TargetTags; // 0x70(0x20)
	float EventMagnitude; // 0x90(0x04)
	char UnknownData_94[0x4]; // 0x94(0x04)
	struct FGameplayAbilityTargetDataHandle TargetData; // 0x98(0x28)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// Size: 0x28 (Inherited: 0x00)
struct FGameplayAbilityTargetDataHandle {
	char UnknownData_0[0x28]; // 0x00(0x28)
};

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// Size: 0x20 (Inherited: 0x00)
struct FGameplayAbilityActivationInfo {
	enum class EGameplayAbilityActivationMode ActivationMode; // 0x00(0x01)
	char bCanBeEndedByOtherInstance : 1; // 0x01(0x01)
	char UnknownData_1_1 : 7; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct FPredictionKey PredictionKeyWhenActivated; // 0x08(0x18)
};

// ScriptStruct GameplayAbilities.GameplayEffectQuery
// Size: 0x150 (Inherited: 0x00)
struct FGameplayEffectQuery {
	char UnknownData_0[0x10]; // 0x00(0x10)
	struct FDelegate CustomMatchDelegate_BP; // 0x10(0x10)
	struct FGameplayTagQuery OwningTagQuery; // 0x20(0x48)
	struct FGameplayTagQuery EffectTagQuery; // 0x68(0x48)
	struct FGameplayTagQuery SourceTagQuery; // 0xb0(0x48)
	struct FGameplayAttribute ModifyingAttribute; // 0xf8(0x38)
	struct UObject* EffectSource; // 0x130(0x08)
	struct UGameplayEffect* EffectDefinition; // 0x138(0x08)
	char UnknownData_140[0x10]; // 0x140(0x10)
};

// ScriptStruct GameplayAbilities.GameplayCueParameters
// Size: 0xc0 (Inherited: 0x00)
struct FGameplayCueParameters {
	float NormalizedMagnitude; // 0x00(0x04)
	float RawMagnitude; // 0x04(0x04)
	struct FGameplayEffectContextHandle EffectContext; // 0x08(0x18)
	struct FGameplayTag MatchedTagName; // 0x20(0x08)
	struct FGameplayTag OriginalTag; // 0x28(0x08)
	struct FGameplayTagContainer AggregatedSourceTags; // 0x30(0x20)
	struct FGameplayTagContainer AggregatedTargetTags; // 0x50(0x20)
	struct FVector_NetQuantize10 Location; // 0x70(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x7c(0x0c)
	struct FWeakObjectPtr<struct AActor> Instigator; // 0x88(0x08)
	struct FWeakObjectPtr<struct AActor> EffectCauser; // 0x90(0x08)
	struct FWeakObjectPtr<struct UObject> SourceObject; // 0x98(0x08)
	struct FWeakObjectPtr<struct UPhysicalMaterial> PhysicalMaterial; // 0xa0(0x08)
	int32_t GameplayEffectLevel; // 0xa8(0x04)
	int32_t AbilityLevel; // 0xac(0x04)
	struct FWeakObjectPtr<struct USceneComponent> TargetAttachComponent; // 0xb0(0x08)
	char UnknownData_B8_0 : 7; // 0xb8(0x01)
	bool bAllowSlicedHandleGameplayCues : 1; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// Size: 0x78 (Inherited: 0x00)
struct FGameplayEffectSpecForRPC {
	struct UGameplayEffect* Def; // 0x00(0x08)
	struct TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x08(0x10)
	struct FGameplayEffectContextHandle EffectContext; // 0x18(0x18)
	struct FGameplayTagContainer AggregatedSourceTags; // 0x30(0x20)
	struct FGameplayTagContainer AggregatedTargetTags; // 0x50(0x20)
	float Level; // 0x70(0x04)
	float AbilityLevel; // 0x74(0x04)
};

// ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
// Size: 0x50 (Inherited: 0x00)
struct FServerAbilityRPCBatch {
	struct FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FPredictionKey PredictionKey; // 0x08(0x18)
	struct FGameplayAbilityTargetDataHandle TargetData; // 0x20(0x28)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool InputPressed : 1; // 0x48(0x01)
	char UnknownData_49_0 : 7; // 0x49(0x01)
	bool Ended : 1; // 0x49(0x01)
	char UnknownData_4A_0 : 7; // 0x4a(0x01)
	bool Started : 1; // 0x4a(0x01)
	char UnknownData_4B[0x5]; // 0x4b(0x05)
};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
// Size: 0x118 (Inherited: 0x108)
struct FReplicatedPredictionKeyMap : FFastArraySerializer {
	struct TArray<struct FReplicatedPredictionKeyItem> PredictionKeys; // 0x108(0x10)
};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
// Size: 0x28 (Inherited: 0x0c)
struct FReplicatedPredictionKeyItem : FFastArraySerializerItem {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FPredictionKey PredictionKey; // 0x10(0x18)
};

// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
// Size: 0x60 (Inherited: 0x00)
struct FMinimalReplicationTagCountMap {
	char UnknownData_0[0x50]; // 0x00(0x50)
	struct UAbilitySystemComponent* Owner; // 0x50(0x08)
	char UnknownData_58[0x8]; // 0x58(0x08)
};

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// Size: 0x128 (Inherited: 0x108)
struct FActiveGameplayCueContainer : FFastArraySerializer {
	struct TArray<struct FActiveGameplayCue> GameplayCues; // 0x108(0x10)
	char UnknownData_118[0x8]; // 0x118(0x08)
	struct UAbilitySystemComponent* Owner; // 0x120(0x08)
};

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// Size: 0xf8 (Inherited: 0x0c)
struct FActiveGameplayCue : FFastArraySerializerItem {
	struct FGameplayTag GameplayCueTag; // 0x0c(0x08)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FPredictionKey PredictionKey; // 0x18(0x18)
	struct FGameplayCueParameters Parameters; // 0x30(0xc0)
	char UnknownData_F0_0 : 7; // 0xf0(0x01)
	bool bPredictivelyRemoved : 1; // 0xf0(0x01)
	char UnknownData_F1[0x7]; // 0xf1(0x07)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// Size: 0x480 (Inherited: 0x108)
struct FActiveGameplayEffectsContainer : FFastArraySerializer {
	char UnknownData_108[0x30]; // 0x108(0x30)
	struct TArray<struct FActiveGameplayEffect> GameplayEffects_Internal; // 0x138(0x10)
	char UnknownData_148[0x310]; // 0x148(0x310)
	struct TArray<struct UGameplayEffect*> ApplicationImmunityQueryEffects; // 0x458(0x10)
	char UnknownData_468[0x18]; // 0x468(0x18)
};

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// Size: 0x98 (Inherited: 0x00)
struct FGameplayAbilityLocalAnimMontage {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool PlayBit : 1; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FPredictionKey PredictionKey; // 0x10(0x18)
	struct UGameplayAbility* AnimatingAbility; // 0x28(0x08)
	struct FGameplayAbilityRepAnimMontageCombined AnimMontageCombinedInfo; // 0x30(0x68)
};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontageCombined
// Size: 0x68 (Inherited: 0x00)
struct FGameplayAbilityRepAnimMontageCombined {
	struct FGameplayEventReplicatedData GameplayEventData; // 0x00(0x30)
	struct FGameplayAbilityRepAnimMontage AnimMontageData; // 0x30(0x38)
};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// Size: 0x38 (Inherited: 0x00)
struct FGameplayAbilityRepAnimMontage {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float Position; // 0x0c(0x04)
	float BlendTime; // 0x10(0x04)
	enum class None NextSectionID; // 0x14(0x01)
	char bRepPosition : 1; // 0x15(0x01)
	char IsStopped : 1; // 0x15(0x01)
	char ForcePlayBit : 1; // 0x15(0x01)
	char SkipPositionCorrection : 1; // 0x15(0x01)
	char bSkipPlayRate : 1; // 0x15(0x01)
	char UnknownData_15_5 : 3; // 0x15(0x01)
	char UnknownData_16[0x2]; // 0x16(0x02)
	struct FPredictionKey PredictionKey; // 0x18(0x18)
	enum class None SectionIdToPlay; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GameplayAbilities.GameplayEventReplicatedData
// Size: 0x30 (Inherited: 0x00)
struct FGameplayEventReplicatedData {
	enum class None EventActivityType; // 0x00(0x01)
	enum class None EventType; // 0x01(0x01)
	char UnknownData_2[0x6]; // 0x02(0x06)
	struct UObject* OptionalObject; // 0x08(0x08)
	struct UObject* OptionalObject2; // 0x10(0x08)
	struct TArray<enum class None> OptionalData; // 0x18(0x10)
	float EventMagnitude; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// Size: 0x120 (Inherited: 0x108)
struct FGameplayAbilitySpecContainer : FFastArraySerializer {
	struct TArray<struct FGameplayAbilitySpec> Items; // 0x108(0x10)
	struct UAbilitySystemComponent* Owner; // 0x118(0x08)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// Size: 0xc8 (Inherited: 0x0c)
struct FGameplayAbilitySpec : FFastArraySerializerItem {
	struct FGameplayAbilitySpecHandle Handle; // 0x0c(0x04)
	struct UGameplayAbility* Ability; // 0x10(0x08)
	int32_t Level; // 0x18(0x04)
	int32_t InputID; // 0x1c(0x04)
	struct UObject* SourceObject; // 0x20(0x08)
	enum class None ActiveCount; // 0x28(0x01)
	char InputPressed : 1; // 0x29(0x01)
	char RemoveAfterActivation : 1; // 0x29(0x01)
	char PendingRemove : 1; // 0x29(0x01)
	char bActivateOnce : 1; // 0x29(0x01)
	char UnknownData_29_4 : 4; // 0x29(0x01)
	char UnknownData_2A[0x6]; // 0x2a(0x06)
	struct FGameplayAbilityActivationInfo ActivationInfo; // 0x30(0x20)
	struct TArray<struct UGameplayAbility*> NonReplicatedInstances; // 0x50(0x10)
	struct TArray<struct UGameplayAbility*> ReplicatedInstances; // 0x60(0x10)
	struct FActiveGameplayEffectHandle GameplayEffectHandle; // 0x70(0x08)
	char UnknownData_78[0x50]; // 0x78(0x50)
};

// ScriptStruct GameplayAbilities.AttributeDefaults
// Size: 0x10 (Inherited: 0x00)
struct FAttributeDefaults {
	struct UAttributeSet* Attributes; // 0x00(0x08)
	struct UDataTable* DefaultStartingTable; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.NetSerializeScriptStructCache
// Size: 0x10 (Inherited: 0x00)
struct FNetSerializeScriptStructCache {
	struct TArray<struct UScriptStruct*> ScriptStructs; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.AttributeMetaData
// Size: 0x30 (Inherited: 0x08)
struct FAttributeMetaData : FTableRowBase {
	float BaseValue; // 0x08(0x04)
	float MinValue; // 0x0c(0x04)
	float MaxValue; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString DerivedAttributeInfo; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bCanStack : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct GameplayAbilities.GameplayAttributeData
// Size: 0x10 (Inherited: 0x00)
struct FGameplayAttributeData {
	char UnknownData_0[0x8]; // 0x00(0x08)
	float BaseValue; // 0x08(0x04)
	float CurrentValue; // 0x0c(0x04)
};

// ScriptStruct GameplayAbilities.AbilityTriggerData
// Size: 0x0c (Inherited: 0x00)
struct FAbilityTriggerData {
	struct FGameplayTag TriggerTag; // 0x00(0x08)
	enum class EGameplayAbilityTriggerSource TriggerSource; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
};

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// Size: 0x10 (Inherited: 0x00)
struct FGameplayAbilityBindInfo {
	enum class EGameplayAbilityInputBinds Command; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UGameplayAbility* GameplayAbilityClass; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// Size: 0x10 (Inherited: 0x00)
struct FGameplayTargetDataFilterHandle {
	char UnknownData_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// Size: 0x28 (Inherited: 0x00)
struct FGameplayTargetDataFilter {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct AActor* SelfActor; // 0x08(0x08)
	enum class ETargetDataFilterSelf SelfFilter; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
	struct AActor* RequiredActorClass; // 0x18(0x08)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bReverseFilter : 1; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// Size: 0x08 (Inherited: 0x00)
struct FGameplayAbilityTargetData {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// Size: 0xa0 (Inherited: 0x08)
struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData {
	struct FHitResult HitResult; // 0x08(0x90)
	char UnknownData_98_0 : 7; // 0x98(0x01)
	bool bHitReplaced : 1; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// Size: 0x90 (Inherited: 0x08)
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData {
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10(0x70)
	struct TArray<struct FWeakObjectPtr<struct AActor>> TargetActorArray; // 0x80(0x10)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// Size: 0x70 (Inherited: 0x00)
struct FGameplayAbilityTargetingLocationInfo {
	char UnknownData_0[0x10]; // 0x00(0x10)
	enum class EGameplayAbilityTargetingLocationType LocationType; // 0x10(0x01)
	char UnknownData_11[0xf]; // 0x11(0x0f)
	struct FTransform LiteralTransform; // 0x20(0x30)
	struct AActor* SourceActor; // 0x50(0x08)
	struct UMeshComponent* SourceComponent; // 0x58(0x08)
	struct UGameplayAbility* SourceAbility; // 0x60(0x08)
	struct FName SourceSocketName; // 0x68(0x08)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// Size: 0xf0 (Inherited: 0x08)
struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData {
	char UnknownData_8[0x8]; // 0x08(0x08)
	struct FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10(0x70)
	struct FGameplayAbilityTargetingLocationInfo TargetLocation; // 0x80(0x70)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// Size: 0x08 (Inherited: 0x00)
struct FGameplayAbilitySpecHandleAndPredictionKey {
	struct FGameplayAbilitySpecHandle AbilityHandle; // 0x00(0x04)
	int32_t PredictionKeyAtCreation; // 0x04(0x04)
};

// ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
// Size: 0x18 (Inherited: 0x00)
struct FAbilityTaskDebugMessage {
	struct UGameplayTask* FromTask; // 0x00(0x08)
	struct FString Message; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.AbilityEndedData
// Size: 0x10 (Inherited: 0x00)
struct FAbilityEndedData {
	struct UGameplayAbility* AbilityThatEnded; // 0x00(0x08)
	struct FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x08(0x04)
	char UnknownData_C_0 : 7; // 0x0c(0x01)
	bool bReplicateEndAbility : 1; // 0x0c(0x01)
	char UnknownData_D_0 : 7; // 0x0d(0x01)
	bool bWasCancelled : 1; // 0x0d(0x01)
	char UnknownData_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// Size: 0x48 (Inherited: 0x00)
struct FGameplayAbilityActorInfo {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FWeakObjectPtr<struct AActor> OwnerActor; // 0x08(0x08)
	struct FWeakObjectPtr<struct AActor> AvatarActor; // 0x10(0x08)
	struct FWeakObjectPtr<struct APlayerController> PlayerController; // 0x18(0x08)
	struct FWeakObjectPtr<struct UAbilitySystemComponent> AbilitySystemComponent; // 0x20(0x08)
	struct FWeakObjectPtr<struct USkeletalMeshComponent> SkeletalMeshComponent; // 0x28(0x08)
	struct FWeakObjectPtr<struct UAnimInstance> AnimInstance; // 0x30(0x08)
	struct FWeakObjectPtr<struct UMovementComponent> MovementComponent; // 0x38(0x08)
	struct FName AffectedAnimInstanceTag; // 0x40(0x08)
};

// ScriptStruct GameplayAbilities.WorldReticleParameters
// Size: 0x0c (Inherited: 0x00)
struct FWorldReticleParameters {
	struct FVector AOEScale; // 0x00(0x0c)
};

// ScriptStruct GameplayAbilities.PreallocationInfo
// Size: 0x68 (Inherited: 0x00)
struct FPreallocationInfo {
	char UnknownData_0[0x50]; // 0x00(0x50)
	struct TArray<struct AGameplayCueNotify_Actor*> ClassesNeedingPreallocation; // 0x50(0x10)
	char UnknownData_60[0x8]; // 0x60(0x08)
};

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// Size: 0x178 (Inherited: 0x00)
struct FGameplayCuePendingExecute {
	char UnknownData_0[0x18]; // 0x00(0x18)
	struct FPredictionKey PredictionKey; // 0x18(0x18)
	enum class EGameplayCuePayloadType PayloadType; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct UAbilitySystemComponent* OwningComponent; // 0x38(0x08)
	struct FGameplayEffectSpecForRPC FromSpec; // 0x40(0x78)
	struct FGameplayCueParameters CueParameters; // 0xb8(0xc0)
};

// ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxy
// Size: 0x1c0 (Inherited: 0x00)
struct FMinimalGameplayCueReplicationProxy {
	char UnknownData_0[0x1b0]; // 0x00(0x1b0)
	struct UAbilitySystemComponent* Owner; // 0x1b0(0x08)
	char UnknownData_1B8[0x8]; // 0x1b8(0x08)
};

// ScriptStruct GameplayAbilities.GameplayCueTag
// Size: 0x08 (Inherited: 0x00)
struct FGameplayCueTag {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
};

// ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
// Size: 0x50 (Inherited: 0x00)
struct FGameplayCueObjectLibrary {
	struct TArray<struct FString> Paths; // 0x00(0x10)
	char UnknownData_10[0x20]; // 0x10(0x20)
	struct UObjectLibrary* ActorObjectLibrary; // 0x30(0x08)
	struct UObjectLibrary* StaticObjectLibrary; // 0x38(0x08)
	struct UGameplayCueSet* CueSet; // 0x40(0x08)
	char UnknownData_48[0x4]; // 0x48(0x04)
	char UnknownData_4C_0 : 7; // 0x4c(0x01)
	bool bShouldSyncScan : 1; // 0x4c(0x01)
	char UnknownData_4D_0 : 7; // 0x4d(0x01)
	bool bShouldAsyncLoad : 1; // 0x4d(0x01)
	char UnknownData_4E_0 : 7; // 0x4e(0x01)
	bool bShouldSyncLoad : 1; // 0x4e(0x01)
	char UnknownData_4F_0 : 7; // 0x4f(0x01)
	bool bHasBeenInitialized : 1; // 0x4f(0x01)
};

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// Size: 0x30 (Inherited: 0x00)
struct FGameplayCueNotifyData {
	struct FGameplayTag GameplayCueTag; // 0x00(0x08)
	struct FSoftObjectPath GameplayCueNotifyObj; // 0x08(0x18)
	struct UObject* LoadedGameplayCueClass; // 0x20(0x08)
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// ScriptStruct GameplayAbilities.GameplayCueTranslationManager
// Size: 0x80 (Inherited: 0x00)
struct FGameplayCueTranslationManager {
	struct TArray<struct FGameplayCueTranslatorNode> TranslationLUT; // 0x00(0x10)
	struct TMap<struct FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap; // 0x10(0x50)
	struct UGameplayTagsManager* TagManager; // 0x60(0x08)
	char UnknownData_68[0x18]; // 0x68(0x18)
};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
// Size: 0x04 (Inherited: 0x00)
struct FGameplayCueTranslatorNodeIndex {
	int32_t Index; // 0x00(0x04)
};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
// Size: 0x78 (Inherited: 0x00)
struct FGameplayCueTranslatorNode {
	struct TArray<struct FGameplayCueTranslationLink> Links; // 0x00(0x10)
	struct FGameplayCueTranslatorNodeIndex CachedIndex; // 0x10(0x04)
	struct FGameplayTag CachedGameplayTag; // 0x14(0x08)
	struct FName CachedGameplayTagName; // 0x1c(0x08)
	char UnknownData_24[0x54]; // 0x24(0x54)
};

// ScriptStruct GameplayAbilities.GameplayCueTranslationLink
// Size: 0x18 (Inherited: 0x00)
struct FGameplayCueTranslationLink {
	struct UGameplayCueTranslator* RulesCDO; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// Size: 0x88 (Inherited: 0x00)
struct FActiveGameplayEffectQuery {
	char UnknownData_0[0x88]; // 0x00(0x88)
};

// ScriptStruct GameplayAbilities.InheritedTagContainer
// Size: 0x60 (Inherited: 0x00)
struct FInheritedTagContainer {
	struct FGameplayTagContainer CombinedTags; // 0x00(0x20)
	struct FGameplayTagContainer Added; // 0x20(0x20)
	struct FGameplayTagContainer Removed; // 0x40(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectCue
// Size: 0x60 (Inherited: 0x00)
struct FGameplayEffectCue {
	struct FGameplayAttribute MagnitudeAttribute; // 0x00(0x38)
	float MinLevel; // 0x38(0x04)
	float MaxLevel; // 0x3c(0x04)
	struct FGameplayTagContainer GameplayCueTags; // 0x40(0x20)
};

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// Size: 0x290 (Inherited: 0x00)
struct FGameplayModifierInfo {
	struct FGameplayAttribute Attribute; // 0x00(0x38)
	enum class EGameplayModOp ModifierOp; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct FScalableFloat Magnitude; // 0x40(0x20)
	struct FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x60(0x1a8)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x208(0x01)
	char UnknownData_209[0x7]; // 0x209(0x07)
	struct FGameplayTagRequirements SourceTags; // 0x210(0x40)
	struct FGameplayTagRequirements TargetTags; // 0x250(0x40)
};

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// Size: 0x40 (Inherited: 0x00)
struct FGameplayTagRequirements {
	struct FGameplayTagContainer RequireTags; // 0x00(0x20)
	struct FGameplayTagContainer IgnoreTags; // 0x20(0x20)
};

// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// Size: 0x01 (Inherited: 0x00)
struct FGameplayModEvaluationChannelSettings {
	enum class EGameplayModEvaluationChannel Channel; // 0x00(0x01)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// Size: 0x1a8 (Inherited: 0x00)
struct FGameplayEffectModifierMagnitude {
	enum class EGameplayEffectMagnitudeCalculation MagnitudeCalculationType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FScalableFloat ScalableFloatMagnitude; // 0x08(0x20)
	struct FAttributeBasedFloat AttributeBasedMagnitude; // 0x28(0xf8)
	struct FCustomCalculationBasedFloat CustomMagnitude; // 0x120(0x78)
	struct FSetByCallerFloat SetByCallerMagnitude; // 0x198(0x10)
};

// ScriptStruct GameplayAbilities.SetByCallerFloat
// Size: 0x10 (Inherited: 0x00)
struct FSetByCallerFloat {
	struct FName DataName; // 0x00(0x08)
	struct FGameplayTag DataTag; // 0x08(0x08)
};

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// Size: 0x78 (Inherited: 0x00)
struct FCustomCalculationBasedFloat {
	struct UGameplayModMagnitudeCalculation* CalculationClassMagnitude; // 0x00(0x08)
	struct FScalableFloat Coefficient; // 0x08(0x20)
	struct FScalableFloat PreMultiplyAdditiveValue; // 0x28(0x20)
	struct FScalableFloat PostMultiplyAdditiveValue; // 0x48(0x20)
	struct FCurveTableRowHandle FinalLookupCurve; // 0x68(0x10)
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// Size: 0xf8 (Inherited: 0x00)
struct FAttributeBasedFloat {
	struct FScalableFloat Coefficient; // 0x00(0x20)
	struct FScalableFloat PreMultiplyAdditiveValue; // 0x20(0x20)
	struct FScalableFloat PostMultiplyAdditiveValue; // 0x40(0x20)
	struct FGameplayEffectAttributeCaptureDefinition BackingAttribute; // 0x60(0x40)
	struct FCurveTableRowHandle AttributeCurve; // 0xa0(0x10)
	enum class EAttributeBasedFloatCalculationType AttributeCalculationType; // 0xb0(0x01)
	enum class EGameplayModEvaluationChannel FinalChannel; // 0xb1(0x01)
	char UnknownData_B2[0x6]; // 0xb2(0x06)
	struct FGameplayTagContainer SourceTagFilter; // 0xb8(0x20)
	struct FGameplayTagContainer TargetTagFilter; // 0xd8(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// Size: 0x58 (Inherited: 0x00)
struct FGameplayEffectExecutionDefinition {
	struct UGameplayEffectExecutionCalculation* CalculationClass; // 0x00(0x08)
	struct FGameplayTagContainer PassedInTags; // 0x08(0x20)
	struct TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers; // 0x28(0x10)
	struct TArray<struct UGameplayEffect*> ConditionalGameplayEffectClasses; // 0x38(0x10)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x48(0x10)
};

// ScriptStruct GameplayAbilities.ConditionalGameplayEffect
// Size: 0x28 (Inherited: 0x00)
struct FConditionalGameplayEffect {
	struct UGameplayEffect* EffectClass; // 0x00(0x08)
	struct FGameplayTagContainer RequiredSourceTags; // 0x08(0x20)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// Size: 0x280 (Inherited: 0x00)
struct FGameplayEffectExecutionScopedModifierInfo {
	struct FGameplayEffectAttributeCaptureDefinition CapturedAttribute; // 0x00(0x40)
	struct FGameplayTag TransientAggregatorIdentifier; // 0x40(0x08)
	enum class EGameplayEffectScopedModifierAggregatorType AggregatorType; // 0x48(0x01)
	enum class EGameplayModOp ModifierOp; // 0x49(0x01)
	char UnknownData_4A[0x6]; // 0x4a(0x06)
	struct FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x50(0x1a8)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x1f8(0x01)
	char UnknownData_1F9[0x7]; // 0x1f9(0x07)
	struct FGameplayTagRequirements SourceTags; // 0x200(0x40)
	struct FGameplayTagRequirements TargetTags; // 0x240(0x40)
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// Size: 0x18 (Inherited: 0x00)
struct FGameplayEffectCustomExecutionOutput {
	struct TArray<struct FGameplayModifierEvaluatedData> OutputModifiers; // 0x00(0x10)
	char bTriggerConditionalGameplayEffects : 1; // 0x10(0x01)
	char bHandledStackCountManually : 1; // 0x10(0x01)
	char bHandledGameplayCuesManually : 1; // 0x10(0x01)
	char UnknownData_10_3 : 5; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// Size: 0x50 (Inherited: 0x00)
struct FGameplayModifierEvaluatedData {
	struct FGameplayAttribute Attribute; // 0x00(0x38)
	enum class EGameplayModOp ModifierOp; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	float Magnitude; // 0x3c(0x04)
	struct FActiveGameplayEffectHandle Handle; // 0x40(0x08)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool IsValid : 1; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// Size: 0xf8 (Inherited: 0x00)
struct FGameplayEffectCustomExecutionParameters {
	char UnknownData_0[0xf8]; // 0x00(0xf8)
};

// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMap
// Size: 0x20 (Inherited: 0x00)
struct FGameplayTagBlueprintPropertyMap {
	char UnknownData_0[0x10]; // 0x00(0x10)
	struct TArray<struct FGameplayTagBlueprintPropertyMapping> PropertyMappings; // 0x10(0x10)
};

// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMapping
// Size: 0x48 (Inherited: 0x00)
struct FGameplayTagBlueprintPropertyMapping {
	struct FGameplayTag TagToMap; // 0x00(0x08)
	FieldPathProperty PropertyToEdit; // 0x08(0x20)
	struct FName PropertyName; // 0x28(0x08)
	struct FGuid PropertyGuid; // 0x30(0x10)
	char UnknownData_40[0x8]; // 0x40(0x08)
};

// ScriptStruct GameplayAbilities.GameplayEffectContext
// Size: 0x70 (Inherited: 0x00)
struct FGameplayEffectContext {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FWeakObjectPtr<struct AActor> Instigator; // 0x08(0x08)
	struct FWeakObjectPtr<struct AActor> EffectCauser; // 0x10(0x08)
	struct FWeakObjectPtr<struct UGameplayAbility> AbilityCDO; // 0x18(0x08)
	struct FWeakObjectPtr<struct UGameplayAbility> AbilityInstanceNotReplicated; // 0x20(0x08)
	int32_t AbilityLevel; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FWeakObjectPtr<struct UObject> SourceObject; // 0x30(0x08)
	struct FWeakObjectPtr<struct UAbilitySystemComponent> InstigatorAbilitySystemComponent; // 0x38(0x08)
	struct TArray<struct FWeakObjectPtr<struct AActor>> Actors; // 0x40(0x10)
	char UnknownData_50[0x10]; // 0x50(0x10)
	struct FVector WorldOrigin; // 0x60(0x0c)
	char bHasWorldOrigin : 1; // 0x6c(0x01)
	char bReplicateSourceObject : 1; // 0x6c(0x01)
	char UnknownData_6C_2 : 6; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// Size: 0x50 (Inherited: 0x00)
struct FGameplayTagResponseTableEntry {
	struct FGameplayTagReponsePair Positive; // 0x00(0x28)
	struct FGameplayTagReponsePair Negative; // 0x28(0x28)
};

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// Size: 0x28 (Inherited: 0x00)
struct FGameplayTagReponsePair {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct UGameplayEffect* ResponseGameplayEffect; // 0x08(0x08)
	struct TArray<struct UGameplayEffect*> ResponseGameplayEffects; // 0x10(0x10)
	int32_t SoftCountCap; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

