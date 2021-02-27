// Class AIFramework.FWAnimNotify
// Size: 0x40 (Inherited: 0x38)
struct UFWAnimNotify : UAnimNotify {
	struct FName TagName; // 0x38(0x08)
};

// Class AIFramework.FWAnimNotifyState
// Size: 0x40 (Inherited: 0x38)
struct UFWAnimNotifyState : UAnimNotifyState {
	struct FName TagName; // 0x38(0x08)
};

// Class AIFramework.FWAIController
// Size: 0xb98 (Inherited: 0x410)
struct AFWAIController : ABaseAIController {
	char UnknownData_410[0x20]; // 0x410(0x20)
	struct UBehaviorTree* DefaultBehaviorTree; // 0x430(0x08)
	struct UChatterAIMapping* ChatterMapping; // 0x438(0x08)
	struct UFWAISquad* DesiredAISquadClass; // 0x440(0x08)
	float MaxAISquadMeleeRadius; // 0x448(0x04)
	float MinDistanceToGenerateMidPoints; // 0x44c(0x04)
	float MidPointGenerationRadiusInCloseDistance; // 0x450(0x04)
	float MidPointGenerationMinVelocityInCloseDistance; // 0x454(0x04)
	struct UFWAISquad* MySquad; // 0x458(0x08)
	enum class ETeam DefaultTeam; // 0x460(0x01)
	char UnknownData_461[0x7]; // 0x461(0x07)
	struct TArray<struct FLocalEnemyInfo> LocalEnemyList; // 0x468(0x10)
	float AITeamStimulusRange; // 0x478(0x04)
	char UnknownData_47C[0x4]; // 0x47c(0x04)
	struct FTakeHitInfo LastHitInfo; // 0x480(0x200)
	struct FHitResult LastHitResult; // 0x680(0x90)
	float LastCombatActionTime; // 0x710(0x04)
	float LastMeleeHitTime; // 0x714(0x04)
	float LastCombatHitTime; // 0x718(0x04)
	float LastGrenadeAttackTime; // 0x71c(0x04)
	float CoverEnterTime; // 0x720(0x04)
	float CoverCombatStartTime; // 0x724(0x04)
	float LevelOfDanger; // 0x728(0x04)
	char UnknownData_72C_0 : 7; // 0x72c(0x01)
	bool bUseTargetSelectCurrentTargetDecay : 1; // 0x72c(0x01)
	char UnknownData_72D_0 : 7; // 0x72d(0x01)
	bool bUseTargetSelectDamageThreat : 1; // 0x72d(0x01)
	char UnknownData_72E[0x2]; // 0x72e(0x02)
	float CurrentTargetMaxDuration; // 0x730(0x04)
	float CurrentTargetMinDuration; // 0x734(0x04)
	float CurrentTargetMinScore; // 0x738(0x04)
	char UnknownData_73C[0x4]; // 0x73c(0x04)
	float MaxThreatOnDamageFraction; // 0x740(0x04)
	float TotalThreatLoseDuration; // 0x744(0x04)
	float ThreatRegenRate; // 0x748(0x04)
	float ThreatMaxPlayer; // 0x74c(0x04)
	float ThreatMaxAI; // 0x750(0x04)
	float ThreatGainOnProximityPlayer; // 0x754(0x04)
	float ThreatGainOnProximityAI; // 0x758(0x04)
	float ThreatProximityDistance; // 0x75c(0x04)
	float MaxGroupThreatDistance; // 0x760(0x04)
	float GroupThreatLoseDuration; // 0x764(0x04)
	float HeavyDamageTimeLimit; // 0x768(0x04)
	float HeavyDamageThresholdPct; // 0x76c(0x04)
	char bChangeTargetsDuringAction : 1; // 0x770(0x01)
	char bSquadBasedEnemySelection : 1; // 0x770(0x01)
	char bCallOnPreNewEnemySet : 1; // 0x770(0x01)
	char bCallOnPostNewEnemySet : 1; // 0x770(0x01)
	char bEventOnTargetChange : 1; // 0x770(0x01)
	char UnknownData_770_5 : 3; // 0x770(0x01)
	char UnknownData_771[0x3]; // 0x771(0x03)
	float NextTargetSelectionTime; // 0x774(0x04)
	float TargetSelectionInterval; // 0x778(0x04)
	char UnknownData_77C[0x4]; // 0x77c(0x04)
	struct TArray<struct FFWForceFireRequest> ForceFireRequests; // 0x780(0x10)
	struct TArray<struct AActor*> TargetList; // 0x790(0x10)
	struct TArray<struct AActor*> ProhibitedTargetList; // 0x7a0(0x10)
	struct AActor* SquadAssignedTarget; // 0x7b0(0x08)
	float NextAllowedSquadTargetAssignment; // 0x7b8(0x04)
	char UnknownData_7BC[0x4]; // 0x7bc(0x04)
	struct AActor* FireTarget; // 0x7c0(0x08)
	struct AActor* SelectedFireTarget; // 0x7c8(0x08)
	struct ABaseCharacter* Enemy; // 0x7d0(0x08)
	struct FEQSParametrizedQueryExecutionRequest EQSEnemySelectionRequest; // 0x7d8(0x48)
	char UnknownData_820[0x8]; // 0x820(0x08)
	struct TMap<struct AActor*, float> TargetingStartTimes; // 0x828(0x50)
	char UnknownData_878[0x28]; // 0x878(0x28)
	float ShootingMeExtraHeight; // 0x8a0(0x04)
	float ShootingMeDistance; // 0x8a4(0x04)
	float ShootingMeCoverDistance; // 0x8a8(0x04)
	char UnknownData_8AC[0x4]; // 0x8ac(0x04)
	struct UFWAIResponseComponent* ResponseComponent; // 0x8b0(0x08)
	struct TArray<struct UFWAIResponse*> ResponseClasses; // 0x8b8(0x10)
	struct TArray<struct UFWAIResponse*> ActiveResponses; // 0x8c8(0x10)
	char UnknownData_8D8[0x80]; // 0x8d8(0x80)
	struct UFWAIWeaponComponent* WeaponComponent; // 0x958(0x08)
	char UnknownData_960_0 : 7; // 0x960(0x01)
	bool bUseAimLocation : 1; // 0x960(0x01)
	char UnknownData_961[0x3]; // 0x961(0x03)
	struct FVector2D BurstDuration; // 0x964(0x08)
	struct FVector2D ReFireDelay; // 0x96c(0x08)
	float ValidFireDot; // 0x974(0x04)
	float LOSLastSensedLocationMaxDistance; // 0x978(0x04)
	float LOSLastSensedLocationMaxAgeInSeconds; // 0x97c(0x04)
	char UnknownData_980[0x21]; // 0x980(0x21)
	char UnknownData_9A1_0 : 7; // 0x9a1(0x01)
	bool bUseMeleeFrontalHit : 1; // 0x9a1(0x01)
	char UnknownData_9A2[0x2]; // 0x9a2(0x02)
	float MeleeFrontalHitDistance; // 0x9a4(0x04)
	float MeleeFrontalFOV; // 0x9a8(0x04)
	char UnknownData_9AC[0x4]; // 0x9ac(0x04)
	struct TArray<struct UFWAnimNotifyState_MeleeAttack*> SuccessfulMeleeStates; // 0x9b0(0x10)
	struct TArray<struct FMeleeAttackHitData> SuccessfulMeleeTargets; // 0x9c0(0x10)
	struct AAIRoute* ScriptedRoute; // 0x9d0(0x08)
	struct AGoalPoint* CurrentGoalPoint; // 0x9d8(0x08)
	struct USmartObjectUserState* SmartObjectUserState; // 0x9e0(0x08)
	struct ACombatArena* MyCombatArena; // 0x9e8(0x08)
	char bShouldFollowGoals : 1; // 0x9f0(0x01)
	char UnknownData_9F0_1 : 7; // 0x9f0(0x01)
	char UnknownData_9F1[0x17]; // 0x9f1(0x17)
	char UnknownData_A08_0 : 7; // 0xa08(0x01)
	bool bSupportCombatArena : 1; // 0xa08(0x01)
	char UnknownData_A09[0x7]; // 0xa09(0x07)
	struct FMulticastInlineDelegate OnSmartObjectNotifyBegin; // 0xa10(0x10)
	struct UFWAITask_MantleOverCover* MantleOverCoverTask; // 0xa20(0x08)
	struct UFWAITask_MantleOverCover* ClimbCoverTask; // 0xa28(0x08)
	struct UFWAITask_Jump* JumpTask; // 0xa30(0x08)
	char UnknownData_A38_0 : 7; // 0xa38(0x01)
	bool bSupportFlanking : 1; // 0xa38(0x01)
	char UnknownData_A39[0x3]; // 0xa39(0x03)
	float MinTimeInValidCoverWhileFlanking; // 0xa3c(0x04)
	float MinTimeToStayInCoverAfterBeingTargeted; // 0xa40(0x04)
	float MinFlankingAngle; // 0xa44(0x04)
	struct UFWCoveringComponent* CoveringComponent; // 0xa48(0x08)
	char UnknownData_A50[0x8]; // 0xa50(0x08)
	struct UAITask_MoveTo* ClassOfMoveToTask; // 0xa58(0x08)
	char bDisableStringPullingForPaths : 1; // 0xa60(0x01)
	char bAllowTurnInPlace : 1; // 0xa60(0x01)
	char bLimitControlRotationByThreshold : 1; // 0xa60(0x01)
	char UnknownData_A60_3 : 5; // 0xa60(0x01)
	char UnknownData_A61[0x3]; // 0xa61(0x03)
	float ControlRotationThreshold; // 0xa64(0x04)
	float ControlRotationPrecision; // 0xa68(0x04)
	char UnknownData_A6C[0x4c]; // 0xa6c(0x4c)
	struct FMulticastInlineDelegate OnAnimNotify; // 0xab8(0x10)
	struct UFWAIMetrics* AIMetrics; // 0xac8(0x08)
	char UnknownData_AD0_0 : 7; // 0xad0(0x01)
	bool bSendBattleEvent : 1; // 0xad0(0x01)
	char UnknownData_AD1[0x7]; // 0xad1(0x07)
	struct TArray<struct FVector> EQSPointsOfInterest; // 0xad8(0x10)
	struct UFWAIArchetype* AIArchetype; // 0xae8(0x08)
	struct UEnvQuery* UsedEQSQueries[0xc]; // 0xaf0(0x60)
	struct AController* ExplosionCauser; // 0xb50(0x08)
	struct UFWAIComponent* BaseAIComponent; // 0xb58(0x08)
	struct ABaseCharacter* MyBaseCharacter; // 0xb60(0x08)
	struct UFWAIComponent* AIComponentClass; // 0xb68(0x08)
	struct UPCFAnimReplication* AnimReplication; // 0xb70(0x08)
	char UnknownData_B78[0x10]; // 0xb78(0x10)
	struct UFWAIDamageReactionComponent* DamageReactionComp; // 0xb88(0x08)
	char UnknownData_B90_0 : 7; // 0xb90(0x01)
	bool bEnableAntFarmMovementOptimization : 1; // 0xb90(0x01)
	char UnknownData_B91[0x7]; // 0xb91(0x07)

	void UpdateLastMeleeHitTime(); // Function AIFramework.FWAIController.UpdateLastMeleeHitTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9d340
	void UpdateLastGrenadeAttackTime(); // Function AIFramework.FWAIController.UpdateLastGrenadeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9d320
	void UpdateLastCombatHitTime(); // Function AIFramework.FWAIController.UpdateLastCombatHitTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9d300
	void UpdateLastCombatActionTime(); // Function AIFramework.FWAIController.UpdateLastCombatActionTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9d2e0
	void UpdateCoverEnterTime(); // Function AIFramework.FWAIController.UpdateCoverEnterTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9d2c0
	void TickMeleeAttack(struct FString SocketNames, struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float FrameDeltaTime, struct TArray<struct FVector> PreviousSensorLocations, struct TArray<struct FVector> CurrentSensorLocations, struct UDamageType* DamageTypeClass, struct FName TagName, struct UFWAnimNotifyState_MeleeAttack* AnimNotify, bool bAllowHittingMultipleTargets); // Function AIFramework.FWAIController.TickMeleeAttack // (BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3a9ce70
	void SetScriptedSelectionPriority(float ScriptedSelectionPriority, struct AActor* InEnemy); // Function AIFramework.FWAIController.SetScriptedSelectionPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9cda0
	void SetGoalActor(struct AGoalPoint* InGoalActor); // Function AIFramework.FWAIController.SetGoalActor // (Native|Public|BlueprintCallable) // @ game+0x3a9cd10
	void SetEnemyThreat(float Threat, struct AActor* InEnemy); // Function AIFramework.FWAIController.SetEnemyThreat // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9cba0
	void SetCustomLocation(struct FVector InCustomLocation); // Function AIFramework.FWAIController.SetCustomLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3a9ca60
	void SetCurrentSmartObjectSlot(struct USmartObjectSlotComponent* InSmartObjectSlot); // Function AIFramework.FWAIController.SetCurrentSmartObjectSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9c9d0
	bool SetBehaviorTag(enum class EFWBehaviorTag Tag); // Function AIFramework.FWAIController.SetBehaviorTag // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9c940
	bool RespondTo(struct FName ChatterID, struct AActor* Source); // Function AIFramework.FWAIController.RespondTo // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3a9c7e0
	void ResetScriptedSelectionPriority(struct AActor* InEnemy); // Function AIFramework.FWAIController.ResetScriptedSelectionPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9c760
	void ResetScriptedSelectionPrioritiesForAll(); // Function AIFramework.FWAIController.ResetScriptedSelectionPrioritiesForAll // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9c740
	bool RequestMovementMood(enum class EMovementMood NewMood); // Function AIFramework.FWAIController.RequestMovementMood // (Native|Public|BlueprintCallable) // @ game+0x3a9c6b0
	void RequestChatter(enum class EAIChatterType Type); // Function AIFramework.FWAIController.RequestChatter // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9c630
	void PostponePathUpdates(bool Postpone); // Function AIFramework.FWAIController.PostponePathUpdates // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9c5a0
	void OnWaponHit(struct AActor* InstigatorActor, struct FHitResult HitInfo, struct UDamageType* DamageType, float Damage); // Function AIFramework.FWAIController.OnWaponHit // (Final|Native|Protected|HasOutParms) // @ game+0x3a9c3a0
	void OnStoppedBeingTargetBy(struct AActor* TargetInstigator); // Function AIFramework.FWAIController.OnStoppedBeingTargetBy // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x34ab110
	void OnStartedBeingTargetBy(struct AActor* TargetInstigator); // Function AIFramework.FWAIController.OnStartedBeingTargetBy // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x3a9c310
	void OnLethalHitEvent(struct ABaseCharacter* EnemyCharacter, struct FTakeHitInfo TakeHitInfo); // Function AIFramework.FWAIController.OnLethalHitEvent // (Native|Public) // @ game+0x3a9c0b0
	void OnEnemyKilled(struct ABaseCharacter* ControllerOwner, struct FTakeHitInfo TakeHitInfo); // Function AIFramework.FWAIController.OnEnemyKilled // (Native|Public) // @ game+0x3a9bf30
	void OnEnemyHealthBelowZero(struct ABaseCharacter* ControllerOwner); // Function AIFramework.FWAIController.OnEnemyHealthBelowZero // (Final|Native|Public) // @ game+0x3a9beb0
	void OnEnemyDeath(struct ABaseCharacter* EnemyCharacter); // Function AIFramework.FWAIController.OnEnemyDeath // (Native|Event|Public|BlueprintEvent) // @ game+0x3a9be20
	void OnDamageEvent(struct ABaseCharacter* EnemyCharacter, struct FTakeHitInfo TakeHitInfo); // Function AIFramework.FWAIController.OnDamageEvent // (Native|Public) // @ game+0x3a9bca0
	void K2_SetIgnoreReactions(bool bIgnore, struct FString DebugReason); // Function AIFramework.FWAIController.K2_SetIgnoreReactions // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9b8a0
	void K2_RequestForceFire(struct UObject* Source, struct TArray<struct AActor*> inTargets, bool bInForceContinuousFire, bool bRequireLOS); // Function AIFramework.FWAIController.K2_RequestForceFire // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3a9b710
	void K2_HandleDeath(); // Function AIFramework.FWAIController.K2_HandleDeath // (Native|Event|Public|BlueprintEvent) // @ game+0x33e6b90
	bool K2_AreReactionsIgnored(); // Function AIFramework.FWAIController.K2_AreReactionsIgnored // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b4b0
	bool IsUsingNewDamageReaction(); // Function AIFramework.FWAIController.IsUsingNewDamageReaction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b480
	bool IsTurnInPlaceAllowed(); // Function AIFramework.FWAIController.IsTurnInPlaceAllowed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b420
	bool IsStrafeAllowed(); // Function AIFramework.FWAIController.IsStrafeAllowed // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9b3f0
	bool IsOutsideRecoverArea(); // Function AIFramework.FWAIController.IsOutsideRecoverArea // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b3c0
	bool IsLocationOutsideRecoverArea(struct FVector TestLocation); // Function AIFramework.FWAIController.IsLocationOutsideRecoverArea // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b320
	struct UFWAIWeaponComponent* GetWeaponComponent(); // Function AIFramework.FWAIController.GetWeaponComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b270
	struct UObject* GetUClassAIArchetype(); // Function AIFramework.FWAIController.GetUClassAIArchetype // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b240
	struct AActor* GetTargetActor(); // Function AIFramework.FWAIController.GetTargetActor // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b210
	struct FName GetSquadName(); // Function AIFramework.FWAIController.GetSquadName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b1e0
	struct AController* GetSquadLeader(); // Function AIFramework.FWAIController.GetSquadLeader // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b1b0
	struct UFWAISquad* GetSquad(); // Function AIFramework.FWAIController.GetSquad // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b190
	struct USmartObjectUserState* GetSmartObjectUserState(); // Function AIFramework.FWAIController.GetSmartObjectUserState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b170
	struct USmartObjectLogic* GetSmartObjectLogic(); // Function AIFramework.FWAIController.GetSmartObjectLogic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b140
	float GetScriptedSelectionPriority(struct AActor* InEnemy); // Function AIFramework.FWAIController.GetScriptedSelectionPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b0a0
	struct UFWAIResponseComponent* GetResponseComponent(); // Function AIFramework.FWAIController.GetResponseComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9b080
	struct FHitResult GetLastHitResult(); // Function AIFramework.FWAIController.GetLastHitResult // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b020
	struct FTakeHitInfo GetLastHitInfo(); // Function AIFramework.FWAIController.GetLastHitInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9aff0
	float GetLastCombatActionTime(); // Function AIFramework.FWAIController.GetLastCombatActionTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9afd0
	struct AGoalPoint* GetGoalActor(); // Function AIFramework.FWAIController.GetGoalActor // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9afa0
	enum class EFWDiscreteDistance GetDiscreteDistance(float Distance); // Function AIFramework.FWAIController.GetDiscreteDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9aee0
	struct FVector GetCustomLocation(); // Function AIFramework.FWAIController.GetCustomLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9ae80
	float GetCurrentTargetScore(); // Function AIFramework.FWAIController.GetCurrentTargetScore // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9ae40
	struct USmartObjectSlotComponent* GetCurrentSmartObjectSlot(); // Function AIFramework.FWAIController.GetCurrentSmartObjectSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9ae10
	struct UFWCoveringComponent* GetCoveringComponent(); // Function AIFramework.FWAIController.GetCoveringComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9adf0
	float GetCoverEnterTime(); // Function AIFramework.FWAIController.GetCoverEnterTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9add0
	enum class EFWBehaviorTag GetBehaviorTag(); // Function AIFramework.FWAIController.GetBehaviorTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9ad70
	struct ABaseCharacter* GetBaseCharacter(); // Function AIFramework.FWAIController.GetBaseCharacter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9ad50
	struct UPCFAnimReplication* GetAnimReplication(); // Function AIFramework.FWAIController.GetAnimReplication // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9ac30
	struct UFWAIRank* GetAIRank(); // Function AIFramework.FWAIController.GetAIRank // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9ab90
	struct UFWAIMetrics* GetAIMetrics(); // Function AIFramework.FWAIController.GetAIMetrics // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9ab70
	struct UFWAIFaction* GetAIFaction(); // Function AIFramework.FWAIController.GetAIFaction // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9ab30
	struct UFWAIComponent* GetAIComponent(); // Function AIFramework.FWAIController.GetAIComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9ab10
	struct UFWAIArchetype* GetAIArchetype(); // Function AIFramework.FWAIController.GetAIArchetype // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9aaf0
	void FWAIAnimNotifyDelegate__DelegateSignature(struct UFWAnimNotify* AnimNotify, struct FName NotifyName, struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // DelegateFunction AIFramework.FWAIController.FWAIAnimNotifyDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	bool FollowRoute(struct AAIRoute* InScriptedRoute); // Function AIFramework.FWAIController.FollowRoute // (Native|Public|BlueprintCallable) // @ game+0x3a9aa50
	void FollowGoals(struct TArray<struct AGoalPoint*> Goals); // Function AIFramework.FWAIController.FollowGoals // (Native|Public|BlueprintCallable) // @ game+0x3a9a950
	void FollowGoal(struct AGoalPoint* Goal); // Function AIFramework.FWAIController.FollowGoal // (Native|Public|BlueprintCallable) // @ game+0x3a9a8c0
	void EndMeleeAttack(struct FString SocketNames, struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct UDamageType* DamageTypeClass, struct FName TagName, struct UFWAnimNotifyState_MeleeAttack* AnimNotify); // Function AIFramework.FWAIController.EndMeleeAttack // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x3a9a6f0
	float DiscreteDistanceToLenght(enum class EFWDiscreteDistance Distance); // Function AIFramework.FWAIController.DiscreteDistanceToLenght // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9a660
	bool ClearBehaviorTag(); // Function AIFramework.FWAIController.ClearBehaviorTag // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9a280
	void BeginMeleeAttack(struct FString SocketNames, struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration, struct TArray<struct FVector> SensorLocations, struct UDamageType* DamageTypeClass, struct FName TagName, struct UFWAnimNotifyState_MeleeAttack* AnimNotify); // Function AIFramework.FWAIController.BeginMeleeAttack // (BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3a9a000
	void AllowTurnInPlace(bool Allow); // Function AIFramework.FWAIController.AllowTurnInPlace // (Native|Public|BlueprintCallable) // @ game+0x3a99f70
};

// Class AIFramework.FWMontageProvider
// Size: 0x28 (Inherited: 0x28)
struct UFWMontageProvider : UObject {
};

// Class AIFramework.FWSpaceWrappingDestinationProvider
// Size: 0x28 (Inherited: 0x28)
struct UFWSpaceWrappingDestinationProvider : UObject {
};

// Class AIFramework.FWAIComponent
// Size: 0x1f0 (Inherited: 0x180)
struct UFWAIComponent : UActorComponent {
	struct UAnimMontage* RequestedAnimation; // 0x180(0x08)
	struct ABaseCharacter* TargetPlayerForReaction; // 0x188(0x08)
	struct FVector_NetQuantize10 TargetPointForReaction; // 0x190(0x0c)
	float TargetAlphaForReaction; // 0x19c(0x04)
	char UnknownData_1A0[0x4]; // 0x1a0(0x04)
	struct FVector_NetQuantize10 AimLocation; // 0x1a4(0x0c)
	struct FVector2D AimOffset; // 0x1b0(0x08)
	struct FVector_NetQuantize10 FocalPoint; // 0x1b8(0x0c)
	struct FRotator DesiredRotation; // 0x1c4(0x0c)
	char bUseAimLocation : 1; // 0x1d0(0x01)
	char bAimOffsetForced : 1; // 0x1d0(0x01)
	char bUseControllerDesiredRotation : 1; // 0x1d0(0x01)
	char bShouldCorrectActiveMontageOnClient : 1; // 0x1d0(0x01)
	char UnknownData_1D0_4 : 4; // 0x1d0(0x01)
	char UnknownData_1D1[0x1f]; // 0x1d1(0x1f)

	void UseControllerDesiredRotation(bool bUse); // Function AIFramework.FWAIComponent.UseControllerDesiredRotation // (Final|Native|Public|BlueprintCallable) // @ game+0x3a9d360
	void SetFocalPoint(struct FVector InFocalPoint); // Function AIFramework.FWAIComponent.SetFocalPoint // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3a9cc70
	void SetDesiredRotation(struct FRotator InDesiredRotation); // Function AIFramework.FWAIComponent.SetDesiredRotation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3a9cb00
	void SetAimOffset(struct FVector2D Offset); // Function AIFramework.FWAIComponent.SetAimOffset // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3a9c8b0
	void OnRep_UseControllerDesiredRotation(); // Function AIFramework.FWAIComponent.OnRep_UseControllerDesiredRotation // (Final|Native|Protected) // @ game+0x3a9c2f0
	void OnAnimMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function AIFramework.FWAIComponent.OnAnimMontageEnded // (Final|Native|Protected) // @ game+0x3a9bbd0
	void MulticastSpawnParticleAtLocation(struct UWorld* World, struct UParticleSystem* EmitterTemplate, struct FTransform SpawnTransform, bool bAutoDestroy, enum class EPSCPoolMethod PoolingMethod); // Function AIFramework.FWAIComponent.MulticastSpawnParticleAtLocation // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults) // @ game+0x3a9b9f0
	void K2_MulticastSpawnParticleAtLocation(struct UObject* WorldContextObject, struct UParticleSystem* EmitterTemplate, struct FTransform SpawnTransform, bool bAutoDestroy, enum class EPSCPoolMethod PoolingMethod); // Function AIFramework.FWAIComponent.K2_MulticastSpawnParticleAtLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3a9b4f0
	bool IsUsingControllerDesiredRotation(); // Function AIFramework.FWAIComponent.IsUsingControllerDesiredRotation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b450
	bool IsAimOffsetForced(); // Function AIFramework.FWAIComponent.IsAimOffsetForced // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b2f0
	bool IsAimLocationUsed(); // Function AIFramework.FWAIComponent.IsAimLocationUsed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b2c0
	bool HasAuthority(); // Function AIFramework.FWAIComponent.HasAuthority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b290
	struct APawn* GetPawn(); // Function AIFramework.FWAIComponent.GetPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9b050
	struct FVector GetFocalPoint(); // Function AIFramework.FWAIComponent.GetFocalPoint // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9af70
	struct FRotator GetDesiredRotation(); // Function AIFramework.FWAIComponent.GetDesiredRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9aeb0
	struct AFWAIController* GetController(); // Function AIFramework.FWAIComponent.GetController // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9ada0
	struct FVector2D GetAimOffset(); // Function AIFramework.FWAIComponent.GetAimOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9ac00
	struct FVector GetAimLocation(); // Function AIFramework.FWAIComponent.GetAimLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a9abd0
	void CustomMovementModeAnimEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function AIFramework.FWAIComponent.CustomMovementModeAnimEnded // (Final|Native|Public) // @ game+0x3a9a590
	void Client_PlaySpawnAnimation(struct UAnimMontage* Montage, struct FName SectionName); // Function AIFramework.FWAIComponent.Client_PlaySpawnAnimation // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x3a9a4c0
	void Client_PlayAntFarmAnimation(struct UAnimMontage* Montage, struct FName SectionName); // Function AIFramework.FWAIComponent.Client_PlayAntFarmAnimation // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x3a9a3f0
	void Client_PlayAnimWithCustomMovementMode(struct UAnimMontage* Montage, float PlayRate, struct FName SectionToPlay, enum class EMovementMode CustomMovementMode); // Function AIFramework.FWAIComponent.Client_PlayAnimWithCustomMovementMode // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x3a9a2b0
};

// Class AIFramework.FWAIDamageReactionComponent
// Size: 0x1e0 (Inherited: 0x180)
struct UFWAIDamageReactionComponent : UActorComponent {
	char UnknownData_180[0x8]; // 0x180(0x08)
	struct UAnimMontage* RecoveryToPlay; // 0x188(0x08)
	struct UAITask_PlayDamageReaction* CurrentTwitchTask; // 0x190(0x08)
	struct UAITask_PlayDamageReaction* CurrentFullBodyTask; // 0x198(0x08)
	struct UAnimMontage* LastFBReactionMontage; // 0x1a0(0x08)
	struct UAnimMontage* LastFBRecoveryMontage; // 0x1a8(0x08)
	char UnknownData_1B0[0x28]; // 0x1b0(0x28)
	struct UFWAIDamageReactionRenderingComponent* RenderComponent; // 0x1d8(0x08)

