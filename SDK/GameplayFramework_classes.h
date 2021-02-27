// Class GameplayFramework.Projectile
// Size: 0x5a0 (Inherited: 0x2f0)
struct AProjectile : AActor {
	char UnknownData_2F0_0 : 7; // 0x2f0(0x01)
	bool bUseCustomConfig : 1; // 0x2f0(0x01)
	char UnknownData_2F1[0x7]; // 0x2f1(0x07)
	struct FProjectileWeaponData CustomProjectileConfig; // 0x2f8(0x40)
	char UnknownData_338[0xa0]; // 0x338(0xa0)
	struct UProjectileMovementComponent* MovementComp; // 0x3d8(0x08)
	struct USphereComponent* CollisionComp; // 0x3e0(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x3e8(0x08)
	struct UStaticMeshComponent* Mesh; // 0x3f0(0x08)
	char UnknownData_3F8[0x48]; // 0x3f8(0x48)
	char UnknownData_440_0 : 7; // 0x440(0x01)
	bool bExploded : 1; // 0x440(0x01)
	char UnknownData_441_0 : 7; // 0x441(0x01)
	bool bNeedsReplicatedExplosionHit : 1; // 0x441(0x01)
	char UnknownData_442[0x2]; // 0x442(0x02)
	float AfterExplosionLifeSpan; // 0x444(0x04)
	struct FHitResult ExplosionHit; // 0x448(0x90)
	char UnknownData_4D8[0x10]; // 0x4d8(0x10)
	struct FHitResult CachedImpact; // 0x4e8(0x90)
	char UnknownData_578[0x28]; // 0x578(0x28)

	void OnRep_ExplosionHit(); // Function GameplayFramework.Projectile.OnRep_ExplosionHit // (Final|Native|Protected) // @ game+0x3935b80
	void OnRep_Exploded(); // Function GameplayFramework.Projectile.OnRep_Exploded // (Final|Native|Protected) // @ game+0x3935b60
	void OnImpact(struct FHitResult HitResult); // Function GameplayFramework.Projectile.OnImpact // (Native|Public|HasOutParms) // @ game+0x16cc560
	void OnBounce(struct FHitResult HitResult, struct FVector ImpactVelocity); // Function GameplayFramework.Projectile.OnBounce // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x39356f0
	void OnAsyncApplyRadialDamage(struct TArray<struct AActor*> DamagedActors, bool bDamagedActor); // Function GameplayFramework.Projectile.OnAsyncApplyRadialDamage // (Final|Native|Protected|HasOutParms) // @ game+0x39355f0
	bool IsSimulation(); // Function GameplayFramework.Projectile.IsSimulation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3935590
	bool HasExploded(); // Function GameplayFramework.Projectile.HasExploded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3935540
	float GetTimeToExplodesion(); // Function GameplayFramework.Projectile.GetTimeToExplodesion // (Final|Native|Protected|BlueprintCallable) // @ game+0x39354e0
	float GetExplosionRadius(enum class EExplosionRadiusType RadiusType); // Function GameplayFramework.Projectile.GetExplosionRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3935240
	void ExplosionNotify(struct FHitResult Impact, struct TArray<struct AActor*> DamagedActors); // Function GameplayFramework.Projectile.ExplosionNotify // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
};

// Class GameplayFramework.BaseAIController
// Size: 0x410 (Inherited: 0x408)
struct ABaseAIController : AAIController {
	char UnknownData_408[0x8]; // 0x408(0x08)
};

// Class GameplayFramework.FWAIRank
// Size: 0x28 (Inherited: 0x28)
struct UFWAIRank : UObject {
};

// Class GameplayFramework.FWAIFaction
// Size: 0x28 (Inherited: 0x28)
struct UFWAIFaction : UObject {
};

// Class GameplayFramework.FWAIArchetype
// Size: 0x28 (Inherited: 0x28)
struct UFWAIArchetype : UObject {
};

// Class GameplayFramework.InventoryItem
// Size: 0x300 (Inherited: 0x2f0)
struct AInventoryItem : AActor {
	struct AInventory* MyInventory; // 0x2f0(0x08)
	char UnknownData_2F8[0x8]; // 0x2f8(0x08)

	void OnRep_MyInventory(struct AInventory* LastInventory); // Function GameplayFramework.InventoryItem.OnRep_MyInventory // (Final|Native|Protected) // @ game+0x392cac0
	struct ABaseCharacter* GetPawnOwner(); // Function GameplayFramework.InventoryItem.GetPawnOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x392c4d0
	struct AInventory* GetOwningInventory(); // Function GameplayFramework.InventoryItem.GetOwningInventory // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16a4f10
};

// Class GameplayFramework.BaseAnimProxyData
// Size: 0x28 (Inherited: 0x28)
struct UBaseAnimProxyData : UObject {
};

// Class GameplayFramework.Weapon
// Size: 0x1d68 (Inherited: 0x300)
struct AWeapon : AInventoryItem {
	char UnknownData_300_0 : 7; // 0x300(0x01)
	bool bProjectileWeapon : 1; // 0x300(0x01)
	char UnknownData_301[0x7]; // 0x301(0x07)
	struct USkeletalMeshComponent* Mesh; // 0x308(0x08)
	char UnknownData_310_0 : 7; // 0x310(0x01)
	bool bDebugLog : 1; // 0x310(0x01)
	char UnknownData_311_0 : 7; // 0x311(0x01)
	bool bDualWield : 1; // 0x311(0x01)
	char UnknownData_312_0 : 7; // 0x312(0x01)
	bool bUseCameraTraceImpact : 1; // 0x312(0x01)
	char UnknownData_313[0x5]; // 0x313(0x05)
	struct UWeaponType* Type; // 0x318(0x08)
	struct FProjectileWeaponData ProjectileConfig; // 0x320(0x40)
	SoftClassProperty InstantDamageType; // 0x360(0x28)
	struct UDamageType* InstantDamageTypeClassPtr; // 0x388(0x08)
	struct FWeaponAnimDataCollection AnimationDataStruct; // 0x390(0x70)
	float ReloadAnimDuration; // 0x400(0x04)
	char UnknownData_404[0x4]; // 0x404(0x04)
	struct FWeaponConfigData WeaponConfig; // 0x408(0x2f8)
	struct FHitResult CameraImpact; // 0x700(0x90)
	struct FHitResult TraceImpact; // 0x790(0x90)
	struct FVector TraceDir; // 0x820(0x0c)
	char UnknownData_82C[0x4]; // 0x82c(0x04)
	struct ABaseCharacter* CharacterOwner; // 0x830(0x08)
	char UnknownData_838[0xa0]; // 0x838(0xa0)
	enum class EWeaponState CurrentState; // 0x8d8(0x01)
	char UnknownData_8D9[0x7]; // 0x8d9(0x07)
	struct TArray<int32_t> BaseMeshVisible; // 0x8e0(0x10)
	char UnknownData_8F0[0x10]; // 0x8f0(0x10)
	struct FMulticastInlineDelegate OnUnequipFinished; // 0x900(0x10)
	struct FName RightAttachPoint; // 0x910(0x08)
	struct FName LeftAttachPoint; // 0x918(0x08)
	enum class EWeaponAttachmentPoint CurrentAttachmentPoint; // 0x920(0x01)
	enum class EWeaponAttachmentHand CurrentAttachmentHand; // 0x921(0x01)
	char UnknownData_922[0x2]; // 0x922(0x02)
	struct FVector MultiweaponDropImpulse; // 0x924(0x0c)
	struct FVector MultiweaponDropImpulseInCover; // 0x930(0x0c)
	char UnknownData_93C_0 : 7; // 0x93c(0x01)
	bool IgnoreDefaultDirectionalImpulseZ : 1; // 0x93c(0x01)
	char UnknownData_93D_0 : 7; // 0x93d(0x01)
	bool bIsUsedAsWeaponOverride : 1; // 0x93d(0x01)
	char UnknownData_93E[0x2]; // 0x93e(0x02)
	uint32_t ShotCounter; // 0x940(0x04)
	int32_t BurstCounter; // 0x944(0x04)
	int32_t RecentBurstCounter; // 0x948(0x04)
	char UnknownData_94C_0 : 7; // 0x94c(0x01)
	bool bFired : 1; // 0x94c(0x01)
	char UnknownData_94D_0 : 7; // 0x94d(0x01)
	bool bWantsToFire : 1; // 0x94d(0x01)
	char UnknownData_94E[0x2]; // 0x94e(0x02)
	int32_t CurrentBaseMesh; // 0x950(0x04)
	int32_t CurrentMuzzleSocket; // 0x954(0x04)
	char UnknownData_958_0 : 7; // 0x958(0x01)
	bool bForceFeedbackActive : 1; // 0x958(0x01)
	char UnknownData_959[0x34]; // 0x959(0x34)
	char UnknownData_98D_0 : 7; // 0x98d(0x01)
	bool bWantedToFireRecently : 1; // 0x98d(0x01)
	char UnknownData_98E[0x2]; // 0x98e(0x02)
	float CritChances[0x400]; // 0x990(0x1000)
	int32_t CritSeed; // 0x1990(0x04)
	char UnknownData_1994_0 : 7; // 0x1994(0x01)
	bool bDummy : 1; // 0x1994(0x01)
	enum class ETeam DummyTeam; // 0x1995(0x01)
	char UnknownData_1996[0x2]; // 0x1996(0x02)
	float CanceledReloadBlendDuration; // 0x1998(0x04)
	char UnknownData_199C_0 : 7; // 0x199c(0x01)
	bool bPerBulletReload : 1; // 0x199c(0x01)
	char UnknownData_199D[0x3]; // 0x199d(0x03)
	struct FName StartReloadSectionName; // 0x19a0(0x08)
	struct FName LoopReloadSectionName; // 0x19a8(0x08)
	struct FName EndReloadSectionName; // 0x19b0(0x08)
	struct FMulticastInlineDelegate OnReload; // 0x19b8(0x10)
	struct FMulticastInlineDelegate OnAmmoCountChanged; // 0x19c8(0x10)
	int32_t CurrentAmmoInClip; // 0x19d8(0x04)
	int32_t ReloadAmmoSurplus; // 0x19dc(0x04)
	int32_t ClientsReserveAmmoBeforeReload; // 0x19e0(0x04)
	struct FVector ClipOffset; // 0x19e4(0x0c)
	char UnknownData_19F0_0 : 7; // 0x19f0(0x01)
	bool bShootingLockedEffectsPlayed : 1; // 0x19f0(0x01)
	char UnknownData_19F1_0 : 7; // 0x19f1(0x01)
	bool bBlockTargetingReloadCancel : 1; // 0x19f1(0x01)
	enum class EWeaponState PreReloadState; // 0x19f2(0x01)
	char UnknownData_19F3[0x35]; // 0x19f3(0x35)
	struct TArray<struct FName> BeltSockets; // 0x1a28(0x10)
	SoftClassProperty Bullet; // 0x1a38(0x28)
	struct UObject* BulletClassPtr; // 0x1a60(0x08)
	struct FRotator BulletRotationOffset; // 0x1a68(0x0c)
	char UnknownData_1A74[0x4]; // 0x1a74(0x04)
	struct TArray<struct AStaticMeshActor*> Bullets; // 0x1a78(0x10)
	struct UWeaponEffects* Effects; // 0x1a88(0x08)
	struct UWeaponEffects* EffectsOverride; // 0x1a90(0x08)
	struct FName EffectOverrideName; // 0x1a98(0x08)
	struct FWeaponSoundsData SoundsData; // 0x1aa0(0x150)
	struct TArray<struct USoundCue*> LoadedSounds; // 0x1bf0(0x10)
	char UnknownData_1C00[0x8]; // 0x1c00(0x08)
	struct TArray<struct FName> MuzzleSockets; // 0x1c08(0x10)
	int32_t MaxTrailParticles; // 0x1c18(0x04)
	int32_t CurrTrailParticle; // 0x1c1c(0x04)
	struct TArray<struct UParticleSystemComponent*> TrailParticles; // 0x1c20(0x10)
	struct TArray<struct UParticleSystemComponent*> MuzzleParticles; // 0x1c30(0x10)
	int32_t LowAmmoWarningBullets; // 0x1c40(0x04)
	struct FName AudioSocket; // 0x1c44(0x08)
	char UnknownData_1C4C[0x4]; // 0x1c4c(0x04)
	struct UAudioComponent* FireLoopAudio; // 0x1c50(0x08)
	struct UAudioComponent* ReloadAudio; // 0x1c58(0x08)
	struct UAudioComponent* ClickingAudio; // 0x1c60(0x08)
	struct FMulticastInlineDelegate OnOutOfAbilityBullets; // 0x1c68(0x10)
	char UnknownData_1C78_0 : 7; // 0x1c78(0x01)
	bool bCustomFire : 1; // 0x1c78(0x01)
	char UnknownData_1C79[0x3]; // 0x1c79(0x03)
	int32_t AbilityBulletsLeft; // 0x1c7c(0x04)
	struct FWeakObjectPtr<struct UWeaponAbilityEffect> WeaponAbilityEffect; // 0x1c80(0x08)
	struct FWeakObjectPtr<struct UWeaponAbilityDamageType> WeaponAbilityDamageType; // 0x1c88(0x08)
	struct FName AbilityEffectName; // 0x1c90(0x08)
	struct FWeaponCrosshairData CrosshairData; // 0x1c98(0xc8)
	char UnknownData_1D60[0x4]; // 0x1d60(0x04)
	char UnknownData_1D64_0 : 7; // 0x1d64(0x01)
	bool bIsJammed : 1; // 0x1d64(0x01)
	char UnknownData_1D65_0 : 7; // 0x1d65(0x01)
	bool bCanEverTick : 1; // 0x1d65(0x01)
	char UnknownData_1D66[0x2]; // 0x1d66(0x02)

	bool ShouldShowCrosshair(); // Function GameplayFramework.Weapon.ShouldShowCrosshair // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3944610
	void SetJammed(bool bJammed); // Function GameplayFramework.Weapon.SetJammed // (Final|Native|Public|BlueprintCallable) // @ game+0x3944580
	void SetFire(bool bOn); // Function GameplayFramework.Weapon.SetFire // (Final|Native|Public|BlueprintCallable) // @ game+0x39444f0
	void SetAmmo(int32_t Count, bool bReplenishAmmoComponent); // Function GameplayFramework.Weapon.SetAmmo // (Final|Native|Public|BlueprintCallable) // @ game+0x3944430
	void SetAbilityEffect(struct UWeaponAbilityEffect* InWeaponAbilityEffect, struct UWeaponAbilityDamageType* InweaponAbilityDamageType, struct FName InEffectName, bool bInCustomFire, bool bShouldCountBullets, int32_t BulletsNum); // Function GameplayFramework.Weapon.SetAbilityEffect // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3944250
	void ServerSetMaxAmmoInClip(); // Function GameplayFramework.Weapon.ServerSetMaxAmmoInClip // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0xb146b0
	void ServerSetFire(bool bOn); // Function GameplayFramework.Weapon.ServerSetFire // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x39441c0
	void ServerSetEffectsOverride(struct UWeaponEffects* InEffectsOverride, struct FName OverrideName); // Function GameplayFramework.Weapon.ServerSetEffectsOverride // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x39440f0
	void ServerSetCurrentAmmoInClip(int32_t Ammo); // Function GameplayFramework.Weapon.ServerSetCurrentAmmoInClip // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x3944060
	void ServerSetAmmo(int32_t Ammo, bool bReplenishAmmoComponent); // Function GameplayFramework.Weapon.ServerSetAmmo // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x3943f90
	void ServerReload(bool bIgnoreAnimation, bool bIgnoreFullClip, bool bReloadByClipEmptyAction); // Function GameplayFramework.Weapon.ServerReload // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x3943e80
	void ServerProcessProjectile(struct FVector Origin, struct FVector_NetQuantizeNormal ShootDir); // Function GameplayFramework.Weapon.ServerProcessProjectile // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults) // @ game+0x3943dd0
	void ServerProcessInstantHit(struct FHitResult Impact); // Function GameplayFramework.Weapon.ServerProcessInstantHit // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x3943ca0
	void ServerDirectFire(bool bIgnoreLocalPlayer, struct FVector Origin, struct FVector Direction, struct UDamageType* ForcedDamageType, float DamageMult); // Function GameplayFramework.Weapon.ServerDirectFire // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults) // @ game+0x3943b00
	void ReplenishAmmoInClip(int32_t Count); // Function GameplayFramework.Weapon.ReplenishAmmoInClip // (Final|Native|Public|BlueprintCallable) // @ game+0x3943a80
	void OnRep_EffectOverrideName(); // Function GameplayFramework.Weapon.OnRep_EffectOverrideName // (Final|Native|Protected) // @ game+0x3943860
	void OnRep_CritSeed(); // Function GameplayFramework.Weapon.OnRep_CritSeed // (Final|Native|Protected) // @ game+0x3943840
	void OnRep_CharacterOwner(); // Function GameplayFramework.Weapon.OnRep_CharacterOwner // (Native|Protected) // @ game+0x33b8210
	void OnFireStopped(); // Function GameplayFramework.Weapon.OnFireStopped // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void OnFireStarted(); // Function GameplayFramework.Weapon.OnFireStarted // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void MulticastSetFire(bool bOn); // Function GameplayFramework.Weapon.MulticastSetFire // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x3943540
	void MulticastSetCurrentAmmoInClip(int32_t Ammo); // Function GameplayFramework.Weapon.MulticastSetCurrentAmmoInClip // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x39434b0
	void MulticastSetAmmo(int32_t Ammo, bool bReplenishAmmoComponent); // Function GameplayFramework.Weapon.MulticastSetAmmo // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x39433e0
	void MulticastReload(bool bIgnoreAnimation, bool bIgnoreFullClip); // Function GameplayFramework.Weapon.MulticastReload // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x3943310
	void MulticastProcessProjectile(struct FVector Origin, struct FVector_NetQuantizeNormal ShootDir); // Function GameplayFramework.Weapon.MulticastProcessProjectile // (Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults) // @ game+0x3943260
	void MulticastProcessInstantHit(struct FHitResult Impact); // Function GameplayFramework.Weapon.MulticastProcessInstantHit // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x3943130
	void MulticastDrop(struct FVector Impulse, bool bForceDestroy); // Function GameplayFramework.Weapon.MulticastDrop // (Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults) // @ game+0x3943050
	void MulticastDirectFire(bool bIgnoreLocalPlayer, struct FVector Origin, struct FVector Direction, struct UDamageType* ForcedDamageType, float DamageMult); // Function GameplayFramework.Weapon.MulticastDirectFire // (Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults) // @ game+0x3942eb0
	bool IsWaitingToResumeNextBurst(); // Function GameplayFramework.Weapon.IsWaitingToResumeNextBurst // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942e90
	bool IsTraceImpactOnEnemy(); // Function GameplayFramework.Weapon.IsTraceImpactOnEnemy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942e60
	bool IsTraceCompatibleWithCrosshair(float MaxDistPctDiff); // Function GameplayFramework.Weapon.IsTraceCompatibleWithCrosshair // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942dd0
	bool IsJammed(); // Function GameplayFramework.Weapon.IsJammed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942db0
	bool IsAutomatic(); // Function GameplayFramework.Weapon.IsAutomatic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942d90
	void ImpactNotify(struct FHitResult Impact); // Function GameplayFramework.Weapon.ImpactNotify // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	struct UWeaponType* GetType(); // Function GameplayFramework.Weapon.GetType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942d70
	struct FHitResult GetTraceImpact(); // Function GameplayFramework.Weapon.GetTraceImpact // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942d40
	float GetTimeBetweenShots(); // Function GameplayFramework.Weapon.GetTimeBetweenShots // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942d00
	float GetReloadSpeedRate(); // Function GameplayFramework.Weapon.GetReloadSpeedRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942cc0
	float GetReloadProgressPct(); // Function GameplayFramework.Weapon.GetReloadProgressPct // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942c90
	float GetRange(); // Function GameplayFramework.Weapon.GetRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942c50
	struct FVector GetMuzzleLocation(); // Function GameplayFramework.Weapon.GetMuzzleLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942c10
	struct FVector GetMuzzleDirection(); // Function GameplayFramework.Weapon.GetMuzzleDirection // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942bd0
	float GetMaxRange(); // Function GameplayFramework.Weapon.GetMaxRange // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942b90
	float GetMarginalRange(); // Function GameplayFramework.Weapon.GetMarginalRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942b30
	float GetHitDamage(bool bIncludeBonusDamage); // Function GameplayFramework.Weapon.GetHitDamage // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942a90
	struct FWeaponFireMode GetFireMode(); // Function GameplayFramework.Weapon.GetFireMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942a60
	enum class EWeaponState GetCurrentState(); // Function GameplayFramework.Weapon.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942a40
	int32_t GetCurrentBaseMesh(); // Function GameplayFramework.Weapon.GetCurrentBaseMesh // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942a10
	int32_t GetCurrentAmmoInClip(); // Function GameplayFramework.Weapon.GetCurrentAmmoInClip // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39429e0
	enum class EWeaponCrosshairVariant GetCrosshairVariant(); // Function GameplayFramework.Weapon.GetCrosshairVariant // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39429b0
	float GetCrosshairSpread(bool bInterpolated); // Function GameplayFramework.Weapon.GetCrosshairSpread // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942910
	struct UStaticMeshComponent* GetClipMesh(int32_t BaseMeshId); // Function GameplayFramework.Weapon.GetClipMesh // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942870
	struct FHitResult GetCameraImpact(); // Function GameplayFramework.Weapon.GetCameraImpact // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942840
	enum class EAmmoType GetAmmoType(); // Function GameplayFramework.Weapon.GetAmmoType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942820
	int32_t GetAmmoPerClip(); // Function GameplayFramework.Weapon.GetAmmoPerClip // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39427e0
	void DirectFireWeaponDelayed(struct FFloatInterval Delay, struct FVector Origin, struct FVector Direction, struct UDamageType* ForcedDamageType, float DamageMult); // Function GameplayFramework.Weapon.DirectFireWeaponDelayed // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3942630
	void DirectFireWeapon(struct FVector Origin, struct FVector Direction, struct UDamageType* ForcedDamageType, float DamageMult); // Function GameplayFramework.Weapon.DirectFireWeapon // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x39424a0
	void ClearAbilityEffect(); // Function GameplayFramework.Weapon.ClearAbilityEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x3942480
	bool CanFire(bool bCheckAmmo, bool bCheckJam, bool bCheckCharge, bool bCheckBurst); // Function GameplayFramework.Weapon.CanFire // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942300
	void CacheLoadedSounds(); // Function GameplayFramework.Weapon.CacheLoadedSounds // (Final|Native|Protected) // @ game+0x39422e0
	void AttachToAnotherHand(); // Function GameplayFramework.Weapon.AttachToAnotherHand // (Final|Native|Public|BlueprintCallable) // @ game+0x39422c0
	bool AnyAbilityBulletsLeft(); // Function GameplayFramework.Weapon.AnyAbilityBulletsLeft // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3942290
};

// Class GameplayFramework.BaseDamageType
// Size: 0xe0 (Inherited: 0xd0)
struct UBaseDamageType : UDamageType {
	char UnknownData_D0_0 : 7; // 0xd0(0x01)
	bool bDealsDamageToInstigator : 1; // 0xd0(0x01)
	char UnknownData_D1_0 : 7; // 0xd1(0x01)
	bool bDealsDamageToAllies : 1; // 0xd1(0x01)
	char UnknownData_D2_0 : 7; // 0xd2(0x01)
	bool bScriptedKill : 1; // 0xd2(0x01)
	char UnknownData_D3_0 : 7; // 0xd3(0x01)
	bool bSilentKill : 1; // 0xd3(0x01)
	char UnknownData_D4_0 : 7; // 0xd4(0x01)
	bool bPassSaveFromDeathEffects : 1; // 0xd4(0x01)
	char UnknownData_D5_0 : 7; // 0xd5(0x01)
	bool bNullDamage : 1; // 0xd5(0x01)
	char UnknownData_D6_0 : 7; // 0xd6(0x01)
	bool bKillInstigator : 1; // 0xd6(0x01)
	char UnknownData_D7_0 : 7; // 0xd7(0x01)
	bool bKillToRestart : 1; // 0xd7(0x01)
	struct FGameplayTag DeathEffectOverride; // 0xd8(0x08)
};

// Class GameplayFramework.BaseCharacter
// Size: 0xfd0 (Inherited: 0x590)
struct ABaseCharacter : Acharacter {
	char UnknownData_590[0x8a]; // 0x590(0x8a)
	char UnknownData_61A_0 : 7; // 0x61a(0x01)
	bool bHasDied : 1; // 0x61a(0x01)
	char UnknownData_61B_0 : 7; // 0x61b(0x01)
	bool bPlayEquipWeaponAnim : 1; // 0x61b(0x01)
	char UnknownData_61C[0x1]; // 0x61c(0x01)
	char UnknownData_61D_0 : 7; // 0x61d(0x01)
	bool bControlledByHuman : 1; // 0x61d(0x01)
	char UnknownData_61E[0x2]; // 0x61e(0x02)
	char UnknownData_620_0 : 7; // 0x620(0x01)
	bool bUnlimitedHealth : 1; // 0x620(0x01)
	char UnknownData_621_0 : 7; // 0x621(0x01)
	bool bReplicateHidden : 1; // 0x621(0x01)
	char UnknownData_622_0 : 7; // 0x622(0x01)
	bool bReplicateHiddenInMovieScene : 1; // 0x622(0x01)
	char UnknownData_623[0x15]; // 0x623(0x15)
	int32_t CharacterSpawnSeed; // 0x638(0x04)
	char UnknownData_63C[0x4]; // 0x63c(0x04)
	struct FWeakObjectPtr<struct AController> LastController; // 0x640(0x08)
	char UnknownData_648[0x4]; // 0x648(0x04)
	float LastMovementInputTime; // 0x64c(0x04)
	float LastCameraYawInputTime; // 0x650(0x04)
	float LastCameraPitchInputTime; // 0x654(0x04)
	struct FVector ViewLocationOffset; // 0x658(0x0c)
	struct FName ViewBoneName; // 0x664(0x08)
	float CurrentHealth; // 0x66c(0x04)
	struct UAimAssistComponent* AimAssistComponent; // 0x670(0x08)
	struct FMulticastInlineDelegate OnMoveBlockedByEvent; // 0x678(0x10)
	struct FString BaseDisplayName; // 0x688(0x10)
	struct FMulticastInlineDelegate OnDamaged; // 0x698(0x10)
	struct FMulticastInlineDelegate OnTakeHit; // 0x6a8(0x10)
	struct FMulticastInlineDelegate OnTakeLethalHit; // 0x6b8(0x10)
	struct FTakeHitInfo LastTakeHitInfo; // 0x6c8(0x200)
	char UnknownData_8C8[0x4]; // 0x8c8(0x04)
	char UnknownData_8CC_0 : 7; // 0x8cc(0x01)
	bool bUseAIDamageReactionComponent : 1; // 0x8cc(0x01)
	char UnknownData_8CD[0x3]; // 0x8cd(0x03)
	float DamageBuildupMaxTimeGap; // 0x8d0(0x04)
	struct FFWAIDamageReactionTypeData AIDamageReactionConfigs[0x4]; // 0x8d4(0x30)
	char UnknownData_904[0x4]; // 0x904(0x04)
	struct UFWAIDataAsset_DamageReactionBase* AIDamageReactionsAsset; // 0x908(0x08)
	enum class EFWAIDamageReactionOverlap AIDamageReactionOverlap; // 0x910(0x01)
	enum class EFWAIDamageReactionOverlap AIDamageTwitchOverlayReaction; // 0x911(0x01)
	char UnknownData_912_0 : 7; // 0x912(0x01)
	bool bAIDamageTwitchOverlap : 1; // 0x912(0x01)
	char UnknownData_913_0 : 7; // 0x913(0x01)
	bool bFalterOnFirstBullet : 1; // 0x913(0x01)
	float NoDamageTimeForFirstBullet; // 0x914(0x04)
	char UnknownData_918_0 : 7; // 0x918(0x01)
	bool bResetBuildupAfterKnockback : 1; // 0x918(0x01)
	char UnknownData_919[0x3]; // 0x919(0x03)
	float LifespanAfterDeath; // 0x91c(0x04)
	float MinTimeNotVisibleToDestroy; // 0x920(0x04)
	float TimeToStopMeshTickAfterDeath; // 0x924(0x04)
	char UnknownData_928_0 : 7; // 0x928(0x01)
	bool bAutoDestroyAfterDeath : 1; // 0x928(0x01)
	char UnknownData_929_0 : 7; // 0x929(0x01)
	bool bWaitingToBeDestroyed : 1; // 0x929(0x01)
	char UnknownData_92A_0 : 7; // 0x92a(0x01)
	bool bStopMeshTickAfterDeath : 1; // 0x92a(0x01)
	char UnknownData_92B_0 : 7; // 0x92b(0x01)
	bool bStopReplicationAfterDeath : 1; // 0x92b(0x01)
	char UnknownData_92C_0 : 7; // 0x92c(0x01)
	bool bSendGlobalEventOnDeath : 1; // 0x92c(0x01)
	char UnknownData_92D_0 : 7; // 0x92d(0x01)
	bool bHandledDeath : 1; // 0x92d(0x01)
	char UnknownData_92E_0 : 7; // 0x92e(0x01)
	bool bEquipWeaponOnStart : 1; // 0x92e(0x01)
	char UnknownData_92F[0x1]; // 0x92f(0x01)
	struct FMulticastInlineDelegate OnKilled; // 0x930(0x10)
	struct FMulticastInlineDelegate OnHealthBelowZero; // 0x940(0x10)
	char UnknownData_950[0x8]; // 0x950(0x08)
	struct TArray<struct AInventoryItem*> DefaultInventoryClasses; // 0x958(0x10)
	struct TArray<struct FNameWrapper> DefaultWeapons; // 0x968(0x10)
	struct AInventory* InventoryClass; // 0x978(0x08)
	struct UAmmoComponent* AmmoComponent; // 0x980(0x08)
	struct ULuckComponent* LuckComponent; // 0x988(0x08)
	struct AInventory* Inventory; // 0x990(0x08)
	struct FMulticastInlineDelegate OnWeaponAttachedToHand; // 0x998(0x10)
	struct FWeaponSlotSelector HiddenWeaponSlots; // 0x9a8(0x04)
	char UnknownData_9AC[0x4]; // 0x9ac(0x04)
	struct ABaseCharacter* LastShotEnemy; // 0x9b0(0x08)
	struct FMulticastInlineDelegate OnNewWeaponEquipped; // 0x9b8(0x10)
	struct AWeapon* CurrentWeapon; // 0x9c8(0x08)
	struct AWeapon* PendingWeapon; // 0x9d0(0x08)
	struct AWeapon* PreviousWeapon; // 0x9d8(0x08)
	struct FMulticastInlineDelegate OnTargetingModeChanged; // 0x9e0(0x10)
	struct FMulticastInlineDelegate OnWeaponFired; // 0x9f0(0x10)
	char UnknownData_A00[0x28]; // 0xa00(0x28)
	struct FMulticastInlineDelegate OnWeaponImpact; // 0xa28(0x10)
	char UnknownData_A38[0x18]; // 0xa38(0x18)
	struct USoundCue* StartTargetingCue; // 0xa50(0x08)
	struct USoundCue* StopTargetingCue; // 0xa58(0x08)
	char UnknownData_A60_0 : 7; // 0xa60(0x01)
	bool bWantsToTarget : 1; // 0xa60(0x01)
	char UnknownData_A61_0 : 7; // 0xa61(0x01)
	bool bIsTargeting : 1; // 0xa61(0x01)
	char UnknownData_A62_0 : 7; // 0xa62(0x01)
	bool bWantsToFire : 1; // 0xa62(0x01)
	char UnknownData_A63_0 : 7; // 0xa63(0x01)
	bool bFireRequested : 1; // 0xa63(0x01)
	char UnknownData_A64_0 : 7; // 0xa64(0x01)
	bool bIsInCinematicFire : 1; // 0xa64(0x01)
	char UnknownData_A65_0 : 7; // 0xa65(0x01)
	bool bWeaponTickTraceForced : 1; // 0xa65(0x01)
	char UnknownData_A66[0x2]; // 0xa66(0x02)
	struct FMulticastInlineDelegate OnWeaponReloadBegin; // 0xa68(0x10)
	struct FMulticastInlineDelegate OnWeaponReloadFinished; // 0xa78(0x10)
	struct UStaticMeshComponent* WeaponClipComponentL; // 0xa88(0x08)
	struct UStaticMeshComponent* WeaponClipComponentR; // 0xa90(0x08)
	struct FMulticastInlineDelegate OnWantsToFireChanged; // 0xa98(0x10)
	struct FMulticastInlineDelegate OnWantsToTargetChanged; // 0xaa8(0x10)
	char UnknownData_AB8[0x58]; // 0xab8(0x58)
	struct FWeaponAttachmentSockets WeaponAttachmentSockets; // 0xb10(0x48)
	struct FMulticastInlineDelegate OnNewActorUnderCrosshair; // 0xb58(0x10)
	struct FMulticastInlineDelegate OnNewEnemyUnderCrosshair; // 0xb68(0x10)
	struct AActor* ActorUnderCrosshair; // 0xb78(0x08)
	struct FVector LocationUnderCrosshair; // 0xb80(0x0c)
	char UnknownData_B8C_0 : 7; // 0xb8c(0x01)
	bool bWantsActorUnderCrosshair : 1; // 0xb8c(0x01)
	char UnknownData_B8D_0 : 7; // 0xb8d(0x01)
	bool bActorUnderCrosshairWantsRedCrosshair : 1; // 0xb8d(0x01)
	char UnknownData_B8E_0 : 7; // 0xb8e(0x01)
	bool bActorUnderCrosshairWantsGreenCrosshair : 1; // 0xb8e(0x01)
	char UnknownData_B8F_0 : 7; // 0xb8f(0x01)
	bool bCheckIfCharacterInShadow : 1; // 0xb8f(0x01)
	struct UAnimNotifyEffectsComponent* AnimNotifyEffectsComponent; // 0xb90(0x08)
	struct UCharacterEffectsTemplate* CharacterEffectTemplate; // 0xb98(0x08)
	struct UCharacterEffectsTemplate* CharacterEffectTemplateOverride; // 0xba0(0x08)
	char UnknownData_BA8[0x2a]; // 0xba8(0x2a)
	enum class ETeam Team; // 0xbd2(0x01)
	char UnknownData_BD3_0 : 7; // 0xbd3(0x01)
	bool bApplyCacheInitialMeshOffsetCorrection : 1; // 0xbd3(0x01)
	char UnknownData_BD4[0x14]; // 0xbd4(0x14)
	int32_t TotalAttackersMax; // 0xbe8(0x04)
	float FootStepNoiseDistance; // 0xbec(0x04)
	struct TMap<struct UFWAIArchetype*, int32_t> MaxAllowedAttackersPerArchetype; // 0xbf0(0x50)
	char UnknownData_C40[0x60]; // 0xc40(0x60)
	struct UFWAIRank* AIRank; // 0xca0(0x08)
	struct UFWAIFaction* AIFaction; // 0xca8(0x08)
	struct UFWAIArchetype* AIArchetype; // 0xcb0(0x08)
	struct FFWAIArchetypeVariation AIArchetypeVariation; // 0xcb8(0x20)
	struct URagdollStandupAnimations* StandupAnimations; // 0xcd8(0x08)
	char UnknownData_CE0[0x48]; // 0xce0(0x48)
	float StandupDelay; // 0xd28(0x04)
	float StandupLinearVelocity; // 0xd2c(0x04)
	float PhysicsAnnealingSpeed; // 0xd30(0x04)
	float RagdollLinearDampingMultiplier; // 0xd34(0x04)
	float RagdollAngularDampingMultiplier; // 0xd38(0x04)
	float RagdollInstanceMassScale; // 0xd3c(0x04)
	struct FTransform ReplicatedPelvisTransform; // 0xd40(0x30)
	float ReplicationHandleStiffness; // 0xd70(0x04)
	float ReplicationHandleDamping; // 0xd74(0x04)
	float ReplicationHandleInterpolationSpeed; // 0xd78(0x04)
	char UnknownData_D7C_0 : 7; // 0xd7c(0x01)
	bool UseBoneMatching : 1; // 0xd7c(0x01)
	char UnknownData_D7D_0 : 7; // 0xd7d(0x01)
	bool DebugRagdoll : 1; // 0xd7d(0x01)
	char UnknownData_D7E[0x2]; // 0xd7e(0x02)
	struct UPhysicsHandleComponent* RagdollReplicationHandle; // 0xd80(0x08)
	char UnknownData_D88[0xd8]; // 0xd88(0xd8)
	struct TArray<struct FSoftObjectPath> DefaultDash; // 0xe60(0x10)
	char UnknownData_E70[0xa0]; // 0xe70(0xa0)
	struct UMinimapNodeComponent* MinimapNode; // 0xf10(0x08)
	struct TArray<struct FNameWrapper> PossibleChatterSpeakerIDs; // 0xf18(0x10)
	char UnknownData_F28[0x18]; // 0xf28(0x18)
	struct FRepAttachmentInfo AttachementInfo; // 0xf40(0x50)
	char UnknownData_F90_0 : 7; // 0xf90(0x01)
	bool bNPCReactionsEnabled : 1; // 0xf90(0x01)
	char UnknownData_F91[0x3]; // 0xf91(0x03)
	float VODistance; // 0xf94(0x04)
	char UnknownData_F98_0 : 7; // 0xf98(0x01)
	bool bVOIsMale : 1; // 0xf98(0x01)
	char UnknownData_F99_0 : 7; // 0xf99(0x01)
	bool bVOIsCivilian : 1; // 0xf99(0x01)
	char UnknownData_F9A_0 : 7; // 0xf9a(0x01)
	bool bVOIsCivilianGroup : 1; // 0xf9a(0x01)
	char UnknownData_F9B[0x1]; // 0xf9b(0x01)
	struct FName VOAntfarmTag; // 0xf9c(0x08)
	char UnknownData_FA4[0x4]; // 0xfa4(0x04)
	float DirectionalDeformationRadiusMultiplier; // 0xfa8(0x04)
	float DirectionalDeformationStrength; // 0xfac(0x04)
	float DirectionalDeformationSpeed; // 0xfb0(0x04)
	char UnknownData_FB4[0x4]; // 0xfb4(0x04)
	struct FMulticastInlineDelegate OnInteractionOverlap; // 0xfb8(0x10)
	char UnknownData_FC8[0x8]; // 0xfc8(0x08)

	void ToggleUnlimitedHealth(); // Function GameplayFramework.BaseCharacter.ToggleUnlimitedHealth // (Final|Exec|Native|Public) // @ game+0x38e43a0
	void Suicide(bool bSilent); // Function GameplayFramework.BaseCharacter.Suicide // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x38e4310
	void StopRotationInterpolator(struct FInterpolatorHandle RotationInterpolatorHandle); // Function GameplayFramework.BaseCharacter.StopRotationInterpolator // (Final|Native|Public|BlueprintCallable) // @ game+0x38e4290
	void StopAnimMontageReplicated(struct UAnimMontage* AnimMontage, struct FName EndSectionName, bool bJumpToSection); // Function GameplayFramework.BaseCharacter.StopAnimMontageReplicated // (Native|Public|BlueprintCallable) // @ game+0x38e4190
	void StartSpawingDeformations(); // Function GameplayFramework.BaseCharacter.StartSpawingDeformations // (Final|Native|Public|BlueprintCallable) // @ game+0x38e4170
	void StandupFromRagdoll(); // Function GameplayFramework.BaseCharacter.StandupFromRagdoll // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x38e4150
	void SetWeaponTickTraceForced(bool bForced); // Function GameplayFramework.BaseCharacter.SetWeaponTickTraceForced // (Final|Native|Public|BlueprintCallable) // @ game+0x38e40d0
	void SetUseFullBodyDeformationSockets(bool bUse); // Function GameplayFramework.BaseCharacter.SetUseFullBodyDeformationSockets // (Final|Native|Public|BlueprintCallable) // @ game+0x38e4040
	void SetUnlimitedHealth(bool bSet); // Function GameplayFramework.BaseCharacter.SetUnlimitedHealth // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x38e3fc0
	void SetTeam(enum class ETeam InTeam); // Function GameplayFramework.BaseCharacter.SetTeam // (Native|Public|BlueprintCallable) // @ game+0x38e3f40
	void SetMaxHealth(float InMaxHealth); // Function GameplayFramework.BaseCharacter.SetMaxHealth // (Native|Public|BlueprintCallable) // @ game+0x38e3ec0
	void SetHealth(float InHealth); // Function GameplayFramework.BaseCharacter.SetHealth // (Native|Public|BlueprintCallable) // @ game+0x38e3e40
	void SetCharacterTemplateOverride(struct UCharacterEffectsTemplate* InTemplate); // Function GameplayFramework.BaseCharacter.SetCharacterTemplateOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x38e3dc0
	void ServerStopAnimMontageReplicated(struct UAnimMontage* AnimMontage, struct FName EndSectionName, bool bJumpToSection); // Function GameplayFramework.BaseCharacter.ServerStopAnimMontageReplicated // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x38e3cc0
	void ServerSetWeaponSlotsHidden(struct FWeaponSlotSelector InHiddenWeaponSlots, bool bHideWeaponAnimData); // Function GameplayFramework.BaseCharacter.ServerSetWeaponSlotsHidden // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x38e3bf0
	void ServerSetWeaponHidden(bool bHide, struct FWeaponSlotSelector SlotsToHide); // Function GameplayFramework.BaseCharacter.ServerSetWeaponHidden // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x38e3b20
	void ServerSetWantsToFire(bool bInWantsToFire); // Function GameplayFramework.BaseCharacter.ServerSetWantsToFire // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x38e3a90
	void ServerSetTargetingMode(bool bInTargeting); // Function GameplayFramework.BaseCharacter.ServerSetTargetingMode // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x38e3a00
	void ServerSetInfiniteAmmoType(enum class EAmmoType AmmoType); // Function GameplayFramework.BaseCharacter.ServerSetInfiniteAmmoType // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38e3980
	void ServerSetCinematicFire(bool bOn); // Function GameplayFramework.BaseCharacter.ServerSetCinematicFire // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x15919a0
	void ServerReplenishAmmoType(enum class EAmmoType AmmoType, int32_t Count); // Function GameplayFramework.BaseCharacter.ServerReplenishAmmoType // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x38e38b0
	void ServerReplenishAmmo(); // Function GameplayFramework.BaseCharacter.ServerReplenishAmmo // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x38e3890
	void ServerPlayAnimOnApproached(struct FApproachData InApproachData); // Function GameplayFramework.BaseCharacter.ServerPlayAnimOnApproached // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38e37d0
	void ServerPlayAnimMontageReplicated(struct UAnimMontage* AnimMontage, float InPlayRate, struct FName StartSectionName); // Function GameplayFramework.BaseCharacter.ServerPlayAnimMontageReplicated // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x38e36a0
	void ServerInteractionInterrupted(struct UObject* InInteractionObject); // Function GameplayFramework.BaseCharacter.ServerInteractionInterrupted // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38e3610
	void ServerInteractionApproached(struct UObject* InInteraction, enum class EAppropachResult ApproachResult); // Function GameplayFramework.BaseCharacter.ServerInteractionApproached // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38e3540
	void ReloadWeapon(struct FReloadParams Params); // Function GameplayFramework.BaseCharacter.ReloadWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0x38e34a0
	float PlayAnimMontageReplicated(struct UAnimMontage* AnimMontage, float InPlayRate, struct FName StartSectionName); // Function GameplayFramework.BaseCharacter.PlayAnimMontageReplicated // (Native|Public|BlueprintCallable) // @ game+0x38e3390
	void OnRep_WaitingToBeDestroyed(); // Function GameplayFramework.BaseCharacter.OnRep_WaitingToBeDestroyed // (Final|Native|Public) // @ game+0x38e3370
	void OnRep_LastTakeHitInfo(); // Function GameplayFramework.BaseCharacter.OnRep_LastTakeHitInfo // (Final|Native|Protected) // @ game+0x38e3350
	void OnRep_Inventory(); // Function GameplayFramework.BaseCharacter.OnRep_Inventory // (Native|Protected) // @ game+0x38e3330
	void OnRep_Attachement(struct FRepAttachmentInfo OldAttachementInfo); // Function GameplayFramework.BaseCharacter.OnRep_Attachement // (Final|Native|Public) // @ game+0x38e3200
	void OnPreTeleport(); // Function GameplayFramework.BaseCharacter.OnPreTeleport // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnInShadowStateChanged(bool bNewValue); // Function GameplayFramework.BaseCharacter.OnInShadowStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void NotifyTargetingModeChanged(); // Function GameplayFramework.BaseCharacter.NotifyTargetingModeChanged // (Native|Protected) // @ game+0x38e31e0
	void NotifyAboutEndOfSpawnAnimation(); // Function GameplayFramework.BaseCharacter.NotifyAboutEndOfSpawnAnimation // (Native|Event|Public|BlueprintEvent) // @ game+0x38e31c0
	void MulticastStopAnimMontageReplicated(struct UAnimMontage* AnimMontage, struct FName EndSectionName, bool bJumpToSection); // Function GameplayFramework.BaseCharacter.MulticastStopAnimMontageReplicated // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x38e29a0
	void MulticastSetWeaponUsageBlocked(bool bBlocked); // Function GameplayFramework.BaseCharacter.MulticastSetWeaponUsageBlocked // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x38e2910
	void MulticastSetVisibility(bool bVisible); // Function GameplayFramework.BaseCharacter.MulticastSetVisibility // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x38e2880
	void MulticastPlayAnimMontageReplicated(struct UAnimMontage* AnimMontage, float InPlayRate, struct FName StartSectionName); // Function GameplayFramework.BaseCharacter.MulticastPlayAnimMontageReplicated // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x38e2780
	void MulticastEquipWeapon(bool bIgnoreLocal, struct FEquipParams Params); // Function GameplayFramework.BaseCharacter.MulticastEquipWeapon // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x38e2690
	void MulticastDeactivateMinimapNode(); // Function GameplayFramework.BaseCharacter.MulticastDeactivateMinimapNode // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x38e2670
	void Multicast_HandleDeath(struct FTakeHitInfo TakeHitInfo); // Function GameplayFramework.BaseCharacter.Multicast_HandleDeath // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x38e2ec0
	void Multicast_GibCharacters(struct FExplosionParameter ExplosionParameter, struct FVector CouserLocation, struct FVector HitLocation, struct FVector HitDirection, bool bCanSkipGibbing); // Function GameplayFramework.BaseCharacter.Multicast_GibCharacters // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|BlueprintCallable) // @ game+0x38e2cb0
	void Multicast_BreakCharacterConstrains(struct FExplosionParameter ExplosionParameter, struct FVector CouserLocation, struct FVector HitLocation, struct FVector HitDirection, bool bVelChange); // Function GameplayFramework.BaseCharacter.Multicast_BreakCharacterConstrains // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults|BlueprintCallable) // @ game+0x38e2aa0
	void MoveBlockedByImpact(struct FHitResult Impact); // Function GameplayFramework.BaseCharacter.MoveBlockedByImpact // (Native|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x38e2520
	bool IsWeaponUsageBlocked(); // Function GameplayFramework.BaseCharacter.IsWeaponUsageBlocked // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e24f0
	bool IsStandingUp(); // Function GameplayFramework.BaseCharacter.IsStandingUp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e24c0
	bool IsRagdolling(); // Function GameplayFramework.BaseCharacter.IsRagdolling // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e2490
	bool IsPlayingSOEventAnimation(); // Function GameplayFramework.BaseCharacter.IsPlayingSOEventAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x38e2460
	bool IsInCover(); // Function GameplayFramework.BaseCharacter.IsInCover // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e2430
	bool IsHumanControlled(); // Function GameplayFramework.BaseCharacter.IsHumanControlled // (Final|Native|Public|BlueprintCallable) // @ game+0x38e2410
	bool IsDead(); // Function GameplayFramework.BaseCharacter.IsDead // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e23d0
	bool IsCoverUsageAllowed(); // Function GameplayFramework.BaseCharacter.IsCoverUsageAllowed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e23a0
	bool IsCameraMirrored(); // Function GameplayFramework.BaseCharacter.IsCameraMirrored // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e2370
	bool IsAlive(); // Function GameplayFramework.BaseCharacter.IsAlive // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e2340
	bool HasUnlimitedHealth(); // Function GameplayFramework.BaseCharacter.HasUnlimitedHealth // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e2310
	enum class ETeam GetTeam(); // Function GameplayFramework.BaseCharacter.GetTeam // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e22d0
	struct UCoverSlot* GetOccupiedSlot(); // Function GameplayFramework.BaseCharacter.GetOccupiedSlot // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e22a0
	enum class ECoverMovementDirection GetOccupiedCoverFacing(); // Function GameplayFramework.BaseCharacter.GetOccupiedCoverFacing // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e2270
	struct ACover* GetOccupiedCover(); // Function GameplayFramework.BaseCharacter.GetOccupiedCover // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e2240
	float GetMaxHealth(); // Function GameplayFramework.BaseCharacter.GetMaxHealth // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38e2200
	struct FVector GetLocationUnderCrosshair(); // Function GameplayFramework.BaseCharacter.GetLocationUnderCrosshair // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e21d0
	struct ABaseCharacter* GetLastShotEnemy(); // Function GameplayFramework.BaseCharacter.GetLastShotEnemy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e21b0
	struct AInventory* GetInventory(); // Function GameplayFramework.BaseCharacter.GetInventory // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e2180
	void GetIntoRagdoll(); // Function GameplayFramework.BaseCharacter.GetIntoRagdoll // (Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x38e2160
	float GetHealth(); // Function GameplayFramework.BaseCharacter.GetHealth // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38e2120
	enum class ECoverSlotPeekType GetCameraBehaviorForCoverTargetingType(); // Function GameplayFramework.BaseCharacter.GetCameraBehaviorForCoverTargetingType // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e20f0
	struct FText GetBaseDisplayName(); // Function GameplayFramework.BaseCharacter.GetBaseDisplayName // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e2050
	struct UFWAIRank* GetAIRank(); // Function GameplayFramework.BaseCharacter.GetAIRank // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e1e40
	struct AActor* GetAimTarget(); // Function GameplayFramework.BaseCharacter.GetAimTarget // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x38e2020
	struct FRotator GetAimRotator(bool InWorldSpace); // Function GameplayFramework.BaseCharacter.GetAimRotator // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e1f70
	struct FRotator GetAimOffsets(bool InWorldSpace, struct FVector2D MapTo); // Function GameplayFramework.BaseCharacter.GetAimOffsets // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e1e80
	struct UFWAIFaction* GetAIFaction(); // Function GameplayFramework.BaseCharacter.GetAIFaction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e1e20
	enum class None GetAIArchetypeVariation(); // Function GameplayFramework.BaseCharacter.GetAIArchetypeVariation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e1e00
	struct UFWAIArchetype* GetAIArchetype(); // Function GameplayFramework.BaseCharacter.GetAIArchetype // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e1dc0
	struct AActor* GetActorUnderCrosshair(); // Function GameplayFramework.BaseCharacter.GetActorUnderCrosshair // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e1e60
	struct FInterpolatorHandle FaceRotationInterpolated(struct FRotator InTargetRotation, float InDuration, bool bInOnlyYaw, bool bConstant); // Function GameplayFramework.BaseCharacter.FaceRotationInterpolated // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38e1c30
	void EquipWeapon(struct FEquipParams Params); // Function GameplayFramework.BaseCharacter.EquipWeapon // (Native|Public|BlueprintCallable) // @ game+0x38e1b90
	void EndSpawingDeformations(); // Function GameplayFramework.BaseCharacter.EndSpawingDeformations // (Final|Native|Public|BlueprintCallable) // @ game+0x38e1b70
	void ClientStartApproachInteraction(struct UObject* InInteraction); // Function GameplayFramework.BaseCharacter.ClientStartApproachInteraction // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x34c1fa0
	void ClientHideAllPlayerCharacters(bool bHide, bool bIncludeSelf); // Function GameplayFramework.BaseCharacter.ClientHideAllPlayerCharacters // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x38e1aa0
	void ClientEnableInput(struct APlayerController* PlayerController); // Function GameplayFramework.BaseCharacter.ClientEnableInput // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x38e1a10
	void ClientDisableInput(struct APlayerController* PlayerController); // Function GameplayFramework.BaseCharacter.ClientDisableInput // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x38e1980
	void ClientActivateMontageCamera(struct FRotator InputLimits); // Function GameplayFramework.BaseCharacter.ClientActivateMontageCamera // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // @ game+0x38e18f0
	struct FInterpolatorHandle AddRotationOffsetInDuration(struct FRotator InDeltaRotation, float InDuration, bool bInOnlyYaw, bool bConstant); // Function GameplayFramework.BaseCharacter.AddRotationOffsetInDuration // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38e1760
};

// Class GameplayFramework.FrameworkBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFrameworkBlueprintLibrary : UBlueprintFunctionLibrary {

	bool WasSkelMeshRecentlyRendered(struct UObject* WorldContextObject, struct AActor* InActor, float Tolerance); // Function GameplayFramework.FrameworkBlueprintLibrary.WasSkelMeshRecentlyRendered // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3915390
	struct UPrimitiveComponent* WasRendered(struct UObject* WorldContextObject, struct AActor* InActor, bool OutRendered); // Function GameplayFramework.FrameworkBlueprintLibrary.WasRendered // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3915290
	void WaitForLocalPlayerReplicated(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function GameplayFramework.FrameworkBlueprintLibrary.WaitForLocalPlayerReplicated // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x39151b0
	void WaitForAllPlayersReplicated(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo); // Function GameplayFramework.FrameworkBlueprintLibrary.WaitForAllPlayersReplicated // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x39150d0
	void UpdateRegion(struct UObject* WorldContextObject, struct FGameplayTag RegionToUpdate, struct FGameplayTag UpdateTag); // Function GameplayFramework.FrameworkBlueprintLibrary.UpdateRegion // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3914fe0
	void TriggerProjectileAvoidanceEvent(struct UObject* WorldContextObject, struct AProjectile* ProjectileClass, struct FName Info, bool bPredictProjectileTargetPoint, struct FVector Origin, struct APawn* Instigator, struct FVector Direction, float InitialSpeed); // Function GameplayFramework.FrameworkBlueprintLibrary.TriggerProjectileAvoidanceEvent // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3914d80
	void TravelToLevel(struct UObject* WorldContextObject, struct FName LevelName); // Function GameplayFramework.FrameworkBlueprintLibrary.TravelToLevel // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3914cd0
	struct FVector_NetQuantize10 ToVector_NetQuantize10(struct UObject* WorldContextObject, struct FVector InVector); // Function GameplayFramework.FrameworkBlueprintLibrary.ToVector_NetQuantize10 // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3914bf0
	struct FVector ToVector(struct UObject* WorldContextObject, struct FVector_NetQuantize10 InVector); // Function GameplayFramework.FrameworkBlueprintLibrary.ToVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3914bf0
	void TeleportWholeTeam(struct UObject* WorldContextObject, struct AActor* TeleportLocationPlayer1, struct AActor* TeleportLocationPlayer2, struct AActor* TeleportLocationPlayer3, struct AActor* TeleportLocationPlayer4); // Function GameplayFramework.FrameworkBlueprintLibrary.TeleportWholeTeam // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3914a70
	void TeleportTeamAsync(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct ACoopPlayerStart* TeleportTo, bool bNoFadeOut, bool bNoFadeIn); // Function GameplayFramework.FrameworkBlueprintLibrary.TeleportTeamAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x39148d0
	void TeleportTeam(struct UObject* WorldContextObject, struct ACoopPlayerStart* TeleportTo); // Function GameplayFramework.FrameworkBlueprintLibrary.TeleportTeam // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3914820
	struct FName TagToFName(struct UObject* WorldContextObject, struct FGameplayTag InTag); // Function GameplayFramework.FrameworkBlueprintLibrary.TagToFName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3914750
	void StartRegionFromMenu(struct UObject* WorldContextObject, struct FString InRegionName); // Function GameplayFramework.FrameworkBlueprintLibrary.StartRegionFromMenu // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3914680
	struct FString SplitPascalCase(struct FString inString); // Function GameplayFramework.FrameworkBlueprintLibrary.SplitPascalCase // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39145a0
	struct AProjectile* SpawnProjectileWithGravity(struct UObject* WorldContextObject, struct AProjectile* ProjectileClass, struct FVector Origin, struct FVector Direction, struct APawn* Instigator, struct AActor* Owner, float Gravity, bool bIgnoreInstigator, float InitialSpeedOverride, bool bAllowDeferredSpawning); // Function GameplayFramework.FrameworkBlueprintLibrary.SpawnProjectileWithGravity // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x39142d0
	struct AProjectile* SpawnProjectile(struct UObject* WorldContextObject, struct AProjectile* ProjectileClass, struct FVector Origin, struct FVector Direction, struct APawn* Instigator, struct AActor* Owner, float InitialSpeedOverride, bool bAllowDeferredSpawning); // Function GameplayFramework.FrameworkBlueprintLibrary.SpawnProjectile // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3914070
	bool SpawnExplosionFromTemplateAtImpactPoint(struct UExplosionTemplate* InTemplate, struct FHitResult InImpact, struct AController* InInstigator, struct AActor* InDamageCauser, struct TArray<struct AActor*> OutDamagedActors, struct TArray<struct AActor*> IgnoreActors, float InLevelOverride); // Function GameplayFramework.FrameworkBlueprintLibrary.SpawnExplosionFromTemplateAtImpactPoint // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3913d70
	bool SpawnExplosionFromTemplate(struct UExplosionTemplate* InTemplate, struct FVector InOrigin, struct AController* InInstigator, struct AActor* InDamageCauser, struct TArray<struct AActor*> OutDamagedActors, struct TArray<struct AActor*> IgnoreActors, float InLevelOverride); // Function GameplayFramework.FrameworkBlueprintLibrary.SpawnExplosionFromTemplate // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3913b20
	struct ABlendableDecalActor* SpawnBlendableDecal(struct UObject* WorldContextObject, struct UMaterialInterface* DecalMaterial, struct FVector DecalSize, struct FVector Location, struct FRotator Rotation, float LifeSpan); // Function GameplayFramework.FrameworkBlueprintLibrary.SpawnBlendableDecal // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3913920
	void ShowLoadingMovie(struct UObject* WorldContextObject, bool bShow, struct FString LoadingMovieOverride); // Function GameplayFramework.FrameworkBlueprintLibrary.ShowLoadingMovie // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x39137e0
	void SetFullscreen(bool Fullscreen); // Function GameplayFramework.FrameworkBlueprintLibrary.SetFullscreen // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x39136d0
	void SetDistanceDeformationsFalloff(struct UObject* WorldContextObject, float Falloff, float PreviousFalloff); // Function GameplayFramework.FrameworkBlueprintLibrary.SetDistanceDeformationsFalloff // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x39135d0
	void SetDirectionalDeformationsFalloff(struct UObject* WorldContextObject, float NewFalloff, float PreviousFalloff); // Function GameplayFramework.FrameworkBlueprintLibrary.SetDirectionalDeformationsFalloff // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x39134d0
	void ResetAimAssistWeakSpotsForLocalPlayer(struct UObject* WorldContextObject); // Function GameplayFramework.FrameworkBlueprintLibrary.ResetAimAssistWeakSpotsForLocalPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x39133d0
	void RequestGamesSearch(struct APlayerController* Player, struct FDelegate Finished); // Function GameplayFramework.FrameworkBlueprintLibrary.RequestGamesSearch // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x39132a0
	void ReloadLevel(struct UObject* WorldContextObject, struct FName InLevelName, struct ACoopPlayerStart* TeleportTeamTo, bool bNoFadeOut, bool bNoFadeIn); // Function GameplayFramework.FrameworkBlueprintLibrary.ReloadLevel // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3913110
	void RegisterNamedActor(struct UObject* WorldContextObject, struct AActor* Actor, bool bRegister); // Function GameplayFramework.FrameworkBlueprintLibrary.RegisterNamedActor // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3913010
	void PrintScriptCallstack(); // Function GameplayFramework.FrameworkBlueprintLibrary.PrintScriptCallstack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x33ef620
	void PlayMovie(struct UObject* WorldContextObject, struct UMediaSource* MediaSource, struct FLatentActionInfo LatentInfo, bool bNoFadeOut, bool bNoFadeIn, int32_t NewLightScenarioNumber); // Function GameplayFramework.FrameworkBlueprintLibrary.PlayMovie // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3912e30
	void PlayCinematicFromStreamingData(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct FCinematicPlaybackParams Params, struct FDelegate PostCineScript); // Function GameplayFramework.FrameworkBlueprintLibrary.PlayCinematicFromStreamingData // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3912bd0
	void PlayCinematicAsyncParams(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct FCinematicPlaybackParams Params, struct FDelegate PostCineScript); // Function GameplayFramework.FrameworkBlueprintLibrary.PlayCinematicAsyncParams // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3912970
	void PlayCinematicAsync(struct UObject* WorldContextObject, struct FName InCinematicLevelName, struct TSoftObjectPtr<struct ULevelSequence> InCinematicSequence, struct TArray<struct AActor*> ActorsToHide, struct FLatentActionInfo LatentInfo, struct ACoopPlayerStart* TeleportTo, bool bNoFadeOut, bool bNoFadeIn, bool bDoNotLoadCineLevel, enum class ESequenceWeaponVisibility InWeaponsVisibility, bool bHideHeadGear, bool bHideHandGear, bool bBlockPlayerMovement, bool bBlockPlayerTurning, bool bForceEnableSubtitles); // Function GameplayFramework.FrameworkBlueprintLibrary.PlayCinematicAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3912430
	void PlayCinematic(struct UObject* WorldContextObject, struct FName InCinematicLevelName, struct ULevelSequence* InCinematicSequence, struct TArray<struct AActor*> ActorsToHide, struct FLatentActionInfo LatentInfo, struct ACoopPlayerStart* TeleportTo, bool bNoFadeOut, bool bNoFadeIn, bool bDoNotLoadCineLevel, enum class ESequenceWeaponVisibility InWeaponsVisibility, bool bHideHeadGear, bool bHideHandGear, bool bBlockPlayerMovement, bool bBlockPlayerTurning); // Function GameplayFramework.FrameworkBlueprintLibrary.PlayCinematic // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3912010
	void MarkTexturePackageDirty(struct UObject* WorldContextObject, struct UTexture2D* Texture); // Function GameplayFramework.FrameworkBlueprintLibrary.MarkTexturePackageDirty // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x158b370
	void KillTeam(struct UObject* WorldContextObject, enum class ETeam TeamToKill, struct UBaseDamageType* DamageTypeClass); // Function GameplayFramework.FrameworkBlueprintLibrary.KillTeam // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3911f00
	void KillCharacter(struct UObject* WorldContextObject, struct ABaseCharacter* CharacterToKill, struct UBaseDamageType* DamageTypeClass, struct AController* InInstigator, struct AActor* InDamageCauser); // Function GameplayFramework.FrameworkBlueprintLibrary.KillCharacter // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3911d80
	void KillAllPlayers(struct UObject* WorldContextObject, struct UBaseDamageType* DamageTypeClass); // Function GameplayFramework.FrameworkBlueprintLibrary.KillAllPlayers // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3911cd0
	void KillAllEnemies(struct UObject* WorldContextObject, struct UBaseDamageType* DamageTypeClass); // Function GameplayFramework.FrameworkBlueprintLibrary.KillAllEnemies // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3911c20
	void KillAllAllies(struct UObject* WorldContextObject, struct UBaseDamageType* DamageTypeClass); // Function GameplayFramework.FrameworkBlueprintLibrary.KillAllAllies // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3911b70
	void JoinGame(struct UObject* WorldContextObject, struct UOnlineGamesSearch* SearchObject, int32_t ChosenGameToJoin, struct APlayerController* Player, struct FString CharacterName, struct FDelegate Finished); // Function GameplayFramework.FrameworkBlueprintLibrary.JoinGame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3911930
	bool IsWholeTeamAlive(struct UObject* WorldContextObject); // Function GameplayFramework.FrameworkBlueprintLibrary.IsWholeTeamAlive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x39118b0
	bool IsStringAlphanumeric(struct FString inString, struct FString OutFirstInvalidCharacter); // Function GameplayFramework.FrameworkBlueprintLibrary.IsStringAlphanumeric // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3911750
	bool IsSimulating(); // Function GameplayFramework.FrameworkBlueprintLibrary.IsSimulating // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24b3f20
	bool IsRunningOnConsole(); // Function GameplayFramework.FrameworkBlueprintLibrary.IsRunningOnConsole // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24b3f20
	bool IsRegionInstalled(struct FName regionname); // Function GameplayFramework.FrameworkBlueprintLibrary.IsRegionInstalled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x39116d0
	bool IsPlayer(struct ABaseCharacter* character); // Function GameplayFramework.FrameworkBlueprintLibrary.IsPlayer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3911650
	enum class ENameValidationResult IsNameValid(struct FString InName, struct TArray<struct FString> NamesAlreadyInUse, struct FString OutFirstInvalidCharacter, int32_t MinLength, int32_t MaxLength); // Function GameplayFramework.FrameworkBlueprintLibrary.IsNameValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3911460
	bool IsMatchmakingUnlocked(struct UObject* WorldContextObject); // Function GameplayFramework.FrameworkBlueprintLibrary.IsMatchmakingUnlocked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39113b0
	bool IsMapInstalled(struct FString MapName); // Function GameplayFramework.FrameworkBlueprintLibrary.IsMapInstalled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3911310
	bool IsInDemo(); // Function GameplayFramework.FrameworkBlueprintLibrary.IsInDemo // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xed64d0
	bool IsInBattle(struct UObject* WorldContextObject); // Function GameplayFramework.FrameworkBlueprintLibrary.IsInBattle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3911290
	bool IsFullscreen(); // Function GameplayFramework.FrameworkBlueprintLibrary.IsFullscreen // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3911260
	bool IsFactExpressionValid(struct UObject* WorldContextObject, struct FFactExpression Expr); // Function GameplayFramework.FrameworkBlueprintLibrary.IsFactExpressionValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3911140
	bool IsEnemy(struct UObject* WorldContextObject, struct ABaseCharacter* character); // Function GameplayFramework.FrameworkBlueprintLibrary.IsEnemy // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3911080
	bool IsEditor(); // Function GameplayFramework.FrameworkBlueprintLibrary.IsEditor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x24b3f20
	bool IsConvoyTruckUnlcokedByStory(struct UObject* WorldContextObject); // Function GameplayFramework.FrameworkBlueprintLibrary.IsConvoyTruckUnlcokedByStory // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3911000
	bool IsConsolePlatform(); // Function GameplayFramework.FrameworkBlueprintLibrary.IsConsolePlatform // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x24b3f20
	bool IsChunkInstalled(int32_t ChunkId); // Function GameplayFramework.FrameworkBlueprintLibrary.IsChunkInstalled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3910f80
	bool IsAfterPrologue(struct UObject* WorldContextObject); // Function GameplayFramework.FrameworkBlueprintLibrary.IsAfterPrologue // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3910e40
	struct UBaseWorldStructure* GetWorldStructure(); // Function GameplayFramework.FrameworkBlueprintLibrary.GetWorldStructure // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3910e10
	struct TArray<struct FString> GetVariationNamesForArchetype(struct UFWAIArchetype* AIArchetype); // Function GameplayFramework.FrameworkBlueprintLibrary.GetVariationNamesForArchetype // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3910cf0
	float GetSkelMeshLastRenderTime(struct UObject* WorldContextObject, struct AActor* InActor); // Function GameplayFramework.FrameworkBlueprintLibrary.GetSkelMeshLastRenderTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3910c30
	struct FString GetNetRoleAsString(struct AActor* InActor); // Function GameplayFramework.FrameworkBlueprintLibrary.GetNetRoleAsString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3910b60
	float GetMontageSectionLenght(struct UObject* WorldContextObject, struct UAnimMontage* Montage, struct FName SectionName); // Function GameplayFramework.FrameworkBlueprintLibrary.GetMontageSectionLenght // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3910a70
	struct FName GetLastActiveObjectiveID(struct UObject* WorldContextObject, struct ABasePlayerController* PC); // Function GameplayFramework.FrameworkBlueprintLibrary.GetLastActiveObjectiveID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39109b0
	struct UBaseObjective* GetLastActiveObjective(struct UObject* WorldContextObject, struct ABasePlayerController* PC); // Function GameplayFramework.FrameworkBlueprintLibrary.GetLastActiveObjective // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39108f0
	struct TArray<struct FKey> GetKeysForAxis(struct APlayerController* PlayerController, struct FName AxisName, bool bGamepad); // Function GameplayFramework.FrameworkBlueprintLibrary.GetKeysForAxis // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39106f0
	struct FKey GetKeyForAction(struct APlayerController* PC, struct FName ActionName, bool bGamepad); // Function GameplayFramework.FrameworkBlueprintLibrary.GetKeyForAction // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39105b0
	struct FVector GetImpulseVector(struct AActor* FromActor, struct AActor* ToActor, float Magnitude, bool bNoVertical); // Function GameplayFramework.FrameworkBlueprintLibrary.GetImpulseVector // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3910450
	struct FString GetEngineBuildTime(); // Function GameplayFramework.FrameworkBlueprintLibrary.GetEngineBuildTime // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39100d0
	struct FVector GetDirectionFromOriginToCrosshair(struct UObject* WorldContextObject, struct FVector Origin, struct APawn* PawnInstigator); // Function GameplayFramework.FrameworkBlueprintLibrary.GetDirectionFromOriginToCrosshair // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x390ffb0
	bool GetCommandLineArgument(struct UObject* WorldContextObject, struct FString Key, struct FString Value); // Function GameplayFramework.FrameworkBlueprintLibrary.GetCommandLineArgument // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x390fe30
	struct TArray<struct ABasePlayerController*> GetAllPlayerControllers(struct UObject* WorldContextObject); // Function GameplayFramework.FrameworkBlueprintLibrary.GetAllPlayerControllers // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x390fd60
	void GetAdditionalDataFromTakeHitInfo(struct FTakeHitInfo TakeHitInfo, struct FName HitBoneName, struct UPrimitiveComponent* HitComponent, struct UObject* DamageTypeClass); // Function GameplayFramework.FrameworkBlueprintLibrary.GetAdditionalDataFromTakeHitInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x390fb30
	void FadeAllPlayers(struct UObject* WorldContextObject, bool bFadeIn, bool bFadeAudio, bool bSendRTMPEvent); // Function GameplayFramework.FrameworkBlueprintLibrary.FadeAllPlayers // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x390f9f0
	bool EvalFactExpression(struct UObject* WorldContextObject, struct FFactExpression Expr, struct APlayerController* PlayerController); // Function GameplayFramework.FrameworkBlueprintLibrary.EvalFactExpression // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x390f890
	void EndCutsceneOrDialogue(struct ABasePlayerController* BasePlayerController, struct FLatentActionInfo LatentInfo); // Function GameplayFramework.FrameworkBlueprintLibrary.EndCutsceneOrDialogue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x390f7b0
	void EnableWorldRendering(struct UObject* WorldContextObject, bool bEnable); // Function GameplayFramework.FrameworkBlueprintLibrary.EnableWorldRendering // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x390f6f0
	void DisableSequenceCameraUpdate(struct UObject* WorldContextObject, bool bDisable); // Function GameplayFramework.FrameworkBlueprintLibrary.DisableSequenceCameraUpdate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x390f630
	void DeactivateAllPlayerStarts(struct UObject* WorldContextObject); // Function GameplayFramework.FrameworkBlueprintLibrary.DeactivateAllPlayerStarts // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x390f5c0
	struct FGlobalWindInfluenceHandle CreateSphericalWindWave(struct UObject* WorldContextObject, struct FVector Location, float StartStrength, float EndStrength, float WaveOffset, float WaveMoveSpeed, float WaveRange, float WaveFrequency, float WaveDamping); // Function GameplayFramework.FrameworkBlueprintLibrary.CreateSphericalWindWave // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390f340
	void CompleteAllQuests(struct UObject* WorldContextObject); // Function GameplayFramework.FrameworkBlueprintLibrary.CompleteAllQuests // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x390f2d0
	void CompleteActiveObjectives(struct UObject* WorldContextObject, bool bOnlyTrackedQuest); // Function GameplayFramework.FrameworkBlueprintLibrary.CompleteActiveObjectives // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x390f210
	void ClientJoinGame(struct UObject* WorldContextObject, struct FString InPlayerName, struct FString InCharacterName, struct FString InHostIP, bool bWasFromInvite); // Function GameplayFramework.FrameworkBlueprintLibrary.ClientJoinGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x390ef90
	void ChangeRegionSeamless(struct UObject* WorldContextObject, struct FGameplayTag FromRegion, struct FGameplayTag ToRegion, struct FName InCinematicLevelName, struct TSoftObjectPtr<struct ULevelSequence> InCinematicSequence, struct TArray<struct AActor*> ActorsToHide, int32_t ConnectionNumber, bool bNoFadeOut, bool bNoFadeIn, enum class ESequenceWeaponVisibility InWeaponsVisibility, bool bHideHeadGear, int32_t LightScenarioNumber, struct UStreamableCinematic* StreamableCinematicToPass, bool bNoTeleport, bool bNoPlayerStopping, bool bHideHandGear, bool bAlternativeVersion, bool bNoDestinationNotify); // Function GameplayFramework.FrameworkBlueprintLibrary.ChangeRegionSeamless // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x390e9c0
	bool ChangeRegion(struct UObject* WorldContextObject, struct FGameplayTag FromRegion, struct FGameplayTag ToRegion, int32_t ConnectionNumber, bool bNoFadeOut, bool bNoFadeIn, int32_t LightScenarioNumber, struct UStreamableCinematic* StreamableCinematicToPass, bool bNoTeleport, bool bNoPlayerStopping, bool bNoDestinationNotify); // Function GameplayFramework.FrameworkBlueprintLibrary.ChangeRegion // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x390e6b0
	void ChangeLightScenario(struct UObject* WorldContextObject, int32_t NewLightScenarioNumber, bool bNoFadeOut, bool bNoFadeIn, struct FLatentActionInfo LatentInfo); // Function GameplayFramework.FrameworkBlueprintLibrary.ChangeLightScenario // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x390e510
	bool CanFullscreen(); // Function GameplayFramework.FrameworkBlueprintLibrary.CanFullscreen // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xed64d0
	void BreakAnalogInputEvent(struct FAnalogInputEvent AnalogEvent, enum class EAnalogValueType OutAnalog, float OutValue); // Function GameplayFramework.FrameworkBlueprintLibrary.BreakAnalogInputEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x390e370
	void AsyncSpawnExplosionFromTemplateAtImpactPoint(struct UExplosionTemplate* InTemplate, struct FHitResult InImpact, struct AController* InInstigator, struct AActor* InDamageCauser, struct TArray<struct AActor*> IgnoreActors, float InLevelOverride, struct FDelegate OnExecuteDelegate); // Function GameplayFramework.FrameworkBlueprintLibrary.AsyncSpawnExplosionFromTemplateAtImpactPoint // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x390e010
	void AsyncSpawnExplosionFromTemplate(struct UExplosionTemplate* InTemplate, struct FVector InOrigin, struct AController* InInstigator, struct AActor* InDamageCauser, struct TArray<struct AActor*> IgnoreActors, float InLevelOverride, struct FDelegate OnExecuteDelegate); // Function GameplayFramework.FrameworkBlueprintLibrary.AsyncSpawnExplosionFromTemplate // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390dd60
	void AsyncApplyRadialDamageWithFalloffWithDelegates(struct UObject* WorldContextObject, struct FDelegate PreExecuteDelegate, struct FDelegate PostExecuteDelegate, float BaseDamage, float MinimumDamage, struct FVector Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, struct UDamageType* DamageTypeClass, struct TArray<struct AActor*> IgnoreActors, struct AActor* DamageCauser, struct AController* InstigatedByController, enum class ECollisionChannel DamagePreventionChannel); // Function GameplayFramework.FrameworkBlueprintLibrary.AsyncApplyRadialDamageWithFalloffWithDelegates // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390d880
	void AsyncApplyRadialDamageWithFalloffWithDelegate(struct UObject* WorldContextObject, struct FDelegate OnExecuteDelegate, float BaseDamage, float MinimumDamage, struct FVector Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, struct UDamageType* DamageTypeClass, struct TArray<struct AActor*> IgnoreActors, struct AActor* DamageCauser, struct AController* InstigatedByController, enum class ECollisionChannel DamagePreventionChannel); // Function GameplayFramework.FrameworkBlueprintLibrary.AsyncApplyRadialDamageWithFalloffWithDelegate // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390d460
	void AsyncApplyRadialDamageWithFalloff(struct UObject* WorldContextObject, float BaseDamage, float MinimumDamage, struct FVector Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, struct UDamageType* DamageTypeClass, struct TArray<struct AActor*> IgnoreActors, struct AActor* DamageCauser, struct AController* InstigatedByController, enum class ECollisionChannel DamagePreventionChannel); // Function GameplayFramework.FrameworkBlueprintLibrary.AsyncApplyRadialDamageWithFalloff // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390d0f0
	void AsyncApplyRadialDamageWithDelegates(struct UObject* WorldContextObject, struct FDelegate PreExecuteDelegate, struct FDelegate PostExecuteDelegate, float BaseDamage, struct FVector Origin, float DamageRadius, struct UDamageType* DamageTypeClass, struct TArray<struct AActor*> IgnoreActors, struct AActor* DamageCauser, struct AController* InstigatedByController, bool bDoFullDamage, enum class ECollisionChannel DamagePreventionChannel); // Function GameplayFramework.FrameworkBlueprintLibrary.AsyncApplyRadialDamageWithDelegates // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390cc90
	void AsyncApplyRadialDamageWithDelegate(struct UObject* WorldContextObject, struct FDelegate OnExecuteDelegate, float BaseDamage, struct FVector Origin, float DamageRadius, struct UDamageType* DamageTypeClass, struct TArray<struct AActor*> IgnoreActors, struct AActor* DamageCauser, struct AController* InstigatedByController, bool bDoFullDamage, enum class ECollisionChannel DamagePreventionChannel); // Function GameplayFramework.FrameworkBlueprintLibrary.AsyncApplyRadialDamageWithDelegate // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390c8e0
	void AsyncApplyRadialDamage(struct UObject* WorldContextObject, float BaseDamage, struct FVector Origin, float DamageRadius, struct UDamageType* DamageTypeClass, struct TArray<struct AActor*> IgnoreActors, struct AActor* DamageCauser, struct AController* InstigatedByController, bool bDoFullDamage, enum class ECollisionChannel DamagePreventionChannel); // Function GameplayFramework.FrameworkBlueprintLibrary.AsyncApplyRadialDamage // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390c5f0
	void AddSphericalDistanceDeformation(struct UObject* WorldContextObject, struct FVector Center, float Radius, float Speed); // Function GameplayFramework.FrameworkBlueprintLibrary.AddSphericalDistanceDeformation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390c4a0
	void AddSphericalDeformation(struct UObject* WorldContextObject, struct FVector Center, float InitialRadius, float MaxRadius, float Strength, float Speed, enum class EDeformationType DeformationType); // Function GameplayFramework.FrameworkBlueprintLibrary.AddSphericalDeformation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390c2a0
	void AddDynamicDeformation(struct UObject* WorldContextObject, struct FVector Center, float Strength, float Range, float Speed); // Function GameplayFramework.FrameworkBlueprintLibrary.AddDynamicDeformation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390c110
	void AddDeformationSphere(struct UObject* WorldContextObject, struct FVector Position, float Radius, float LifeTime); // Function GameplayFramework.FrameworkBlueprintLibrary.AddDeformationSphere // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390bf00
	void AddDeformations(struct UObject* WorldContextObject, struct TArray<struct FVector> Points); // Function GameplayFramework.FrameworkBlueprintLibrary.AddDeformations // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x390c050
	void AddDeformationCone(struct UObject* WorldContextObject, struct FVector Position, struct FVector Direction, float Length, float LengthVelocity, float MaxLength, float HalfAngleDegrees); // Function GameplayFramework.FrameworkBlueprintLibrary.AddDeformationCone // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390bce0
	void AddConeDeformation(struct UObject* WorldContextObject, struct FVector Position, struct FVector Direction, float InitialLength, float MaxLength, float HalfAngleDegrees, float Strength, float LengthVelocity, enum class EDeformationType DeformationType); // Function GameplayFramework.FrameworkBlueprintLibrary.AddConeDeformation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390ba40
	void AddCapsuleDistanceDeformation(struct UObject* WorldContextObject, struct FVector EndAPosition, struct FVector EndBPosition, float Radius); // Function GameplayFramework.FrameworkBlueprintLibrary.AddCapsuleDistanceDeformation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390b8f0
	void AddCapsuleDeformation(struct UObject* WorldContextObject, struct FVector EndAPosition, struct FVector EndBPosition, float Radius, float Strength, float Speed, enum class EDeformationType DeformationType); // Function GameplayFramework.FrameworkBlueprintLibrary.AddCapsuleDeformation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x390b6e0
};

// Class GameplayFramework.BaseCameraManager
// Size: 0x2ac0 (Inherited: 0x2880)
struct ABaseCameraManager : APlayerCameraManager {
	struct FInCombatCameraOffset BattleCameraOffset; // 0x2878(0xa4)
	struct UCameraShake* TraumaShakeClass; // 0x2920(0x08)
	float TraumaDecreasePerSecond; // 0x2928(0x04)
	struct FString ActiveSpringArmState; // 0x2930(0x10)
	char UnknownData_2940[0x4]; // 0x2940(0x04)
	char UnknownData_2944_0 : 7; // 0x2944(0x01)
	bool bTransitionFadeActive : 1; // 0x2944(0x01)
	char UnknownData_2945[0x1b]; // 0x2945(0x1b)
	float ConfigPlayerFOV; // 0x2960(0x04)
	char UnknownData_2964[0xb4]; // 0x2964(0xb4)
	struct UCameraStateMachine* CameraStateMachineClass; // 0x2a18(0x08)
	struct UCameraStateMachine* ActiveCameraStateMachine; // 0x2a20(0x08)
	char UnknownData_2A28[0x8]; // 0x2a28(0x08)
	struct UCameraState* ActiveCameraState; // 0x2a30(0x08)
	struct UCameraShake* TraumaShake; // 0x2a38(0x08)
	struct TMap<struct UCameraStateMachine*, struct UCameraStateMachine*> DefaultCachedCameraStateMachines; // 0x2a40(0x50)
	char UnknownData_2A90[0x30]; // 0x2a90(0x30)
};

// Class GameplayFramework.CameraState
// Size: 0x2c0 (Inherited: 0x48)
struct UCameraState : UCameraModifier {
	struct TArray<struct UCameraTransitionRules*> Transitions; // 0x48(0x10)
	struct FCameraStateSettings DefaultStateSettings; // 0x58(0x98)
	char UnknownData_F0[0x18]; // 0xf0(0x18)
	struct TArray<struct FCameraInternalStateSettings> AdditionalStateSettings; // 0x108(0x10)
	char UnknownData_118_0 : 7; // 0x118(0x01)
	bool bUseBattleOffset : 1; // 0x118(0x01)
	char UnknownData_119_0 : 7; // 0x119(0x01)
	bool bUseCameraVolumeOffset : 1; // 0x119(0x01)
	char UnknownData_11A_0 : 7; // 0x11a(0x01)
	bool bIgnoreLookInput : 1; // 0x11a(0x01)
	char UnknownData_11B[0x35]; // 0x11b(0x35)
	struct ABaseCameraManager* BaseCameraManager; // 0x150(0x08)
	struct UBaseSpringArmComponent* SpringArmComponent; // 0x158(0x08)
	struct ABaseCharacter* Player; // 0x160(0x08)
	struct ABasePlayerController* PlayerController; // 0x168(0x08)
	struct UCameraComponent* CameraComp; // 0x170(0x08)
	struct UCurveFloat* BlendInCurve; // 0x178(0x08)
	struct UCurveFloat* BlendOutCurve; // 0x180(0x08)
	enum class EAlphaBlendOption CameraStateBlendType; // 0x188(0x01)
	char UnknownData_189[0x47]; // 0x189(0x47)
	struct TMap<struct UCameraTransitionRules*, struct UCameraTransitionRules*> CachedCameraTransition; // 0x1d0(0x50)
	char UnknownData_220[0xa0]; // 0x220(0xa0)

	void OnStateEnd(); // Function GameplayFramework.CameraState.OnStateEnd // (Native|Event|Public|BlueprintEvent) // @ game+0x38fc5e0
	void OnStateBegin(); // Function GameplayFramework.CameraState.OnStateBegin // (Native|Event|Public|BlueprintEvent) // @ game+0x33bc930
	void ModifyCameraState(float DeltaTime, struct FMinimalViewInfo InOutPOV); // Function GameplayFramework.CameraState.ModifyCameraState // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x38fc470
};

// Class GameplayFramework.CameraState_Global
// Size: 0x2d0 (Inherited: 0x2c0)
struct UCameraState_Global : UCameraState {
	float AlphaInForTransitionRules; // 0x2c0(0x04)
	float AlphaOutForTransitionRules; // 0x2c4(0x04)
	enum class EAlphaBlendOption BlendTypeIn; // 0x2c8(0x01)
	enum class EAlphaBlendOption BlendTypeOut; // 0x2c9(0x01)
	enum class ECrosshairDragType CrosshairDragTypeIn; // 0x2ca(0x01)
	enum class ECrosshairDragType CrosshairDragTypeOut; // 0x2cb(0x01)
	char UnknownData_2CC[0x4]; // 0x2cc(0x04)
};

// Class GameplayFramework.CameraStateMachine
// Size: 0x1a8 (Inherited: 0x28)
struct UCameraStateMachine : UObject {
	struct UCameraState* DefaultStateClass; // 0x28(0x08)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bUseDefaultStateBlendInTime : 1; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float AlphaInForTransitionRules; // 0x34(0x04)
	float AlphaOutForTransitionRules; // 0x38(0x04)
	enum class EAlphaBlendOption BlendTypeIn; // 0x3c(0x01)
	enum class EAlphaBlendOption BlendTypeOut; // 0x3d(0x01)
	char UnknownData_3E[0x6a]; // 0x3e(0x6a)
	struct ABaseCameraManager* BaseCameraManager; // 0xa8(0x08)
	struct UBaseSpringArmComponent* SpringArmComponent; // 0xb0(0x08)
	struct UCameraState* ActiveState; // 0xb8(0x08)
	struct ABasePlayerController* PlayerController; // 0xc0(0x08)
	struct ABaseCharacter* PlayerCharacter; // 0xc8(0x08)
	struct UCameraComponent* Camera; // 0xd0(0x08)
	struct TMap<struct UCameraState*, struct UCameraState*> DefaultCachedCameraStates; // 0xd8(0x50)
	struct TMap<struct UCameraState*, struct UCameraState*> PresetCachedCameraStates; // 0x128(0x50)
	struct UCameraTransitionRules* GlobalStateTransitionRules; // 0x178(0x08)
	char UnknownData_180[0x28]; // 0x180(0x28)
};

// Class GameplayFramework.CameraTransitionRules
// Size: 0x50 (Inherited: 0x28)
struct UCameraTransitionRules : UObject {
	float BlendInTime; // 0x28(0x04)
	enum class EAlphaBlendOption BlendType; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	struct UCurveFloat* BlendInCurve; // 0x30(0x08)
	struct UCameraState* NextState; // 0x38(0x08)
	enum class ECrosshairDragType CrosshairDragType; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
	struct ABaseCharacter* Player; // 0x48(0x08)

	bool CanTransition(); // Function GameplayFramework.CameraTransitionRules.CanTransition // (Native|Event|Public|BlueprintEvent|Const) // @ game+0xe8a5d0
};

// Class GameplayFramework.ChatterManager
// Size: 0x100 (Inherited: 0x28)
struct UChatterManager : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct TArray<struct UChatterSpeaker*> Speakers; // 0x30(0x10)
	int32_t MaxActiveSounds; // 0x40(0x04)
	float CancelFadeOutDuration; // 0x44(0x04)
	float CancelFadeOutVolume; // 0x48(0x04)
	char UnknownData_4C[0x14]; // 0x4c(0x14)
	struct TMap<struct FName, struct UDataTable*> SpeakersTable; // 0x60(0x50)
	char UnknownData_B0[0x20]; // 0xb0(0x20)
	struct UDataTable* GlobalSettingsTable; // 0xd0(0x08)
	struct TArray<struct UChatterComponent*> ChatterComponents; // 0xd8(0x10)
	char UnknownData_E8[0x8]; // 0xe8(0x08)
	struct TArray<struct FChatterRequest> Requests; // 0xf0(0x10)

	void RequestChatter(struct FName SpeakerID, struct FName VoiceTypeID, struct AActor* Source, struct TArray<struct AActor*> Targets, float VolumeMultiplier, float PitchMultiplier); // Function GameplayFramework.ChatterManager.RequestChatter // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39061b0
};

// Class GameplayFramework.BasePlayerController
// Size: 0x930 (Inherited: 0x648)
struct ABasePlayerController : AOnlinePlayerController {
	char UnknownData_648[0x8]; // 0x648(0x08)
	struct FMulticastInlineDelegate OnCinematicModeChanged; // 0x650(0x10)
	struct UPlayDialogueRequest* DialogueRequest; // 0x660(0x08)
	char UnknownData_668[0x28]; // 0x668(0x28)
	struct UPlayMovieWidget* PlayMovieWidgetClass; // 0x690(0x08)
	char UnknownData_698[0x4]; // 0x698(0x04)
	struct FVector ControlInputVector; // 0x69c(0x0c)
	struct UPlayMovieWidget* PlayMovieWidget; // 0x6a8(0x08)
	struct FMulticastInlineDelegate OnFrameworkSequenceEnded; // 0x6b0(0x10)
	struct FMulticastInlineDelegate OnPlayerRespawn; // 0x6c0(0x10)
	char UnknownData_6D0[0x8]; // 0x6d0(0x08)
	struct FMulticastInlineDelegate OnTeamWipedOutDelegate; // 0x6d8(0x10)
	struct FMulticastInlineDelegate OnServerRespawnPlayerDelegate; // 0x6e8(0x10)
	struct FMulticastInlineDelegate OnPlayerJoinedReady; // 0x6f8(0x10)
	float RespawnFadeInDuration; // 0x708(0x04)
	float RespawnFadeOutDuration; // 0x70c(0x04)
	struct UFrameworkSequencePlayer* CurrentSequence; // 0x710(0x08)
	struct TArray<struct ULevelSequence*> PendingSequences; // 0x718(0x10)
	struct FMulticastInlineDelegate OnQuestManagerReady; // 0x728(0x10)
	char UnknownData_738[0x98]; // 0x738(0x98)
	struct AQuestManager* QuestManagerClass; // 0x7d0(0x08)
	struct AQuestManager* QuestManager; // 0x7d8(0x08)
	struct FMulticastInlineDelegate OnQuestManagerReplicated; // 0x7e0(0x10)
	struct ADialogueManager* DialogueManagerClass; // 0x7f0(0x08)
	struct ADialogueManager* DialogueManager; // 0x7f8(0x08)
	struct UFWAdaptiveMusicControllerBase* MusicControllerClass; // 0x800(0x08)
	struct UFWAdaptiveMusicControllerBase* MusicController; // 0x808(0x08)
	char UnknownData_810_0 : 7; // 0x810(0x01)
	bool bIsBattleMusicPlaying : 1; // 0x810(0x01)
	char UnknownData_811_0 : 7; // 0x811(0x01)
	bool bUIBlocked : 1; // 0x811(0x01)
	char UnknownData_812[0x6]; // 0x812(0x06)
	struct FWeakObjectPtr<struct AActor> SyncActor; // 0x818(0x08)
	char UnknownData_820_0 : 7; // 0x820(0x01)
	bool bActionPromptAllowed : 1; // 0x820(0x01)
	char UnknownData_821[0x7]; // 0x821(0x07)
	struct FWeakObjectPtr<struct UInteractionComponent> InteractingWith; // 0x828(0x08)
	float InteractPromptPressTime; // 0x830(0x04)
	char UnknownData_834[0x1c]; // 0x834(0x1c)
	struct UQuickTimeEventInputComponent* QuickTimeEventInputComponent; // 0x850(0x08)
	struct FMulticastInlineDelegate OnInputTypeChange; // 0x858(0x10)
	float LastInputTime; // 0x868(0x04)
	float AFKTimeoutSeconds; // 0x86c(0x04)
	char UnknownData_870_0 : 7; // 0x870(0x01)
	bool bIsPlayerAFK : 1; // 0x870(0x01)
	char UnknownData_871[0x1f]; // 0x871(0x1f)
	struct UPlayerInputRecorder* InputRecorder; // 0x890(0x08)
	struct UInputComponent* CinematicInputComponent; // 0x898(0x08)
	struct FMulticastInlineDelegate OnSaveGameNotificationVisibilityChanged; // 0x8a0(0x10)
	float MinSaveGameDuration; // 0x8b0(0x04)
	char UnknownData_8B4[0x14]; // 0x8b4(0x14)
	struct FMulticastInlineDelegate OnCloseMenuRequested; // 0x8c8(0x10)
	char UnknownData_8D8[0x8]; // 0x8d8(0x08)
	struct FMulticastInlineDelegate OnNewAreaDiscovered; // 0x8e0(0x10)
	struct UChatterPlayerMapping* ChatterMapping; // 0x8f0(0x08)
	char UnknownData_8F8_0 : 7; // 0x8f8(0x01)
	bool bIsLevelReloading : 1; // 0x8f8(0x01)
	char UnknownData_8F9[0x3]; // 0x8f9(0x03)
	struct FName PreviousRegion; // 0x8fc(0x08)
	char UnknownData_904[0x2c]; // 0x904(0x2c)

	void WorldMapTravelAnimationHasEnded(); // Function GameplayFramework.BasePlayerController.WorldMapTravelAnimationHasEnded // (Final|Native|Public|BlueprintCallable) // @ game+0x38f10a0
	bool WantsToCoopSync(); // Function GameplayFramework.BasePlayerController.WantsToCoopSync // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38f1070
	void UpdateLifeCycleSessionMemberState(struct FLifeCycleSessionMemberState SessionState); // Function GameplayFramework.BasePlayerController.UpdateLifeCycleSessionMemberState // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f0fe0
	void StopPlayingRecordedInput(); // Function GameplayFramework.BasePlayerController.StopPlayingRecordedInput // (Exec|Native|Public|BlueprintCallable) // @ game+0x38f0fb0
	void StopInputRecording(); // Function GameplayFramework.BasePlayerController.StopInputRecording // (Exec|Native|Public) // @ game+0x38f0f80
	void StartInputRecording(bool bForAllConnectedPlayers); // Function GameplayFramework.BasePlayerController.StartInputRecording // (Exec|Native|Public) // @ game+0x38f0ef0
	void SetUIBlocked(bool bInBlockUI); // Function GameplayFramework.BasePlayerController.SetUIBlocked // (Final|Native|Public|BlueprintCallable) // @ game+0x38f0e70
	void SetPlayedVOTriggerServer(struct AVOTrigger* VOTrigger, bool bPlayed); // Function GameplayFramework.BasePlayerController.SetPlayedVOTriggerServer // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f0da0
	void SetInvertAxis(bool bInvert); // Function GameplayFramework.BasePlayerController.SetInvertAxis // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x38f0d10
	void SetActionPromptAllowed(bool bInActionPromptAllowed); // Function GameplayFramework.BasePlayerController.SetActionPromptAllowed // (Final|Native|Public|BlueprintCallable) // @ game+0x38f0c90
	void ServerUnlockQuest(struct UBaseQuest* Inquest); // Function GameplayFramework.BasePlayerController.ServerUnlockQuest // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x38f0c00
	void ServerTryInteract(struct UInteractionComponent* Interaction); // Function GameplayFramework.BasePlayerController.ServerTryInteract // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x38f0b40
	void ServerSetCoopSyncActor(struct AActor* InSyncActor); // Function GameplayFramework.BasePlayerController.ServerSetCoopSyncActor // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x38f0ab0
	void ServerRollbackQuest(struct UBaseQuest* Inquest); // Function GameplayFramework.BasePlayerController.ServerRollbackQuest // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f0a20
	void ServerRespawnPlayer(enum class ERespawnReason RespawnReason); // Function GameplayFramework.BasePlayerController.ServerRespawnPlayer // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f09a0
	void ServerProcessDialogueEvent(struct FName EventName, struct TArray<struct UObject*> Contexts); // Function GameplayFramework.BasePlayerController.ServerProcessDialogueEvent // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f08c0
	void ServerOnInteractionStarted(struct UInteractionComponent* Interaction); // Function GameplayFramework.BasePlayerController.ServerOnInteractionStarted // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f0830
	void ServerOnInteractionNotify(struct FName NotifyName, struct UObject* ApproachTarget); // Function GameplayFramework.BasePlayerController.ServerOnInteractionNotify // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f0760
	void ServerOnInteractionInterrupted(struct UInteractionComponent* Interaction); // Function GameplayFramework.BasePlayerController.ServerOnInteractionInterrupted // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f06d0
	void ServerOnHoldInteractionStartInterruption(); // Function GameplayFramework.BasePlayerController.ServerOnHoldInteractionStartInterruption // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x169e250
	void ServerOnFrameworkSequenceEnded(struct ABasePlayerController* PC, struct ULevelSequence* LevelSequence); // Function GameplayFramework.BasePlayerController.ServerOnFrameworkSequenceEnded // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f0600
	void ServerNewAreaDiscovered(struct FGameplayTag InTag); // Function GameplayFramework.BasePlayerController.ServerNewAreaDiscovered // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f0570
	void ServerForceCoopSync(); // Function GameplayFramework.BasePlayerController.ServerForceCoopSync // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x38f0550
	void ServerFailQuest(struct UBaseQuest* Inquest, enum class EQuestFailReason FailReason); // Function GameplayFramework.BasePlayerController.ServerFailQuest // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x38f0480
	void ServerEndCurrentMovieForAllPlayers(); // Function GameplayFramework.BasePlayerController.ServerEndCurrentMovieForAllPlayers // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x15b4b70
	void ServerEndCurrentDialogueForAllPlayers(); // Function GameplayFramework.BasePlayerController.ServerEndCurrentDialogueForAllPlayers // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x15a7570
	void ServerCorrectPlayerLocation(struct FVector NewLocation); // Function GameplayFramework.BasePlayerController.ServerCorrectPlayerLocation // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults) // @ game+0x38f03f0
	void ServerClaimInteractionComponent(struct UInteractionComponent* InInteraction, bool bClaim); // Function GameplayFramework.BasePlayerController.ServerClaimInteractionComponent // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x38f02f0
	void ServerCheckQuestIsAlreadyInProgress(struct UBaseQuest* quest); // Function GameplayFramework.BasePlayerController.ServerCheckQuestIsAlreadyInProgress // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f0260
	void ServerCheatAll(struct FString Msg); // Function GameplayFramework.BasePlayerController.ServerCheatAll // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x38f01c0
	void ServerCheat(struct FString Msg); // Function GameplayFramework.BasePlayerController.ServerCheat // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x38f0120
	void ServerCancelQuest(struct UBaseQuest* Inquest); // Function GameplayFramework.BasePlayerController.ServerCancelQuest // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x38f0090
	void ServerCallGlobalEventWithParams(struct FName EventName, struct FGlobalEventParams EventParams); // Function GameplayFramework.BasePlayerController.ServerCallGlobalEventWithParams // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x38eff60
	void ServerCallGlobalEvent(struct FName EventName); // Function GameplayFramework.BasePlayerController.ServerCallGlobalEvent // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x169e9a0
	void ServerBeginSharedQuest(struct FName QuestID); // Function GameplayFramework.BasePlayerController.ServerBeginSharedQuest // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38efed0
	void ServerBeginQuest(struct UBaseQuest* Inquest); // Function GameplayFramework.BasePlayerController.ServerBeginQuest // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable) // @ game+0x38efe40
	void SaveRecordedInputToFile(bool bForAllConnectedPlayers); // Function GameplayFramework.BasePlayerController.SaveRecordedInputToFile // (Exec|Native|Public) // @ game+0x38efdb0
	void SaveGameNotificationVisibilityChanged__DelegateSignature(bool bVisible); // DelegateFunction GameplayFramework.BasePlayerController.SaveGameNotificationVisibilityChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	void RequestChatter(enum class EPlayerChatterType Type); // Function GameplayFramework.BasePlayerController.RequestChatter // (Final|Native|Public|BlueprintCallable) // @ game+0x38efd30
	void PlayVOServer(struct FName Tag, enum class EVOPriority Priority, enum class EVOListType Type, float Delay); // Function GameplayFramework.BasePlayerController.PlayVOServer // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38efbf0
	void PlayRecordedInputWithCorrection(int32_t InputCorrectionStrategyBitMask); // Function GameplayFramework.BasePlayerController.PlayRecordedInputWithCorrection // (Native|Public|BlueprintCallable) // @ game+0x38efb60
	void PlayRecordedInput(); // Function GameplayFramework.BasePlayerController.PlayRecordedInput // (Exec|Native|Public) // @ game+0x38efb30
	void PlayLineClient(struct FChatterPlayData Data); // Function GameplayFramework.BasePlayerController.PlayLineClient // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x38efa80
	void OnShowWorldMapTravelAnimation(struct FName FromRegion, struct FName ToRegion); // Function GameplayFramework.BasePlayerController.OnShowWorldMapTravelAnimation // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void OnRep_QuestManager(); // Function GameplayFramework.BasePlayerController.OnRep_QuestManager // (Native|Protected) // @ game+0x38efa60
	void OnRep_IsBattleMusicPlaying(); // Function GameplayFramework.BasePlayerController.OnRep_IsBattleMusicPlaying // (Final|Native|Protected) // @ game+0x38efa40
	void OnQuestManagerReplicated__DelegateSignature(); // DelegateFunction GameplayFramework.BasePlayerController.OnQuestManagerReplicated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	void OnQuestManagerReady__DelegateSignature(); // DelegateFunction GameplayFramework.BasePlayerController.OnQuestManagerReady__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	void OnNewAreaDiscovered__DelegateSignature(struct FGameplayTag InTag, bool bFirstTime); // DelegateFunction GameplayFramework.BasePlayerController.OnNewAreaDiscovered__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1a35c70
	void OnCloseMenuRequested__DelegateSignature(); // DelegateFunction GameplayFramework.BasePlayerController.OnCloseMenuRequested__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	void OnCinematicModeChanged__DelegateSignature(bool bCinematicMode); // DelegateFunction GameplayFramework.BasePlayerController.OnCinematicModeChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	void OnBeingKickedFromParty(struct FText KickReason); // Function GameplayFramework.BasePlayerController.OnBeingKickedFromParty // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void OnBattleMusicStatusChanged(); // Function GameplayFramework.BasePlayerController.OnBattleMusicStatusChanged // (Final|Native|Public) // @ game+0x38efa20
	void NotifyHUDScaleChanged(float InNewHUDScale); // Function GameplayFramework.BasePlayerController.NotifyHUDScaleChanged // (Final|Native|Public) // @ game+0x38ef9a0
	void LoadRecordedInputFromFile(struct FString Filename); // Function GameplayFramework.BasePlayerController.LoadRecordedInputFromFile // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x15bf8a0
	void LoadLastRecordedInputFromFile(int32_t FileIndexToLoad); // Function GameplayFramework.BasePlayerController.LoadLastRecordedInputFromFile // (Final|Exec|Native|Public) // @ game+0x15c6f70
	bool IsUIBlocked(); // Function GameplayFramework.BasePlayerController.IsUIBlocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef8d0
	bool IsCameraFadeActive(float OutFadeAmount); // Function GameplayFramework.BasePlayerController.IsCameraFadeActive // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef7f0
	bool IsAxisInverted(); // Function GameplayFramework.BasePlayerController.IsAxisInverted // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef7c0
	bool IsActionPromptAllowed(); // Function GameplayFramework.BasePlayerController.IsActionPromptAllowed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef7a0
	struct AQuestManager* GetQuestManager(); // Function GameplayFramework.BasePlayerController.GetQuestManager // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef6a0
	struct UFWAdaptiveMusicControllerBase* GetMusicController(); // Function GameplayFramework.BasePlayerController.GetMusicController // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef650
	struct APawn* GetLastOwnedPawn(); // Function GameplayFramework.BasePlayerController.GetLastOwnedPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef610
	float GetInteractPromptHoldPercent(); // Function GameplayFramework.BasePlayerController.GetInteractPromptHoldPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef5e0
	float GetInteractPromptHoldDuration(); // Function GameplayFramework.BasePlayerController.GetInteractPromptHoldDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef5b0
	struct ADialogueManager* GetDialogueManager(); // Function GameplayFramework.BasePlayerController.GetDialogueManager // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef500
	enum class EInputType GetCurrentInputType(); // Function GameplayFramework.BasePlayerController.GetCurrentInputType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef4d0
	void ForceRotation(struct FRotator NewRotation); // Function GameplayFramework.BasePlayerController.ForceRotation // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x38ef440
	void EnableWorldRendering(bool bEnable); // Function GameplayFramework.BasePlayerController.EnableWorldRendering // (Final|Exec|Native|Public) // @ game+0x38ef320
	void DebugDisplayTeammateNames(bool bDisplay); // Function GameplayFramework.BasePlayerController.DebugDisplayTeammateNames // (Final|Exec|Native|Protected) // @ game+0x38ef290
	void DebugDisplayNetMode(bool bDisplay); // Function GameplayFramework.BasePlayerController.DebugDisplayNetMode // (Final|Exec|Native|Protected) // @ game+0x38ef200
	void ClientStartInputRecording(); // Function GameplayFramework.BasePlayerController.ClientStartInputRecording // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x38ef150
	void ClientStartCameraFade(float FromAlpha, float ToAlpha, float DURATION, struct FLinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool bSendRTMPEvent); // Function GameplayFramework.BasePlayerController.ClientStartCameraFade // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // @ game+0x38eef30
	void ClientShowLoadingMovie(bool bShow, struct FString LoadingMovieOverride); // Function GameplayFramework.BasePlayerController.ClientShowLoadingMovie // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x38eee40
	void ClientSetAimRotation(struct FRotator DesiredRotation, float DURATION, bool bOnlyYaw); // Function GameplayFramework.BasePlayerController.ClientSetAimRotation // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // @ game+0x38eed30
	void ClientSaveRecordedInputToFile(); // Function GameplayFramework.BasePlayerController.ClientSaveRecordedInputToFile // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x38eed10
	void ClientPlayFrameworkSequence(struct UObject* ContextObject, struct ULevelSequence* InLevelSequence, bool bReplaceActors, bool bAsDialogue); // Function GameplayFramework.BasePlayerController.ClientPlayFrameworkSequence // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x38eebc0
	void ClientPlayDialogueUsingRequest(); // Function GameplayFramework.BasePlayerController.ClientPlayDialogueUsingRequest // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x38eeba0
	void ClientPlayCinematic(struct FFrameworkPlayerPlayParams Params); // Function GameplayFramework.BasePlayerController.ClientPlayCinematic // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x38ee980
	void ClientOnTeamWipedOut(); // Function GameplayFramework.BasePlayerController.ClientOnTeamWipedOut // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x38ee960
	void ClientOnPlayerRespawned(enum class ERespawnReason RespawnReason, bool bHandleFade); // Function GameplayFramework.BasePlayerController.ClientOnPlayerRespawned // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x38ee890
	void ClientInterruptInteraction(); // Function GameplayFramework.BasePlayerController.ClientInterruptInteraction // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x1579020
	void ClientHandleAutoRespawn(float RespawnDelay, bool bHandleFade); // Function GameplayFramework.BasePlayerController.ClientHandleAutoRespawn // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x38ee7c0
	void ClientForceRotation(struct FRotator NewRotation); // Function GameplayFramework.BasePlayerController.ClientForceRotation // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // @ game+0x38ee740
	void ClientEndCurrentMovie(); // Function GameplayFramework.BasePlayerController.ClientEndCurrentMovie // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x38ee720
	void ClientEndCurrentDialogue(bool bDontSendRTMPStart); // Function GameplayFramework.BasePlayerController.ClientEndCurrentDialogue // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x38ee690
	void ClientCreatePlayDialogueRequest(struct FDialogueRequestParams RequestParams); // Function GameplayFramework.BasePlayerController.ClientCreatePlayDialogueRequest // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x38ee5e0
	void ClientCheat(struct FString Msg); // Function GameplayFramework.BasePlayerController.ClientCheat // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x38ee540
	void ClientCancelPlayDialogueRequest(bool bSequenceFinished); // Function GameplayFramework.BasePlayerController.ClientCancelPlayDialogueRequest // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x38ee4b0
	void ClientCameraFadeOut(); // Function GameplayFramework.BasePlayerController.ClientCameraFadeOut // (Net|Native|Event|Public|NetClient) // @ game+0x15b69e0
	void ClientApproachInterruptInteraction(); // Function GameplayFramework.BasePlayerController.ClientApproachInterruptInteraction // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x38ee490
	void CheatAll(struct FString Msg); // Function GameplayFramework.BasePlayerController.CheatAll // (Final|Exec|Native|Protected) // @ game+0x38ee3f0
	void Cheat(struct FString Msg); // Function GameplayFramework.BasePlayerController.Cheat // (Final|Exec|Native|Protected) // @ game+0x38ee350
	void BlendToCameraComponent(struct FName CameraComponentName, struct FName OldComponentName, float BlendTime, enum class EViewTargetBlendFunction BlendFunc, float BlendExp); // Function GameplayFramework.BasePlayerController.BlendToCameraComponent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x38ee110
};

// Class GameplayFramework.BaseCheatManager
// Size: 0x80 (Inherited: 0x78)
struct UBaseCheatManager : UCheatManager {
	char UnknownData_78[0x8]; // 0x78(0x08)

	void ToggleFriendlyFire(); // Function GameplayFramework.BaseCheatManager.ToggleFriendlyFire // (Exec|Native|Public) // @ game+0x2b1d7d0
	void ToggleAILoggingName(struct FString Filename); // Function GameplayFramework.BaseCheatManager.ToggleAILoggingName // (Final|Exec|Native|Public) // @ game+0x15bf8a0
	void ToggleAIIgnorePlayers(); // Function GameplayFramework.BaseCheatManager.ToggleAIIgnorePlayers // (Final|Exec|Native|Public) // @ game+0x38ea9f0
	void SuicideSkipDBNO(); // Function GameplayFramework.BaseCheatManager.SuicideSkipDBNO // (Final|Exec|Native|Public) // @ game+0x38ea9d0
	void Suicide(); // Function GameplayFramework.BaseCheatManager.Suicide // (Final|Exec|Native|Public) // @ game+0x38ea9b0
	void ServerToggleAILogginName(struct FString Filename); // Function GameplayFramework.BaseCheatManager.ServerToggleAILogginName // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x38ea850
	void Respawn(bool bForce); // Function GameplayFramework.BaseCheatManager.Respawn // (Final|Exec|Native|Public) // @ game+0x38ea7c0
	struct FString GetVisualLoggerFileName(); // Function GameplayFramework.BaseCheatManager.GetVisualLoggerFileName // (Final|Native|Static|Public) // @ game+0x38e9b00
	void FadeOutAllPlayers(); // Function GameplayFramework.BaseCheatManager.FadeOutAllPlayers // (Final|Exec|Native|Public) // @ game+0x38e9470
	void FadeInAllPlayers(); // Function GameplayFramework.BaseCheatManager.FadeInAllPlayers // (Final|Exec|Native|Public) // @ game+0x38e9450
	void DumpFacts(struct FString Query); // Function GameplayFramework.BaseCheatManager.DumpFacts // (Final|Exec|Native|Public) // @ game+0x38e93b0
	void DumpActorCollisionInfo(struct FString ActorName); // Function GameplayFramework.BaseCheatManager.DumpActorCollisionInfo // (Final|Exec|Native|Public) // @ game+0x38e9310
	void DebugHotSpots(); // Function GameplayFramework.BaseCheatManager.DebugHotSpots // (Final|Exec|Native|Public) // @ game+0xe8aaf0
	void ChangeLightScenario(int32_t NewLightScenarioNumber); // Function GameplayFramework.BaseCheatManager.ChangeLightScenario // (Final|Exec|Native|Public) // @ game+0x38e9290
	void AddFact(struct FString FactKey, struct FString Value); // Function GameplayFramework.BaseCheatManager.AddFact // (Final|Exec|Native|Public) // @ game+0x38e8b90
};

// Class GameplayFramework.BaseCinematicChar
// Size: 0x380 (Inherited: 0x378)
struct ABaseCinematicChar : ASkeletalMeshActor {
	struct UCharacterCustomizationComponent* CharacterCustomizationComponent; // 0x378(0x08)
};

// Class GameplayFramework.BasePlayerState
// Size: 0x4c8 (Inherited: 0x400)
struct ABasePlayerState : APlayerState {
	char UnknownData_400_0 : 7; // 0x400(0x01)
	bool bIsHost : 1; // 0x400(0x01)
	char UnknownData_401[0x1f]; // 0x401(0x1f)
	char UnknownData_420_0 : 7; // 0x420(0x01)
	bool bIsOwnedByLocalPlayer : 1; // 0x420(0x01)
	char UnknownData_421_0 : 7; // 0x421(0x01)
	bool bClientInitializedForCoopPlay : 1; // 0x421(0x01)
	char UnknownData_422_0 : 7; // 0x422(0x01)
	bool bWasClientInitializeCalled : 1; // 0x422(0x01)
	char UnknownData_423_0 : 7; // 0x423(0x01)
	bool bShouldFadeInWhenReadyForCoopPlay : 1; // 0x423(0x01)
	char UnknownData_424_0 : 7; // 0x424(0x01)
	bool bNeedsRegionStartedEventWhenJoinInProgress : 1; // 0x424(0x01)
	char UnknownData_425[0x3]; // 0x425(0x03)
	struct ABaseCharacter* OwningPawn; // 0x428(0x08)
	struct FLifeCycleSessionMemberState LifeCycleState; // 0x430(0x08)
	struct FTeamSyncTaskData AllPurposeSyncTaskData; // 0x438(0x02)
	struct FTeamSyncTaskData TeamSyncTaskData; // 0x43a(0x02)
	char UnknownData_43C_0 : 7; // 0x43c(0x01)
	bool bCanSkipSequence : 1; // 0x43c(0x01)
	char UnknownData_43D[0x13]; // 0x43d(0x13)
	struct FMulticastInlineDelegate OnShowTravelDestination; // 0x450(0x10)
	struct FMulticastInlineDelegate OnVoteStateChanged; // 0x460(0x10)
	struct FVoteState VoteState; // 0x470(0x05)
	char UnknownData_475[0x3]; // 0x475(0x03)
	struct UFactContainerComponent* FactContainer; // 0x478(0x08)
	struct FString CharacterName; // 0x480(0x10)
	char UnknownData_490[0x4]; // 0x490(0x04)
	struct FCheckpointLocationData CheckpointLocationData; // 0x494(0x14)
	char UnknownData_4A8_0 : 7; // 0x4a8(0x01)
	bool bIsPlayerAFK : 1; // 0x4a8(0x01)
	char UnknownData_4A9[0x1f]; // 0x4a9(0x1f)

	void VoteStateChangedDelegate__DelegateSignature(struct FVoteState VoteState); // DelegateFunction GameplayFramework.BasePlayerState.VoteStateChangedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1a35c70
	void SetVoteAcceptState(bool bAccepted, int32_t VoteChoice); // Function GameplayFramework.BasePlayerState.SetVoteAcceptState // (Final|Native|Public|BlueprintCallable) // @ game+0x38f7350
	void SetCharacterName(struct FString InCharacterName); // Function GameplayFramework.BasePlayerState.SetCharacterName // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x38f71e0
	void ServerStopVote(); // Function GameplayFramework.BasePlayerState.ServerStopVote // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f71c0
	void ServerStartVote(struct FVoteRequest VoteRequest); // Function GameplayFramework.BasePlayerState.ServerStartVote // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f7110
	void ServerSetVoteAcceptState(bool bSet, int32_t VoteChoice); // Function GameplayFramework.BasePlayerState.ServerSetVoteAcceptState // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f7040
	void ServerSetPlayerAFK(bool bInIsAFK); // Function GameplayFramework.BasePlayerState.ServerSetPlayerAFK // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0xbce790
	void ServerSetCharacterName(struct FString InCharacterName); // Function GameplayFramework.BasePlayerState.ServerSetCharacterName // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f6fa0
	void ServerSetCanSkipSequence(bool bInCanSkip); // Function GameplayFramework.BasePlayerState.ServerSetCanSkipSequence // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f6f10
	void ServerDelayVote(); // Function GameplayFramework.BasePlayerState.ServerDelayVote // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x33bf9c0
	void ServerChangeTeamSyncTaskStatus(enum class ETeamSyncTaskStatus NewStatus); // Function GameplayFramework.BasePlayerState.ServerChangeTeamSyncTaskStatus // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x38f6e90
	void ServerChangeAllPurposeSyncTaskStatus(enum class ETeamSyncTaskStatus NewStatus); // Function GameplayFramework.BasePlayerState.ServerChangeAllPurposeSyncTaskStatus // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x38f6e10
	void ServerAddFact(struct FFactEntryDTO Entry); // Function GameplayFramework.BasePlayerState.ServerAddFact // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x38f6d70
	void ServerAcknowledgeVote(); // Function GameplayFramework.BasePlayerState.ServerAcknowledgeVote // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x33bf9a0
	void OnShowTravelDestination__DelegateSignature(struct FString Destination, float DURATION); // DelegateFunction GameplayFramework.BasePlayerState.OnShowTravelDestination__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	void OnRep_VoteState(); // Function GameplayFramework.BasePlayerState.OnRep_VoteState // (Final|Native|Protected) // @ game+0x38f6cd0
	void OnRep_IsPlayerAFK(); // Function GameplayFramework.BasePlayerState.OnRep_IsPlayerAFK // (Native|Protected) // @ game+0x33b6c10
	void OnRep_CheckpointLocationData(); // Function GameplayFramework.BasePlayerState.OnRep_CheckpointLocationData // (Final|Native|Private) // @ game+0x33b50e0
	void OnRep_CanSkipSequence(); // Function GameplayFramework.BasePlayerState.OnRep_CanSkipSequence // (Final|Native|Public) // @ game+0x38f6cb0
	void OnCanSkipSequenceUpdated__DelegateSignature(); // DelegateFunction GameplayFramework.BasePlayerState.OnCanSkipSequenceUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	bool IsVoteAccepted(); // Function GameplayFramework.BasePlayerState.IsVoteAccepted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38f6c90
	bool HasVoted(); // Function GameplayFramework.BasePlayerState.HasVoted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38f6bc0
	bool HasDelayedVote(); // Function GameplayFramework.BasePlayerState.HasDelayedVote // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38f6ba0
	bool HasAcknowledgedVote(); // Function GameplayFramework.BasePlayerState.HasAcknowledgedVote // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38f6b80
	int32_t GetVoteChoice(); // Function GameplayFramework.BasePlayerState.GetVoteChoice // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38f6b60
	void DelayVote(); // Function GameplayFramework.BasePlayerState.DelayVote // (Final|Native|Public|BlueprintCallable) // @ game+0x38f6660
};

// Class GameplayFramework.CoverBoxComponent
// Size: 0x630 (Inherited: 0x500)
struct UCoverBoxComponent : UBoxComponent {
	char UnknownData_500[0x8]; // 0x500(0x08)
	struct TArray<struct FCoverBoxSlotData> SlotsData; // 0x508(0x10)
	struct TArray<struct TSoftObjectPtr<struct UCoverBoxComponent>> CoverBoxAroundMe; // 0x518(0x10)
	char UnknownData_528_0 : 7; // 0x528(0x01)
	bool bDoesNotHaveCoverSlots : 1; // 0x528(0x01)
	char UnknownData_529[0xff]; // 0x529(0xff)
	uint32_t AreaID; // 0x628(0x04)
	char UnknownData_62C[0x4]; // 0x62c(0x04)

	void RestoreBox(); // Function GameplayFramework.CoverBoxComponent.RestoreBox // (Final|Native|Public|BlueprintCallable) // @ game+0x3906440
	void OnNavigationBuildFinished(struct ANavigationData* NavData); // Function GameplayFramework.CoverBoxComponent.OnNavigationBuildFinished // (Final|Native|Protected) // @ game+0x3905d80
	bool IsNavmeshEnabled(); // Function GameplayFramework.CoverBoxComponent.IsNavmeshEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3905ca0
	bool IsDestroyed(); // Function GameplayFramework.CoverBoxComponent.IsDestroyed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3905c80
	void EnableNavMesh(); // Function GameplayFramework.CoverBoxComponent.EnableNavMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x3905c60
	void DestroyBox(); // Function GameplayFramework.CoverBoxComponent.DestroyBox // (Final|Native|Public|BlueprintCallable) // @ game+0x3905be0
	void CoverMeshWasHit(); // Function GameplayFramework.CoverBoxComponent.CoverMeshWasHit // (Final|Native|Public|BlueprintCallable) // @ game+0x3905bc0
};

// Class GameplayFramework.CoverContainerComponent
// Size: 0x1b8 (Inherited: 0x180)
struct UCoverContainerComponent : UActorComponent {
	struct TArray<struct TSoftObjectPtr<struct UCoverSlot>> Slots; // 0x180(0x10)
	char UnknownData_190[0x28]; // 0x190(0x28)

	void RestoreAllCoversDefault(); // Function GameplayFramework.CoverContainerComponent.RestoreAllCoversDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x3906420
	void EnableAllCovers(); // Function GameplayFramework.CoverContainerComponent.EnableAllCovers // (Final|Native|Public|BlueprintCallable) // @ game+0x3905c40
	void DisableAllCovers(); // Function GameplayFramework.CoverContainerComponent.DisableAllCovers // (Final|Native|Public|BlueprintCallable) // @ game+0x3905c20
};

// Class GameplayFramework.CharacterCustomizationComponent
// Size: 0x6f0 (Inherited: 0x2d0)
struct UCharacterCustomizationComponent : USceneComponent {
	char UnknownData_2D0_0 : 7; // 0x2d0(0x01)
	bool bLoadAsynchronously : 1; // 0x2c8(0x01)
	bool bOnlyLoadAssets : 1; // 0x2c9(0x01)
	bool bAlwaysForceLoad : 1; // 0x2ca(0x01)
	bool bShouldUseTimeSlice : 1; // 0x2cb(0x01)
	struct FMulticastInlineDelegate OnSkeletalMeshLoaded; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnSkeletalMeshModified; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnStaticMeshLoaded; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnMaterialLoaded; // 0x300(0x10)
	struct FMulticastInlineDelegate OnTextureLoaded; // 0x310(0x10)
	struct FMulticastInlineDelegate OnCharacterCustomizationSelected; // 0x320(0x10)
	struct FMulticastInlineDelegate OnCharacterFinishedSlicing; // 0x330(0x10)
	struct FMulticastInlineDelegate OnAllAssetLoaded; // 0x340(0x10)
	struct AActor* CharacterOwner; // 0x350(0x08)
	struct USkeletalMeshComponent* BaseMesh; // 0x358(0x08)
	struct FRandomStream StreamRand; // 0x360(0x08)
	struct TArray<struct FHeadMeshWithProbability> HeadSkeletalMeshes; // 0x368(0x10)
	struct TArray<struct FSkeletalMeshWithProbability> TorsoSkeletalMeshes; // 0x378(0x10)
	struct TArray<struct FSkeletalMeshWithProbability> HandsSkeletalMeshes; // 0x388(0x10)
	struct TArray<struct FSkeletalMeshWithProbability> LegsSkeletalMeshes; // 0x398(0x10)
	struct TArray<struct FSkeletalMeshWithProbability> BootsSkeletalMeshes; // 0x3a8(0x10)
	struct TArray<struct FSkeletalMeshWithProbability> BodySkeletalMeshes; // 0x3b8(0x10)
	struct FMainCustomizationSlot HeadSlot; // 0x3c8(0x18)
	struct TArray<struct FSubCustomizationSlot> CustomizationSlots; // 0x3e0(0x10)
	enum class ECustomizationRandomizationType RandomizationType; // 0x3f0(0x01)
	char UnknownData_3F2[0x2]; // 0x3f2(0x02)
	char bIgnoreMeshesHidingHair : 1; // 0x3f4(0x01)
	char bIgnoreMeshesHidingBeard : 1; // 0x3f4(0x01)
	char UnknownData_3F4_2 : 6; // 0x3f4(0x01)
	char UnknownData_3F5[0x3]; // 0x3f5(0x03)
	char UnknownData_3F8_0 : 7; // 0x3f8(0x01)
	bool UseCustomizationDataAsset : 1; // 0x3f8(0x01)
	char UnknownData_3F9[0x3]; // 0x3f9(0x03)
	struct FSkeletalLightSetting LightSetting; // 0x3fc(0x0c)
	struct UCharacterCustomizationDataAsset* CharacterCustomizationDataAsset; // 0x408(0x08)
	struct TArray<struct FCustomizationAttachment> Attachments; // 0x410(0x10)
	struct TArray<struct FCustomizationMainSlot> MainCustomizationSlots; // 0x420(0x10)
	char UnknownData_430[0x8]; // 0x430(0x08)
	struct TArray<struct USkeletalMeshComponent*> CustomizationSlotComponents; // 0x438(0x10)
	struct FCharacterSkeletalMeshReplicationData SkeletalMeshesSelectionResult; // 0x448(0x20)
	struct TArray<enum class None> AttachmentSelectionResult; // 0x468(0x10)
	struct TArray<struct UStaticMeshComponent*> StaticMeshComponents; // 0x478(0x10)
	struct TMap<enum class ECustomizationSlotType, struct FCustomizationComponentData> ComponentMap; // 0x488(0x50)
	struct TMap<enum class None, struct FCustomizationComponentData> CustomComponentMap; // 0x4d8(0x50)
	char UnknownData_528[0x18]; // 0x528(0x18)
	struct TArray<struct FName> LiteMaterialGroups; // 0x540(0x10)
	struct FCustomizationMaterialData MaterialData; // 0x550(0x50)
	struct FMulticastInlineDelegate OnMaterialGroupChanged; // 0x5a0(0x10)
	struct FMulticastInlineDelegate OnMaterialGroupApplied; // 0x5b0(0x10)
	struct FMulticastInlineDelegate OnMaterialGroupReset; // 0x5c0(0x10)
	int32_t SkinTintIndex; // 0x5d0(0x04)
	int32_t HairColorIndex; // 0x5d4(0x04)
	int32_t BeardColorIndex; // 0x5d8(0x04)
	int32_t EyeColorIndex; // 0x5dc(0x04)
	int32_t ScarIndex; // 0x5e0(0x04)
	char UnknownData_5E4[0x4]; // 0x5e4(0x04)
	struct FString LiteMaterialUserType; // 0x5e8(0x10)
	struct FName CurrentMaterialGroup; // 0x5f8(0x08)
	char UnknownData_600_0 : 7; // 0x600(0x01)
	bool bMaterialGroupLocked : 1; // 0x600(0x01)
	char UnknownData_601[0x17]; // 0x601(0x17)
	struct TArray<struct USkeletalMesh*> LoadedSkeletalMeshes; // 0x618(0x10)
	struct TArray<struct UStaticMesh*> LoadedStaticMeshes; // 0x628(0x10)
	struct TArray<struct UMaterialInstance*> LoadedMaterials; // 0x638(0x10)
	struct TArray<struct UTexture2D*> LoadedTextures; // 0x648(0x10)
	char UnknownData_658_0 : 7; // 0x658(0x01)
	bool bDebugSkipRandomization : 1; // 0x658(0x01)
	char UnknownData_659[0x27]; // 0x659(0x27)
	struct TArray<struct FSoftObjectPath> LiteMaterialSliceRequests; // 0x680(0x10)
	struct TArray<struct FCustomizationSpliceRequest> MeshSliceRequests; // 0x690(0x10)
	struct TArray<struct FCustomizationSpliceRequest> ComponentSliceRequests; // 0x6a0(0x10)
	struct TArray<struct FMaterialGroupSpliceRequest> MaterialGroupRequest; // 0x6b0(0x10)
	struct TArray<struct FCustomizationSpliceRequest> AsyncLoadRequests; // 0x6c0(0x10)
	char UnknownData_6D0[0x8]; // 0x6d0(0x08)
	struct TArray<struct USkeletalMeshComponent*> PoolObjectKeeper; // 0x6d8(0x10)
	char UnknownData_6E8[0x8]; // 0x6e8(0x08)

	struct ASkeletalMeshActor* SpawnCustomizedCopy(struct UObject* WorldContextObject, struct FVector SpawnLocation, bool bUseDefaultHead, struct TArray<struct FName> AttachSocketsToSkip, struct FAttachmentToSocketOverride AttachmentToSocketOverride, bool bUseDefaultHands); // Function GameplayFramework.CharacterCustomizationComponent.SpawnCustomizedCopy // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x39023c0
	void SetDefaultPiercing(int32_t Index); // Function GameplayFramework.CharacterCustomizationComponent.SetDefaultPiercing // (Native|Public|BlueprintCallable) // @ game+0x3902330
	void SetDefaultHead(int32_t Index); // Function GameplayFramework.CharacterCustomizationComponent.SetDefaultHead // (Native|Public|BlueprintCallable) // @ game+0x39022a0
	void SetDefaultHair(int32_t Index); // Function GameplayFramework.CharacterCustomizationComponent.SetDefaultHair // (Native|Public|BlueprintCallable) // @ game+0x3902210
	void SetDefaultBeard(int32_t Index); // Function GameplayFramework.CharacterCustomizationComponent.SetDefaultBeard // (Native|Public|BlueprintCallable) // @ game+0x3902180
	void ResetCustomizationSlot(enum class ECustomizationSlotType Type, bool ForceFullReset); // Function GameplayFramework.CharacterCustomizationComponent.ResetCustomizationSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x39020b0
	void ResetCustomCustomizationSlot(enum class None CustomSlotIndex); // Function GameplayFramework.CharacterCustomizationComponent.ResetCustomCustomizationSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x3902030
	void ResetAttachmentSlot(enum class None AttachmentSlotIndex); // Function GameplayFramework.CharacterCustomizationComponent.ResetAttachmentSlot // (Final|Native|Public|BlueprintCallable) // @ game+0x3901fb0
	void OverrideCustomizationData(struct FCharacterSkeletalMeshReplicationData CustomizationData, struct TArray<enum class None> InAttachmentSelectionResult); // Function GameplayFramework.CharacterCustomizationComponent.OverrideCustomizationData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3901e80
	void OnRep_SkeletalMeshRandomization(); // Function GameplayFramework.CharacterCustomizationComponent.OnRep_SkeletalMeshRandomization // (Final|Native|Protected) // @ game+0x3901e60
	void OnRep_AttachmentRandomization(); // Function GameplayFramework.CharacterCustomizationComponent.OnRep_AttachmentRandomization // (Final|Native|Protected) // @ game+0x3901e40
	bool IsCustomizationSlotModified(enum class ECustomizationSlotType Type); // Function GameplayFramework.CharacterCustomizationComponent.IsCustomizationSlotModified // (Final|Native|Public|BlueprintCallable) // @ game+0x3901db0
	bool IsCustomCustomizationSlotModified(enum class None CustomSlotIndex); // Function GameplayFramework.CharacterCustomizationComponent.IsCustomCustomizationSlotModified // (Final|Native|Public|BlueprintCallable) // @ game+0x3901d20
	bool GetSlotCustomizationMeshes(enum class ECustomizationSlotType Type, struct TArray<struct FSkelMeshWithProbability> OutSlot); // Function GameplayFramework.CharacterCustomizationComponent.GetSlotCustomizationMeshes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3901bd0
	void GetMeshComponents(struct TArray<struct UMeshComponent*> OutArray); // Function GameplayFramework.CharacterCustomizationComponent.GetMeshComponents // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3901b20
	enum class None GetCustomizationSlotIndex(enum class ECustomizationSlotType Type); // Function GameplayFramework.CharacterCustomizationComponent.GetCustomizationSlotIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x3901a90
	struct TArray<struct FCustomizationMainSlot> GetCustomizationMeshes(); // Function GameplayFramework.CharacterCustomizationComponent.GetCustomizationMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x3901a50
	struct USkeletalMeshComponent* GetCustomizationComponent(enum class ECustomizationSlotType Type); // Function GameplayFramework.CharacterCustomizationComponent.GetCustomizationComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x39019c0
	enum class None GetCustomCustomizationSlotIndex(enum class None CustomSlotIndex); // Function GameplayFramework.CharacterCustomizationComponent.GetCustomCustomizationSlotIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x3901930
	struct USkeletalMeshComponent* GetCustomCustomizationComponent(enum class None CustomSlotIndex); // Function GameplayFramework.CharacterCustomizationComponent.GetCustomCustomizationComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x39018a0
	struct FCustomizationMaterialData FindMaterialDataSource(); // Function GameplayFramework.CharacterCustomizationComponent.FindMaterialDataSource // (Final|Native|Public|BlueprintCallable) // @ game+0x3901860
	void AsyncLoadTexture(struct TSoftObjectPtr<struct UTexture2D> InTexture); // Function GameplayFramework.CharacterCustomizationComponent.AsyncLoadTexture // (Final|Native|Public) // @ game+0x3901730
	void AsyncLoadStaticMesh(struct TSoftObjectPtr<struct UStaticMesh> Mesh); // Function GameplayFramework.CharacterCustomizationComponent.AsyncLoadStaticMesh // (Final|Native|Public) // @ game+0x3901600
	void AsyncLoadSkeletalMesh(struct TSoftObjectPtr<struct USkeletalMesh> Mesh); // Function GameplayFramework.CharacterCustomizationComponent.AsyncLoadSkeletalMesh // (Final|Native|Public) // @ game+0x39014d0
	void AsyncLoadScar(bool StartLoading, enum class None HeadIndex, enum class None InScarIndex, bool CopyMaterial, bool bUseDeafultColor); // Function GameplayFramework.CharacterCustomizationComponent.AsyncLoadScar // (Final|Native|Public) // @ game+0x3901330
	void AsyncLoadMaterial(struct TSoftObjectPtr<struct UMaterialInstance> InMaterial); // Function GameplayFramework.CharacterCustomizationComponent.AsyncLoadMaterial // (Final|Native|Public) // @ game+0x3901200
	void AsyncLoadMakeup(enum class None InMakeupIndex, bool UseDefaultColor); // Function GameplayFramework.CharacterCustomizationComponent.AsyncLoadMakeup // (Final|Native|Public) // @ game+0x3901130
};

// Class GameplayFramework.CharacterCustomizationDataAsset
// Size: 0xd0 (Inherited: 0x30)
struct UCharacterCustomizationDataAsset : UDataAsset {
	char UnknownData_30[0x8]; // 0x30(0x08)
	struct TArray<struct FCustomizationAttachment> Attachments; // 0x38(0x10)
	struct TArray<struct FCustomizationMainSlot> CustomizationSlots; // 0x48(0x10)
	struct FCustomizationMaterialData MaterialData; // 0x58(0x50)
	SoftClassProperty CinematicTemplate; // 0xa8(0x28)
};

// Class GameplayFramework.DialogueManager
// Size: 0x310 (Inherited: 0x2f0)
struct ADialogueManager : AActor {
	char UnknownData_2F0[0x8]; // 0x2f0(0x08)
	struct TArray<struct FBaseChoice> CurrentChoices; // 0x2f8(0x10)
	char UnknownData_308_0 : 7; // 0x308(0x01)
	bool bIsDisplayingAnyChoices : 1; // 0x308(0x01)
	enum class EDialogueWindowPosition DialoguePosition; // 0x309(0x01)
	char UnknownData_30A[0x6]; // 0x30a(0x06)

	void SkipLine(); // Function GameplayFramework.DialogueManager.SkipLine // (Final|Native|Public|BlueprintCallable) // @ game+0x3913900
	void ShowDialogueWidget(); // Function GameplayFramework.DialogueManager.ShowDialogueWidget // (Native|Public|BlueprintCallable) // @ game+0x150ed00
	void SetFrameworkPlayer(struct UFrameworkSequencePlayer* InFrameworkPlayer); // Function GameplayFramework.DialogueManager.SetFrameworkPlayer // (Native|Public|BlueprintCallable) // @ game+0x1613d00
	void LeaveCurrentSequence(); // Function GameplayFramework.DialogueManager.LeaveCurrentSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x3911ff0
	bool IsChoiceVisible(struct FBaseChoice InChoice); // Function GameplayFramework.DialogueManager.IsChoiceVisible // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3910ec0
	void HideDialogueWidget(); // Function GameplayFramework.DialogueManager.HideDialogueWidget // (Native|Public|BlueprintCallable) // @ game+0x1516bc0
	struct UFrameworkSequencePlayer* GetFrameworkPlayer(); // Function GameplayFramework.DialogueManager.GetFrameworkPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3910420
};

// Class GameplayFramework.BaseEngine
// Size: 0x2340 (Inherited: 0x2248)
struct UBaseEngine : UGameEngine {
	struct FString LoadingMovie; // 0x2248(0x10)
	struct UUserWidget* LoadingScreenWidget; // 0x2258(0x08)
	char UnknownData_2260[0xe0]; // 0x2260(0xe0)
};

// Class GameplayFramework.BasePlayerStart
// Size: 0x338 (Inherited: 0x320)
struct ABasePlayerStart : APlayerStart {
	char UnknownData_320[0x8]; // 0x320(0x08)
	char UnknownData_328_0 : 7; // 0x328(0x01)
	bool bIsActive : 1; // 0x328(0x01)
	char UnknownData_329[0x3]; // 0x329(0x03)
	struct FGameplayTag GameplayName; // 0x32c(0x08)
	char UnknownData_334[0x4]; // 0x334(0x04)

	void SetIsActive(bool bSet); // Function GameplayFramework.BasePlayerStart.SetIsActive // (Final|Native|Public|BlueprintCallable) // @ game+0x38f72d0
	bool IsActive(); // Function GameplayFramework.BasePlayerStart.IsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x16de220
	struct FGameplayTag GetGameplayName(); // Function GameplayFramework.BasePlayerStart.GetGameplayName // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38f69c0
};

// Class GameplayFramework.CoopPlayerStart
// Size: 0x400 (Inherited: 0x338)
struct ACoopPlayerStart : ABasePlayerStart {
	char UnknownData_338[0x8]; // 0x338(0x08)
	struct FTransform Player1; // 0x340(0x30)
	struct FTransform Player2; // 0x370(0x30)
	struct FTransform Player3; // 0x3a0(0x30)
	struct FTransform Player4; // 0x3d0(0x30)
};

// Class GameplayFramework.BaseGameState
// Size: 0x738 (Inherited: 0x360)
struct ABaseGameState : AGameState {
	char UnknownData_360[0x8]; // 0x360(0x08)
	char UnknownData_368_0 : 7; // 0x368(0x01)
	bool bAllowFriendlyFire : 1; // 0x368(0x01)
	char UnknownData_369_0 : 7; // 0x369(0x01)
	bool bHostHasActiveFade : 1; // 0x369(0x01)
	char UnknownData_36A[0x6]; // 0x36a(0x06)
	struct FMulticastInlineDelegate OnCharacterKilled; // 0x370(0x10)
	struct FMulticastInlineDelegate InBattleStateChanged; // 0x380(0x10)
	int32_t NumEnemiesNearby; // 0x390(0x04)
	char UnknownData_394_0 : 7; // 0x394(0x01)
	bool bIsWSSRunning : 1; // 0x394(0x01)
	char UnknownData_395_0 : 7; // 0x395(0x01)
	bool bIsWSSHidingQuestMarkers : 1; // 0x395(0x01)
	char UnknownData_396[0x2]; // 0x396(0x02)
	struct FMulticastInlineDelegate OnCinematicModeChangedForPlayer; // 0x398(0x10)
	char UnknownData_3A8[0x20]; // 0x3a8(0x20)
	char UnknownData_3C8_0 : 7; // 0x3c8(0x01)
	bool bInBattle : 1; // 0x3c8(0x01)
	char UnknownData_3C9_0 : 7; // 0x3c9(0x01)
	bool bShouldStartWaveBeBlocked : 1; // 0x3c9(0x01)
	char UnknownData_3CA[0x6]; // 0x3ca(0x06)
	struct FLifeCycleSessionState LifeCycleSessionState; // 0x3d0(0x20)
	struct TArray<struct UBaseTeamSyncTask*> AllPurposeSyncTasks; // 0x3f0(0x10)
	struct UBaseTeamSyncTask* CurrentAllPurposeSyncTask; // 0x400(0x08)
	char UnknownData_408_0 : 7; // 0x408(0x01)
	bool bIsAllPurposeSyncActive : 1; // 0x408(0x01)
	char UnknownData_409_0 : 7; // 0x409(0x01)
	bool bIgnorePlayMovie : 1; // 0x409(0x01)
	char UnknownData_40A[0x6]; // 0x40a(0x06)
	struct TArray<struct UBaseTeamSyncTask*> SyncTasks; // 0x410(0x10)
	struct UBaseTeamSyncTask* CurrentSyncTask; // 0x420(0x08)
	struct FMulticastInlineDelegate OnRegionStarted; // 0x428(0x10)
	struct FMulticastInlineDelegate OnLevelTransitionStarted; // 0x438(0x10)
	struct FMulticastInlineDelegate OnLevelTransitionStartedLocal; // 0x448(0x10)
	struct FMulticastInlineDelegate OnLevelTransitionCompleted; // 0x458(0x10)
	struct FMulticastInlineDelegate OnLevelTransitionCompletedLocal; // 0x468(0x10)
	struct FMulticastInlineDelegate OnLevelTransitionFailedLocal; // 0x478(0x10)
	char UnknownData_488_0 : 7; // 0x488(0x01)
	bool bPersistentChangeTransition : 1; // 0x488(0x01)
	char UnknownData_489[0x7]; // 0x489(0x07)
	struct FLevelTransitionData LevelTransitionData; // 0x490(0xa8)
	char UnknownData_538_0 : 7; // 0x538(0x01)
	bool bIsInLevelTransition : 1; // 0x538(0x01)
	char UnknownData_539[0x7]; // 0x539(0x07)
	struct FMulticastInlineDelegate OnCoopSyncTimerVisibilityChanged; // 0x540(0x10)
	struct FMulticastInlineDelegate OnCoopSyncVisibilityChanged; // 0x550(0x10)
	struct FWeakObjectPtr<struct AActor> GlobalSyncActor; // 0x560(0x08)
	int32_t NumberOfSyncingPlayers; // 0x568(0x04)
	int32_t MaxSyncingPlayers; // 0x56c(0x04)
	struct FName CoopSyncTransitionToRegionName; // 0x570(0x08)
	struct ABasePlayerState* CoopSyncStartedPlayerState; // 0x578(0x08)
	float CoopSyncStartTime; // 0x580(0x04)
	char UnknownData_584[0x2c]; // 0x584(0x2c)
	struct UChatterManager* ChatterManager; // 0x5b0(0x08)
	struct UVOManager* VOManager; // 0x5b8(0x08)
	struct UBaseFactManager* FactManager; // 0x5c0(0x08)
	struct UImpactEffectManager* ImpactEffectManager; // 0x5c8(0x08)
	struct TArray<struct UMinimapNodeData*> MinimapNodes; // 0x5d0(0x10)
	char UnknownData_5E0[0x30]; // 0x5e0(0x30)
	struct TArray<struct UBase3DWidgetComponent*> Base3DWidgetComponents; // 0x610(0x10)
	struct UBaseWorldMap* WorldMap; // 0x620(0x08)
	float ShowDestinationNotifyDuration; // 0x628(0x04)
	char UnknownData_62C[0x4]; // 0x62c(0x04)
	struct FMulticastInlineDelegate OnVoteFinished; // 0x630(0x10)
	struct FMulticastInlineDelegate OnVoteVisibilityChanged; // 0x640(0x10)
	int32_t VoteTimerDuration; // 0x650(0x04)
	int32_t VoteTimerDelayDuration; // 0x654(0x04)
	struct FVoteReplicatedData VoteReplicatedData; // 0x658(0x40)
	float VoteStartTime; // 0x698(0x04)
	char UnknownData_69C[0x4]; // 0x69c(0x04)
	struct FMulticastInlineDelegate OnTeamRespawn; // 0x6a0(0x10)
	char UnknownData_6B0[0x8]; // 0x6b0(0x08)
	struct FMulticastInlineDelegate OnProjectileAvoidance; // 0x6b8(0x10)
	struct FMulticastInlineDelegate OnMantleAvoidance; // 0x6c8(0x10)
	char UnknownData_6D8[0x50]; // 0x6d8(0x50)
	struct FGameplayTag OverrideTrackerTag; // 0x728(0x08)
	struct UParticlePoolJanitorComponent* ParticlePoolJanitor; // 0x730(0x08)

	void VoteVisibilityChangedDelegate__DelegateSignature(bool bVisible, int32_t VoteReason); // DelegateFunction GameplayFramework.BaseGameState.VoteVisibilityChangedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	void VoteFinishedDelegate__DelegateSignature(int32_t VoteReason, bool bSuccess, int32_t WinningChoice); // DelegateFunction GameplayFramework.BaseGameState.VoteFinishedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	void PlayVOMulticast(struct FName Tag, enum class EVOPriority Priority, enum class EVOListType Type, float Delay); // Function GameplayFramework.BaseGameState.PlayVOMulticast // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x38ea680
	void PlayLineMulticast(struct FChatterPlayData Data); // Function GameplayFramework.BaseGameState.PlayLineMulticast // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x38ea5d0
	void OnRep_VoteReplicatedData(); // Function GameplayFramework.BaseGameState.OnRep_VoteReplicatedData // (Final|Native|Private) // @ game+0x38ea5b0
	void OnRep_InBattle(); // Function GameplayFramework.BaseGameState.OnRep_InBattle // (Final|Native|Private) // @ game+0x38ea590
	void OnRep_GlobalSyncActor(); // Function GameplayFramework.BaseGameState.OnRep_GlobalSyncActor // (Final|Native|Protected) // @ game+0x38ea570
	void OnRep_CurrentSyncTask(); // Function GameplayFramework.BaseGameState.OnRep_CurrentSyncTask // (Final|Native|Private) // @ game+0x38ea550
	void OnRep_CurrentAllPurposeSyncTask(); // Function GameplayFramework.BaseGameState.OnRep_CurrentAllPurposeSyncTask // (Final|Native|Private) // @ game+0x38ea530
	void OnLevelUnloaded(); // Function GameplayFramework.BaseGameState.OnLevelUnloaded // (Final|Native|Protected) // @ game+0x15a70c0
	void OnLevelTransitionStartedReplicated(struct FName InFromRegionName, struct FName InToRegionName); // Function GameplayFramework.BaseGameState.OnLevelTransitionStartedReplicated // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x38ea460
	void OnLevelTransitionFailed(struct FString regionname); // Function GameplayFramework.BaseGameState.OnLevelTransitionFailed // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x38ea3c0
	void OnLevelLoaded(); // Function GameplayFramework.BaseGameState.OnLevelLoaded // (Final|Native|Protected) // @ game+0x15a70c0
	void OnFrameworkSequenceStart__DelegateSignature(struct FFrameworkPlayerPlayParams PlayParams); // DelegateFunction GameplayFramework.BaseGameState.OnFrameworkSequenceStart__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x1a35c70
	void OnFrameworkSequenceEnd__DelegateSignature(); // DelegateFunction GameplayFramework.BaseGameState.OnFrameworkSequenceEnd__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	void OnCinematicModeChangedForPlayer__DelegateSignature(struct ABasePlayerController* PC, bool bCinematicMode); // DelegateFunction GameplayFramework.BaseGameState.OnCinematicModeChangedForPlayer__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	void OnBattleEvent(struct FGlobalEventParams GlobalEvent); // Function GameplayFramework.BaseGameState.OnBattleEvent // (Native|Public|HasOutParms) // @ game+0x38ea2d0
	void MulticastSpawnExplosionEffectAtImpactPoint(struct UExplosionTemplate* InTemplate, struct FHitResult InImpact, float InnerRadius, float OuterRadius, float Falloff); // Function GameplayFramework.BaseGameState.MulticastSpawnExplosionEffectAtImpactPoint // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x38ea0b0
	void MulticastSpawnExplosionEffect(struct UExplosionTemplate* InTemplate, struct FVector InOrigin, float InnerRadius, float OuterRadius, float Falloff); // Function GameplayFramework.BaseGameState.MulticastSpawnExplosionEffect // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults) // @ game+0x38e9f20
	void MulticastOnTeamRespawn(struct AActor* PlayerStart); // Function GameplayFramework.BaseGameState.MulticastOnTeamRespawn // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x38e9e90
	void MulticastNotifyRealtimeMultiplay(bool bStart); // Function GameplayFramework.BaseGameState.MulticastNotifyRealtimeMultiplay // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x38e9e00
	void LevelTransitionCompletedReplicated(struct FName InToRegionName); // Function GameplayFramework.BaseGameState.LevelTransitionCompletedReplicated // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x38e9d70
	bool IsInMenuRegion(); // Function GameplayFramework.BaseGameState.IsInMenuRegion // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e9d40
	bool IsInFadeOutSyncTask(struct UObject* WorldContextObject); // Function GameplayFramework.BaseGameState.IsInFadeOutSyncTask // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x38e9cc0
	bool IsInBattle(); // Function GameplayFramework.BaseGameState.IsInBattle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e9ca0
	bool HasVoteStarted(); // Function GameplayFramework.BaseGameState.HasVoteStarted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e9c80
	void HandleNamedActor(struct AActor* Actor, bool bRegister); // Function GameplayFramework.BaseGameState.HandleNamedActor // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x38e9bb0
	float GetVoteTimerSecondsLeft(); // Function GameplayFramework.BaseGameState.GetVoteTimerSecondsLeft // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e9b80
	struct FText GetLocalisedRegionName(struct FName regionname); // Function GameplayFramework.BaseGameState.GetLocalisedRegionName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e9a10
	enum class None GetDifficultylevel(); // Function GameplayFramework.BaseGameState.GetDifficultylevel // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e96c0
	struct FText GetCoopSyncTransitionToRegionName(); // Function GameplayFramework.BaseGameState.GetCoopSyncTransitionToRegionName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e9620
	float GetCoopSyncTimerSecondsLeft(); // Function GameplayFramework.BaseGameState.GetCoopSyncTimerSecondsLeft // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e95f0
	struct FString GetCoopSyncStartedPlayerName(); // Function GameplayFramework.BaseGameState.GetCoopSyncStartedPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e9570
	void GetCoopSyncPlayers(int32_t OutSyncingPlayers, int32_t OutMaxPlayers); // Function GameplayFramework.BaseGameState.GetCoopSyncPlayers // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e9490
};

// Class GameplayFramework.ExplosionTemplate
// Size: 0x100 (Inherited: 0x28)
struct UExplosionTemplate : UObject {
	struct FScalableFloat ExplosionDamage; // 0x28(0x20)
	struct FScalableFloat MinimumDamage; // 0x48(0x20)
	struct FScalableFloat DamageInnerRadius; // 0x68(0x20)
	struct FScalableFloat DamageOuterRadius; // 0x88(0x20)
	struct FScalableFloat DamageFalloff; // 0xa8(0x20)
	struct UDamageType* DamageTypeClass; // 0xc8(0x08)
	char UnknownData_D0_0 : 7; // 0xd0(0x01)
	bool bUseDamagePreventionChannel : 1; // 0xd0(0x01)
	char UnknownData_D1_0 : 7; // 0xd1(0x01)
	bool bIgnoreExplosiveDamageMultiplier : 1; // 0xd1(0x01)
	enum class ECollisionChannel DamagePreventionChannel; // 0xd2(0x01)
	char UnknownData_D3[0x5]; // 0xd3(0x05)
	struct AExplosionEffect* DefaultExplosionEffect; // 0xd8(0x08)
	struct TArray<struct FExplosionPerSurface> ExplosionEffectsPerSurface; // 0xe0(0x10)
	char UnknownData_F0[0x1]; // 0xf0(0x01)
	char UnknownData_F1_0 : 7; // 0xf1(0x01)
	bool bSpawnWindBlast : 1; // 0xf1(0x01)
	enum class EDeformationType BlastDeformationType; // 0xf2(0x01)
	char UnknownData_F3[0x1]; // 0xf3(0x01)
	float BlastStrength; // 0xf4(0x04)
	float BlastMoveSpeed; // 0xf8(0x04)
	float BlastRange; // 0xfc(0x04)
};

// Class GameplayFramework.BaseGameInstance
// Size: 0x1b0 (Inherited: 0x198)
struct UBaseGameInstance : UGameInstance {
	struct UOnlinePartyManager* PartyManager; // 0x198(0x08)
	char UnknownData_1A0[0x10]; // 0x1a0(0x10)
};

// Class GameplayFramework.BaseGameMode
// Size: 0x4c0 (Inherited: 0x458)
struct ABaseGameMode : AOnlineGameMode {
	char UnknownData_458[0x10]; // 0x458(0x10)
	double KillTeamTimeSliceThreshold; // 0x468(0x08)
	double TimeBetweenSlices; // 0x470(0x08)
	double LastSliceTime; // 0x478(0x08)
	struct TArray<struct FKillRequest> PawnsToKill; // 0x480(0x10)
	char UnknownData_490[0x10]; // 0x490(0x10)
	struct FSoftClassPath AdaptiveMusicSystemClassName; // 0x4a0(0x18)
	struct UFWAdaptiveMusicSystem* AdaptiveMusicSystem; // 0x4b8(0x08)

	bool SetCurrentBiome(struct UBaseBiomeData* Biome); // Function GameplayFramework.BaseGameMode.SetCurrentBiome // (Native|Public|BlueprintCallable) // @ game+0x38ea910
	void OnLevelAddedToWorld(struct ULevel* Level, struct UWorld* World); // Function GameplayFramework.BaseGameMode.OnLevelAddedToWorld // (Final|Native|Private) // @ game+0x150ec40
};

// Class GameplayFramework.FrameworkGlobals
// Size: 0x348 (Inherited: 0x28)
struct UFrameworkGlobals : UObject {
	char UnknownData_28[0xe8]; // 0x28(0xe8)
	struct UGlobalEventManager* GlobalEventManager; // 0x110(0x08)
	struct TSoftObjectPtr<struct USoundCue> NewAreaDiscoveredCue; // 0x118(0x28)
	struct TArray<struct TSoftObjectPtr<struct UBaseQuest>> AllQuests; // 0x140(0x10)
	struct UDataTable* DialogueLines; // 0x150(0x08)
	struct UDataTable* DialogueChoiceOptions; // 0x158(0x08)
	struct TSoftObjectPtr<struct USkeletalMesh> SecondaryHead; // 0x160(0x28)
	SoftClassProperty ChatterManagerClass; // 0x188(0x28)
	SoftClassProperty VOManagerClass; // 0x1b0(0x28)
	struct UBaseWorldStructure* WorldStructure; // 0x1d8(0x08)
	struct UBaseWorldStructure* DebugWorldStructure; // 0x1e0(0x08)
	struct UDataTable* ActorToRegionDataTable; // 0x1e8(0x08)
	struct USoundCue* ErrorAlert; // 0x1f0(0x08)
	struct UWorldMapNodesDataAsset* WorldMapNodesDataAsset; // 0x1f8(0x08)
	struct FMulticastInlineDelegate OnWeaponHit; // 0x200(0x10)
	struct UBaseDamageType* ScriptedKillDamageType; // 0x210(0x08)
	struct UBaseDamageType* SilentKillDamageType; // 0x218(0x08)
	struct UBaseDamageType* KillToRestartDamageType; // 0x220(0x08)
	struct UKeyToImageBindingDataAsset* XBoxKeyToImageBindings; // 0x228(0x08)
	struct UKeyToImageBindingDataAsset* PS4KeyToImageBindings; // 0x230(0x08)
	struct UKeyToImageBindingDataAsset* PCKeyToImageBindings; // 0x238(0x08)
	struct FSlateBrush MissingKeyBrush; // 0x240(0x88)
	struct UBaseCustomizationGlobals* CustomizationGlobals; // 0x2c8(0x08)
	struct ULocalizationGlobals* LocalizationGlobals; // 0x2d0(0x08)
	struct TMap<struct UBaseWidget*, uint32_t> InitialWidgetPoolDefinition; // 0x2d8(0x50)
	float HealthBarGlobalFadeInTime; // 0x328(0x04)
	float HealthBarGlobalIdleTime; // 0x32c(0x04)
	float HealthBarGlobalFadeOutTime; // 0x330(0x04)
	char UnknownData_334[0x4]; // 0x334(0x04)
	struct UUserWidget* LoadingScreenClass; // 0x338(0x08)
	struct UTexture* LoadingScreenCircle; // 0x340(0x08)

	struct FQuestMakerBrushes GetMarkerBrushesForQuestType(enum class EQuestType QuestType); // Function GameplayFramework.FrameworkGlobals.GetMarkerBrushesForQuestType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3918c90
	void GetImageForKey(enum class EInputType InputType, struct FKey Key, bool OutImageFound, struct FSlateBrush OutBrush); // Function GameplayFramework.FrameworkGlobals.GetImageForKey // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3918a00
};

// Class GameplayFramework.GoreComponent
// Size: 0x368 (Inherited: 0x180)
struct UGoreComponent : UActorComponent {
	struct UGoreDataAsset* GoreSettings; // 0x180(0x08)
	char UnknownData_188[0x8]; // 0x188(0x08)
	struct UAnimSequenceBase* DeathAnimationOverride; // 0x190(0x08)
	struct UAnimSequenceBase* DeathAnimationWaitingToBePlayed; // 0x198(0x08)
	char UnknownData_1A0[0x1]; // 0x1a0(0x01)
	char UnknownData_1A1_0 : 7; // 0x1a1(0x01)
	bool bSkeletonReceivesDecals : 1; // 0x1a1(0x01)
	char UnknownData_1A2_0 : 7; // 0x1a2(0x01)
	bool bPlugsReceiveDecals : 1; // 0x1a2(0x01)
	char UnknownData_1A3_0 : 7; // 0x1a3(0x01)
	bool bDisableAllGibs : 1; // 0x1a3(0x01)
	char UnknownData_1A4[0x4]; // 0x1a4(0x04)
	struct USkeletalMeshComponent* MasterComponent; // 0x1a8(0x08)
	char UnknownData_1B0[0x90]; // 0x1b0(0x90)
	char UnknownData_240_0 : 7; // 0x240(0x01)
	bool bOverride_ForceGib : 1; // 0x240(0x01)
	char UnknownData_241_0 : 7; // 0x241(0x01)
	bool bForceGib : 1; // 0x241(0x01)
	char UnknownData_242_0 : 7; // 0x242(0x01)
	bool bOverride_ForceFullGib : 1; // 0x242(0x01)
	char UnknownData_243_0 : 7; // 0x243(0x01)
	bool bForceFullGib : 1; // 0x243(0x01)
	char UnknownData_244_0 : 7; // 0x244(0x01)
	bool bOverride_ExplosionParameters : 1; // 0x244(0x01)
	char UnknownData_245[0x3]; // 0x245(0x03)
	struct FExplosionParameter ExplosionParametersOverride; // 0x248(0x2c)
	char UnknownData_274[0x14]; // 0x274(0x14)
	struct TArray<struct USkeletalMeshComponent*> PoolObjectKeeper; // 0x288(0x10)
	struct TArray<struct UStaticMeshComponent*> PoolStaticMeshObjectKeeper; // 0x298(0x10)
	struct USkeletalMeshComponent* GoreSkeletonMeshComponent; // 0x2a8(0x08)
	char UnknownData_2B0[0xb8]; // 0x2b0(0xb8)

	void TryHideGoreSkeleton(); // Function GameplayFramework.GoreComponent.TryHideGoreSkeleton // (Final|Native|Public) // @ game+0x3922210
	void SpawnGoreSkeleton(); // Function GameplayFramework.GoreComponent.SpawnGoreSkeleton // (Final|Native|Public|BlueprintCallable) // @ game+0x39221f0
	void SetSkeletonReceivesDecals(bool bEnabled); // Function GameplayFramework.GoreComponent.SetSkeletonReceivesDecals // (Final|Native|Public|BlueprintCallable) // @ game+0x3922160
	void SetPlugsReceiveDecals(bool bEnabled); // Function GameplayFramework.GoreComponent.SetPlugsReceiveDecals // (Final|Native|Public|BlueprintCallable) // @ game+0x39220d0
	void SetOwnerMeshCastsShadow(bool bEnabled); // Function GameplayFramework.GoreComponent.SetOwnerMeshCastsShadow // (Final|Native|Public|BlueprintCallable) // @ game+0x3922040
	void SetMasterComponent(struct USkeletalMeshComponent* InMasterComponent); // Function GameplayFramework.GoreComponent.SetMasterComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x3921fa0
	void SetDeathAnimationOverride(struct UAnimSequenceBase* Animation); // Function GameplayFramework.GoreComponent.SetDeathAnimationOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x3921f20
	void OverrideForceGib(bool bOverride, bool bValue); // Function GameplayFramework.GoreComponent.OverrideForceGib // (Final|Native|Public|BlueprintCallable) // @ game+0x3921e50
	void OverrideForceFullGib(bool bOverride, bool bValue); // Function GameplayFramework.GoreComponent.OverrideForceFullGib // (Final|Native|Public|BlueprintCallable) // @ game+0x3921d80
	void OverrideExplosionParameters(bool bOverride, struct FExplosionParameter Parameters); // Function GameplayFramework.GoreComponent.OverrideExplosionParameters // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3921c70
	void HideMeshesExceptGoreSkeleton(); // Function GameplayFramework.GoreComponent.HideMeshesExceptGoreSkeleton // (Final|Native|Public|BlueprintCallable) // @ game+0x3921c50
	struct UGameplayEffect* GetCurrentCueGroupDeathEffect(); // Function GameplayFramework.GoreComponent.GetCurrentCueGroupDeathEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3921bf0
	struct FName GetCurrentCueGroup(); // Function GameplayFramework.GoreComponent.GetCurrentCueGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3921bb0
	void EnableSpawningBloodEmitterOnGib(bool bEnable); // Function GameplayFramework.GoreComponent.EnableSpawningBloodEmitterOnGib // (Final|Native|Public|BlueprintCallable) // @ game+0x3921800
	void EnableGoreSkeletonRagdoll(bool bBrakeConstrains); // Function GameplayFramework.GoreComponent.EnableGoreSkeletonRagdoll // (Final|Native|Public|BlueprintCallable) // @ game+0x3921770
	void DischargeDeathAnimationOverride(struct UAnimSequenceBase* Animation); // Function GameplayFramework.GoreComponent.DischargeDeathAnimationOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x39216f0
	void DetachBodyPartsIfPossible(struct TArray<struct FName> BoneNames, struct TArray<struct FVector> Impulses, struct TArray<struct FVector> HitLocation, bool bCanBeSkipped); // Function GameplayFramework.GoreComponent.DetachBodyPartsIfPossible // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3921530
	void DetachBodyPartIfPossible(struct FName Bone, struct FVector Impulse, struct FVector HitLocation, bool bCanBeSkipped); // Function GameplayFramework.GoreComponent.DetachBodyPartIfPossible // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x39213a0
	void DetachBodyPart(struct FDetachableBone Bone, struct FVector Impulse, struct FVector HitLocation, bool bCanBeSkipped); // Function GameplayFramework.GoreComponent.DetachBodyPart // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3921200
};

// Class GameplayFramework.Base3DWidgetComponent
// Size: 0x370 (Inherited: 0x2d0)
struct UBase3DWidgetComponent : USceneComponent {
	char UnknownData_2D0[0x10]; // 0x2d0(0x10)
	struct UBaseWidget* WidgetClass; // 0x2e0(0x08)
	struct FLinearColor ColorAndOpacity; // 0x2e8(0x10)
	char UnknownData_2F8_0 : 7; // 0x2f8(0x01)
	bool bWasRegistered : 1; // 0x2f8(0x01)
	enum class EWidgetDisplayType WidgetDisplayType; // 0x2f9(0x01)
	char UnknownData_2FA[0x6]; // 0x2fa(0x06)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x300(0x28)
	enum class EIndicatorType IndicatorType; // 0x328(0x01)
	char UnknownData_329_0 : 7; // 0x329(0x01)
	bool bRemoveOnDeactivate : 1; // 0x329(0x01)
	char UnknownData_32A_0 : 7; // 0x32a(0x01)
	bool bAutoReset : 1; // 0x32a(0x01)
	char UnknownData_32B[0x5]; // 0x32b(0x05)
	struct FString StringParam; // 0x330(0x10)
	float FloatParam; // 0x340(0x04)
	char UnknownData_344_0 : 7; // 0x344(0x01)
	bool bBoolParam : 1; // 0x344(0x01)
	char UnknownData_345[0x3]; // 0x345(0x03)
	struct TArray<struct FDynamicParam> DynamicParams; // 0x348(0x10)
	char UnknownData_358_0 : 7; // 0x358(0x01)
	bool bEnableDistanceScaling : 1; // 0x358(0x01)
	char UnknownData_359[0x3]; // 0x359(0x03)
	float MinScale; // 0x35c(0x04)
	float MaxScale; // 0x360(0x04)
	float MinDistance; // 0x364(0x04)
	float MaxDistance; // 0x368(0x04)
	char UnknownData_36C[0x4]; // 0x36c(0x04)

	void SetDynamicParam(int32_t ParamIndex, bool bInBoolValue, int32_t InIntegerValue, float InFloatValue, struct FString InStringValue); // Function GameplayFramework.Base3DWidgetComponent.SetDynamicParam // (Final|Native|Public|BlueprintCallable) // @ game+0x38dd4d0
	void OnDeactivated(struct UActorComponent* Component); // Function GameplayFramework.Base3DWidgetComponent.OnDeactivated // (Native|Protected) // @ game+0x38dd380
	void OnActivated(struct UActorComponent* Component, bool bReset); // Function GameplayFramework.Base3DWidgetComponent.OnActivated // (Native|Protected) // @ game+0x38dd2b0
};

// Class GameplayFramework.BaseLabelWidgetComponent
// Size: 0x3a0 (Inherited: 0x370)
struct UBaseLabelWidgetComponent : UBase3DWidgetComponent {
	char UnknownData_370[0x18]; // 0x370(0x18)
	struct FText DisplayText; // 0x388(0x18)

	void UpdateTitle(struct FText NewTitle); // Function GameplayFramework.BaseLabelWidgetComponent.UpdateTitle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3929850
};

// Class GameplayFramework.HealthBarComponent
// Size: 0x3d0 (Inherited: 0x3a0)
struct UHealthBarComponent : UBaseLabelWidgetComponent {
	char UnknownData_3A0[0x8]; // 0x3a0(0x08)
	char bAlwaysVisible : 1; // 0x3a8(0x01)
	char UnknownData_3A8_1 : 7; // 0x3a8(0x01)
	char UnknownData_3A9[0x3]; // 0x3a9(0x03)
	float FadeInTimeOverride; // 0x3ac(0x04)
	float IdleTimeOverride; // 0x3b0(0x04)
	float FadeOutTimeOverride; // 0x3b4(0x04)
	char UnknownData_3B8[0x18]; // 0x3b8(0x18)

	void UpdateLevel(int32_t NewLevel); // Function GameplayFramework.HealthBarComponent.UpdateLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x15c6f70
};

// Class GameplayFramework.HitReactionComponent
// Size: 0x270 (Inherited: 0x180)
struct UHitReactionComponent : UActorComponent {
	struct UMaterialParameterCollection* GlobalMaterialParameterCollection; // 0x180(0x08)
	struct UForceFeedbackEffect* OnHitForceFeedback; // 0x188(0x08)
	struct UCameraShake* OnHitCameraShake; // 0x190(0x08)
	float IndicatorSpeed; // 0x198(0x04)
	char UnknownData_19C[0x4]; // 0x19c(0x04)
	struct UCurveFloat* ShotDirectionIndicatorAlphaCurve; // 0x1a0(0x08)
	struct UCurveFloat* ShotDirectionFixedBloodAlphaCurve; // 0x1a8(0x08)
	char UnknownData_1B0[0xc0]; // 0x1b0(0xc0)

	void OnComponentActivatedHandler(struct UActorComponent* Component, bool bReset); // Function GameplayFramework.HitReactionComponent.OnComponentActivatedHandler // (Final|Native|Protected) // @ game+0x3928e90
	void OnCharacterTakeHit(struct ABaseCharacter* character, struct FTakeHitInfo TakeHitInfo); // Function GameplayFramework.HitReactionComponent.OnCharacterTakeHit // (Final|Native|Protected) // @ game+0x3928a80
};

// Class GameplayFramework.BaseHostMigrationActor
// Size: 0x2f0 (Inherited: 0x2f0)
struct ABaseHostMigrationActor : AInfo {
};

// Class GameplayFramework.BaseWidget
// Size: 0x260 (Inherited: 0x230)
struct UBaseWidget : UUserWidget {
	char UnknownData_230[0x10]; // 0x230(0x10)
	char UnknownData_240_0 : 7; // 0x240(0x01)
	bool bUseHUDScale : 1; // 0x240(0x01)
	char UnknownData_241[0x7]; // 0x241(0x07)
	struct UScaleBox* HUDScaleBox; // 0x248(0x08)
	char UnknownData_250[0x10]; // 0x250(0x10)

	void Refresh(); // Function GameplayFramework.BaseWidget.Refresh // (Native|Public|BlueprintCallable) // @ game+0x154ed50
	struct UBase3DWidgetComponent* GetComponentOwner(); // Function GameplayFramework.BaseWidget.GetComponentOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38fc090
};

// Class GameplayFramework.BaseLabelWidget
// Size: 0x280 (Inherited: 0x260)
struct UBaseLabelWidget : UBaseWidget {
	struct UTextBlock* TitleTextBlock; // 0x260(0x08)
	struct FText CurrentTitle; // 0x268(0x18)
};

// Class GameplayFramework.HealthBarWidget
// Size: 0x290 (Inherited: 0x280)
struct UHealthBarWidget : UBaseLabelWidget {
	struct UProgressBar* HPBar; // 0x280(0x08)
	struct UTextBlock* HPNumbersText; // 0x288(0x08)
};

// Class GameplayFramework.BaseHud
// Size: 0x418 (Inherited: 0x3e0)
struct ABaseHud : AHUD {
	char UnknownData_3E0_0 : 7; // 0x3e0(0x01)
	bool bDisplayNetMode : 1; // 0x3e0(0x01)
	char UnknownData_3E1_0 : 7; // 0x3e1(0x01)
	bool bDisplayTeammateNames : 1; // 0x3e1(0x01)
	char UnknownData_3E2[0x16]; // 0x3e2(0x16)
	struct FWeakObjectPtr<struct UUserWidget> MainHudWidget; // 0x3f8(0x08)
	char UnknownData_400[0x18]; // 0x400(0x18)
};

// Class GameplayFramework.Inventory
// Size: 0x308 (Inherited: 0x2f0)
struct AInventory : AActor {
	struct USceneComponent* Scene; // 0x2f0(0x08)
	struct TArray<struct AInventoryItem*> Items; // 0x2f8(0x10)

	struct AInventoryItem* GetItem(int32_t ItemIndex); // Function GameplayFramework.Inventory.GetItem // (Native|Public|BlueprintCallable) // @ game+0x392c410
};

// Class GameplayFramework.BaseLevelScriptActor
// Size: 0x2f8 (Inherited: 0x2f8)
struct ABaseLevelScriptActor : ALevelScriptActor {

	void OnTeamRespawn(struct AActor* PlayerStart); // Function GameplayFramework.BaseLevelScriptActor.OnTeamRespawn // (Native|Event|Public|BlueprintEvent) // @ game+0x33cb4e0
	void OnRegionStarted(enum class ERegionStartedState StartedState, struct UStreamableCinematic* PassedCinematic); // Function GameplayFramework.BaseLevelScriptActor.OnRegionStarted // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnChallengeStart(struct FGameplayTagContainer MapParam); // Function GameplayFramework.BaseLevelScriptActor.OnChallengeStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void OnChallengePostSuccess(); // Function GameplayFramework.BaseLevelScriptActor.OnChallengePostSuccess // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnChallengeEnd(); // Function GameplayFramework.BaseLevelScriptActor.OnChallengeEnd // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
};

// Class GameplayFramework.MainUIWidget
// Size: 0x238 (Inherited: 0x230)
struct UMainUIWidget : UUserWidget {
	struct UOffscreenIndicatorPanel* HealthBarsPanel; // 0x230(0x08)
};

// Class GameplayFramework.QuestEventHandler
// Size: 0xd8 (Inherited: 0x28)
struct UQuestEventHandler : UObject {
	struct FName IDName; // 0x28(0x08)
	struct FText LongDescription; // 0x30(0x18)
	struct FNameWrapper RewardId; // 0x48(0x10)
	struct TArray<struct FFactNameFromList> AdditionalFacts; // 0x58(0x10)
	enum class EObjectiveStatus Status; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct UBaseQuestReward* RewardObject; // 0x70(0x08)
	char UnknownData_78[0x38]; // 0x78(0x38)
	struct TArray<struct FName> Events; // 0xb0(0x10)
	struct FName EventNameBegin; // 0xc0(0x08)
	struct FName EventNameCompleted; // 0xc8(0x08)
	struct FName EventNameFailed; // 0xd0(0x08)

	void OnRep_Status(); // Function GameplayFramework.QuestEventHandler.OnRep_Status // (Native|Protected) // @ game+0x33bd490
	enum class EObjectiveStatus GetStatus(); // Function GameplayFramework.QuestEventHandler.GetStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39354c0
	enum class EQuestType GetQuestType(); // Function GameplayFramework.QuestEventHandler.GetQuestType // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbde300
	struct FName GetFactName(); // Function GameplayFramework.QuestEventHandler.GetFactName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39352d0
};

// Class GameplayFramework.BaseObjective
// Size: 0x230 (Inherited: 0xd8)
struct UBaseObjective : UQuestEventHandler {
	char UnknownData_D8[0x8]; // 0xd8(0x08)
	struct FWeakObjectPtr<struct AActor> TrackableActor; // 0xe0(0x08)
	struct FText DescriptionText; // 0xe8(0x18)
	struct FString Description; // 0x100(0x10)
	struct FGameplayTag ExpectedArea; // 0x110(0x08)
	struct FGameplayTag DestinationRegion; // 0x118(0x08)
	struct FGameplayTag DestinationArea; // 0x120(0x08)
	struct FGameplayTag PortalOverride; // 0x128(0x08)
	char UnknownData_130_0 : 7; // 0x130(0x01)
	bool OverrideQuestMarkerTag : 1; // 0x130(0x01)
	char UnknownData_131[0x3]; // 0x131(0x03)
	struct FEventName ActivationEventName; // 0x134(0x08)
	struct FEventName FailureEventName; // 0x13c(0x08)
	struct FGameplayTag QuestMarkerTag; // 0x144(0x08)
	struct FGameplayTag UnlocksCapturePoint; // 0x14c(0x08)
	char UnknownData_154_0 : 7; // 0x154(0x01)
	bool bCompletesArena : 1; // 0x154(0x01)
	char UnknownData_155[0x3]; // 0x155(0x03)
	struct FGameplayTag TelemetryVolumeTag; // 0x158(0x08)
	struct UBaseQuest* ParentQuest; // 0x160(0x08)
	struct TArray<struct UBaseObjective*> ParentObjectives; // 0x168(0x10)
	struct TArray<struct UBaseObjective*> ChildObjectives; // 0x178(0x10)
	struct FName FriendlyObjectiveName; // 0x188(0x08)
	char UnknownData_190_0 : 7; // 0x190(0x01)
	bool bIsCheckpoint : 1; // 0x190(0x01)
	char UnknownData_191[0x3]; // 0x191(0x03)
	struct FGameplayTag PlayerStartTag; // 0x194(0x08)
	char UnknownData_19C[0x4]; // 0x19c(0x04)
	struct FText NewQuestName; // 0x1a0(0x18)
	char UnknownData_1B8_0 : 7; // 0x1b8(0x01)
	bool bVisibleOnUI : 1; // 0x1b8(0x01)
	char UnknownData_1B9_0 : 7; // 0x1b9(0x01)
	bool bCanTeleportToTown : 1; // 0x1b9(0x01)
	char UnknownData_1BA[0x76]; // 0x1ba(0x76)

	bool MatchQuestObject(struct TScriptInterface<None> QuestObject); // Function GameplayFramework.BaseObjective.MatchQuestObject // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef8f0
	bool IsFinalObjective(); // Function GameplayFramework.BaseObjective.IsFinalObjective // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef8a0
	struct FText GetText(); // Function GameplayFramework.BaseObjective.GetText // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef700
	struct AQuestManager* GetQuestManager(); // Function GameplayFramework.BaseObjective.GetQuestManager // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef6d0
	enum class EQuestType GetParentQuestType(); // Function GameplayFramework.BaseObjective.GetParentQuestType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef670
	struct FGameplayTag GetExpectedRegion(); // Function GameplayFramework.BaseObjective.GetExpectedRegion // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38ef530
	struct FText GetDescriptionText(); // Function GameplayFramework.BaseObjective.GetDescriptionText // (Event|Public|BlueprintEvent|Const) // @ game+0x1a35c70
	void Failed(bool bFailParentQuest); // Function GameplayFramework.BaseObjective.Failed // (Native|Public|BlueprintCallable) // @ game+0x38ef3b0
	void Completed(bool bNotifyParentQuest); // Function GameplayFramework.BaseObjective.Completed // (Native|Public|BlueprintCallable) // @ game+0x38ef170
	bool CanBeUpdated(struct AActor* InPlayer); // Function GameplayFramework.BaseObjective.CanBeUpdated // (Native|Public|BlueprintCallable) // @ game+0x38ee2b0
};

// Class GameplayFramework.MinimapNodeStrategy
// Size: 0x30 (Inherited: 0x28)
struct UMinimapNodeStrategy : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)

	void Tick(); // Function GameplayFramework.MinimapNodeStrategy.Tick // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x156dca0
	void Activate(struct UMinimapNodeComponent* NodeComponent); // Function GameplayFramework.MinimapNodeStrategy.Activate // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3388790
};

// Class GameplayFramework.BaseAnimData
// Size: 0x38 (Inherited: 0x30)
struct UBaseAnimData : UDataAsset {
	enum class EAnimDataOverridePriority AnimPriority; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class GameplayFramework.WeaponAnimData
// Size: 0x138 (Inherited: 0x38)
struct UWeaponAnimData : UBaseAnimData {
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FWeaponAnim ReloadAnim; // 0x40(0x38)
	struct FWeaponAnim FireAnim; // 0x78(0x38)
	struct FWeaponAnim HipFireAnim; // 0xb0(0x38)
	struct TSet<struct UAnimationAsset*> CachedAnimationAssets; // 0xe8(0x50)
};

// Class GameplayFramework.BaseAnimStack
// Size: 0x38 (Inherited: 0x28)
struct UBaseAnimStack : UObject {
	struct TArray<struct UBaseAnimData*> AnimStack; // 0x28(0x10)
};

// Class GameplayFramework.WeaponAnimStack
// Size: 0x40 (Inherited: 0x38)
struct UWeaponAnimStack : UBaseAnimStack {
	char UnknownData_38[0x8]; // 0x38(0x08)
};

// Class GameplayFramework.BasePlayerMovementComponent
// Size: 0xf20 (Inherited: 0x850)
struct UBasePlayerMovementComponent : UCharacterMovementComponent {
	float InputSmoothSpeed; // 0x850(0x04)
	float SizeThresholdToSmoothInput; // 0x854(0x04)
	float AngleThresholdToSmoothInput; // 0x858(0x04)
	int32_t InputHistoryFrames; // 0x85c(0x04)
	float InputHistorySeconds; // 0x860(0x04)
	char UnknownData_864_0 : 7; // 0x864(0x01)
	bool bIgnoreInputHistoryOnMoveStartOnKeyboard : 1; // 0x864(0x01)
	char UnknownData_865[0x3]; // 0x865(0x03)
	struct TArray<struct FRememberedInput> InputHistory; // 0x868(0x10)
	struct FInputThumbstickDirections LastInputMatchingHistory; // 0x878(0xa0)
	struct FInputThumbstickDirections RawInput; // 0x918(0xa0)
	struct FInputThumbstickDirections HistoryProcessedInput; // 0x9b8(0xa0)
	struct FInputThumbstickDirections FullyProcessedInput; // 0xa58(0xa0)
	char UnknownData_AF8[0x428]; // 0xaf8(0x428)
};

// Class GameplayFramework.PlayerFollowInputComponent
// Size: 0x218 (Inherited: 0x208)
struct UPlayerFollowInputComponent : UInputComponent {
	char UnknownData_208[0x10]; // 0x208(0x10)
};

// Class GameplayFramework.GameplayPlayerInput
// Size: 0x3c0 (Inherited: 0x3b8)
struct UGameplayPlayerInput : UPlayerInput {
	char UnknownData_3B8_0 : 7; // 0x3b8(0x01)
	bool bEnableAimAssist : 1; // 0x3b8(0x01)
	char UnknownData_3B9_0 : 7; // 0x3b9(0x01)
	bool bToggleTargeting : 1; // 0x3b9(0x01)
	char UnknownData_3BA[0x6]; // 0x3ba(0x06)
};

// Class GameplayFramework.PreviewWidget
// Size: 0x130 (Inherited: 0x108)
struct UPreviewWidget : UWidget {
	struct FVector2D InitialSize; // 0x108(0x08)
	struct AActor* PreviewEnvironmentClass; // 0x110(0x08)
	struct UMaterialInterface* PreviewMaterial; // 0x118(0x08)
	char UnknownData_120[0x10]; // 0x120(0x10)

	struct AActor* GetPreviewEnvironment(); // Function GameplayFramework.PreviewWidget.GetPreviewEnvironment // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe8abe0
	struct AActor* GetPreviewActor(); // Function GameplayFramework.PreviewWidget.GetPreviewActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe8abe0
};

// Class GameplayFramework.QuestManager
// Size: 0x5a0 (Inherited: 0x2f0)
struct AQuestManager : AActor {
	char UnknownData_2F0[0x8]; // 0x2f0(0x08)
	struct TArray<struct UBaseQuest*> QuestsWaitingToBeUnlocked; // 0x2f8(0x10)
	char UnknownData_308[0xa8]; // 0x308(0xa8)
	struct FMulticastInlineDelegate OnQuestTrackingChanged; // 0x3b0(0x10)
	struct FMulticastInlineDelegate OnQuestCanBePingedChanged; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnQuestHandleStatusChanged; // 0x3d0(0x10)
	char UnknownData_3E0[0x18]; // 0x3e0(0x18)
	struct FMulticastInlineDelegate OnObjectivePinged; // 0x3f8(0x10)
	char UnknownData_408[0x39]; // 0x408(0x39)
	char UnknownData_441_0 : 7; // 0x441(0x01)
	bool bManuallySetPingedQuest : 1; // 0x441(0x01)
	char UnknownData_442[0x6]; // 0x442(0x06)
	struct TArray<struct UBaseQuest*> Quests; // 0x448(0x10)
	struct FLinearColor MainQuestColor; // 0x458(0x10)
	struct FLinearColor SideQuestColor; // 0x468(0x10)
	char UnknownData_478_0 : 7; // 0x478(0x01)
	bool bIsLoadingQuests : 1; // 0x478(0x01)
	char UnknownData_479[0x7]; // 0x479(0x07)
	struct TArray<struct UBaseQuest*> QuestsToBegin; // 0x480(0x10)
	struct TArray<struct UBaseQuest*> QuestsToUnlock; // 0x490(0x10)
	char UnknownData_4A0_0 : 7; // 0x4a0(0x01)
	bool bQuestManagerReady : 1; // 0x4a0(0x01)
	char UnknownData_4A1[0xf]; // 0x4a1(0x0f)
	struct TMap<struct FString, struct UQuestEventHandler*> FactNameToQuestHandlerMap; // 0x4b0(0x50)
	char UnknownData_500[0xa0]; // 0x500(0xa0)

	void StopTrackingQuests(struct UBaseQuest* SkipThis); // Function GameplayFramework.QuestManager.StopTrackingQuests // (Final|Native|Public|BlueprintCallable) // @ game+0x3936380
	void SetTrackedQuest(struct FName QuestID, bool bManual); // Function GameplayFramework.QuestManager.SetTrackedQuest // (Final|Native|Public|BlueprintCallable) // @ game+0x39362b0
	void ServerBeginQuestFromPoint(struct FName QuestID, int32_t Stage); // Function GameplayFramework.QuestManager.ServerBeginQuestFromPoint // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x3936030
	void ServerBeginQuest(struct UBaseQuest* QuestObject, bool bDispatchEvent); // Function GameplayFramework.QuestManager.ServerBeginQuest // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x3935f60
	void RestoreTrackedQuests(); // Function GameplayFramework.QuestManager.RestoreTrackedQuests // (Final|Native|Public|BlueprintCallable) // @ game+0x3935e90
	void PostFailQuest(struct UBaseQuest* Inquest); // Function GameplayFramework.QuestManager.PostFailQuest // (Final|Native|Public|BlueprintCallable) // @ game+0x3935e10
	void OnFactLoadingStarted(); // Function GameplayFramework.QuestManager.OnFactLoadingStarted // (Final|Native|Public) // @ game+0x39358d0
	void OnFactLoadingFinished(); // Function GameplayFramework.QuestManager.OnFactLoadingFinished // (Final|Native|Public) // @ game+0x39358b0
	void ObjectivePingedDelegate__DelegateSignature(bool bHilight, struct UBaseObjective* Objective); // DelegateFunction GameplayFramework.QuestManager.ObjectivePingedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	struct UBaseQuest* GetTrackedQuest(); // Function GameplayFramework.QuestManager.GetTrackedQuest // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3935510
	struct FGameplayTag GetPortalOverrideForMarker(struct FGameplayTag QuestMarkerTag); // Function GameplayFramework.QuestManager.GetPortalOverrideForMarker // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39353f0
	struct TArray<struct UBaseQuest*> GetActiveQuests(); // Function GameplayFramework.QuestManager.GetActiveQuests // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39350e0
	void EaglePeaksPortalHACK_Start(struct FGameplayTag PortalToCheckTag, struct FGameplayTag BackPortalTag); // Function GameplayFramework.QuestManager.EaglePeaksPortalHACK_Start // (Final|Native|Public|BlueprintCallable) // @ game+0x3934f30
	void EaglePeaksPortalHACK_Reset(); // Function GameplayFramework.QuestManager.EaglePeaksPortalHACK_Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x3934f10
	void DebugCompleteOneObjective(struct UBaseQuest* Inquest); // Function GameplayFramework.QuestManager.DebugCompleteOneObjective // (Final|Native|Public|BlueprintCallable) // @ game+0x3934e20
	void CompleteAllQuests(); // Function GameplayFramework.QuestManager.CompleteAllQuests // (Final|Native|Public|BlueprintCallable) // @ game+0x3934e00
	void CompleteActiveObjectives(bool bOnlyTrackedQuest); // Function GameplayFramework.QuestManager.CompleteActiveObjectives // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x155efa0
};

// Class GameplayFramework.BaseQuestPool
// Size: 0x38 (Inherited: 0x30)
struct UBaseQuestPool : UDataAsset {
	enum class EQuestPoolType QuestPoolType; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class GameplayFramework.BaseQuestReward
// Size: 0x28 (Inherited: 0x28)
struct UBaseQuestReward : UObject {

	void OnApplyReward(struct ABasePlayerController* ForPlayer, struct FText SourceName, struct UObject* Source); // Function GameplayFramework.BaseQuestReward.OnApplyReward // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
};

// Class GameplayFramework.BaseSpringArmComponent
// Size: 0x450 (Inherited: 0x400)
struct UBaseSpringArmComponent : USpringArmComponent {
	char UnknownData_400[0x8]; // 0x400(0x08)
	struct ABaseCameraManager* CachedCameraManager; // 0x408(0x08)
	char UnknownData_410[0x40]; // 0x410(0x40)

	void OverrideTargetArmLength(float InTargetArmLength); // Function GameplayFramework.BaseSpringArmComponent.OverrideTargetArmLength // (Final|Native|Public|BlueprintCallable) // @ game+0x38f6cf0
	float GetDefaultTargetArmLength(); // Function GameplayFramework.BaseSpringArmComponent.GetDefaultTargetArmLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38f69a0
	void ForceUpdate(bool bDoTrace, bool bDoLocationLag, bool bDoRotationLag, float DeltaTime); // Function GameplayFramework.BaseSpringArmComponent.ForceUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x38f6680
};

// Class GameplayFramework.StaticNavModifierBoxComponent
// Size: 0x560 (Inherited: 0x500)
struct UStaticNavModifierBoxComponent : UBoxComponent {
	struct UNavArea* NavAreaClass; // 0x4f8(0x08)
	struct UNavArea* LastNavArea; // 0x500(0x08)
	uint32_t AreaID; // 0x508(0x04)
	char UnknownData_514[0x4c]; // 0x514(0x4c)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function GameplayFramework.StaticNavModifierBoxComponent.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x393f2d0
	void OnNavigationBuildFinished(struct ANavigationData* NavData); // Function GameplayFramework.StaticNavModifierBoxComponent.OnNavigationBuildFinished // (Final|Native|Protected) // @ game+0x393eca0
};

// Class GameplayFramework.AIHotSpot
// Size: 0x420 (Inherited: 0x2f0)
struct AAIHotSpot : AActor {
	char UnknownData_2F0[0x8]; // 0x2f0(0x08)
	struct TArray<struct UAIHotSpotSlot*> UserSlots; // 0x2f8(0x10)
	struct UAIHotSpotSlotGenerator* SlotGenerator; // 0x308(0x08)
	struct TArray<struct UAIHotSpotSlot*> Slots; // 0x310(0x10)
	struct AActor* FocusActor; // 0x320(0x08)
	struct UNavigationQueryFilter* FilterClass; // 0x328(0x08)
	struct FVector CustomNavmeshSearchExtent; // 0x330(0x0c)
	char bStartEnabled : 1; // 0x33c(0x01)
	char bAllowSlotlessAssignment : 1; // 0x33c(0x01)
	char bAllowClaimingMultipleSlots : 1; // 0x33c(0x01)
	char bTrackOverlappingSlots : 1; // 0x33c(0x01)
	char bProjectSlotsOnNavmesh : 1; // 0x33c(0x01)
	char bCustomNavmeshSearchExtent : 1; // 0x33c(0x01)
	char bIsEnabled : 1; // 0x33c(0x01)
	char UnknownData_33D[0x3]; // 0x33d(0x03)
	struct TArray<struct APawn*> NoSlotAssignees; // 0x340(0x10)
	struct TMap<struct APawn*, int32_t> AIOwnerLookup; // 0x350(0x50)
	char UnknownData_3A0[0x70]; // 0x3a0(0x70)
	struct USceneComponent* SceneComponent; // 0x410(0x08)
	struct UAIHotSpotRenderingComponent* RenderingComponent; // 0x418(0x08)

	void SetEnabled(bool bEnabled); // Function GameplayFramework.AIHotSpot.SetEnabled // (Native|Public|BlueprintCallable) // @ game+0x38d9800
	int32_t RemoveGroupFromHotspot(struct TArray<struct APawn*> GroupOfAI); // Function GameplayFramework.AIHotSpot.RemoveGroupFromHotspot // (Native|Public|BlueprintCallable) // @ game+0x38d9700
	bool RemoveFromHotspot(struct APawn* Pawn, bool bAssignFromWaitingList, int32_t SlotIndex); // Function GameplayFramework.AIHotSpot.RemoveFromHotspot // (Native|Public|BlueprintCallable) // @ game+0x38d95f0
	void OnSlotOccupied(struct APawn* Pawn, int32_t Index, int32_t UserId); // Function GameplayFramework.AIHotSpot.OnSlotOccupied // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x38d94f0
	void OnSlotFreed(struct APawn* Pawn, int32_t Index, int32_t UserId); // Function GameplayFramework.AIHotSpot.OnSlotFreed // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x38d93f0
	void OnSlotEnabled(int32_t Index, int32_t UserId); // Function GameplayFramework.AIHotSpot.OnSlotEnabled // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x38d9330
	void OnSlotDisabled(int32_t Index, int32_t UserId); // Function GameplayFramework.AIHotSpot.OnSlotDisabled // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x38d9270
	void OnSlotClaimed(struct APawn* Pawn, int32_t Index, int32_t UserId); // Function GameplayFramework.AIHotSpot.OnSlotClaimed // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x38d9170
	void OnSlotBlocked(struct APawn* Pawn, int32_t Index, int32_t UserId); // Function GameplayFramework.AIHotSpot.OnSlotBlocked // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x38d9070
	void OnRemovedSlotlessBehavior(struct APawn* Pawn, bool bIsClamingSlot); // Function GameplayFramework.AIHotSpot.OnRemovedSlotlessBehavior // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x38d8fa0
	void OnRemovedBehavior(struct APawn* Pawn, int32_t Index, int32_t UserId, enum class EAIHotSpotSlot PrevState, bool bWasOnWaitingList); // Function GameplayFramework.AIHotSpot.OnRemovedBehavior // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x38d8e20
	void OnMoveToSlotFinished(struct APawn* Pawn, int32_t Index, int32_t UserId, bool bResult); // Function GameplayFramework.AIHotSpot.OnMoveToSlotFinished // (BlueprintAuthorityOnly|Native|Event|Protected|BlueprintEvent) // @ game+0x38d8ce0
	void OnHotSpotEnabled(); // Function GameplayFramework.AIHotSpot.OnHotSpotEnabled // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x1516bc0
	void OnHotSpotDisabled(); // Function GameplayFramework.AIHotSpot.OnHotSpotDisabled // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x1522260
	bool OnAssignedSlotlessBehavior(struct APawn* Pawn); // Function GameplayFramework.AIHotSpot.OnAssignedSlotlessBehavior // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x38d8c40
	bool OnAssignedOccupiedBehavior(struct APawn* Pawn, int32_t Index, int32_t UserId); // Function GameplayFramework.AIHotSpot.OnAssignedOccupiedBehavior // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x38d8b30
	bool OnAssignedClaimedBehavior(struct APawn* Pawn, int32_t Index, int32_t UserId, bool bWasOnWaitingList); // Function GameplayFramework.AIHotSpot.OnAssignedClaimedBehavior // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent) // @ game+0x38d89f0
	bool OccupySlotByUserId(int32_t UserId); // Function GameplayFramework.AIHotSpot.OccupySlotByUserId // (Final|Native|Public|BlueprintCallable) // @ game+0x38d8960
	bool OccupySlotByOwner(struct APawn* AIOwner); // Function GameplayFramework.AIHotSpot.OccupySlotByOwner // (Final|Native|Public|BlueprintCallable) // @ game+0x38d88d0
	bool OccupySlotByIndex(int32_t Index); // Function GameplayFramework.AIHotSpot.OccupySlotByIndex // (Native|Public|BlueprintCallable) // @ game+0x38d8830
	void NetMulticastOnSlotStateChanged(int32_t Index, struct FSlotOwnershipState SlotOwnershipState); // Function GameplayFramework.AIHotSpot.NetMulticastOnSlotStateChanged // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x38d8760
	bool IsSlotlessAssignmentAllowed(); // Function GameplayFramework.AIHotSpot.IsSlotlessAssignmentAllowed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d86a0
	bool IsEnabled(); // Function GameplayFramework.AIHotSpot.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d8670
	bool IsAIAllowed(struct APawn* Pawn); // Function GameplayFramework.AIHotSpot.IsAIAllowed // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent|Const) // @ game+0x38d85a0
	bool HasAssignedAI(struct APawn* Pawn, enum class EAIHotSpotAssignmentFilter Filter); // Function GameplayFramework.AIHotSpot.HasAssignedAI // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d8450
	void GetUserSlots(enum class EAIHotSpotSlotFilter Filter, struct TArray<int32_t> OutIndices, bool bEvenIfDisabled); // Function GameplayFramework.AIHotSpot.GetUserSlots // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d8320
	struct FRotator GetUserSlotRotationByIndex(int32_t Index); // Function GameplayFramework.AIHotSpot.GetUserSlotRotationByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d8280
	struct FVector GetUserSlotLocationByIndex(int32_t Index); // Function GameplayFramework.AIHotSpot.GetUserSlotLocationByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d81e0
	int32_t GetUserSlotCount(enum class EAIHotSpotSlotFilter Filter); // Function GameplayFramework.AIHotSpot.GetUserSlotCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d8150
	int32_t GetSlotUserIdByOwner(struct APawn* AIOwner); // Function GameplayFramework.AIHotSpot.GetSlotUserIdByOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7f60
	int32_t GetSlotUserIdByIndex(int32_t Index); // Function GameplayFramework.AIHotSpot.GetSlotUserIdByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7ed0
	enum class EAIHotSpotSlot GetSlotStateByUserId(int32_t UserId); // Function GameplayFramework.AIHotSpot.GetSlotStateByUserId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7e40
	enum class EAIHotSpotSlot GetSlotStateByOwner(struct APawn* AIOwner); // Function GameplayFramework.AIHotSpot.GetSlotStateByOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7db0
	enum class EAIHotSpotSlot GetSlotStateByIndex(int32_t Index); // Function GameplayFramework.AIHotSpot.GetSlotStateByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7d20
	void GetSlots(enum class EAIHotSpotSlotFilter Filter, struct TArray<int32_t> OutIndices, bool bEvenIfDisabled); // Function GameplayFramework.AIHotSpot.GetSlots // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7ff0
	struct FRotator GetSlotRotationByUserId(int32_t UserId); // Function GameplayFramework.AIHotSpot.GetSlotRotationByUserId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7c80
	struct FRotator GetSlotRotationByOwner(struct APawn* AIOwner); // Function GameplayFramework.AIHotSpot.GetSlotRotationByOwner // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7be0
	struct FRotator GetSlotRotationByIndex(int32_t Index); // Function GameplayFramework.AIHotSpot.GetSlotRotationByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7b40
	struct APawn* GetSlotOwnerByUserId(int32_t UserId); // Function GameplayFramework.AIHotSpot.GetSlotOwnerByUserId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7ab0
	struct APawn* GetSlotOwnerByIndex(int32_t Index); // Function GameplayFramework.AIHotSpot.GetSlotOwnerByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7a20
	struct FVector GetSlotLocationByUserId(int32_t UserId); // Function GameplayFramework.AIHotSpot.GetSlotLocationByUserId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7980
	struct FVector GetSlotLocationByOwner(struct APawn* AIOwner); // Function GameplayFramework.AIHotSpot.GetSlotLocationByOwner // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d78e0
	struct FVector GetSlotLocationByIndex(int32_t Index); // Function GameplayFramework.AIHotSpot.GetSlotLocationByIndex // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7840
	int32_t GetSlotIndexByUserId(int32_t UserId); // Function GameplayFramework.AIHotSpot.GetSlotIndexByUserId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d77b0
	int32_t GetSlotIndexByOwner(struct APawn* AIOwner); // Function GameplayFramework.AIHotSpot.GetSlotIndexByOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7720
	int32_t GetSlotCount(enum class EAIHotSpotSlotFilter Filter); // Function GameplayFramework.AIHotSpot.GetSlotCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7690
	struct UAIHotSpotSlot* GetSlotByUserId(int32_t UserId); // Function GameplayFramework.AIHotSpot.GetSlotByUserId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7600
	struct UAIHotSpotSlot* GetSlotByOwner(struct APawn* AIOwner); // Function GameplayFramework.AIHotSpot.GetSlotByOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7570
	struct UAIHotSpotSlot* GetSlotByIndex(int32_t Index); // Function GameplayFramework.AIHotSpot.GetSlotByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d74e0
	int32_t GetAssignedAICount(enum class EAIHotSpotAssignmentFilter Filter); // Function GameplayFramework.AIHotSpot.GetAssignedAICount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7330
	struct TArray<struct APawn*> GetAssignedAI(enum class EAIHotSpotAssignmentFilter Filter); // Function GameplayFramework.AIHotSpot.GetAssignedAI // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7260
	struct TArray<int32_t> FindBestSlotIndices(struct TArray<struct APawn*> Pawn); // Function GameplayFramework.AIHotSpot.FindBestSlotIndices // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7120
	int32_t FindBestSlotIndex(struct APawn* Pawn); // Function GameplayFramework.AIHotSpot.FindBestSlotIndex // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d7080
	bool CanUseSlotByUserId(struct APawn* Pawn, int32_t UserId); // Function GameplayFramework.AIHotSpot.CanUseSlotByUserId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d6fa0
	bool CanUseSlotByIndex(struct APawn* Pawn, int32_t Index); // Function GameplayFramework.AIHotSpot.CanUseSlotByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d6ee0
	bool AssignToSlotByUserId(struct APawn* Pawn, int32_t UserId); // Function GameplayFramework.AIHotSpot.AssignToSlotByUserId // (Final|Native|Public|BlueprintCallable) // @ game+0x38d6e20
	bool AssignToSlotByIndex(struct APawn* Pawn, int32_t Index); // Function GameplayFramework.AIHotSpot.AssignToSlotByIndex // (Native|Public|BlueprintCallable) // @ game+0x38d6d50
	bool AssignToHotspot(struct APawn* Pawn); // Function GameplayFramework.AIHotSpot.AssignToHotspot // (Native|Public|BlueprintCallable) // @ game+0x38d6cb0
	int32_t AssignGroupToHotspot(struct TArray<struct APawn*> GroupOfAI); // Function GameplayFramework.AIHotSpot.AssignGroupToHotspot // (Native|Public|BlueprintCallable) // @ game+0x38d6bb0
	bool AssignFromWaitingList(); // Function GameplayFramework.AIHotSpot.AssignFromWaitingList // (Final|Native|Public|BlueprintCallable) // @ game+0x38d6b80
};

// Class GameplayFramework.Cover
// Size: 0x4a0 (Inherited: 0x420)
struct ACover : AAIHotSpot {
	char UnknownData_420[0x8]; // 0x420(0x08)
	struct UNavArea* MantleNavArea; // 0x428(0x08)
	struct UNavArea* DisabledMantleNavArea; // 0x430(0x08)
	struct UNavArea* ClimbNavArea; // 0x438(0x08)
	uint32_t bIsNavigationRelevant; // 0x440(0x04)
	float MidPointOffset; // 0x444(0x04)
	float MinimalAngle; // 0x448(0x04)
	float MaximalAngle; // 0x44c(0x04)
	char bPrefferLowCoverPoseForStandingIfPossible : 1; // 0x450(0x01)
	char UnknownData_450_1 : 7; // 0x450(0x01)
	char UnknownData_451_0 : 7; // 0x451(0x01)
	bool bTracePickingBlockOnTheWay : 1; // 0x451(0x01)
	char UnknownData_452[0x6]; // 0x452(0x06)
	struct UMaterial* MarkedSlotMaterial; // 0x458(0x08)
	struct UMaterial* MarkedPlayerOnlySlotMaterial; // 0x460(0x08)
	struct UMaterial* TraversalOnlySlotMaterial; // 0x468(0x08)
	struct UMaterial* FreeSlotMaterial; // 0x470(0x08)
	struct UMaterial* FreePlayerOnlySlotMaterial; // 0x478(0x08)
	struct UMaterial* ClaimedSlotMaterial; // 0x480(0x08)
	struct UMaterial* OccupiedSlotMaterial; // 0x488(0x08)
	struct UMaterial* BlockedSlotMaterial; // 0x490(0x08)
	struct UMaterial* DisabledSlotMaterial; // 0x498(0x08)

	void SetSlotLean(int32_t SlotUserId, bool bLeanRight, bool bLeanLeft); // Function GameplayFramework.Cover.SetSlotLean // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x39065c0
	void SetSlotEnabled(int32_t SlotUserId, bool bInEnable); // Function GameplayFramework.Cover.SetSlotEnabled // (BlueprintAuthorityOnly|Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x39064f0
	void SetCoverEnabled(bool bInEnable); // Function GameplayFramework.Cover.SetCoverEnabled // (BlueprintAuthorityOnly|Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable) // @ game+0x3906460
};

// Class GameplayFramework.TileFloorEventObserver
// Size: 0x255e0 (Inherited: 0x28)
struct UTileFloorEventObserver : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	float TimeBetweenEventsPerTile; // 0x30(0x04)
	char UnknownData_34[0x255ac]; // 0x34(0x255ac)
};

// Class GameplayFramework.UIManager
// Size: 0xe0 (Inherited: 0x28)
struct UUIManager : UObject {
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bWasInitialized : 1; // 0x28(0x01)
	char UnknownData_29[0xf]; // 0x29(0x0f)
	struct UMainUIWidget* MainWidget; // 0x38(0x08)
	char UnknownData_40[0xa0]; // 0x40(0xa0)

	struct UWidget* GetWidgetForComponent(struct UBase3DWidgetComponent* CompOwner); // Function GameplayFramework.UIManager.GetWidgetForComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x393ea50
};

// Class GameplayFramework.VOManager
// Size: 0x210 (Inherited: 0x28)
struct UVOManager : UObject {
	struct TArray<struct UDataTable*> GlobalLists; // 0x28(0x10)
	char UnknownData_38[0x38]; // 0x38(0x38)
	struct AActor* LastInteractedOwner; // 0x70(0x08)
	char UnknownData_78[0x10]; // 0x78(0x10)
	struct TArray<struct ABaseCharacter*> AllCharactersForThisFrame; // 0x88(0x10)
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct TMap<struct FName, struct FVOListData> ListData; // 0xa0(0x50)
	char UnknownData_F0[0x120]; // 0xf0(0x120)

	void StopVOAntfarm(); // Function GameplayFramework.VOManager.StopVOAntfarm // (Final|Native|Public|BlueprintCallable) // @ game+0x393f590
	void StopVO(); // Function GameplayFramework.VOManager.StopVO // (Final|Native|Public|BlueprintCallable) // @ game+0x393f570
	void ResetList(struct TArray<struct FName> Lists); // Function GameplayFramework.VOManager.ResetList // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x393f090
	struct FName PlayVOAntfarm(struct FName Tag, enum class EVOListType Type); // Function GameplayFramework.VOManager.PlayVOAntfarm // (Final|Native|Public|BlueprintCallable) // @ game+0x393eeb0
	bool PlayVO(struct FName Tag, enum class EVOPriority Priority, enum class EVOListType Type, float Delay, bool bReplicate); // Function GameplayFramework.VOManager.PlayVO // (Final|Native|Public|BlueprintCallable) // @ game+0x393ed20
	void OnLevelTransitionStarted(struct FName FromRegionName, struct FName ToRegionName); // Function GameplayFramework.VOManager.OnLevelTransitionStarted // (Native|Public) // @ game+0x393ebd0
	void OnLevelTransitionCompleted(struct FName regionname); // Function GameplayFramework.VOManager.OnLevelTransitionCompleted // (Native|Public) // @ game+0x393eb40
	void EnableStopVO(); // Function GameplayFramework.VOManager.EnableStopVO // (Final|Native|Public|BlueprintCallable) // @ game+0x393e620
	void DisableStopVO(); // Function GameplayFramework.VOManager.DisableStopVO // (Final|Native|Public|BlueprintCallable) // @ game+0x393e590
	bool ContinueVO(); // Function GameplayFramework.VOManager.ContinueVO // (Final|Native|Public|BlueprintCallable) // @ game+0x393e430
	void BreakVO(); // Function GameplayFramework.VOManager.BreakVO // (Final|Native|Public|BlueprintCallable) // @ game+0x393e410
	void BreakRadioVO(); // Function GameplayFramework.VOManager.BreakRadioVO // (Final|Native|Public|BlueprintCallable) // @ game+0x393e3f0
	void BPOnPlayVO(enum class EVOListType ListType, struct FGameplayTag NPC); // Function GameplayFramework.VOManager.BPOnPlayVO // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void BPOnEndVO(); // Function GameplayFramework.VOManager.BPOnEndVO // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
};

// Class GameplayFramework.WeaponType
// Size: 0x28 (Inherited: 0x28)
struct UWeaponType : UObject {
};

// Class GameplayFramework.BaseWorldMapNode
// Size: 0x128 (Inherited: 0x28)
struct UBaseWorldMapNode : UObject {
	struct FMulticastInlineDelegate OnWorldMapNodeTypeChanged; // 0x28(0x10)
	struct FWorldMapNodeBasicData BasicData; // 0x38(0xe8)
	char UnknownData_120[0x8]; // 0x120(0x08)

	void Update(struct UBaseFactManager* FactManager); // Function GameplayFramework.BaseWorldMapNode.Update // (Native|Public|BlueprintCallable) // @ game+0x38fc680
	void SetNodeType(enum class EWorldMapNodeType NewType); // Function GameplayFramework.BaseWorldMapNode.SetNodeType // (Final|Native|Public|BlueprintCallable) // @ game+0x38fc600
	bool IsLocalPlayerOccupyingNode(); // Function GameplayFramework.BaseWorldMapNode.IsLocalPlayerOccupyingNode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38fc440
	bool ExecuteZoomAction(); // Function GameplayFramework.BaseWorldMapNode.ExecuteZoomAction // (Native|Public|BlueprintCallable) // @ game+0x160c170
	bool ExecuteTravelAction(); // Function GameplayFramework.BaseWorldMapNode.ExecuteTravelAction // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c05420
};

// Class GameplayFramework.BaseWorldSettings
// Size: 0x4b8 (Inherited: 0x470)
struct ABaseWorldSettings : AWorldSettings {
	char UnknownData_470_0 : 7; // 0x470(0x01)
	bool bEnabled : 1; // 0x470(0x01)
	char UnknownData_471[0x7]; // 0x471(0x07)
	struct UBaseBiomeData* BiomeData; // 0x478(0x08)
	struct FGameplayTag RegionToUseInPIE; // 0x480(0x08)
	char UnknownData_488[0x30]; // 0x488(0x30)
};

// Class GameplayFramework.BaseWorldStructure
// Size: 0xa0 (Inherited: 0x30)
struct UBaseWorldStructure : UDataAsset {
	char UnknownData_30[0x8]; // 0x30(0x08)
	struct FGameplayTag DebugRegionName; // 0x38(0x08)
	struct FGameplayTag MenuRegionName; // 0x40(0x08)
	struct FGameplayTag MenuSpawnPointName; // 0x48(0x08)
	struct FGameplayTag StartRegionName; // 0x50(0x08)
	struct FGameplayTag HostMigrationRegionName; // 0x58(0x08)
	struct TArray<struct FBasePersistentWorldStructure> PersistentLevels; // 0x60(0x10)
	struct TArray<struct FSimpleRegionConnection> SimpleRegionConnections; // 0x70(0x10)
	struct TArray<struct FSeamlessRegionConnection> SeamlessRegionConnections; // 0x80(0x10)
	struct TArray<struct FCinematicStreamingData> StreamingDataForCinematics; // 0x90(0x10)

	struct TArray<struct FString> GetRegionSubLevels(struct FName regionname, bool bIncludePersistent, bool bIncludeLightScenario, int32_t LightScenarioNumber); // Function GameplayFramework.BaseWorldStructure.GetRegionSubLevels // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38fc1b0
	struct FText GetLocalizedRegionName(struct FName InRegion); // Function GameplayFramework.BaseWorldStructure.GetLocalizedRegionName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38fc0c0
	struct FRegionAreaData GetAreaData(struct FName InRegion, struct FGameplayTag AreaTag); // Function GameplayFramework.BaseWorldStructure.GetAreaData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x38fbf00
	struct AActor* FindActorOrPortal(struct UObject* WorldContextObject, struct FGameplayTag ActorName); // Function GameplayFramework.BaseWorldStructure.FindActorOrPortal // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x38fbe30
};

// Class GameplayFramework.InteractionComponent
// Size: 0x7e0 (Inherited: 0x4f0)
struct UInteractionComponent : USphereComponent {
	char UnknownData_4F0[0x80]; // 0x4f0(0x80)
	struct FNameWrapper InteractionTextKey; // 0x570(0x10)
	struct FMulticastInlineDelegate OnInteracted; // 0x580(0x10)
	struct FMulticastInlineDelegate OnInteractionMontageEnded; // 0x590(0x10)
	struct FMulticastInlineDelegate OnInteractionStart; // 0x5a0(0x10)
	struct FMulticastInlineDelegate OnInteractionInterrupted; // 0x5b0(0x10)
	struct FMulticastInlineDelegate OnInteractionNotify; // 0x5c0(0x10)
	struct FMulticastInlineDelegate OnInteractionEnabled; // 0x5d0(0x10)
	char UnknownData_5E0[0x10]; // 0x5e0(0x10)
	struct FMulticastInlineDelegate OnInteractionAnimStarted; // 0x5f0(0x10)
	struct FInteractionComponentConstraints ConstraintsOnInteractingPawn; // 0x600(0x40)
	char UnknownData_640[0x20]; // 0x640(0x20)
	struct FFactExpression InteractionIsEnabledFactExp; // 0x660(0x18)
	struct UAnimMontage* InteractionMontage; // 0x678(0x08)
	enum class EPlayerSynchronizationType SynchronizationType; // 0x680(0x01)
	char UnknownData_681[0x1]; // 0x681(0x01)
	char UnknownData_682_0 : 7; // 0x682(0x01)
	bool bSynchronizeLocationWithTarget : 1; // 0x682(0x01)
	char UnknownData_683_0 : 7; // 0x683(0x01)
	bool bAllowInteractionWhileTargeting : 1; // 0x683(0x01)
	float ProximityRequired; // 0x684(0x04)
	float OnRangeRequired; // 0x688(0x04)
	struct FName InteractionName; // 0x68c(0x08)
	char UnknownData_694[0x4]; // 0x694(0x04)
	struct FText InteractionText; // 0x698(0x18)
	char UnknownData_6B0_0 : 7; // 0x6b0(0x01)
	bool bEnableInteractionDisabledText : 1; // 0x6b0(0x01)
	char UnknownData_6B1[0x7]; // 0x6b1(0x07)
	struct FText InteractionDisabledText; // 0x6b8(0x18)
	float HoldTime; // 0x6d0(0x04)
	char UnknownData_6D4_0 : 7; // 0x6d4(0x01)
	bool bCanRetrigger : 1; // 0x6d4(0x01)
	char UnknownData_6D5[0x3]; // 0x6d5(0x03)
	float RetriggerDelay; // 0x6d8(0x04)
	float DotCheck; // 0x6dc(0x04)
	char UnknownData_6E0_0 : 7; // 0x6e0(0x01)
	bool bHideWeapon : 1; // 0x6e0(0x01)
	char UnknownData_6E1_0 : 7; // 0x6e1(0x01)
	bool bHideWeaponWithoutAnimation : 1; // 0x6e1(0x01)
	char UnknownData_6E2[0x2]; // 0x6e2(0x02)
	int32_t Priority; // 0x6e4(0x04)
	char UnknownData_6E8_0 : 7; // 0x6e8(0x01)
	bool bAdjustPlayerAimToInteraction : 1; // 0x6e8(0x01)
	char UnknownData_6E9[0x3]; // 0x6e9(0x03)
	float PlayerInteractionAimDuration; // 0x6ec(0x04)
	enum class EInteractionAvailability Availability; // 0x6f0(0x01)
	char UnknownData_6F1_0 : 7; // 0x6f1(0x01)
	bool bInputWasPressedOnEnter : 1; // 0x6f1(0x01)
	char UnknownData_6F2[0x2]; // 0x6f2(0x02)
	int32_t TriggerCount; // 0x6f4(0x04)
	char UnknownData_6F8_0 : 7; // 0x6f8(0x01)
	bool bEnabled : 1; // 0x6f8(0x01)
	char UnknownData_6F9_0 : 7; // 0x6f9(0x01)
	bool bIsInUse : 1; // 0x6f9(0x01)
	char UnknownData_6FA[0x6]; // 0x6fa(0x06)
	struct ABaseCharacter* CharacterUsingIteractionWithAnimation; // 0x700(0x08)
	int32_t PlayerId; // 0x708(0x04)
	float LastTriggerTime; // 0x70c(0x04)
	char UnknownData_710_0 : 7; // 0x710(0x01)
	bool bAlreadyTried : 1; // 0x710(0x01)
	char UnknownData_711[0x7]; // 0x711(0x07)
	struct ABaseCharacter* OverlappingLocalPlayer; // 0x718(0x08)
	char UnknownData_720_0 : 7; // 0x720(0x01)
	bool bIsHoldingInput : 1; // 0x720(0x01)
	char UnknownData_721[0xf]; // 0x721(0x0f)
	struct UActionPromptWidgetComponent* ActionPrompt; // 0x730(0x08)
	struct UInputComponent* InteractionInputComponent; // 0x738(0x08)
	char UnknownData_740_0 : 7; // 0x740(0x01)
	bool bCanOwnerInteract : 1; // 0x740(0x01)
	char UnknownData_741[0x17]; // 0x741(0x17)
	char UnknownData_758_0 : 7; // 0x758(0x01)
	bool bShouldChangeHighlightMaterial : 1; // 0x758(0x01)
	char UnknownData_759[0x7]; // 0x759(0x07)
	struct TArray<struct AActor*> HighlightedMeshActors; // 0x760(0x10)
	char UnknownData_770[0x8]; // 0x770(0x08)
	struct TMap<struct UMeshComponent*, struct FHighlightMaterialLayerMap> HighlightMaterialMap; // 0x778(0x50)
	enum class EInteractionCameraMode CameraMode; // 0x7c8(0x01)
	char UnknownData_7C9[0x3]; // 0x7c9(0x03)
	struct FRotator CameraLimits; // 0x7cc(0x0c)
	char UnknownData_7D8[0x8]; // 0x7d8(0x08)

	void SetInteractionText(struct FText NewText); // Function GameplayFramework.InteractionComponent.SetInteractionText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3929700
	void SetInteractionSoundObject(struct FBaseSoundObject InSoundObject); // Function GameplayFramework.InteractionComponent.SetInteractionSoundObject // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3929650
	void SetInteractionDisabledText(struct FText NewText); // Function GameplayFramework.InteractionComponent.SetInteractionDisabledText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3929580
	void SetEnabled(bool bInEnabled); // Function GameplayFramework.InteractionComponent.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x39293a0
	void OnRep_TriggerCount(); // Function GameplayFramework.InteractionComponent.OnRep_TriggerCount // (Native|Protected) // @ game+0x38e2670
	void OnRep_PlayerId(); // Function GameplayFramework.InteractionComponent.OnRep_PlayerId // (Final|Native|Private) // @ game+0x3929360
	void OnRep_IsInUse(); // Function GameplayFramework.InteractionComponent.OnRep_IsInUse // (Native|Public) // @ game+0x3929340
	void OnRep_Enabled(); // Function GameplayFramework.InteractionComponent.OnRep_Enabled // (Final|Native|Private) // @ game+0x3929320
	void OnRep_CanOwnerInteract(); // Function GameplayFramework.InteractionComponent.OnRep_CanOwnerInteract // (Final|Native|Private) // @ game+0x3929300
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function GameplayFramework.InteractionComponent.OnOverlapEnd // (Native|Public) // @ game+0x39291c0
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function GameplayFramework.InteractionComponent.OnOverlapBegin // (Native|Public|HasOutParms) // @ game+0x3928f60
	void OnBattleStateChanged(bool bInBattle); // Function GameplayFramework.InteractionComponent.OnBattleStateChanged // (Final|Native|Protected) // @ game+0x39289f0
	struct ABasePlayerController* GetPlayerWhoClaimedMe(); // Function GameplayFramework.InteractionComponent.GetPlayerWhoClaimedMe // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39289c0
	void EnableInteractionDisabledText(bool bEnable); // Function GameplayFramework.InteractionComponent.EnableInteractionDisabledText // (Final|Native|Public|BlueprintCallable) // @ game+0x39288e0
	void ClaimForPlayer(struct ABasePlayerController* InPC, bool bClaim); // Function GameplayFramework.InteractionComponent.ClaimForPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x3928810
};

// Class GameplayFramework.ActionPromptUserWidget
// Size: 0x278 (Inherited: 0x230)
struct UActionPromptUserWidget : UUserWidget {
	float ProgressBarValue; // 0x230(0x04)
	char UnknownData_234[0x4]; // 0x234(0x04)
	struct FActionPromptParams PromptParams; // 0x238(0x40)

	void OnShowPrompt(); // Function GameplayFramework.ActionPromptUserWidget.OnShowPrompt // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnPromptParamsChange(); // Function GameplayFramework.ActionPromptUserWidget.OnPromptParamsChange // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnMinimizePrompt(); // Function GameplayFramework.ActionPromptUserWidget.OnMinimizePrompt // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnHidePrompt(); // Function GameplayFramework.ActionPromptUserWidget.OnHidePrompt // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a35c70
};

// Class GameplayFramework.ActionPromptWidgetComponent
// Size: 0x680 (Inherited: 0x620)
struct UActionPromptWidgetComponent : UWidgetComponent {
	struct APlayerController* TargetedPlayerController; // 0x618(0x08)
	float ActivationDistance; // 0x620(0x04)
	float MinVisibleDistance; // 0x624(0x04)
	struct FActionPromptParams PromptParams; // 0x628(0x40)
	char UnknownData_670_0 : 7; // 0x670(0x01)
	bool bIsWidgetVisible : 1; // 0x668(0x01)
	bool bAutoControllVisiblity : 1; // 0x669(0x01)
	struct UActionPromptUserWidget* ActivePromptWidget; // 0x670(0x08)
	char UnknownData_679[0x7]; // 0x679(0x07)

	void Show(bool bStopVisibiltyAutoControll); // Function GameplayFramework.ActionPromptWidgetComponent.Show // (Final|Native|Public|BlueprintCallable) // @ game+0x38d9a70
	void SetPromptParams(struct FActionPromptParams InPromptParams); // Function GameplayFramework.ActionPromptWidgetComponent.SetPromptParams // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x38d9910
	void SetProgressBarValue(float Value); // Function GameplayFramework.ActionPromptWidgetComponent.SetProgressBarValue // (Final|Native|Public|BlueprintCallable) // @ game+0x38d9890
	void SetDisplayOnHud(bool bDisplayOnHud); // Function GameplayFramework.ActionPromptWidgetComponent.SetDisplayOnHud // (Final|Native|Public|BlueprintCallable) // @ game+0x15c2580
	void Minimize(bool bStopVisibiltyAutoControll); // Function GameplayFramework.ActionPromptWidgetComponent.Minimize // (Final|Native|Public|BlueprintCallable) // @ game+0x38d86d0
	bool IsDisplayedOnHud(); // Function GameplayFramework.ActionPromptWidgetComponent.IsDisplayedOnHud // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38d8640
	void Hide(bool bStopVisibilityAutoControll); // Function GameplayFramework.ActionPromptWidgetComponent.Hide // (Final|Native|Public|BlueprintCallable) // @ game+0x38d8510
	struct APlayerController* GetTargetedPlayerController(); // Function GameplayFramework.ActionPromptWidgetComponent.GetTargetedPlayerController // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x38d8120
	struct FActionPromptParams GetPromptParams(); // Function GameplayFramework.ActionPromptWidgetComponent.GetPromptParams // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x38d73c0
	void Destroy(); // Function GameplayFramework.ActionPromptWidgetComponent.Destroy // (Final|Native|Public|BlueprintCallable) // @ game+0x38d7060
};

// Class GameplayFramework.ActionPromptWidgetInterface
// Size: 0x28 (Inherited: 0x28)
struct UActionPromptWidgetInterface : UInterface {
};

// Class GameplayFramework.AIHotSpotConfig
// Size: 0x50 (Inherited: 0x30)
struct UAIHotSpotConfig : UDataAsset {
	struct TArray<struct FAIHotSpotSlotConfig> Slots; // 0x30(0x10)
	char bDetectUnreachableSlots : 1; // 0x40(0x01)
	char UnknownData_40_1 : 7; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
	struct UAIHotSpotSlotGenerator* SlotGenerator; // 0x48(0x08)
};

// Class GameplayFramework.AIHotSpotManagerProxy
// Size: 0xa0 (Inherited: 0x28)
struct UAIHotSpotManagerProxy : UAIHotSpotManager {
	char UnknownData_28[0x78]; // 0x28(0x78)
};

// Class GameplayFramework.AIHotSpotRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UAIHotSpotRenderingComponent : UPrimitiveComponent {
};

// Class GameplayFramework.AIHotSpotSlot
// Size: 0xd0 (Inherited: 0x28)
struct UAIHotSpotSlot : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FTransform LocalTransform; // 0x30(0x30)
	float Height; // 0x60(0x04)
	float Radius; // 0x64(0x04)
	float OverlappingRadiusMultiplier; // 0x68(0x04)
	int32_t UserId; // 0x6c(0x04)
	char bStartEnabled : 1; // 0x70(0x01)
	char bHasCachedAgentData : 1; // 0x70(0x01)
	char bHasOverlappingSlots : 1; // 0x70(0x01)
	char bIsBlockingOthers : 1; // 0x70(0x01)
	char bIsEnabled : 1; // 0x70(0x01)
	char UnknownData_70_5 : 3; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct FSlotOwnershipState OwnershipState; // 0x78(0x10)
	int32_t SlotIndex; // 0x88(0x04)
	char UnknownData_8C[0x44]; // 0x8c(0x44)

	void SetSlotState(enum class EAIHotSpotSlot NewState); // Function GameplayFramework.AIHotSpotSlot.SetSlotState // (Native|Public|BlueprintCallable) // @ game+0x38dd7e0
	void SetSlotOwnerAndState(struct APawn* NewOwner, enum class EAIHotSpotSlot NewState); // Function GameplayFramework.AIHotSpotSlot.SetSlotOwnerAndState // (Native|Public|BlueprintCallable) // @ game+0x38dd710
	void SetSlotEnabled(bool bNewEnabled); // Function GameplayFramework.AIHotSpotSlot.SetSlotEnabled // (Native|Public|BlueprintCallable) // @ game+0x38dd680
	void OnStateChanged(struct APawn* SlotOwner, enum class EAIHotSpotSlot NewState); // Function GameplayFramework.AIHotSpotSlot.OnStateChanged // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnRep_OwnershipState(struct FSlotOwnershipState LastState); // Function GameplayFramework.AIHotSpotSlot.OnRep_OwnershipState // (Final|Native|Protected|HasOutParms) // @ game+0x38dd430
	bool IsEnabled(); // Function GameplayFramework.AIHotSpotSlot.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dd280
	bool IsAIAllowed(struct APawn* Pawn); // Function GameplayFramework.AIHotSpotSlot.IsAIAllowed // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintEvent|Const) // @ game+0x38dd1e0
	bool HasUserId(); // Function GameplayFramework.AIHotSpotSlot.HasUserId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dd0f0
	bool HasOverlappingSlots(); // Function GameplayFramework.AIHotSpotSlot.HasOverlappingSlots // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dd0c0
	int32_t GetSlotUserId(); // Function GameplayFramework.AIHotSpotSlot.GetSlotUserId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dd090
	enum class EAIHotSpotSlot GetSlotState(); // Function GameplayFramework.AIHotSpotSlot.GetSlotState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dd060
	struct FRotator GetSlotRotation(); // Function GameplayFramework.AIHotSpotSlot.GetSlotRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dd020
	float GetSlotRadius(); // Function GameplayFramework.AIHotSpotSlot.GetSlotRadius // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dcff0
	struct APawn* GetSlotOwner(); // Function GameplayFramework.AIHotSpotSlot.GetSlotOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dcfc0
	struct FVector GetSlotLocation(); // Function GameplayFramework.AIHotSpotSlot.GetSlotLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dcf80
	int32_t GetSlotIndex(); // Function GameplayFramework.AIHotSpotSlot.GetSlotIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dcf50
	float GetSlotHeight(); // Function GameplayFramework.AIHotSpotSlot.GetSlotHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dcf20
	struct FBox GetSlotBounds(); // Function GameplayFramework.AIHotSpotSlot.GetSlotBounds // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dced0
	struct AAIHotSpot* GetHotSpot(); // Function GameplayFramework.AIHotSpotSlot.GetHotSpot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dcea0
	void ClearSlot(); // Function GameplayFramework.AIHotSpotSlot.ClearSlot // (Native|Public|BlueprintCallable) // @ game+0xbd3aa0
};

// Class GameplayFramework.AIHotSpotSlotGenerator
// Size: 0x28 (Inherited: 0x28)
struct UAIHotSpotSlotGenerator : UObject {

	struct AAIHotSpot* GetHotSpot(); // Function GameplayFramework.AIHotSpotSlotGenerator.GetHotSpot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dcea0
	void GenerateSlots(); // Function GameplayFramework.AIHotSpotSlotGenerator.GenerateSlots // (Native|Event|Public|BlueprintEvent) // @ game+0x156dca0
	struct UAIHotSpotSlot* AddSlot(struct FVector RelativeLocation, struct FRotator RelativeRotation, struct UAIHotSpotSlot* CustomSlotClass, bool bEnabled); // Function GameplayFramework.AIHotSpotSlotGenerator.AddSlot // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dcbd0
};

// Class GameplayFramework.AIHotSpotSlotGenerator_OnBoundingBox
// Size: 0x70 (Inherited: 0x28)
struct UAIHotSpotSlotGenerator_OnBoundingBox : UAIHotSpotSlotGenerator {
	struct UAIHotSpotSlot* SlotClass; // 0x28(0x08)
	struct FVector MaxExtent; // 0x30(0x0c)
	float ExpandBy; // 0x3c(0x04)
	float OffsetFromEdge; // 0x40(0x04)
	float Spacing; // 0x44(0x04)
	char bLimitMaxExtent : 1; // 0x48(0x01)
	char UnknownData_48_1 : 7; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	enum class EBoundingBoxSlotDirectionCalculation SlotDirectionCalculation; // 0x4c(0x01)
	char UnknownData_4D[0x23]; // 0x4d(0x23)
};

// Class GameplayFramework.AimAssistComponent
// Size: 0x2b0 (Inherited: 0x180)
struct UAimAssistComponent : UActorComponent {
	struct FAimAssistSettings DefaultSettings; // 0x180(0x48)
	struct TArray<struct FAimAssistPerWeaponSettings> PerWeaponSettings; // 0x1c8(0x10)
	float InnerRangeMultiplier; // 0x1d8(0x04)
	float DistanceWeightMultiplier; // 0x1dc(0x04)
	float DotCheck; // 0x1e0(0x04)
	char UnknownData_1E4[0xc0]; // 0x1e4(0xc0)
	float CurrentDamping; // 0x2a4(0x04)
	char UnknownData_2A8_0 : 7; // 0x2a8(0x01)
	bool bDebugAimAssist : 1; // 0x2a8(0x01)
	char UnknownData_2A9_0 : 7; // 0x2a9(0x01)
	bool bEnabled : 1; // 0x2a9(0x01)
	char UnknownData_2AA[0x6]; // 0x2aa(0x06)
};

// Class GameplayFramework.AimTargetInterface
// Size: 0x28 (Inherited: 0x28)
struct UAimTargetInterface : UInterface {

	bool WantsRedCrosshair(struct FHitResult InHit, struct FVector InImpactPoint); // Function GameplayFramework.AimTargetInterface.WantsRedCrosshair // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x38dd9d0
	bool ShouldEnforceGreenCrosshair(); // Function GameplayFramework.AimTargetInterface.ShouldEnforceGreenCrosshair // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x38dd860
	bool HasWeakSpots(struct TArray<struct FAimTargetWeakSpot> OutWeakSpots); // Function GameplayFramework.AimTargetInterface.HasWeakSpots // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x38dd120
};

// Class GameplayFramework.PrebuiltAmbientSound
// Size: 0x310 (Inherited: 0x2f0)
struct APrebuiltAmbientSound : AActor {
	struct TArray<struct FSoundSimpleWaveInfo> SoundWaves; // 0x2f0(0x10)
	struct USoundCue* SoundCue; // 0x300(0x08)
	struct UDynamicAudioComponent* AudioComponent; // 0x308(0x08)
};

// Class GameplayFramework.AmbientSoundNonLoop
// Size: 0x330 (Inherited: 0x310)
struct AAmbientSoundNonLoop : APrebuiltAmbientSound {
	float MinDelay; // 0x310(0x04)
	float MaxDelay; // 0x314(0x04)
	struct TArray<struct USoundNodeDelay*> NodesDelay; // 0x318(0x10)
	struct USoundNodeRandom* NodeRandom; // 0x328(0x08)
};

// Class GameplayFramework.AmbientSoundSimple
// Size: 0x320 (Inherited: 0x310)
struct AAmbientSoundSimple : APrebuiltAmbientSound {
	struct TArray<struct USoundNodeModulator*> WaveNodes; // 0x310(0x10)
};

// Class GameplayFramework.AmbientSoundSpline
// Size: 0x308 (Inherited: 0x2f0)
struct AAmbientSoundSpline : AActor {
	struct USampledSplineComponent* SplineComponent; // 0x2f0(0x08)
	struct UAudioComponent* AudioComponent; // 0x2f8(0x08)
	enum class EApproximationMethod ApproximationMethod; // 0x300(0x01)
	char UnknownData_301[0x7]; // 0x301(0x07)
};

// Class GameplayFramework.AmmoBarWidget
// Size: 0x230 (Inherited: 0x230)
struct UAmmoBarWidget : UUserWidget {

	void SetAmmoValues(int32_t Current, int32_t Max); // Function GameplayFramework.AmmoBarWidget.SetAmmoValues // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
};

// Class GameplayFramework.AmmoComponent
// Size: 0x1a8 (Inherited: 0x180)
struct UAmmoComponent : UActorComponent {
	enum class EAmmoType InfiniteAmmoType; // 0x180(0x01)
	char UnknownData_181[0x7]; // 0x181(0x07)
	struct TArray<int32_t> Ammo; // 0x188(0x10)
	struct TArray<int32_t> AmmoCap; // 0x198(0x10)

	void OnRep_InfiniteAmmoType(); // Function GameplayFramework.AmmoComponent.OnRep_InfiniteAmmoType // (Final|Native|Private) // @ game+0x38dd410
	void OnRep_Ammo(); // Function GameplayFramework.AmmoComponent.OnRep_Ammo // (Final|Native|Private) // @ game+0x38dd410
	int32_t GetAmmo(enum class EAmmoType AmmoType); // Function GameplayFramework.AmmoComponent.GetAmmo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38dcd70
};

// Class GameplayFramework.AnimNotifyEffectsComponent
// Size: 0x240 (Inherited: 0x180)
struct UAnimNotifyEffectsComponent : UActorComponent {
	char UnknownData_180[0x60]; // 0x180(0x60)
	struct UForceFeedbackComponent* SpawnedForceFeedback; // 0x1e0(0x08)
	char UnknownData_1E8[0x8]; // 0x1e8(0x08)
	struct TMap<struct UAnimNotifyState_CharacterEffect*, struct FWeakObjectPtr<struct UCharacterEffectTimed>> ActiveTimedEffects; // 0x1f0(0x50)
};

// Class GameplayFramework.AsyncOverlapComponent
// Size: 0x410 (Inherited: 0x180)
struct UAsyncOverlapComponent : UActorComponent {
	struct FMulticastInlineDelegate AsyncOverlapTick; // 0x180(0x10)
	struct FMulticastInlineDelegate AsyncOverlapBegin; // 0x190(0x10)
	struct FMulticastInlineDelegate AsyncOverlapEnded; // 0x1a0(0x10)
	struct FMulticastInlineDelegate AsyncOverlapRequestEnded; // 0x1b0(0x10)
	struct TSet<enum class ECollisionChannel> CollisionChannelToQuery; // 0x1c0(0x50)
	struct FRawDistributionVector Scale; // 0x210(0x48)
	float StaticBoxX; // 0x258(0x04)
	float SphereBoxY; // 0x25c(0x04)
	float BoxZ; // 0x260(0x04)
	float ProgressLimit; // 0x264(0x04)
	float MovementSpeed; // 0x268(0x04)
	float MovementStep; // 0x26c(0x04)
	enum class EAsyncOverlapCompShape ShapeEnumC; // 0x270(0x01)
	enum class EAsyncOverlapCompProgress ScaleProgress; // 0x271(0x01)
	enum class EAsyncOverlapCompProgress ProgressType; // 0x272(0x01)
	enum class EMobilityType FilterMobility; // 0x273(0x01)
	char UnknownData_274_0 : 7; // 0x274(0x01)
	bool bMoveWithActor : 1; // 0x274(0x01)
	char UnknownData_275_0 : 7; // 0x275(0x01)
	bool bAllowMovement : 1; // 0x275(0x01)
	char UnknownData_276[0x19a]; // 0x276(0x19a)

	bool StartOverlapChecks(struct FVector StartPosition, struct FVector MovementDirection, struct FRotator Rotation); // Function GameplayFramework.AsyncOverlapComponent.StartOverlapChecks // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38dd890
	struct FCollisionShapeBPWrapper GetCollisionShapeForProgress(float Progress); // Function GameplayFramework.AsyncOverlapComponent.GetCollisionShapeForProgress // (Final|Native|Public|BlueprintCallable) // @ game+0x38dce00
	void EndOverlapChecks(); // Function GameplayFramework.AsyncOverlapComponent.EndOverlapChecks // (Final|Native|Public|BlueprintCallable) // @ game+0x38dcd50
};

// Class GameplayFramework.AutoBlockingVolume
// Size: 0x310 (Inherited: 0x2f0)
struct AAutoBlockingVolume : AActor {
	struct TArray<struct AStaticMeshActor*> BoundStaticMeshes; // 0x2f0(0x10)
	enum class EBlockingVolumeGenerationType BlockingVolumeGenerationType; // 0x300(0x01)
	char UnknownData_301[0x7]; // 0x301(0x07)
	struct UAutoBlockingVolumeComponent* BlockingComponent; // 0x308(0x08)
};

// Class GameplayFramework.AutoBlockingVolumeComponent
// Size: 0x4e0 (Inherited: 0x4d0)
struct UAutoBlockingVolumeComponent : UPrimitiveComponent {
	struct UBodySetup* BodySetup; // 0x4d0(0x08)
	char UnknownData_4D8[0x8]; // 0x4d8(0x08)
};

// Class GameplayFramework.BaseBiomeData
// Size: 0x48 (Inherited: 0x30)
struct UBaseBiomeData : UDataAsset {
	struct TArray<SoftClassProperty> Characters; // 0x30(0x10)
	char UnknownData_40[0x8]; // 0x40(0x08)
};

// Class GameplayFramework.BaseCustomizationGlobals
// Size: 0x198 (Inherited: 0x30)
struct UBaseCustomizationGlobals : UDataAsset {
	struct UDataTable* LiteMaterialGroups; // 0x30(0x08)
	struct UDataTable* LiteMaterialGroupUsers; // 0x38(0x08)
	struct TMap<struct FName, struct FCustomizationColorSet> SkinColorPresets; // 0x40(0x50)
	char UnknownData_90[0xa8]; // 0x90(0xa8)
	struct UDataTable* GameplayCueGroups; // 0x138(0x08)
	char UnknownData_140[0x58]; // 0x140(0x58)
};

// Class GameplayFramework.BaseFactManager
// Size: 0x198 (Inherited: 0x180)
struct UBaseFactManager : UActorComponent {
	struct FReplicatedRegionConnection LastRegionConnection; // 0x180(0x14)
	char UnknownData_194[0x4]; // 0x194(0x04)

	void GetFactCustomNode(struct FName FactName, bool OutBool, int32_t OutInt, float OutFloat, struct FString OutString, bool OutFound); // Function GameplayFramework.BaseFactManager.GetFactCustomNode // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e97e0
	struct FFactQueryResult GetFact(struct FName FactKey); // Function GameplayFramework.BaseFactManager.GetFact // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38e96f0
	void AddOrUpdateStringFact(struct FName FactKey, struct FString Value); // Function GameplayFramework.BaseFactManager.AddOrUpdateStringFact // (Native|Public|BlueprintCallable) // @ game+0x38e9160
	void AddOrUpdateIntegerFact(struct FName FactKey, int32_t Value); // Function GameplayFramework.BaseFactManager.AddOrUpdateIntegerFact // (Native|Public|BlueprintCallable) // @ game+0x38e9090
	void AddOrUpdateFloatFact(struct FName FactKey, float Value); // Function GameplayFramework.BaseFactManager.AddOrUpdateFloatFact // (Native|Public|BlueprintCallable) // @ game+0x38e8fc0
	void AddOrUpdateFactCustomNode(struct FName FactName, enum class EFactValueType FactType, bool BoolValue, int32_t IntValue, float FloatValue, struct FString StringValue, int32_t Index); // Function GameplayFramework.BaseFactManager.AddOrUpdateFactCustomNode // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x38e8d50
	void AddOrUpdateBoolFact(struct FName FactKey, bool Value); // Function GameplayFramework.BaseFactManager.AddOrUpdateBoolFact // (Native|Public|BlueprintCallable) // @ game+0x38e8c80
};

// Class GameplayFramework.BaseNamedActor
// Size: 0x28 (Inherited: 0x28)
struct UBaseNamedActor : UInterface {

	struct FGameplayTag GetGameplayName(); // Function GameplayFramework.BaseNamedActor.GetGameplayName // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x38ef570
};

// Class GameplayFramework.BaseQuest
// Size: 0x290 (Inherited: 0xd8)
struct UBaseQuest : UQuestEventHandler {
	struct TArray<struct UBaseObjective*> CachedObjectives; // 0xd8(0x10)
	char UnknownData_E8[0xa8]; // 0xe8(0xa8)
	struct FFactExpression UnlockExpression; // 0x190(0x18)
	struct FFactExpression DenyRollbackExpression; // 0x1a8(0x18)
	char UnknownData_1C0_0 : 7; // 0x1c0(0x01)
	bool bTracked : 1; // 0x1c0(0x01)
	char UnknownData_1C1[0x7]; // 0x1c1(0x07)
	struct FText QuestName; // 0x1c8(0x18)
	enum class EQuestType QuestType; // 0x1e0(0x01)
	char UnknownData_1E1_0 : 7; // 0x1e1(0x01)
	bool bIsSinglePlayer : 1; // 0x1e1(0x01)
	char UnknownData_1E2_0 : 7; // 0x1e2(0x01)
	bool bRepeatable : 1; // 0x1e2(0x01)
	char UnknownData_1E3[0x5]; // 0x1e3(0x05)
	struct TArray<struct UBaseObjective*> Objectives; // 0x1e8(0x10)
	struct UBaseObjective* FinalObjective; // 0x1f8(0x08)
	struct UBaseObjective* LastSharedObjective; // 0x200(0x08)
	int32_t MinObjectiveLevel; // 0x208(0x04)
	char UnknownData_20C[0x4]; // 0x20c(0x04)
	struct FGameplayTagContainer CancelForbiddenAreas; // 0x210(0x20)
	struct FGameplayTag QuestGiverArea; // 0x230(0x08)
	char UnknownData_238_0 : 7; // 0x238(0x01)
	bool bSuppressCompletionUIPrompt : 1; // 0x238(0x01)
	char UnknownData_239_0 : 7; // 0x239(0x01)
	bool bShowQuestIsAlreadyInProgressInfo : 1; // 0x239(0x01)
	char UnknownData_23A[0x6]; // 0x23a(0x06)
	struct FQuestMarkerIcon CustomMarkeIcon; // 0x240(0x18)
	struct FQuestMarkerIcon LastStageMarkerIcon; // 0x258(0x18)
	char UnknownData_270[0x4]; // 0x270(0x04)
	char UnknownData_274_0 : 7; // 0x274(0x01)
	bool bCompleteFirstObjective : 1; // 0x274(0x01)
	char UnknownData_275[0x3]; // 0x275(0x03)
	struct AQuestManager* QuestManagerOwner; // 0x278(0x08)
	char UnknownData_280_0 : 7; // 0x280(0x01)
	bool bIsPrologueQuest : 1; // 0x280(0x01)
	char UnknownData_281[0x7]; // 0x281(0x07)
	struct UBaseQuestPool* QuestPool; // 0x288(0x08)

	bool IsPartOfActiveObjective(struct TScriptInterface<None> QuestObject); // Function GameplayFramework.BaseQuest.IsPartOfActiveObjective // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38f6be0
	struct TArray<struct AActor*> GetTrackableActors(); // Function GameplayFramework.BaseQuest.GetTrackableActors // (Native|Public|BlueprintCallable) // @ game+0x38f6ae0
	struct AQuestManager* GetQuestManagerOwner(); // Function GameplayFramework.BaseQuest.GetQuestManagerOwner // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38f6ab0
	struct FSlateBrush GetMarkerBrush(); // Function GameplayFramework.BaseQuest.GetMarkerBrush // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38f6a00
	void GetAllObjectives(struct TArray<struct UBaseObjective*> OutObjectives, bool bIncludeHidden); // Function GameplayFramework.BaseQuest.GetAllObjectives // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x38f68a0
	void GetAllActiveObjectives(struct TArray<struct UBaseObjective*> OutObjectives); // Function GameplayFramework.BaseQuest.GetAllActiveObjectives // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x38f67f0
};

// Class GameplayFramework.BaseTeamSyncTask
// Size: 0x30 (Inherited: 0x28)
struct UBaseTeamSyncTask : UObject {
	enum class ETeamSyncReason SyncReason; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// Class GameplayFramework.TeamSyncTask_StartLoadingMovie
// Size: 0x38 (Inherited: 0x30)
struct UTeamSyncTask_StartLoadingMovie : UBaseTeamSyncTask {
	struct FName DestinationRegion; // 0x30(0x08)
};

// Class GameplayFramework.TeamSyncTask_FinishResourceStreaming
// Size: 0x38 (Inherited: 0x30)
struct UTeamSyncTask_FinishResourceStreaming : UBaseTeamSyncTask {
	char UnknownData_30[0x8]; // 0x30(0x08)
};

// Class GameplayFramework.TeamSyncTask_HideLoadingScreen
// Size: 0x30 (Inherited: 0x30)
struct UTeamSyncTask_HideLoadingScreen : UBaseTeamSyncTask {
};

// Class GameplayFramework.TeamSyncTask_SetAndWaitForUIState
// Size: 0x50 (Inherited: 0x30)
struct UTeamSyncTask_SetAndWaitForUIState : UBaseTeamSyncTask {
	struct FName UIStateName; // 0x30(0x08)
	struct FString Params; // 0x38(0x10)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bHasLockedUIState : 1; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class GameplayFramework.TeamSyncTask_EnqueueGlobalEvent
// Size: 0x38 (Inherited: 0x30)
struct UTeamSyncTask_EnqueueGlobalEvent : UBaseTeamSyncTask {
	struct FName EventName; // 0x30(0x08)
};

// Class GameplayFramework.TeamSyncTask_GC
// Size: 0x38 (Inherited: 0x30)
struct UTeamSyncTask_GC : UBaseTeamSyncTask {
	float TaskStartedTime; // 0x30(0x04)
	float TaskDuration; // 0x34(0x04)
};

// Class GameplayFramework.TeamSyncTask_Delay
// Size: 0x38 (Inherited: 0x30)
struct UTeamSyncTask_Delay : UBaseTeamSyncTask {
	float DelayDuration; // 0x30(0x04)
	float TaskStartedTime; // 0x34(0x04)
};

// Class GameplayFramework.TeamSyncTask_PlayersPickAllLoot
// Size: 0x30 (Inherited: 0x30)
struct UTeamSyncTask_PlayersPickAllLoot : UBaseTeamSyncTask {
};

// Class GameplayFramework.TeamSyncTask_PlayersStartTransition
// Size: 0x38 (Inherited: 0x30)
struct UTeamSyncTask_PlayersStartTransition : UBaseTeamSyncTask {
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bTransitionFromMenu : 1; // 0x30(0x01)
	char UnknownData_31_0 : 7; // 0x31(0x01)
	bool bNoPlayerStopping : 1; // 0x31(0x01)
	char UnknownData_32[0x6]; // 0x32(0x06)
};

// Class GameplayFramework.TeamSyncTask_PlayersEndTransition
// Size: 0x38 (Inherited: 0x30)
struct UTeamSyncTask_PlayersEndTransition : UBaseTeamSyncTask {
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bTransitionFromMenu : 1; // 0x30(0x01)
	char UnknownData_31_0 : 7; // 0x31(0x01)
	bool bNoTransitionEvents : 1; // 0x31(0x01)
	char UnknownData_32_0 : 7; // 0x32(0x01)
	bool bNoPlayerStopping : 1; // 0x32(0x01)
	char UnknownData_33[0x5]; // 0x33(0x05)
};

// Class GameplayFramework.TeamSyncTask_RegionStartedEvent
// Size: 0x38 (Inherited: 0x30)
struct UTeamSyncTask_RegionStartedEvent : UBaseTeamSyncTask {
	enum class ERegionStartedState RegionStartedState; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class GameplayFramework.TeamSyncTask_FadeOut
// Size: 0x38 (Inherited: 0x30)
struct UTeamSyncTask_FadeOut : UBaseTeamSyncTask {
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bShort : 1; // 0x30(0x01)
	char UnknownData_31_0 : 7; // 0x31(0x01)
	bool bSendRTMPEvent : 1; // 0x31(0x01)
	char UnknownData_32[0x6]; // 0x32(0x06)
};

// Class GameplayFramework.TeamSyncTask_FadeIn
// Size: 0x38 (Inherited: 0x30)
struct UTeamSyncTask_FadeIn : UBaseTeamSyncTask {
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bShort : 1; // 0x30(0x01)
	char UnknownData_31_0 : 7; // 0x31(0x01)
	bool bSendRTMPEvent : 1; // 0x31(0x01)
	char UnknownData_32[0x6]; // 0x32(0x06)
};

// Class GameplayFramework.TeamSyncTask_StreamLevels
// Size: 0xa8 (Inherited: 0x30)
struct UTeamSyncTask_StreamLevels : UBaseTeamSyncTask {
	struct TArray<struct FName> LevelsToUnload; // 0x30(0x10)
	struct TArray<struct FName> LevelsToLoad; // 0x40(0x10)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bShowAfterLoad : 1; // 0x50(0x01)
	char UnknownData_51_0 : 7; // 0x51(0x01)
	bool bTaskUnloadsLevels : 1; // 0x51(0x01)
	char UnknownData_52[0x2]; // 0x52(0x02)
	float LastDebugTime; // 0x54(0x04)
	struct TMap<struct FName, struct FLevelStreamingHelper> LevelStreamingHelperMap; // 0x58(0x50)
};

// Class GameplayFramework.TeamSyncTask_WaitForCustomizationsFullLoad
// Size: 0x40 (Inherited: 0x30)
struct UTeamSyncTask_WaitForCustomizationsFullLoad : UBaseTeamSyncTask {
	struct TArray<struct FName> LevelsToLoad; // 0x30(0x10)
};

// Class GameplayFramework.TeamSyncTask_BuildCovers
// Size: 0x38 (Inherited: 0x30)
struct UTeamSyncTask_BuildCovers : UBaseTeamSyncTask {
	char UnknownData_30[0x8]; // 0x30(0x08)
};

// Class GameplayFramework.TeamSyncTask_StreamLevelsNoWait
// Size: 0xa8 (Inherited: 0xa8)
struct UTeamSyncTask_StreamLevelsNoWait : UTeamSyncTask_StreamLevels {
};

// Class GameplayFramework.TeamSyncTask_ShowLevels
// Size: 0xb0 (Inherited: 0xa8)
struct UTeamSyncTask_ShowLevels : UTeamSyncTask_StreamLevels {
	char UnknownData_A8_0 : 7; // 0xa8(0x01)
	bool bOnlyWait : 1; // 0xa8(0x01)
	char UnknownData_A9[0x7]; // 0xa9(0x07)
};

// Class GameplayFramework.TeamSyncTask_PrepareRegion
// Size: 0x40 (Inherited: 0x30)
struct UTeamSyncTask_PrepareRegion : UBaseTeamSyncTask {
	struct TArray<struct FName> LevelsToShow; // 0x30(0x10)
};

// Class GameplayFramework.TeamSyncTask_WaitForPrepareToFinish
// Size: 0xa8 (Inherited: 0xa8)
struct UTeamSyncTask_WaitForPrepareToFinish : UTeamSyncTask_StreamLevels {
};

// Class GameplayFramework.TeamSyncTask_CommitRegion
// Size: 0x30 (Inherited: 0x30)
struct UTeamSyncTask_CommitRegion : UBaseTeamSyncTask {
};

// Class GameplayFramework.TeamSyncTask_WaitForSequenceToFinish
// Size: 0x30 (Inherited: 0x30)
struct UTeamSyncTask_WaitForSequenceToFinish : UBaseTeamSyncTask {
};

// Class GameplayFramework.TeamSyncTask_LoadCinematic
// Size: 0x50 (Inherited: 0x30)
struct UTeamSyncTask_LoadCinematic : UBaseTeamSyncTask {
	char UnknownData_30[0x8]; // 0x30(0x08)
	struct FSoftObjectPath LevelSequencePath; // 0x38(0x18)
};

// Class GameplayFramework.TeamSyncTask_UnloadCinematic
// Size: 0x48 (Inherited: 0x30)
struct UTeamSyncTask_UnloadCinematic : UBaseTeamSyncTask {
	struct FSoftObjectPath LevelSequencePath; // 0x30(0x18)
};

// Class GameplayFramework.TeamSyncTask_PostCineScriptDelegate
// Size: 0x40 (Inherited: 0x30)
struct UTeamSyncTask_PostCineScriptDelegate : UBaseTeamSyncTask {
	char UnknownData_30[0x10]; // 0x30(0x10)
};

// Class GameplayFramework.TeamSyncTask_PlaySequence
// Size: 0x58 (Inherited: 0x30)
struct UTeamSyncTask_PlaySequence : UBaseTeamSyncTask {
	struct FSoftObjectPath LevelSequencePath; // 0x30(0x18)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bHideConvoyCamp : 1; // 0x48(0x01)
	char UnknownData_49_0 : 7; // 0x49(0x01)
	bool bHideHeadGear : 1; // 0x49(0x01)
	char UnknownData_4A_0 : 7; // 0x4a(0x01)
	bool bHideHandGear : 1; // 0x4a(0x01)
	char UnknownData_4B_0 : 7; // 0x4b(0x01)
	bool bBlockPlayerMovement : 1; // 0x4b(0x01)
	char UnknownData_4C_0 : 7; // 0x4c(0x01)
	bool bBlockPlayerTurning : 1; // 0x4c(0x01)
	enum class ESequenceWeaponVisibility WeaponsVisibility; // 0x4d(0x01)
	char UnknownData_4E[0x2]; // 0x4e(0x02)
	struct AActor* OriginActor; // 0x50(0x08)
};

// Class GameplayFramework.TeamSyncTask_VisibilityForActors
// Size: 0x48 (Inherited: 0x30)
struct UTeamSyncTask_VisibilityForActors : UBaseTeamSyncTask {
	struct TArray<struct AActor*> ActorsToChange; // 0x30(0x10)
	char UnknownData_40_0 : 7; // 0x40(0x01)
	bool bShow : 1; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// Class GameplayFramework.TeamSyncTask_TeleportPlayers
// Size: 0x70 (Inherited: 0x30)
struct UTeamSyncTask_TeleportPlayers : UBaseTeamSyncTask {
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bSaveCheckpoint : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct ACoopPlayerStart* TeleportToSpot; // 0x38(0x08)
	struct FGameplayTagContainer SpawnPointsTags; // 0x40(0x20)
	struct FName ExpectedRegion; // 0x60(0x08)
	float TaskStartedTime; // 0x68(0x04)
	float TaskDuration; // 0x6c(0x04)
};

// Class GameplayFramework.TeamSyncTask_PlayingMovie
// Size: 0x38 (Inherited: 0x30)
struct UTeamSyncTask_PlayingMovie : UBaseTeamSyncTask {
	struct UMediaSource* MediaSource; // 0x30(0x08)
};

// Class GameplayFramework.TeamSyncTask_WaitForMovieToFinish
// Size: 0x30 (Inherited: 0x30)
struct UTeamSyncTask_WaitForMovieToFinish : UBaseTeamSyncTask {
};

// Class GameplayFramework.TeamSyncTask_WaitForPawnsToDie
// Size: 0x30 (Inherited: 0x30)
struct UTeamSyncTask_WaitForPawnsToDie : UBaseTeamSyncTask {
};

// Class GameplayFramework.TeamSyncTask_StartQuestForAllPlayers
// Size: 0x40 (Inherited: 0x30)
struct UTeamSyncTask_StartQuestForAllPlayers : UBaseTeamSyncTask {
	struct FName ObjectiveToStart; // 0x30(0x08)
	struct UBaseQuest* QuestToStart; // 0x38(0x08)
};

// Class GameplayFramework.TeamSyncTask_ShowDestination
// Size: 0x50 (Inherited: 0x30)
struct UTeamSyncTask_ShowDestination : UBaseTeamSyncTask {
	struct FName Destination; // 0x30(0x08)
	struct FString TransitionContext; // 0x38(0x10)
	char UnknownData_48[0x8]; // 0x48(0x08)
};

// Class GameplayFramework.TeamSyncTask_SetIsReloadingLevel
// Size: 0x30 (Inherited: 0x30)
struct UTeamSyncTask_SetIsReloadingLevel : UBaseTeamSyncTask {
};

// Class GameplayFramework.TeamSyncTask_PhysxMemoryCleanUp
// Size: 0x38 (Inherited: 0x30)
struct UTeamSyncTask_PhysxMemoryCleanUp : UBaseTeamSyncTask {
	char UnknownData_30[0x8]; // 0x30(0x08)
};

// Class GameplayFramework.TeamSyncTask_DemoStart
// Size: 0x38 (Inherited: 0x30)
struct UTeamSyncTask_DemoStart : UBaseTeamSyncTask {
	char UnknownData_30[0x8]; // 0x30(0x08)
};

// Class GameplayFramework.BaseWorldMap
// Size: 0x190 (Inherited: 0x180)
struct UBaseWorldMap : UActorComponent {
	struct TArray<struct UBaseWorldMapNode*> Nodes; // 0x180(0x10)

	void UpdateNodes(); // Function GameplayFramework.BaseWorldMap.UpdateNodes // (Final|Native|Public|BlueprintCallable) // @ game+0x38fc710
	struct TArray<struct UBaseWorldMapNode*> GetWorldNodes(); // Function GameplayFramework.BaseWorldMap.GetWorldNodes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38fc3c0
};

// Class GameplayFramework.WorldMapNodesDataAsset
// Size: 0x80 (Inherited: 0x30)
struct UWorldMapNodesDataAsset : UDataAsset {
	struct FText UnknownRegonDescription; // 0x30(0x18)
	struct FText UnknownRegionTitle; // 0x48(0x18)
	struct TArray<struct FWorldMapNodeBasicData> WorldNodes; // 0x60(0x10)
	struct TArray<struct FWorldMapNodeConnection> NodeConnections; // 0x70(0x10)
};

// Class GameplayFramework.CameraModifier_DOFBlur
// Size: 0x80 (Inherited: 0x48)
struct UCameraModifier_DOFBlur : UCameraModifier {
	float DepthOfFieldFstop; // 0x48(0x04)
	float DepthOfFieldMinFstop; // 0x4c(0x04)
	int32_t DepthOfFieldBladeCount; // 0x50(0x04)
	float DepthOfFieldSensorWidth; // 0x54(0x04)
	float DepthOfFieldFocalDistance; // 0x58(0x04)
	float DepthOfFieldFocalRegion; // 0x5c(0x04)
	float DepthOfFieldNearTransitionRegion; // 0x60(0x04)
	float DepthOfFieldFarTransitionRegion; // 0x64(0x04)
	float DepthOfFieldNearBlurSize; // 0x68(0x04)
	float DepthOfFieldFarBlurSize; // 0x6c(0x04)
	float DepthOfFieldSkyFocusDistance; // 0x70(0x04)
	float DepthOfFieldVignetteSize; // 0x74(0x04)
	float DepthOfFieldDepthBlurAmount; // 0x78(0x04)
	float DepthOfFieldDepthBlurRadius; // 0x7c(0x04)
};

// Class GameplayFramework.ChatterAIMapping
// Size: 0x80 (Inherited: 0x30)
struct UChatterAIMapping : UDataAsset {
	struct TMap<enum class EAIChatterType, struct FNameWrapper> Mapping; // 0x30(0x50)
};

// Class GameplayFramework.ChatterComponent
// Size: 0x930 (Inherited: 0x910)
struct UChatterComponent : UAudioComponent {
	struct UChatterManager* ChatterManager; // 0x908(0x08)
	struct AActor* Source; // 0x910(0x08)
	struct FName SpeakerID; // 0x918(0x08)
	struct FName VoiceID; // 0x920(0x08)
};

// Class GameplayFramework.ChatterInterface
// Size: 0x28 (Inherited: 0x28)
struct UChatterInterface : UInterface {

	bool RespondTo(struct FName ChatterID, struct AActor* Source); // Function GameplayFramework.ChatterInterface.RespondTo // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
};

// Class GameplayFramework.ChatterPlayerMapping
// Size: 0x80 (Inherited: 0x30)
struct UChatterPlayerMapping : UDataAsset {
	struct TMap<enum class EPlayerChatterType, struct FNameWrapper> Mapping; // 0x30(0x50)
};

// Class GameplayFramework.ChatterVoiceSettings
// Size: 0x50 (Inherited: 0x30)
struct UChatterVoiceSettings : UDataAsset {
	float PlaybackTimeThreshold; // 0x30(0x04)
	char UnknownData_34_0 : 7; // 0x34(0x01)
	bool bGenerateResponse : 1; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
	float Probability; // 0x38(0x04)
	struct FLinearColor DebugColor; // 0x3c(0x10)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class GameplayFramework.ChatterVoiceWrapper
// Size: 0xc0 (Inherited: 0x28)
struct UChatterVoiceWrapper : UObject {
	struct FPrimaryChatterVoiceSettings Settings; // 0x28(0x98)
};

// Class GameplayFramework.ChatterSpeaker
// Size: 0x88 (Inherited: 0x30)
struct UChatterSpeaker : UDataAsset {
	struct FName SpeakerID; // 0x30(0x08)
	struct TMap<struct FName, struct UChatterVoiceWrapper*> Voices; // 0x38(0x50)
};

// Class GameplayFramework.CoopSyncActor
// Size: 0x3d8 (Inherited: 0x2f0)
struct ACoopSyncActor : AActor {
	char UnknownData_2F0[0x10]; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnCoopSyncCompleted; // 0x300(0x10)
	struct FMulticastInlineDelegate OnCoopSyncFailed; // 0x310(0x10)
	struct FNameWrapper SyncTextKey; // 0x320(0x10)
	struct FNameWrapper TransitionTextKey; // 0x330(0x10)
	char UnknownData_340_0 : 7; // 0x340(0x01)
	bool bHasSynced : 1; // 0x340(0x01)
	char UnknownData_341[0x3]; // 0x341(0x03)
	struct FFactNameFromList VisibilityFact; // 0x344(0x08)
	char UnknownData_34C[0x4]; // 0x34c(0x04)
	struct FFactExpression SyncIsVisibleFactExp; // 0x350(0x18)
	struct FGameplayTag RegionIAmIn; // 0x368(0x08)
	struct UStaticMesh* MarkerMesh; // 0x370(0x08)
	struct UStaticMeshComponent* MarkerMeshComponent; // 0x378(0x08)
	struct UChildActorComponent* QuestMarkerComponent; // 0x380(0x08)
	struct FGameplayTag TransitionToRegion; // 0x388(0x08)
	struct FText CustomTransitionText; // 0x390(0x18)
	char UnknownData_3A8_0 : 7; // 0x3a8(0x01)
	bool bStartDisabled : 1; // 0x3a8(0x01)
	char UnknownData_3A9[0x7]; // 0x3a9(0x07)
	struct UInteractionComponent* MainInteractionComponent; // 0x3b0(0x08)
	char UnknownData_3B8_0 : 7; // 0x3b8(0x01)
	bool bDontKillCharactersOnSync : 1; // 0x3b8(0x01)
	char UnknownData_3B9_0 : 7; // 0x3b9(0x01)
	bool bUseSpotsInLine : 1; // 0x3b9(0x01)
	char UnknownData_3BA[0x2]; // 0x3ba(0x02)
	struct FGameplayTag GameplayName; // 0x3bc(0x08)
	float PlayerDistanceFromCenter; // 0x3c4(0x04)
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)

	void SetDebug(bool bSet); // Function GameplayFramework.CoopSyncActor.SetDebug // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x15a7880
	void ResetCoopSync(bool bAutoAcceptForOverlappingPlayers); // Function GameplayFramework.CoopSyncActor.ResetCoopSync // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3906390
	void Reset(); // Function GameplayFramework.CoopSyncActor.Reset // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x1661ad0
	void OnOverlapEndCallback(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function GameplayFramework.CoopSyncActor.OnOverlapEndCallback // (Final|Native|Public) // @ game+0x3906070
	void OnOverlapBeginCallback(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function GameplayFramework.CoopSyncActor.OnOverlapBeginCallback // (Final|Native|Public|HasOutParms) // @ game+0x3905e00
	void OnInteracted(struct ABaseCharacter* InteractingPawn, struct UInteractionComponent* InteractedWith); // Function GameplayFramework.CoopSyncActor.OnInteracted // (Final|Native|Protected) // @ game+0x3905cc0
	void Disable(); // Function GameplayFramework.CoopSyncActor.Disable // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3905c00
};

// Class GameplayFramework.CoopSyncStrategyInterface
// Size: 0x28 (Inherited: 0x28)
struct UCoopSyncStrategyInterface : UInterface {
};

// Class GameplayFramework.CoverBoxRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UCoverBoxRenderingComponent : UPrimitiveComponent {
};

// Class GameplayFramework.CoverLineComponent
// Size: 0x198 (Inherited: 0x180)
struct UCoverLineComponent : UActorComponent {
	struct TArray<struct FSlotsLine> Lines; // 0x180(0x10)
	int32_t NextLineId; // 0x190(0x04)
	char UnknownData_194[0x4]; // 0x194(0x04)
};

// Class GameplayFramework.CoverActorRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UCoverActorRenderingComponent : UAIHotSpotRenderingComponent {
};

// Class GameplayFramework.CoverSlot
// Size: 0x200 (Inherited: 0xd0)
struct UCoverSlot : UAIHotSpotSlot {
	enum class ECoverSlotPlacementType PlacementType; // 0xc8(0x01)
	enum class ECoverSlotType SlotType; // 0xc9(0x01)
	struct UCoverSlot* ConnectedSlotLeft; // 0xd0(0x08)
	struct UCoverSlot* ConnectedSlotRight; // 0xd8(0x08)
	char bAutoAdjust : 1; // 0xe0(0x01)
	char bCanMantle : 1; // 0xe0(0x01)
	char bCanClimb : 1; // 0xe0(0x01)
	char bAutoActions : 1; // 0xe0(0x01)
	char bCanPopUp : 1; // 0xe0(0x01)
	char bCanLeanLeft : 1; // 0xe0(0x01)
	char bCanLeanRight : 1; // 0xe0(0x01)
	char bCanLeanForward : 1; // 0xe0(0x01)
	char bCanSwatTurn : 1; // 0xe1(0x01)
	char bPlayersOnly : 1; // 0xe1(0x01)
	char bTraversalOnly : 1; // 0xe1(0x01)
	char bCanSprintLeft : 1; // 0xe1(0x01)
	char bCanSprintRight : 1; // 0xe1(0x01)
	char bLeanLeftValid : 1; // 0xe1(0x01)
	char bLeanRightValid : 1; // 0xe1(0x01)
	char UnknownData_E3[0x5]; // 0xe3(0x05)
	struct TArray<struct FCoverSlotMantleLinkData> MantleLinksData; // 0xe8(0x10)
	char UnknownData_F8[0x3c]; // 0xf8(0x3c)
	uint32_t ActionSignature; // 0x134(0x04)
	struct TArray<struct ACover*> IgnoreCollisionCheckForCoverToCoverPurpose; // 0x138(0x10)
	char UnknownData_148[0x8]; // 0x148(0x08)
	struct APawn* LastSlotOwner; // 0x150(0x08)
	struct TMap<struct TSoftObjectPtr<struct UCoverSlot>, uint16> FireLinks; // 0x158(0x50)
	char UnknownData_1A8[0x58]; // 0x1a8(0x58)
};

// Class GameplayFramework.DeformationsVolume
// Size: 0x360 (Inherited: 0x328)
struct ADeformationsVolume : AVolume {
	float DirectionalDeformationsFalloff; // 0x328(0x04)
	float DistanceDeformationsFalloff; // 0x32c(0x04)
	float SkillDeformationsAmplify; // 0x330(0x04)
	float SqueezeDeformationsAmplify; // 0x334(0x04)
	char UnknownData_338_0 : 7; // 0x338(0x01)
	bool bChangeDirectionalDeformationsFalloff : 1; // 0x338(0x01)
	char UnknownData_339_0 : 7; // 0x339(0x01)
	bool bChangeDistanceDeformationsFalloff : 1; // 0x339(0x01)
	char UnknownData_33A_0 : 7; // 0x33a(0x01)
	bool bChangeSkillDeformationsAmplify : 1; // 0x33a(0x01)
	char UnknownData_33B_0 : 7; // 0x33b(0x01)
	bool bChangeSqueezeDeformationsAmplify : 1; // 0x33b(0x01)
	float DeformationFootingHeightOffset; // 0x33c(0x04)
	char UnknownData_340_0 : 7; // 0x340(0x01)
	bool bUseCapsulesFromWholeBody : 1; // 0x340(0x01)
	char UnknownData_341_0 : 7; // 0x341(0x01)
	bool bChangeDeformationFootingHeightOffset : 1; // 0x341(0x01)
	char UnknownData_342_0 : 7; // 0x342(0x01)
	bool bChangeUseCapsulesFromWholeBody : 1; // 0x342(0x01)
	char UnknownData_343_0 : 7; // 0x343(0x01)
	bool bReturnToPreviousSettingsOnExit : 1; // 0x343(0x01)
	char UnknownData_344_0 : 7; // 0x344(0x01)
	bool bToggleSpawningDeformationsForOverlappingCharacters : 1; // 0x344(0x01)
	char UnknownData_345[0x1b]; // 0x345(0x1b)
};

// Class GameplayFramework.DesignableUserWidget
// Size: 0x230 (Inherited: 0x230)
struct UDesignableUserWidget : UUserWidget {

	void OnSynchronizeProperties(); // Function GameplayFramework.DesignableUserWidget.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
};

// Class GameplayFramework.ActionMappingWidget
// Size: 0x238 (Inherited: 0x230)
struct UActionMappingWidget : UDesignableUserWidget {
	struct FName ActionBindingName; // 0x230(0x08)
};

// Class GameplayFramework.DetachedTileActor
// Size: 0x2f8 (Inherited: 0x2f0)
struct ADetachedTileActor : AActor {
	struct UStaticMeshComponent* TileMeshComponent; // 0x2f0(0x08)

	struct UStaticMeshComponent* GetMeshComponent(); // Function GameplayFramework.DetachedTileActor.GetMeshComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x16a4f10
};

// Class GameplayFramework.DialoguePlaybackSettings
// Size: 0x40 (Inherited: 0x38)
struct UDialoguePlaybackSettings : UDeveloperSettings {
	float DialogueFadeDuration; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class GameplayFramework.DlcChecker
// Size: 0x300 (Inherited: 0x2f0)
struct ADlcChecker : AActor {
	struct FName DlcName; // 0x2f0(0x08)
	char UnknownData_2F8_0 : 7; // 0x2f8(0x01)
	bool bEnableInEditor : 1; // 0x2f8(0x01)
	char UnknownData_2F9[0x7]; // 0x2f9(0x07)

	void SetMountDlc(bool MountDlc); // Function GameplayFramework.DlcChecker.SetMountDlc // (Final|Native|Public|BlueprintCallable) // @ game+0x3913750
	bool IsMountDlc(); // Function GameplayFramework.DlcChecker.IsMountDlc // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3911430
};

// Class GameplayFramework.DroppedClip
// Size: 0x2f8 (Inherited: 0x2f0)
struct ADroppedClip : AActor {
	struct UStaticMeshComponent* Mesh; // 0x2f0(0x08)
};

// Class GameplayFramework.DynamicAudioComponent
// Size: 0x910 (Inherited: 0x910)
struct UDynamicAudioComponent : UAudioComponent {
};

// Class GameplayFramework.ExplosionEffect
// Size: 0x440 (Inherited: 0x2f0)
struct AExplosionEffect : AActor {
	struct UParticleSystem* ExplosionFX; // 0x2f0(0x08)
	struct FVector ParticleScale; // 0x2f8(0x0c)
	char UnknownData_304_0 : 7; // 0x304(0x01)
	bool bAttachExplosionFXToExplosionEffect : 1; // 0x304(0x01)
	char UnknownData_305[0x3]; // 0x305(0x03)
	struct FRotator LocalParticleRotationOffset; // 0x308(0x0c)
	struct FRotator MaxParticleRotationOffsetFluctuation; // 0x314(0x0c)
	struct UPointLightComponent* ExplosionLight; // 0x320(0x08)
	float ExplosionLightFadeOut; // 0x328(0x04)
	char UnknownData_32C[0x4]; // 0x32c(0x04)
	struct USoundCue* ExplosionSound; // 0x330(0x08)
	struct FDecalData Decal; // 0x338(0x20)
	struct FRotator LocalDecalRotationOffset; // 0x358(0x0c)
	struct FRotator MaxDecalRotationOffsetFluctuation; // 0x364(0x0c)
	struct UCameraShake* ExplosionCameraShakeClass; // 0x370(0x08)
	char UnknownData_378_0 : 7; // 0x378(0x01)
	bool bOrientShakeTowardsEpicenter : 1; // 0x378(0x01)
	char UnknownData_379[0x3]; // 0x379(0x03)
	float ExplosionRadiusExtension; // 0x37c(0x04)
	struct FHitResult SurfaceHit; // 0x380(0x90)
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x410(0x08)
	struct UForceFeedbackAttenuation* FroceFeedbackAttenuationSettings; // 0x418(0x08)
	char UnknownData_420[0x20]; // 0x420(0x20)
};

// Class GameplayFramework.ExplosionTemplateVisualizationActor
// Size: 0x300 (Inherited: 0x2f0)
struct AExplosionTemplateVisualizationActor : AActor {
	struct UExplosionTemplate* ExplosionTemplateClass; // 0x2f0(0x08)
	char UnknownData_2F8_0 : 7; // 0x2f8(0x01)
	bool bDrawRange : 1; // 0x2f8(0x01)
	char UnknownData_2F9[0x7]; // 0x2f9(0x07)

	void SpawnExplosion(); // Function GameplayFramework.ExplosionTemplateVisualizationActor.SpawnExplosion // (Final|Native|Public|BlueprintCallable) // @ game+0x3913b00
};

// Class GameplayFramework.FactContainerComponent
// Size: 0x428 (Inherited: 0x180)
struct UFactContainerComponent : UActorComponent {
	char UnknownData_180[0x98]; // 0x180(0x98)
	struct FFactEntryRepArray ReplicatingData; // 0x218(0x170)
	char UnknownData_388[0xa0]; // 0x388(0xa0)

	void ServerSendChecksum(int32_t Checksum); // Function GameplayFramework.FactContainerComponent.ServerSendChecksum // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x3913440
	void ClientSetSynchronizationFinished(bool bInIsSynchronizationFinished); // Function GameplayFramework.FactContainerComponent.ClientSetSynchronizationFinished // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x2b2d1d0
	void ClientRequestChecksum(); // Function GameplayFramework.FactContainerComponent.ClientRequestChecksum // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x2b1d7d0
	void ClientPushFactDeltas(struct TArray<struct FFactEntryDeltaItem> FactDeltas); // Function GameplayFramework.FactContainerComponent.ClientPushFactDeltas // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x390f140
};

// Class GameplayFramework.FactValueEvalStrategy
// Size: 0x28 (Inherited: 0x28)
struct UFactValueEvalStrategy : UObject {
};

// Class GameplayFramework.ObjectiveIsCompleted_EvalStrategy
// Size: 0x28 (Inherited: 0x28)
struct UObjectiveIsCompleted_EvalStrategy : UFactValueEvalStrategy {
};

// Class GameplayFramework.ObjectiveIsActive_EvalStrategy
// Size: 0x28 (Inherited: 0x28)
struct UObjectiveIsActive_EvalStrategy : UFactValueEvalStrategy {
};

// Class GameplayFramework.ObjectiveIsUnlocked_EvalStrategy
// Size: 0x28 (Inherited: 0x28)
struct UObjectiveIsUnlocked_EvalStrategy : UFactValueEvalStrategy {
};

// Class GameplayFramework.FactsSettings
// Size: 0x150 (Inherited: 0x38)
struct UFactsSettings : UDeveloperSettings {
	struct TMap<struct FString, struct FLinearColor> DebugFactColors; // 0x38(0x50)
	struct TMap<enum class EFactStorage, struct FLinearColor> FactStorageDebugColors; // 0x88(0x50)
	struct TArray<struct FName> IndexedFacts; // 0xd8(0x10)
	char UnknownData_E8[0x58]; // 0xe8(0x58)
	struct TArray<struct FFactRegistryEntry> FactsRegistry; // 0x140(0x10)
};

// Class GameplayFramework.FactWatcherComponent
// Size: 0x1c8 (Inherited: 0x180)
struct UFactWatcherComponent : UActorComponent {
	struct FFactExpression WatchedFactExp; // 0x180(0x18)
	struct FMulticastInlineDelegate OnWatchedFactExpressionValueChanged; // 0x198(0x10)
	struct FFactNameFromList WatchedFact; // 0x1a8(0x08)
	struct FMulticastInlineDelegate OnWatchedFactChanged; // 0x1b0(0x10)
	char UnknownData_1C0[0x8]; // 0x1c0(0x08)

	bool IsWatchingValidFactExpression(); // Function GameplayFramework.FactWatcherComponent.IsWatchingValidFactExpression // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3911880
	bool IsWatchingValidFact(); // Function GameplayFramework.FactWatcherComponent.IsWatchingValidFact // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3911850
	struct FString GetFactValueAsString(struct APlayerController* ForPlayer); // Function GameplayFramework.FactWatcherComponent.GetFactValueAsString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3910340
	int32_t GetFactValueAsInteger(struct APlayerController* ForPlayer); // Function GameplayFramework.FactWatcherComponent.GetFactValueAsInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39102b0
	float GetFactValueAsFloat(struct APlayerController* ForPlayer); // Function GameplayFramework.FactWatcherComponent.GetFactValueAsFloat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3910210
	bool GetFactValueAsBool(struct APlayerController* ForPlayer); // Function GameplayFramework.FactWatcherComponent.GetFactValueAsBool // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3910180
	bool GetFactExpressionValue(); // Function GameplayFramework.FactWatcherComponent.GetFactExpressionValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3910150
};

// Class GameplayFramework.FrameworkAnimNotify_Interaction
// Size: 0x40 (Inherited: 0x38)
struct UFrameworkAnimNotify_Interaction : UAnimNotify {
	struct FName InteractionNotifyName; // 0x38(0x08)
};

// Class GameplayFramework.AnimNotify_AttachWeaponToLeftHand
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_AttachWeaponToLeftHand : UAnimNotify {
};

// Class GameplayFramework.AnimNotify_AttachWeaponToRightHand
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_AttachWeaponToRightHand : UAnimNotify {
};

// Class GameplayFramework.AnimNotify_HoldWeaponInOffHand
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_HoldWeaponInOffHand : UAnimNotify {
};

// Class GameplayFramework.AnimNotify_HoldWeaponInMainHand
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_HoldWeaponInMainHand : UAnimNotify {
};

// Class GameplayFramework.FrameworkCanvasRenderTarget2D
// Size: 0x148 (Inherited: 0x138)
struct UFrameworkCanvasRenderTarget2D : UCanvasRenderTarget2D {
	char UnknownData_138[0x10]; // 0x138(0x10)

	void UpdateDispatcher(struct UCanvas* Canvas, int32_t Width, int32_t Height); // Function GameplayFramework.FrameworkCanvasRenderTarget2D.UpdateDispatcher // (Final|Native|Public) // @ game+0x3919980
};

// Class GameplayFramework.AIGlobalsDataAsset
// Size: 0x30 (Inherited: 0x30)
struct UAIGlobalsDataAsset : UDataAsset {
};

// Class GameplayFramework.FrameworkSequencePlayer
// Size: 0xb00 (Inherited: 0x9b0)
struct UFrameworkSequencePlayer : ULevelSequencePlayer {
	char UnknownData_9B0[0x58]; // 0x9b0(0x58)
	char UnknownData_A08_0 : 7; // 0xa08(0x01)
	bool bIsJumping : 1; // 0xa08(0x01)
	char UnknownData_A09[0x7]; // 0xa09(0x07)
	struct UObject* InstanceData; // 0xa10(0x08)
	char UnknownData_A18[0x68]; // 0xa18(0x68)
	struct UMovieSceneDialogueSection* EvaluatedDialogueSection; // 0xa80(0x08)
	char UnknownData_A88[0x18]; // 0xa88(0x18)
	struct FWeakObjectPtr<struct ABasePlayerController> TargetPlayer; // 0xaa0(0x08)
	struct FMulticastInlineDelegate OnStopEventFramework; // 0xaa8(0x10)
	struct ULevelSequence* OriginSequence; // 0xab8(0x08)
	char UnknownData_AC0[0x30]; // 0xac0(0x30)
	struct UMovieSceneDialogueSection* PendingDialogueSection; // 0xaf0(0x08)
	char UnknownData_AF8[0x8]; // 0xaf8(0x08)

	void ShowChoicesWidget(); // Function GameplayFramework.FrameworkSequencePlayer.ShowChoicesWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x39198d0
	struct TArray<struct UFrameworkSequencePlayer*> PlayFrameworkSequenceForAllPlayers(struct UObject* WorldContextObject, struct ULevelSequence* InLevelSequence, bool bReplaceActors); // Function GameplayFramework.FrameworkSequencePlayer.PlayFrameworkSequenceForAllPlayers // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3919200
	void OnVOPlayed(struct FGameplayTag Tag); // Function GameplayFramework.FrameworkSequencePlayer.OnVOPlayed // (Final|Native|Protected|HasOutParms) // @ game+0x3919170
	void OnVOEnded(); // Function GameplayFramework.FrameworkSequencePlayer.OnVOEnded // (Final|Native|Protected) // @ game+0x3919150
	void MakeChoice(int32_t Idx); // Function GameplayFramework.FrameworkSequencePlayer.MakeChoice // (Final|Native|Public|BlueprintCallable) // @ game+0x3918e40
	void HideChoicesWidget(); // Function GameplayFramework.FrameworkSequencePlayer.HideChoicesWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x3918e20
	void EndSequence(); // Function GameplayFramework.FrameworkSequencePlayer.EndSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x3918940
};

// Class GameplayFramework.FrameworkUserWidget
// Size: 0x230 (Inherited: 0x230)
struct UFrameworkUserWidget : UUserWidget {

	struct UImage* GetImage(struct FName WidgetName); // Function GameplayFramework.FrameworkUserWidget.GetImage // (Event|Public|BlueprintEvent|Const) // @ game+0x1a35c70
};

// Class GameplayFramework.FWAdaptiveMusicControllerBase
// Size: 0x1d0 (Inherited: 0x180)
struct UFWAdaptiveMusicControllerBase : UActorComponent {
	struct FName NumberOFEnemiesParamName; // 0x180(0x08)
	float MaxTimeOutOfRange; // 0x188(0x04)
	char UnknownData_18C[0x1c]; // 0x18c(0x1c)
	enum class EMusicType SystemState; // 0x1a8(0x01)
	enum class EMusicType DesiredState; // 0x1a9(0x01)
	char UnknownData_1AA[0x6]; // 0x1aa(0x06)
	int32_t NumberOfEnemies; // 0x1b0(0x04)
	char UnknownData_1B4[0x5]; // 0x1b4(0x05)
	char UnknownData_1B9_0 : 7; // 0x1b9(0x01)
	bool bInDBNO : 1; // 0x1b9(0x01)
	char UnknownData_1BA[0x6]; // 0x1ba(0x06)
	uint32_t IsMusicDisabled; // 0x1c0(0x04)
	char UnknownData_1C4[0xc]; // 0x1c4(0x0c)

	void UpdateNumberOfEnemies(); // Function GameplayFramework.FWAdaptiveMusicControllerBase.UpdateNumberOfEnemies // (Native|Protected) // @ game+0x16620c0
	void UpdateMusic(); // Function GameplayFramework.FWAdaptiveMusicControllerBase.UpdateMusic // (Native|Protected) // @ game+0x3919a80
	void UpdateDisabledState(); // Function GameplayFramework.FWAdaptiveMusicControllerBase.UpdateDisabledState // (Final|Native|Protected) // @ game+0x3919960
	void ServerNotifyReturnToAmbient(); // Function GameplayFramework.FWAdaptiveMusicControllerBase.ServerNotifyReturnToAmbient // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x39193e0
	void OnPlayerRespawn(); // Function GameplayFramework.FWAdaptiveMusicControllerBase.OnPlayerRespawn // (Final|Native|Public) // @ game+0x39190f0
	void OnLevelTransitionStarted(struct FName FromRegionName, struct FName ToRegionName); // Function GameplayFramework.FWAdaptiveMusicControllerBase.OnLevelTransitionStarted // (Final|Native|Public) // @ game+0x3919030
	void OnLevelTransitionCompleted(struct FName regionname); // Function GameplayFramework.FWAdaptiveMusicControllerBase.OnLevelTransitionCompleted // (Final|Native|Public) // @ game+0x3918fb0
	enum class EMusicType GetSystemMusicState(); // Function GameplayFramework.FWAdaptiveMusicControllerBase.GetSystemMusicState // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3918e00
	void DisableMusic(bool Disable); // Function GameplayFramework.FWAdaptiveMusicControllerBase.DisableMusic // (Final|Native|Public|BlueprintCallable) // @ game+0x39188b0
	void DebugDisableMusic(bool Disable); // Function GameplayFramework.FWAdaptiveMusicControllerBase.DebugDisableMusic // (Final|Native|Public|BlueprintCallable) // @ game+0x3918820
	void ClientStopPlayingAllMusic(); // Function GameplayFramework.FWAdaptiveMusicControllerBase.ClientStopPlayingAllMusic // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x15a7380
	void ClientStopEndOfBattleStinger(); // Function GameplayFramework.FWAdaptiveMusicControllerBase.ClientStopEndOfBattleStinger // (Net|Native|Event|Protected|NetClient) // @ game+0x3918780
	void ClientSheduleEndOfBattleStinger(); // Function GameplayFramework.FWAdaptiveMusicControllerBase.ClientSheduleEndOfBattleStinger // (Net|Native|Event|Protected|NetClient) // @ game+0x3918760
	void ClientPlayOutOfRangeStinger(enum class EMusicType State); // Function GameplayFramework.FWAdaptiveMusicControllerBase.ClientPlayOutOfRangeStinger // (Net|Native|Event|Protected|NetClient) // @ game+0x3918580
	void ClientDeactivateDBNOSoundMix(); // Function GameplayFramework.FWAdaptiveMusicControllerBase.ClientDeactivateDBNOSoundMix // (Net|Native|Event|Protected|NetClient) // @ game+0x337c550
	void ClientActivateDBNOSoundMix(); // Function GameplayFramework.FWAdaptiveMusicControllerBase.ClientActivateDBNOSoundMix // (Net|Native|Event|Protected|NetClient) // @ game+0x3918400
};

// Class GameplayFramework.FWAdaptiveMusicControllerEpic
// Size: 0x2d8 (Inherited: 0x1d0)
struct UFWAdaptiveMusicControllerEpic : UFWAdaptiveMusicControllerBase {
	struct UFWMusicComponent* MusicComponents[0xa]; // 0x1d0(0x50)
	struct UFWMusicComponent* MusicComponentStingers[0x4]; // 0x220(0x20)
	struct UFWMusicComponent* SecondaryMusicComponents[0xa]; // 0x240(0x50)
	struct UFWMusicComponent* SecondaryMusicComponentStingers[0x4]; // 0x290(0x20)
	struct UBattleMusicContainerEpic* BattleMusicContainer; // 0x2b0(0x08)
	struct UBattleMusicContainerEpic* NewBattleMusicContainer; // 0x2b8(0x08)
	struct UAmbientMusicContainerEpic* AmbientMusicContainer; // 0x2c0(0x08)
	struct UEnterStingersContainerEpic* EnterStingerContainer; // 0x2c8(0x08)
	struct USoundMix* DBNOSoundMix; // 0x2d0(0x08)

	void EnterStingerLoaded(); // Function GameplayFramework.FWAdaptiveMusicControllerEpic.EnterStingerLoaded // (Final|Native|Public) // @ game+0x3918960
	void ClientStopMusic(enum class EMusicType Type); // Function GameplayFramework.FWAdaptiveMusicControllerEpic.ClientStopMusic // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x39187a0
	void ClientSetMusicContainers(struct UBattleMusicContainerEpic* NewBattleMusicContrainer, struct UAmbientMusicContainerEpic* NewAmbientMusicContainer); // Function GameplayFramework.FWAdaptiveMusicControllerEpic.ClientSetMusicContainers // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3918690
	void ClientSetBattleMusicContainer(struct UBattleMusicContainerEpic* NewBattleMusicContrainer); // Function GameplayFramework.FWAdaptiveMusicControllerEpic.ClientSetBattleMusicContainer // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x1661e00
	void ClientSetAmbientMusicContainer(struct UAmbientMusicContainerEpic* NewAmbientMusicContainer); // Function GameplayFramework.FWAdaptiveMusicControllerEpic.ClientSetAmbientMusicContainer // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3918600
	void ClientLoadMusicFromTrigger(struct AFWAdaptiveMusicTriggerEpic* Trigger, bool bPlayEnterStinger); // Function GameplayFramework.FWAdaptiveMusicControllerEpic.ClientLoadMusicFromTrigger // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x39184b0
	void ClientLoadAndPlayEnterStinger(struct AFWAdaptiveMusicTriggerStinger* Trigger); // Function GameplayFramework.FWAdaptiveMusicControllerEpic.ClientLoadAndPlayEnterStinger // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3918420
};

// Class GameplayFramework.FWAdaptiveMusicSystem
// Size: 0xb8 (Inherited: 0x28)
struct UFWAdaptiveMusicSystem : UObject {
	char UnknownData_28[0x28]; // 0x28(0x28)
	struct FMulticastInlineDelegate OnCombatMusicFadesAway; // 0x50(0x10)
	char UnknownData_60[0x50]; // 0x60(0x50)
	float MinCombatDistnace; // 0xb0(0x04)
	float TickInterval; // 0xb4(0x04)

	void StopPlayingAllMusic(struct UObject* WorldContextObject); // Function GameplayFramework.FWAdaptiveMusicSystem.StopPlayingAllMusic // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x39198f0
	void SetMusicContainers(struct UObject* WorldContextObject, struct UBattleMusicContainerEpic* BattleMusicContrainer, struct UAmbientMusicContainerEpic* AmbientMusicContainer); // Function GameplayFramework.FWAdaptiveMusicSystem.SetMusicContainers // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x39197e0
	void SetMinOverriddenMusicState(struct UObject* WorldContextObject, enum class EMusicState MinState); // Function GameplayFramework.FWAdaptiveMusicSystem.SetMinOverriddenMusicState // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3919730
	void SetMinMaxOverriddenMusicState(struct UObject* WorldContextObject, enum class EMusicState MinState, enum class EMusicState MaxState); // Function GameplayFramework.FWAdaptiveMusicSystem.SetMinMaxOverriddenMusicState // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3919640
	void SetMaxOverriddenMusicState(struct UObject* WorldContextObject, enum class EMusicState MaxState); // Function GameplayFramework.FWAdaptiveMusicSystem.SetMaxOverriddenMusicState // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3919590
	void SetBattleMusicContainer(struct UObject* WorldContextObject, struct UBattleMusicContainerEpic* BattleMusicContrainer); // Function GameplayFramework.FWAdaptiveMusicSystem.SetBattleMusicContainer // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x39194e0
	void SetAmbientMusicContainer(struct UObject* WorldContextObject, struct UAmbientMusicContainerEpic* AmbientMusicContainer); // Function GameplayFramework.FWAdaptiveMusicSystem.SetAmbientMusicContainer // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3919430
	void RestartOverridesWithName(struct FName LevelName); // Function GameplayFramework.FWAdaptiveMusicSystem.RestartOverridesWithName // (Final|Native|Public) // @ game+0x3919360
	void RestartOverrides(); // Function GameplayFramework.FWAdaptiveMusicSystem.RestartOverrides // (Final|Native|Public) // @ game+0x3919340
	void OnTeamWipeout(); // Function GameplayFramework.FWAdaptiveMusicSystem.OnTeamWipeout // (Final|Native|Public) // @ game+0x3919130
	void OnPlayerRespawn(); // Function GameplayFramework.FWAdaptiveMusicSystem.OnPlayerRespawn // (Final|Native|Public) // @ game+0x3919110
	void OnBattleEvent(struct FGlobalEventParams GlobalEvent); // Function GameplayFramework.FWAdaptiveMusicSystem.OnBattleEvent // (Final|Native|Public|HasOutParms) // @ game+0x3918ec0
	enum class EMusicState GetMusicState(struct UObject* WorldContextObject); // Function GameplayFramework.FWAdaptiveMusicSystem.GetMusicState // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3918d80
	struct UFWAdaptiveMusicSystem* GetAdaptiveMusicSystem(struct UObject* WorldContextObject); // Function GameplayFramework.FWAdaptiveMusicSystem.GetAdaptiveMusicSystem // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3918980
	void AmsDelegate__DelegateSignature(); // DelegateFunction GameplayFramework.FWAdaptiveMusicSystem.AmsDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
};

// Class GameplayFramework.FWAdaptiveMusicTriggerBase
// Size: 0x320 (Inherited: 0x2f8)
struct AFWAdaptiveMusicTriggerBase : ATriggerBase {
	struct FSimpleBolleanFact BolleanFact; // 0x2f8(0x0c)
	char UnknownData_304[0x4]; // 0x304(0x04)
	struct FFactExpression FactExpression; // 0x308(0x18)

	void ActivateTrigger(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function GameplayFramework.FWAdaptiveMusicTriggerBase.ActivateTrigger // (Native|Public) // @ game+0x3918330
};

// Class GameplayFramework.FWAdaptiveMusicTriggerEpic
// Size: 0x350 (Inherited: 0x320)
struct AFWAdaptiveMusicTriggerEpic : AFWAdaptiveMusicTriggerBase {
	struct UBattleMusicContainerEpic* BattleMusic; // 0x320(0x08)
	struct UAmbientMusicContainerEpic* AmbientMusic; // 0x328(0x08)
	struct UEnterStingersContainerEpic* StingerContainer; // 0x330(0x08)
	char UnknownData_338_0 : 7; // 0x338(0x01)
	bool bTriggerEnterStingerOnce : 1; // 0x338(0x01)
	char UnknownData_339[0x17]; // 0x339(0x17)
};

// Class GameplayFramework.FWAdaptiveMusicTriggerStinger
// Size: 0x340 (Inherited: 0x320)
struct AFWAdaptiveMusicTriggerStinger : AFWAdaptiveMusicTriggerBase {
	struct UEnterStingersContainerEpic* StingerContainer; // 0x320(0x08)
	char UnknownData_328_0 : 7; // 0x328(0x01)
	bool bTriggerEnterStingerOnce : 1; // 0x328(0x01)
	char UnknownData_329[0x17]; // 0x329(0x17)
};

// Class GameplayFramework.FWAIDataAsset_DamageReactionBase
// Size: 0x30 (Inherited: 0x30)
struct UFWAIDataAsset_DamageReactionBase : UDataAsset {
};

// Class GameplayFramework.FWAIDataAsset_DamageReaction
// Size: 0x2b0 (Inherited: 0x30)
struct UFWAIDataAsset_DamageReaction : UFWAIDataAsset_DamageReactionBase {
	struct FDamageReactionAndRecoveryData ReactionsRecoveries[0x4]; // 0x30(0x280)
};

// Class GameplayFramework.FWMusicComponent
// Size: 0x920 (Inherited: 0x910)
struct UFWMusicComponent : UAudioComponent {
	char UnknownData_910[0x10]; // 0x910(0x10)
};

// Class GameplayFramework.BattleMusicContainerEpic
// Size: 0x510 (Inherited: 0x30)
struct UBattleMusicContainerEpic : UDataAsset {
	struct FMusicEpic MusicArray[0xa]; // 0x30(0x370)
	struct FMusicEpic TensionStinger; // 0x3a0(0x58)
	struct FMusicEpic BattleStinger; // 0x3f8(0x58)
	struct FMusicEpicWithDelay EndOfBattleStinger; // 0x450(0x60)
	struct TSoftObjectPtr<struct USoundMix> DBNOSoundMix; // 0x4b0(0x28)
	enum class EMusicType TranistionsToAmbient[0xa]; // 0x4d8(0x0a)
	enum class EMusicType TranistionsToTension[0xa]; // 0x4e2(0x0a)
	enum class EMusicType TranistionsToBattle[0xa]; // 0x4ec(0x0a)
	enum class EMusicType TranistionsToDBNO[0xa]; // 0x4f6(0x0a)
	enum class EMusicType TranistionsWhenDead[0xa]; // 0x500(0x0a)
	char UnknownData_50A[0x6]; // 0x50a(0x06)
};

// Class GameplayFramework.AmbientMusicContainerEpic
// Size: 0x40 (Inherited: 0x30)
struct UAmbientMusicContainerEpic : UDataAsset {
	struct TArray<struct FMusicEpic> MusicArray; // 0x30(0x10)
};

// Class GameplayFramework.EnterStingersContainerEpic
// Size: 0x88 (Inherited: 0x30)
struct UEnterStingersContainerEpic : UDataAsset {
	struct FMusicEpic EnterStinger; // 0x30(0x58)
};

// Class GameplayFramework.InteractableInterface
// Size: 0x28 (Inherited: 0x28)
struct UInteractableInterface : UInterface {
};

// Class GameplayFramework.FWAIArchetype_Player
// Size: 0x28 (Inherited: 0x28)
struct UFWAIArchetype_Player : UFWAIArchetype {
};

// Class GameplayFramework.FWAIRank_Any
// Size: 0x28 (Inherited: 0x28)
struct UFWAIRank_Any : UFWAIRank {
};

// Class GameplayFramework.FWAIFaction_Enemy
// Size: 0x28 (Inherited: 0x28)
struct UFWAIFaction_Enemy : UFWAIFaction {
};

// Class GameplayFramework.GameplaySettings
// Size: 0xa8 (Inherited: 0x28)
struct UGameplaySettings : UObject {
	float MaxConnectedSlotDistanceInOneCover; // 0x28(0x04)
	float MaxConnectedSlotDegreesAngleInOneCover; // 0x2c(0x04)
	float SlotAlignmentTestDistance; // 0x30(0x04)
	float LeanTestSideOffset; // 0x34(0x04)
	float LeanTestForwardOffset; // 0x38(0x04)
	float LeanTestDownOffset; // 0x3c(0x04)
	float MediumLeanActionTestUpOffset; // 0x40(0x04)
	float StandingLeanActionTestUpOffset; // 0x44(0x04)
	float UpActionTestUpOffset; // 0x48(0x04)
	float UpActionTestForwardOffset; // 0x4c(0x04)
	float MantleForwardTestOffset; // 0x50(0x04)
	float MantleDownTestOffset; // 0x54(0x04)
	float MantleMaxLandingHeight; // 0x58(0x04)
	float FireLinkMaxRange; // 0x5c(0x04)
	float CollisionBacktraceDistance; // 0x60(0x04)
	char UnknownData_64_0 : 7; // 0x64(0x01)
	bool bAutoSnapSlotsToTheGround : 1; // 0x64(0x01)
	char UnknownData_65_0 : 7; // 0x65(0x01)
	bool bForceSingleThreadedCoverBuild : 1; // 0x65(0x01)
	char UnknownData_66[0x2]; // 0x66(0x02)
	double CoverBuildTimeSlice; // 0x68(0x08)
	float CoverUpdateDelay; // 0x70(0x04)
	float CoverDestroyFraction; // 0x74(0x04)
	float EnableNavMeshFraction; // 0x78(0x04)
	float OverlapFractionToBeConsideredInsideBox; // 0x7c(0x04)
	struct FSoftClassPath MantleOverCoverNavAreaClassName; // 0x80(0x18)
	char UnknownData_98_0 : 7; // 0x98(0x01)
	bool bPauseAfterDeath : 1; // 0x98(0x01)
	char UnknownData_99[0x3]; // 0x99(0x03)
	float MaxOffMeshLinkHeightDifference; // 0x9c(0x04)
	char UnknownData_A0_0 : 7; // 0xa0(0x01)
	bool bAllowInvalidBiomePathInEditor : 1; // 0xa0(0x01)
	char UnknownData_A1[0x7]; // 0xa1(0x07)
};

// Class GameplayFramework.SphericalOverlapComponent
// Size: 0x2d0 (Inherited: 0x2d0)
struct USphericalOverlapComponent : USceneComponent {
	float Radius; // 0x2c8(0x04)
};

// Class GameplayFramework.ConeOverlapComponent
// Size: 0x2e0 (Inherited: 0x2d0)
struct UConeOverlapComponent : USphericalOverlapComponent {
	float Angle; // 0x2d0(0x04)
	char UnknownData_2D4[0xc]; // 0x2d4(0x0c)
};

// Class GameplayFramework.GibbingSphereBase
// Size: 0x320 (Inherited: 0x2f0)
struct AGibbingSphereBase : AActor {
	char UnknownData_2F0_0 : 7; // 0x2f0(0x01)
	bool bApplyDamage : 1; // 0x2f0(0x01)
	char UnknownData_2F1[0x3]; // 0x2f1(0x03)
	float Strength; // 0x2f4(0x04)
	enum class ERadialImpulseFalloff Falloff; // 0x2f8(0x01)
	char UnknownData_2F9[0x7]; // 0x2f9(0x07)
	struct UBillboardComponent* Billboard; // 0x300(0x08)
	struct USphericalOverlapComponent* OverlapComp; // 0x308(0x08)
	struct USphereComponent* Sphere; // 0x310(0x08)
	char UnknownData_318[0x8]; // 0x318(0x08)

	void Gib(); // Function GameplayFramework.GibbingSphereBase.Gib // (Final|Native|Public|BlueprintCallable) // @ game+0x3921c30
};

// Class GameplayFramework.GibbingCone
// Size: 0x328 (Inherited: 0x320)
struct AGibbingCone : AGibbingSphereBase {
	struct UArrowComponent* Arrow; // 0x320(0x08)
};

// Class GameplayFramework.GibbingSphere
// Size: 0x320 (Inherited: 0x320)
struct AGibbingSphere : AGibbingSphereBase {
};

// Class GameplayFramework.GlobalEventManager
// Size: 0xc8 (Inherited: 0x30)
struct UGlobalEventManager : UDataAsset {
	double TimeSliceLimit; // 0x30(0x08)
	struct TArray<struct FGlobalEventInfo> Events; // 0x38(0x10)
	char UnknownData_48[0x80]; // 0x48(0x80)

	bool ExecuteGlobalEvent(struct UObject* WorldContextObject, struct FName EventName, struct FGlobalEventParams GlobalEvent, bool bTimeSliced); // Function GameplayFramework.GlobalEventManager.ExecuteGlobalEvent // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3921a10
	bool EnqueueGlobalEvent(struct UObject* WorldContextObject, struct FName EventName, struct FGlobalEventParams GlobalEvent); // Function GameplayFramework.GlobalEventManager.EnqueueGlobalEvent // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3921890
	void BlueprintHandleTimeSlicedGlobalEvent(struct FGlobalEventParams GlobalEvent); // Function GameplayFramework.GlobalEventManager.BlueprintHandleTimeSlicedGlobalEvent // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void BlueprintHandleGlobalEvent(struct FGlobalEventParams GlobalEvent); // Function GameplayFramework.GlobalEventManager.BlueprintHandleGlobalEvent // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
};

// Class GameplayFramework.GlobalEventsInterface
// Size: 0x28 (Inherited: 0x28)
struct UGlobalEventsInterface : UInterface {
};

// Class GameplayFramework.AnimNotify_StartRagdoll
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_StartRagdoll : UAnimNotify {
};

// Class GameplayFramework.AnimNotify_StopAnimationOnAfterDeathHit
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_StopAnimationOnAfterDeathHit : UAnimNotify {
};

// Class GameplayFramework.AnimNotify_DetachSkeletalBone
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_DetachSkeletalBone : UAnimNotify {
	struct FName BoneName; // 0x38(0x08)
};

// Class GameplayFramework.AnimNotify_DisableDeathAnimation
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_DisableDeathAnimation : UAnimNotify {
};

// Class GameplayFramework.AnimNotify_EnableDeathAnimation
// Size: 0x38 (Inherited: 0x38)
struct UAnimNotify_EnableDeathAnimation : UAnimNotify {
};

// Class GameplayFramework.GoreDataAsset
// Size: 0x1f8 (Inherited: 0x30)
struct UGoreDataAsset : UDataAsset {
	float ChanceOfGibModifier; // 0x30(0x04)
	struct FName HeadBoneName; // 0x34(0x08)
	struct FName DefaultDetachableBone; // 0x3c(0x08)
	char UnknownData_44[0x4]; // 0x44(0x04)
	struct TMap<enum class EGoreSlot, struct FName> GoreSlotMapping; // 0x48(0x50)
	struct TMap<enum class EGoreSlot, struct FSocketPair> GoreSlotMappingToSockets; // 0x98(0x50)
	float MaxSplatDistance; // 0xe8(0x04)
	float SplatRollRange; // 0xec(0x04)
	float SplatSizeRange; // 0xf0(0x04)
	float SplatTraceSizeRange; // 0xf4(0x04)
	float SplatDistanceMultiplier; // 0xf8(0x04)
	char UnknownData_FC_0 : 7; // 0xfc(0x01)
	bool bRagDollAfterDeath : 1; // 0xfc(0x01)
	char UnknownData_FD_0 : 7; // 0xfd(0x01)
	bool bEnableRagdollCollisionDetectionDuringDeathAnimation : 1; // 0xfd(0x01)
	char UnknownData_FE[0x2]; // 0xfe(0x02)
	float BodyLinearDamping; // 0x100(0x04)
	float BodyAngularDamping; // 0x104(0x04)
	float MinPelvisImpulse; // 0x108(0x04)
	float DeathImpulseDetachedPartMultiplier; // 0x10c(0x04)
	float DetachedLimbImpulseMultiplier; // 0x110(0x04)
	float ExplosionImpulseMultiplier; // 0x114(0x04)
	struct USoundBase* ExplosionSound; // 0x118(0x08)
	struct UParticleSystem* BloodEmitter; // 0x120(0x08)
	struct UParticleSystem* FrozenImpactEffect; // 0x128(0x08)
	struct FName FrozenShaderParam; // 0x130(0x08)
	struct USkeletalMesh* GoreSkeletonMesh; // 0x138(0x08)
	struct TArray<struct FDetachableBone> DetachableBones; // 0x140(0x10)
	struct TArray<struct FDetachableBone> DetachableLimbBones; // 0x150(0x10)
	struct TArray<struct FLimbExposionParameters> GoreBoneExplosionDebris; // 0x160(0x10)
	char UnknownData_170_0 : 7; // 0x170(0x01)
	bool bDisableAllGibs : 1; // 0x170(0x01)
	char UnknownData_171_0 : 7; // 0x171(0x01)
	bool bRotateMeshToMatchGroundDurringAnimation : 1; // 0x171(0x01)
	char UnknownData_172[0x2]; // 0x172(0x02)
	struct FName DeathDynamicMontageSlotName; // 0x174(0x08)
	char UnknownData_17C[0x4]; // 0x17c(0x04)
	struct TArray<struct FBoneDeathAnimations> BoneDeathAnimations; // 0x180(0x10)
	struct TMap<struct FGameplayTag, struct FDirectionalDeathAnimationAndSound> GameplayTagDirectionalAnimAndSound; // 0x190(0x50)
	struct TArray<struct UAnimSequenceBase*> DefaultDeathAnimations; // 0x1e0(0x10)
	char UnknownData_1F0_0 : 7; // 0x1f0(0x01)
	bool bOverride_ForceGib : 1; // 0x1f0(0x01)
	char UnknownData_1F1_0 : 7; // 0x1f1(0x01)
	bool bForceGib : 1; // 0x1f1(0x01)
	char UnknownData_1F2_0 : 7; // 0x1f2(0x01)
	bool bOverride_ForceFullGib : 1; // 0x1f2(0x01)
	char UnknownData_1F3_0 : 7; // 0x1f3(0x01)
	bool bForceFullGib : 1; // 0x1f3(0x01)
	char UnknownData_1F4[0x4]; // 0x1f4(0x04)
};

// Class GameplayFramework.HealthInterface
// Size: 0x28 (Inherited: 0x28)
struct UHealthInterface : UInterface {

	void SetMaxHealth(float InHealth); // Function GameplayFramework.HealthInterface.SetMaxHealth // (Native|Public) // @ game+0x39297d0
	void SetHealth(float InHealth); // Function GameplayFramework.HealthInterface.SetHealth // (Native|Public) // @ game+0x3929430
	float GetMaxHealth(); // Function GameplayFramework.HealthInterface.GetMaxHealth // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3928990
	float GetHealth(); // Function GameplayFramework.HealthInterface.GetHealth // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x3928960
};

// Class GameplayFramework.HierarchicalUserWidget
// Size: 0x230 (Inherited: 0x230)
struct UHierarchicalUserWidget : UDesignableUserWidget {

	void RequestCloseWindow(); // Function GameplayFramework.HierarchicalUserWidget.RequestCloseWindow // (Final|Native|Public|BlueprintCallable) // @ game+0x3929380
	bool OnCloseWindow(); // Function GameplayFramework.HierarchicalUserWidget.OnCloseWindow // (Native|Event|Public|BlueprintEvent) // @ game+0x3928e60
};

// Class GameplayFramework.HighlightInterface
// Size: 0x28 (Inherited: 0x28)
struct UHighlightInterface : UInterface {

	void SetHighlightState(bool bNewState, bool bForceStateChange); // Function GameplayFramework.HighlightInterface.SetHighlightState // (Native|Public|BlueprintCallable) // @ game+0x39294b0
	void OnCinematicModeChanged(bool bInCinematicMode); // Function GameplayFramework.HighlightInterface.OnCinematicModeChanged // (Native|Public) // @ game+0x3928dd0
	void AddHighlightedComponents(struct TArray<struct UMeshComponent*> NewComponents, bool bIncludeChildren); // Function GameplayFramework.HighlightInterface.AddHighlightedComponents // (Native|Public|BlueprintCallable) // @ game+0x39286d0
	void AddHighlightedComponent(struct UMeshComponent* NewComponent, bool bIncludeChildren); // Function GameplayFramework.HighlightInterface.AddHighlightedComponent // (Native|Public|BlueprintCallable) // @ game+0x3928600
};

// Class GameplayFramework.ImpactEffectBase
// Size: 0x70 (Inherited: 0x28)
struct UImpactEffectBase : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct UParticleSystemComponent* ImpactEffectParticle; // 0x38(0x08)
	struct UDecalComponent* ImpactEffectDecal; // 0x40(0x08)
	struct UAudioComponent* ImpactEffectAudio; // 0x48(0x08)
	char UnknownData_50[0x20]; // 0x50(0x20)
};

// Class GameplayFramework.ImpactEffect
// Size: 0x70 (Inherited: 0x70)
struct UImpactEffect : UImpactEffectBase {
};

// Class GameplayFramework.CharacterEffectFootstep
// Size: 0x70 (Inherited: 0x70)
struct UCharacterEffectFootstep : UImpactEffectBase {
};

// Class GameplayFramework.CharacterEffectSoundOnlyWithAudioComponent
// Size: 0x70 (Inherited: 0x70)
struct UCharacterEffectSoundOnlyWithAudioComponent : UImpactEffectBase {
};

// Class GameplayFramework.CharacterEffectSoundOnly
// Size: 0x70 (Inherited: 0x70)
struct UCharacterEffectSoundOnly : UImpactEffectBase {
};

// Class GameplayFramework.CharacterEffectParticleSound
// Size: 0x70 (Inherited: 0x70)
struct UCharacterEffectParticleSound : UImpactEffectBase {
};

// Class GameplayFramework.CharacterEffectTimed
// Size: 0x70 (Inherited: 0x70)
struct UCharacterEffectTimed : UImpactEffectBase {
};

// Class GameplayFramework.CharacterEffectParticleSoundTimed
// Size: 0x70 (Inherited: 0x70)
struct UCharacterEffectParticleSoundTimed : UCharacterEffectTimed {
};

// Class GameplayFramework.CharacterEffectFootstepTimed
// Size: 0x70 (Inherited: 0x70)
struct UCharacterEffectFootstepTimed : UCharacterEffectTimed {
};

// Class GameplayFramework.ImpactEffectDataAsset
// Size: 0x58 (Inherited: 0x30)
struct UImpactEffectDataAsset : UDataAsset {
	struct TSoftObjectPtr<struct UParticleSystem> DebugImpactEffect; // 0x30(0x28)
};

// Class GameplayFramework.ImpactEffectWeapon
// Size: 0x1a98 (Inherited: 0x58)
struct UImpactEffectWeapon : UImpactEffectDataAsset {
	struct FImpactEffectData DefaultImpact; // 0x58(0x78)
	struct FImpactEffectData MaterialImpacts[0x37]; // 0xd0(0x19c8)
};

// Class GameplayFramework.CharacterEffectsTemplate
// Size: 0x5058 (Inherited: 0x58)
struct UCharacterEffectsTemplate : UImpactEffectDataAsset {
	struct FFootstepImpactEffect DefaultFootstepDownEffect; // 0x58(0x98)
	struct TMap<struct FName, struct FFootstepImpactEffectData> FootstepDownEffects; // 0xf0(0x50)
	struct FFootstepImpactEffect DefaultFootstepUpEffect; // 0x140(0x98)
	struct TMap<struct FName, struct FFootstepImpactEffectData> FootstepUpEffects; // 0x1d8(0x50)
	struct FSoundParticleImpactData DefaulSlideEffect; // 0x228(0x58)
	struct TSoftObjectPtr<struct USoundCue> SlideAudio; // 0x280(0x28)
	struct FAudioFadeoutData SlideAudioFadeoutData; // 0x2a8(0x08)
	struct TSoftObjectPtr<struct UParticleSystem> SlideParticles[0x37]; // 0x2b0(0x898)
	struct FSoundParticleImpactData DefaultHighInEffect; // 0xb48(0x58)
	struct TSoftObjectPtr<struct USoundCue> CoverHighInAudio; // 0xba0(0x28)
	struct FAudioFadeoutData CoverHighInAudioFadeoutData; // 0xbc8(0x08)
	struct TSoftObjectPtr<struct UParticleSystem> CoverHighInParticles[0x37]; // 0xbd0(0x898)
	struct TSoftObjectPtr<struct USoundCue> CoverHighOutAudio; // 0x1468(0x28)
	struct FAudioFadeoutData CoverHighOutAudioFadeoutData; // 0x1490(0x08)
	struct FSoundParticleImpactData DefaultLowInEffect; // 0x1498(0x58)
	struct TSoftObjectPtr<struct USoundCue> CoverLowInAudio; // 0x14f0(0x28)
	struct FAudioFadeoutData CoverLowInAudioFadeoutData; // 0x1518(0x08)
	struct TSoftObjectPtr<struct UParticleSystem> CoverLowInParticles[0x37]; // 0x1520(0x898)
	struct TSoftObjectPtr<struct USoundCue> CoverLowOutAudio; // 0x1db8(0x28)
	struct FAudioFadeoutData CoverLowOutAudioFadeoutData; // 0x1de0(0x08)
	struct FSoundParticleImpactData DefaultBodyfallEffect; // 0x1de8(0x58)
	struct FSoundParticleImpactData BodyfallEffects[0x37]; // 0x1e40(0x12e8)
	struct FSoundParticleImpactData DefaultRollEffect; // 0x3128(0x58)
	struct FSoundParticleImpactData RollEffects[0x37]; // 0x3180(0x12e8)
	struct FSoundParticleImpactData DefaultJumpOverObstacleEffect; // 0x4468(0x58)
	struct TSoftObjectPtr<struct USoundCue> JumpOverObstacleAudio; // 0x44c0(0x28)
	struct FAudioFadeoutData JumpOverObstacleAudioFadeoutData; // 0x44e8(0x08)
	struct TSoftObjectPtr<struct UParticleSystem> JumpOverObstacleParticles[0x37]; // 0x44f0(0x898)
	struct TSoftObjectPtr<struct USoundCue> MeleeSwing; // 0x4d88(0x28)
	struct FAudioFadeoutData MeleeSwingAudioFadeoutData; // 0x4db0(0x08)
	struct TMap<struct FName, struct TSoftObjectPtr<struct USoundCue>> CustomAudio; // 0x4db8(0x50)
	struct TMap<struct FName, struct FAudioFadeoutData> CustomAudioFadeData; // 0x4e08(0x50)
	struct TMap<struct FName, struct FSurfaceSoundImpactData> CustomAudioSurface; // 0x4e58(0x50)
	struct TSoftObjectPtr<struct USoundCue> MoveSlow[0x3]; // 0x4ea8(0x78)
	struct FAudioFadeoutData MoveSlowFadeData[0x3]; // 0x4f20(0x18)
	struct TSoftObjectPtr<struct USoundCue> MoveMedium[0x3]; // 0x4f38(0x78)
	struct FAudioFadeoutData MoveMediumFadeData[0x3]; // 0x4fb0(0x18)
	struct TSoftObjectPtr<struct USoundCue> MoveFast[0x3]; // 0x4fc8(0x78)
	struct FAudioFadeoutData MoveFastFadeData[0x3]; // 0x5040(0x18)
};

// Class GameplayFramework.ImpactEffectManager
// Size: 0xf0 (Inherited: 0x28)
struct UImpactEffectManager : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UCharacterEffectSoundOnly* SoundOnlyEffect; // 0x30(0x08)
	struct TArray<struct USoundCue*> LoadedSounds; // 0x38(0x10)
	struct TArray<struct UParticleSystem*> LoadedFXs; // 0x48(0x10)
	struct TArray<struct UMaterialInterface*> LoadedDecals; // 0x58(0x10)
	struct TMap<struct UCharacterEffectTimed*, struct FTimedEffectOwner> TimedEffectsOwnership; // 0x68(0x50)
	float MaxEffectDistance; // 0xb8(0x04)
	float NearPlayerDistance; // 0xbc(0x04)
	char UnknownData_C0[0x30]; // 0xc0(0x30)
};

// Class GameplayFramework.InputTape
// Size: 0x70 (Inherited: 0x28)
struct UInputTape : UObject {
	struct TArray<struct FKeyInputDataRecord> KeyInputData; // 0x28(0x10)
	struct TArray<struct FAxisInputDataRecord> AxisInputData; // 0x38(0x10)
	struct TArray<struct FPlayerStateDataRecord> PlayerStateData; // 0x48(0x10)
	char UnknownData_58[0x18]; // 0x58(0x18)
};

// Class GameplayFramework.InteractionComponentInterface
// Size: 0x28 (Inherited: 0x28)
struct UInteractionComponentInterface : UInterface {
};

// Class GameplayFramework.KeyToImageBindingDataAsset
// Size: 0x48 (Inherited: 0x30)
struct UKeyToImageBindingDataAsset : UDataAsset {
	struct UKeyToImageBindingDataAsset* Defaults; // 0x30(0x08)
	struct TArray<struct FKeyToImageBinding> KeyToImageBindings; // 0x38(0x10)

	bool GetImageForKey(struct FKey Key, struct FSlateBrush OutBrush); // Function GameplayFramework.KeyToImageBindingDataAsset.GetImageForKey // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x392c210
};

// Class GameplayFramework.LoadingScreen
// Size: 0x260 (Inherited: 0x230)
struct ULoadingScreen : UUserWidget {
	char UnknownData_230[0x8]; // 0x230(0x08)
	char UnknownData_238_0 : 7; // 0x238(0x01)
	bool bUseHUDScale : 1; // 0x238(0x01)
	char UnknownData_239[0x7]; // 0x239(0x07)
	struct UScaleBox* HUDScaleBox; // 0x240(0x08)
	char UnknownData_248[0x8]; // 0x248(0x08)
	struct ULoadingScreenProgressBar* ProgressBar; // 0x250(0x08)
	char UnknownData_258[0x8]; // 0x258(0x08)
};

// Class GameplayFramework.LoadingScreenProgressBar
// Size: 0x158 (Inherited: 0x108)
struct ULoadingScreenProgressBar : UWidget {
	struct FLinearColor ColorAndOpacity; // 0x108(0x10)
	enum class EProgressBarType ProgressBarType; // 0x118(0x01)
	char UnknownData_119[0x3]; // 0x119(0x03)
	struct FLinearColor ColorAndOpacityDelegate; // 0x11c(0x10)
	char UnknownData_12C[0x4]; // 0x12c(0x04)
	struct FText Percent; // 0x130(0x18)
	char UnknownData_148[0x10]; // 0x148(0x10)

	void RebuildWidgetBP(); // Function GameplayFramework.LoadingScreenProgressBar.RebuildWidgetBP // (Final|Native|Public|BlueprintCallable) // @ game+0x392cb60
};

// Class GameplayFramework.LocalInteractableActorInterface
// Size: 0x28 (Inherited: 0x28)
struct ULocalInteractableActorInterface : UInterface {
};

// Class GameplayFramework.LocalInteractionComponent
// Size: 0x830 (Inherited: 0x4f0)
struct ULocalInteractionComponent : USphereComponent {
	char UnknownData_4F0[0x68]; // 0x4f0(0x68)
	struct FMulticastInlineDelegate OnInteractedLocal; // 0x558(0x10)
	struct FMulticastInlineDelegate OnInteractedPressedLocal; // 0x568(0x10)
	struct FMulticastInlineDelegate OnAlternativeInteractedLocal; // 0x578(0x10)
	struct FMulticastInlineDelegate OnAlternativeInteractedPressedLocal; // 0x588(0x10)
	struct FMulticastInlineDelegate OnInteractionNotify; // 0x598(0x10)
	struct FMulticastInlineDelegate OnInput; // 0x5a8(0x10)
	struct FMulticastInlineDelegate OnPlayerInRange; // 0x5b8(0x10)
	struct FMulticastInlineDelegate OnHoldProgressChanged; // 0x5c8(0x10)
	struct FMulticastInlineDelegate OnInteractionInterruptedLocal; // 0x5d8(0x10)
	struct FMulticastInlineDelegate OnInteractionAnimStarted; // 0x5e8(0x10)
	struct FMulticastInlineDelegate OnInteractionMontageEnded; // 0x5f8(0x10)
	char UnknownData_608[0x4]; // 0x608(0x04)
	struct FName InteractionName; // 0x60c(0x08)
	char UnknownData_614_0 : 7; // 0x614(0x01)
	bool bHasOnHoldAction : 1; // 0x614(0x01)
	char UnknownData_615[0x3]; // 0x615(0x03)
	struct FText InteractionText; // 0x618(0x18)
	struct FNameWrapper InteractionTextKey; // 0x630(0x10)
	float HoldTime; // 0x640(0x04)
	char UnknownData_644_0 : 7; // 0x644(0x01)
	bool bHasOnPressedAction : 1; // 0x644(0x01)
	char UnknownData_645[0x3]; // 0x645(0x03)
	struct FText InteractionPressedText; // 0x648(0x18)
	struct FName AlternativeInteractionName; // 0x660(0x08)
	char UnknownData_668_0 : 7; // 0x668(0x01)
	bool bHasOnHoldAlternativeAction : 1; // 0x668(0x01)
	char UnknownData_669[0x7]; // 0x669(0x07)
	struct FText AlternativeInteractionText; // 0x670(0x18)
	float AlternativeHoldTime; // 0x688(0x04)
	char UnknownData_68C_0 : 7; // 0x68c(0x01)
	bool bHasOnPressedAlternativeAction : 1; // 0x68c(0x01)
	char UnknownData_68D[0x3]; // 0x68d(0x03)
	struct FText AlternativeInteractionPressedText; // 0x690(0x18)
	char UnknownData_6A8_0 : 7; // 0x6a8(0x01)
	bool bEnableInteractionDisabledText : 1; // 0x6a8(0x01)
	char UnknownData_6A9[0x7]; // 0x6a9(0x07)
	struct FText InteractionDisabledText; // 0x6b0(0x18)
	float MaxHoldTimeToCountAsPressed; // 0x6c8(0x04)
	char UnknownData_6CC_0 : 7; // 0x6cc(0x01)
	bool bUseActionPrompt : 1; // 0x6cc(0x01)
	char UnknownData_6CD_0 : 7; // 0x6cd(0x01)
	bool bUseOldInteractionText : 1; // 0x6cd(0x01)
	char UnknownData_6CE_0 : 7; // 0x6ce(0x01)
	bool bActionPromptUsesHold : 1; // 0x6ce(0x01)
	char UnknownData_6CF_0 : 7; // 0x6cf(0x01)
	bool bActionPromptExecutesPrimaryInteraction : 1; // 0x6cf(0x01)
	char UnknownData_6D0_0 : 7; // 0x6d0(0x01)
	bool bActionPromptExecutesHoldInteraction : 1; // 0x6d0(0x01)
	char UnknownData_6D1[0x7]; // 0x6d1(0x07)
	struct FText OldInteractionText; // 0x6d8(0x18)
	char UnknownData_6F0_0 : 7; // 0x6f0(0x01)
	bool bStartDisabled : 1; // 0x6f0(0x01)
	char UnknownData_6F1[0x3]; // 0x6f1(0x03)
	int32_t Priority; // 0x6f4(0x04)
	float TimeBetweenUses; // 0x6f8(0x04)
	float ErrorDisplayDuration; // 0x6fc(0x04)
	char UnknownData_700_0 : 7; // 0x700(0x01)
	bool bEnabledDuringVote : 1; // 0x700(0x01)
	char UnknownData_701[0x7]; // 0x701(0x07)
	struct FFactExpression InteractionEnabledExpr; // 0x708(0x18)
	struct UAnimMontage* InteractionMontage; // 0x720(0x08)
	enum class EPlayerSynchronizationType SynchronizationType; // 0x728(0x01)
	char UnknownData_729[0x3]; // 0x729(0x03)
	float ProximityRequired; // 0x72c(0x04)
	float OnRangeRequired; // 0x730(0x04)
	char UnknownData_734_0 : 7; // 0x734(0x01)
	bool bHideWeapon : 1; // 0x734(0x01)
	char UnknownData_735_0 : 7; // 0x735(0x01)
	bool bHideWeaponWithoutAnimation : 1; // 0x735(0x01)
	enum class EInteractionCameraMode CameraMode; // 0x736(0x01)
	char UnknownData_737[0x1]; // 0x737(0x01)
	struct FRotator CameraLimits; // 0x738(0x0c)
	float ProgressPercentage; // 0x744(0x04)
	char UnknownData_748_0 : 7; // 0x748(0x01)
	bool bIsHoldingPrimary : 1; // 0x748(0x01)
	char UnknownData_749_0 : 7; // 0x749(0x01)
	bool bIsHoldingInput : 1; // 0x749(0x01)
	char UnknownData_74A_0 : 7; // 0x74a(0x01)
	bool bShowButtonInActionPrompt : 1; // 0x74a(0x01)
	char UnknownData_74B_0 : 7; // 0x74b(0x01)
	bool bRecentlyFailedInteraction_Pressed : 1; // 0x74b(0x01)
	char UnknownData_74C_0 : 7; // 0x74c(0x01)
	bool bRecentlyFailedInteraction_Hold : 1; // 0x74c(0x01)
	char UnknownData_74D_0 : 7; // 0x74d(0x01)
	bool bRecentlyFailedAltInteraction_Pressed : 1; // 0x74d(0x01)
	char UnknownData_74E_0 : 7; // 0x74e(0x01)
	bool bRecentlyFailedAltInteraction_Hold : 1; // 0x74e(0x01)
	enum class EInteractionAvailability Availability; // 0x74f(0x01)
	char UnknownData_750[0x2a]; // 0x750(0x2a)
	char UnknownData_77A_0 : 7; // 0x77a(0x01)
	bool bInternalComponentsEnabled : 1; // 0x77a(0x01)
	char UnknownData_77B_0 : 7; // 0x77b(0x01)
	bool bEnabled : 1; // 0x77b(0x01)
	char UnknownData_77C_0 : 7; // 0x77c(0x01)
	bool bActionPromptEnabled : 1; // 0x77c(0x01)
	char UnknownData_77D[0x3]; // 0x77d(0x03)
	float HoldStartTime; // 0x780(0x04)
	float RecentlyFailedTime_PressedPrimary; // 0x784(0x04)
	float RecentlyFailedTime_HoldPrimary; // 0x788(0x04)
	float RecentlyFailedTime_PressedAlt; // 0x78c(0x04)
	float RecentlyFailedTime_HoldAlt; // 0x790(0x04)
	char UnknownData_794_0 : 7; // 0x794(0x01)
	bool bWasHoldingPrimaryInput : 1; // 0x794(0x01)
	char UnknownData_795_0 : 7; // 0x795(0x01)
	bool bAlreadyInteracted : 1; // 0x795(0x01)
	char UnknownData_796[0x2]; // 0x796(0x02)
	struct ABasePlayerController* StoredLocalPC; // 0x798(0x08)
	char UnknownData_7A0[0x8]; // 0x7a0(0x08)
	struct FWeakObjectPtr<struct ABaseCharacter> OverlappingLocalCharacter; // 0x7a8(0x08)
	struct UInputComponent* InteractionInputComponent; // 0x7b0(0x08)
	struct UActionPromptWidgetComponent* ActionPrompt; // 0x7b8(0x08)
	char UnknownData_7C0[0x4]; // 0x7c0(0x04)
	char UnknownData_7C4_0 : 7; // 0x7c4(0x01)
	bool bShouldChangeHighlightMaterial : 1; // 0x7c4(0x01)
	char UnknownData_7C5[0x3]; // 0x7c5(0x03)
	struct TArray<struct AActor*> HighlightedMeshActors; // 0x7c8(0x10)
	char UnknownData_7D8[0x8]; // 0x7d8(0x08)
	struct TMap<struct UMeshComponent*, struct FHighlightMaterialLayerMap> HighlightMaterialMap; // 0x7e0(0x50)

	void UpdateInteractionText(struct FText Text); // Function GameplayFramework.LocalInteractionComponent.UpdateInteractionText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x392d1c0
	void SetInteractionSoundObject(struct FBaseSoundObject InSoundObject); // Function GameplayFramework.LocalInteractionComponent.SetInteractionSoundObject // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x392d010
	void SetInteractionDisabledText(struct FText NewText); // Function GameplayFramework.LocalInteractionComponent.SetInteractionDisabledText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x392cf40
	void SetEnabled(bool bInEnabled); // Function GameplayFramework.LocalInteractionComponent.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x392ccf0
	void SetActionPromptEnabled(bool bInEnabled); // Function GameplayFramework.LocalInteractionComponent.SetActionPromptEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x392cba0
	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function GameplayFramework.LocalInteractionComponent.OnOverlapEnd // (Final|Native|Public) // @ game+0x392c960
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function GameplayFramework.LocalInteractionComponent.OnOverlapBegin // (Final|Native|Public|HasOutParms) // @ game+0x392c6f0
	bool IsEnabled(); // Function GameplayFramework.LocalInteractionComponent.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x392c580
	void EnableInteractionDisabledText(bool bEnable); // Function GameplayFramework.LocalInteractionComponent.EnableInteractionDisabledText // (Final|Native|Public|BlueprintCallable) // @ game+0x392c190
};

// Class GameplayFramework.LocalizationGlobals
// Size: 0x50 (Inherited: 0x30)
struct ULocalizationGlobals : UDataAsset {
	struct UDataTable* CoopSyncLocalizationDT; // 0x30(0x08)
	struct UDataTable* CoopSyncTransitionLocalizationDT; // 0x38(0x08)
	struct UDataTable* InteractionLocalizationDT; // 0x40(0x08)
	struct UDataTable* SubObjectivesLocalizationDT; // 0x48(0x08)
};

// Class GameplayFramework.LuckComponent
// Size: 0x198 (Inherited: 0x180)
struct ULuckComponent : UActorComponent {
	struct FDelegate OnLuckIncreased; // 0x180(0x10)
	float LuckLevel; // 0x190(0x04)
	char UnknownData_194[0x4]; // 0x194(0x04)

	void Reset(); // Function GameplayFramework.LuckComponent.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0x392cb80
	void OnRep_LuckLevel(); // Function GameplayFramework.LuckComponent.OnRep_LuckLevel // (Final|Native|Private) // @ game+0x392caa0
	void OnLuckChanged__DelegateSignature(float OldLuckLevel, float LuckLevel); // DelegateFunction GameplayFramework.LuckComponent.OnLuckChanged__DelegateSignature // (Public|Delegate) // @ game+0x1a35c70
	void Increase(float Value); // Function GameplayFramework.LuckComponent.Increase // (Final|Native|Public|BlueprintCallable) // @ game+0x392c500
	float GetLevel(); // Function GameplayFramework.LuckComponent.GetLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x392c4b0
};

// Class GameplayFramework.MainHudUserWidget
// Size: 0x240 (Inherited: 0x230)
struct UMainHudUserWidget : UUserWidget {
	struct TArray<struct UActionPromptUserWidget*> ActionPromptInstances; // 0x230(0x10)
};

// Class GameplayFramework.MathHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMathHelperLibrary : UBlueprintFunctionLibrary {

	struct URandomNamesStream* CreateRandomNamesStream(struct FDataTableRowHandle Names); // Function GameplayFramework.MathHelperLibrary.CreateRandomNamesStream // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x392c0f0
	struct FVector ClampDirToCone(struct FVector InDir, struct FVector ConeDir, float ConeHalfAngle); // Function GameplayFramework.MathHelperLibrary.ClampDirToCone // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x392bfb0
	bool CalculateProjectileVelocityWithExtraHeightInMiddle(struct FVector From, struct FVector To, float ExtraHeight, float GroundSpeed, struct FVector Velocity, float Gravity); // Function GameplayFramework.MathHelperLibrary.CalculateProjectileVelocityWithExtraHeightInMiddle // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x392bd90
	bool CalculateProjectileVelocityWithExtraHeight(struct FVector From, struct FVector To, float ExtraHeight, float GroundSpeed, struct FVector Velocity, float Gravity); // Function GameplayFramework.MathHelperLibrary.CalculateProjectileVelocityWithExtraHeight // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x392bb70
	float AngleBetweenVectors(struct FVector A, struct FVector B); // Function GameplayFramework.MathHelperLibrary.AngleBetweenVectors // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x392ba80
};

// Class GameplayFramework.MinimapNodeComponent
// Size: 0x340 (Inherited: 0x2d0)
struct UMinimapNodeComponent : USceneComponent {
	struct UMinimapNodeStrategy* StrategyClass; // 0x2c8(0x08)
	struct UMinimapNodeStyle* NodeStyleTemplates[0x4]; // 0x2d0(0x20)
	char UnknownData_2F8_0 : 7; // 0x2f8(0x01)
	bool bUseActorLocation : 1; // 0x2f0(0x01)
	struct UMinimapNodeStyle* NodeStyleInstances[0x4]; // 0x2f8(0x20)
	struct UMinimapNodeData* NodeData; // 0x318(0x08)
	struct UMinimapNodeStrategy* Strategy; // 0x320(0x08)
	enum class EMinimapNodeStyleType NodeStyle; // 0x328(0x01)
	char UnknownData_32A[0x16]; // 0x32a(0x16)

	void SetOutOfRangeBrush(struct FMinimapBrushImage NewOutOfRangeBrush, enum class EMinimapNodeStyleType StyleType); // Function GameplayFramework.MinimapNodeComponent.SetOutOfRangeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x392d0c0
	void SetInRangeBrushSize(struct FVector2D Size, enum class EMinimapNodeStyleType StyleType); // Function GameplayFramework.MinimapNodeComponent.SetInRangeBrushSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x392ce80
	void SetInRangeBrush(struct FMinimapBrushImage NewInRangeBrush, enum class EMinimapNodeStyleType StyleType); // Function GameplayFramework.MinimapNodeComponent.SetInRangeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x392cd80
	void SetCustomVisibiltyRange(float InCustomVisibilityRange, enum class EMinimapNodeStyleType StyleType); // Function GameplayFramework.MinimapNodeComponent.SetCustomVisibiltyRange // (Final|Native|Public|BlueprintCallable) // @ game+0x392cc30
	void Ping(); // Function GameplayFramework.MinimapNodeComponent.Ping // (Final|Native|Public|BlueprintCallable) // @ game+0x392cb40
	void OnDeactivated(struct UActorComponent* Component); // Function GameplayFramework.MinimapNodeComponent.OnDeactivated // (Final|Native|Protected) // @ game+0x392c670
	void OnActivated(struct UActorComponent* Component, bool bReset); // Function GameplayFramework.MinimapNodeComponent.OnActivated // (Final|Native|Protected) // @ game+0x392c5a0
	struct UMinimapNodeStyle* GetMinimapNodeStyle(); // Function GameplayFramework.MinimapNodeComponent.GetMinimapNodeStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c16870
};

// Class GameplayFramework.MinimapNodeData
// Size: 0x70 (Inherited: 0x28)
struct UMinimapNodeData : UObject {
	struct UMinimapNodeStyle* Style; // 0x28(0x08)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bWantsToBePinged : 1; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	struct FVector2D LastWidgetLocation; // 0x34(0x08)
	enum class EMinimapNodeDrawStatus NodeDrawStatus; // 0x3c(0x01)
	char UnknownData_3D[0x33]; // 0x3d(0x33)
};

// Class GameplayFramework.MinimapNodeInterface
// Size: 0x28 (Inherited: 0x28)
struct UMinimapNodeInterface : UInterface {

	void PingNode(); // Function GameplayFramework.MinimapNodeInterface.PingNode // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x3931cb0
};

// Class GameplayFramework.DefaultPawnMinimapNodeStrategy
// Size: 0x48 (Inherited: 0x30)
struct UDefaultPawnMinimapNodeStrategy : UMinimapNodeStrategy {
	char UnknownData_30[0x18]; // 0x30(0x18)

	void OnCharacterTeamUpdated(enum class ETeam InTeam); // Function GameplayFramework.DefaultPawnMinimapNodeStrategy.OnCharacterTeamUpdated // (Final|Native|Public) // @ game+0x3931810
	void OnCharacterDied(struct ABaseCharacter* character, struct FTakeHitInfo TakeHitInfo); // Function GameplayFramework.DefaultPawnMinimapNodeStrategy.OnCharacterDied // (Final|Native|Public) // @ game+0x39314c0
};

// Class GameplayFramework.MinimapNodeStyle
// Size: 0x168 (Inherited: 0x30)
struct UMinimapNodeStyle : UDataAsset {
	int32_t ZOrder; // 0x30(0x04)
	char UnknownData_34_0 : 7; // 0x34(0x01)
	bool bOverrideTintDependingOnTeamAttitude : 1; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
	struct FSlateBrush InRangeBrush; // 0x38(0x88)
	char UnknownData_C0_0 : 7; // 0xc0(0x01)
	bool bUseComponentRotation : 1; // 0xc0(0x01)
	char UnknownData_C1_0 : 7; // 0xc1(0x01)
	bool bDisplayIfOutOfRange : 1; // 0xc1(0x01)
	char UnknownData_C2_0 : 7; // 0xc2(0x01)
	bool bUseOutOfRangeBrush : 1; // 0xc2(0x01)
	char UnknownData_C3[0x5]; // 0xc3(0x05)
	struct FSlateBrush OutOfRangeBrush; // 0xc8(0x88)
	char UnknownData_150_0 : 7; // 0x150(0x01)
	bool bRotateOutOfRangeBrush : 1; // 0x150(0x01)
	char UnknownData_151_0 : 7; // 0x151(0x01)
	bool bUseCustomVisibilityRange : 1; // 0x151(0x01)
	char UnknownData_152[0x2]; // 0x152(0x02)
	float CustomVisibilityRange; // 0x154(0x04)
	char UnknownData_158_0 : 7; // 0x158(0x01)
	bool bShowFloorMarker : 1; // 0x158(0x01)
	char UnknownData_159_0 : 7; // 0x159(0x01)
	bool bClip : 1; // 0x159(0x01)
	char UnknownData_15A_0 : 7; // 0x15a(0x01)
	bool bScaleImage : 1; // 0x15a(0x01)
	char UnknownData_15B[0x1]; // 0x15b(0x01)
	float NodeRadious; // 0x15c(0x04)
	char UnknownData_160_0 : 7; // 0x160(0x01)
	bool bIsTerrainNode : 1; // 0x160(0x01)
	char UnknownData_161[0x3]; // 0x161(0x03)
	struct FTerrainMinimapData TerrainMinimapData; // 0x164(0x04)
};

// Class GameplayFramework.MinimapSettings
// Size: 0x140 (Inherited: 0x38)
struct UMinimapSettings : UDeveloperSettings {
	float Scale; // 0x38(0x04)
	float MaxDisplayRange; // 0x3c(0x04)
	float FloorHeight; // 0x40(0x04)
	char UnknownData_44_0 : 7; // 0x44(0x01)
	bool bUseFloorCompass : 1; // 0x44(0x01)
	char UnknownData_45[0x3]; // 0x45(0x03)
	struct FSlateBrush FloorMarkerBrush; // 0x48(0x88)
	struct FVector2D FloorMarkerScale; // 0xd0(0x08)
	struct TMap<enum class EIconPriority, float> IconRange; // 0xd8(0x50)
	struct FColor AllyTint; // 0x128(0x04)
	struct FColor EnemyTint; // 0x12c(0x04)
	struct FColor NeutralTint; // 0x130(0x04)
	struct FColor LegendaryLootTint; // 0x134(0x04)
	struct FColor EpicLootTint; // 0x138(0x04)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
};

// Class GameplayFramework.MinimapWidget
// Size: 0x160 (Inherited: 0x108)
struct UMinimapWidget : UWidget {
	struct FLinearColor ColorAndOpacity; // 0x108(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x118(0x10)
	struct TArray<struct FVector2D> BorderPoints; // 0x128(0x10)
	char UnknownData_138_0 : 7; // 0x138(0x01)
	bool bSupportClipNodes : 1; // 0x138(0x01)
	char UnknownData_139_0 : 7; // 0x139(0x01)
	bool bSupportNormalNodes : 1; // 0x139(0x01)
	char UnknownData_13A[0x6]; // 0x13a(0x06)
	struct FMulticastInlineDelegate OnPingNode; // 0x140(0x10)
	char UnknownData_150[0x10]; // 0x150(0x10)

	void SetOpacity(float InOpacity); // Function GameplayFramework.MinimapWidget.SetOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x3932040
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function GameplayFramework.MinimapWidget.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3931ec0
};

// Class GameplayFramework.MovieSceneAudioSyncTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneAudioSyncTrack : UMovieSceneBoolTrack {
};

// Class GameplayFramework.MovieSceneClothSection
// Size: 0x180 (Inherited: 0x180)
struct UMovieSceneClothSection : UMovieSceneFloatSection {
};

// Class GameplayFramework.MovieSceneClothTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneClothTrack : UMovieSceneFloatTrack {
};

// Class GameplayFramework.MovieSceneDialogueSection
// Size: 0x2f0 (Inherited: 0xe0)
struct UMovieSceneDialogueSection : UMovieSceneSection {
	float CustomJumpTime; // 0xe0(0x04)
	char UnknownData_E4_0 : 7; // 0xe4(0x01)
	bool bSkip : 1; // 0xe4(0x01)
	char UnknownData_E5[0x3]; // 0xe5(0x03)
	struct FName FinishedEventName; // 0xe8(0x08)
	char UnknownData_F0_0 : 7; // 0xf0(0x01)
	bool bIsBranchSection : 1; // 0xf0(0x01)
	char UnknownData_F1[0x3]; // 0xf1(0x03)
	float TrueJumpTime; // 0xf4(0x04)
	struct FFrameNumber TrueJumpFrame; // 0xf8(0x04)
	float FalseJumpTime; // 0xfc(0x04)
	struct FFrameNumber FalseJumpFrame; // 0x100(0x04)
	char UnknownData_104[0x4]; // 0x104(0x04)
	struct FFactValue BranchFact; // 0x108(0x28)
	struct FFactExpression BranchFactExpr; // 0x130(0x18)
	char UnknownData_148_0 : 7; // 0x148(0x01)
	bool bDontJump : 1; // 0x148(0x01)
	char UnknownData_149[0x7]; // 0x149(0x07)
	struct TArray<struct FBaseChoice> Choices; // 0x150(0x10)
	struct FDialogueLine DialogueLine; // 0x160(0x60)
	char UnknownData_1C0_0 : 7; // 0x1c0(0x01)
	bool bPlayOnce : 1; // 0x1c0(0x01)
	enum class EDialogueWindowPosition DialoguePosition; // 0x1c1(0x01)
	char UnknownData_1C2_0 : 7; // 0x1c2(0x01)
	bool bVendorSection : 1; // 0x1c2(0x01)
	char UnknownData_1C3[0x5]; // 0x1c3(0x05)
	struct FSectionLink SectionJumpTime; // 0x1c8(0x20)
	struct FSectionLink TrueSectionJumpTime; // 0x1e8(0x20)
	struct FSectionLink FalseSectionJumpTime; // 0x208(0x20)
	char UnknownData_228_0 : 7; // 0x228(0x01)
	bool bIsInstanceSection : 1; // 0x228(0x01)
	char UnknownData_229[0x7]; // 0x229(0x07)
	struct FWeakObjectPtr<struct UMovieSceneDialogueSection> MasterSection; // 0x230(0x08)
	struct TArray<struct FWeakObjectPtr<struct UMovieSceneSkeletalAnimationSection>> SkelAnimSections; // 0x238(0x10)
	struct FName QuestOrObjectiveID; // 0x248(0x08)
	struct TMap<enum class EQuestJumpType, struct FSectionLink> QuestLinks; // 0x250(0x50)
	struct TArray<struct FGameplayTag> AlwaysLoadedIn; // 0x2a0(0x10)
	struct TArray<struct FGameplayTag> NeverLoadedIn; // 0x2b0(0x10)
	struct FGameplayTagContainer SupportedVOTags; // 0x2c0(0x20)
	struct FGuid ID; // 0x2e0(0x10)
};

// Class GameplayFramework.MovieSceneDialogueTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneDialogueTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class GameplayFramework.MovieSceneSoundMixSection
// Size: 0xe8 (Inherited: 0xe0)
struct UMovieSceneSoundMixSection : UMovieSceneSection {
	struct USoundMix* SoundMix; // 0xe0(0x08)
};

// Class GameplayFramework.MovieSceneSoundMixTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneSoundMixTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class GameplayFramework.NamedActorsStaticData
// Size: 0x88 (Inherited: 0x28)
struct UNamedActorsStaticData : UObject {
	struct TMap<struct FName, struct FName> DefaultRegionMap; // 0x28(0x50)
	struct TArray<struct FConfigItem_DefaultActorRegion> DefaultRegion; // 0x78(0x10)
};

// Class GameplayFramework.NewAreaTrigger
// Size: 0x338 (Inherited: 0x328)
struct ANewAreaTrigger : AVolume {
	struct FGameplayTag AreaTag; // 0x328(0x08)
	struct USoundCue* NewAreaCue; // 0x330(0x08)

	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function GameplayFramework.NewAreaTrigger.OnOverlapBegin // (Final|Native|Protected|HasOutParms) // @ game+0x3931980
};

// Class GameplayFramework.NPCNameActor
// Size: 0x330 (Inherited: 0x2f0)
struct ANPCNameActor : AActor {
	struct FFactExpression NamePlateVisibilityFactExpr; // 0x2f0(0x18)
	struct UNPCNameComponent* NPCNameComponent; // 0x308(0x08)
	struct FVector OverHeadNPCNameLocation; // 0x310(0x0c)
	float NamePlateVisibilityDistance; // 0x31c(0x04)
	char UnknownData_320_0 : 7; // 0x320(0x01)
	bool bIsDisabled : 1; // 0x320(0x01)
	char UnknownData_321[0xf]; // 0x321(0x0f)
};

// Class GameplayFramework.NPCNameComponent
// Size: 0x3c0 (Inherited: 0x3a0)
struct UNPCNameComponent : UBaseLabelWidgetComponent {
	char UnknownData_3A0[0x20]; // 0x3a0(0x20)
};

// Class GameplayFramework.NPCNameWidget
// Size: 0x288 (Inherited: 0x280)
struct UNPCNameWidget : UBaseLabelWidget {
	struct UNPCNameComponent* NPCNameComponent; // 0x280(0x08)
};

// Class GameplayFramework.Objective_Event
// Size: 0x238 (Inherited: 0x230)
struct UObjective_Event : UBaseObjective {
	struct FEventName Event; // 0x230(0x08)
};

// Class GameplayFramework.Objective_Goto
// Size: 0x238 (Inherited: 0x230)
struct UObjective_Goto : UBaseObjective {
	struct FName LocationName; // 0x230(0x08)
};

// Class GameplayFramework.Objective_InteractWith
// Size: 0x230 (Inherited: 0x230)
struct UObjective_InteractWith : UBaseObjective {

	void OnInteracted(struct FGlobalEventParams GlobalEvent); // Function GameplayFramework.Objective_InteractWith.OnInteracted // (Final|Native|Public|HasOutParms) // @ game+0x3931890
};

// Class GameplayFramework.Objective_KillEnemy
// Size: 0x248 (Inherited: 0x230)
struct UObjective_KillEnemy : UBaseObjective {
	int32_t DesiredKills; // 0x230(0x04)
	char UnknownData_234[0x4]; // 0x234(0x04)
	struct UObject* EnemyClass; // 0x238(0x08)
	int32_t CurrentKills; // 0x240(0x04)
	char UnknownData_244[0x4]; // 0x244(0x04)

	void OnCharacterDied(struct FGlobalEventParams GlobalEvent); // Function GameplayFramework.Objective_KillEnemy.OnCharacterDied // (Final|Native|Public|HasOutParms) // @ game+0x39313d0
};

// Class GameplayFramework.Objective_Or
// Size: 0x238 (Inherited: 0x230)
struct UObjective_Or : UBaseObjective {
	char UnknownData_230_0 : 7; // 0x230(0x01)
	bool bDisableOtherParents : 1; // 0x230(0x01)
	char UnknownData_231[0x7]; // 0x231(0x07)
};

// Class GameplayFramework.OffscreenIndicator
// Size: 0x1d8 (Inherited: 0x108)
struct UOffscreenIndicator : UWidget {
	struct AActor* TargetActor; // 0x108(0x08)
	struct FSlateBrush Brush; // 0x110(0x88)
	struct FDelegate BrushDelegate; // 0x198(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1a8(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x1b8(0x10)
	char UnknownData_1C8[0x10]; // 0x1c8(0x10)

	void SetTargetActor(struct AActor* InActor); // Function GameplayFramework.OffscreenIndicator.SetTargetActor // (Final|Native|Public|BlueprintCallable) // @ game+0x3932150
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function GameplayFramework.OffscreenIndicator.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3931f40
	void SetBrush(struct FSlateBrush InBrush); // Function GameplayFramework.OffscreenIndicator.SetBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3931d40
};

// Class GameplayFramework.OffscreenIndicatorPanel
// Size: 0x138 (Inherited: 0x120)
struct UOffscreenIndicatorPanel : UPanelWidget {
	char UnknownData_120_0 : 7; // 0x120(0x01)
	bool bOffscreenOnly : 1; // 0x120(0x01)
	char UnknownData_121[0x17]; // 0x121(0x17)

	struct UOffscreenIndicatorSlot* AddChildToOffscreenPanel(struct UWidget* Content, struct AActor* TargetActor, struct FName AttachComponentName, bool bBindOnOwnerEndPlay); // Function GameplayFramework.OffscreenIndicatorPanel.AddChildToOffscreenPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x3930b70
};

// Class GameplayFramework.OffscreenIndicatorSlot
// Size: 0x60 (Inherited: 0x38)
struct UOffscreenIndicatorSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	char UnknownData_48[0x18]; // 0x48(0x18)

	void SetTargetActor(struct AActor* InActor); // Function GameplayFramework.OffscreenIndicatorSlot.SetTargetActor // (Final|Native|Public|BlueprintCallable) // @ game+0x39321d0
	void SetPadding(struct FMargin InPadding); // Function GameplayFramework.OffscreenIndicatorSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0x39320c0
	void SetComponentName(struct FName CompName); // Function GameplayFramework.OffscreenIndicatorSlot.SetComponentName // (Final|Native|Public|BlueprintCallable) // @ game+0x3931fc0
	void OnOwnerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function GameplayFramework.OffscreenIndicatorSlot.OnOwnerEndPlay // (Final|Native|Public) // @ game+0x3931bf0
};

// Class GameplayFramework.OldMusicController
// Size: 0x2f0 (Inherited: 0x2f0)
struct AOldMusicController : AActor {

	void Disable(); // Function GameplayFramework.OldMusicController.Disable // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
};

// Class GameplayFramework.PCFAutomationBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPCFAutomationBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void TakeScreenshot(struct FString InFilename); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.TakeScreenshot // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3932250
	void pcf.ConsoleParamOverride.Remove(struct FName InKey); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.pcf.ConsoleParamOverride.Remove // (Final|Exec|Native|Static|Public|BlueprintCallable) // @ game+0x3931cd0
	void PCFAutomationLogWarning(struct FString InMessage); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.PCFAutomationLogWarning // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x344d950
	void PCFAutomationLogError(struct FString InMessage); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.PCFAutomationLogError // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x344d950
	void PCFAutomationLog(struct FString InMessage); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.PCFAutomationLog // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x344d950
	bool GetConsoleStringParam(struct FName InKey, struct FString OutParam); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.GetConsoleStringParam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x39312e0
	bool GetConsoleIntParam(struct FName InKey, int32_t OutParam); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.GetConsoleIntParam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3931210
	bool GetConsoleFloatParam(struct FName InKey, float OutParam); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.GetConsoleFloatParam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3931130
	bool GetConsoleBoolParam(struct FName InKey, bool bOutParam); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.GetConsoleBoolParam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3931060
	bool DoesConsoleParamExist(struct FName InKey); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.DoesConsoleParamExist // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3930fe0
	void pcf.ConsoleParamOverride.DisplayAll(); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.pcf.ConsoleParamOverride.DisplayAll // (Final|Exec|Native|Static|Public) // @ game+0x3930fc0
	void pcf.ConsoleParamOverride.AddString(struct FName InKey, struct FString InValue); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.pcf.ConsoleParamOverride.AddString // (Final|Exec|Native|Static|Public|BlueprintCallable) // @ game+0x3930ef0
	void pcf.ConsoleParamOverride.AddInt(struct FName InKey, int32_t InValue); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.pcf.ConsoleParamOverride.AddInt // (Final|Exec|Native|Static|Public|BlueprintCallable) // @ game+0x3930e40
	void pcf.ConsoleParamOverride.AddFloat(struct FName InKey, float InValue); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.pcf.ConsoleParamOverride.AddFloat // (Final|Exec|Native|Static|Public|BlueprintCallable) // @ game+0x3930d80
	void pcf.ConsoleParamOverride.AddBool(struct FName InKey, bool bInValue); // Function GameplayFramework.PCFAutomationBlueprintFunctionLibrary.pcf.ConsoleParamOverride.AddBool // (Final|Exec|Native|Static|Public|BlueprintCallable) // @ game+0x3930cc0
};

// Class GameplayFramework.PCFBlueprintAutomationActor
// Size: 0x320 (Inherited: 0x2f0)
struct APCFBlueprintAutomationActor : AInfo {
	struct FMulticastInlineDelegate OnTestStateChanged; // 0x2f0(0x10)
	char UnknownData_300_0 : 7; // 0x300(0x01)
	bool bSupportsCrashRecovery : 1; // 0x300(0x01)
	char UnknownData_301[0x1f]; // 0x301(0x1f)

	void TickTest(float DeltaSeconds); // Function GameplayFramework.PCFBlueprintAutomationActor.TickTest // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void RunTest(); // Function GameplayFramework.PCFBlueprintAutomationActor.RunTest // (Native|Event|Public|BlueprintEvent) // @ game+0x1522260
	void MarkTestCompleted(); // Function GameplayFramework.PCFBlueprintAutomationActor.MarkTestCompleted // (Final|Native|Public|BlueprintCallable) // @ game+0x39355b0
	void IncrementProgressIndex(); // Function GameplayFramework.PCFBlueprintAutomationActor.IncrementProgressIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x3935570
	int32_t GetProgressIndex(); // Function GameplayFramework.PCFBlueprintAutomationActor.GetProgressIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3935490
	struct FString GetPartialSummary(int32_t InProgressIndex); // Function GameplayFramework.PCFBlueprintAutomationActor.GetPartialSummary // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x3935310
	struct FString GetCrashSummary(int32_t InProgressIndex); // Function GameplayFramework.PCFBlueprintAutomationActor.GetCrashSummary // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x3935160
	void DebugStartTest(); // Function GameplayFramework.PCFBlueprintAutomationActor.DebugStartTest // (Final|Native|Public|BlueprintCallable) // @ game+0xe8aaf0
	void AppendSummary(struct FString InSummary); // Function GameplayFramework.PCFBlueprintAutomationActor.AppendSummary // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x3934b80
};

// Class GameplayFramework.PCFEditorUserSettings
// Size: 0x68 (Inherited: 0x38)
struct UPCFEditorUserSettings : UDeveloperSettings {
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool bEnableValidationBox : 1; // 0x38(0x01)
	char UnknownData_39_0 : 7; // 0x39(0x01)
	bool bEnableInEditorSaves : 1; // 0x39(0x01)
	char UnknownData_3A[0x2]; // 0x3a(0x02)
	float CoverMinimumVisiblePixels; // 0x3c(0x04)
	float CoverDetailedMinimumVisiblePixels; // 0x40(0x04)
	float CoverDesiredGap; // 0x44(0x04)
	struct FGameplayTagContainer NPCTags; // 0x48(0x20)
};

// Class GameplayFramework.PlayDialogueRequest
// Size: 0x198 (Inherited: 0x28)
struct UPlayDialogueRequest : UObject {
	char UnknownData_28[0xd8]; // 0x28(0xd8)
	struct ULevelSequence* DialogueSequenceOrigin; // 0x100(0x08)
	char UnknownData_108[0x88]; // 0x108(0x88)
	struct ULevelStreaming* DialogueLevelStreaming; // 0x190(0x08)

	void OnDialogueLevelLoaded(); // Function GameplayFramework.PlayDialogueRequest.OnDialogueLevelLoaded // (Final|Native|Protected) // @ game+0x3935890
};

// Class GameplayFramework.PlayerInputRecorder
// Size: 0xa0 (Inherited: 0x28)
struct UPlayerInputRecorder : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct UInputTape* InputTape; // 0x38(0x08)
	struct ABasePlayerController* PlayerController; // 0x40(0x08)
	char UnknownData_48[0x58]; // 0x48(0x58)
};

// Class GameplayFramework.PlayMovieWidget
// Size: 0x238 (Inherited: 0x230)
struct UPlayMovieWidget : UUserWidget {
	char UnknownData_230[0x8]; // 0x230(0x08)

	void OnStopMovie(); // Function GameplayFramework.PlayMovieWidget.OnStopMovie // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void OnPlayMovie(struct UMediaSource* InMediaSource); // Function GameplayFramework.PlayMovieWidget.OnPlayMovie // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void MovieWasStopped(); // Function GameplayFramework.PlayMovieWidget.MovieWasStopped // (Final|Native|Protected|BlueprintCallable) // @ game+0x39355d0
};

// Class GameplayFramework.QuestMarker
// Size: 0x448 (Inherited: 0x2f0)
struct AQuestMarker : AActor {
	char UnknownData_2F0[0x10]; // 0x2f0(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x300(0x08)
	struct FVector OverHeadIconLocation; // 0x308(0x0c)
	float OverHeadIconSize; // 0x314(0x04)
	float OverHeadIconVisibilityRange; // 0x318(0x04)
	float OpaqueThreshold; // 0x31c(0x04)
	struct UMinimapNodeComponent* MinimapNodeComponent; // 0x320(0x08)
	char UnknownData_328_0 : 7; // 0x328(0x01)
	bool bTrackQuestsStatus : 1; // 0x328(0x01)
	char UnknownData_329_0 : 7; // 0x329(0x01)
	bool bAttachParentIsQuestObject : 1; // 0x329(0x01)
	char UnknownData_32A_0 : 7; // 0x32a(0x01)
	bool bInheritVisiblityFromParent : 1; // 0x32a(0x01)
	char UnknownData_32B[0x1]; // 0x32b(0x01)
	struct FGameplayTag GameplayName; // 0x32c(0x08)
	char UnknownData_334[0x4]; // 0x334(0x04)
	struct UTexture2D* DefaultIcon; // 0x338(0x08)
	struct FQuestMarkerIcon DefaultMarkerIcon; // 0x340(0x18)
	char UnknownData_358[0x8]; // 0x358(0x08)
	struct TMap<enum class EIconPriority, struct FQuestMarkerIcon> IconPriorityList; // 0x360(0x50)
	char UnknownData_3B0[0x10]; // 0x3b0(0x10)
	enum class ECollisionChannel LineOfSightChannel; // 0x3c0(0x01)
	char UnknownData_3C1[0x3]; // 0x3c1(0x03)
	float LineOfSightTraceSphereRadius; // 0x3c4(0x04)
	struct TMap<struct AActor*, float> LineOfSightBlockesOppacity; // 0x3c8(0x50)
	struct UBaseQuest* RelatedQuest; // 0x418(0x08)
	char UnknownData_420[0x28]; // 0x420(0x28)

	void TryBindOnQuestStatusChanged(); // Function GameplayFramework.QuestMarker.TryBindOnQuestStatusChanged // (Final|Native|Protected) // @ game+0x393ab60
	void SetVisibility(bool bVisible); // Function GameplayFramework.QuestMarker.SetVisibility // (Native|Public|BlueprintCallable) // @ game+0x155efa0
	void SetMinimapIconVisibilityRange(float NewRange); // Function GameplayFramework.QuestMarker.SetMinimapIconVisibilityRange // (Native|Public|BlueprintCallable) // @ game+0x3939f90
	void SetIcon(struct UTexture2D* Icon, enum class EIconPriority Priority); // Function GameplayFramework.QuestMarker.SetIcon // (Native|Public|BlueprintCallable) // @ game+0x3939ec0
	void SetBillboardHiddenInGame(bool bBillboardHidden); // Function GameplayFramework.QuestMarker.SetBillboardHiddenInGame // (Native|Public|BlueprintCallable) // @ game+0x155ee80
	void OnRegionStarted(enum class ERegionStartedState RegionState); // Function GameplayFramework.QuestMarker.OnRegionStarted // (Final|Native|Protected) // @ game+0x3939cb0
	void OnQuestTrackingChanged(struct UBaseQuest* quest, bool bTrakced); // Function GameplayFramework.QuestMarker.OnQuestTrackingChanged // (Final|Native|Protected) // @ game+0x3939b40
	void OnQuestHandleStatusChanged(struct UQuestEventHandler* QuestOrObjective, enum class EObjectiveStatus NewStatus, bool bIsLoading); // Function GameplayFramework.QuestMarker.OnQuestHandleStatusChanged // (Final|Native|Protected) // @ game+0x3939a30
	void DrawHUD(struct ABaseHud* HUD, struct UCanvas* Canvas, struct UCanvas* DebugCanvas); // Function GameplayFramework.QuestMarker.DrawHUD // (Final|Native|Protected) // @ game+0x3939870
	void ClearIcon(enum class EIconPriority Priority); // Function GameplayFramework.QuestMarker.ClearIcon // (Native|Public|BlueprintCallable) // @ game+0x3938e10
};

// Class GameplayFramework.QuestAreaMarker
// Size: 0x480 (Inherited: 0x448)
struct AQuestAreaMarker : AQuestMarker {
	struct UMinimapNodeComponent* AreaNodeComponent; // 0x448(0x08)
	struct USphereComponent* SphereComponent; // 0x450(0x08)
	float Radious; // 0x458(0x04)
	char UnknownData_45C_0 : 7; // 0x45c(0x01)
	bool bTriggerGlobalEventWhenPlayerEnter : 1; // 0x45c(0x01)
	char UnknownData_45D[0x3]; // 0x45d(0x03)
	struct FString GlobalEventName; // 0x460(0x10)
	struct FMulticastInlineDelegate OnPlayerEnter; // 0x470(0x10)

	void OnSphereBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function GameplayFramework.QuestAreaMarker.OnSphereBeginOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x3935ba0
};

// Class GameplayFramework.QuestBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UQuestBlueprintLibrary : UBlueprintFunctionLibrary {

	void UnlockQuest(struct UObject* WorldContextObject, struct UBaseQuest* quest, bool bForAllPlayers); // Function GameplayFramework.QuestBlueprintLibrary.UnlockQuest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3936400
	void SetQuestStageForAllPlayers(struct UObject* WorldContextObject, struct FName ObjectiveToSetActive); // Function GameplayFramework.QuestBlueprintLibrary.SetQuestStageForAllPlayers // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3936200
	void SetQuestStage(struct UObject* WorldContextObject, struct FName ObjectiveToSetActive, bool bForce); // Function GameplayFramework.QuestBlueprintLibrary.SetQuestStage // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3936100
	void RollbackQuestToLastShareable(struct UObject* WorldContextObject, struct UBaseQuest* Inquest); // Function GameplayFramework.QuestBlueprintLibrary.RollbackQuestToLastShareable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3935eb0
	void FailQuest(struct UObject* WorldContextObject, struct UBaseQuest* quest, enum class EQuestFailReason FailReason); // Function GameplayFramework.QuestBlueprintLibrary.FailQuest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3934ff0
	void Debug_PrintQuestManager(struct ABasePlayerController* PC); // Function GameplayFramework.QuestBlueprintLibrary.Debug_PrintQuestManager // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3934ea0
	void CancelQuest(struct UObject* WorldContextObject, struct UBaseQuest* quest, struct ABasePlayerController* PC); // Function GameplayFramework.QuestBlueprintLibrary.CancelQuest // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x3934d10
	void BeginQuest(struct UObject* WorldContextObject, struct UBaseQuest* quest, struct ABasePlayerController* PlayerController); // Function GameplayFramework.QuestBlueprintLibrary.BeginQuest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3934c20
};

// Class GameplayFramework.QuestCheckpointTrigger
// Size: 0x330 (Inherited: 0x328)
struct AQuestCheckpointTrigger : AVolume {
	struct FEventName ObjectiveEventName; // 0x328(0x08)

	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function GameplayFramework.QuestCheckpointTrigger.OnOverlapBegin // (Final|Native|Protected|HasOutParms) // @ game+0x39358f0
};

// Class GameplayFramework.QuestObjectInterface
// Size: 0x28 (Inherited: 0x28)
struct UQuestObjectInterface : UBaseNamedActor {

	bool HasNewDialogue(); // Function GameplayFramework.QuestObjectInterface.HasNewDialogue // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x39399e0
	bool HasAnyDialogue(); // Function GameplayFramework.QuestObjectInterface.HasAnyDialogue // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x39399b0
	bool BeginsQuest(struct UBaseQuest* quest); // Function GameplayFramework.QuestObjectInterface.BeginsQuest // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x3938d70
};

// Class GameplayFramework.QuestTimeline
// Size: 0x50 (Inherited: 0x30)
struct UQuestTimeline : UDataAsset {
	struct TArray<struct FChapter> Chapters; // 0x30(0x10)
	struct FName UnlockMatchmakingCheckpointID; // 0x40(0x08)
	struct FName TruckUnlockedCheckpointID; // 0x48(0x08)
};

// Class GameplayFramework.QuickTimeEventInputComponent
// Size: 0x2b0 (Inherited: 0x208)
struct UQuickTimeEventInputComponent : UInputComponent {
	struct FMulticastInlineDelegate OnQuickTimeEventStart; // 0x208(0x10)
	struct FMulticastInlineDelegate OnQuickTimeEventEnded; // 0x218(0x10)
	struct FMulticastInlineDelegate OnQuickTimeEventBtnPressed; // 0x228(0x10)
	char UnknownData_238[0x78]; // 0x238(0x78)

	void StartEventPressBeforeTimeout(enum class EQuickTimeEventButton Button, float Timeout, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.StartEventPressBeforeTimeout // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x393a950
	void StartEventMashUntilTimeout(enum class EQuickTimeEventButton Button, float Timeout, int32_t MinPressNum, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.StartEventMashUntilTimeout // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x393a800
	void StartEventAnalogSwingUpDown(enum class EQuickTimeEventButton Button, int32_t MinSwingNum, float Timeout, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.StartEventAnalogSwingUpDown // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x393a6b0
	void StartEventAnalogSwingLeftRight(enum class EQuickTimeEventButton Button, int32_t MinSwingNum, float Timeout, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.StartEventAnalogSwingLeftRight // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x393a560
	void StartEventAnalogMoveUp(enum class EQuickTimeEventButton Button, float Timeout, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.StartEventAnalogMoveUp // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x393a450
	void StartEventAnalogMoveRight(enum class EQuickTimeEventButton Button, float Timeout, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.StartEventAnalogMoveRight // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x393a340
	void StartEventAnalogMoveLeft(enum class EQuickTimeEventButton Button, float Timeout, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.StartEventAnalogMoveLeft // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x393a230
	void StartEventAnalogMoveDown(enum class EQuickTimeEventButton Button, float Timeout, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.StartEventAnalogMoveDown // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x393a120
	void StartEventAnalogMakeCircles(enum class EQuickTimeEventButton Button, int32_t MinCircleNum, float Timeout); // Function GameplayFramework.QuickTimeEventInputComponent.StartEventAnalogMakeCircles // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x393a010
	void ServerOnQuickTimeEventStarted(struct FQuickTimeEventDescription Description); // Function GameplayFramework.QuickTimeEventInputComponent.ServerOnQuickTimeEventStarted // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x3939e10
	void ServerOnQuickTimeEventEnded(struct FQuickTimeEventStatistics Statistics); // Function GameplayFramework.QuickTimeEventInputComponent.ServerOnQuickTimeEventEnded // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x3939d30
	void ServerOnQuickTimeEventButtonPressed(float TaskProgress); // Function GameplayFramework.QuickTimeEventInputComponent.ServerOnQuickTimeEventButtonPressed // (Final|Net|Native|Event|Private|NetServer) // @ game+0x2b2d150
	void ClientStartEventPressBeforeTimeout(enum class EQuickTimeEventButton Button, float Timeout, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.ClientStartEventPressBeforeTimeout // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x3939770
	void ClientStartEventMashUntilTimeout(enum class EQuickTimeEventButton Button, float Timeout, int32_t MinPressNum, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.ClientStartEventMashUntilTimeout // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x3939630
	void ClientStartEventAnalogSwingUpDown(enum class EQuickTimeEventButton Button, int32_t MinSwingNum, float Timeout, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.ClientStartEventAnalogSwingUpDown // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x39394f0
	void ClientStartEventAnalogSwingLeftRight(enum class EQuickTimeEventButton Button, int32_t MinSwingNum, float Timeout, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.ClientStartEventAnalogSwingLeftRight // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x39393b0
	void ClientStartEventAnalogMoveUp(enum class EQuickTimeEventButton Button, float Timeout, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.ClientStartEventAnalogMoveUp // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x39392b0
	void ClientStartEventAnalogMoveRight(enum class EQuickTimeEventButton Button, float Timeout, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.ClientStartEventAnalogMoveRight // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x39391b0
	void ClientStartEventAnalogMoveLeft(enum class EQuickTimeEventButton Button, float Timeout, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.ClientStartEventAnalogMoveLeft // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x39390b0
	void ClientStartEventAnalogMoveDown(enum class EQuickTimeEventButton Button, float Timeout, bool bStrictMode); // Function GameplayFramework.QuickTimeEventInputComponent.ClientStartEventAnalogMoveDown // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x3938fb0
	void ClientStartEventAnalogMakeCircles(enum class EQuickTimeEventButton Button, int32_t MinCircleNum, float Timeout); // Function GameplayFramework.QuickTimeEventInputComponent.ClientStartEventAnalogMakeCircles // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x3938eb0
	void ClientDoNotConsumeInputForCurrentEvent(); // Function GameplayFramework.QuickTimeEventInputComponent.ClientDoNotConsumeInputForCurrentEvent // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x3938e90
};

// Class GameplayFramework.QuickTimeEventManagerComponent
// Size: 0x1a0 (Inherited: 0x180)
struct UQuickTimeEventManagerComponent : UActorComponent {
	struct FMulticastInlineDelegate OnMulitQuickTimeEventEnded; // 0x180(0x10)
	char UnknownData_190[0x10]; // 0x190(0x10)

	void StartMultiEvent(struct TArray<struct FQuickTimeEventRequest> QuickTimeEventsRequest, float MinCompletionRatio); // Function GameplayFramework.QuickTimeEventManagerComponent.StartMultiEvent // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x393aa60
	void OnQuickTimeEventEnded(struct FQuickTimeEventStatistics Stats); // Function GameplayFramework.QuickTimeEventManagerComponent.OnQuickTimeEventEnded // (Final|Native|Private) // @ game+0x3939c10
	void OnEventTimeout(); // Function GameplayFramework.QuickTimeEventManagerComponent.OnEventTimeout // (Final|Native|Private) // @ game+0x3939a10
};

// Class GameplayFramework.RagdollStandupAnimations
// Size: 0x38 (Inherited: 0x28)
struct URagdollStandupAnimations : UObject {
	struct TArray<struct UAnimSequence*> StandupAnimations; // 0x28(0x10)
};

// Class GameplayFramework.RagdollStandupHelper
// Size: 0x28 (Inherited: 0x28)
struct URagdollStandupHelper : UObject {
};

// Class GameplayFramework.RandomNamesStream
// Size: 0x48 (Inherited: 0x28)
struct URandomNamesStream : UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)

	struct FName GetNext(); // Function GameplayFramework.RandomNamesStream.GetNext // (Final|Native|Public|BlueprintCallable) // @ game+0x3939970
};

// Class GameplayFramework.SampledSplineComponent
// Size: 0x5e0 (Inherited: 0x5c0)
struct USampledSplineComponent : USplineComponent {
	float SplineSamplePointsDistance; // 0x5c0(0x04)
	char UnknownData_5C4[0x4]; // 0x5c4(0x04)
	struct TArray<struct FVector> LocationsOnSpline; // 0x5c8(0x10)
	char UnknownData_5D8[0x8]; // 0x5d8(0x08)
};

// Class GameplayFramework.SequenceOriginMarkerActor
// Size: 0x340 (Inherited: 0x2f0)
struct ASequenceOriginMarkerActor : AActor {
	struct TMap<struct FGameplayTag, struct AActor*> RegionToActorMap; // 0x2f0(0x50)
};

// Class GameplayFramework.SequenceOriginDebugRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct USequenceOriginDebugRenderingComponent : UPrimitiveComponent {
};

// Class GameplayFramework.SequenceOriginTrack
// Size: 0x88 (Inherited: 0x58)
struct USequenceOriginTrack : UMovieSceneNameableTrack {
	LazyObjectProperty OriginActor; // 0x58(0x20)
	char UnknownData_78[0x10]; // 0x78(0x10)
};

// Class GameplayFramework.TeamActorInterface
// Size: 0x28 (Inherited: 0x28)
struct UTeamActorInterface : UGenericTeamAgentInterface {

	void K2_SetTeam(enum class ETeam NewTeam); // Function GameplayFramework.TeamActorInterface.K2_SetTeam // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1a35c70
	enum class ETeam K2_GetTeam(); // Function GameplayFramework.TeamActorInterface.K2_GetTeam // (Event|Public|BlueprintEvent|Const) // @ game+0x1a35c70
	enum class ETeamAttitude GetTeamAttitudeTowards(struct AActor* Other); // Function GameplayFramework.TeamActorInterface.GetTeamAttitudeTowards // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x393e7d0
};

// Class GameplayFramework.TelemetryVolume
// Size: 0x338 (Inherited: 0x328)
struct ATelemetryVolume : AVolume {
	struct FGameplayTag VolumeTag; // 0x328(0x08)
	char UnknownData_330_0 : 7; // 0x330(0x01)
	bool bDisabled : 1; // 0x330(0x01)
	char UnknownData_331[0x7]; // 0x331(0x07)

	void SetEnabled(bool bEnabled); // Function GameplayFramework.TelemetryVolume.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x393f350
	bool IsEnabled(); // Function GameplayFramework.TelemetryVolume.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x393eb10
};

// Class GameplayFramework.TileFloorActor
// Size: 0x9448 (Inherited: 0x2f0)
struct ATileFloorActor : AActor {
	struct FTileFloorSpringParams LinearSpringParams; // 0x2f0(0x0c)
	struct FTileFloorSpringParams AngularSpringParams; // 0x2fc(0x0c)
	int32_t SimulationSubsteps; // 0x308(0x04)
	float TileMass; // 0x30c(0x04)
	float TileInertia; // 0x310(0x04)
	float PositionSyncThreshold; // 0x314(0x04)
	float AngleSyncThresholdDegrees; // 0x318(0x04)
	float SimulationBias; // 0x31c(0x04)
	struct TArray<struct UStaticMeshComponent*> TileMeshComponents; // 0x320(0x10)
	struct TArray<struct UObject*> ForceSources; // 0x330(0x10)
	char UnknownData_340[0x10]; // 0x340(0x10)
	struct TArray<struct UObject*> Observers; // 0x350(0x10)
	char UnknownData_360[0x90e8]; // 0x360(0x90e8)

	void UpdateConstraintPosition(struct FTileFloorConstraintHandle ConstraintHandle, struct FVector NewPosition); // Function GameplayFramework.TileFloorActor.UpdateConstraintPosition // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x393f5d0
	struct TArray<struct ADetachedTileActor*> RespawnTilesAsActors(struct TArray<struct UStaticMeshComponent*> MeshComponents); // Function GameplayFramework.TileFloorActor.RespawnTilesAsActors // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x393f1d0
	struct ADetachedTileActor* RespawnTileAsActor(struct UStaticMeshComponent* MeshComponent); // Function GameplayFramework.TileFloorActor.RespawnTileAsActor // (Final|Native|Public|BlueprintCallable) // @ game+0x393f140
	void RemoveConstraint(struct FTileFloorConstraintHandle ConstraintHandle); // Function GameplayFramework.TileFloorActor.RemoveConstraint // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x393f000
	struct TArray<struct UStaticMeshComponent*> GetTilesInSphere(struct FVector Center, float Radius); // Function GameplayFramework.TileFloorActor.GetTilesInSphere // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x393e870
	struct UObject* FindObserver(struct UObject* SourceClass); // Function GameplayFramework.TileFloorActor.FindObserver // (Final|Native|Public|BlueprintCallable) // @ game+0x393e740
	struct UObject* FindForceSource(struct UObject* SourceClass); // Function GameplayFramework.TileFloorActor.FindForceSource // (Final|Native|Public|BlueprintCallable) // @ game+0x393e6b0
	void DestroyTiles(struct TArray<struct UStaticMeshComponent*> MeshComponents); // Function GameplayFramework.TileFloorActor.DestroyTiles // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x393e4e0
	void DestroyTile(struct UStaticMeshComponent* MeshComponent); // Function GameplayFramework.TileFloorActor.DestroyTile // (Final|Native|Public|BlueprintCallable) // @ game+0x393e460
	void AddTile(struct FTransform InitialTransform, struct UStaticMesh* TileMesh); // Function GameplayFramework.TileFloorActor.AddTile // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x393e2d0
	void AddObserver(struct TScriptInterface<None> Observer); // Function GameplayFramework.TileFloorActor.AddObserver // (Final|Native|Public|BlueprintCallable) // @ game+0x393e230
	void AddForceSource(struct TScriptInterface<None> ForceSource); // Function GameplayFramework.TileFloorActor.AddForceSource // (Final|Native|Public|BlueprintCallable) // @ game+0x393e190
	struct FTileFloorConstraintHandle AddConstraint(struct FVector InitialPosition, float Radius); // Function GameplayFramework.TileFloorActor.AddConstraint // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x393e0a0
};

// Class GameplayFramework.TileFloorForceSource
// Size: 0x28 (Inherited: 0x28)
struct UTileFloorForceSource : UInterface {
};

// Class GameplayFramework.TileFloorInfluenceComponent
// Size: 0x208 (Inherited: 0x180)
struct UTileFloorInfluenceComponent : UActorComponent {
	struct TArray<struct FName> SocketNames; // 0x180(0x10)
	struct TArray<struct FTileFloorInfluenceData> Influencers; // 0x190(0x10)
	char UnknownData_1A0_0 : 7; // 0x1a0(0x01)
	bool bAutoRegisterInTileFloors : 1; // 0x1a0(0x01)
	char UnknownData_1A1[0x67]; // 0x1a1(0x67)

	void RegisterInTileFloor(struct ATileFloorActor* TileFloor); // Function GameplayFramework.TileFloorInfluenceComponent.RegisterInTileFloor // (Final|Native|Public|BlueprintCallable) // @ game+0x393ef80
};

// Class GameplayFramework.TileFloorObserver
// Size: 0x28 (Inherited: 0x28)
struct UTileFloorObserver : UInterface {
};

// Class GameplayFramework.TileFloorPlanePaintObserver
// Size: 0x48 (Inherited: 0x28)
struct UTileFloorPlanePaintObserver : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	float CooldownFactor; // 0x30(0x04)
	float WarmupTime; // 0x34(0x04)
	int32_t NumPhases; // 0x38(0x04)
	int32_t ColorComponentToPaint; // 0x3c(0x04)
	char UnknownData_40[0x8]; // 0x40(0x08)
};

// Class GameplayFramework.TileFloorWaveForce
// Size: 0x40 (Inherited: 0x28)
struct UTileFloorWaveForce : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)

	void SpawnWave(struct FVector Center, float Speed, float ImpulseWidth, float ImpulseAmount, float Range); // Function GameplayFramework.TileFloorWaveForce.SpawnWave // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x393f3d0
};

// Class GameplayFramework.VirtualCursorFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVirtualCursorFunctionLibrary : UBlueprintFunctionLibrary {

	void ToggleVirtualCursorSnap(); // Function GameplayFramework.VirtualCursorFunctionLibrary.ToggleVirtualCursorSnap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x393f5b0
	bool IsCursorOverInteractableWidget(); // Function GameplayFramework.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x393eae0
	float GetVirtualCursorSizeDPIScaled(struct UObject* WorldContextObject); // Function GameplayFramework.VirtualCursorFunctionLibrary.GetVirtualCursorSizeDPIScaled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x393e9c0
	float GetVirtualCursorSize(); // Function GameplayFramework.VirtualCursorFunctionLibrary.GetVirtualCursorSize // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x393e990
	void EnableVirtualCursor(struct APlayerController* PC); // Function GameplayFramework.VirtualCursorFunctionLibrary.EnableVirtualCursor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x393e640
	void DisableVirtualCursor(struct APlayerController* PC); // Function GameplayFramework.VirtualCursorFunctionLibrary.DisableVirtualCursor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x393e5b0
};

// Class GameplayFramework.VirtualCursorSettings
// Size: 0x118 (Inherited: 0x38)
struct UVirtualCursorSettings : UDeveloperSettings {
	struct FRuntimeFloatCurve VirtualCursorAccelerationCurve; // 0x38(0x88)
	float MaxVirtualCursorSpeed; // 0xc0(0x04)
	float MaxVirtualCursorSpeedWhenHovered; // 0xc4(0x04)
	float VirtualCursorDragCoefficient; // 0xc8(0x04)
	float VirtualCursorDragCoefficientWhenHovered; // 0xcc(0x04)
	float MinVirtualCursorSpeed; // 0xd0(0x04)
	float VirtualCursorDeadZone; // 0xd4(0x04)
	float VirtualCursorAccelerationMultiplier; // 0xd8(0x04)
	float VirtualCursorSize; // 0xdc(0x04)
	char UnknownData_E0_0 : 7; // 0xe0(0x01)
	bool bUseEngineVirtualCursor : 1; // 0xe0(0x01)
	char UnknownData_E1_0 : 7; // 0xe1(0x01)
	bool bVirtualCursorNoAcceleration : 1; // 0xe1(0x01)
	char UnknownData_E2_0 : 7; // 0xe2(0x01)
	bool bSnapVirtualCursor : 1; // 0xe2(0x01)
	char UnknownData_E3[0x1]; // 0xe3(0x01)
	float SnapDistance; // 0xe4(0x04)
	float CursorJumpThreshold; // 0xe8(0x04)
	char UnknownData_EC_0 : 7; // 0xec(0x01)
	bool bUseRightAnalogAsScroll : 1; // 0xec(0x01)
	char UnknownData_ED[0x3]; // 0xed(0x03)
	float ScrollSensivity; // 0xf0(0x04)
	float ScrollDeadZone; // 0xf4(0x04)
	char UnknownData_F8_0 : 7; // 0xf8(0x01)
	bool bIsScrollingAccelerated : 1; // 0xf8(0x01)
	char UnknownData_F9[0x3]; // 0xf9(0x03)
	float ScrollAccelerationMultiplier; // 0xfc(0x04)
	float ScrollDragCoefficient; // 0x100(0x04)
	float ScrollMaxVelocity; // 0x104(0x04)
	char UnknownData_108[0x10]; // 0x108(0x10)
};

// Class GameplayFramework.VirtualCursorSnapPanel
// Size: 0x148 (Inherited: 0x120)
struct UVirtualCursorSnapPanel : UContentWidget {
	char UnknownData_120_0 : 7; // 0x120(0x01)
	bool bNeverSnap : 1; // 0x120(0x01)
	char UnknownData_121[0x7]; // 0x121(0x07)
	struct TArray<struct UDragDropOperation*> SupportedDragDropClasses; // 0x128(0x10)
	char UnknownData_138[0x10]; // 0x138(0x10)
};

// Class GameplayFramework.VOData
// Size: 0x300 (Inherited: 0x2f0)
struct AVOData : AInfo {
	struct TArray<struct UDataTable*> Lists; // 0x2f0(0x10)
};

// Class GameplayFramework.VolumeDebugRenderingComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UVolumeDebugRenderingComponent : UPrimitiveComponent {
};

// Class GameplayFramework.VOPlayBlueprint
// Size: 0x60 (Inherited: 0x30)
struct UVOPlayBlueprint : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x30(0x10)
	char UnknownData_40[0x20]; // 0x40(0x20)

	struct UVOPlayBlueprint* PlayVOAsync(struct UObject* WorldContextObject, struct FName Tag, enum class EVOPriority Priority, enum class EVOListType Type, float Delay, bool bReplicate); // Function GameplayFramework.VOPlayBlueprint.PlayVOAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x39438c0
	void OnEndVO(); // Function GameplayFramework.VOPlayBlueprint.OnEndVO // (Final|Native|Private) // @ game+0x3943740
};

// Class GameplayFramework.VOTrigger
// Size: 0x3a8 (Inherited: 0x328)
struct AVOTrigger : ATriggerVolume {
	enum class EVOPriority Priority; // 0x328(0x01)
	char UnknownData_329[0x3]; // 0x329(0x03)
	struct FName Tag; // 0x32c(0x08)
	char UnknownData_334_0 : 7; // 0x334(0x01)
	bool bIsPlayerOverlapping : 1; // 0x334(0x01)
	char UnknownData_335[0x3]; // 0x335(0x03)
	float MinTime; // 0x338(0x04)
	float MaxTime; // 0x33c(0x04)
	char UnknownData_340_0 : 7; // 0x340(0x01)
	bool PlayOnce : 1; // 0x340(0x01)
	char UnknownData_341[0x7]; // 0x341(0x07)
	struct FFactExpression ResetPlayOnceFactExpression; // 0x348(0x18)
	char UnknownData_360_0 : 7; // 0x360(0x01)
	bool bCooldown : 1; // 0x360(0x01)
	char UnknownData_361[0x3]; // 0x361(0x03)
	float CooldownMinTime; // 0x364(0x04)
	float CooldownMaxTime; // 0x368(0x04)
	char UnknownData_36C_0 : 7; // 0x36c(0x01)
	bool bCheckFactExpression : 1; // 0x36c(0x01)
	char UnknownData_36D[0x3]; // 0x36d(0x03)
	struct FFactExpression FactExpression; // 0x370(0x18)
	char UnknownData_388_0 : 7; // 0x388(0x01)
	bool bAntfarm : 1; // 0x388(0x01)
	char UnknownData_389_0 : 7; // 0x389(0x01)
	bool bReplicate : 1; // 0x389(0x01)
	char UnknownData_38A_0 : 7; // 0x38a(0x01)
	bool bWasPlayed : 1; // 0x38a(0x01)
	char UnknownData_38B[0x1d]; // 0x38b(0x1d)

	void OnTimer(); // Function GameplayFramework.VOTrigger.OnTimer // (Final|Native|Private) // @ game+0x39438a0
	void OnTeamWipedOut(); // Function GameplayFramework.VOTrigger.OnTeamWipedOut // (Final|Native|Private) // @ game+0x3943880
	void OnEndVOAntfarm(struct FName ListName); // Function GameplayFramework.VOTrigger.OnEndVOAntfarm // (Final|Native|Private) // @ game+0x3943760
	void OnEndVO(); // Function GameplayFramework.VOTrigger.OnEndVO // (Final|Native|Private) // @ game+0x3943720
};

// Class GameplayFramework.WaterSplashTemplatesDataAsset
// Size: 0xd0 (Inherited: 0x30)
struct UWaterSplashTemplatesDataAsset : UDataAsset {
	struct TMap<enum class EPhysMaterialType, struct FWaterSplashTemplate> ShallowWaterTemplates; // 0x30(0x50)
	struct TMap<enum class EPhysMaterialType, struct FWaterSplashTemplate> DeepWaterTemplates; // 0x80(0x50)
};

// Class GameplayFramework.WaterSplashComponent
// Size: 0x290 (Inherited: 0x180)
struct UWaterSplashComponent : UActorComponent {
	float TickInterval; // 0x180(0x04)
	float ShallowWaterHeightRatio; // 0x184(0x04)
	float MinimalVelocityToSpawnSplashes; // 0x188(0x04)
	char UnknownData_18C[0x4]; // 0x18c(0x04)
	struct FMulticastInlineDelegate OnCharacterLeaveWater; // 0x190(0x10)
	struct FMulticastInlineDelegate OnCharacterEnterShallowWater; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnCharacterEnterDeepWater; // 0x1b0(0x10)
	struct UWaterSplashTemplatesDataAsset* WaterSplashTemplates; // 0x1c0(0x08)
	struct UParticleSystemComponent* ShallowParticles; // 0x1c8(0x08)
	struct UParticleSystemComponent* DeepParticles; // 0x1d0(0x08)
	struct UAudioComponent* AudioComponent; // 0x1d8(0x08)
	char UnknownData_1E0[0xb0]; // 0x1e0(0xb0)

	void OnLeaveWater(); // Function GameplayFramework.WaterSplashComponent.OnLeaveWater // (Final|Native|Private) // @ game+0x3943820
	void OnEnterShallowWater(); // Function GameplayFramework.WaterSplashComponent.OnEnterShallowWater // (Final|Native|Private) // @ game+0x3943800
	void OnEnterDeepWater(); // Function GameplayFramework.WaterSplashComponent.OnEnterDeepWater // (Final|Native|Private) // @ game+0x39437e0
	void OnDeactivated(struct UActorComponent* Comp); // Function GameplayFramework.WaterSplashComponent.OnDeactivated // (Final|Native|Private) // @ game+0x39436a0
	void OnActivated(struct UActorComponent* Comp, bool bReset); // Function GameplayFramework.WaterSplashComponent.OnActivated // (Final|Native|Private) // @ game+0x39435d0
};

// Class GameplayFramework.WeaponAbilityDamageType
// Size: 0x88 (Inherited: 0x30)
struct UWeaponAbilityDamageType : UDataAsset {
	struct UDamageType* DefaultAbilityDamageType; // 0x30(0x08)
	struct TMap<struct AWeapon*, struct UDamageType*> PerWeaponAbilityDamageTypes; // 0x38(0x50)
};

// Class GameplayFramework.WeaponAbilityEffect
// Size: 0x48 (Inherited: 0x30)
struct UWeaponAbilityEffect : UDataAsset {
	struct UWeaponEffects* DefaultAbilityEffects; // 0x30(0x08)
	struct TArray<struct FWeaponAbilityEffects> PerWeaponAbilityEffects; // 0x38(0x10)
};

// Class GameplayFramework.WeaponAnimDataInterface
// Size: 0x28 (Inherited: 0x28)
struct UWeaponAnimDataInterface : UInterface {
};

// Class GameplayFramework.WeaponEffects
// Size: 0xb8 (Inherited: 0x30)
struct UWeaponEffects : UDataAsset {
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bLoopedMuzzleParticle : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct TArray<struct UParticleSystem*> MuzzleParticles; // 0x38(0x10)
	struct UParticleSystem* TrailParticle; // 0x48(0x08)
	struct FName TrailTargetParam; // 0x50(0x08)
	float DefaultTrailDistance; // 0x58(0x04)
	float DefaultTrailLifetime; // 0x5c(0x04)
	struct UImpactEffectWeapon* ImpactEffectTemplate; // 0x60(0x08)
	char UnknownData_68_0 : 7; // 0x68(0x01)
	bool bLoopedFireSound : 1; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct USoundCue* FireSound; // 0x70(0x08)
	struct USoundCue* FireLoopSound; // 0x78(0x08)
	struct USoundCue* FireFinishSound; // 0x80(0x08)
	struct USoundCue* ClipNearEmptySound; // 0x88(0x08)
	struct USoundCue* ShootingLockedSound; // 0x90(0x08)
	struct USoundCue* EquipSound; // 0x98(0x08)
	struct USoundCue* ReloadStartSound; // 0xa0(0x08)
	struct USoundCue* ReloadLoopSound; // 0xa8(0x08)
	struct USoundCue* ReloadEndSound; // 0xb0(0x08)
};

// Class GameplayFramework.WeaponEquipAnimData
// Size: 0xe0 (Inherited: 0x30)
struct UWeaponEquipAnimData : UDataAsset {
	struct TArray<struct FWeaponEquipAnim> Anims; // 0x30(0x10)
	struct TSet<struct UAnimMontage*> LoadedAnims; // 0x40(0x50)
	struct TSet<struct ASkeletalMeshActor*> LoadedActors; // 0x90(0x50)
};

// Class GameplayFramework.WeaponInterface
// Size: 0x28 (Inherited: 0x28)
struct UWeaponInterface : UInterface {

	bool WantsToTarget(); // Function GameplayFramework.WeaponInterface.WantsToTarget // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3948ce0
	bool WantsToFire(); // Function GameplayFramework.WeaponInterface.WantsToFire // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39399b0
	void StopWeaponFire(); // Function GameplayFramework.WeaponInterface.StopWeaponFire // (Native|Public|BlueprintCallable) // @ game+0x3948cc0
	void StartWeaponFire(); // Function GameplayFramework.WeaponInterface.StartWeaponFire // (Native|Public|BlueprintCallable) // @ game+0x3948ca0
	void SetWantsToTarget(bool InWantsToTarget); // Function GameplayFramework.WeaponInterface.SetWantsToTarget // (Native|Public|BlueprintCallable) // @ game+0x3948c10
	bool IsWeaponReadyToFire(); // Function GameplayFramework.WeaponInterface.IsWeaponReadyToFire // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3948be0
	bool IsTargeting(); // Function GameplayFramework.WeaponInterface.IsTargeting // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3948bb0
	bool IsHolderReadyToFire(); // Function GameplayFramework.WeaponInterface.IsHolderReadyToFire // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3948b80
	struct FRotator GetWeaponWorldRotation(); // Function GameplayFramework.WeaponInterface.GetWeaponWorldRotation // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3948b40
	struct FRotator GetWeaponRotationAdjustment(); // Function GameplayFramework.WeaponInterface.GetWeaponRotationAdjustment // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3948b00
	enum class EWeaponState GetFiringState(); // Function GameplayFramework.WeaponInterface.GetFiringState // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3948ad0
	struct AWeapon* GetCurrentWeapon(bool bCanBePending); // Function GameplayFramework.WeaponInterface.GetCurrentWeapon // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3948a30
	bool CanUseWeapon(enum class EWeaponUseReason Reason, bool bIgnoreTag); // Function GameplayFramework.WeaponInterface.CanUseWeapon // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3948960
	bool CanReload(struct FReloadParams Params); // Function GameplayFramework.WeaponInterface.CanReload // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x39488b0
};

// Class GameplayFramework.WeatherVolume
// Size: 0x338 (Inherited: 0x328)
struct AWeatherVolume : AVolume {
	struct AGlobalWeatherActor* WeatherActorToEnable; // 0x328(0x08)
	struct AGlobalWeatherActor* PreviousWeatherActor; // 0x330(0x08)
};

