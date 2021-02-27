// BlueprintGeneratedClass BP_DroppedClip.BP_DroppedClip_C
// Size: 0x308 (Inherited: 0x2f8)
struct ABP_DroppedClip_C : ADroppedClip {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct USoundBase* GroundHitCue; // 0x300(0x08)

	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_DroppedClip.BP_DroppedClip_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_BP_DroppedClip(int32_t EntryPoint); // Function BP_DroppedClip.BP_DroppedClip_C.ExecuteUbergraph_BP_DroppedClip // (Final|UbergraphFunction) // @ game+0x1a35c70
};