	void OnAnimationTaskFinished(struct UFWAITask* Task, enum class EFWAITaskResult Result); // Function AIFramework.FWAIDamageReactionComponent.OnAnimationTaskFinished // (Final|Native|Protected) // @ game+0x3aa1600
};

// Class AIFramework.FWAIMetrics
// Size: 0x50 (Inherited: 0x28)
struct UFWAIMetrics : UObject {
	float MediumDiscreteDistance; // 0x28(0x04)
	float ShortDiscreteDistance; // 0x2c(0x04)
	float CloseDiscreteDistance; // 0x30(0x04)
	float MeleeDiscreteDistance; // 0x34(0x04)
	enum class EFWDiscreteDistance MinPreferedDistance; // 0x38(0x01)
	enum class EFWDiscreteDistance MaxPreferedDistance; // 0x39(0x01)
	char UnknownData_3A[0x2]; // 0x3a(0x02)
	struct FVector2D CoverSelectionDistance; // 0x3c(0x08)
	float WeaponMaxDistance; // 0x44(0x04)
	float WeaponEffectiveDistance; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class AIFramework.FWAIResponse
// Size: 0x70 (Inherited: 0x28)
struct UFWAIResponse : UObject {
	struct TArray<struct UFWAIResponseChannel*> AutoSubscribeChannel; // 0x28(0x10)
	struct TArray<struct UFWAIResponseChannel*> SubscribedChannel; // 0x38(0x10)
	float TimerInterval; // 0x48(0x04)
	float TimerRandomDeviation; // 0x4c(0x04)
	float TimerNextActivationTime; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct AFWAIController* AIOwner; // 0x58(0x08)
	struct ABaseCharacter* Avatar; // 0x60(0x08)
	char bSuppressed : 1; // 0x68(0x01)
	char UnknownData_68_1 : 7; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)

	void UnSuppress(); // Function AIFramework.FWAIResponse.UnSuppress // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1c40
	void Suppress(); // Function AIFramework.FWAIResponse.Suppress // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1ac0
	bool ShouldRespond(struct UFWAIResponseChannel* SourceChannel, struct AFWAIController* AI, struct ABaseCharacter* character); // Function AIFramework.FWAIResponse.ShouldRespond // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x3aa19b0
	void ReceiveExecution(struct UFWAIResponseChannel* SourceChannel); // Function AIFramework.FWAIResponse.ReceiveExecution // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x3aa1920
	bool IsSuppressed(); // Function AIFramework.FWAIResponse.IsSuppressed // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa15c0
	struct ABaseCharacter* GetAvatar(); // Function AIFramework.FWAIResponse.GetAvatar // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1370
	struct AFWAIController* GetAIOwner(); // Function AIFramework.FWAIResponse.GetAIOwner // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1330
};

// Class AIFramework.FWAIRes_Damage
// Size: 0x80 (Inherited: 0x70)
struct UFWAIRes_Damage : UFWAIResponse {
	char UnknownData_70[0x10]; // 0x70(0x10)
};

// Class AIFramework.FWAITask
// Size: 0x98 (Inherited: 0x70)
struct UFWAITask : UAITask {
	struct FMulticastInlineDelegate OnAITaskEnded; // 0x70(0x10)
	char UnknownData_80[0x18]; // 0x80(0x18)
};

// Class AIFramework.FWAIRes_AbilityTag
// Size: 0x78 (Inherited: 0x70)
struct UFWAIRes_AbilityTag : UFWAIResponse {
	struct FGameplayTag AbilityTag; // 0x70(0x08)

	struct FWAIResChannel_AbilityTagStatus GetTagStatus(struct UFWAIResChannel_AbilityTag* SourceChannel); // Function AIFramework.FWAIRes_AbilityTag.GetTagStatus // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1500
};

// Class AIFramework.FWAISquad
// Size: 0x1a8 (Inherited: 0x28)
struct UFWAISquad : UObject {
	struct FName SquadName; // 0x28(0x08)
	float EnemySelectionInterval; // 0x30(0x04)
	float AssignedTargetPersistanceTime; // 0x34(0x04)
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct AController* SquadLeader; // 0x40(0x08)
	struct TArray<struct AGoalPoint*> NewGoals; // 0x48(0x10)
	struct TArray<struct FFWSquadEnemyInfo> SquadEnemyList; // 0x58(0x10)
	struct TArray<struct AFWAIController*> GoalRequest; // 0x68(0x10)
	char UnknownData_78[0x10c]; // 0x78(0x10c)
	float FlankingSelectDelay; // 0x184(0x04)
	float FlankingSelectAfterEventDelay; // 0x188(0x04)
	float FlankingBeenAttackedInterval; // 0x18c(0x04)
	float FlankingRandomScoreWeight; // 0x190(0x04)
	float FlankingAngleScoreWeight; // 0x194(0x04)
	float FlankingAlreadySelectedWeight; // 0x198(0x04)
	float FlankingBeingAttackedScoreWeight; // 0x19c(0x04)
	int32_t FlankingRatio; // 0x1a0(0x04)
	float FlankingGoodFlankingAngle; // 0x1a4(0x04)

	void UnregisterSquadMember(struct AController* OldMember); // Function AIFramework.FWAISquad.UnregisterSquadMember // (Native|Public|BlueprintCallable) // @ game+0x393eb40
	void RegisterSquadMember(struct AController* NewMember, bool bLeader); // Function AIFramework.FWAISquad.RegisterSquadMember // (Native|Public|BlueprintCallable) // @ game+0x3aa6570
	bool IsAnySquadMemberInRange(struct AController* MemberToExclude, struct FVector Origin, float MinRadius, float MaxRadius); // Function AIFramework.FWAISquad.IsAnySquadMemberInRange // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aa6100
	void GetSquadMembersInRange(struct AController* MemberToExclude, struct FVector Origin, float Radius, struct TArray<struct AController*> OutControllers); // Function AIFramework.FWAISquad.GetSquadMembersInRange // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aa5f70
	void GetSquadMembers(struct TArray<struct AController*> SquadMembers); // Function AIFramework.FWAISquad.GetSquadMembers // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3aa5ec0
	void GetSquadMemberPawns(struct TArray<struct APawn*> SquadMemberPawns); // Function AIFramework.FWAISquad.GetSquadMemberPawns // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3aa5e10
	struct AController* GetSquadLeadaer(); // Function AIFramework.FWAISquad.GetSquadLeadaer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aa5df0
	struct AController* GetRandomMemberFromSquadOtherThanGiven(struct AController* MemberToExclude); // Function AIFramework.FWAISquad.GetRandomMemberFromSquadOtherThanGiven // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa5d60
	int32_t GetNumberOfSquadMembers(); // Function AIFramework.FWAISquad.GetNumberOfSquadMembers // (Native|Public|BlueprintCallable) // @ game+0x33e9460
};

// Class AIFramework.FWAISemaphoreGroupClass
// Size: 0x30 (Inherited: 0x28)
struct UFWAISemaphoreGroupClass : UObject {
	enum class None ConcurrentLimit; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// Class AIFramework.FWAISystem
// Size: 0x408 (Inherited: 0x128)
struct UFWAISystem : UAISystem {
	struct AFWCharacterCache* CharacterCache; // 0x128(0x08)
	struct AFWWaveSpawningSystem* CurrentWss; // 0x130(0x08)
	char UnknownData_138[0x10]; // 0x138(0x10)
	int32_t ActionAreaGridSpace; // 0x148(0x04)
	int32_t ActionAreaMinSpotDistToCover; // 0x14c(0x04)
	struct TArray<struct ACombatArena*> ActiveCombatAreas; // 0x150(0x10)
	int32_t MaxNumberOfReactionsAtTime; // 0x160(0x04)
	float GlobalCooldownTime; // 0x164(0x04)
	float GlobalCooldownMaxTime; // 0x168(0x04)
	int32_t MaxNumberOfSpawns; // 0x16c(0x04)
	char UnknownData_170[0x18]; // 0x170(0x18)
	struct FSoftObjectPath SmartObjectLogicAssetRef; // 0x188(0x18)
	char UnknownData_1A0_0 : 7; // 0x1a0(0x01)
	bool bAntFarmEnableOptimization : 1; // 0x1a0(0x01)
	char UnknownData_1A1[0x3]; // 0x1a1(0x03)
	float AntFarmMinimalDistanceToPlayer; // 0x1a4(0x04)
	struct USmartObjectLogic* SmartObjectLogic; // 0x1a8(0x08)
	float SignificanceCheckTickRate; // 0x1b0(0x04)
	char UnknownData_1B4[0x54]; // 0x1b4(0x54)
	struct TArray<struct FSemaphorePendingUnlockItem> SemaphorePendingUnlocks; // 0x208(0x10)
	struct TMap<struct AActor*, struct FWAIConcurentSemaphoreGroup> BTConcurentSemaphoreGroupsPerTarget; // 0x218(0x50)
	char UnknownData_268[0x8]; // 0x268(0x08)
	struct FSoftClassPath AISPawnSystemClassName; // 0x270(0x18)
	struct UAISpawnSubsystem* AISpawnSubsystem; // 0x288(0x08)
	struct FSoftClassPath AIReactionsManagerClassName; // 0x290(0x18)
	struct UFWAIReactionsManager* AIReactionsManager; // 0x2a8(0x08)
	struct UFWAIVisibilitySystem* AIVisibilitySystem; // 0x2b0(0x08)
	struct ACombatArena* CurrentCombatArea; // 0x2b8(0x08)
	struct TArray<struct AGoalPoint*> Goals; // 0x2c0(0x10)
	struct TArray<struct UFWAISquad*> Squads; // 0x2d0(0x10)
	struct TArray<struct AFWEncounterManager*> ActiveEncounterManagers; // 0x2e0(0x10)
	char UnknownData_2F0[0x118]; // 0x2f0(0x118)

	void GetCharactersInRange(struct UObject* WorldContextObject, struct AActor* CenterActor, float RadiusAroundCenterActor, enum class ETeam Team, bool bIncludeCenterActorInResult, struct TArray<struct AActor*> OutFoundCharacters); // Function AIFramework.FWAISystem.GetCharactersInRange // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3aa5b90
	struct UFWAISquad* GetAISquadByName(struct UObject* WorldContextObject, struct FName SquadName); // Function AIFramework.FWAISystem.GetAISquadByName // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3aa5ad0
	struct UFWAISquad* ConditionalCreateSquad(struct UObject* WorldContextObject, struct FName SquadName, struct AFWAIController* AI); // Function AIFramework.FWAISystem.ConditionalCreateSquad // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3aa59e0
	void AddAvoidPoint(struct UObject* WorldContextObject, struct FVector InCentre, float InRadius, float InHalfHeight, float InTimeToLive, int32_t InGroupMask); // Function AIFramework.FWAISystem.AddAvoidPoint // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3aa5820
};

// Class AIFramework.AITask_PlayAnimation
// Size: 0xf0 (Inherited: 0x98)
struct UAITask_PlayAnimation : UFWAITask {
	char UnknownData_98[0x38]; // 0x98(0x38)
	struct UAnimMontage* MontageToPlay; // 0xd0(0x08)
	char UnknownData_D8[0x18]; // 0xd8(0x18)
};

// Class AIFramework.FWAITask_MantleOverCover
// Size: 0x128 (Inherited: 0xf0)
struct UFWAITask_MantleOverCover : UAITask_PlayAnimation {
	char UnknownData_F0[0x1c]; // 0xf0(0x1c)
	float MantleLength; // 0x10c(0x04)
	float HitDetectionDistance; // 0x110(0x04)
	float HitDetectionFOV; // 0x114(0x04)
	char UnknownData_118_0 : 7; // 0x118(0x01)
	bool bOrientTowardTargetRotation : 1; // 0x118(0x01)
	char UnknownData_119[0x7]; // 0x119(0x07)
	struct UAnimMontage* SelectedAnimation; // 0x120(0x08)
};

// Class AIFramework.FWAITask_Jump
// Size: 0x138 (Inherited: 0xf0)
struct UFWAITask_Jump : UAITask_PlayAnimation {
	char UnknownData_F0[0x24]; // 0xf0(0x24)
	float JumpOverDiffRange; // 0x114(0x04)
	float RotationBlendingTime; // 0x118(0x04)
	char UnknownData_11C[0xc]; // 0x11c(0x0c)
	struct UAnimMontage* SelectedAnimation; // 0x128(0x08)
	char UnknownData_130[0x8]; // 0x130(0x08)
};

// Class AIFramework.FWAITask_CoverAction
// Size: 0x108 (Inherited: 0xf0)
struct UFWAITask_CoverAction : UAITask_PlayAnimation {
	char UnknownData_F0[0x18]; // 0xf0(0x18)

	void OnDamageEvent(struct ABaseCharacter* EnemyCharacter, struct FTakeHitInfo TakeHitInfo); // Function AIFramework.FWAITask_CoverAction.OnDamageEvent // (Final|Native|Protected) // @ game+0x3aa6270
};

// Class AIFramework.FWAITask_PeekAction
// Size: 0x130 (Inherited: 0x108)
struct UFWAITask_PeekAction : UFWAITask_CoverAction {
	float MaxDamageSenseAge; // 0x108(0x04)
	float MaxSightSenseAge; // 0x10c(0x04)
	char UnknownData_110[0x10]; // 0x110(0x10)
	struct UAnimMontage* ActionMontage; // 0x120(0x08)
	struct UAnimMontage* MontageToHide; // 0x128(0x08)
};

// Class AIFramework.FWBackpackComponent
// Size: 0xe40 (Inherited: 0xda0)
struct UFWBackpackComponent : USkeletalMeshComponent {
	struct FString SocketName; // 0xda0(0x10)
	struct Acharacter* DamageInstigatorCharacter; // 0xdb0(0x08)
	char UnknownData_DB8_0 : 7; // 0xdb8(0x01)
	bool bBackpackEnabled : 1; // 0xdb8(0x01)
	char UnknownData_DB9[0x3]; // 0xdb9(0x03)
	float MaxHealth; // 0xdbc(0x04)
	char UnknownData_DC0[0x4]; // 0xdc0(0x04)
	float Health; // 0xdc4(0x04)
	struct UCharacterCustomizationComponent* CustomizationComponent; // 0xdc8(0x08)
	char UnknownData_DD0[0x8]; // 0xdd0(0x08)
	struct AController* DamageInstigator; // 0xdd8(0x08)
	struct TMap<struct FName, struct FGroupMaterialData> LoadedMaterials; // 0xde0(0x50)
	char UnknownData_E30[0x10]; // 0xe30(0x10)

	void SetBackpackMaxHealth(float Amount); // Function AIFramework.FWBackpackComponent.SetBackpackMaxHealth // (Final|Native|Public|BlueprintCallable) // @ game+0x3aab130
	void OnRep_Health(); // Function AIFramework.FWBackpackComponent.OnRep_Health // (Final|Native|Protected) // @ game+0x3aab110
	void OnComponentsMaterialGroupReset(struct UMeshComponent* MeshComponent, enum class ECustomizationSlotType SlotType); // Function AIFramework.FWBackpackComponent.OnComponentsMaterialGroupReset // (Final|Native|Protected) // @ game+0x3aaaed0
	void OnComponentsMaterialGroupApplied(struct UMeshComponent* MeshComponent, struct FName GroupName, enum class ECustomizationSlotType SlotType); // Function AIFramework.FWBackpackComponent.OnComponentsMaterialGroupApplied // (Final|Native|Protected) // @ game+0x3aaadd0
	void HideBackpack(); // Function AIFramework.FWBackpackComponent.HideBackpack // (Net|NetReliableNative|Event|NetMulticast|Protected|BlueprintCallable) // @ game+0x3aaaba0
	float GetBackpackMaxHealth(); // Function AIFramework.FWBackpackComponent.GetBackpackMaxHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aaaaf0
	float GetBackpackHealth(); // Function AIFramework.FWBackpackComponent.GetBackpackHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aaaad0
};

// Class AIFramework.AnimNotify_SmartObject
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_SmartObject : UAnimNotify {
	enum class ESmartObjectAnimNotifyType NotifyType; // 0x38(0x01)
	enum class ESmartObjectAttachPoint AttachPoint; // 0x39(0x01)
	enum class EAttachmentRule LocationRule; // 0x3a(0x01)
	enum class EAttachmentRule RotationRule; // 0x3b(0x01)
	struct FName SmartObjectNotifyName; // 0x3c(0x08)
	char UnknownData_44_0 : 7; // 0x44(0x01)
	bool bUseSharedSpace : 1; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
};

// Class AIFramework.FWAnimNotifyState_MeleeAttack
// Size: 0x98 (Inherited: 0x40)
struct UFWAnimNotifyState_MeleeAttack : UFWAnimNotifyState {
	struct UDamageType* DamageTypeClass; // 0x40(0x08)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bAllowHittingMultipleTargets : 1; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct FString SensorSockets; // 0x50(0x10)
	char UnknownData_60_0 : 7; // 0x60(0x01)
	bool bUseOneHitFOVTest : 1; // 0x60(0x01)
	char UnknownData_61[0x3]; // 0x61(0x03)
	float HitDetectionFOV; // 0x64(0x04)
	float HitDetectionFOVOffset; // 0x68(0x04)
	float HitDetectionDistance; // 0x6c(0x04)
	char UnknownData_70_0 : 7; // 0x70(0x01)
	bool bDisableControllerEvents : 1; // 0x70(0x01)
	char UnknownData_71[0x27]; // 0x71(0x27)
};

// Class AIFramework.FWBTService_ContextOverride
// Size: 0x70 (Inherited: 0x70)
struct UFWBTService_ContextOverride : UBTService {
};

// Class AIFramework.BaseCharacterMovementComponent
// Size: 0xa30 (Inherited: 0x8e0)
struct UBaseCharacterMovementComponent : UPcfCharacterMovementComponent {
	char UnknownData_8E0_0 : 7; // 0x8e0(0x01)
	bool NEW_ANIMATION_SYSTEM : 1; // 0x8d8(0x01)
	bool bLimitSpeedByDirection : 1; // 0x8d9(0x01)
	float MaxSpeedSideways; // 0x8dc(0x04)
	float MaxSpeedBack; // 0x8e0(0x04)
	enum class EMovementMood MovementMood; // 0x8e4(0x01)
	struct FMovementMoodSetup MovementMoodsConfig[0x8]; // 0x8e8(0x120)
	struct FMulticastInlineDelegate OnMovementMoodChangedEvent; // 0xa08(0x10)
	float ExtraRVORadius; // 0xa18(0x04)
	char UnknownData_A1E[0x12]; // 0xa1e(0x12)

	void SetAvoidanceWeight(float Weight); // Function AIFramework.BaseCharacterMovementComponent.SetAvoidanceWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x3a90cb0
	void OverrideMovementMoodSpeed(enum class EMovementMood Mood, float Speed); // Function AIFramework.BaseCharacterMovementComponent.OverrideMovementMoodSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x3a909f0
	void OnRep_MovementMood(); // Function AIFramework.BaseCharacterMovementComponent.OnRep_MovementMood // (Final|Native|Protected) // @ game+0x3a90880
	bool IsUsingNewAnimationSystem(); // Function AIFramework.BaseCharacterMovementComponent.IsUsingNewAnimationSystem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942a40
	float GetMovementMoodSpeed(enum class EMovementMood Mood); // Function AIFramework.BaseCharacterMovementComponent.GetMovementMoodSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x3a8fcd0
};

// Class AIFramework.CharacterSpawner
// Size: 0x390 (Inherited: 0x2f0)
struct ACharacterSpawner : AActor {
	char UnknownData_2F0_0 : 7; // 0x2f0(0x01)
	bool bStartEnabled : 1; // 0x2f0(0x01)
	char UnknownData_2F1_0 : 7; // 0x2f1(0x01)
	bool bEnabled : 1; // 0x2f1(0x01)
	char UnknownData_2F2_0 : 7; // 0x2f2(0x01)
	bool bBannedFromEncounterManager : 1; // 0x2f2(0x01)
	char UnknownData_2F3[0x1]; // 0x2f3(0x01)
	char UnknownData_2F4_0 : 7; // 0x2f4(0x01)
	bool bSuppressDamageUntilMontageFinish : 1; // 0x2f4(0x01)
	char UnknownData_2F5_0 : 7; // 0x2f5(0x01)
	bool bLaunchCharacter : 1; // 0x2f5(0x01)
	char UnknownData_2F6[0x2]; // 0x2f6(0x02)
	struct TArray<struct FAISpawnGroup> SpawnGroups; // 0x2f8(0x10)
	int32_t NextSkelMeshIndex; // 0x308(0x04)
	char UnknownData_30C[0x4]; // 0x30c(0x04)
	struct FMulticastInlineDelegate OnSpawn; // 0x310(0x10)
	struct FMulticastInlineDelegate OnCharacterKilledDelegate; // 0x320(0x10)
	struct FMulticastInlineDelegate OnKilledSpawnDelegate; // 0x330(0x10)
	struct UFWAISystem* AISystem; // 0x340(0x08)
	struct ABaseGameMode* BaseGameMode; // 0x348(0x08)
	char UnknownData_350[0x8]; // 0x350(0x08)
	struct TArray<struct TSoftObjectPtr<struct AActionArea>> LinktToActionAreas; // 0x358(0x10)
	struct FVector LaunchDestination; // 0x368(0x0c)
	float LaunchRadius; // 0x374(0x04)
	float LaunchGroundSpeed; // 0x378(0x04)
	float LaunchExtraHeightInMiddle; // 0x37c(0x04)
	char UnknownData_380_0 : 7; // 0x380(0x01)
	bool bNotifyAboutEndOfLaunch : 1; // 0x380(0x01)
	char UnknownData_381_0 : 7; // 0x381(0x01)
	bool bWaitForAnimationNotify : 1; // 0x381(0x01)
	char UnknownData_382[0x2]; // 0x382(0x02)
	struct FName AnimNotifyNameOverride; // 0x384(0x08)
	char UnknownData_38C[0x4]; // 0x38c(0x04)

	void RequestSpawnAI(struct UObject* WorldContextObject, struct FFWAIArchetypeVariation ArchetypeVariation, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct TArray<struct FNameWrapper> CustomLoadoutClasses, struct FMontageAssetSelector Montage, enum class ETeam Team, struct AActor* SpawnInstigator, bool bDisableCollision); // Function AIFramework.CharacterSpawner.RequestSpawnAI // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3a96320
	void OnCharacterKilled(struct ABaseCharacter* character, struct FTakeHitInfo TakeHitInfo); // Function AIFramework.CharacterSpawner.OnCharacterKilled // (Final|Native|Protected) // @ game+0x3a95f30
	bool IsSpawnerEnabledOnStart(); // Function AIFramework.CharacterSpawner.IsSpawnerEnabledOnStart // (Final|Native|Public|BlueprintCallable) // @ game+0x3a95c10
	bool IsSpawnerEnabled(); // Function AIFramework.CharacterSpawner.IsSpawnerEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x3a95bf0
	bool IsAllowedToSpawn(struct FAISpawnParams SpawnParams); // Function AIFramework.CharacterSpawner.IsAllowedToSpawn // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3a95b20
	void EnableSpawnGroup(int32_t GroupIndex, bool bResetCounters); // Function AIFramework.CharacterSpawner.EnableSpawnGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x3a959d0
	void EnableSpawner(bool bResetCounters); // Function AIFramework.CharacterSpawner.EnableSpawner // (Final|Native|Public|BlueprintCallable) // @ game+0x3a95a90
	void EnableGroup(int32_t GroupIndex, bool bEnable, bool bResetCounters); // Function AIFramework.CharacterSpawner.EnableGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x3a958d0
	void Enable(bool bEnable, bool bResetCounters); // Function AIFramework.CharacterSpawner.Enable // (Final|Native|Public|BlueprintCallable) // @ game+0x3a95800
	void DisableSpawnGroup(int32_t GroupIndex); // Function AIFramework.CharacterSpawner.DisableSpawnGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x3a95760
	void DisableSpawner(); // Function AIFramework.CharacterSpawner.DisableSpawner // (Final|Native|Public|BlueprintCallable) // @ game+0x3a957e0
};

// Class AIFramework.FWCrowdFollowingComponent
// Size: 0x390 (Inherited: 0x368)
struct UFWCrowdFollowingComponent : UCrowdFollowingComponent {
	float CrowdCheckRadiusMultiplayer; // 0x368(0x04)
	char UnknownData_36C[0x4]; // 0x36c(0x04)
	struct UFWAITask_MantleOverCover* MantleTask; // 0x370(0x08)
	char UnknownData_378[0x18]; // 0x378(0x18)

