// BlueprintGeneratedClass BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C
// Size: 0x468 (Inherited: 0x2f0)
struct ABP_ReflectBullets_Effects_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UStaticMeshComponent* Cube; // 0x2f8(0x08)
	struct UAudioComponent* Bullets Release; // 0x300(0x08)
	struct UAudioComponent* Empty Release; // 0x308(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x310(0x08)
	struct TArray<struct ABP_SlowingBullet_C*> BulletsArray; // 0x318(0x10)
	float SummaryDamageValue; // 0x328(0x04)
	char UnknownData_32C[0x4]; // 0x32c(0x04)
	struct TArray<struct AActor*> ShooterAI's; // 0x330(0x10)
	int32_t ShotsPerEnemy; // 0x340(0x04)
	float SingleBulletDamageBase; // 0x344(0x04)
	struct UParticleSystem* Projectile Impact Particle; // 0x348(0x08)
	struct AActor* Hit Projectile; // 0x350(0x08)
	struct FFPointDamage Point Damage; // 0x358(0xe8)
	struct AMadBaseCharacter* Overlapped Character; // 0x440(0x08)
	char UnknownData_448_0 : 7; // 0x448(0x01)
	bool bAutoReflect : 1; // 0x448(0x01)
	char UnknownData_449[0x7]; // 0x449(0x07)
	struct ABP_SlowingBullet_C* Slowed Bullet; // 0x450(0x08)
	char UnknownData_458_0 : 7; // 0x458(0x01)
	bool bInEndTransition : 1; // 0x458(0x01)
	char UnknownData_459[0x3]; // 0x459(0x03)
	int32_t Bullet Actor Limit; // 0x45c(0x04)
	struct AActor* Healthiest Enemy; // 0x460(0x08)

	void Projectile Feedback(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.Projectile Feedback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void AutoReflect_BleedAndExpose(struct AActor* Enemy); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.AutoReflect_BleedAndExpose // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Auto Reflect Player Mitigated Damage(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.Auto Reflect Player Mitigated Damage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void AffectDestructibles(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.AffectDestructibles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Auto Reflect Damage(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.Auto Reflect Damage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Weak Enemy Target(struct AActor* CurrentTarget, struct AActor* LargestHealthEnemy); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.Weak Enemy Target // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void PlayForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.PlayForceFeedback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Get Shots Per Enemy(int32_t OutShotPerEnemy); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.Get Shots Per Enemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a35c70
	void Adjust Actor Transform(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.Adjust Actor Transform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void SetApplyDmgAndHandleBulletsActors(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.SetApplyDmgAndHandleBulletsActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void HealthiestEnemy(struct AActor* OutHealthiestEnemy); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.HealthiestEnemy // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void SpawnFakeBulletIncreaseCounters(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.SpawnFakeBulletIncreaseCounters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Calculate Summary Damage Value(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.Calculate Summary Damage Value // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void Continue Auto Reflect(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.Continue Auto Reflect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Auto Reflect Bullet(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.Auto Reflect Bullet // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ReceivePointDamage(float Damage, struct UDamageType* DamageType, struct FVector HitLocation, struct FVector HitNormal, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector ShotFromDirection, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FHitResult HitInfo); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.ReceivePointDamage // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void SpawnBulletTracesTowardsEnemies(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.SpawnBulletTracesTowardsEnemies // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void DestroyBullets(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.DestroyBullets // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void End Bullets(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.End Bullets // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Spawn Projectile Impact VFX(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.Spawn Projectile Impact VFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Replicated Adjust Transform(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.Replicated Adjust Transform // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ReceiveBeginPlay(); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_BP_ReflectBullets_Effects(int32_t EntryPoint); // Function BP_ReflectBullets_Effects.BP_ReflectBullets_Effects_C.ExecuteUbergraph_BP_ReflectBullets_Effects // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

