// BlueprintGeneratedClass BP_SlowingBullet.BP_SlowingBullet_C
// Size: 0x608 (Inherited: 0x5c0)
struct ABP_SlowingBullet_C : AMadProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	struct UParticleSystemComponent* P_Shield_bulletImpact_03_Reflection; // 0x5c8(0x08)
	struct UAudioComponent* [AUDIO] ReleaseBullets; // 0x5d0(0x08)
	float Relative_Location_Offsets_Offset_9D31D3FA45F448331CB96797207AD8B8; // 0x5d8(0x04)
	enum class ETimelineDirection Relative_Location_Offsets__Direction_9D31D3FA45F448331CB96797207AD8B8; // 0x5dc(0x01)
	char UnknownData_5DD[0x3]; // 0x5dd(0x03)
	struct UTimelineComponent* Relative Location Offsets; // 0x5e0(0x08)
	struct AMadCharAI* AIOwner; // 0x5e8(0x08)
	struct FVector Offset; // 0x5f0(0x0c)
	struct FVector Current Relative Location; // 0x5fc(0x0c)

	struct FVector Get Randomized Offset Location(); // Function BP_SlowingBullet.BP_SlowingBullet_C.Get Randomized Offset Location // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a35c70
	void Relative Location Offsets__FinishedFunc(); // Function BP_SlowingBullet.BP_SlowingBullet_C.Relative Location Offsets__FinishedFunc // (BlueprintEvent) // @ game+0x1a35c70
	void Relative Location Offsets__UpdateFunc(); // Function BP_SlowingBullet.BP_SlowingBullet_C.Relative Location Offsets__UpdateFunc // (BlueprintEvent) // @ game+0x1a35c70
	void Stop Movement(); // Function BP_SlowingBullet.BP_SlowingBullet_C.Stop Movement // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Play Offset(); // Function BP_SlowingBullet.BP_SlowingBullet_C.Play Offset // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ScaleProjectile(); // Function BP_SlowingBullet.BP_SlowingBullet_C.ScaleProjectile // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void DestroyBulletActor(); // Function BP_SlowingBullet.BP_SlowingBullet_C.DestroyBulletActor // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ReceiveBeginPlay(); // Function BP_SlowingBullet.BP_SlowingBullet_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void SpawnTracer(float Damage, struct AActor* Enemy, struct AController* Instigator Controller, int32_t Index); // Function BP_SlowingBullet.BP_SlowingBullet_C.SpawnTracer // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_BP_SlowingBullet(int32_t EntryPoint); // Function BP_SlowingBullet.BP_SlowingBullet_C.ExecuteUbergraph_BP_SlowingBullet // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