	void OnMantleTaskEnded(struct UFWAITask* Task, enum class EFWAITaskResult Result); // Function AIFramework.FWCrowdFollowingComponent.OnMantleTaskEnded // (Final|Native|Protected) // @ game+0x3ab57f0
};

// Class AIFramework.FWEncounterManager
// Size: 0x5d0 (Inherited: 0x2f0)
struct AFWEncounterManager : AActor {
	char UnknownData_2F0[0x8]; // 0x2f0(0x08)
	int32_t WavePreviewIndex; // 0x2f8(0x04)
	struct FName EncounterName; // 0x2fc(0x08)
	char UnknownData_304_0 : 7; // 0x304(0x01)
	bool bEnabled : 1; // 0x304(0x01)
	char UnknownData_305[0x3]; // 0x305(0x03)
	struct ACombatArena* EncounterArena; // 0x308(0x08)
	struct UFWEncounterData* EncounterSetup; // 0x310(0x08)
	struct TArray<struct FFWEncounterWaveData> Waves; // 0x318(0x10)
	struct FEncounterSetup DefaultSetup; // 0x328(0x20)
	struct TArray<struct FConditionalEncounterSetupGroup> ConditionalSetups; // 0x348(0x10)
	char UnknownData_358_0 : 7; // 0x358(0x01)
	bool bAppendImportedData : 1; // 0x358(0x01)
	char UnknownData_359[0x7]; // 0x359(0x07)
	struct UFWEncounterData* SetupToImport; // 0x360(0x08)
	struct FMulticastInlineDelegate OnWaveBeginSpawning; // 0x368(0x10)
	struct FMulticastInlineDelegate OnWaveEndSpawning; // 0x378(0x10)
	struct FMulticastInlineDelegate OnWaveKilled; // 0x388(0x10)
	struct FMulticastInlineDelegate OnWaveTimeElapsed; // 0x398(0x10)
	struct FMulticastInlineDelegate OnAllWavesEndSpawning; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnAllWavesWereKilled; // 0x3b8(0x10)
	struct FMulticastInlineDelegate OnCharactersWereKilled; // 0x3c8(0x10)
	struct FMulticastInlineDelegate OnSpawnedCharacterKilled; // 0x3d8(0x10)
	struct FMulticastInlineDelegate OnCharacterSpawned; // 0x3e8(0x10)
	struct FMulticastInlineDelegate OnSetupConditionEvaluation; // 0x3f8(0x10)
	struct FMulticastInlineDelegate OnWaveBeginCombat; // 0x408(0x10)
	struct FMulticastInlineDelegate OnEncounterReset; // 0x418(0x10)
	struct UFWAISystem* AISystem; // 0x428(0x08)
	struct ABaseGameMode* BaseGameMode; // 0x430(0x08)
	struct UAISpawnSubsystem* SpawnSubsystem; // 0x438(0x08)
	struct UFWAdaptiveMusicSystem* AdaptiveMusicSystem; // 0x440(0x08)
	struct AActor* EncounterInstigator; // 0x448(0x08)
	char UnknownData_450[0xd0]; // 0x450(0xd0)
	struct TArray<struct ABaseCharacter*> SpawnedCharacters; // 0x520(0x10)
	struct TArray<struct ACharacterSpawner*> BusySpawners; // 0x530(0x10)
	char UnknownData_540[0x90]; // 0x540(0x90)

	void StopEncounter(struct UObject* WorldContextObject, struct FName InEncounterName, struct AFWEncounterManager* Encounter); // Function AIFramework.FWEncounterManager.StopEncounter // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3ab5ec0
	bool StartEncounter(struct UObject* WorldContextObject, struct AActor* InstigatorActor, struct FName InEncounterName, struct AFWEncounterManager* Encounter, bool bDontStartIfCompleted); // Function AIFramework.FWEncounterManager.StartEncounter // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3ab5d40
	void SetEncounterCompleted(bool bCompleted); // Function AIFramework.FWEncounterManager.SetEncounterCompleted // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x3ab5cb0
	void SetConditionAsValid(bool bForceRestart); // Function AIFramework.FWEncounterManager.SetConditionAsValid // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3ab5c20
	void ResetEncounter(struct UObject* WorldContextObject, struct FName InEncounterName, struct AFWEncounterManager* Encounter); // Function AIFramework.FWEncounterManager.ResetEncounter // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3ab5b30
	void OnTeamWipeout(); // Function AIFramework.FWEncounterManager.OnTeamWipeout // (Final|Native|Protected) // @ game+0x3ab5b10
	void OnSpawned(struct AActor* InInstigator, struct ACharacterSpawner* Spawner, struct AAIController* Controller, struct APawn* Pawn, struct FAISpawnParams AISpawnParams); // Function AIFramework.FWEncounterManager.OnSpawned // (Native|Protected|HasOutParms) // @ game+0x3ab58b0
	void OnCharacterKilled(struct ABaseCharacter* character, struct FTakeHitInfo TakeHitInfo); // Function AIFramework.FWEncounterManager.OnCharacterKilled // (Final|Native|Protected) // @ game+0x3ab54a0
	void OnBattleEvent(struct FGlobalEventParams GlobalEvent); // Function AIFramework.FWEncounterManager.OnBattleEvent // (Final|Native|Public|HasOutParms) // @ game+0x3ab53b0
	void OnArenaSwitchedOn(struct ACombatArena* CombatArena, bool bSwitchedByTriggerVolume); // Function AIFramework.FWEncounterManager.OnArenaSwitchedOn // (Final|Native|Protected) // @ game+0x3ab52e0
	void OnArenaSwitchedOff(struct ACombatArena* CombatArena, bool bSwitchedByTriggerVolume, int32_t AIsLeftToFallback); // Function AIFramework.FWEncounterManager.OnArenaSwitchedOff // (Final|Native|Protected) // @ game+0x3ab51e0
	void OnArenaChanged(struct ACombatArena* CombatArena, bool bSpawnersAdded); // Function AIFramework.FWEncounterManager.OnArenaChanged // (Final|Native|Protected) // @ game+0x3ab5110
	bool IsEncounterCompleted(); // Function AIFramework.FWEncounterManager.IsEncounterCompleted // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ab50e0
	bool IsCurrentWaveForced(); // Function AIFramework.FWEncounterManager.IsCurrentWaveForced // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ab50b0
	bool IsAvailable(); // Function AIFramework.FWEncounterManager.IsAvailable // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ab5080
	float GetWaveTime(); // Function AIFramework.FWEncounterManager.GetWaveTime // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3ab5050
	struct FText GetWaveDescription(int32_t Idx); // Function AIFramework.FWEncounterManager.GetWaveDescription // (Final|Native|Public|BlueprintCallable) // @ game+0x3ab4e70
	struct FFWEncounterWaveData GetWave(enum class None Idx); // Function AIFramework.FWEncounterManager.GetWave // (Final|Native|Public|BlueprintCallable) // @ game+0x3ab4d40
	int32_t GetSpawnsPerWave(); // Function AIFramework.FWEncounterManager.GetSpawnsPerWave // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3ab4d10
	int32_t GetNumCharactersLeft(); // Function AIFramework.FWEncounterManager.GetNumCharactersLeft // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3ab4ce0
	int32_t GetNumCharactersAlive(); // Function AIFramework.FWEncounterManager.GetNumCharactersAlive // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ab4cc0
	struct FEncounterSetup GetDefaultSetup(); // Function AIFramework.FWEncounterManager.GetDefaultSetup // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3ab4c90
	int32_t GetCurrentWaveIndex(); // Function AIFramework.FWEncounterManager.GetCurrentWaveIndex // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ab4c70
	struct FEncounterSetup GetCurrentSetup(); // Function AIFramework.FWEncounterManager.GetCurrentSetup // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3ab4c40
	bool ForceNextWave(); // Function AIFramework.FWEncounterManager.ForceNextWave // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3ab4b70
	bool EnqueueAdditionalSpawn(struct ACharacterSpawner* Spawner, bool bIncreaseLimits); // Function AIFramework.FWEncounterManager.EnqueueAdditionalSpawn // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3ab4ab0
	void EnableEncounter(bool bEnable); // Function AIFramework.FWEncounterManager.EnableEncounter // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3ab4a30
	void AssignSetup(struct UFWEncounterData* InEncounterSetup); // Function AIFramework.FWEncounterManager.AssignSetup // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3ab49b0
};

// Class AIFramework.FWEQSTestingPawn
// Size: 0x730 (Inherited: 0x630)
struct AFWEQSTestingPawn : AEQSTestingPawn {
	struct ABaseCharacter* CharacterClass; // 0x628(0x08)
	struct FFWAIArchetypeVariation TestSource; // 0x630(0x20)
	struct AGoalPoint* TestGoal; // 0x650(0x08)
	struct ACombatArena* TestCombatArea; // 0x658(0x08)
	struct AActor* TestTarget; // 0x660(0x08)
	struct AActor* FakeSlotActor; // 0x668(0x08)
	struct FNavAgentProperties NavAgentProps; // 0x670(0x38)
	float WeaponRange; // 0x6a8(0x04)
	float EffectiveWeaponRange; // 0x6ac(0x04)
	float SightRadius; // 0x6b0(0x04)
	float MeleeDistance; // 0x6b4(0x04)
	float CloseDistance; // 0x6b8(0x04)
	float ShortDistance; // 0x6bc(0x04)
	float MediumDistance; // 0x6c0(0x04)
	struct FVector2D PreferedDistance; // 0x6c4(0x08)
	struct FVector2D CoverSelectionDistance; // 0x6cc(0x08)
	enum class ETeam Team; // 0x6d4(0x01)
	struct TArray<struct AActor*> PlayerAlphaSquad; // 0x6d8(0x10)
	struct TArray<struct AActor*> PlayerBetaSquad; // 0x6e8(0x10)
	struct TArray<struct AActor*> EnemyAlphaSquad; // 0x6f8(0x10)
	struct TArray<struct AActor*> EnemyBetaSquad; // 0x708(0x10)
	struct TArray<struct FVector> EQSPointsOfInterest; // 0x718(0x10)
	char bDrawOnlyWhenSelected : 1; // 0x728(0x01)
	char UnknownData_72D_1 : 7; // 0x72d(0x01)
	char UnknownData_72E[0x2]; // 0x72e(0x02)
};

// Class AIFramework.FWNavigationFilter_NoLinks
// Size: 0x48 (Inherited: 0x48)
struct UFWNavigationFilter_NoLinks : UNavigationQueryFilter {
};

// Class AIFramework.FWPathFollowingComponent
// Size: 0x3f0 (Inherited: 0x348)
struct UFWPathFollowingComponent : UPcfPathFollowingComponent {
	struct TArray<struct FFWRepathData> RepathData; // 0x348(0x10)
	float PartialPathUpdateTime; // 0x358(0x04)
	char UnknownData_35C_0 : 7; // 0x35c(0x01)
	bool bSmooth : 1; // 0x35c(0x01)
	char UnknownData_35D[0x3]; // 0x35d(0x03)
	int32_t SmoothingLookAheadPoints; // 0x360(0x04)
	float SmoothingLookAheadDistance; // 0x364(0x04)
	char UnknownData_368_0 : 7; // 0x368(0x01)
	bool bLimitRVONearEndPoint : 1; // 0x368(0x01)
	char UnknownData_369[0x3]; // 0x369(0x03)
	float LimitRVONearEndPointAtDistance; // 0x36c(0x04)
	float DisableRVONearEndPointAtDistance; // 0x370(0x04)
	char UnknownData_374_0 : 7; // 0x374(0x01)
	bool bSmoothFromActorLocation : 1; // 0x374(0x01)
	char UnknownData_375_0 : 7; // 0x375(0x01)
	bool bGoalPredictionPathfindingEnabled : 1; // 0x375(0x01)
	char UnknownData_376[0x2]; // 0x376(0x02)
	struct UAITask_PlayAnimation* CoverLinkActionTask; // 0x378(0x08)
	char UnknownData_380[0x38]; // 0x380(0x38)
	struct AActor* PredictionHistoryTarget; // 0x3b8(0x08)
	char UnknownData_3C0[0x30]; // 0x3c0(0x30)

	void OnMantleTaskEnded(struct UFWAITask* Task, enum class EFWAITaskResult Result); // Function AIFramework.FWPathFollowingComponent.OnMantleTaskEnded // (Final|Native|Protected) // @ game+0x3ab9d00
	void OnJumpTaskEnded(struct UFWAITask* Task, enum class EFWAITaskResult Result); // Function AIFramework.FWPathFollowingComponent.OnJumpTaskEnded // (Final|Native|Protected) // @ game+0x3ab9bc0
	struct AActor* GetDestinationActor(); // Function AIFramework.FWPathFollowingComponent.GetDestinationActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ab9a30
};

// Class AIFramework.QueryContext_AllEnemies
// Size: 0x28 (Inherited: 0x28)
struct UQueryContext_AllEnemies : UEnvQueryContext {
};

// Class AIFramework.QueryContext_AllEnemiesWithinHostileRange
// Size: 0x30 (Inherited: 0x28)
struct UQueryContext_AllEnemiesWithinHostileRange : UEnvQueryContext {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class AIFramework.FWWaveSpawningSystem
// Size: 0x658 (Inherited: 0x2f0)
struct AFWWaveSpawningSystem : AActor {
	struct FMulticastInlineDelegate OnWaveKilled; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnCharacterKilled; // 0x300(0x10)
	struct FMulticastInlineDelegate OnCharacterSpawned; // 0x310(0x10)
	struct FMulticastInlineDelegate OnHPCountReached; // 0x320(0x10)
	struct FMulticastInlineDelegate OnKillCountReached; // 0x330(0x10)
	struct FMulticastInlineDelegate OnWaveEndSpawning; // 0x340(0x10)
	struct FMulticastInlineDelegate OnWaveBeginSpawning; // 0x350(0x10)
	struct FMulticastInlineDelegate OnWSSBeginWork; // 0x360(0x10)
	struct FMulticastInlineDelegate OnTeamWipeout; // 0x370(0x10)
	struct FMulticastInlineDelegate OnShutdown; // 0x380(0x10)
	struct FMulticastInlineDelegate OnBeginCombat; // 0x390(0x10)
	char UnknownData_3A0_0 : 7; // 0x3a0(0x01)
	bool bStartMusic : 1; // 0x3a0(0x01)
	char UnknownData_3A1[0x7]; // 0x3a1(0x07)
	struct UBaseBiomeData* Biome; // 0x3a8(0x08)
	struct TArray<struct FSpawnWaveData> Waves; // 0x3b0(0x10)
	char UnknownData_3C0[0x208]; // 0x3c0(0x208)
	struct FWssTransient transient; // 0x5c8(0x78)
	char UnknownData_640[0x18]; // 0x640(0x18)

	void StartWaveWithDelay(int32_t WaveIndex, float Seconds); // Function AIFramework.FWWaveSpawningSystem.StartWaveWithDelay // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abd7b0
	struct TArray<struct AFWWaveSpawningSystem*> StartWavesByNames(struct TArray<struct FName> WaveNamesToStart); // Function AIFramework.FWWaveSpawningSystem.StartWavesByNames // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3abd880
	void StartWaveByNameWithDelay(struct FName WaveName, float Seconds); // Function AIFramework.FWWaveSpawningSystem.StartWaveByNameWithDelay // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abd6e0
	struct AFWWaveSpawningSystem* StartWaveByName(struct FName WaveName); // Function AIFramework.FWWaveSpawningSystem.StartWaveByName // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abd650
	struct AFWWaveSpawningSystem* StartWave(int32_t WaveIndex); // Function AIFramework.FWWaveSpawningSystem.StartWave // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abd5b0
	void ShutdownWss(); // Function AIFramework.FWWaveSpawningSystem.ShutdownWss // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abd590
	void ShutdownCurrentWss(struct UObject* WorldContextObject); // Function AIFramework.FWWaveSpawningSystem.ShutdownCurrentWss // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3abd520
	struct AFWWaveSpawningSystem* ResetWaveByName(struct FName WaveName); // Function AIFramework.FWWaveSpawningSystem.ResetWaveByName // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abd490
	struct AFWWaveSpawningSystem* ResetWave(int32_t WaveIndex); // Function AIFramework.FWWaveSpawningSystem.ResetWave // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abd400
	void OnSpawnVolumeStateChanged(struct ASpawnVolume* Volume); // Function AIFramework.FWWaveSpawningSystem.OnSpawnVolumeStateChanged // (Final|Native|Public) // @ game+0x3abd2b0
	void OnServerRespawnPlayerHandler(enum class ERespawnReason RespawnReason); // Function AIFramework.FWWaveSpawningSystem.OnServerRespawnPlayerHandler // (Final|Native|Public) // @ game+0x3abd230
	void OnLevelTransitionStartedHandler(struct FName FromRegionName, struct FName ToRegionName); // Function AIFramework.FWWaveSpawningSystem.OnLevelTransitionStartedHandler // (Final|Native|Public) // @ game+0x3abd170
	void OnCharacterKilledHandler(struct ABaseCharacter* character, struct FTakeHitInfo TakeHitInfo); // Function AIFramework.FWWaveSpawningSystem.OnCharacterKilledHandler // (Final|Native|Public) // @ game+0x3abcd20
	bool IsWaveKilled(int32_t WaveIndex); // Function AIFramework.FWWaveSpawningSystem.IsWaveKilled // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abcc90
	bool IsWaveByNameKilled(struct FName WaveName); // Function AIFramework.FWWaveSpawningSystem.IsWaveByNameKilled // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abcc00
	bool IsRunning(); // Function AIFramework.FWWaveSpawningSystem.IsRunning // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3abcbe0
	bool IsAnyWaveAlive(); // Function AIFramework.FWWaveSpawningSystem.IsAnyWaveAlive // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3abcae0
	struct FName GetWaveName(int32_t WaveIndex); // Function AIFramework.FWWaveSpawningSystem.GetWaveName // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abca50
	int32_t GetWaveIndex(struct FName WaveName); // Function AIFramework.FWWaveSpawningSystem.GetWaveIndex // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abc9c0
	int32_t GetTimesWaveStarted(int32_t WaveIndex); // Function AIFramework.FWWaveSpawningSystem.GetTimesWaveStarted // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abc930
	int32_t GetPlayersCount(); // Function AIFramework.FWWaveSpawningSystem.GetPlayersCount // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3abc900
	int32_t GetNumberOfWavesStarted(); // Function AIFramework.FWWaveSpawningSystem.GetNumberOfWavesStarted // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abc8d0
	int32_t GetNumberOfWavesNotStarted(); // Function AIFramework.FWWaveSpawningSystem.GetNumberOfWavesNotStarted // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abc8a0
	int32_t GetNumberOfWavesKilled(); // Function AIFramework.FWWaveSpawningSystem.GetNumberOfWavesKilled // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3abc870
	int32_t GetNumberOfWavesAlive(); // Function AIFramework.FWWaveSpawningSystem.GetNumberOfWavesAlive // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3abc840
	int32_t GetEnemiesSpawnedOverall(); // Function AIFramework.FWWaveSpawningSystem.GetEnemiesSpawnedOverall // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abc7a0
	int32_t GetEnemiesSpawnedByName(struct FName WaveName); // Function AIFramework.FWWaveSpawningSystem.GetEnemiesSpawnedByName // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abc710
	int32_t GetEnemiesSpawned(int32_t WaveIndex); // Function AIFramework.FWWaveSpawningSystem.GetEnemiesSpawned // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abc680
	int32_t GetEnemiesKilledOverall(); // Function AIFramework.FWWaveSpawningSystem.GetEnemiesKilledOverall // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abc650
	int32_t GetEnemiesKilledByName(struct FName WaveName); // Function AIFramework.FWWaveSpawningSystem.GetEnemiesKilledByName // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abc5c0
	int32_t GetEnemiesKilled(int32_t WaveIndex); // Function AIFramework.FWWaveSpawningSystem.GetEnemiesKilled // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abc530
	int32_t GetEnemiesAliveOverall(); // Function AIFramework.FWWaveSpawningSystem.GetEnemiesAliveOverall // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abc500
	int32_t GetEnemiesAliveByName(struct FName WaveName); // Function AIFramework.FWWaveSpawningSystem.GetEnemiesAliveByName // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abc470
	int32_t GetEnemiesAlive(int32_t WaveIndex); // Function AIFramework.FWWaveSpawningSystem.GetEnemiesAlive // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3abc3e0
	void CacheDataForBiome(struct UBaseBiomeData* CurrentBiome); // Function AIFramework.FWWaveSpawningSystem.CacheDataForBiome // (Final|Native|Public) // @ game+0x3abc2e0
	void AbilityStartWaveByNameFromCurrentWss(struct UObject* WorldContextObject, struct FName WaveName); // Function AIFramework.FWWaveSpawningSystem.AbilityStartWaveByNameFromCurrentWss // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3abc070
};

// Class AIFramework.WaypointNavigationGraph
// Size: 0x830 (Inherited: 0x500)
struct AWaypointNavigationGraph : ANavigationData {
	char UnknownData_500[0x330]; // 0x500(0x330)
};

// Class AIFramework.ActionArea
// Size: 0x398 (Inherited: 0x328)
struct AActionArea : ATriggerVolume {
	char UnknownData_328[0x8]; // 0x328(0x08)
	struct TArray<struct TSoftObjectPtr<struct ACharacterSpawner>> ExternalSpawners; // 0x330(0x10)
	struct TArray<struct TSoftObjectPtr<struct AActor>> References; // 0x340(0x10)
	struct TArray<struct ASpawnVolume*> ExternalSpawnVolumes; // 0x350(0x10)
	struct TArray<struct ACharacterSpawner*> SpawnPoints; // 0x360(0x10)
	struct TArray<struct ACharacterSpawner*> ExternalSpawnPoints; // 0x370(0x10)
	struct TArray<struct ACharacterSpawner*> InternalSpawnPoints; // 0x380(0x10)
	char bUseInternalSpawnPoints : 1; // 0x390(0x01)
	char bEnabled : 1; // 0x390(0x01)
	char bStartEnabled : 1; // 0x390(0x01)
	char UnknownData_390_3 : 5; // 0x390(0x01)
	char UnknownData_391[0x7]; // 0x391(0x07)

	bool IsEnabled(); // Function AIFramework.ActionArea.IsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x3a900d0
	struct TArray<struct TSoftObjectPtr<struct ACharacterSpawner>> GetExternalSpawner(); // Function AIFramework.ActionArea.GetExternalSpawner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a8fa60
	void Enable(); // Function AIFramework.ActionArea.Enable // (Native|Public|BlueprintCallable) // @ game+0x1560680
	void Disable(); // Function AIFramework.ActionArea.Disable // (Native|Public|BlueprintCallable) // @ game+0x15da3d0
};

// Class AIFramework.ActionAreaDebugRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UActionAreaDebugRenderingComponent : UPrimitiveComponent {
};

// Class AIFramework.ActionAreaRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UActionAreaRenderingComponent : UPrimitiveComponent {
};

// Class AIFramework.AIRouteRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UAIRouteRenderingComponent : UPrimitiveComponent {
};

// Class AIFramework.AIRoute
// Size: 0x350 (Inherited: 0x318)
struct AAIRoute : ANavigationObjectBase {
	enum class ERouteType RouteType; // 0x318(0x01)
	char UnknownData_319[0x7]; // 0x319(0x07)
	struct TArray<struct AActor*> RouteList; // 0x320(0x10)
	char bDrawWithoutSelection : 1; // 0x330(0x01)
	char UnknownData_330_1 : 7; // 0x330(0x01)
	char UnknownData_331[0x7]; // 0x331(0x07)
	struct UBillboardComponent* SpriteComponent; // 0x338(0x08)
	struct FMulticastInlineDelegate OnMoveFinishedEvent; // 0x340(0x10)

	void OnMoveFinished(struct AFWAIController* AI, struct ABaseCharacter* character, enum class EPawnActionResult WithResult); // Function AIFramework.AIRoute.OnMoveFinished // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent|Const) // @ game+0x3a904b0
	void OnActorPostEditMove(struct AActor* Actor); // Function AIFramework.AIRoute.OnActorPostEditMove // (Final|Native|Protected) // @ game+0x15c6560
};

// Class AIFramework.PawnAction_FollowRoute
// Size: 0xd8 (Inherited: 0xc0)
struct UPawnAction_FollowRoute : UPawnAction_Sequence {
	char UnknownData_C0[0x18]; // 0xc0(0x18)
};

// Class AIFramework.AIRouteNode
// Size: 0x328 (Inherited: 0x318)
struct AAIRouteNode : ANavigationObjectBase {
	struct UAnimMontage* CustomWaitAnimation; // 0x318(0x08)
	struct UBillboardComponent* SpriteComponent; // 0x320(0x08)
};

// Class AIFramework.AISpawnSubsystemInterface
// Size: 0x28 (Inherited: 0x28)
struct UAISpawnSubsystemInterface : UInterface {

	void SpawnStarted(); // Function AIFramework.AISpawnSubsystemInterface.SpawnStarted // (Native|Public) // @ game+0x3948ca0
	void SpawnFullyEnded(); // Function AIFramework.AISpawnSubsystemInterface.SpawnFullyEnded // (Native|Public) // @ game+0x3a90f60
	void SpawnEnded(); // Function AIFramework.AISpawnSubsystemInterface.SpawnEnded // (Native|Public) // @ game+0x3948cc0
};

// Class AIFramework.AISpawnSubsystem
// Size: 0x1a8 (Inherited: 0x28)
struct UAISpawnSubsystem : UObject {
	struct UFWAISystem* AISystem; // 0x28(0x08)
	struct ABaseGameMode* BaseGameMode; // 0x30(0x08)
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct TArray<struct FAISpawnParams> SpawnRequests; // 0x40(0x10)
	char UnknownData_50[0x110]; // 0x50(0x110)
	struct FContinousSpawnSetup ContinousSpawnSetup; // 0x160(0x48)

	void StopContinuousSpawnInRadius(struct UObject* WorldContextObject); // Function AIFramework.AISpawnSubsystem.StopContinuousSpawnInRadius // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3a911a0
	bool StartContinuousSpawnInRadius(struct UObject* WorldContextObject, struct FVector Origin, float Radius, float Frequency, struct TArray<struct ABaseCharacter*> CharactersWhitelist, int32_t MaxSpawnsPerWave); // Function AIFramework.AISpawnSubsystem.StartContinuousSpawnInRadius // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3a90f80
	bool RequestSpawnInRadius(struct UObject* WorldContextObject, struct FVector Origin, float Radius, struct TArray<struct ABaseCharacter*> CharactersWhitelist, int32_t MaxSpawnsPerWave); // Function AIFramework.AISpawnSubsystem.RequestSpawnInRadius // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3a90ad0
	void OnAITaskEnded(struct UFWAITask* Task, enum class EFWAITaskResult Result); // Function AIFramework.AISpawnSubsystem.OnAITaskEnded // (Final|Native|Protected) // @ game+0x3a90160
};

// Class AIFramework.AITask_LaunchCharacter
// Size: 0xe0 (Inherited: 0x98)
struct UAITask_LaunchCharacter : UFWAITask {
	char UnknownData_98[0x48]; // 0x98(0x48)

