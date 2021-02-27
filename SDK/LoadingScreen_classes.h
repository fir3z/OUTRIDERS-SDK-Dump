// WidgetBlueprintGeneratedClass LoadingScreen.LoadingScreen_C
// Size: 0x2d0 (Inherited: 0x260)
struct ULoadingScreen_C : ULoadingScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* background; // 0x268(0x08)
	struct UImage* CircularProgressBar; // 0x270(0x08)
	struct UCanvasPanel* CircularProgressBarPanel; // 0x278(0x08)
	struct ULoadingScreenProgressBar* LoadingScreenProgressBarWidget; // 0x280(0x08)
	struct UTextBlock* PercentText; // 0x288(0x08)
	struct FLinearColor EnabledColor; // 0x290(0x10)
	struct FLinearColor DisabledColor; // 0x2a0(0x10)
	int32_t StepAmount; // 0x2b0(0x04)
	int32_t MaxPercent; // 0x2b4(0x04)
	struct UTexture* Texture; // 0x2b8(0x08)
	struct FLinearColor ActiveColor; // 0x2c0(0x10)

	void SetEnabled(bool bEnabled, bool bActive, struct UImage* Image, struct FLinearColor CurrentColor); // Function LoadingScreen.LoadingScreen_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Construct(); // Function LoadingScreen.LoadingScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function LoadingScreen.LoadingScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_LoadingScreen(int32_t EntryPoint); // Function LoadingScreen.LoadingScreen_C.ExecuteUbergraph_LoadingScreen // (Final|UbergraphFunction) // @ game+0x1a35c70
};

