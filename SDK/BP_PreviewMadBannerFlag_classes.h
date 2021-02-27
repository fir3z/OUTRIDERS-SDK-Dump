// BlueprintGeneratedClass BP_PreviewMadBannerFlag.BP_PreviewMadBannerFlag_C
// Size: 0x3c8 (Inherited: 0x380)
struct ABP_PreviewMadBannerFlag_C : AMadBannerFlag {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UCameraComponent* Camera; // 0x388(0x08)
	struct UBoxComponent* BoxOverlap; // 0x390(0x08)
	float Timeline_0_NewTrack_0_27826B0F4CBFD15FCD6F50BBEFE26779; // 0x398(0x04)
	enum class ETimelineDirection Timeline_0__Direction_27826B0F4CBFD15FCD6F50BBEFE26779; // 0x39c(0x01)
	char UnknownData_39D[0x3]; // 0x39d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x3a0(0x08)
	struct AActor* CurrentActor; // 0x3a8(0x08)
	struct UABP_SK_Cloth_C* AnimInst; // 0x3b0(0x08)
	struct TArray<struct AActor*> NearActors; // 0x3b8(0x10)

	void AddNewActors(struct AActor* NewActor, bool IsSet); // Function BP_PreviewMadBannerFlag.BP_PreviewMadBannerFlag_C.AddNewActors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Timeline_0__FinishedFunc(); // Function BP_PreviewMadBannerFlag.BP_PreviewMadBannerFlag_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1a35c70
	void Timeline_0__UpdateFunc(); // Function BP_PreviewMadBannerFlag.BP_PreviewMadBannerFlag_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1a35c70
	void BndEvt__BoxOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_PreviewMadBannerFlag.BP_PreviewMadBannerFlag_C.BndEvt__BoxOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void BndEvt__BoxOverlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_PreviewMadBannerFlag.BP_PreviewMadBannerFlag_C.BndEvt__BoxOverlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_BP_PreviewMadBannerFlag(int32_t EntryPoint); // Function BP_PreviewMadBannerFlag.BP_PreviewMadBannerFlag_C.ExecuteUbergraph_BP_PreviewMadBannerFlag // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