	void OnLandedCallback(struct FHitResult Hit); // Function AIFramework.AITask_LaunchCharacter.OnLandedCallback // (Final|Native|Protected|HasOutParms) // @ game+0x3a90370
	void OnAnimNotify(struct UFWAnimNotify* AnimNotify, struct FName NotifyName, struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AIFramework.AITask_LaunchCharacter.OnAnimNotify // (Final|Native|Protected) // @ game+0x3a90220
};

// Class AIFramework.AITask_PlayAnimationWithAdjust
// Size: 0x118 (Inherited: 0xf0)
struct UAITask_PlayAnimationWithAdjust : UAITask_PlayAnimation {
	char UnknownData_F0[0x28]; // 0xf0(0x28)
};

// Class AIFramework.GoalPoint
// Size: 0x3f8 (Inherited: 0x2f0)
struct AGoalPoint : AActor {
	char UnknownData_2F0[0x8]; // 0x2f0(0x08)
	enum class EGoalCoverGeneration GoalCoverGeneration; // 0x2f8(0x01)
	char UnknownData_2F9[0x3]; // 0x2f9(0x03)
	float GoalRadius; // 0x2fc(0x04)
	float GoalHeight; // 0x300(0x04)
	char UnknownData_304[0x4]; // 0x304(0x04)
	struct AGoalArea* GoalSpace; // 0x308(0x08)
	enum class EGoalOrder OrderType; // 0x310(0x01)
	enum class None MaxSkippablePointsNumber; // 0x311(0x01)
	char UnknownData_312[0x6]; // 0x312(0x06)
	struct FString SequenceOrder; // 0x318(0x10)
	struct TArray<struct AActor*> References; // 0x328(0x10)
	struct TArray<struct ACover*> Covers; // 0x338(0x10)
	enum class ETeam TeamUsage; // 0x348(0x01)
	char UnknownData_349[0x7]; // 0x349(0x07)
	struct TArray<struct ACharacterSpawner*> Spawners; // 0x350(0x10)
	struct TArray<struct AFWAIController*> Followers; // 0x360(0x10)
	struct TArray<struct AFWAIController*> AssignedAIs; // 0x370(0x10)
	int32_t MaxFollowers; // 0x380(0x04)
	char UnknownData_384[0x4]; // 0x384(0x04)
	struct UBehaviorTree* BTOverride; // 0x388(0x08)
	struct TArray<struct FEQSQueryOverrideItem> EQSOverrides; // 0x390(0x10)
	struct TArray<struct UAISenseConfig*> SensesConfigOverrides; // 0x3a0(0x10)
	char UnknownData_3B0[0x4]; // 0x3b0(0x04)
	float ReplenishDelay; // 0x3b4(0x04)
	int32_t ReplenishAfterNumberGone; // 0x3b8(0x04)
	char UnknownData_3BC[0x4]; // 0x3bc(0x04)
	struct TArray<struct UFWAIArchetype*> ValidAITypes; // 0x3c0(0x10)
	char UnknownData_3D0_0 : 7; // 0x3d0(0x01)
	bool bPriorityGoal : 1; // 0x3d0(0x01)
	char UnknownData_3D1[0x3]; // 0x3d1(0x03)
	char bUseOnlyAssigned : 1; // 0x3d4(0x01)
	char bRestrictAITypes : 1; // 0x3d4(0x01)
	char bAcceptAIsOnlyInRadius : 1; // 0x3d4(0x01)
	char bReplenish : 1; // 0x3d4(0x01)
	char bBreakableByCombatFlow : 1; // 0x3d4(0x01)
	char UnknownData_3D4_5 : 3; // 0x3d4(0x01)
	char UnknownData_3D5[0x3]; // 0x3d5(0x03)
	enum class EAIGoalAssignmentType AssignmentType; // 0x3d8(0x01)
	char UnknownData_3D9[0x3]; // 0x3d9(0x03)
	char UnknownData_3DC_0 : 2; // 0x3dc(0x01)
	char bIsEnabled : 1; // 0x3dc(0x01)
	char bHasGoalSpecificAIBehavior : 1; // 0x3dc(0x01)
	char bStartGoalEnabled : 1; // 0x3dc(0x01)
	char UnknownData_3DC_5 : 3; // 0x3dc(0x01)
	char UnknownData_3DD[0x3]; // 0x3dd(0x03)
	struct USceneComponent* SceneComponent; // 0x3e0(0x08)
	struct FMulticastInlineDelegate OnFollowerDiedEvent; // 0x3e8(0x10)

	bool WillAcceptMoreAI(struct AAIController* AI, enum class EAIForceParam bForce); // Function AIFramework.GoalPoint.WillAcceptMoreAI // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3abda20
	bool WillAcceptAIType(struct UFWAIArchetype* Type); // Function AIFramework.GoalPoint.WillAcceptAIType // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3abd980
	void UnregisterFollower(struct AAIController* AI); // Function AIFramework.GoalPoint.UnregisterFollower // (Native|Public|BlueprintCallable) // @ game+0xbf20e0
	bool RegisterFollower(struct AAIController* NewAI, bool bCheckToAccept); // Function AIFramework.GoalPoint.RegisterFollower // (Native|Public|BlueprintCallable) // @ game+0x3abd330
	void OnSetupGoalSpecificAIBehavior(struct AFWAIController* AI); // Function AIFramework.GoalPoint.OnSetupGoalSpecificAIBehavior // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x33cb4e0
	void OnRevertGoalSpecificAIBehavior(struct AFWAIController* AI); // Function AIFramework.GoalPoint.OnRevertGoalSpecificAIBehavior // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x1560570
	void OnFollowerDied(struct AAIController* AI); // Function AIFramework.GoalPoint.OnFollowerDied // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x1516d80
	void OnCharacterSpawned(struct Acharacter* Pawn, struct AFWAIController* Controller, int32_t SpawnGroupIndex); // Function AIFramework.GoalPoint.OnCharacterSpawned // (Final|Native|Public) // @ game+0x3abd070
	bool IsInsideOrOn(struct FVector In); // Function AIFramework.GoalPoint.IsInsideOrOn // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3abcb40
	bool IsEnabled(); // Function AIFramework.GoalPoint.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3abcb10
	struct AGoalArea* GetGoalSpace(); // Function AIFramework.GoalPoint.GetGoalSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3abc820
	float GetGoalRadius(); // Function AIFramework.GoalPoint.GetGoalRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3abc800
	struct TArray<struct AFWAIController*> GetFollowers(); // Function AIFramework.GoalPoint.GetFollowers // (Final|Native|Public|BlueprintCallable) // @ game+0x3abc7d0
	struct FBox GetBounds(); // Function AIFramework.GoalPoint.GetBounds // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3abc390
	struct TArray<struct AFWAIController*> GetAssignedAIs(); // Function AIFramework.GoalPoint.GetAssignedAIs // (Final|Native|Public|BlueprintCallable) // @ game+0x3abc360
	void Enable(bool bEnabled); // Function AIFramework.GoalPoint.Enable // (Native|Public|BlueprintCallable) // @ game+0x155f030
	bool AssignFollowers(struct TArray<struct AAIController*> AIControllers, bool bRemoveOld); // Function AIFramework.GoalPoint.AssignFollowers // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3abc1e0
	bool AssignFollower(struct AAIController* AI, bool bRemoveOld); // Function AIFramework.GoalPoint.AssignFollower // (Final|Native|Public|BlueprintCallable) // @ game+0x3abc120
};

// Class AIFramework.AntFarmGoal
// Size: 0x408 (Inherited: 0x3f8)
struct AAntFarmGoal : AGoalPoint {
	struct TArray<struct FWeakObjectPtr<struct ABaseSmartObject>> MySmartObjects; // 0x3f8(0x10)

	struct ABaseSmartObject* K2_GetNextSmartObject(struct AFWAIController* Querier, struct ABaseSmartObject* InSmartObject); // Function AIFramework.AntFarmGoal.K2_GetNextSmartObject // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
};

// Class AIFramework.FireAtTargetGoal
// Size: 0x418 (Inherited: 0x3f8)
struct AFireAtTargetGoal : AGoalPoint {
	struct TArray<struct FGoalFireTarget> ShootersPerTarget; // 0x3f8(0x10)
	char UnknownData_408_0 : 7; // 0x408(0x01)
	bool bFireAtClosest : 1; // 0x408(0x01)
	char UnknownData_409_0 : 7; // 0x409(0x01)
	bool bRefreshTargets : 1; // 0x409(0x01)
	char UnknownData_40A_0 : 7; // 0x40a(0x01)
	bool bCanReloadWeapon : 1; // 0x40a(0x01)
	char UnknownData_40B[0x1]; // 0x40b(0x01)
	float TargetsRefreshDelay; // 0x40c(0x04)
	char UnknownData_410[0x8]; // 0x410(0x08)
};

// Class AIFramework.AssaultGoal
// Size: 0x418 (Inherited: 0x418)
struct AAssaultGoal : AFireAtTargetGoal {
};

// Class AIFramework.BakedNavLink
// Size: 0x330 (Inherited: 0x2f0)
struct ABakedNavLink : AActor {
	char UnknownData_2F0[0x8]; // 0x2f0(0x08)
	struct FVector Left; // 0x2f8(0x0c)
	struct FVector Right; // 0x304(0x0c)
	struct UNavArea* NavArea; // 0x310(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x318(0x04)
	enum class ENavLinkDirection Direction; // 0x31c(0x01)
	char UnknownData_31D[0x3]; // 0x31d(0x03)
	struct UNavLinkRenderingComponent* EdRenderComp; // 0x320(0x08)
	struct UBillboardComponent* SpriteComponent; // 0x328(0x08)
};

// Class AIFramework.BaseGoalTarget
// Size: 0x368 (Inherited: 0x2f0)
struct ABaseGoalTarget : AActor {
	char UnknownData_2F0[0x78]; // 0x2f0(0x78)

	void SetMaxHealth(float InMaxHealth); // Function AIFramework.BaseGoalTarget.SetMaxHealth // (Native|Public|BlueprintCallable) // @ game+0x16630c0
	void SetHealth(float InHealth); // Function AIFramework.BaseGoalTarget.SetHealth // (Native|Public|BlueprintCallable) // @ game+0x1663040
	void K2_SetTeam(enum class ETeam NewTeam); // Function AIFramework.BaseGoalTarget.K2_SetTeam // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x157ead0
	enum class ETeam K2_GetTeam(); // Function AIFramework.BaseGoalTarget.K2_GetTeam // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x157eaa0
	float GetMaxHealth(); // Function AIFramework.BaseGoalTarget.GetMaxHealth // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1660b60
	float GetHealth(); // Function AIFramework.BaseGoalTarget.GetHealth // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16609e0
};

// Class AIFramework.SmartObjectSlotComponent
// Size: 0x6d0 (Inherited: 0x4f0)
struct USmartObjectSlotComponent : USphereComponent {
	char UnknownData_4F0[0x20]; // 0x4f0(0x20)
	struct UObject* CachedNavParent; // 0x510(0x08)
	struct FReactionsGoalPointSettings ReactionsSettings; // 0x518(0x18)
	struct TArray<struct FFactReaction> FactReactionsSettings; // 0x530(0x10)
	int32_t OrderInSequence; // 0x540(0x04)
	char UnknownData_544_0 : 7; // 0x544(0x01)
	bool bIsDisabled : 1; // 0x544(0x01)
	char UnknownData_545_0 : 7; // 0x545(0x01)
	bool bShowPreview : 1; // 0x545(0x01)
	enum class ESmartObjectType SmartObjectType; // 0x546(0x01)
	char UnknownData_547[0x1]; // 0x547(0x01)
	struct FAntFarmControlAttributeDelta MainModification; // 0x548(0x0c)
	char UnknownData_554[0x4]; // 0x554(0x04)
	struct TArray<struct FAntFarmControlAttributeDelta> OtherModifications; // 0x558(0x10)
	struct UAnimMontage* MontageToPlay; // 0x568(0x08)
	struct TArray<struct FName> MontageForceOutSections; // 0x570(0x10)
	char UnknownData_580_0 : 7; // 0x580(0x01)
	bool bRepeatLoopSectionOnCompletion : 1; // 0x580(0x01)
	char UnknownData_581_0 : 7; // 0x581(0x01)
	bool bAlwaysCompleteLoopAnimation : 1; // 0x581(0x01)
	char UnknownData_582_0 : 7; // 0x582(0x01)
	bool bIsInfiniteLoop : 1; // 0x582(0x01)
	char UnknownData_583[0x1]; // 0x583(0x01)
	float DURATION; // 0x584(0x04)
	float DurationRandomDeviation; // 0x588(0x04)
	char UnknownData_58C[0x4]; // 0x58c(0x04)
	struct UAnimMontage* SynchronizedMontage; // 0x590(0x08)
	struct FName SynchronizedMontageStartSection; // 0x598(0x08)
	struct TArray<struct FName> SynchronizedMontageForceOutSections; // 0x5a0(0x10)
	struct UAnimMontage* PostSyncMontage; // 0x5b0(0x08)
	char bUseWeapon : 1; // 0x5b8(0x01)
	char bSkipSlotRotationForCharacter : 1; // 0x5b8(0x01)
	char bNeverSkipEnterAnimation : 1; // 0x5b8(0x01)
	char bRestrictUsageByArchetype : 1; // 0x5b8(0x01)
	char bSkipForceOutOnTakenDamage : 1; // 0x5b8(0x01)
	char bShouldSkipForceOut : 1; // 0x5b8(0x01)
	char bDisableRootMotionWhileInEnterOrLoopStage : 1; // 0x5b8(0x01)
	enum class EMovementMood MovementMood; // 0x5b9(0x01)
	char UnknownData_5BA[0x6]; // 0x5ba(0x06)
	struct FFWAIArchetypeVariation AllowedArchetypeVariation; // 0x5c0(0x20)
	char UnknownData_5E0[0x10]; // 0x5e0(0x10)
	struct ABaseCharacter* UsingCharacter; // 0x5f0(0x08)
	enum class ESmartObjectUsageState CurrentUsageState; // 0x5f8(0x01)
	char UnknownData_5F9[0x3]; // 0x5f9(0x03)
	float CurrentMontageStartTime; // 0x5fc(0x04)
	struct FName CurrentMontageSection; // 0x600(0x08)
	struct ABaseCharacter* ClaimingCharacter; // 0x608(0x08)
	struct FName StartSection; // 0x610(0x08)
	struct FName LoopSection; // 0x618(0x08)
	struct FName EndSection; // 0x620(0x08)
	char UnknownData_628[0x10]; // 0x628(0x10)
	char UnknownData_638_0 : 7; // 0x638(0x01)
	bool bModificationsNotRequired : 1; // 0x638(0x01)
	char UnknownData_639[0x7]; // 0x639(0x07)
	struct TMap<struct USceneComponent*, struct FTransform> InitialTransforms; // 0x640(0x50)
	char UnknownData_690[0x40]; // 0x690(0x40)

	void SetEnabled(bool bSet); // Function AIFramework.SmartObjectSlotComponent.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x3a90d30
	void OnRep_UsingCharacter(struct ABaseCharacter* OldCharacter); // Function AIFramework.SmartObjectSlotComponent.OnRep_UsingCharacter // (Final|Native|Private) // @ game+0x3a908a0
	void OnRep_CurrentMontageStartTime(float OldMontageStartTime); // Function AIFramework.SmartObjectSlotComponent.OnRep_CurrentMontageStartTime // (Final|Native|Private) // @ game+0x3a90800
	void OnNotifyBeginReceived(enum class ESmartObjectAnimNotifyType NotifyType, bool bUseSharedSpace, enum class ESmartObjectAttachPoint AttachPoint, struct FName NotifyName, struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule); // Function AIFramework.SmartObjectSlotComponent.OnNotifyBeginReceived // (Final|Native|Private) // @ game+0x3a905b0
	bool IsInUse(); // Function AIFramework.SmartObjectSlotComponent.IsInUse // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a90130
	bool IsEnabled(); // Function AIFramework.SmartObjectSlotComponent.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a90100
	void HandleInterpolatedMoveFinished(); // Function AIFramework.SmartObjectSlotComponent.HandleInterpolatedMoveFinished // (Final|Native|Public) // @ game+0x3a900b0
	struct ABaseCharacter* GetUsingCharacter(); // Function AIFramework.SmartObjectSlotComponent.GetUsingCharacter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a8ffd0
};

// Class AIFramework.SmartObjectSharedSpaceComponent
// Size: 0x540 (Inherited: 0x4f0)
struct USmartObjectSharedSpaceComponent : USphereComponent {
	struct TMap<struct USceneComponent*, struct FTransform> InitialTransforms; // 0x4f0(0x50)
};

// Class AIFramework.BaseSmartObject
// Size: 0x3f0 (Inherited: 0x2f0)
struct ABaseSmartObject : AActor {
	struct FMulticastInlineDelegate OnSmartObjectFinished; // 0x2f0(0x10)
	struct UAnimMontage* InProgressEventMontage; // 0x300(0x08)
	struct ABaseCharacter* CharBlockingSync; // 0x308(0x08)
	struct USmartObjectSlotComponent* DefaultSlotComponent; // 0x310(0x08)
	char UnknownData_318[0x8]; // 0x318(0x08)
	struct TArray<struct AGoalPoint*> LinkedGoals; // 0x320(0x10)
	struct UAnimMontage* MontageToPlay; // 0x330(0x08)
	struct UBehaviorTree* SmartObjectBehaviorTree; // 0x338(0x08)
	char UnknownData_340_0 : 7; // 0x340(0x01)
	bool bSuppressDamageDuringUse : 1; // 0x340(0x01)
	char UnknownData_341_0 : 7; // 0x341(0x01)
	bool bDisableCollisionDuringUse : 1; // 0x341(0x01)
	char UnknownData_342_0 : 7; // 0x342(0x01)
	bool bAutomaticallySynchronize : 1; // 0x342(0x01)
	char UnknownData_343[0x1]; // 0x343(0x01)
	float TimeBetweenSyncLoops; // 0x344(0x04)
	float SynchronizedMontageInitialDelay; // 0x348(0x04)
	int32_t NumSynchronizedLoopsToPlay; // 0x34c(0x04)
	char UnknownData_350[0x4]; // 0x350(0x04)
	float AfterSynchronizationDuration; // 0x354(0x04)
	float AfterSynchronizationDurationRandomDeviation; // 0x358(0x04)
	char UnknownData_35C[0x4]; // 0x35c(0x04)
	struct FString SequenceOrder; // 0x360(0x10)
	char UnknownData_370_0 : 7; // 0x370(0x01)
	bool bIsSequentialSmartObject : 1; // 0x370(0x01)
	char UnknownData_371[0x3]; // 0x371(0x03)
	float LastSequenceFinishTime; // 0x374(0x04)
	struct TMap<struct FName, struct FString> SmartObjectSockets; // 0x378(0x50)
	char UnknownData_3C8_0 : 7; // 0x3c8(0x01)
	bool bEnableObjectsAutoplacement : 1; // 0x3c8(0x01)
	char UnknownData_3C9[0x7]; // 0x3c9(0x07)
	struct TArray<struct ABaseCharacter*> CharactersUsingMe; // 0x3d0(0x10)
	struct USmartObjectSharedSpaceComponent* CachedSharedSpaceComponent; // 0x3e0(0x08)
	char UnknownData_3E8_0 : 7; // 0x3e8(0x01)
	bool bOverrideMinDistanceToPlayer : 1; // 0x3e8(0x01)
	char UnknownData_3E9[0x3]; // 0x3e9(0x03)
	float MinimalDistanceToPlayer; // 0x3ec(0x04)

