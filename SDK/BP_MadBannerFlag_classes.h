// BlueprintGeneratedClass BP_MadBannerFlag.BP_MadBannerFlag_C
// Size: 0x3ac (Inherited: 0x380)
struct ABP_MadBannerFlag_C : AMadBannerFlag {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct AActor* CurrentActor; // 0x388(0x08)
	struct UABP_SK_Cloth_C* AnimInst; // 0x390(0x08)
	struct TArray<struct AActor*> NearActors; // 0x398(0x10)
	float FlagUnfoldingDuration; // 0x3a8(0x04)

	void SetOptimizationEnabled(bool bEnabled); // Function BP_MadBannerFlag.BP_MadBannerFlag_C.SetOptimizationEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void UpdateFlagsPositionForAnimBP(bool bUpdated); // Function BP_MadBannerFlag.BP_MadBannerFlag_C.UpdateFlagsPositionForAnimBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void InitAnimBP(bool Initialized); // Function BP_MadBannerFlag.BP_MadBannerFlag_C.InitAnimBP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void PrepareForFlagPlanting(); // Function BP_MadBannerFlag.BP_MadBannerFlag_C.PrepareForFlagPlanting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void FinishFlagPlanting(); // Function BP_MadBannerFlag.BP_MadBannerFlag_C.FinishFlagPlanting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void StartFlagPlantingAnimation(); // Function BP_MadBannerFlag.BP_MadBannerFlag_C.StartFlagPlantingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void AddNewActors(struct AActor* NewActor, bool IsSet); // Function BP_MadBannerFlag.BP_MadBannerFlag_C.AddNewActors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnUnfoldingAnimationStarted(); // Function BP_MadBannerFlag.BP_MadBannerFlag_C.OnUnfoldingAnimationStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void TryUpdateFlagsAnimBp(); // Function BP_MadBannerFlag.BP_MadBannerFlag_C.TryUpdateFlagsAnimBp // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ReceiveBeginPlay(); // Function BP_MadBannerFlag.BP_MadBannerFlag_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void OnClothSphereOverlapBegin(struct AActor* OtherActor); // Function BP_MadBannerFlag.BP_MadBannerFlag_C.OnClothSphereOverlapBegin // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void OnClothSphereOverlapEnd(struct AActor* OtherActor); // Function BP_MadBannerFlag.BP_MadBannerFlag_C.OnClothSphereOverlapEnd // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_BP_MadBannerFlag(int32_t EntryPoint); // Function BP_MadBannerFlag.BP_MadBannerFlag_C.ExecuteUbergraph_BP_MadBannerFlag // (Final|UbergraphFunction) // @ game+0x1a35c70
};

