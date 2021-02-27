// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {

	bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbc5890
	bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle HitResult, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbc5730
	bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbc55d0
	bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbc5470
	struct FGameplayEffectSpecHandle SetStackCountToMax(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc5370
	struct FGameplayEffectSpecHandle SetStackCount(struct FGameplayEffectSpecHandle SpecHandle, int32_t StackCount); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc5220
	struct FGameplayEffectSpecHandle SetDuration(struct FGameplayEffectSpecHandle SpecHandle, float DURATION); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc50d0
	void SendGameplayEventToActor(struct AActor* Actor, struct FGameplayTag EventTag, struct FGameplayEventData payload); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc4d70
	bool NotEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc4920
	struct FGameplayEffectSpecHandle MakeSpecHandle(struct UGameplayEffect* InGameplayEffect, struct AActor* InInstigator, struct AActor* InEffectCauser, float InLevel); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc4790
	struct FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, struct FGameplayEffectContextHandle EffectContext, struct FGameplayTag MatchedTagName, struct FGameplayTag OriginalTag, struct FGameplayTagContainer AggregatedSourceTags, struct FGameplayTagContainer AggregatedTargetTags, struct FVector Location, struct FVector Normal, struct AActor* Instigator, struct AActor* EffectCauser, struct UObject* SourceObject, struct UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, struct USceneComponent* TargetAttachComponent); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbc41b0
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(struct FGameplayTargetDataFilter Filter, struct AActor* FilterActor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc4020
	bool IsValid(struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc3dd0
	bool IsInstigatorLocallyControlledPlayer(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc3a80
	bool IsInstigatorLocallyControlled(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc3730
	bool HasHitResult(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc33e0
	struct FTransform GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbc3250
	struct FTransform GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbc30c0
	struct FVector GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbc2f50
	struct FVector GetOrigin(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbc2bf0
	float GetModifiedAttributeMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc2910
	struct FTransform GetInstigatorTransform(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbc2590
	struct AActor* GetInstigatorActor(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc2240
	struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle HitResult, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbc2040
	struct FHitResult GetHitResult(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc1c70
	bool GetGameplayCueEndLocationAndNormal(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector Location, struct FVector Normal); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbc1840
	bool GetGameplayCueDirection(struct AActor* TargetActor, struct FGameplayCueParameters Parameters, struct FVector Direction); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbc1460
	float GetFloatAttributeFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, bool bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbc1180
	float GetFloatAttributeBaseFromAbilitySystemComponent(struct UAbilitySystemComponent* AbilitySystemComponent, struct FGameplayAttribute Attribute, bool bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbc0ea0
	float GetFloatAttributeBase(struct AActor* Actor, struct FGameplayAttribute Attribute, bool bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbc0bc0
	float GetFloatAttribute(struct AActor* Actor, struct FGameplayAttribute Attribute, bool bSuccessfullyFoundAttribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbc08e0
	struct FGameplayEffectContextHandle GetEffectContext(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbc07d0
	int32_t GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbc06b0
	struct FString GetAttributeName(struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAttributeName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc0420
	struct TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbc0260
	struct TArray<struct AActor*> GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle TargetData); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbc00f0
	struct TArray<struct AActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbbff50
	int32_t GetActorCount(struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbfc00
	struct AActor* GetActorByIndex(struct FGameplayCueParameters Parameters, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbf870
	float GetActiveGameplayEffectTotalDuration(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbf7f0
	float GetActiveGameplayEffectStartTime(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbf770
	int32_t GetActiveGameplayEffectStackLimitCount(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbf6f0
	int32_t GetActiveGameplayEffectStackCount(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbf670
	float GetActiveGameplayEffectRemainingDuration(struct UObject* WorldContextObject, struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbf5a0
	float GetActiveGameplayEffectExpectedEndTime(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbf520
	struct FString GetActiveGameplayEffectDebugString(struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbf450
	struct UAbilitySystemComponent* GetAbilitySystemComponent(struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbf3d0
	void ForwardGameplayCueToTarget(struct TScriptInterface<None> TargetCueInterface, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbefe0
	struct FGameplayAbilityTargetDataHandle FilterTargetData(struct FGameplayAbilityTargetDataHandle TargetDataHandle, struct FGameplayTargetDataFilterHandle ActorFilterClass); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbbee10
	float EvaluateAttributeValueWithTagsAndBase(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer SourceTags, struct FGameplayTagContainer TargetTags, float BaseValue, bool bSuccess); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbbe9f0
	float EvaluateAttributeValueWithTags(struct UAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute Attribute, struct FGameplayTagContainer SourceTags, struct FGameplayTagContainer TargetTags, bool bSuccess); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbbe630
	bool EqualEqual_GameplayAttributeGameplayAttribute(struct FGameplayAttribute AttributeA, struct FGameplayAttribute AttributeB); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbe1e0
	void EffectContextSetOrigin(struct FGameplayEffectContextHandle EffectContext, struct FVector Origin); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbbe0b0
	bool EffectContextIsValid(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbdfc0
	bool EffectContextIsInstigatorLocallyControlled(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbded0
	bool EffectContextHasHitResult(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbdde0
	struct UObject* EffectContextGetSourceObject(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbdcf0
	struct AActor* EffectContextGetOriginalInstigatorActor(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbdc00
	struct FVector EffectContextGetOrigin(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbbdb00
	struct AActor* EffectContextGetInstigatorActor(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbda10
	struct FHitResult EffectContextGetHitResult(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbd8a0
	struct AActor* EffectContextGetEffectCauser(struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbd7b0
	void EffectContextAddHitResult(struct FGameplayEffectContextHandle EffectContext, struct FHitResult HitResult, bool bReset); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbd4a0
	bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle TargetData, int32_t Index, struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbbd300
	bool DoesGameplayCueMeetTagRequirements(struct FGameplayCueParameters Parameters, struct FGameplayTagRequirements SourceTagReqs, struct FGameplayTagRequirements TargetTagReqs); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbbce30
	struct FGameplayEffectSpecHandle CloneSpecHandle(struct AActor* InNewInstigator, struct AActor* InEffectCauser, struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbcca0
	void BreakGameplayCueParameters(struct FGameplayCueParameters Parameters, float NormalizedMagnitude, float RawMagnitude, struct FGameplayEffectContextHandle EffectContext, struct FGameplayTag MatchedTagName, struct FGameplayTag OriginalTag, struct FGameplayTagContainer AggregatedSourceTags, struct FGameplayTagContainer AggregatedTargetTags, struct FVector Location, struct FVector Normal, struct AActor* Instigator, struct AActor* EffectCauser, struct UObject* SourceObject, struct UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, struct USceneComponent* TargetAttachComponent); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xbbc430
	struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag DataTag, float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbc2a0
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(struct FGameplayEffectSpecHandle SpecHandle, struct FName DataName, float Magnitude); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbc110
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(struct FGameplayAbilityTargetDataHandle TargetHandle, struct FGameplayAbilityTargetDataHandle HandleToAdd); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbbbf10
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbbd80
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(struct FGameplayEffectSpecHandle SpecHandle, struct UGameplayEffect* LinkedGameplayEffect); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbbc30
	struct FGameplayEffectSpecHandle AddGrantedTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbba90
	struct FGameplayEffectSpecHandle AddGrantedTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbb940
	struct FGameplayEffectSpecHandle AddAssetTags(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTagContainer NewGameplayTags); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbb7a0
	struct FGameplayEffectSpecHandle AddAssetTag(struct FGameplayEffectSpecHandle SpecHandle, struct FGameplayTag NewGameplayTag); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbbb650
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo SourceLocation, struct FGameplayAbilityTargetingLocationInfo TargetLocation); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbbb4a0
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult HitResult); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbbb310
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(struct TArray<struct AActor*> ActorArray, bool OneTargetPerHandle); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xbbb1f0
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(struct AActor* Actor); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xbbb130
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1478 (Inherited: 0x1f0)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char UnknownData_1F0[0x10]; // 0x1f0(0x10)
	struct TArray<struct FAttributeDefaults> DefaultStartingData; // 0x200(0x10)
	struct TArray<struct UAttributeSet*> SpawnedAttributes; // 0x210(0x10)
	struct FName AffectedAnimInstanceTag; // 0x220(0x08)
	char UnknownData_228[0x1b8]; // 0x228(0x1b8)
	float OutgoingDuration; // 0x3e0(0x04)
	float IncomingDuration; // 0x3e4(0x04)
	char UnknownData_3E8[0x20]; // 0x3e8(0x20)
	struct TArray<struct FString> ClientDebugStrings; // 0x408(0x10)
	struct TArray<struct FString> ServerDebugStrings; // 0x418(0x10)
	char UnknownData_428[0x60]; // 0x428(0x60)
	char UnknownData_488_0 : 7; // 0x488(0x01)
	bool UserAbilityActivationInhibited : 1; // 0x488(0x01)
	char UnknownData_489_0 : 7; // 0x489(0x01)
	bool ReplicationProxyEnabled : 1; // 0x489(0x01)
	char UnknownData_48A_0 : 7; // 0x48a(0x01)
	bool bSuppressGrantAbility : 1; // 0x48a(0x01)
	char UnknownData_48B_0 : 7; // 0x48b(0x01)
	bool bSuppressGameplayCues : 1; // 0x48b(0x01)
	char UnknownData_48C[0x4]; // 0x48c(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> SpawnedTargetActors; // 0x490(0x10)
	char UnknownData_4A0[0x28]; // 0x4a0(0x28)
	struct AActor* OwnerActor; // 0x4c8(0x08)
	struct AActor* AvatarActor; // 0x4d0(0x08)
	char UnknownData_4D8[0x10]; // 0x4d8(0x10)
	struct FGameplayAbilitySpecContainer ActivatableAbilities; // 0x4e8(0x120)
	char UnknownData_608[0x30]; // 0x608(0x30)
	struct TArray<struct UGameplayAbility*> AllReplicatedInstancedAbilities; // 0x638(0x10)
	char UnknownData_648[0x1d0]; // 0x648(0x1d0)
	struct FGameplayAbilityRepAnimMontageCombined RepAnimMontageCombinedInfo; // 0x818(0x68)
	char UnknownData_880_0 : 7; // 0x880(0x01)
	bool bCachedIsNetSimulated : 1; // 0x880(0x01)
	char UnknownData_881_0 : 7; // 0x881(0x01)
	bool bPendingMontageRep : 1; // 0x881(0x01)
	char UnknownData_882[0x6]; // 0x882(0x06)
	struct FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo; // 0x888(0x98)
	char UnknownData_920[0xa0]; // 0x920(0xa0)
	struct FActiveGameplayEffectsContainer ActiveGameplayEffects; // 0x9c0(0x480)
	struct FActiveGameplayCueContainer ActiveGameplayCues; // 0xe40(0x128)
	struct FActiveGameplayCueContainer MinimalReplicationGameplayCues; // 0xf68(0x128)
	char UnknownData_1090[0x128]; // 0x1090(0x128)
	struct TArray<enum class None> BlockedAbilityBindings; // 0x11b8(0x10)
	char UnknownData_11C8[0x128]; // 0x11c8(0x128)
	struct FMinimalReplicationTagCountMap MinimalReplicationTags; // 0x12f0(0x60)
	char UnknownData_1350[0x10]; // 0x1350(0x10)
	struct FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap; // 0x1360(0x118)

	bool TryActivateAbilityByClass(struct UGameplayAbility* InAbilityToActivate, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass // (Final|Native|Public|BlueprintCallable) // @ game+0xbce970
	bool TryActivateAbilitiesByTag(struct FGameplayTagContainer GameplayTagContainer, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbce860
	void TargetConfirm(); // Function GameplayAbilities.AbilitySystemComponent.TargetConfirm // (Native|Public|BlueprintCallable) // @ game+0xbce840
	void TargetCancel(); // Function GameplayAbilities.AbilitySystemComponent.TargetCancel // (Native|Public|BlueprintCallable) // @ game+0xbce820
	void SetUserAbilityActivationInhibited(bool NewInhibit); // Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited // (Native|Public|BlueprintCallable) // @ game+0xbce790
	void SetActiveGameplayEffectLevelUsingQuery(struct FGameplayEffectQuery Query, int32_t NewLevel); // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xbce690
	void SetActiveGameplayEffectLevel(struct FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel); // Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xbce5c0
	void ServerTryActivateAbilityWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xbce090
	void ServerTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xbcdf30
	void ServerSetReplicatedTargetDataCancelled(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbcdda0
	void ServerSetReplicatedTargetData(struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, struct FGameplayTag ApplicationTag, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbcdb00
	void ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey, struct FVector_NetQuantize100 VectorPayload); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbcd8c0
	void ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FPredictionKey CurrentPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbcd6f0
	void ServerSetInputReleased(struct FGameplayAbilitySpecHandle AbilityHandle); // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbcd640
	void ServerSetInputPressed(struct FGameplayAbilitySpecHandle AbilityHandle); // Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbcd590
	void ServerPrintDebug_RequestWithStrings(struct TArray<struct FString> Strings); // Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbcd4a0
	void ServerPrintDebug_Request(); // Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbcd450
	void ServerEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xbcd2b0
	void ServerCurrentMontageSetPlayRate(struct UAnimMontage* ClientAnimMontage, float InPlayRate); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xbcd1b0
	void ServerCurrentMontageSetNextSectionName(struct UAnimMontage* ClientAnimMontage, float ClientPosition, struct FName SectionName, struct FName NextSectionName); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xbcd030
	void ServerCurrentMontageJumpToSectionName(struct UAnimMontage* ClientAnimMontage, struct FName SectionName); // Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xbccf30
	void ServerCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xbcce10
	void ServerAbilityRPCBatch(struct FServerAbilityRPCBatch BatchInfo); // Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xbccc40
	void RemoveActiveGameplayEffectBySourceEffect(struct UGameplayEffect* GameplayEffect, struct UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xbccb40
	bool RemoveActiveGameplayEffect(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xbcca70
	int32_t RemoveActiveEffectsWithTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags // (Final|Native|Public|BlueprintCallable) // @ game+0xbcc990
	int32_t RemoveActiveEffectsWithSourceTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags // (Final|Native|Public|BlueprintCallable) // @ game+0xbcc8b0
	int32_t RemoveActiveEffectsWithGrantedTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags // (Final|Native|Public|BlueprintCallable) // @ game+0xbcc7d0
	int32_t RemoveActiveEffectsWithAppliedTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags // (Final|Native|Public|BlueprintCallable) // @ game+0xbcc7d0
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString // (Native|Public) // @ game+0xbcc7b0
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage // (Native|Protected) // @ game+0xbcc790
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor // (Final|Native|Public) // @ game+0xbcc770
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString // (Native|Public) // @ game+0xbcc750
	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities // (Native|Protected) // @ game+0xbcc730
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xbcc2c0
	void NetMulticast_InvokeGameplayCuesExecuted(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted // (Net|Native|Event|NetMulticast|Public) // @ game+0xbcc0d0
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(struct FGameplayTagContainer GameplayCueTags, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xbcbc60
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xbcb870
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec // (Net|Native|Event|NetMulticast|Public) // @ game+0xbcb6d0
	void NetMulticast_InvokeGameplayCueExecuted(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted // (Net|Native|Event|NetMulticast|Public) // @ game+0xbcb550
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xbcad70
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC Spec, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec // (Net|Native|Event|NetMulticast|Public) // @ game+0xbcabf0
	void NetMulticast_InvokeGameplayCueAdded_WithParams(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams // (Net|Native|Event|NetMulticast|Public) // @ game+0xbcb160
	void NetMulticast_InvokeGameplayCueAdded(struct FGameplayTag GameplayCueTag, struct FPredictionKey PredictionKey, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded // (Net|Native|Event|NetMulticast|Public) // @ game+0xbcaa70
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbca860
	struct FGameplayEffectContextHandle MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbca7e0
	void K2_InitStats(struct UAttributeSet* Attributes, struct UDataTable* DataTable); // Function GameplayAbilities.AbilitySystemComponent.K2_InitStats // (Final|Native|Public|BlueprintCallable) // @ game+0xbca720
	bool IsGameplayCueActive(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbca680
	bool GetUserAbilityActivationInhibited(); // Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbca650
	float GetGameplayEffectMagnitude(struct FActiveGameplayEffectHandle Handle, struct FGameplayAttribute Attribute); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbca3c0
	int32_t GetGameplayEffectCount(struct UGameplayEffect* SourceGameplayEffect, struct UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xbca2c0
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(struct FGameplayTagContainer Tags); // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xbca1a0
	struct TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(struct FGameplayEffectQuery Query); // Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0xbca0a0
	void ClientTryActivateAbility(struct FGameplayAbilitySpecHandle AbilityToActivate); // Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbca020
	void ClientSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey, struct FVector_NetQuantize100 VectorPayload); // Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEventWithPayload // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xbc9eb0
	void ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, struct FGameplayAbilitySpecHandle AbilityHandle, struct FPredictionKey AbilityOriginalPredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xbc9d80
	void ClientPrintDebug_Response(struct TArray<struct FString> Strings, int32_t GameFlags); // Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xbc9c80
	void ClientEndAbility(struct FGameplayAbilitySpecHandle AbilityToEnd, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbc9b90
	void ClientCancelAbility(struct FGameplayAbilitySpecHandle AbilityToCancel, struct FGameplayAbilityActivationInfo ActivationInfo); // Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbc9aa0
	void ClientActivateAbilitySucceedWithEventData(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey, struct FGameplayEventData TriggerEventData); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbc96f0
	void ClientActivateAbilitySucceed(struct FGameplayAbilitySpecHandle AbilityToActivate, struct FPredictionKey PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbc9600
	void ClientActivateAbilityFailed(struct FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey); // Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbc9530
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(struct UGameplayEffect* GameplayEffectClass, struct UAbilitySystemComponent* Target, float Level, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget // (Final|Native|Public|BlueprintCallable) // @ game+0xbc9380
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(struct UGameplayEffect* GameplayEffectClass, float Level, struct FGameplayEffectContextHandle EffectContext); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf // (Final|Native|Public|BlueprintCallable) // @ game+0xbc91f0
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle SpecHandle, struct UAbilitySystemComponent* Target); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbc90d0
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle SpecHandle); // Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbc8ff0
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	void AbilityAbilityKey__DelegateSignature(int32_t InputID); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x3e0 (Inherited: 0x3e0)
struct AAbilitySystemDebugHUD : AHUD {
};

// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x260 (Inherited: 0x28)
struct UAbilitySystemGlobals : UObject {
	struct FSoftClassPath AbilitySystemGlobalsClassName; // 0x28(0x18)
	char UnknownData_40[0x28]; // 0x40(0x28)
	struct FGameplayTag ActivateFailIsDeadTag; // 0x68(0x08)
	struct FName ActivateFailIsDeadName; // 0x70(0x08)
	struct FGameplayTag ActivateFailCooldownTag; // 0x78(0x08)
	struct FName ActivateFailCooldownName; // 0x80(0x08)
	struct FGameplayTag ActivateFailCostTag; // 0x88(0x08)
	struct FName ActivateFailCostName; // 0x90(0x08)
	struct FGameplayTag ActivateFailTagsBlockedTag; // 0x98(0x08)
	struct FName ActivateFailTagsBlockedName; // 0xa0(0x08)
	struct FGameplayTag ActivateFailTagsMissingTag; // 0xa8(0x08)
	struct FName ActivateFailTagsMissingName; // 0xb0(0x08)
	struct FGameplayTag ActivateFailNetworkingTag; // 0xb8(0x08)
	struct FName ActivateFailNetworkingName; // 0xc0(0x08)
	int32_t MinimalReplicationTagCountBits; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct FNetSerializeScriptStructCache TargetDataStructCache; // 0xd0(0x10)
	char UnknownData_E0_0 : 7; // 0xe0(0x01)
	bool bAllowGameplayModEvaluationChannels : 1; // 0xe0(0x01)
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0xe1(0x01)
	char UnknownData_E2[0x2]; // 0xe2(0x02)
	struct FName GameplayModEvaluationChannelAliases[0xa]; // 0xe4(0x50)
	char UnknownData_134[0x4]; // 0x134(0x04)
	struct FSoftObjectPath GlobalCurveTableName; // 0x138(0x18)
	struct UCurveTable* GlobalCurveTable; // 0x150(0x08)
	struct FSoftObjectPath GlobalAttributeMetaDataTableName; // 0x158(0x18)
	struct UDataTable* GlobalAttributeMetaDataTable; // 0x170(0x08)
	struct FSoftObjectPath GlobalAttributeSetDefaultsTableName; // 0x178(0x18)
	struct TArray<struct FSoftObjectPath> GlobalAttributeSetDefaultsTableNames; // 0x190(0x10)
	struct TArray<struct UCurveTable*> GlobalAttributeDefaultsTables; // 0x1a0(0x10)
	struct FSoftObjectPath GlobalGameplayCueManagerClass; // 0x1b0(0x18)
	struct FSoftObjectPath GlobalGameplayCueManagerName; // 0x1c8(0x18)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x1e0(0x10)
	struct FSoftObjectPath GameplayTagResponseTableName; // 0x1f0(0x18)
	struct UGameplayTagReponseTable* GameplayTagResponseTable; // 0x208(0x08)
	char UnknownData_210_0 : 7; // 0x210(0x01)
	bool PredictTargetGameplayEffects : 1; // 0x210(0x01)
	char UnknownData_211[0x7]; // 0x211(0x07)
	struct UGameplayCueManager* GlobalGameplayCueManager; // 0x218(0x08)
	char UnknownData_220[0x40]; // 0x220(0x40)

	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts // (Exec|Native|Public) // @ game+0xbd3aa0
	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns // (Exec|Native|Public) // @ game+0xbd3a80
};

// Class GameplayAbilities.AbilitySystemInterface
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemInterface : UInterface {
};

// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// Size: 0x28 (Inherited: 0x28)
struct UAbilitySystemReplicationProxyInterface : UInterface {
};

// Class GameplayAbilities.AttributeSet
// Size: 0x30 (Inherited: 0x28)
struct UAttributeSet : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class GameplayAbilities.AbilitySystemTestAttributeSet
// Size: 0x70 (Inherited: 0x30)
struct UAbilitySystemTestAttributeSet : UAttributeSet {
	float MaxHealth; // 0x30(0x04)
	float Health; // 0x34(0x04)
	float Mana; // 0x38(0x04)
	float MaxMana; // 0x3c(0x04)
	float Damage; // 0x40(0x04)
	float SpellDamage; // 0x44(0x04)
	float PhysicalDamage; // 0x48(0x04)
	float CritChance; // 0x4c(0x04)
	float CritMultiplier; // 0x50(0x04)
	float ArmorDamageReduction; // 0x54(0x04)
	float DodgeChance; // 0x58(0x04)
	float LifeSteal; // 0x5c(0x04)
	float Strength; // 0x60(0x04)
	float StackingAttribute1; // 0x64(0x04)
	float StackingAttribute2; // 0x68(0x04)
	float NoStackAttribute; // 0x6c(0x04)
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x398 (Inherited: 0x378)
struct AAbilitySystemTestPawn : ADefaultPawn {
	char UnknownData_378[0x18]; // 0x378(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x390(0x08)
};

// Class GameplayAbilities.AbilityTask
// Size: 0x80 (Inherited: 0x68)
struct UAbilityTask : UGameplayTask {
	struct UGameplayAbility* Ability; // 0x68(0x08)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x70(0x08)
	char UnknownData_78[0x8]; // 0x78(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	struct FName ForceName; // 0x80(0x08)
	enum class ERootMotionFinishVelocityMode FinishVelocityMode; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	struct FVector FinishSetVelocity; // 0x8c(0x0c)
	float FinishClampVelocity; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct UCharacterMovementComponent* MovementComponent; // 0xa0(0x08)
	char UnknownData_A8[0x10]; // 0xa8(0x10)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0xe8 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xb8(0x10)
	struct FVector WorldDirection; // 0xc8(0x0c)
	float Strength; // 0xd4(0x04)
	float DURATION; // 0xd8(0x04)
	char UnknownData_DC_0 : 7; // 0xdc(0x01)
	bool bIsAdditive : 1; // 0xdc(0x01)
	char UnknownData_DD[0x3]; // 0xdd(0x03)
	struct UCurveFloat* StrengthOverTime; // 0xe0(0x08)

	struct UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector WorldDirection, float Strength, float DURATION, bool bIsAdditive, struct UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbd1ce0
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x110 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnLanded; // 0xc8(0x10)
	struct FRotator Rotation; // 0xd8(0x0c)
	float Distance; // 0xe4(0x04)
	float Height; // 0xe8(0x04)
	float DURATION; // 0xec(0x04)
	float MinimumLandedTriggerTime; // 0xf0(0x04)
	char UnknownData_F4_0 : 7; // 0xf4(0x01)
	bool bFinishOnLanded : 1; // 0xf4(0x01)
	char UnknownData_F5[0x3]; // 0xf5(0x03)
	struct UCurveVector* PathOffsetCurve; // 0xf8(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x100(0x08)
	char UnknownData_108[0x8]; // 0x108(0x08)

	void OnLandedCallback(struct FHitResult Hit); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback // (Final|Native|Public|HasOutParms) // @ game+0xbd3860
	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish // (Final|Native|Public|BlueprintCallable) // @ game+0xbd3680
	struct UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FRotator Rotation, float Distance, float Height, float DURATION, float MinimumLandedTriggerTime, bool bFinishOnLanded, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbd1fb0
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x130 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinished; // 0xb8(0x10)
	char UnknownData_C8[0x8]; // 0xc8(0x08)
	struct FVector StartLocation; // 0xd0(0x0c)
	struct FVector TargetLocation; // 0xdc(0x0c)
	struct AActor* TargetActor; // 0xe8(0x08)
	struct FVector TargetLocationOffset; // 0xf0(0x0c)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment; // 0xfc(0x01)
	char UnknownData_FD[0x3]; // 0xfd(0x03)
	float DURATION; // 0x100(0x04)
	char UnknownData_104_0 : 7; // 0x104(0x01)
	bool bDisableDestinationReachedInterrupt : 1; // 0x104(0x01)
	char UnknownData_105_0 : 7; // 0x105(0x01)
	bool bSetNewMovementMode : 1; // 0x105(0x01)
	enum class EMovementMode NewMovementMode; // 0x106(0x01)
	char UnknownData_107_0 : 7; // 0x107(0x01)
	bool bRestrictSpeedToExpected : 1; // 0x107(0x01)
	struct UCurveVector* PathOffsetCurve; // 0x108(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x110(0x08)
	struct UCurveFloat* TargetLerpSpeedHorizontalCurve; // 0x118(0x08)
	struct UCurveFloat* TargetLerpSpeedVerticalCurve; // 0x120(0x08)
	char UnknownData_128[0x8]; // 0x128(0x08)

	void OnTargetActorSwapped(struct AActor* OriginalTarget, struct AActor* NewTarget); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped // (Final|Native|Public) // @ game+0xbd39c0
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation // (Final|Native|Protected) // @ game+0xbd39a0
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, struct FVector TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float DURATION, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbd2b00
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct AActor* TargetActor, struct FVector TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float DURATION, struct UCurveFloat* TargetLerpSpeedHorizontal, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, struct UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbd2340
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x108 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnTimedOut; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnTimedOutAndDestinationReached; // 0xc8(0x10)
	struct FVector StartLocation; // 0xd8(0x0c)
	struct FVector TargetLocation; // 0xe4(0x0c)
	float DURATION; // 0xf0(0x04)
	char UnknownData_F4_0 : 7; // 0xf4(0x01)
	bool bSetNewMovementMode : 1; // 0xf4(0x01)
	enum class EMovementMode NewMovementMode; // 0xf5(0x01)
	char UnknownData_F6_0 : 7; // 0xf6(0x01)
	bool bRestrictSpeedToExpected : 1; // 0xf6(0x01)
	char UnknownData_F7[0x1]; // 0xf7(0x01)
	struct UCurveVector* PathOffsetCurve; // 0xf8(0x08)
	char UnknownData_100[0x8]; // 0x100(0x08)

	struct UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector TargetLocation, float DURATION, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbd27e0
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x110 (Inherited: 0xb8)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xb8(0x10)
	struct FVector Location; // 0xc8(0x0c)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
	struct AActor* LocationActor; // 0xd8(0x08)
	float Strength; // 0xe0(0x04)
	float DURATION; // 0xe4(0x04)
	float Radius; // 0xe8(0x04)
	char UnknownData_EC_0 : 7; // 0xec(0x01)
	bool bIsPush : 1; // 0xec(0x01)
	char UnknownData_ED_0 : 7; // 0xed(0x01)
	bool bIsAdditive : 1; // 0xed(0x01)
	char UnknownData_EE_0 : 7; // 0xee(0x01)
	bool bNoZForce : 1; // 0xee(0x01)
	char UnknownData_EF[0x1]; // 0xef(0x01)
	struct UCurveFloat* StrengthDistanceFalloff; // 0xf0(0x08)
	struct UCurveFloat* StrengthOverTime; // 0xf8(0x08)
	char UnknownData_100_0 : 7; // 0x100(0x01)
	bool bUseFixedWorldDirection : 1; // 0x100(0x01)
	char UnknownData_101[0x3]; // 0x101(0x03)
	struct FRotator FixedWorldDirection; // 0x104(0x0c)

	struct UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, struct AActor* LocationActor, float Strength, float DURATION, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, struct UCurveFloat* StrengthDistanceFalloff, struct UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, struct FRotator FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbd31c0
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xc8 (Inherited: 0x80)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastInlineDelegate OnTargetLocationReached; // 0x80(0x10)
	char UnknownData_90[0x4]; // 0x90(0x04)
	struct FVector StartLocation; // 0x94(0x0c)
	struct FVector TargetLocation; // 0xa0(0x0c)
	float DurationOfMovement; // 0xac(0x04)
	char UnknownData_B0[0x8]; // 0xb0(0x08)
	struct UCurveFloat* LerpCurve; // 0xb8(0x08)
	struct UCurveVector* LerpCurveVector; // 0xc0(0x08)

	struct UAbilityTask_MoveToLocation* MoveToLocation(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, float DURATION, struct UCurveFloat* OptionalInterpolationCurve, struct UCurveVector* OptionalVectorInterpolationCurve); // Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbd36a0
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastInlineDelegate OnSync; // 0x80(0x10)
	char UnknownData_90[0x8]; // 0x90(0x08)

	struct UAbilityTask_NetworkSyncPoint* WaitNetSync(struct UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd91c0
	void OnSignalCallback(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback // (Final|Native|Public) // @ game+0xbd6930
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x108 (Inherited: 0x80)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastInlineDelegate OnCompleted; // 0x80(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x90(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnCancelled; // 0xb0(0x10)
	char UnknownData_C0[0x28]; // 0xc0(0x28)
	struct UAnimMontage* MontageToPlay; // 0xe8(0x08)
	float Rate; // 0xf0(0x04)
	struct FName StartSection; // 0xf4(0x08)
	float AnimRootMotionTranslationScale; // 0xfc(0x04)
	char UnknownData_100_0 : 7; // 0x100(0x01)
	bool bStopWhenAbilityEnds : 1; // 0x100(0x01)
	char UnknownData_101[0x7]; // 0x101(0x07)

	void OnMontageInterrupted(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted // (Final|Native|Public) // @ game+0xbd6910
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded // (Final|Native|Public) // @ game+0xbd6840
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut // (Final|Native|Public) // @ game+0xbd6770
	struct UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct UAnimMontage* MontageToPlay, float Rate, struct FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd5f80
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastInlineDelegate OnPerformAction; // 0x80(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x90(0x10)
	char UnknownData_A0[0x18]; // 0xa0(0x18)

	struct UAbilityTask_Repeat* RepeatAction(struct UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6950
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xc8 (Inherited: 0x80)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastInlineDelegate Success; // 0x80(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x90(0x10)
	char UnknownData_A0[0x28]; // 0xa0(0x28)

	struct UAbilityTask_SpawnActor* SpawnActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6a50
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor // (Final|Native|Public|BlueprintCallable) // @ game+0xbd6170
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct AActor* Class, struct AActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbd5c80
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastInlineDelegate OnStateEnded; // 0x80(0x10)
	struct FMulticastInlineDelegate OnStateInterrupted; // 0x90(0x10)
	char UnknownData_A0[0x18]; // 0xa0(0x18)

	struct UAbilityTask_StartAbilityState* StartAbilityState(struct UGameplayAbility* OwningAbility, struct FName StateName, bool bEndCurrentState); // Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6c00
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastInlineDelegate TimeElapsed; // 0x80(0x10)
	char UnknownData_90[0x18]; // 0x90(0x18)

	struct UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* TargetActor, struct FName TaskInstanceName, float DURATION); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6e40
	struct UAbilityTask_VisualizeTargeting* VisualizeTargeting(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct FName TaskInstanceName, float DURATION); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6d00
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor // (Final|Native|Public|BlueprintCallable) // @ game+0xbd6320
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbd5e70
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x138 (Inherited: 0x80)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastInlineDelegate OnActivate; // 0x80(0x10)
	char UnknownData_90[0xa8]; // 0x90(0xa8)

	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd7360
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd7540
	struct UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd71d0
	void OnAbilityActivate(struct UGameplayAbility* ActivatedAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate // (Final|Native|Public) // @ game+0xbd63e0
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0xf8 (Inherited: 0x80)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastInlineDelegate OnCommit; // 0x80(0x10)
	char UnknownData_90[0x68]; // 0x90(0x68)

	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd7830
	struct UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(struct UGameplayAbility* OwningAbility, struct FGameplayTag WithTag, struct FGameplayTag WithoutTage, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd7700
	void OnAbilityCommit(struct UGameplayAbility* ActivatedAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit // (Final|Native|Public) // @ game+0xbd6460
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xf8 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	char UnknownData_90[0x60]; // 0x90(0x60)
	struct UAbilitySystemComponent* ExternalOwner; // 0xf0(0x08)

	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute InAttribute, struct FGameplayTag InWithTag, struct FGameplayTag InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd86b0
	struct UAbilityTask_WaitAttributeChange* WaitForAttributeChange(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, struct FGameplayTag WithSrcTag, struct FGameplayTag WithoutSrcTag, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd79a0
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x140 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	char UnknownData_90[0xa8]; // 0x90(0xa8)
	struct UAbilitySystemComponent* ExternalOwner; // 0x138(0x08)

	struct UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute AttributeNumerator, struct FGameplayAttribute AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd7d30
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xf0 (Inherited: 0x80)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	char UnknownData_90[0x58]; // 0x90(0x58)
	struct UAbilitySystemComponent* ExternalOwner; // 0xe8(0x08)

	struct UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd8310
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastInlineDelegate OnCancel; // 0x80(0x10)
	char UnknownData_90[0x8]; // 0x90(0x08)

	struct UAbilityTask_WaitCancel* WaitCancel(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6f80
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback // (Final|Native|Public) // @ game+0xbd6710
	void OnCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback // (Final|Native|Public) // @ game+0xbd6630
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastInlineDelegate OnConfirm; // 0x80(0x10)
	char UnknownData_90[0x10]; // 0x90(0x10)

	struct UAbilityTask_WaitConfirm* WaitConfirm(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd7000
	void OnConfirmCallback(struct UGameplayAbility* InAbility); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback // (Final|Native|Public) // @ game+0xbd6670
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastInlineDelegate OnConfirm; // 0x80(0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x90(0x10)
	char UnknownData_A0[0x8]; // 0xa0(0x08)

	struct UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd7080
	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback // (Final|Native|Public) // @ game+0xbd6750
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback // (Final|Native|Public) // @ game+0xbd6730
	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback // (Final|Native|Public) // @ game+0xbd66f0
	void OnCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback // (Final|Native|Public) // @ game+0xbd6650
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0x98 (Inherited: 0x80)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastInlineDelegate OnFinish; // 0x80(0x10)
	char UnknownData_90[0x8]; // 0x90(0x08)

	struct UAbilityTask_WaitDelay* WaitDelay(struct UGameplayAbility* OwningAbility, float Time); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd7100
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1b8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char UnknownData_80[0x128]; // 0x80(0x128)
	struct UAbilitySystemComponent* ExternalOwner; // 0x1a8(0x08)
	char UnknownData_1B0[0x8]; // 0x1b0(0x08)

	void OnApplyGameplayEffectCallback(struct UAbilitySystemComponent* Target, struct FGameplayEffectSpec SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback // (Final|Native|Public|HasOutParms) // @ game+0xbd64e0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastInlineDelegate OnApplied; // 0x1b8(0x10)
	char UnknownData_1C8[0x10]; // 0x1c8(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd8ea0
	struct UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd8af0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1d8 (Inherited: 0x1b8)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastInlineDelegate OnApplied; // 0x1b8(0x10)
	char UnknownData_1C8[0x10]; // 0x1c8(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbe0100
	struct UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle TargetFilter, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbdfd50
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x128 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastInlineDelegate Blocked; // 0x80(0x10)
	char UnknownData_90[0x88]; // 0x90(0x88)
	struct UAbilitySystemComponent* ExternalOwner; // 0x118(0x08)
	char UnknownData_120[0x8]; // 0x120(0x08)

	struct UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbe0420
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc0 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastInlineDelegate OnRemoved; // 0x80(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x90(0x10)
	char UnknownData_A0[0x20]; // 0xa0(0x20)

	struct UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbdfb30
	void OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo InGameplayEffectRemovalInfo); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved // (Final|Native|Public|HasOutParms) // @ game+0xbdeda0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xb8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	struct FMulticastInlineDelegate InvalidHandle; // 0x90(0x10)
	char UnknownData_A0[0x18]; // 0xa0(0x18)

	struct UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbdfc00
	void OnGameplayEffectStackChange(struct FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange // (Final|Native|Public) // @ game+0xbdee80
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xb0 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastInlineDelegate EventReceived; // 0x80(0x10)
	char UnknownData_90[0x8]; // 0x90(0x08)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x98(0x08)
	char UnknownData_A0[0x10]; // 0xa0(0x10)

	struct UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(struct UGameplayAbility* OwningAbility, struct FGameplayTag EventTag, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbe06d0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char UnknownData_80[0x10]; // 0x80(0x10)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x90(0x08)
	char UnknownData_98[0x10]; // 0x98(0x10)

	void GameplayTagCallback(struct FGameplayTag Tag, int32_t NewCount); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback // (Native|Public) // @ game+0xbdd6c0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xb8 (Inherited: 0xa8)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastInlineDelegate Added; // 0xa8(0x10)

	struct UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbe0860
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xb8 (Inherited: 0xa8)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastInlineDelegate Removed; // 0xa8(0x10)

	struct UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbe0990
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastInlineDelegate OnPress; // 0x80(0x10)
	char UnknownData_90[0x10]; // 0x90(0x10)

	struct UAbilityTask_WaitInputPress* WaitInputPress(struct UGameplayAbility* OwningAbility, bool bTestAlreadyPressed); // Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbe0ac0
	void OnPressCallback(); // Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback // (Final|Native|Public) // @ game+0xbdf2c0
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastInlineDelegate OnRelease; // 0x80(0x10)
	char UnknownData_90[0x10]; // 0x90(0x10)

	struct UAbilityTask_WaitInputRelease* WaitInputRelease(struct UGameplayAbility* OwningAbility, bool bTestAlreadyReleased); // Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbe0b80
	void OnReleaseCallback(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback // (Final|Native|Public) // @ game+0xbdf2e0
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa0 (Inherited: 0x80)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastInlineDelegate OnChange; // 0x80(0x10)
	char UnknownData_90[0x10]; // 0x90(0x10)

	void OnMovementModeChange(struct Acharacter* character, enum class EMovementMode PrevMovementMode, enum class None PreviousCustomMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // (Final|Native|Public) // @ game+0xbdf1c0
	struct UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(struct UGameplayAbility* OwningAbility, enum class EMovementMode NewMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbdd320
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x90 (Inherited: 0x80)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastInlineDelegate OnOverlap; // 0x80(0x10)

	struct UAbilityTask_WaitOverlap* WaitForOverlap(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbdfcd0
	void OnHitCallback(struct UPrimitiveComponent* HitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xbdef90
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xd0 (Inherited: 0x80)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastInlineDelegate ValidData; // 0x80(0x10)
	struct FMulticastInlineDelegate Cancelled; // 0x90(0x10)
	struct FMulticastInlineDelegate InitialData; // 0xa0(0x10)
	struct AGameplayAbilityTargetActor* TargetClass; // 0xb0(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xb8(0x08)
	char UnknownData_C0[0x10]; // 0xc0(0x10)

	struct UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* TargetActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbe0d70
	struct UAbilityTask_WaitTargetData* WaitTargetData(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* Class); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbe0c40
	void OnTargetDataReplicatedCancelledCallback(); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback // (Final|Native|Public) // @ game+0xbdf6a0
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle Data, struct FGameplayTag ActivationTag); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback // (Final|Native|Public|HasOutParms) // @ game+0xbdf540
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle Data); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback // (Final|Native|Public|HasOutParms) // @ game+0xbdf420
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle Data); // Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback // (Final|Native|Public|HasOutParms) // @ game+0xbdf300
	void FinishSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor // (Final|Native|Public|BlueprintCallable) // @ game+0xbdd600
	bool BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* Class, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbdd0c0
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xa8 (Inherited: 0x80)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastInlineDelegate OnVelocityChage; // 0x80(0x10)
	struct UMovementComponent* CachedMovementComponent; // 0x90(0x08)
	char UnknownData_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(struct UGameplayAbility* OwningAbility, struct FVector Direction, float MinimumMagnitude); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xbdd3e0
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x410 (Inherited: 0x28)
struct UGameplayAbility : UObject {
	char UnknownData_28[0x80]; // 0x28(0x80)
	struct FGameplayTagContainer AbilityTags; // 0xa8(0x20)
	char UnknownData_C8_0 : 7; // 0xc8(0x01)
	bool bReplicateInputDirectly : 1; // 0xc8(0x01)
	char UnknownData_C9_0 : 7; // 0xc9(0x01)
	bool RemoteInstanceEnded : 1; // 0xc9(0x01)
	char UnknownData_CA[0x4]; // 0xca(0x04)
	enum class EGameplayAbilityReplicationPolicy ReplicationPolicy; // 0xce(0x01)
	enum class EGameplayAbilityInstancingPolicy InstancingPolicy; // 0xcf(0x01)
	char UnknownData_D0_0 : 7; // 0xd0(0x01)
	bool bServerRespectsRemoteAbilityCancellation : 1; // 0xd0(0x01)
	char UnknownData_D1_0 : 7; // 0xd1(0x01)
	bool bRetriggerInstancedAbility : 1; // 0xd1(0x01)
	char UnknownData_D2_0 : 7; // 0xd2(0x01)
	bool bRetriggerInstancedAbilityUponAnimNotify : 1; // 0xd2(0x01)
	char UnknownData_D3[0x5]; // 0xd3(0x05)
	struct FGameplayAbilityActivationInfo CurrentActivationInfo; // 0xd8(0x20)
	struct FGameplayEventData CurrentEventData; // 0xf8(0xc0)
	enum class EGameplayAbilityNetExecutionPolicy NetExecutionPolicy; // 0x1b8(0x01)
	enum class EGameplayAbilityNetSecurityPolicy NetSecurityPolicy; // 0x1b9(0x01)
	char UnknownData_1BA[0x6]; // 0x1ba(0x06)
	struct UGameplayEffect* CostGameplayEffectClass; // 0x1c0(0x08)
	struct TArray<struct FAbilityTriggerData> AbilityTriggers; // 0x1c8(0x10)
	struct UGameplayEffect* CooldownGameplayEffectClass; // 0x1d8(0x08)
	struct FGameplayTagQuery CancelAbilitiesMatchingTagQuery; // 0x1e0(0x48)
	struct FGameplayTagContainer CancelAbilitiesWithTag; // 0x228(0x20)
	struct FGameplayTagContainer BlockAbilitiesWithTag; // 0x248(0x20)
	struct FGameplayTagContainer ActivationOwnedTags; // 0x268(0x20)
	struct FGameplayTagContainer ActivationRequiredTags; // 0x288(0x20)
	struct FGameplayTagContainer ActivationBlockedTags; // 0x2a8(0x20)
	struct FGameplayTagContainer SourceRequiredTags; // 0x2c8(0x20)
	struct FGameplayTagContainer SourceBlockedTags; // 0x2e8(0x20)
	struct FGameplayTagContainer TargetRequiredTags; // 0x308(0x20)
	struct FGameplayTagContainer TargetBlockedTags; // 0x328(0x20)
	char UnknownData_348[0x20]; // 0x348(0x20)
	struct TArray<struct UGameplayTask*> ActiveTasks; // 0x368(0x10)
	char UnknownData_378[0x10]; // 0x378(0x10)
	struct UAnimMontage* CurrentMontage; // 0x388(0x08)
	char UnknownData_390[0x60]; // 0x390(0x60)
	char UnknownData_3F0_0 : 7; // 0x3f0(0x01)
	bool bIsActive : 1; // 0x3f0(0x01)
	char UnknownData_3F1_0 : 7; // 0x3f1(0x01)
	bool bIsCancelable : 1; // 0x3f1(0x01)
	char UnknownData_3F2_0 : 7; // 0x3f2(0x01)
	bool bIsBlockingOtherAbilities : 1; // 0x3f2(0x01)
	char UnknownData_3F3[0x15]; // 0x3f3(0x15)
	char UnknownData_408_0 : 7; // 0x408(0x01)
	bool bMarkPendingKillOnAbilityEnd : 1; // 0x408(0x01)
	char UnknownData_409[0x7]; // 0x409(0x07)

	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities); // Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities // (Native|Public|BlueprintCallable) // @ game+0xbdfaa0
	void SetCanBeCanceled(bool bCanBeCanceled); // Function GameplayAbilities.GameplayAbility.SetCanBeCanceled // (Native|Public|BlueprintCallable) // @ game+0xbdfa10
	void SendGameplayEvent(struct FGameplayTag EventTag, struct FGameplayEventData payload); // Function GameplayAbilities.GameplayAbility.SendGameplayEvent // (Native|Protected|BlueprintCallable) // @ game+0xbdf6e0
	void RemoveGrantedByEffect(); // Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect // (Native|Public|BlueprintCallable) // @ game+0xbdf6c0
	void MontageStop(float OverrideBlendOutTime); // Function GameplayAbilities.GameplayAbility.MontageStop // (Final|Native|Protected|BlueprintCallable) // @ game+0xbded20
	void MontageSetNextSectionName(struct FName FromSectionName, struct FName ToSectionName); // Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdec60
	void MontageJumpToSection(struct FName SectionName); // Function GameplayAbilities.GameplayAbility.MontageJumpToSection // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdebe0
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName SocketName); // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0xbdeaf0
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor(); // Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0xbdea50
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(struct UGameplayEffect* GameplayEffectClass, float Level); // Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbde900
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData payload); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // (Event|Protected|BlueprintEvent|Const) // @ game+0x1a35c70
	void K2_RemoveGameplayCue(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0xbde870
	void K2_OnEndAbility(bool bWasCancelled); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void K2_ExecuteGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters GameplayCueParameters); // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams // (Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xbde610
	void K2_ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context); // Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0xbde4d0
	void K2_EndAbility(); // Function GameplayAbilities.GameplayAbility.K2_EndAbility // (Native|Protected|BlueprintCallable) // @ game+0xbde4b0
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent); // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost // (Native|Public|BlueprintCallable) // @ game+0xbde410
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown); // Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown // (Native|Public|BlueprintCallable) // @ game+0xbde330
	bool K2_CommitAbility(); // Function GameplayAbilities.GameplayAbility.K2_CommitAbility // (Native|Public|BlueprintCallable) // @ game+0xbde300
	bool K2_CheckAbilityCost(); // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost // (Native|Public|BlueprintCallable) // @ game+0xbde2d0
	bool K2_CheckAbilityCooldown(); // Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown // (Native|Public|BlueprintCallable) // @ game+0xbde2a0
	void K2_CancelAbility(); // Function GameplayAbilities.GameplayAbility.K2_CancelAbility // (Final|Native|Public|BlueprintCallable) // @ game+0xbde280
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x1a35c70
	struct TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle EffectSpecHandle, struct FGameplayAbilityTargetDataHandle TargetData); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget // (Final|Native|Protected|BlueprintCallable) // @ game+0xbde070
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(struct FGameplayEffectSpecHandle EffectSpecHandle); // Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner // (Final|Native|Protected|BlueprintCallable) // @ game+0xbddf90
	void K2_AddGameplayCueWithParams(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters GameplayCueParameter, bool bRemoveOnAbilityEnd); // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams // (Native|Protected|HasOutParms|BlueprintCallable) // @ game+0xbddcf0
	void K2_AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd); // Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue // (Native|Protected|BlueprintCallable) // @ game+0xbddb80
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void InvalidateClientPredictionKey(); // Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xbddb60
	struct USkeletalMeshComponent* GetOwningComponentFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbddb30
	struct AActor* GetOwningActorFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbddb00
	struct FGameplayEffectContextHandle GetGrantedByEffectContext(); // Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdda80
	struct UObject* GetCurrentSourceObject(); // Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdda50
	struct UAnimMontage* GetCurrentMontage(); // Function GameplayAbilities.GameplayAbility.GetCurrentMontage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdda20
	float GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdd9f0
	struct FGameplayEffectContextHandle GetContextFromOwner(struct FGameplayAbilityTargetDataHandle OptionalTargetData); // Function GameplayAbilities.GameplayAbility.GetContextFromOwner // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdd870
	struct AActor* GetAvatarActorFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdd840
	struct FGameplayAbilityActorInfo GetActorInfo(); // Function GameplayAbilities.GameplayAbility.GetActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdd7f0
	struct UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo(); // Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdd7c0
	int32_t GetAbilityLevel(); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdd790
	void EndTaskByInstanceName(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdd580
	void EndAbilityState(struct FName OptionalStateNameToEnd); // Function GameplayAbilities.GameplayAbility.EndAbilityState // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdd500
	void ConfirmTaskByInstanceName(struct FName InstanceName, bool bEndTask); // Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdd250
	void CancelTaskByInstanceName(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdd1d0
	void BP_RemoveGameplayEffectFromOwnerWithHandle(struct FActiveGameplayEffectHandle Handle, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdcff0
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(struct FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdced0
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(struct FGameplayTagContainer WithAssetTags, int32_t StacksToRemove); // Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdcdb0
	struct TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle TargetData, struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdcb90
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(struct UGameplayEffect* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner // (Final|Native|Protected|BlueprintCallable) // @ game+0xbdca80
};

// Class GameplayAbilities.GameplayAbility_CharacterJump
// Size: 0x410 (Inherited: 0x410)
struct UGameplayAbility_CharacterJump : UGameplayAbility {
};

// Class GameplayAbilities.GameplayAbility_Montage
// Size: 0x448 (Inherited: 0x410)
struct UGameplayAbility_Montage : UGameplayAbility {
	struct UAnimMontage* MontageToPlay; // 0x410(0x08)
	float PlayRate; // 0x418(0x04)
	struct FName SectionName; // 0x41c(0x08)
	char UnknownData_424[0x4]; // 0x424(0x04)
	struct TArray<struct UGameplayEffect*> GameplayEffectClassesWhileAnimating; // 0x428(0x10)
	struct TArray<struct UGameplayEffect*> GameplayEffectsWhileAnimating; // 0x438(0x10)
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0xa0 (Inherited: 0xa0)
struct UGameplayAbilityBlueprint : UBlueprint {
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x40 (Inherited: 0x30)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct FGameplayAbilityBindInfo> Abilities; // 0x30(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x410 (Inherited: 0x2f0)
struct AGameplayAbilityTargetActor : AActor {
	char UnknownData_2F0_0 : 7; // 0x2f0(0x01)
	bool ShouldProduceTargetDataOnServer : 1; // 0x2f0(0x01)
	char UnknownData_2F1[0xf]; // 0x2f1(0x0f)
	struct FGameplayAbilityTargetingLocationInfo StartLocation; // 0x300(0x70)
	char UnknownData_370[0x38]; // 0x370(0x38)
	struct APlayerController* MasterPC; // 0x3a8(0x08)
	struct UGameplayAbility* OwningAbility; // 0x3b0(0x08)
	char UnknownData_3B8_0 : 7; // 0x3b8(0x01)
	bool bDestroyOnConfirmation : 1; // 0x3b8(0x01)
	char UnknownData_3B9[0x7]; // 0x3b9(0x07)
	struct AActor* SourceActor; // 0x3c0(0x08)
	struct FWorldReticleParameters ReticleParams; // 0x3c8(0x0c)
	char UnknownData_3D4[0x4]; // 0x3d4(0x04)
	struct AGameplayAbilityWorldReticle* ReticleClass; // 0x3d8(0x08)
	struct FGameplayTargetDataFilterHandle Filter; // 0x3e0(0x10)
	char UnknownData_3F0_0 : 7; // 0x3f0(0x01)
	bool bWantsInitialData : 1; // 0x3f0(0x01)
	char UnknownData_3F1_0 : 7; // 0x3f1(0x01)
	bool bDebug : 1; // 0x3f1(0x01)
	char UnknownData_3F2[0x16]; // 0x3f2(0x16)
	struct UAbilitySystemComponent* GenericDelegateBoundASC; // 0x408(0x08)

	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // (Native|Public) // @ game+0xbe8d70
	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting // (Native|Public) // @ game+0xb14550
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x430 (Inherited: 0x410)
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor {
	float MaxRange; // 0x410(0x04)
	struct FCollisionProfileName TraceProfile; // 0x414(0x08)
	char UnknownData_41C_0 : 7; // 0x41c(0x01)
	bool bTraceAffectsAimPitch : 1; // 0x41c(0x01)
	char UnknownData_41D[0x13]; // 0x41d(0x13)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x450 (Inherited: 0x430)
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace {
	float CollisionRadius; // 0x428(0x04)
	float CollisionHeight; // 0x42c(0x04)
	char UnknownData_438[0x18]; // 0x438(0x18)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x460 (Inherited: 0x450)
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace {
	struct UObject* PlacedActorClass; // 0x448(0x08)
	struct UMaterialInterface* PlacedActorMaterial; // 0x450(0x08)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x420 (Inherited: 0x410)
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor {
	float Radius; // 0x410(0x04)
	char UnknownData_414[0xc]; // 0x414(0x0c)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x430 (Inherited: 0x430)
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace {
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x310 (Inherited: 0x2f0)
struct AGameplayAbilityWorldReticle : AActor {
	struct FWorldReticleParameters Parameters; // 0x2f0(0x0c)
	char UnknownData_2FC_0 : 7; // 0x2fc(0x01)
	bool bFaceOwnerFlat : 1; // 0x2fc(0x01)
	char UnknownData_2FD_0 : 7; // 0x2fd(0x01)
	bool bSnapToTargetedActor : 1; // 0x2fd(0x01)
	char UnknownData_2FE_0 : 7; // 0x2fe(0x01)
	bool bIsTargetValid : 1; // 0x2fe(0x01)
	char UnknownData_2FF_0 : 7; // 0x2ff(0x01)
	bool bIsTargetAnActor : 1; // 0x2ff(0x01)
	struct APlayerController* MasterPC; // 0x300(0x08)
	struct AActor* TargetingActor; // 0x308(0x08)

	void SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0x1a35c70
	void SetReticleMaterialParamFloat(struct FName ParamName, float Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnValidTargetChanged(bool bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnTargetingAnActor(bool bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void FaceTowardSource(bool bFaceIn2D); // Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource // (Final|Native|Public|BlueprintCallable) // @ game+0xbf1670
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x328 (Inherited: 0x310)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle {
	struct UCapsuleComponent* CollisionComponent; // 0x310(0x08)
	struct TArray<struct UActorComponent*> VisualizationComponents; // 0x318(0x10)
};

// Class GameplayAbilities.GameplayCueInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueInterface : UInterface {

	void ForwardGameplayCueToParent(); // Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xbf1700
	void BlueprintCustomHandler(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a35c70
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x368 (Inherited: 0x30)
struct UGameplayCueManager : UDataAsset {
	char UnknownData_30[0x70]; // 0x30(0x70)
	struct FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary; // 0xa0(0x50)
	struct FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary; // 0xf0(0x50)
	char UnknownData_140[0x1c8]; // 0x140(0x1c8)
	struct TArray<struct UObject*> LoadedGameplayCueNotifyClasses; // 0x308(0x10)
	struct TArray<struct AGameplayCueNotify_Actor*> GameplayCueClassesForPreallocation; // 0x318(0x10)
	struct TArray<struct FGameplayCuePendingExecute> PendingExecuteCues; // 0x328(0x10)
	int32_t GameplayCueSendContextCount; // 0x338(0x04)
	char UnknownData_33C[0x4]; // 0x33c(0x04)
	struct TArray<struct FPreallocationInfo> PreallocationInfoList_Internal; // 0x340(0x10)
	char UnknownData_350[0x18]; // 0x350(0x18)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x368 (Inherited: 0x2f0)
struct AGameplayCueNotify_Actor : AActor {
	char UnknownData_2F0_0 : 7; // 0x2f0(0x01)
	bool bAutoDestroyOnRemove : 1; // 0x2f0(0x01)
	char UnknownData_2F1[0x3]; // 0x2f1(0x03)
	float AutoDestroyDelay; // 0x2f4(0x04)
	char UnknownData_2F8_0 : 7; // 0x2f8(0x01)
	bool WarnIfTimelineIsStillRunning : 1; // 0x2f8(0x01)
	char UnknownData_2F9_0 : 7; // 0x2f9(0x01)
	bool WarnIfLatentActionIsStillRunning : 1; // 0x2f9(0x01)
	char UnknownData_2FA[0x2]; // 0x2fa(0x02)
	struct FGameplayTag GameplayCueTag; // 0x2fc(0x08)
	char UnknownData_304[0x4]; // 0x304(0x04)
	struct FGameplayTagReferenceHelper ReferenceHelper; // 0x308(0x10)
	struct FName GameplayCueName; // 0x318(0x08)
	char UnknownData_320_0 : 7; // 0x320(0x01)
	bool bAutoAttachToOwner : 1; // 0x320(0x01)
	char UnknownData_321_0 : 7; // 0x321(0x01)
	bool IsOverride : 1; // 0x321(0x01)
	char UnknownData_322_0 : 7; // 0x322(0x01)
	bool bUniqueInstancePerInstigator : 1; // 0x322(0x01)
	char UnknownData_323_0 : 7; // 0x323(0x01)
	bool bUniqueInstancePerSourceObject : 1; // 0x323(0x01)
	char UnknownData_324_0 : 7; // 0x324(0x01)
	bool bAllowMultipleOnActiveEvents : 1; // 0x324(0x01)
	char UnknownData_325_0 : 7; // 0x325(0x01)
	bool bAllowMultipleWhileActiveEvents : 1; // 0x325(0x01)
	char UnknownData_326[0x2]; // 0x326(0x02)
	int32_t NumPreallocatedInstances; // 0x328(0x04)
	char UnknownData_32C[0x3c]; // 0x32c(0x3c)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xbf2650
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xbf2170
	void OnOwnerDestroyed(struct AActor* DestroyedActor); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed // (Native|Public) // @ game+0xbf20e0
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xbf1c00
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xbf1720
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void K2_EndGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue // (Native|Public|BlueprintCallable) // @ game+0xb146b0
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x50 (Inherited: 0x28)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x28(0x08)
	struct FGameplayTagReferenceHelper ReferenceHelper; // 0x30(0x10)
	struct FName GameplayCueName; // 0x40(0x08)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool IsOverride : 1; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xbf28c0
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xbf23e0
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xbf1e70
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xbf1990
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x1a35c70
};

// Class GameplayAbilities.GameplayCueNotify_HitImpact
// Size: 0x60 (Inherited: 0x50)
struct UGameplayCueNotify_HitImpact : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x50(0x08)
	struct UParticleSystem* ParticleSystem; // 0x58(0x08)
};

// Class GameplayAbilities.GameplayCueSet
// Size: 0x90 (Inherited: 0x30)
struct UGameplayCueSet : UDataAsset {
	struct TArray<struct FGameplayCueNotifyData> GameplayCueData; // 0x30(0x10)
	char UnknownData_40[0x50]; // 0x40(0x50)
};

// Class GameplayAbilities.GameplayCueTranslator
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueTranslator : UObject {
};

// Class GameplayAbilities.GameplayCueTranslator_Test
// Size: 0x28 (Inherited: 0x28)
struct UGameplayCueTranslator_Test : UGameplayCueTranslator {
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x7b8 (Inherited: 0x28)
struct UGameplayEffect : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	enum class EGameplayEffectDurationType DurationPolicy; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct FGameplayEffectModifierMagnitude DurationMagnitude; // 0x38(0x1a8)
	struct FScalableFloat Period; // 0x1e0(0x20)
	char UnknownData_200_0 : 7; // 0x200(0x01)
	bool bExecutePeriodicEffectOnApplication : 1; // 0x200(0x01)
	enum class EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy; // 0x201(0x01)
	char UnknownData_202[0x6]; // 0x202(0x06)
	struct TArray<struct FGameplayModifierInfo> Modifiers; // 0x208(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x218(0x10)
	struct FScalableFloat ChanceToApplyToTarget; // 0x228(0x20)
	struct TArray<struct UGameplayEffectCustomApplicationRequirement*> ApplicationRequirements; // 0x248(0x10)
	struct TArray<struct UGameplayEffect*> TargetEffectClasses; // 0x258(0x10)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x268(0x10)
	struct TArray<struct UGameplayEffect*> OverflowEffects; // 0x278(0x10)
	char UnknownData_288_0 : 7; // 0x288(0x01)
	bool bDenyOverflowApplication : 1; // 0x288(0x01)
	char UnknownData_289_0 : 7; // 0x289(0x01)
	bool bClearStackOnOverflow : 1; // 0x289(0x01)
	char UnknownData_28A[0x6]; // 0x28a(0x06)
	struct TArray<struct UGameplayEffect*> PrematureExpirationEffectClasses; // 0x290(0x10)
	struct TArray<struct UGameplayEffect*> RoutineExpirationEffectClasses; // 0x2a0(0x10)
	char UnknownData_2B0_0 : 7; // 0x2b0(0x01)
	bool bRequireModifierSuccessToTriggerCues : 1; // 0x2b0(0x01)
	char UnknownData_2B1_0 : 7; // 0x2b1(0x01)
	bool bSuppressStackingCues : 1; // 0x2b1(0x01)
	char UnknownData_2B2_0 : 7; // 0x2b2(0x01)
	bool bAllowSlicedHandleGameplayCues : 1; // 0x2b2(0x01)
	char UnknownData_2B3[0x5]; // 0x2b3(0x05)
	struct TArray<struct FGameplayEffectCue> GameplayCues; // 0x2b8(0x10)
	struct UGameplayEffectUIData* UIData; // 0x2c8(0x08)
	struct FInheritedTagContainer InheritableGameplayEffectTags; // 0x2d0(0x60)
	struct FInheritedTagContainer InheritableOwnedTagsContainer; // 0x330(0x60)
	struct FGameplayTagRequirements OngoingTagRequirements; // 0x390(0x40)
	struct FGameplayTagRequirements ApplicationTagRequirements; // 0x3d0(0x40)
	struct FGameplayTagRequirements RemovalTagRequirements; // 0x410(0x40)
	struct FInheritedTagContainer RemoveGameplayEffectsWithTags; // 0x450(0x60)
	struct FGameplayTagRequirements GrantedApplicationImmunityTags; // 0x4b0(0x40)
	struct FGameplayEffectQuery GrantedApplicationImmunityQuery; // 0x4f0(0x150)
	char UnknownData_640[0x8]; // 0x640(0x08)
	struct FGameplayEffectQuery RemoveGameplayEffectQuery; // 0x648(0x150)
	char UnknownData_798[0x1]; // 0x798(0x01)
	enum class EGameplayEffectStackingType StackingType; // 0x799(0x01)
	char UnknownData_79A[0x2]; // 0x79a(0x02)
	int32_t StackLimitCount; // 0x79c(0x04)
	enum class EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy; // 0x7a0(0x01)
	enum class EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy; // 0x7a1(0x01)
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy; // 0x7a2(0x01)
	char UnknownData_7A3[0x5]; // 0x7a3(0x05)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilities; // 0x7a8(0x10)
};

// Class GameplayAbilities.GameplayEffectCalculation
// Size: 0x38 (Inherited: 0x28)
struct UGameplayEffectCalculation : UObject {
	struct TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture; // 0x28(0x10)
};

// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectCustomApplicationRequirement : UObject {

	bool CanApplyGameplayEffect(struct UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec Spec, struct UAbilitySystemComponent* ASC); // Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xbf72a0
};

// Class GameplayAbilities.GameplayEffectExecutionCalculation
// Size: 0x40 (Inherited: 0x38)
struct UGameplayEffectExecutionCalculation : UGameplayEffectCalculation {
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool bRequiresPassedInTags : 1; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)

	void Execute(struct FGameplayEffectCustomExecutionParameters ExecutionParams, struct FGameplayEffectCustomExecutionOutput OutExecutionOutput); // Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xbf73f0
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEffectUIData : UObject {
};

// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// Size: 0x40 (Inherited: 0x28)
struct UGameplayEffectUIData_TextOnly : UGameplayEffectUIData {
	struct FText Description; // 0x28(0x18)
};

// Class GameplayAbilities.GameplayModMagnitudeCalculation
// Size: 0x40 (Inherited: 0x38)
struct UGameplayModMagnitudeCalculation : UGameplayEffectCalculation {
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool bAllowNonNetAuthorityDependencyRegistration : 1; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)

	float CalculateBaseMagnitude(struct FGameplayEffectSpec Spec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xbf71d0
};

// Class GameplayAbilities.GameplayTagReponseTable
// Size: 0x1e8 (Inherited: 0x30)
struct UGameplayTagReponseTable : UDataAsset {
	struct TArray<struct FGameplayTagResponseTableEntry> Entries; // 0x30(0x10)
	char UnknownData_40[0x1a8]; // 0x40(0x1a8)

	void TagResponseEvent(struct FGameplayTag Tag, int32_t NewCount, struct UAbilitySystemComponent* ASC, int32_t Idx); // Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent // (Final|Native|Protected) // @ game+0xbf7580
};

// Class GameplayAbilities.TickableAttributeSetInterface
// Size: 0x28 (Inherited: 0x28)
struct UTickableAttributeSetInterface : UInterface {
};