	void TrySynchronization(); // Function AIFramework.BaseSmartObject.TrySynchronization // (Final|Native|Public|BlueprintCallable) // @ game+0x3a91210
	bool ShouldExecuteSmartObjectNotify(struct ABaseCharacter* CharacterUsingMe, struct USmartObjectSlotComponent* Slot, struct FName NotifyName, enum class ESmartObjectAnimNotifyType NotifyType, enum class ESmartObjectAttachPoint AttachPoint); // Function AIFramework.BaseSmartObject.ShouldExecuteSmartObjectNotify // (Native|Event|Public|BlueprintEvent) // @ game+0x3a90dc0
	void PlaySynchronizedLoopSection(); // Function AIFramework.BaseSmartObject.PlaySynchronizedLoopSection // (Final|Native|Protected) // @ game+0x3a90ab0
	void OnSOEventMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function AIFramework.BaseSmartObject.OnSOEventMontageBlendingOut // (Final|Native|Protected) // @ game+0x3a90920
	void OnSmartObjectSyncLoopStarted(); // Function AIFramework.BaseSmartObject.OnSmartObjectSyncLoopStarted // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnSmartObjectSyncLoopEnded(); // Function AIFramework.BaseSmartObject.OnSmartObjectSyncLoopEnded // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnSmartObjectStartSynchronization(); // Function AIFramework.BaseSmartObject.OnSmartObjectStartSynchronization // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnSmartObjectStarted(struct ABaseCharacter* CharacterUsingMe, struct USmartObjectSlotComponent* Slot); // Function AIFramework.BaseSmartObject.OnSmartObjectStarted // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnSmartObjectSkippedEnter(struct ABaseCharacter* CharacterUsingMe, struct USmartObjectSlotComponent* Slot); // Function AIFramework.BaseSmartObject.OnSmartObjectSkippedEnter // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnSmartObjectNotify(struct ABaseCharacter* CharacterUsingMe, struct USmartObjectSlotComponent* Slot, struct FName NotifyName, enum class ESmartObjectAnimNotifyType NotifyType, enum class ESmartObjectAttachPoint AttachPoint); // Function AIFramework.BaseSmartObject.OnSmartObjectNotify // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnSmartObjectEnded(struct USmartObjectSlotComponent* Slot); // Function AIFramework.BaseSmartObject.OnSmartObjectEnded // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	int32_t GetUsingCharacters(struct TArray<struct ABaseCharacter*> OutCharacters); // Function AIFramework.BaseSmartObject.GetUsingCharacters // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a8fff0
	struct FMontageAssetSelector GetSyncLoopMontageEvent(struct AAIController* AI, struct USmartObjectSlotComponent* Slot); // Function AIFramework.BaseSmartObject.GetSyncLoopMontageEvent // (Native|Event|Public|BlueprintEvent) // @ game+0x3a8feb0
	int32_t GetSlotsInUseCount(); // Function AIFramework.BaseSmartObject.GetSlotsInUseCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a8fe80
	struct FMontageAssetSelector GetPostSyncMontageEvent(struct AAIController* AI, struct USmartObjectSlotComponent* Slot); // Function AIFramework.BaseSmartObject.GetPostSyncMontageEvent // (Native|Event|Public|BlueprintEvent) // @ game+0x3a8fd60
	struct FMontageAssetSelector GetLoopMontageEvent(struct AAIController* AI, struct USmartObjectSlotComponent* Slot); // Function AIFramework.BaseSmartObject.GetLoopMontageEvent // (Native|Event|Public|BlueprintEvent) // @ game+0x3a8fbb0
	struct FMontageAssetSelector GetForceOutMontageEvent(struct AAIController* AI, struct USmartObjectSlotComponent* Slot); // Function AIFramework.BaseSmartObject.GetForceOutMontageEvent // (Native|Event|Public|BlueprintEvent) // @ game+0x3a8fa90
	struct FMontageAssetSelector GetExitMontageEvent(struct AAIController* AI, struct USmartObjectSlotComponent* Slot); // Function AIFramework.BaseSmartObject.GetExitMontageEvent // (Native|Event|Public|BlueprintEvent) // @ game+0x3a8f940
	struct FMontageAssetSelector GetEnterMontageEvent(struct AAIController* AI, struct USmartObjectSlotComponent* Slot); // Function AIFramework.BaseSmartObject.GetEnterMontageEvent // (Native|Event|Public|BlueprintEvent) // @ game+0x3a8f820
	void FinishSmartObjectUsage(struct USmartObjectSlotComponent* Slot); // Function AIFramework.BaseSmartObject.FinishSmartObjectUsage // (Final|Native|Public|BlueprintCallable) // @ game+0x3a8f7a0
	bool CanStartSynchronization(); // Function AIFramework.BaseSmartObject.CanStartSynchronization // (Final|Native|Public|BlueprintCallable) // @ game+0x3a8f770
};

// Class AIFramework.BlackboardKeyType_CombatSpot
// Size: 0x30 (Inherited: 0x30)
struct UBlackboardKeyType_CombatSpot : UBlackboardKeyType {
};

// Class AIFramework.BTDecorator_AlliesObscuringTarget
// Size: 0xa0 (Inherited: 0x68)
struct UBTDecorator_AlliesObscuringTarget : UBTDecorator {
	struct FBlackboardKeySelector TargetKey; // 0x68(0x28)
	float MinAngle; // 0x90(0x04)
	float MinDistance; // 0x94(0x04)
	char UnknownData_98_0 : 7; // 0x98(0x01)
	bool bUseOnlySquadMembers : 1; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// Class AIFramework.BTDecorator_CanCombatActionEx
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_CanCombatActionEx : UBTDecorator {
	char bRequireSight : 1; // 0x68(0x01)
	char bOnlyInMoveDirection : 1; // 0x68(0x01)
	char UnknownData_68_2 : 6; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class AIFramework.BTDecorator_CanFireAt
// Size: 0x98 (Inherited: 0x90)
struct UBTDecorator_CanFireAt : UBTDecorator_BlackboardBase {
	char UnknownData_90_0 : 7; // 0x90(0x01)
	bool bFromTheHip : 1; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
};

// Class AIFramework.BTDecorator_DistanceBetween
// Size: 0xd0 (Inherited: 0x68)
struct UBTDecorator_DistanceBetween : UBTDecorator {
	enum class EArithmeticKeyOperation Operator; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct FBlackboardKeySelector BlackboardKeyA; // 0x70(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x98(0x28)
	float SpecifiedDistance; // 0xc0(0x04)
	char UnknownData_C4[0x4]; // 0xc4(0x04)
	char bUseSelf : 1; // 0xc8(0x01)
	char bCalculateAs2D : 1; // 0xc8(0x01)
	char bCalculateZOnly : 1; // 0xc8(0x01)
	char UnknownData_C8_3 : 5; // 0xc8(0x01)
	char UnknownData_C9[0x3]; // 0xc9(0x03)
	float DistanceCalculationUpdateRate; // 0xcc(0x04)
};

// Class AIFramework.BTDecorator_Distance
// Size: 0xd8 (Inherited: 0xd0)
struct UBTDecorator_Distance : UBTDecorator_DistanceBetween {
	enum class EFWDiscreteDistance DiscreteDistance; // 0xd0(0x01)
	char UnknownData_D1[0x7]; // 0xd1(0x07)
};

// Class AIFramework.BTDecorator_InCombatFlowArea
// Size: 0x98 (Inherited: 0x68)
struct UBTDecorator_InCombatFlowArea : UBTDecorator {
	struct FBlackboardKeySelector ActorToCheck; // 0x68(0x28)
	char UnknownData_90[0x4]; // 0x90(0x04)
	float CheckUpdateRate; // 0x94(0x04)
};

// Class AIFramework.BTDecorator_InWeaponRange
// Size: 0x98 (Inherited: 0x90)
struct UBTDecorator_InWeaponRange : UBTDecorator_BlackboardBase {
	enum class EWeaponRangeType RangeType; // 0x90(0x01)
	char UnknownData_91_0 : 7; // 0x91(0x01)
	bool bSpecifyWeapon : 1; // 0x91(0x01)
	enum class EFWAIWeaponSlot WeaponSlot; // 0x92(0x01)
	char UnknownData_93[0x5]; // 0x93(0x05)
};

// Class AIFramework.BTDecorator_IsHumanPlayer
// Size: 0x90 (Inherited: 0x90)
struct UBTDecorator_IsHumanPlayer : UBTDecorator_BlackboardBase {
};

// Class AIFramework.BTDecorator_IsReachable
// Size: 0xb8 (Inherited: 0x68)
struct UBTDecorator_IsReachable : UBTDecorator {
	struct FBlackboardKeySelector DestinationKey; // 0x68(0x28)
	float ExtraDistance; // 0x90(0x04)
	float DistanceMultiplier; // 0x94(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0x98(0x08)
	float TestInterval; // 0xa0(0x04)
	float TestIntervalVariance; // 0xa4(0x04)
	char UnknownData_A8_0 : 7; // 0xa8(0x01)
	bool bProject : 1; // 0xa8(0x01)
	char UnknownData_A9[0x3]; // 0xa9(0x03)
	float ProjectDown; // 0xac(0x04)
	float ProjectUp; // 0xb0(0x04)
	char UnknownData_B4_0 : 7; // 0xb4(0x01)
	bool bCheckVerticalDistance : 1; // 0xb4(0x01)
	char UnknownData_B5[0x3]; // 0xb5(0x03)
};

// Class AIFramework.BTDecorator_PerceptionExist
// Size: 0xa0 (Inherited: 0x90)
struct UBTDecorator_PerceptionExist : UBTDecorator_BlackboardBase {
	struct UAISense* SenseClass; // 0x90(0x08)
	float SenseAge; // 0x98(0x04)
	char UnknownData_9C_0 : 7; // 0x9c(0x01)
	bool bAnyHostile : 1; // 0x9c(0x01)
	char UnknownData_9D[0x3]; // 0x9d(0x03)
};

// Class AIFramework.BTDecorator_SOEnterAnimPlayCondition
// Size: 0x68 (Inherited: 0x68)
struct UBTDecorator_SOEnterAnimPlayCondition : UBTDecorator {
};

// Class AIFramework.BTDecorator_SOUsageCondition
// Size: 0x70 (Inherited: 0x68)
struct UBTDecorator_SOUsageCondition : UBTDecorator {
	enum class ESmartObjectUsageState AllowedState; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class AIFramework.BTService_SelectEnemy
// Size: 0xc0 (Inherited: 0x70)
struct UBTService_SelectEnemy : UBTService {
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x70(0x48)
	char bUseSquadBasedTargetSelection : 1; // 0xb8(0x01)
	char UnknownData_B8_1 : 7; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
};

// Class AIFramework.BTService_ValidateCover
// Size: 0xd0 (Inherited: 0x70)
struct UBTService_ValidateCover : UBTService {
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x70(0x48)
	enum class EFWValidateCoverSelector CoverSelector; // 0xb8(0x01)
	char UnknownData_B9[0x17]; // 0xb9(0x17)
};

// Class AIFramework.BTService_ValidateLocation
// Size: 0xf0 (Inherited: 0x70)
struct UBTService_ValidateLocation : UBTService {
	struct FBlackboardKeySelector ResultKey; // 0x70(0x28)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98(0x48)
	char UnknownData_E0[0x10]; // 0xe0(0x10)
};

// Class AIFramework.BTTask_ChooseNextSmartObject
// Size: 0x160 (Inherited: 0x70)
struct UBTTask_ChooseNextSmartObject : UBTTaskNode {
	struct FBlackboardKeySelector SmartObjectSlotKey; // 0x70(0x28)
	struct FBlackboardKeySelector SmartObjectLocationKey; // 0x98(0x28)
	struct FBlackboardKeySelector SmartObjectDirectionKey; // 0xc0(0x28)
	struct FBlackboardKeySelector SmartObjectEntryLocationKey; // 0xe8(0x28)
	struct FBlackboardKeySelector SmartObjectLocationAfterEntryKey; // 0x110(0x28)
	struct FBlackboardKeySelector SmartObjectRotationKey; // 0x138(0x28)
};

// Class AIFramework.BTTask_ClearClaimedSmartObject
// Size: 0x70 (Inherited: 0x70)
struct UBTTask_ClearClaimedSmartObject : UBTTaskNode {
};

// Class AIFramework.BTTask_CompleteSmartObjectSyncedMontage
// Size: 0x98 (Inherited: 0x70)
struct UBTTask_CompleteSmartObjectSyncedMontage : UBTTaskNode {
	struct FBlackboardKeySelector SmartObjectSyncedStartKey; // 0x70(0x28)
};

// Class AIFramework.BTTask_Fail
// Size: 0x70 (Inherited: 0x70)
struct UBTTask_Fail : UBTTaskNode {
};

// Class AIFramework.BTTask_FinishSmartObjectUsage
// Size: 0x98 (Inherited: 0x70)
struct UBTTask_FinishSmartObjectUsage : UBTTaskNode {
	struct FBlackboardKeySelector SmartObjectInitiatedKey; // 0x70(0x28)
};

// Class AIFramework.BTTask_HiddenMoveDirectlyToward
// Size: 0xb8 (Inherited: 0xb8)
struct UBTTask_HiddenMoveDirectlyToward : UBTTask_MoveDirectlyToward {
};

// Class AIFramework.FWBTTask_MoveTo
// Size: 0xb8 (Inherited: 0xb0)
struct UFWBTTask_MoveTo : UBTTask_MoveTo {
	char bAllowFire : 1; // 0xb0(0x01)
	char bAllowReload : 1; // 0xb0(0x01)
	char UnknownData_B0_2 : 6; // 0xb0(0x01)
	char UnknownData_B1[0x3]; // 0xb1(0x03)
	char UnknownData_B4_0 : 7; // 0xb4(0x01)
	bool bOverrideMovementMood : 1; // 0xb4(0x01)
	enum class EMovementMood MovementMood; // 0xb5(0x01)
	enum class ECoverMember InvalidateCover; // 0xb6(0x01)
	char UnknownData_B7[0x1]; // 0xb7(0x01)
};

// Class AIFramework.BTTask_FrameworkMoveDirectlyToward
// Size: 0xb8 (Inherited: 0xb8)
struct UBTTask_FrameworkMoveDirectlyToward : UFWBTTask_MoveTo {
};

// Class AIFramework.BTTask_FrameworkRotateToFaceBBEntry
// Size: 0xa8 (Inherited: 0xa0)
struct UBTTask_FrameworkRotateToFaceBBEntry : UBTTask_RotateToFaceBBEntry {
	char UnknownData_A0_0 : 7; // 0xa0(0x01)
	bool bUseControllerDesiredRotation : 1; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
};

// Class AIFramework.BTTask_FrameworkRunEQSQuery
// Size: 0x158 (Inherited: 0x150)
struct UBTTask_FrameworkRunEQSQuery : UBTTask_RunEQSQuery {
	struct UEQSResultHandler* ResultHandler; // 0x150(0x08)
};

// Class AIFramework.BTTask_FrameworkWait
// Size: 0x80 (Inherited: 0x78)
struct UBTTask_FrameworkWait : UBTTask_Wait {
	char bAllowFire : 1; // 0x78(0x01)
	char bAllowReload : 1; // 0x78(0x01)
	char bAllowTurnInPlace : 1; // 0x78(0x01)
	char bForceFireAtTarget : 1; // 0x78(0x01)
	char UnknownData_78_4 : 4; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	char UnknownData_7C_0 : 7; // 0x7c(0x01)
	bool bModifyAllowFireSetting : 1; // 0x7c(0x01)
	char UnknownData_7D_0 : 7; // 0x7d(0x01)
	bool bModifyAllowReloadSetting : 1; // 0x7d(0x01)
	char UnknownData_7E_0 : 7; // 0x7e(0x01)
	bool bModifyAllowTurnInPlaceSetting : 1; // 0x7e(0x01)
	char UnknownData_7F_0 : 7; // 0x7f(0x01)
	bool bModifyForceFireAtTargetSetting : 1; // 0x7f(0x01)
};

// Class AIFramework.BTTask_InvalidateCover
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_InvalidateCover : UBTTaskNode {
	enum class ECoverMember Cover; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// Class AIFramework.BTTask_PlayMontage
// Size: 0xb0 (Inherited: 0x70)
struct UBTTask_PlayMontage : UBTTaskNode {
	char UnknownData_70_0 : 7; // 0x70(0x01)
	bool bUseMontageProvider : 1; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct FMontageAssetSelector Montage; // 0x78(0x20)
	struct UFWMontageProvider* MontageProvider; // 0x98(0x08)
	struct UAnimMontage* MontageToPlay; // 0xa0(0x08)
	char bNonBlocking : 1; // 0xa8(0x01)
	char bCanAbortAnimation : 1; // 0xa8(0x01)
	char bForceCollision : 1; // 0xa8(0x01)
	char bEarlyFinishOnBlendOut : 1; // 0xa8(0x01)
	char bEarlyFinishBeforeBlendOut : 1; // 0xa8(0x01)
	char UnknownData_A8_5 : 3; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// Class AIFramework.BTTask_PlaySmartObjectMontage
// Size: 0x88 (Inherited: 0x78)
struct UBTTask_PlaySmartObjectMontage : UBTTask_GameplayTaskBase {
	struct UFWMontageProvider* MontageProvider; // 0x78(0x08)
	enum class ESmartObjectUsageState SmartObjectUsageState; // 0x80(0x01)
	char UnknownData_81[0x3]; // 0x81(0x03)
	char bCanAbortAnimation : 1; // 0x84(0x01)
	char bUpdatePendingWeapon : 1; // 0x84(0x01)
	char bEarlyFinishOnBlendOut : 1; // 0x84(0x01)
	char bEarlyFinishBeforeBlendOut : 1; // 0x84(0x01)
	char UnknownData_84_4 : 4; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
};

// Class AIFramework.BTTask_Success
// Size: 0x70 (Inherited: 0x70)
struct UBTTask_Success : UBTTaskNode {
};

// Class AIFramework.BTTask_UseSmartObject
// Size: 0xd8 (Inherited: 0x70)
struct UBTTask_UseSmartObject : UBTTaskNode {
	char UnknownData_70[0x8]; // 0x70(0x08)
	struct AWeapon* CurrentWeapon; // 0x78(0x08)
	struct UBehaviorTreeComponent* MyOwnerComp; // 0x80(0x08)
	struct FBlackboardKeySelector SmartObjectSlotKey; // 0x88(0x28)
	struct FBlackboardKeySelector SpawnedWithSOKey; // 0xb0(0x28)

	void OnSmartObjectFinished(struct USmartObjectSlotComponent* Slot); // Function AIFramework.BTTask_UseSmartObject.OnSmartObjectFinished // (Final|Native|Protected) // @ game+0x3a962a0
};

// Class AIFramework.FWCharacterCache
// Size: 0x430 (Inherited: 0x2f0)
struct AFWCharacterCache : AActor {
	char UnknownData_2F0[0x8]; // 0x2f0(0x08)
	struct FMulticastInlineDelegate OnBiomeLoaded; // 0x2f8(0x10)
	struct FMasterBiome MasterBiome; // 0x308(0x68)
	struct FCharacterCacheRepData RepData; // 0x370(0x28)
	struct FCharacterAssetPool Assets; // 0x398(0x50)
	char UnknownData_3E8[0x48]; // 0x3e8(0x48)

	void OnRep_RepDataChanged(); // Function AIFramework.FWCharacterCache.OnRep_RepDataChanged // (Final|Native|Public) // @ game+0x3a96280
	void OnBiomeUnloadDEBUG(struct UObject* WorldContextObject, struct UBaseBiomeData* Biome); // Function AIFramework.FWCharacterCache.OnBiomeUnloadDEBUG // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3a95e80
	void OnBiomeUnload(struct UBaseBiomeData* Biome); // Function AIFramework.FWCharacterCache.OnBiomeUnload // (Final|Native|Public) // @ game+0x3a95e00
	void OnBiomeLoadDEBUG(struct UObject* WorldContextObject, struct UBaseBiomeData* Biome, bool bIsWorldBiome); // Function AIFramework.FWCharacterCache.OnBiomeLoadDEBUG // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3a95d00
	void OnBiomeLoad(struct UBaseBiomeData* Biome, bool bIsWorldBiome); // Function AIFramework.FWCharacterCache.OnBiomeLoad // (Final|Native|Public) // @ game+0x3a95c30
};

// Class AIFramework.CharacterSpawnerRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UCharacterSpawnerRenderingComponent : UPrimitiveComponent {
};

// Class AIFramework.CombatArena
// Size: 0x440 (Inherited: 0x398)
struct ACombatArena : AActionArea {
	struct FMulticastInlineDelegate OnPlayerEntered; // 0x398(0x10)
	struct FMulticastInlineDelegate OnPlayerLeft; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnArenaSwitchedOn; // 0x3b8(0x10)
	struct FMulticastInlineDelegate OnArenaSwitchedOff; // 0x3c8(0x10)
	struct FMulticastInlineDelegate OnArenaChanged; // 0x3d8(0x10)
	struct ACombatArena* NextCombatArea; // 0x3e8(0x08)
	struct ACombatArena* PrevCombatArea; // 0x3f0(0x08)
	enum class EFWCombatArenaScenario Scenario; // 0x3f8(0x01)
	char UnknownData_3F9_0 : 7; // 0x3f9(0x01)
	bool bFallbackWhenPlayerEnters : 1; // 0x3f9(0x01)
	char UnknownData_3FA_0 : 7; // 0x3fa(0x01)
	bool bConsiderAllPlayers : 1; // 0x3fa(0x01)
	char UnknownData_3FB[0x5]; // 0x3fb(0x05)
	struct AVolume* FallbackTrigger; // 0x400(0x08)
	char UnknownData_408_0 : 7; // 0x408(0x01)
	bool bFallbackOnLowNumbers : 1; // 0x408(0x01)
	char UnknownData_409[0x3]; // 0x409(0x03)
	int32_t AIsDeadToFallback; // 0x40c(0x04)
	int32_t AIsLeftToFallback; // 0x410(0x04)
	char UnknownData_414[0x4]; // 0x414(0x04)
	struct TArray<struct APlayerController*> PlayersPopulation; // 0x418(0x10)
	struct TArray<struct AFWAIController*> AIPopulation; // 0x428(0x10)
	char UnknownData_438[0x8]; // 0x438(0x08)

	void UseInternalSpawnPoints(bool Use); // Function AIFramework.CombatArena.UseInternalSpawnPoints // (Final|Native|Protected|BlueprintCallable) // @ game+0x3a9d400
	void TriggerFallback(bool bRecursiveParentFallback); // Function AIFramework.CombatArena.TriggerFallback // (Final|Native|Protected|BlueprintCallable) // @ game+0x3a9d230
	void TriggerAssault(bool bRecursiveParentFallback); // Function AIFramework.CombatArena.TriggerAssault // (Final|Native|Protected|BlueprintCallable) // @ game+0x3a9d1a0
	void OnReffedTriggerTouch(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function AIFramework.CombatArena.OnReffedTriggerTouch // (Final|Native|Public) // @ game+0x3a9c230
};

// Class AIFramework.AIDataProvider_GoalPoint
// Size: 0x50 (Inherited: 0x40)
struct UAIDataProvider_GoalPoint : UAIDataProvider_QueryParams {
	float Radius; // 0x40(0x04)
	float AreaWidth; // 0x44(0x04)
	float AreaLength; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class AIFramework.AIDataProvider_Character
// Size: 0x38 (Inherited: 0x28)
struct UAIDataProvider_Character : UAIDataProvider {
	float WeaponRange; // 0x28(0x04)
	float EffectiveWeaponRange; // 0x2c(0x04)
	float SightRadius; // 0x30(0x04)
	float DistanceToTarget; // 0x34(0x04)
};

// Class AIFramework.DefendGoal
// Size: 0x3f8 (Inherited: 0x3f8)
struct ADefendGoal : AGoalPoint {
};

// Class AIFramework.EnvQueryGenerator_Disk
// Size: 0x290 (Inherited: 0x218)
struct UEnvQueryGenerator_Disk : UEnvQueryGenerator_OnCircle {
	struct FAIDataProviderIntValue NumberOfCircles; // 0x218(0x38)
	struct FAIDataProviderFloatValue CirclesDistance; // 0x250(0x38)
	enum class ECirclesSpacingMethod CirclesSpacingMethod; // 0x288(0x01)
	char UnknownData_289[0x7]; // 0x289(0x07)
};

// Class AIFramework.EnvQueryGenerator_GoalLinkedActors
// Size: 0x58 (Inherited: 0x50)
struct UEnvQueryGenerator_GoalLinkedActors : UEnvQueryGenerator {
	struct AGoalPoint* GoalClassFilter; // 0x50(0x08)
};

// Class AIFramework.EnvQueryGenerator_GridBasedDisk
// Size: 0x100 (Inherited: 0x88)
struct UEnvQueryGenerator_GridBasedDisk : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue Radius; // 0x88(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xc0(0x38)
	struct UEnvQueryContext* GenerateAround; // 0xf8(0x08)
};

// Class AIFramework.EnvQueryGenerator_RectangularGrid
// Size: 0x138 (Inherited: 0x88)
struct UEnvQueryGenerator_RectangularGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridWidth; // 0x88(0x38)
	struct FAIDataProviderFloatValue GridLength; // 0xc0(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xf8(0x38)
	struct UEnvQueryContext* GenerateAround; // 0x130(0x08)
};

// Class AIFramework.EnvQueryItemType_CoverSlot
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_CoverSlot : UEnvQueryItemType_VectorBase {
};

// Class AIFramework.FWAIAimAttractorsInterface
// Size: 0x28 (Inherited: 0x28)
struct UFWAIAimAttractorsInterface : UInterface {

	void GetAttractors(struct TArray<struct FVector> OutAttractors, struct AFWAIController* Instigator); // Function AIFramework.FWAIAimAttractorsInterface.GetAttractors // (Native|Public|HasOutParms|Const) // @ game+0x3a9ac50
};

// Class AIFramework.AITask_PlayDamageReaction
// Size: 0xf0 (Inherited: 0xf0)
struct UAITask_PlayDamageReaction : UAITask_PlayAnimation {
};

// Class AIFramework.MadAnimNotify_AllowNextReaction
// Size: 0x38 (Inherited: 0x38)
struct UMadAnimNotify_AllowNextReaction : UAnimNotify {
};

// Class AIFramework.FWAIDamageReactionRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UFWAIDamageReactionRenderingComponent : UPrimitiveComponent {
};

// Class AIFramework.FWAIGameplayAbilityInterface
// Size: 0x28 (Inherited: 0x28)
struct UFWAIGameplayAbilityInterface : UInterface {

	bool DoesTargetHaveProhibitedTagsForAI(struct AActor* TargetActor); // Function AIFramework.FWAIGameplayAbilityInterface.DoesTargetHaveProhibitedTagsForAI // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3aa11c0
	bool CanHitTarget(struct ABaseCharacter* Source, struct AActor* Target, bool bUseIdealYawRotationToTarget); // Function AIFramework.FWAIGameplayAbilityInterface.CanHitTarget // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3aa10b0
};

// Class AIFramework.FWAIDataProvider_Metrics
// Size: 0x48 (Inherited: 0x28)
struct UFWAIDataProvider_Metrics : UAIDataProvider {
	float MeleeDistance; // 0x28(0x04)
	float CloseDistance; // 0x2c(0x04)
	float ShortDistance; // 0x30(0x04)
	float MediumDistance; // 0x34(0x04)
	float MinPreferedDistance; // 0x38(0x04)
	float MaxPreferedDistance; // 0x3c(0x04)
	float MinCoverSelectionDistance; // 0x40(0x04)
	float MaxCoverSelectionDistance; // 0x44(0x04)
};

// Class AIFramework.FWAIPerceptionComponent
// Size: 0x258 (Inherited: 0x250)
struct UFWAIPerceptionComponent : UAIPerceptionComponent {
	char UnknownData_250_0 : 7; // 0x250(0x01)
	bool bSightUseSimpleTargetLocation : 1; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)

	float GetRecentDamageTakenFromActor(struct AActor* Actor); // Function AIFramework.FWAIPerceptionComponent.GetRecentDamageTakenFromActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aa1430
	float GetCallForHelpRating(struct AActor* Actor); // Function AIFramework.FWAIPerceptionComponent.GetCallForHelpRating // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aa1390
	void EnablePerceptionChannel(struct UAISense* Sense, bool bEnable); // Function AIFramework.FWAIPerceptionComponent.EnablePerceptionChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1260
};

// Class AIFramework.FWAIReactionTask
// Size: 0xa0 (Inherited: 0x98)
struct UFWAIReactionTask : UFWAITask {
	char UnknownData_98[0x8]; // 0x98(0x08)
};

// Class AIFramework.FWAITask_Reaction_Stare
// Size: 0xd0 (Inherited: 0xa0)
struct UFWAITask_Reaction_Stare : UFWAIReactionTask {
	float DurationMin; // 0xa0(0x04)
	float DurationMax; // 0xa4(0x04)
	char UnknownData_A8[0x28]; // 0xa8(0x28)
};

// Class AIFramework.FWAITask_Reaction_RunTo
// Size: 0xa8 (Inherited: 0xa0)
struct UFWAITask_Reaction_RunTo : UFWAIReactionTask {
	float AcceptanceRadius; // 0xa0(0x04)
	char UnknownData_A4[0x4]; // 0xa4(0x04)
};

// Class AIFramework.FWAITask_Reaction_RunAway
// Size: 0xc8 (Inherited: 0xa0)
struct UFWAITask_Reaction_RunAway : UFWAIReactionTask {
	float MaxDistance; // 0xa0(0x04)
	char UnknownData_A4[0x24]; // 0xa4(0x24)
};

// Class AIFramework.FWAIReactionActor
// Size: 0x318 (Inherited: 0x2f0)
struct AFWAIReactionActor : AActor {
	char UnknownData_2F0_0 : 7; // 0x2f0(0x01)
	bool bEnabled : 1; // 0x2f0(0x01)
	char UnknownData_2F1[0x7]; // 0x2f1(0x07)
	struct TArray<struct UFWAIReactionEpicentre*> Epicentres; // 0x2f8(0x10)
	char UnknownData_308[0x10]; // 0x308(0x10)

	void AttachReactionToActor(struct AActor* TargetActor); // Function AIFramework.FWAIReactionActor.AttachReactionToActor // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1030
};

// Class AIFramework.FWAIReactionEpicentre
// Size: 0x88 (Inherited: 0x28)
struct UFWAIReactionEpicentre : UObject {
	float RangeMin; // 0x28(0x04)
	float RangeMax; // 0x2c(0x04)
	int32_t MinAI; // 0x30(0x04)
	int32_t MaxAI; // 0x34(0x04)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool bWaitForAllToFinish : 1; // 0x38(0x01)
	char UnknownData_39_0 : 7; // 0x39(0x01)
	bool bRemoveWhenAllReactionsFinished : 1; // 0x39(0x01)
	char UnknownData_3A[0x2]; // 0x3a(0x02)
	float COOLDOWN; // 0x3c(0x04)
	int32_t MaxTimesUsed; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct TArray<struct UFWAIArchetype*> EnabledForArchetypes; // 0x48(0x10)
	struct UFWAIReactionTask* ReactionToStart; // 0x58(0x08)
	char UnknownData_60[0x28]; // 0x60(0x28)

	void OnTaskEnded(struct UFWAITask* Task, enum class EFWAITaskResult Result); // Function AIFramework.FWAIReactionEpicentre.OnTaskEnded // (Final|Native|Public) // @ game+0x3aa1860
};

// Class AIFramework.FWAIReactionsManager
// Size: 0x170 (Inherited: 0x28)
struct UFWAIReactionsManager : UObject {
	char UnknownData_28[0x28]; // 0x28(0x28)
	float GlobalCooldownTime; // 0x50(0x04)
	float GlobalCooldownMaxTime; // 0x54(0x04)
	int32_t MaxNumberOfReactionsAtTime; // 0x58(0x04)
	char UnknownData_5C[0x10c]; // 0x5c(0x10c)
	struct UWorld* World; // 0x168(0x08)
};

// Class AIFramework.FWAIRes_Perception
// Size: 0x70 (Inherited: 0x70)
struct UFWAIRes_Perception : UFWAIResponse {
};

// Class AIFramework.FWAIRes_ReactionsToPlayer
// Size: 0x130 (Inherited: 0x70)
struct UFWAIRes_ReactionsToPlayer : UFWAIResponse {
	struct FReactionsGoalPointSettings OverwritableSettings; // 0x70(0x18)
	float LookAtFadeInTime; // 0x88(0x04)
	float LookAtFadeOutTime; // 0x8c(0x04)
	struct FName OurHeadSocketName; // 0x90(0x08)
	struct FName LookAtTargetSocketName; // 0x98(0x08)
	float DefaultHearingAngleLimit; // 0xa0(0x04)
	char UnknownData_A4_0 : 7; // 0xa4(0x01)
	bool bUseHearingAngleLimit : 1; // 0xa4(0x01)
	char UnknownData_A5[0x3]; // 0xa5(0x03)
	float HearingAngleLimit; // 0xa8(0x04)
	float SpeechMaxDistance; // 0xac(0x04)
	struct UWorld* World; // 0xb0(0x08)
	struct UFWAIReactionsManager* ReactionsManager; // 0xb8(0x08)
	struct UFWAISystem* AISys; // 0xc0(0x08)
	struct FTimerHandle ReactionDelayTimerHandle; // 0xc8(0x08)
	struct FTimerHandle SpeechDelayTimerHandle; // 0xd0(0x08)
	struct FTimerHandle ReactionCooldownTimerHandle; // 0xd8(0x08)
	char UnknownData_E0[0x20]; // 0xe0(0x20)
	struct FReactionsGoalPointSettings GoalPointSettings; // 0x100(0x18)
	char bUpdateBehaviour : 1; // 0x118(0x01)
	char bReactionDelayEnabled : 1; // 0x118(0x01)
	char bReactionCooldownEnabled : 1; // 0x118(0x01)
	char bSpeaking : 1; // 0x118(0x01)
	char bHadSpoken : 1; // 0x118(0x01)
	char bWasLastReactionSensedBySight : 1; // 0x118(0x01)
	char UnknownData_118_6 : 2; // 0x118(0x01)
	char UnknownData_119[0x1]; // 0x119(0x01)
	int16_t SightAngleLimit; // 0x11a(0x02)
	char UnknownData_11C[0x4]; // 0x11c(0x04)
	struct AFWAIController* AIController; // 0x120(0x08)
	struct UFWAIComponent* AIComponent; // 0x128(0x08)
};

// Class AIFramework.FWAIRes_StepAside
// Size: 0x88 (Inherited: 0x70)
struct UFWAIRes_StepAside : UFWAIResponse {
	char UnknownData_70[0x18]; // 0x70(0x18)

	void OnMantle(struct FVector EventOrigin, struct ABaseCharacter* InstigatorCharacter); // Function AIFramework.FWAIRes_StepAside.OnMantle // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x3aa16c0
};

// Class AIFramework.FWAIResponseChannel
// Size: 0x48 (Inherited: 0x28)
struct UFWAIResponseChannel : UObject {
	struct FName ChannelName; // 0x28(0x08)
	char bNeedsPoll : 1; // 0x30(0x01)
	char bChannelSuppressed : 1; // 0x30(0x01)
	char bIsActive : 1; // 0x30(0x01)
	char UnknownData_30_3 : 5; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct TArray<struct UFWAIResponse*> Responses; // 0x38(0x10)

	void UnSuppress(); // Function AIFramework.FWAIResponseChannel.UnSuppress // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1c60
	void Suppress(); // Function AIFramework.FWAIResponseChannel.Suppress // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1ae0
	void ReceiveTick(float DeltaSeconds); // Function AIFramework.FWAIResponseChannel.ReceiveTick // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void OnDeactivate(); // Function AIFramework.FWAIResponseChannel.OnDeactivate // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void OnActivate(); // Function AIFramework.FWAIResponseChannel.OnActivate // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	bool IsSuppressed(); // Function AIFramework.FWAIResponseChannel.IsSuppressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aa15e0
	bool IsActive(); // Function AIFramework.FWAIResponseChannel.IsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aa1590
};

// Class AIFramework.FWAIResChannel_AbilityTag
// Size: 0x68 (Inherited: 0x48)
struct UFWAIResChannel_AbilityTag : UFWAIResponseChannel {
	char UnknownData_48[0x20]; // 0x48(0x20)

	struct FWAIResChannel_AbilityTagStatus GetTagStatus(); // Function AIFramework.FWAIResChannel_AbilityTag.GetTagStatus // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa14d0
};

// Class AIFramework.FWAIResChannel_Damage
// Size: 0x48 (Inherited: 0x48)
struct UFWAIResChannel_Damage : UFWAIResponseChannel {
};

// Class AIFramework.FWAIResChannel_HeavyDamage
// Size: 0x48 (Inherited: 0x48)
struct UFWAIResChannel_HeavyDamage : UFWAIResChannel_Damage {
};

// Class AIFramework.FWAIPerceptionResponseChannel
// Size: 0x60 (Inherited: 0x48)
struct UFWAIPerceptionResponseChannel : UFWAIResponseChannel {
	struct AActor* LastInstigator; // 0x48(0x08)
	char UnknownData_50[0x10]; // 0x50(0x10)
};

// Class AIFramework.FWAIResChannel_Perception
// Size: 0x60 (Inherited: 0x60)
struct UFWAIResChannel_Perception : UFWAIPerceptionResponseChannel {
};

// Class AIFramework.FWAIResChannel_StepAside
// Size: 0x48 (Inherited: 0x48)
struct UFWAIResChannel_StepAside : UFWAIResponseChannel {
};

// Class AIFramework.FWAIResChannel_ThreatLevel
// Size: 0x48 (Inherited: 0x48)
struct UFWAIResChannel_ThreatLevel : UFWAIResponseChannel {
};

// Class AIFramework.FWAIResChannel_Timer
// Size: 0x48 (Inherited: 0x48)
struct UFWAIResChannel_Timer : UFWAIResponseChannel {
};

// Class AIFramework.FWAIResponseComponent
// Size: 0x1f0 (Inherited: 0x180)
struct UFWAIResponseComponent : UActorComponent {
	struct TMap<struct FName, struct UFWAIResponseChannel*> Channels; // 0x180(0x50)
	struct TArray<struct UFWAIResponseChannel*> PollChannels; // 0x1d0(0x10)
	struct AFWAIController* AIOwner; // 0x1e0(0x08)
	char UnknownData_1E8[0x8]; // 0x1e8(0x08)

	void UnSuppressResponsesByType(struct UFWAIResponse* Type); // Function AIFramework.FWAIResponseComponent.UnSuppressResponsesByType // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1d40
	void UnSuppressResponseChannelByType(struct UFWAIResponseChannel* Type); // Function AIFramework.FWAIResponseComponent.UnSuppressResponseChannelByType // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1cc0
	void UnSuppressAllChannels(); // Function AIFramework.FWAIResponseComponent.UnSuppressAllChannels // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1ca0
	void UnSuppressAll(); // Function AIFramework.FWAIResponseComponent.UnSuppressAll // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1c80
	void SuppressResponsesByType(struct UFWAIResponse* Type); // Function AIFramework.FWAIResponseComponent.SuppressResponsesByType // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1bc0
	void SuppressResponseChannelByType(struct UFWAIResponseChannel* Type); // Function AIFramework.FWAIResponseComponent.SuppressResponseChannelByType // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1b40
	void SuppressAllChannels(); // Function AIFramework.FWAIResponseComponent.SuppressAllChannels // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1b20
	void SuppressAll(); // Function AIFramework.FWAIResponseComponent.SuppressAll // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1b00
	void OnOwnerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function AIFramework.FWAIResponseComponent.OnOwnerEndPlay // (Final|Native|Public) // @ game+0x3aa17a0
	void NudgeChannelByName(struct FName ChannelName); // Function AIFramework.FWAIResponseComponent.NudgeChannelByName // (Native|Public|BlueprintCallable) // @ game+0xbde870
	void NudgeChannelByClass(struct UFWAIResponseChannel* ChannelClass); // Function AIFramework.FWAIResponseComponent.NudgeChannelByClass // (Native|Public|BlueprintCallable) // @ game+0x156e4a0
	struct AFWAIController* GetAIOwner(); // Function AIFramework.FWAIResponseComponent.GetAIOwner // (Final|Native|Public|BlueprintCallable) // @ game+0x3aa1350
};

// Class AIFramework.FWAISquad_Melee
// Size: 0x1c8 (Inherited: 0x1a8)
struct UFWAISquad_Melee : UFWAISquad {
	struct TArray<struct FFWExtendedSquadEnemyInfo> ExtendedSquadEnemyInfo; // 0x1a8(0x10)
	char UnknownData_1B8[0x10]; // 0x1b8(0x10)
};

// Class AIFramework.FWAISemaphoreGroupClass_Test
// Size: 0x30 (Inherited: 0x30)
struct UFWAISemaphoreGroupClass_Test : UFWAISemaphoreGroupClass {
};

// Class AIFramework.FWAISemaphoreGroupClass_FireTickets
// Size: 0x38 (Inherited: 0x30)
struct UFWAISemaphoreGroupClass_FireTickets : UFWAISemaphoreGroupClass {
	enum class None ClampMinConcurrentLimit; // 0x30(0x01)
	enum class None ClampMaxConcurrentLimit; // 0x31(0x01)
	int8_t LinearFunctionA; // 0x32(0x01)
	int8_t LinearFunctionB; // 0x33(0x01)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// Class AIFramework.FWAISemaphoreGroupClass_Melee
// Size: 0x30 (Inherited: 0x30)
struct UFWAISemaphoreGroupClass_Melee : UFWAISemaphoreGroupClass {
};

// Class AIFramework.EQSResultHandler
// Size: 0x28 (Inherited: 0x28)
struct UEQSResultHandler : UObject {
};

// Class AIFramework.EQSResultHandler_SetCoverDestination
// Size: 0x28 (Inherited: 0x28)
struct UEQSResultHandler_SetCoverDestination : UEQSResultHandler {
};

// Class AIFramework.EQSResultHandler_SetCombatSpot
// Size: 0x28 (Inherited: 0x28)
struct UEQSResultHandler_SetCombatSpot : UEQSResultHandler {
};

// Class AIFramework.FWAITask_CombatActionEx
// Size: 0xf8 (Inherited: 0xf0)
struct UFWAITask_CombatActionEx : UAITask_PlayAnimation {
	char UnknownData_F0[0x8]; // 0xf0(0x08)
};

// Class AIFramework.FWAITask_CustomCoverAction
// Size: 0x108 (Inherited: 0x108)
struct UFWAITask_CustomCoverAction : UFWAITask_CoverAction {
};

// Class AIFramework.FWAITask_Dash
// Size: 0xf8 (Inherited: 0xf0)
struct UFWAITask_Dash : UAITask_PlayAnimation {
	char UnknownData_F0[0x8]; // 0xf0(0x08)
};

// Class AIFramework.FWAITask_ExecuteGameplayAbility
// Size: 0xb0 (Inherited: 0x98)
struct UFWAITask_ExecuteGameplayAbility : UFWAITask {
	char UnknownData_98[0x18]; // 0x98(0x18)
};

// Class AIFramework.FWAITask_JumpOver
// Size: 0x118 (Inherited: 0xf0)
struct UFWAITask_JumpOver : UAITask_PlayAnimation {
	char UnknownData_F0[0x20]; // 0xf0(0x20)
	struct UAnimMontage* MontageWithSections; // 0x110(0x08)
};

// Class AIFramework.FWAITask_MantleOverCoverNoAnim
// Size: 0x140 (Inherited: 0x128)
struct UFWAITask_MantleOverCoverNoAnim : UFWAITask_MantleOverCover {
	float MoveTime; // 0x128(0x04)
	char UnknownData_12C[0x14]; // 0x12c(0x14)
};

// Class AIFramework.FWAITask_PlaySpawnAnimation
// Size: 0xd8 (Inherited: 0x98)
struct UFWAITask_PlaySpawnAnimation : UFWAITask {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct UAnimMontage* MontageToPlay; // 0xa0(0x08)
	char UnknownData_A8[0x30]; // 0xa8(0x30)

	void OnOwnerKilled(struct ABaseCharacter* character, struct FTakeHitInfo TakeHitInfo); // Function AIFramework.FWAITask_PlaySpawnAnimation.OnOwnerKilled // (Final|Native|Protected) // @ game+0x3aa63f0
};

// Class AIFramework.FWAITask_SetFocus
// Size: 0xb0 (Inherited: 0x98)
struct UFWAITask_SetFocus : UFWAITask {
	char UnknownData_98[0x18]; // 0x98(0x18)

	struct UFWAITask_SetFocus* SetAIFocusAsVector(struct AAIController* Controller, struct FVector FocusLocation, float PrecisionAngle); // Function AIFramework.FWAITask_SetFocus.SetAIFocusAsVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3aa6640
};

// Class AIFramework.FWAIVisibilitySystem
// Size: 0x268 (Inherited: 0x28)
struct UFWAIVisibilitySystem : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)
	struct TArray<struct FFWPendingSightInfo> PendingChecks; // 0x40(0x10)
	char UnknownData_50[0x50]; // 0x50(0x50)
	struct TMap<struct AFWAIController*, float> PerceptionUpdateCounters; // 0xa0(0x50)
	char UnknownData_F0[0x10]; // 0xf0(0x10)
	struct TMap<uint64_t, struct FSightTraceData> AsyncSightCheckRequests; // 0x100(0x50)
	char UnknownData_150_0 : 7; // 0x150(0x01)
	bool bUseAsyncTraceForSightCheck : 1; // 0x150(0x01)
	char UnknownData_151[0x3]; // 0x151(0x03)
	float CacheValidDuration; // 0x154(0x04)
	int32_t MaxCacheSize; // 0x158(0x04)
	float MaxSightTimeCost; // 0x15c(0x04)
	int32_t MaxSightTraces; // 0x160(0x04)
	float PerceptionUpdateInterval; // 0x164(0x04)
	char UnknownData_168[0x4]; // 0x168(0x04)
	float CacheCleanupInterval; // 0x16c(0x04)
	char UnknownData_170[0xf8]; // 0x170(0xf8)
};

// Class AIFramework.FWAIWeaponAnimationDataAsset
// Size: 0x80 (Inherited: 0x30)
struct UFWAIWeaponAnimationDataAsset : UDataAsset {
	struct TMap<struct UWeaponType*, struct FFWAIWeaponAnimationData> WeaponAnimationData; // 0x30(0x50)
};

// Class AIFramework.MadDataAsset_ThrowProjectileVariants
// Size: 0x40 (Inherited: 0x30)
struct UMadDataAsset_ThrowProjectileVariants : UDataAsset {
	struct TArray<struct FMadAI_SingleThrowEntry> Variants; // 0x30(0x10)
};

// Class AIFramework.FWAIWeaponComponent
// Size: 0x330 (Inherited: 0x180)
struct UFWAIWeaponComponent : UActorComponent {
	char UnknownData_180_0 : 6; // 0x180(0x01)
	char bAutoFiringDisabled : 1; // 0x180(0x01)
	char UnknownData_181[0x37]; // 0x181(0x37)
	struct UFWAIWeaponAnimationDataAsset* AIWeaponAnimationDataAsset; // 0x1b8(0x08)
	struct FFWProjectileController ProjectileController; // 0x1c0(0x150)
	enum class EFWAIWeaponSlot ActiveWeaponSlot; // 0x310(0x01)
	char UnknownData_311[0x7]; // 0x311(0x07)
	struct AWeapon* WeaponSlots[0x3]; // 0x318(0x18)

