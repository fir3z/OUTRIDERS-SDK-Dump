// Class CableComponent.CableActor
// Size: 0x2f8 (Inherited: 0x2f0)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x2f0(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x590 (Inherited: 0x500)
struct UCableComponent : UMeshComponent {
	char UnknownData_500_0 : 7; // 0x500(0x01)
	bool bAttachStart : 1; // 0x4f8(0x01)
	bool bAttachEnd : 1; // 0x4f9(0x01)
	struct FComponentReference AttachEndTo; // 0x500(0x28)
	struct FName AttachEndToSocketName; // 0x528(0x08)
	struct FVector EndLocation; // 0x530(0x0c)
	float CableLength; // 0x53c(0x04)
	int32_t NumSegments; // 0x540(0x04)
	float SubstepTime; // 0x544(0x04)
	int32_t SolverIterations; // 0x548(0x04)
	bool bEnableStiffness : 1; // 0x54c(0x01)
	char UnknownData_54D_0 : 7; // 0x54d(0x01)
	bool bEnableCollision : 1; // 0x54d(0x01)
	char UnknownData_54E[0x2]; // 0x54e(0x02)
	float CollisionFriction; // 0x550(0x04)
	struct FVector CableForce; // 0x554(0x0c)
	float CableGravityScale; // 0x560(0x04)
	float CableWidth; // 0x564(0x04)
	int32_t NumSides; // 0x568(0x04)
	float TileMaterial; // 0x56c(0x04)
	char UnknownData_570[0x20]; // 0x570(0x20)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // @ game+0xe27550
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Final|Native|Public|BlueprintCallable) // @ game+0xe27450
	void GetCableParticleLocations(struct TArray<struct FVector> Locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xe273a0
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe27370
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe27340
};

