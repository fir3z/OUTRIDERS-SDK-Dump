// BlueprintGeneratedClass Projectile_RPG.Projectile_RPG_C
// Size: 0x5e0 (Inherited: 0x5c0)
struct AProjectile_RPG_C : AMadProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x5c8(0x08)
	struct UArrowComponent* Arrow Up; // 0x5d0(0x08)
	struct UArrowComponent* Arrow Forward; // 0x5d8(0x08)

	void ExplosionNotify(struct FHitResult Impact, struct TArray<struct AActor*> DamagedActors); // Function Projectile_RPG.Projectile_RPG_C.ExplosionNotify // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_Projectile_RPG(int32_t EntryPoint); // Function Projectile_RPG.Projectile_RPG_C.ExecuteUbergraph_Projectile_RPG // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