	bool UnequipWeapon(); // Function AIFramework.FWAIWeaponComponent.UnequipWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x3aab2e0
	void ThrowGrenade(); // Function AIFramework.FWAIWeaponComponent.ThrowGrenade // (Final|Native|Public|BlueprintCallable) // @ game+0x3aab2c0
	void SetProjectileClass(struct AProjectile* ProjectileClass); // Function AIFramework.FWAIWeaponComponent.SetProjectileClass // (Final|Native|Public|BlueprintCallable) // @ game+0x3aab240
	bool SetPendingWeapon(enum class EFWAIWeaponSlot Slot); // Function AIFramework.FWAIWeaponComponent.SetPendingWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x3aab1b0
	void OnActorHit(struct FHitResult Impact); // Function AIFramework.FWAIWeaponComponent.OnActorHit // (Native|Protected|HasOutParms) // @ game+0x3aaac80
	bool NeedsReload(); // Function AIFramework.FWAIWeaponComponent.NeedsReload // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aaac50
	bool IsValidTrajectory(); // Function AIFramework.FWAIWeaponComponent.IsValidTrajectory // (Final|Native|Public|BlueprintCallable) // @ game+0x3aaac20
	bool IsReloading(); // Function AIFramework.FWAIWeaponComponent.IsReloading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aaabf0
	bool IsAutoFiringEnabled(); // Function AIFramework.FWAIWeaponComponent.IsAutoFiringEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x3aaabc0
	struct AWeapon* GetWeapon(enum class EFWAIWeaponSlot Slot); // Function AIFramework.FWAIWeaponComponent.GetWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aaab10
	enum class EFWAIWeaponSlot GetActiveWeaponSlot(); // Function AIFramework.FWAIWeaponComponent.GetActiveWeaponSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1613ca0
	struct AWeapon* GetActiveWeapon(); // Function AIFramework.FWAIWeaponComponent.GetActiveWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3aaaaa0
	void ForceFireAtTarget(bool Force); // Function AIFramework.FWAIWeaponComponent.ForceFireAtTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x3aaaa10
	bool EquipWeapon(enum class EFWAIWeaponSlot Slot); // Function AIFramework.FWAIWeaponComponent.EquipWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x3aaa980
	void EnableProjectileCalculations(bool bEnable); // Function AIFramework.FWAIWeaponComponent.EnableProjectileCalculations // (Final|Native|Public|BlueprintCallable) // @ game+0x3aaa8f0
	void EnableAutoFiring(bool bEnable); // Function AIFramework.FWAIWeaponComponent.EnableAutoFiring // (Final|Native|Public|BlueprintCallable) // @ game+0x3aaa860
	void DropProjectileAway(float MinDistance, float MaxDistance, float ExtraHeight, struct Acharacter* PawnInstigatorOverride); // Function AIFramework.FWAIWeaponComponent.DropProjectileAway // (Final|Native|Public|BlueprintCallable) // @ game+0x3aaa700
	void DropProjectile(); // Function AIFramework.FWAIWeaponComponent.DropProjectile // (Final|Native|Public|BlueprintCallable) // @ game+0x3aaa6e0
	void CheckLOS(bool bCheck); // Function AIFramework.FWAIWeaponComponent.CheckLOS // (Final|Native|Public|BlueprintCallable) // @ game+0x3aaa650
	void AllowWeaponFiring(bool Allow); // Function AIFramework.FWAIWeaponComponent.AllowWeaponFiring // (Final|Native|Public|BlueprintCallable) // @ game+0x3aaa5c0
	void AllowReload(bool Allow); // Function AIFramework.FWAIWeaponComponent.AllowReload // (Final|Native|Public|BlueprintCallable) // @ game+0x3aaa530
};

// Class AIFramework.FWAnimationProxyDataEnemy
// Size: 0x78 (Inherited: 0x28)
struct UFWAnimationProxyDataEnemy : UBaseAnimProxyData {
	struct TMap<struct FSoftObjectPath, struct UAnimMontage*> AnimMontageCache; // 0x28(0x50)

	void OnMontagesPreloaded(struct TArray<struct FSoftObjectPath> LoadedAssets); // Function AIFramework.FWAnimationProxyDataEnemy.OnMontagesPreloaded // (Final|Native|Public) // @ game+0x3aaaf90
};

// Class AIFramework.FWAnimNotify_StartFiring
// Size: 0x48 (Inherited: 0x40)
struct UFWAnimNotify_StartFiring : UFWAnimNotify {
	char UnknownData_40_0 : 7; // 0x40(0x01)
	bool bForceFire : 1; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class AIFramework.FWAnimNotify_StopFiring
// Size: 0x40 (Inherited: 0x40)
struct UFWAnimNotify_StopFiring : UFWAnimNotify {
};

// Class AIFramework.FWAnimNotify_CameraShake
// Size: 0x68 (Inherited: 0x40)
struct UFWAnimNotify_CameraShake : UFWAnimNotify {
	struct UCameraShake* Shake; // 0x40(0x08)
	struct FVector EpicenterOffset; // 0x48(0x0c)
	float InnerRadius; // 0x54(0x04)
	float OuterRadius; // 0x58(0x04)
	float Falloff; // 0x5c(0x04)
	char UnknownData_60_0 : 7; // 0x60(0x01)
	bool bOrientShakeTowardsEpicenter : 1; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// Class AIFramework.FWAnimNotify_RadialDamage
// Size: 0x68 (Inherited: 0x40)
struct UFWAnimNotify_RadialDamage : UFWAnimNotify {
	struct UDamageType* DamageTypeClass; // 0x40(0x08)
	float BaseDamage; // 0x48(0x04)
	float DamageInnerRadius; // 0x4c(0x04)
	float DamageOuterRadius; // 0x50(0x04)
	float DamageFalloff; // 0x54(0x04)
	struct FVector EpicenterOffset; // 0x58(0x0c)
	char UnknownData_64_0 : 7; // 0x64(0x01)
	bool bDoFullDamage : 1; // 0x64(0x01)
	enum class ECollisionChannel DamagePreventionChannel; // 0x65(0x01)
	char UnknownData_66[0x2]; // 0x66(0x02)
};

// Class AIFramework.FWAnimNotify_SingleMeleeHit
// Size: 0x60 (Inherited: 0x40)
struct UFWAnimNotify_SingleMeleeHit : UFWAnimNotify {
	float HitDetectionFOV; // 0x40(0x04)
	float HitDetectionDistance; // 0x44(0x04)
	struct FName DirectionBone; // 0x48(0x08)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bNegativeBone : 1; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct UDamageType* DamageTypeClass; // 0x58(0x08)
};

// Class AIFramework.FWAnimNotifyState_OSARequest
// Size: 0x40 (Inherited: 0x40)
struct UFWAnimNotifyState_OSARequest : UFWAnimNotify {
};

// Class AIFramework.FWAnimNotify_ApplyExplosionTemplate
// Size: 0x58 (Inherited: 0x40)
struct UFWAnimNotify_ApplyExplosionTemplate : UFWAnimNotify {
	struct UExplosionTemplate* ExplosionTemplate; // 0x40(0x08)
	struct FName BoneName; // 0x48(0x08)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bUseMovePrediction : 1; // 0x50(0x01)
	char UnknownData_51_0 : 7; // 0x51(0x01)
	bool bSpawnAtTargetLocation : 1; // 0x51(0x01)
	char UnknownData_52_0 : 7; // 0x52(0x01)
	bool bSpawnAtAllTargetsLocations : 1; // 0x52(0x01)
	char UnknownData_53_0 : 7; // 0x53(0x01)
	bool bIgnorePlayers : 1; // 0x53(0x01)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// Class AIFramework.FWAnimNotifyState_SetNewMovementMode
// Size: 0x48 (Inherited: 0x40)
struct UFWAnimNotifyState_SetNewMovementMode : UFWAnimNotifyState {
	enum class EMovementMode NewMovementMode; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class AIFramework.FWAnimNotify_ApplyDamage
// Size: 0x48 (Inherited: 0x40)
struct UFWAnimNotify_ApplyDamage : UFWAnimNotify {
	struct UDamageType* DamageTypeClass; // 0x40(0x08)
};

// Class AIFramework.FWAnimNotifyState_ExtendedSpaceWrapping
// Size: 0x90 (Inherited: 0x40)
struct UFWAnimNotifyState_ExtendedSpaceWrapping : UFWAnimNotifyState {
	struct FVector2D AnimRootMotionTranslationScale; // 0x40(0x08)
	enum class EFWSpaceWrapping2TurnDirection TurnDirection; // 0x48(0x04)
	enum class EFWSpaceWrapping2TurnMode TurnMode; // 0x4c(0x04)
	struct FVector2D AnimRootMotionRotationScale; // 0x50(0x08)
	float RotationSpeed; // 0x58(0x04)
	float OptimalDistance; // 0x5c(0x04)
	float TrackingDuration; // 0x60(0x04)
	enum class EFWSpaceWrappingType WrappingType; // 0x64(0x01)
	char UnknownData_65[0x3]; // 0x65(0x03)
	char bOffsetByCharacterRadius : 1; // 0x68(0x01)
	char bOffsetByTargetRadius : 1; // 0x68(0x01)
	char bProjectDistanceOnRootMotion : 1; // 0x68(0x01)
	char bUsePrediction : 1; // 0x68(0x01)
	char bLimitPredictionToAnimationEnd : 1; // 0x68(0x01)
	char UnknownData_68_5 : 3; // 0x68(0x01)
	char UnknownData_69[0x3]; // 0x69(0x03)
	float PredictionTime; // 0x6c(0x04)
	float PredictionMaxDistance; // 0x70(0x04)
	char UnknownData_74_0 : 7; // 0x74(0x01)
	bool bForceRotateForwardDirection : 1; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
	float DeltaAngle; // 0x78(0x04)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
	struct UFWSpaceWrappingDestinationProvider* DestinationProvider; // 0x80(0x08)
	char UnknownData_88[0x8]; // 0x88(0x08)
};

// Class AIFramework.FWAnimNotifyState_SpaceWrapping
// Size: 0x190 (Inherited: 0x40)
struct UFWAnimNotifyState_SpaceWrapping : UFWAnimNotifyState {
	struct FVector2D AnimRootMotionTranslationScale; // 0x40(0x08)
	float RotationCorrectionRange; // 0x48(0x04)
	float RotationSpeed; // 0x4c(0x04)
	enum class EFWSpaceWrappingType WrappingType; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	char bOffsetByCharacterRadius : 1; // 0x54(0x01)
	char bOffsetByTargetRadius : 1; // 0x54(0x01)
	char UnknownData_54_2 : 6; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	struct UFWSpaceWrappingDestinationProvider* DestinationProvider; // 0x58(0x08)
	char UnknownData_60[0x130]; // 0x60(0x130)
};

// Class AIFramework.FWAnimNotifyState_VerticalSpaceWrapping
// Size: 0x58 (Inherited: 0x40)
struct UFWAnimNotifyState_VerticalSpaceWrapping : UFWAnimNotifyState {
	struct FVector2D AnimRootMotionTranslationScale; // 0x40(0x08)
	float OptimalDistance; // 0x48(0x04)
	enum class EFWVerticalSpaceWrappingDistanceMode DistanceMode; // 0x4c(0x04)
	char UnknownData_50[0x8]; // 0x50(0x08)
};

// Class AIFramework.FWSpaceWrappingDestinationProvider_EnemyTarget
// Size: 0x28 (Inherited: 0x28)
struct UFWSpaceWrappingDestinationProvider_EnemyTarget : UFWSpaceWrappingDestinationProvider {
};

// Class AIFramework.FWSpaceWrappingDestinationProvider_FocalPoint
// Size: 0x28 (Inherited: 0x28)
struct UFWSpaceWrappingDestinationProvider_FocalPoint : UFWSpaceWrappingDestinationProvider {
};

// Class AIFramework.FWSpaceWrappingDestinationProvider_MoveTarget
// Size: 0x30 (Inherited: 0x28)
struct UFWSpaceWrappingDestinationProvider_MoveTarget : UFWSpaceWrappingDestinationProvider {
	float RotationCorrectionRange; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class AIFramework.FWSpaceWrappingDestinationProvider_NextPathPoint
// Size: 0x28 (Inherited: 0x28)
struct UFWSpaceWrappingDestinationProvider_NextPathPoint : UFWSpaceWrappingDestinationProvider {
};

// Class AIFramework.FWSpaceWrappingDestinationProvider_CustomLocation
// Size: 0x28 (Inherited: 0x28)
struct UFWSpaceWrappingDestinationProvider_CustomLocation : UFWSpaceWrappingDestinationProvider {
};

// Class AIFramework.FWSpaceWrappingDestinationProvider_CoverMantleMidpoint
// Size: 0x28 (Inherited: 0x28)
struct UFWSpaceWrappingDestinationProvider_CoverMantleMidpoint : UFWSpaceWrappingDestinationProvider {
};

// Class AIFramework.FWBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFWBlueprintLibrary : UBlueprintFunctionLibrary {

