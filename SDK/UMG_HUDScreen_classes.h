// WidgetBlueprintGeneratedClass UMG_HUDScreen.UMG_HUDScreen_C
// Size: 0x298 (Inherited: 0x288)
struct UUMG_HUDScreen_C : UMadHUDWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UMadBossHealthBarWidget_C* MadBossHealthBarWidget; // 0x290(0x08)

	void SetBossHealthBarVisibleImpl(bool Visible); // Function UMG_HUDScreen.UMG_HUDScreen_C.SetBossHealthBarVisibleImpl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Construct(); // Function UMG_HUDScreen.UMG_HUDScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void SetBossHealthBarVisible(bool bVisible); // Function UMG_HUDScreen.UMG_HUDScreen_C.SetBossHealthBarVisible // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_UMG_HUDScreen(int32_t EntryPoint); // Function UMG_HUDScreen.UMG_HUDScreen_C.ExecuteUbergraph_UMG_HUDScreen // (Final|UbergraphFunction) // @ game+0x1a35c70
};