	void RestoreDefaultCollisionOnCharacter(struct ABaseCharacter* Char, int32_t ID); // Function AIFramework.FWBlueprintLibrary.RestoreDefaultCollisionOnCharacter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3aafc50
	struct FVector PredictActorLocation(struct APawn* Pawn, float PredictionTime, float PredictionMaxDistance, struct FVector ExtraExtent); // Function AIFramework.FWBlueprintLibrary.PredictActorLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3aafaf0
	struct FCoverSlotInfo MakeCoverSlotInfo(struct AAIHotSpot* InHotSpot, int32_t InSlotIndex); // Function AIFramework.FWBlueprintLibrary.MakeCoverSlotInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3aafa30
	void LogSegment(struct UObject* WorldContextObject, struct FVector SegmentStart, struct FVector SegmentEnd, struct FString Text, struct FLinearColor Color, struct FName CategoryName); // Function AIFramework.FWBlueprintLibrary.LogSegment // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3aaf800
	void K2_SelectRandomValidAnimation(struct UObject* WorldContextObject, struct ABaseCharacter* character, struct TArray<struct FMontageAssetSelector> Animations, struct FMontageAssetSelector Montage, bool TestNavmesh, bool TestColision, enum class ECollisionChannel Channel); // Function AIFramework.FWBlueprintLibrary.K2_SelectRandomValidAnimation // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3aaf580
	void K2_GetValidAnimations(struct UObject* WorldContextObject, struct ABaseCharacter* character, struct TArray<struct FMontageAssetSelector> Animations, struct TArray<struct FMontageAssetSelector> ValidAnimations, bool TestNavmesh, bool TestColision, enum class ECollisionChannel Channel); // Function AIFramework.FWBlueprintLibrary.K2_GetValidAnimations // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3aaf2e0
	void K2_GetRootMotionWorldSpaceTranslation(struct UObject* WorldContextObject, struct Acharacter* character, struct FMontageAssetSelector MontageAsset, struct FVector OutAnimTranslation); // Function AIFramework.FWBlueprintLibrary.K2_GetRootMotionWorldSpaceTranslation // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3aaf110
	struct FRotator K2_GetCharacterRotationAfterMontage(struct UObject* WorldContextObject, struct Acharacter* character, struct FMontageAssetSelector MontageAsset); // Function AIFramework.FWBlueprintLibrary.K2_GetCharacterRotationAfterMontage // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3aaef70
	void K2_GetCharacterLocationAndRotationAfterMontage(struct UObject* WorldContextObject, struct Acharacter* character, struct FMontageAssetSelector MontageAsset, struct FVector OutLocation, struct FRotator OutRotation); // Function AIFramework.FWBlueprintLibrary.K2_GetCharacterLocationAndRotationAfterMontage // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3aaed60
	struct FVector K2_GetCharacterLocationAfterMontage(struct UObject* WorldContextObject, struct Acharacter* character, struct FMontageAssetSelector MontageAsset); // Function AIFramework.FWBlueprintLibrary.K2_GetCharacterLocationAfterMontage // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3aaebc0
	void K2_GetBestHitInfoFromDamage(struct FDamageEvent Event, struct AActor* HitActor, struct AActor* HitInstigator, struct FHitResult OutHitInfo, struct FVector OutImpulseDir); // Function AIFramework.FWBlueprintLibrary.K2_GetBestHitInfoFromDamage // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3aae970
	bool HasDirectNavPath(struct APawn* Pawn, struct FVector Destination, struct FVector DirectPathEnd, struct FVector ExtraExtent); // Function AIFramework.FWBlueprintLibrary.HasDirectNavPath // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3aae800
	void GetAllCharactersWithArchetype(struct UObject* WorldContextObject, struct FFWAIArchetypeVariation ArchetypeVariation, struct TArray<struct ABaseCharacter*> OutCharacters); // Function AIFramework.FWBlueprintLibrary.GetAllCharactersWithArchetype // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3aae6b0
	int32_t ForceCollisionOnCharacter(struct ABaseCharacter* Char, struct FName Reason); // Function AIFramework.FWBlueprintLibrary.ForceCollisionOnCharacter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3aae5e0
	bool CheckNavLOS(struct APawn* Pawn, struct FVector Start, struct FVector Destination, struct FVector HitLocation, struct FVector ExtraExtent); // Function AIFramework.FWBlueprintLibrary.CheckNavLOS // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3aae410
	bool CheckCharactersCollisionOnSegment(struct ABaseCharacter* character, struct FVector StartLocation, struct FVector EndLocation); // Function AIFramework.FWBlueprintLibrary.CheckCharactersCollisionOnSegment // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3aae2e0
};

// Class AIFramework.FWBTComposite_LoopedSelector
// Size: 0x90 (Inherited: 0x90)
struct UFWBTComposite_LoopedSelector : UBTCompositeNode {
};

// Class AIFramework.FWBTComposite_Random
// Size: 0xa8 (Inherited: 0x90)
struct UFWBTComposite_Random : UBTCompositeNode {
	char UnknownData_90_0 : 7; // 0x90(0x01)
	bool bRetryOnFail : 1; // 0x90(0x01)
	char UnknownData_91_0 : 7; // 0x91(0x01)
	bool bRetryOnSuccess : 1; // 0x91(0x01)
	char UnknownData_92[0x6]; // 0x92(0x06)
	struct TArray<float> ChildrenWeights; // 0x98(0x10)
};

// Class AIFramework.FWBTContext_AbilitiesContext
// Size: 0xd0 (Inherited: 0x70)
struct UFWBTContext_AbilitiesContext : UFWBTService_ContextOverride {
	struct FGameplayTagContainer CancelAbilitiesWithTag; // 0x70(0x20)
	struct FGameplayTagContainer BlockAbilitiesWithTag; // 0x90(0x20)
	struct FGameplayTagContainer LooseGameplayTagsToSet; // 0xb0(0x20)
};

// Class AIFramework.FWBTContext_ClaimSemaphore
// Size: 0xb0 (Inherited: 0x70)
struct UFWBTContext_ClaimSemaphore : UFWBTService_ContextOverride {
	float UnlockDelay; // 0x70(0x04)
	char UnknownData_74[0x4]; // 0x74(0x04)
	struct UFWAISemaphoreGroupClass* GroupClass; // 0x78(0x08)
	struct FBlackboardKeySelector PerTargetActor; // 0x80(0x28)
	char bUsePerTargetActor : 1; // 0xa8(0x01)
	char bUnlockSemaphoreAfterDelay : 1; // 0xa8(0x01)
	char bUnlockSemaphoreIfStartedReaction : 1; // 0xa8(0x01)
	char UnknownData_A8_3 : 5; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// Class AIFramework.FWBTContext_SuppressResponseByClass
// Size: 0x88 (Inherited: 0x70)
struct UFWBTContext_SuppressResponseByClass : UFWBTService_ContextOverride {
	char bAllResponses : 1; // 0x70(0x01)
	char UnknownData_70_1 : 7; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct TArray<struct UFWAIResponse*> ResponseClasses; // 0x78(0x10)
};

// Class AIFramework.FWBTContext_SuppressResponseChannelByClass
// Size: 0x88 (Inherited: 0x70)
struct UFWBTContext_SuppressResponseChannelByClass : UFWBTService_ContextOverride {
	char bAllChannels : 1; // 0x70(0x01)
	char UnknownData_70_1 : 7; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct TArray<struct UFWAIResponseChannel*> ChannelClasses; // 0x78(0x10)
};

// Class AIFramework.FWBTContext_TargetSelection
// Size: 0xc0 (Inherited: 0x70)
struct UFWBTContext_TargetSelection : UFWBTService_ContextOverride {
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x70(0x48)
	char bUseSquadBasedTargetSelection : 1; // 0xb8(0x01)
	char UnknownData_B8_1 : 7; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
};

// Class AIFramework.FWBTDecorator_Accumulator
// Size: 0x78 (Inherited: 0x68)
struct UFWBTDecorator_Accumulator : UBTDecorator {
	enum class EAccumulatorAccessType AccessBeforeThreshold; // 0x68(0x01)
	enum class EAccumulatorAccessType AccessAfterThreshold; // 0x69(0x01)
	char UnknownData_6A[0x2]; // 0x6a(0x02)
	int32_t minThreshold; // 0x6c(0x04)
	int32_t maxThreshold; // 0x70(0x04)
	char UnknownData_74_0 : 7; // 0x74(0x01)
	bool bResetOnAccess : 1; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
};

// Class AIFramework.FWBTDecorator_CheckGameplayTagsOnActor
// Size: 0xc8 (Inherited: 0xc8)
struct UFWBTDecorator_CheckGameplayTagsOnActor : UBTDecorator_CheckGameplayTagsOnActor {
};

// Class AIFramework.FWBTDecorator_ConeCheck
// Size: 0xf0 (Inherited: 0xf0)
struct UFWBTDecorator_ConeCheck : UBTDecorator_ConeCheck {
};

// Class AIFramework.FWBTDecorator_Cooldown
// Size: 0x78 (Inherited: 0x70)
struct UFWBTDecorator_Cooldown : UBTDecorator_Cooldown {
	char UnknownData_70_0 : 7; // 0x70(0x01)
	bool bCoolDownAfterSuccess : 1; // 0x70(0x01)
	char UnknownData_71_0 : 7; // 0x71(0x01)
	bool bCoolDownAfterFail : 1; // 0x71(0x01)
	char UnknownData_72_0 : 7; // 0x72(0x01)
	bool bCoolDownAfterAbort : 1; // 0x72(0x01)
	char UnknownData_73[0x5]; // 0x73(0x05)
};

// Class AIFramework.FWBTDecorator_IsDoingCoverAction
// Size: 0x98 (Inherited: 0x90)
struct UFWBTDecorator_IsDoingCoverAction : UBTDecorator_BlackboardBase {
	char UnknownData_90_0 : 7; // 0x90(0x01)
	bool bNotInCoverAsTrue : 1; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
};

// Class AIFramework.FWBTDecorator_ForceFail
// Size: 0x68 (Inherited: 0x68)
struct UFWBTDecorator_ForceFail : UBTDecorator {
};

// Class AIFramework.FWBTDecorator_QueryGameplayAbility
// Size: 0xd8 (Inherited: 0x68)
struct UFWBTDecorator_QueryGameplayAbility : UBTDecorator {
	struct FGameplayTagContainer GameplayAbilityTag; // 0x68(0x20)
	struct FBlackboardKeySelector Target; // 0x88(0x28)
	struct FGameplayTagContainer ActiveAbilityTagsToSkipTesting; // 0xb0(0x20)
	char UnknownData_D0_0 : 7; // 0xd0(0x01)
	bool bUseTarget : 1; // 0xd0(0x01)
	char UnknownData_D1[0x3]; // 0xd1(0x03)
	float TimeInterval; // 0xd4(0x04)
};

// Class AIFramework.FWBTDecorator_GameplayAbility_CanActivate
// Size: 0xd8 (Inherited: 0xd8)
struct UFWBTDecorator_GameplayAbility_CanActivate : UFWBTDecorator_QueryGameplayAbility {
};

// Class AIFramework.FWBTDecorator_GameplayAbility_CanHitTarget
// Size: 0xe0 (Inherited: 0xd8)
struct UFWBTDecorator_GameplayAbility_CanHitTarget : UFWBTDecorator_QueryGameplayAbility {
	char UseIdealYawRotationToTarget : 1; // 0xd8(0x01)
	char UnknownData_D8_1 : 7; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
};

// Class AIFramework.FWBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags
// Size: 0xd8 (Inherited: 0xd8)
struct UFWBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags : UFWBTDecorator_QueryGameplayAbility {
};

// Class AIFramework.FWBTDecorator_GameplayAbility_HasGameplayAbility
// Size: 0x88 (Inherited: 0x68)
struct UFWBTDecorator_GameplayAbility_HasGameplayAbility : UBTDecorator {
	struct FGameplayTagContainer GameplayAbilityTag; // 0x68(0x20)
};

// Class AIFramework.FWBTDecorator_GameplayAbility_HasGameplayTags
// Size: 0xb8 (Inherited: 0x68)
struct UFWBTDecorator_GameplayAbility_HasGameplayTags : UBTDecorator {
	struct FGameplayTagContainer GameplayAbilityTag; // 0x68(0x20)
	enum class EGameplayTagMatchingType GameplayTagMatchingType; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
	struct FBlackboardKeySelector Target; // 0x90(0x28)
};

// Class AIFramework.FWBTDecorator_GameplayAbility_IsOnCooldown
// Size: 0xd8 (Inherited: 0xd8)
struct UFWBTDecorator_GameplayAbility_IsOnCooldown : UFWBTDecorator_QueryGameplayAbility {
};

// Class AIFramework.FWBTDecorator_HasAdditionalWeapon
// Size: 0x68 (Inherited: 0x68)
struct UFWBTDecorator_HasAdditionalWeapon : UBTDecorator {
};

// Class AIFramework.FWBTDecorator_HasRequiredHealthLevel
// Size: 0x98 (Inherited: 0x90)
struct UFWBTDecorator_HasRequiredHealthLevel : UBTDecorator_BlackboardBase {
	float RequiredHealthLevel; // 0x90(0x04)
	char UnknownData_94[0x4]; // 0x94(0x04)
};

// Class AIFramework.FWBTDecorator_HasTargetMoved
// Size: 0xc0 (Inherited: 0x90)
struct UFWBTDecorator_HasTargetMoved : UBTDecorator_BlackboardBase {
	struct FBlackboardKeySelector TargetPositionKey; // 0x90(0x28)
	float MinDistanceToTravel; // 0xb8(0x04)
	float MaxSightDeviationDot; // 0xbc(0x04)
};

// Class AIFramework.FWBTDecorator_HysteresisDistanceRange
// Size: 0x180 (Inherited: 0x68)
struct UFWBTDecorator_HysteresisDistanceRange : UBTDecorator {
	struct FBlackboardKeySelector FromKey; // 0x68(0x28)
	struct FBlackboardKeySelector ToKey; // 0x90(0x28)
	struct FBlackboardKeySelector MinDistanceKey; // 0xb8(0x28)
	float MinDistance; // 0xe0(0x04)
	char UnknownData_E4[0x4]; // 0xe4(0x04)
	struct FBlackboardKeySelector MaxDistanceKey; // 0xe8(0x28)
	float MaxDistance; // 0x110(0x04)
	char UnknownData_114[0x4]; // 0x114(0x04)
	struct FBlackboardKeySelector HysteresisToEnterKey; // 0x118(0x28)
	float HysteresisToEnter; // 0x140(0x04)
	char UnknownData_144[0x4]; // 0x144(0x04)
	struct FBlackboardKeySelector HysteresisToExitKey; // 0x148(0x28)
	float HysteresisToExit; // 0x170(0x04)
	char UnknownData_174_0 : 7; // 0x174(0x01)
	bool bUse2DDistance : 1; // 0x174(0x01)
	char UnknownData_175[0x3]; // 0x175(0x03)
	float UpdateRate; // 0x178(0x04)
	char UnknownData_17C[0x4]; // 0x17c(0x04)
};

// Class AIFramework.FWBTDecorator_InFrontCover
// Size: 0x90 (Inherited: 0x90)
struct UFWBTDecorator_InFrontCover : UBTDecorator_BlackboardBase {
};

// Class AIFramework.FWBTDecorator_IsInRequiredMovementMood
// Size: 0x70 (Inherited: 0x68)
struct UFWBTDecorator_IsInRequiredMovementMood : UBTDecorator {
	enum class EMovementMood RequiredMovementMood; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class AIFramework.FWBTDecorator_IsInRequiredPathFollowingStatus
// Size: 0x70 (Inherited: 0x68)
struct UFWBTDecorator_IsInRequiredPathFollowingStatus : UBTDecorator {
	enum class EPathFollowingStatus RequiredPathFollowingStatus; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
};

// Class AIFramework.FWBTDecorator_IsSmartObjectCharacterEnterComplete
// Size: 0x68 (Inherited: 0x68)
struct UFWBTDecorator_IsSmartObjectCharacterEnterComplete : UBTDecorator {
};

// Class AIFramework.FWBTDecorator_IsSmartObjectClaimed
// Size: 0x68 (Inherited: 0x68)
struct UFWBTDecorator_IsSmartObjectClaimed : UBTDecorator {
};

// Class AIFramework.FWBTDecorator_IsSmartObjectSelectedByOptimization
// Size: 0x68 (Inherited: 0x68)
struct UFWBTDecorator_IsSmartObjectSelectedByOptimization : UBTDecorator {
};

// Class AIFramework.FWBTDecorator_IsSmartObjectUsingWeapon
// Size: 0x68 (Inherited: 0x68)
struct UFWBTDecorator_IsSmartObjectUsingWeapon : UBTDecorator {
};

// Class AIFramework.FWBTDecorator_RandomFail
// Size: 0x70 (Inherited: 0x68)
struct UFWBTDecorator_RandomFail : UBTDecorator {
	float Probability; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// Class AIFramework.FWBTDecorator_Semaphore
// Size: 0xb8 (Inherited: 0x68)
struct UFWBTDecorator_Semaphore : UBTDecorator {
	char bUseLimitFromSystem : 1; // 0x68(0x01)
	char UnknownData_68_1 : 7; // 0x68(0x01)
	char UnknownData_69[0x3]; // 0x69(0x03)
	int32_t ConcurrentLimit; // 0x6c(0x04)
	float UnlockDelay; // 0x70(0x04)
	char bUnlockSemaphoreAfterDelay : 1; // 0x74(0x01)
	char UnknownData_74_1 : 7; // 0x74(0x01)
	char UnknownData_75[0x3]; // 0x75(0x03)
	struct UFWAISemaphoreGroupClass* GroupClass; // 0x78(0x08)
	char bUsePerTargetActor : 1; // 0x80(0x01)
	char UnknownData_80_1 : 7; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
	struct FBlackboardKeySelector PerTargetActor; // 0x88(0x28)
	char bUseOldBehaviorToClaim : 1; // 0xb0(0x01)
	char bUnlockSemaphoreIfStartedReaction : 1; // 0xb0(0x01)
	char UnknownData_B0_2 : 6; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
};

// Class AIFramework.FWBTDecorator_TargetDidntChange
// Size: 0x90 (Inherited: 0x68)
struct UFWBTDecorator_TargetDidntChange : UBTDecorator {
	struct FBlackboardKeySelector TargetKey; // 0x68(0x28)
};

// Class AIFramework.FWBTDecorator_TraceActor
// Size: 0xa0 (Inherited: 0x68)
struct UFWBTDecorator_TraceActor : UBTDecorator {
	struct FBlackboardKeySelector TargetKey; // 0x68(0x28)
	float RadiusScale; // 0x90(0x04)
	float HalfHeightScale; // 0x94(0x04)
	enum class ECollisionChannel TraceChannel; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// Class AIFramework.FWBTDecorator_ValidCoveringComponent
// Size: 0x68 (Inherited: 0x68)
struct UFWBTDecorator_ValidCoveringComponent : UBTDecorator {
};

// Class AIFramework.FWBTDecorator_ValidWeaponComponent
// Size: 0x68 (Inherited: 0x68)
struct UFWBTDecorator_ValidWeaponComponent : UBTDecorator {
};

// Class AIFramework.FWBTService_AddGameplayTags
// Size: 0xb0 (Inherited: 0x70)
struct UFWBTService_AddGameplayTags : UBTService {
	char UnknownData_70_0 : 7; // 0x70(0x01)
	bool bRemoveOnEnd : 1; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct FGameplayTagContainer GameplayTags; // 0x78(0x20)
	char bShowPropertyDetails : 1; // 0x98(0x01)
	char UnknownData_98_1 : 7; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
	struct FString CachedDescription; // 0xa0(0x10)
};

// Class AIFramework.FWBTService_CheckMovementProximity
// Size: 0x78 (Inherited: 0x70)
struct UFWBTService_CheckMovementProximity : UBTService {
	float DistanceToProcess; // 0x70(0x04)
	float TimeToAbort; // 0x74(0x04)
};

// Class AIFramework.FWBTTask_ClearBehaviorTag
// Size: 0x70 (Inherited: 0x70)
struct UFWBTTask_ClearBehaviorTag : UBTTaskNode {
};

// Class AIFramework.FWBTTask_CombatActionExt
// Size: 0x90 (Inherited: 0x78)
struct UFWBTTask_CombatActionExt : UBTTask_GameplayTaskBase {
	char UnknownData_78_0 : 7; // 0x78(0x01)
	bool bRequireSight : 1; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	float WaitTime; // 0x7c(0x04)
	float RandomDeviation; // 0x80(0x04)
	char bAutoReloadOnLowAmmo : 1; // 0x84(0x01)
	char bOnlyInMoveDirection : 1; // 0x84(0x01)
	char bCanBeAborted : 1; // 0x84(0x01)
	char UnknownData_84_3 : 5; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
	struct UFWAITask_CombatActionEx* AITask; // 0x88(0x08)
};

// Class AIFramework.FWBTTask_CoverActionExt
// Size: 0x98 (Inherited: 0x78)
struct UFWBTTask_CoverActionExt : UBTTask_GameplayTaskBase {
	char UnknownData_78_0 : 7; // 0x78(0x01)
	bool bReqireSight : 1; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	float WaitTime; // 0x7c(0x04)
	float RandomDeviation; // 0x80(0x04)
	char bAutoReloadOnLowAmmo : 1; // 0x84(0x01)
	char UnknownData_84_1 : 7; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
	struct UFWAITask_CoverAction* AITask; // 0x88(0x08)
	enum class EAIWeaponShootingType ShootingType; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
};

// Class AIFramework.FWBTTask_Dash
// Size: 0xb8 (Inherited: 0x78)
struct UFWBTTask_Dash : UBTTask_GameplayTaskBase {
	float WaitTime; // 0x78(0x04)
	float RandomDeviation; // 0x7c(0x04)
	enum class EMovementMode OverrideMoveMode; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)
	struct FBlackboardKeySelector TowardsKey; // 0x88(0x28)
	struct UFWAITask_Dash* AITask; // 0xb0(0x08)
};

// Class AIFramework.FWBTTask_ExecuteAITask
// Size: 0x80 (Inherited: 0x78)
struct UFWBTTask_ExecuteAITask : UBTTask_GameplayTaskBase {
	struct UFWAITask* AITask; // 0x78(0x08)
};

// Class AIFramework.FWBTTask_ExecuteGameplayAbility
// Size: 0xa0 (Inherited: 0x78)
struct UFWBTTask_ExecuteGameplayAbility : UBTTask_GameplayTaskBase {
	struct UFWAITask_ExecuteGameplayAbility* AITask; // 0x78(0x08)
	struct FGameplayTagContainer GameplayAbilityTag; // 0x80(0x20)
};

// Class AIFramework.FWBTTask_OSARequest
// Size: 0x80 (Inherited: 0x70)
struct UFWBTTask_OSARequest : UBTTaskNode {
	float PreShootDelay; // 0x70(0x04)
	float PostShootDelay; // 0x74(0x04)
	char UnknownData_78_0 : 7; // 0x78(0x01)
	bool bPauseMovement : 1; // 0x78(0x01)
	char UnknownData_79_0 : 7; // 0x79(0x01)
	bool bAllowTurnInPlace : 1; // 0x79(0x01)
	char UnknownData_7A_0 : 7; // 0x7a(0x01)
	bool bModifyTurnInPlaceSettings : 1; // 0x7a(0x01)
	char UnknownData_7B[0x5]; // 0x7b(0x05)
};

// Class AIFramework.FWBTTask_PlayMontageSimple
// Size: 0xa0 (Inherited: 0x70)
struct UFWBTTask_PlayMontageSimple : UBTTaskNode {
	struct FMontageAssetSelector Montage; // 0x70(0x20)
	struct UBehaviorTreeComponent* MyOwnerComp; // 0x90(0x08)
	char bNonBlocking : 1; // 0x98(0x01)
	char bCanAbortAnimation : 1; // 0x98(0x01)
	char UnknownData_98_2 : 6; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// Class AIFramework.FWBTTask_UpdateGameplayEffect
// Size: 0x80 (Inherited: 0x70)
struct UFWBTTask_UpdateGameplayEffect : UBTTaskNode {
	struct UGameplayEffect* GameplayEffect; // 0x70(0x08)
	char bAddEffect : 1; // 0x78(0x01)
	char UnknownData_78_1 : 7; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	float LevelToApply; // 0x7c(0x04)
};

// Class AIFramework.FWBTTask_WaitStop
// Size: 0x70 (Inherited: 0x70)
struct UFWBTTask_WaitStop : UBTTaskNode {
};

// Class AIFramework.FWAIWeaponCoverAnimationDataAsset
// Size: 0x80 (Inherited: 0x30)
struct UFWAIWeaponCoverAnimationDataAsset : UDataAsset {
	struct TMap<struct AWeapon*, struct FFWAIWeaponCoverAnimationData> WeaponData; // 0x30(0x50)
};

// Class AIFramework.FWCoveringComponent
// Size: 0x1b8 (Inherited: 0x180)
struct UFWCoveringComponent : UActorComponent {
	struct FCoverSlotInfo CurrentCover; // 0x180(0x18)
	struct FCoverSlotInfo DestinationCover; // 0x198(0x18)
	struct UFWAIWeaponCoverAnimationDataAsset* AIWeaponAnimationDataAsset; // 0x1b0(0x08)

	struct FCoverSlotInfo GetCoverInfo(enum class ECoverMember CoverMember); // Function AIFramework.FWCoveringComponent.GetCoverInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ab4ba0
};

// Class AIFramework.FWDebugCameraControllerVolume
// Size: 0x348 (Inherited: 0x328)
struct AFWDebugCameraControllerVolume : AVolume {
	struct AActor* ObservationPoint; // 0x328(0x08)
	char UnknownData_330[0x18]; // 0x330(0x18)
};

// Class AIFramework.FWEncounterSetupOverrideData
// Size: 0x48 (Inherited: 0x30)
struct UFWEncounterSetupOverrideData : UDataAsset {
	struct TArray<struct FFWWaveDataOverride> Waves; // 0x30(0x10)
	struct UBaseBiomeData* Biome; // 0x40(0x08)
};

// Class AIFramework.FWEncounterData
// Size: 0x40 (Inherited: 0x30)
struct UFWEncounterData : UDataAsset {
	struct TArray<struct FFWEncounterWaveData> Waves; // 0x30(0x10)

	struct FText GetWaveDescription(int32_t Idx); // Function AIFramework.FWEncounterData.GetWaveDescription // (Final|Native|Public|BlueprintCallable) // @ game+0x3ab4f60
	struct FFWEncounterWaveData GetWave(int32_t Idx); // Function AIFramework.FWEncounterData.GetWave // (Final|Native|Public|BlueprintCallable) // @ game+0x3ab4dd0
};

// Class AIFramework.FWEnvQuery_ValueStandingCover
// Size: 0x270 (Inherited: 0x268)
struct UFWEnvQuery_ValueStandingCover : UEnvQueryTest {
	struct UEnvQueryContext* ContextActor; // 0x268(0x08)
};

// Class AIFramework.FWEnvQueryContext_BigCharacterPivotLocation
// Size: 0x28 (Inherited: 0x28)
struct UFWEnvQueryContext_BigCharacterPivotLocation : UEnvQueryContext {
};

// Class AIFramework.FWEnvQueryContext_BlackboardActor
// Size: 0x30 (Inherited: 0x28)
struct UFWEnvQueryContext_BlackboardActor : UEnvQueryContext {
	struct FName BlackboardActorKey; // 0x28(0x08)
};

// Class AIFramework.FWEnvQueryContext_BBTargetActor
// Size: 0x30 (Inherited: 0x30)
struct UFWEnvQueryContext_BBTargetActor : UFWEnvQueryContext_BlackboardActor {
};

// Class AIFramework.FWEnvQueryContext_BlackboardLocation
// Size: 0x30 (Inherited: 0x28)
struct UFWEnvQueryContext_BlackboardLocation : UEnvQueryContext {
	struct FName BlackboardLocationKey; // 0x28(0x08)
};

// Class AIFramework.FWEnvQueryContext_BBCustomLocation
// Size: 0x30 (Inherited: 0x30)
struct UFWEnvQueryContext_BBCustomLocation : UFWEnvQueryContext_BlackboardLocation {
};

// Class AIFramework.FWEnvQueryContext_CombatArea
// Size: 0x28 (Inherited: 0x28)
struct UFWEnvQueryContext_CombatArea : UEnvQueryContext {
};

// Class AIFramework.FWEnvQueryContext_ControlRotationOffsetPoint
// Size: 0x30 (Inherited: 0x28)
struct UFWEnvQueryContext_ControlRotationOffsetPoint : UEnvQueryContext {
	float DirectionOffset; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class AIFramework.FWEnvQueryContext_CurrentCover
// Size: 0x28 (Inherited: 0x28)
struct UFWEnvQueryContext_CurrentCover : UEnvQueryContext {
};

// Class AIFramework.FWEnvQueryContext_DestinationCover
// Size: 0x28 (Inherited: 0x28)
struct UFWEnvQueryContext_DestinationCover : UEnvQueryContext {
};

// Class AIFramework.FWEnvQueryContext_PointsOfInterest
// Size: 0x28 (Inherited: 0x28)
struct UFWEnvQueryContext_PointsOfInterest : UEnvQueryContext {
};

// Class AIFramework.FWEnvQueryContext_TargetLastSenseLocation
// Size: 0x28 (Inherited: 0x28)
struct UFWEnvQueryContext_TargetLastSenseLocation : UEnvQueryContext {
};

// Class AIFramework.FWEnvQueryContext_TargetSightLocation
// Size: 0x28 (Inherited: 0x28)
struct UFWEnvQueryContext_TargetSightLocation : UEnvQueryContext {
};

// Class AIFramework.FWEnvQueryContext_TraceLocation
// Size: 0x48 (Inherited: 0x28)
struct UFWEnvQueryContext_TraceLocation : UEnvQueryContext {
	struct FVector StartTraceOffset; // 0x28(0x0c)
	struct FVector EndTraceOffset; // 0x34(0x0c)
	enum class ECollisionChannel TraceChannel; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class AIFramework.FWEnvQueryContext_TraceLocationRand
// Size: 0x78 (Inherited: 0x48)
struct UFWEnvQueryContext_TraceLocationRand : UFWEnvQueryContext_TraceLocation {
	struct FVector StartTraceMinRandomOffset; // 0x48(0x0c)
	struct FVector StartTraceMaxRandomOffset; // 0x54(0x0c)
	struct FVector EndTraceMinRandomOffset; // 0x60(0x0c)
	struct FVector EndTraceMaxRandomOffset; // 0x6c(0x0c)
};

// Class AIFramework.FWEnvQueryContext_WoundedSquadMembers
// Size: 0x28 (Inherited: 0x28)
struct UFWEnvQueryContext_WoundedSquadMembers : UEnvQueryContext {
};

// Class AIFramework.FWEnvQueryGenerator_AssignedCover
// Size: 0x58 (Inherited: 0x50)
struct UFWEnvQueryGenerator_AssignedCover : UEnvQueryGenerator {
	enum class EFWCoverSelector CoverSelector; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// Class AIFramework.FWEnvQueryGenerator_CombatGrid
// Size: 0xd0 (Inherited: 0x88)
struct UFWEnvQueryGenerator_CombatGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue Radius; // 0x88(0x38)
	struct UEnvQueryContext* GenerateAround; // 0xc0(0x08)
	char bUseRadiusWithGoal : 1; // 0xc8(0x01)
	char UnknownData_C8_1 : 7; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)
};

// Class AIFramework.FWEnvQueryGenerator_CoverSlots
// Size: 0x98 (Inherited: 0x50)
struct UFWEnvQueryGenerator_CoverSlots : UEnvQueryGenerator {
	struct UEnvQueryContext* GenerateAround; // 0x50(0x08)
	struct FAIDataProviderFloatValue Radius; // 0x58(0x38)
	enum class EAIHotSpotSlotFilter Filter; // 0x90(0x01)
	enum class EFWAICoverSlotCustomFilter CustomFilter; // 0x91(0x01)
	char UnknownData_92[0x2]; // 0x92(0x02)
	char bIncludeOwnersSlot : 1; // 0x94(0x01)
	char UnknownData_94_1 : 7; // 0x94(0x01)
	char UnknownData_95[0x3]; // 0x95(0x03)
};

// Class AIFramework.FWEnvQueryItemType_CombatSpot
// Size: 0x30 (Inherited: 0x30)
struct UFWEnvQueryItemType_CombatSpot : UEnvQueryItemType_VectorBase {
};

// Class AIFramework.FWEnvQueryTest_CanTraceContext
// Size: 0x310 (Inherited: 0x268)
struct UFWEnvQueryTest_CanTraceContext : UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x268(0x30)
	struct FAIDataProviderFloatValue ItemHeightOffset; // 0x298(0x38)
	struct FAIDataProviderFloatValue ContextHeightOffset; // 0x2d0(0x38)
	struct UEnvQueryContext* Context; // 0x308(0x08)
};

// Class AIFramework.FWEnvQueryTest_CoverDotTest
// Size: 0x280 (Inherited: 0x268)
struct UFWEnvQueryTest_CoverDotTest : UEnvQueryTest {
	float HorizontalExposedDot; // 0x268(0x04)
	float HorizontalUnexposedDot; // 0x26c(0x04)
	float VerticalDot; // 0x270(0x04)
	char UnknownData_274[0x4]; // 0x274(0x04)
	struct UEnvQueryContext* Context; // 0x278(0x08)
};

// Class AIFramework.FWEnvQueryTest_DistancesComparisonThreshold
// Size: 0x288 (Inherited: 0x268)
struct UFWEnvQueryTest_DistancesComparisonThreshold : UEnvQueryTest {
	struct FFWEnvLine LineA; // 0x268(0x10)
	struct FFWEnvLine LineB; // 0x278(0x10)
};

// Class AIFramework.FWEnvQueryTest_IsDoingCoverAction
// Size: 0x268 (Inherited: 0x268)
struct UFWEnvQueryTest_IsDoingCoverAction : UEnvQueryTest {
};

// Class AIFramework.FWEnvQueryTest_GroupThreatLevel
// Size: 0x270 (Inherited: 0x268)
struct UFWEnvQueryTest_GroupThreatLevel : UEnvQueryTest {
	struct UEnvQueryContext* Context; // 0x268(0x08)
};

// Class AIFramework.FWEnvQueryTest_HasDirectPath
// Size: 0x288 (Inherited: 0x268)
struct UFWEnvQueryTest_HasDirectPath : UEnvQueryTest {
	struct UEnvQueryContext* Context; // 0x268(0x08)
	struct UNavigationQueryFilter* FilterClass; // 0x270(0x08)
	char UnknownData_278_0 : 7; // 0x278(0x01)
	bool bProject : 1; // 0x278(0x01)
	char UnknownData_279_0 : 7; // 0x279(0x01)
	bool bProjectContext : 1; // 0x279(0x01)
	char UnknownData_27A[0x2]; // 0x27a(0x02)
	float ProjectDown; // 0x27c(0x04)
	float ProjectUp; // 0x280(0x04)
	char UnknownData_284[0x4]; // 0x284(0x04)
};

// Class AIFramework.FWEnvQueryTest_InCombatArea
// Size: 0x278 (Inherited: 0x268)
struct UFWEnvQueryTest_InCombatArea : UEnvQueryTest {
	struct UEnvQueryContext* Context; // 0x268(0x08)
	char UnknownData_270_0 : 7; // 0x270(0x01)
	bool bUseGoalPoint : 1; // 0x270(0x01)
	char UnknownData_271[0x7]; // 0x271(0x07)
};

// Class AIFramework.FWEnvQueryTest_IsInCover
// Size: 0x268 (Inherited: 0x268)
struct UFWEnvQueryTest_IsInCover : UEnvQueryTest {
};

// Class AIFramework.FWEnvQueryTest_IsMoving
// Size: 0x2a0 (Inherited: 0x268)
struct UFWEnvQueryTest_IsMoving : UEnvQueryTest {
	struct FAIDataProviderFloatValue SpeedThreshold; // 0x268(0x38)
};

// Class AIFramework.FWEnvQueryTest_IsNearNavMeshEdge
// Size: 0x290 (Inherited: 0x268)
struct UFWEnvQueryTest_IsNearNavMeshEdge : UEnvQueryTest {
	struct UEnvQueryContext* Context; // 0x268(0x08)
	float Distance; // 0x270(0x04)
	char UnknownData_274[0x4]; // 0x274(0x04)
	struct UNavigationQueryFilter* FilterClass; // 0x278(0x08)
	char UnknownData_280_0 : 7; // 0x280(0x01)
	bool bProject : 1; // 0x280(0x01)
	char UnknownData_281[0x3]; // 0x281(0x03)
	float ProjectDown; // 0x284(0x04)
	float ProjectUp; // 0x288(0x04)
	char UnknownData_28C[0x4]; // 0x28c(0x04)
};

// Class AIFramework.FWEnvQueryTest_IsReachable
// Size: 0x2f8 (Inherited: 0x268)
struct UFWEnvQueryTest_IsReachable : UEnvQueryTest {
	struct UEnvQueryContext* Context; // 0x268(0x08)
	struct FAIDataProviderFloatValue ExtraRadius; // 0x270(0x38)
	struct FAIDataProviderFloatValue RadiusMultiplier; // 0x2a8(0x38)
	struct UNavigationQueryFilter* FilterClass; // 0x2e0(0x08)
	char UnknownData_2E8_0 : 7; // 0x2e8(0x01)
	bool bProject : 1; // 0x2e8(0x01)
	char UnknownData_2E9_0 : 7; // 0x2e9(0x01)
	bool bProjectContext : 1; // 0x2e9(0x01)
	char UnknownData_2EA[0x2]; // 0x2ea(0x02)
	float ProjectDown; // 0x2ec(0x04)
	float ProjectUp; // 0x2f0(0x04)
	char UnknownData_2F4[0x4]; // 0x2f4(0x04)
};

// Class AIFramework.FWEnvQueryTest_LineOfSight
// Size: 0x2a0 (Inherited: 0x268)
struct UFWEnvQueryTest_LineOfSight : UEnvQueryTest {
	struct FAIDataProviderBoolValue FromTheHip; // 0x268(0x38)
};

// Class AIFramework.FWEnvQueryTest_Pathfinding
// Size: 0x340 (Inherited: 0x2f0)
struct UFWEnvQueryTest_Pathfinding : UEnvQueryTest_Pathfinding {
	enum class EPathFindMode PathFindMode; // 0x2f0(0x01)
	char UnknownData_2F1[0x7]; // 0x2f1(0x07)
	struct FAIDataProviderBoolValue CompareWithIdealPath; // 0x2f8(0x38)
	struct UEnvQueryContext* IdealPathStartContext; // 0x330(0x08)
	struct UEnvQueryContext* IdealPathEndContext; // 0x338(0x08)
};

// Class AIFramework.FWEnvQueryTest_ScriptedSelectionPriority
// Size: 0x270 (Inherited: 0x268)
struct UFWEnvQueryTest_ScriptedSelectionPriority : UEnvQueryTest {
	struct UEnvQueryContext* Context; // 0x268(0x08)
};

// Class AIFramework.FWEnvQueryTest_ThreatLevel
// Size: 0x270 (Inherited: 0x268)
struct UFWEnvQueryTest_ThreatLevel : UEnvQueryTest {
	struct UEnvQueryContext* Context; // 0x268(0x08)
};

// Class AIFramework.FWEnvQueryTest_TimeSinceDanger
// Size: 0x268 (Inherited: 0x268)
struct UFWEnvQueryTest_TimeSinceDanger : UEnvQueryTest {
};

// Class AIFramework.FWEnvQueryTest_UnusedForTime
// Size: 0x278 (Inherited: 0x268)
struct UFWEnvQueryTest_UnusedForTime : UEnvQueryTest {
	struct UEnvQueryContext* Context; // 0x268(0x08)
	char UnknownData_270_0 : 7; // 0x270(0x01)
	bool bCurrentCoverUsedTimeIsZero : 1; // 0x270(0x01)
	char UnknownData_271[0x7]; // 0x271(0x07)
};

// Class AIFramework.FWLinkedActorsInterface
// Size: 0x28 (Inherited: 0x28)
struct UFWLinkedActorsInterface : UInterface {

	int32_t UnlinkAllActors(); // Function AIFramework.FWLinkedActorsInterface.UnlinkAllActors // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3aba0a0
	int32_t UnlinkActors(struct TArray<struct AActor*> Actors); // Function AIFramework.FWLinkedActorsInterface.UnlinkActors // (BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3ab9fe0
	int32_t UnlinkActor(struct AActor* Actor); // Function AIFramework.FWLinkedActorsInterface.UnlinkActor // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3ab9f40
	int32_t LinkActors(struct TArray<struct AActor*> Actors); // Function AIFramework.FWLinkedActorsInterface.LinkActors // (BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3ab9b00
	int32_t LinkActor(struct AActor* Actor); // Function AIFramework.FWLinkedActorsInterface.LinkActor // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3ab9a60
};

// Class AIFramework.FWNavigationFilter
// Size: 0x48 (Inherited: 0x48)
struct UFWNavigationFilter : UNavigationQueryFilter {
};

// Class AIFramework.FWNavigationSystem
// Size: 0x590 (Inherited: 0x550)
struct UFWNavigationSystem : UNavigationSystemV1 {
	char UnknownData_550[0x8]; // 0x550(0x08)
	struct TArray<struct ANavigationData*> NavigationClassesAllowedOnClientSide; // 0x558(0x10)
	char UnknownData_568[0x28]; // 0x568(0x28)

	void OnLevelTransitionCompleted(struct FName regionname); // Function AIFramework.FWNavigationSystem.OnLevelTransitionCompleted // (Final|Native|Public) // @ game+0x3ab9c80
};

// Class AIFramework.FWNavigationTestingActor
// Size: 0x3f8 (Inherited: 0x3e8)
struct AFWNavigationTestingActor : ANavigationTestingActor {
	char bDrawCoversAlongPath : 1; // 0x3e8(0x01)
	char bDrawTilesAlongPath : 1; // 0x3e8(0x01)
	char UnknownData_3E8_2 : 6; // 0x3e8(0x01)
	char UnknownData_3E9[0x3]; // 0x3e9(0x03)
	enum class ENavPathType NavigationPathType; // 0x3ec(0x01)
	char UnknownData_3ED[0x3]; // 0x3ed(0x03)
	char bDrawControlPoints : 1; // 0x3f0(0x01)
	char UnknownData_3F0_1 : 7; // 0x3f0(0x01)
	char UnknownData_3F1[0x3]; // 0x3f1(0x03)
	float ActorsDistance; // 0x3f4(0x04)
};

// Class AIFramework.FWNavTestRenderingComponent
// Size: 0x4e0 (Inherited: 0x4d0)
struct UFWNavTestRenderingComponent : UNavTestRenderingComponent {
	char UnknownData_4D0[0x10]; // 0x4d0(0x10)
};

// Class AIFramework.FWRecastNavMesh
// Size: 0x5d8 (Inherited: 0x5b8)
struct AFWRecastNavMesh : ARecastNavMesh {
	char UnknownData_5B8[0x20]; // 0x5b8(0x20)
};

// Class AIFramework.FWSplinePathFollowingComponent
// Size: 0x410 (Inherited: 0x3f0)
struct UFWSplinePathFollowingComponent : UFWPathFollowingComponent {
	float SmoothingLookAheadDistanceCutting; // 0x3f0(0x04)
	char UnknownData_3F4[0x1c]; // 0x3f4(0x1c)

	void SplineOnMantleTaskEnded(struct UFWAITask* Task, enum class EFWAITaskResult Result); // Function AIFramework.FWSplinePathFollowingComponent.SplineOnMantleTaskEnded // (Final|Native|Protected) // @ game+0x3ab9e80
	void SplineOnJumpDownTaskEnded(struct UFWAITask* Task, enum class EFWAITaskResult Result); // Function AIFramework.FWSplinePathFollowingComponent.SplineOnJumpDownTaskEnded // (Final|Native|Protected) // @ game+0x3ab9dc0
};

// Class AIFramework.GoalArea
// Size: 0x398 (Inherited: 0x398)
struct AGoalArea : AActionArea {
};

// Class AIFramework.GoalRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UGoalRenderingComponent : UPrimitiveComponent {
};

// Class AIFramework.QueryContext_AllEnemiesWithinEffectiveHostileRange
// Size: 0x30 (Inherited: 0x30)
struct UQueryContext_AllEnemiesWithinEffectiveHostileRange : UQueryContext_AllEnemiesWithinHostileRange {
};

// Class AIFramework.QueryContext_AllPlayers
// Size: 0x28 (Inherited: 0x28)
struct UQueryContext_AllPlayers : UEnvQueryContext {
};

// Class AIFramework.QueryContext_AllyDestinations
// Size: 0x30 (Inherited: 0x28)
struct UQueryContext_AllyDestinations : UEnvQueryContext {
	char bUseOnlySquadMembers : 1; // 0x28(0x01)
	char bFilterAllies : 1; // 0x28(0x01)
	char UnknownData_28_2 : 6; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// Class AIFramework.QueryContext_NotCloseAllyDestinations
// Size: 0x30 (Inherited: 0x30)
struct UQueryContext_NotCloseAllyDestinations : UQueryContext_AllyDestinations {
};

// Class AIFramework.QueryContext_Goal
// Size: 0x28 (Inherited: 0x28)
struct UQueryContext_Goal : UEnvQueryContext {
};

// Class AIFramework.QueryContext_SquadMembers
// Size: 0x28 (Inherited: 0x28)
struct UQueryContext_SquadMembers : UEnvQueryContext {
};

// Class AIFramework.QueryContext_Target
// Size: 0x28 (Inherited: 0x28)
struct UQueryContext_Target : UEnvQueryContext {
};

// Class AIFramework.QueryContext_TargetFlankRefDirection
// Size: 0x28 (Inherited: 0x28)
struct UQueryContext_TargetFlankRefDirection : UEnvQueryContext {
};

// Class AIFramework.QueryGenerator_Enemies
// Size: 0x90 (Inherited: 0x50)
struct UQueryGenerator_Enemies : UEnvQueryGenerator {
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bPerceivedEnemiesOnly : 1; // 0x50(0x01)
	char UnknownData_51_0 : 7; // 0x51(0x01)
	bool bSleepCapableAIUsePerceivedEnemiesOnly : 1; // 0x51(0x01)
	char UnknownData_52[0x6]; // 0x52(0x06)
	struct FAIDataProviderFloatValue MaxTimeSincePerceived; // 0x58(0x38)
};

// Class AIFramework.QueryGenerator_HumanPlayers
// Size: 0x50 (Inherited: 0x50)
struct UQueryGenerator_HumanPlayers : UEnvQueryGenerator {
};

// Class AIFramework.QueryTest_CanFireAt
// Size: 0x2a8 (Inherited: 0x268)
struct UQueryTest_CanFireAt : UEnvQueryTest {
	struct FAIDataProviderBoolValue TraceFromContext; // 0x268(0x38)
	struct UEnvQueryContext* ToContext; // 0x2a0(0x08)
};

// Class AIFramework.QueryTest_CoverSlotActions
// Size: 0x270 (Inherited: 0x268)
struct UQueryTest_CoverSlotActions : UEnvQueryTest {
	enum class EEnvCoverActions ActionsFilter; // 0x268(0x01)
	char UnknownData_269[0x7]; // 0x269(0x07)
};

// Class AIFramework.QueryTest_CurrentCover
// Size: 0x268 (Inherited: 0x268)
struct UQueryTest_CurrentCover : UEnvQueryTest {
};

// Class AIFramework.QueryTest_CurrentTarget
// Size: 0x268 (Inherited: 0x268)
struct UQueryTest_CurrentTarget : UEnvQueryTest {
};

// Class AIFramework.QueryTest_EngagingCounter
// Size: 0x270 (Inherited: 0x268)
struct UQueryTest_EngagingCounter : UEnvQueryTest {
	struct UEnvQueryContext* Context; // 0x268(0x08)
};

// Class AIFramework.QueryTest_IsPlayer
// Size: 0x268 (Inherited: 0x268)
struct UQueryTest_IsPlayer : UEnvQueryTest {
};

// Class AIFramework.QueryTest_PerceptionAge
// Size: 0x270 (Inherited: 0x268)
struct UQueryTest_PerceptionAge : UEnvQueryTest {
	struct UAISense* SenseClass; // 0x268(0x08)
};

// Class AIFramework.QueryTest_PerceptionAll
// Size: 0x348 (Inherited: 0x268)
struct UQueryTest_PerceptionAll : UEnvQueryTest {
	struct TMap<struct UAISense*, struct FAIDataProviderFloatValue> ScoresPerSense; // 0x268(0x50)
	struct FAIDataProviderFloatValue MinSenseAge; // 0x2b8(0x38)
	struct FAIDataProviderFloatValue MaxSenseAge; // 0x2f0(0x38)
	struct FEnvNamedValue MinAge; // 0x328(0x10)
	struct FEnvNamedValue MaxAge; // 0x338(0x10)
};

// Class AIFramework.QueryTest_PerceptionExists
// Size: 0x270 (Inherited: 0x268)
struct UQueryTest_PerceptionExists : UEnvQueryTest {
	struct UAISense* SenseClass; // 0x268(0x08)
};

// Class AIFramework.QueryTest_Random
// Size: 0x268 (Inherited: 0x268)
struct UQueryTest_Random : UEnvQueryTest {
};

// Class AIFramework.SmartObject_BackgroundNPC
// Size: 0x3f0 (Inherited: 0x3f0)
struct ASmartObject_BackgroundNPC : ABaseSmartObject {
};

// Class AIFramework.SmartObjectUserState
// Size: 0x58 (Inherited: 0x28)
struct USmartObjectUserState : UObject {
	struct USmartObjectSlotComponent* ClaimedSmartObjectSlot; // 0x28(0x08)
	struct TArray<struct FAntFarmControlAttributeState> AttributeStates; // 0x30(0x10)
	struct USmartObjectSlotComponent* SlotToUseNext; // 0x40(0x08)
	struct USmartObjectSlotComponent* LastUsedSlot; // 0x48(0x08)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bInitialized : 1; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
};

// Class AIFramework.SmartObjectLogic
// Size: 0x40 (Inherited: 0x30)
struct USmartObjectLogic : UAIGlobalsDataAsset {
	struct TArray<struct FAntFarmControlAttributeData> ControlAttributes; // 0x30(0x10)
};

// Class AIFramework.SmartObjectRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct USmartObjectRenderingComponent : UPrimitiveComponent {
};

// Class AIFramework.SpawnVolume
// Size: 0x350 (Inherited: 0x328)
struct ASpawnVolume : ATriggerVolume {
	struct FMulticastInlineDelegate OnStateChanged; // 0x328(0x10)
	char bStartEnabled : 1; // 0x338(0x01)
	char UnknownData_338_1 : 7; // 0x338(0x01)
	char UnknownData_339[0x7]; // 0x339(0x07)
	struct TArray<struct ACharacterSpawner*> SpawnPoints; // 0x340(0x10)

	void UseWithEncounterManager(bool bShouldBeUsed); // Function AIFramework.SpawnVolume.UseWithEncounterManager // (Native|Public|BlueprintCallable) // @ game+0x3ac08e0
	void SetSpawnVolumeEnabled(bool bEnabled); // Function AIFramework.SpawnVolume.SetSpawnVolumeEnabled // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3ac0840
	void EnableAllSpawners(); // Function AIFramework.SpawnVolume.EnableAllSpawners // (Native|Public|BlueprintCallable) // @ game+0x1560680
	void DisableAllSpawners(); // Function AIFramework.SpawnVolume.DisableAllSpawners // (Native|Public|BlueprintCallable) // @ game+0x15da3d0
};

// Class AIFramework.Waypoint
// Size: 0x318 (Inherited: 0x2f0)
struct AWaypoint : AActor {
	int16_t NodeRef; // 0x2f0(0x02)
	char UnknownData_2F2[0x2]; // 0x2f2(0x02)
	int32_t StartQueryRadius; // 0x2f4(0x04)
	int32_t EndQueryRadius; // 0x2f8(0x04)
	char UnknownData_2FC[0x4]; // 0x2fc(0x04)
	struct TArray<struct FWaypointConnection> Connections; // 0x300(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x310(0x08)
};

// Class AIFramework.WaypointDebugRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UWaypointDebugRenderingComponent : UPrimitiveComponent {
};

// Class AIFramework.WaypointGraphRenderingComponent
// Size: 0x520 (Inherited: 0x4d0)
struct UWaypointGraphRenderingComponent : UPrimitiveComponent {
	char UnknownData_4D0[0x50]; // 0x4d0(0x50)
};

// Class AIFramework.WaypointNavigationSettings
// Size: 0x60 (Inherited: 0x38)
struct UWaypointNavigationSettings : UDeveloperSettings {
	struct FString SubLevelSuffix; // 0x38(0x10)
	struct TArray<struct FAssetPath> NameCheckExcludedLevels; // 0x48(0x10)
	float StartQueryRadius; // 0x58(0x04)
	float EndQueryRadius; // 0x5c(0x04)
};

