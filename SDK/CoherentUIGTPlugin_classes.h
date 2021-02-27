// Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer
// Size: 0x28 (Inherited: 0x28)
struct UCoherentUIGTAssetReferencer : UObject {
};

// Class CoherentUIGTPlugin.CoherentUIGTAudioWrapper
// Size: 0x428 (Inherited: 0x28)
struct UCoherentUIGTAudioWrapper : UObject {
	struct UObject* Owner; // 0x28(0x08)
	struct TMap<int32_t, struct FCoherentSound> Sounds; // 0x30(0x50)
	char UnknownData_80[0x3a8]; // 0x80(0x3a8)
};

// Class CoherentUIGTPlugin.CoherentUIGTBaseComponent
// Size: 0x300 (Inherited: 0x180)
struct UCoherentUIGTBaseComponent : UActorComponent {
	struct FMulticastInlineDelegate ReadyForBindings; // 0x180(0x10)
	struct FMulticastInlineDelegate BindingsReleased; // 0x190(0x10)
	struct FMulticastInlineDelegate FinishLoad; // 0x1a0(0x10)
	struct FMulticastInlineDelegate FailLoad; // 0x1b0(0x10)
	struct FMulticastInlineDelegate StartLoading; // 0x1c0(0x10)
	struct FMulticastInlineDelegate NavigateTo; // 0x1d0(0x10)
	struct FMulticastInlineDelegate JavaScriptEvent; // 0x1e0(0x10)
	struct FMulticastInlineDelegate UIGTScriptingReady; // 0x1f0(0x10)
	struct FDelegate LiveViewSizeRequested; // 0x200(0x10)
	char UnknownData_210[0x18]; // 0x210(0x18)
	struct UTextureRenderTarget2D* Texture; // 0x228(0x08)
	enum class TextureFilter Filter; // 0x230(0x01)
	char UnknownData_231_0 : 7; // 0x231(0x01)
	bool bReceiveInput : 1; // 0x231(0x01)
	char UnknownData_232_0 : 7; // 0x232(0x01)
	bool bReceiveInputWhenTransparent : 1; // 0x232(0x01)
	char UnknownData_233_0 : 7; // 0x233(0x01)
	bool AllowPerformanceWarnings : 1; // 0x233(0x01)
	float ExecuteJSTimersThresholdMs; // 0x234(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x238(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x23c(0x04)
	float PaintWarningThresholdMs; // 0x240(0x04)
	int32_t LayersCountThreshold; // 0x244(0x04)
	int32_t LayerWidthThreshold; // 0x248(0x04)
	int32_t LayerHeightThreshold; // 0x24c(0x04)
	char UnknownData_250_0 : 7; // 0x250(0x01)
	bool bEnableAdditionalDefaultStyles : 1; // 0x250(0x01)
	char UnknownData_251_0 : 7; // 0x251(0x01)
	bool bDelayedUpdate : 1; // 0x251(0x01)
	char UnknownData_252[0x76]; // 0x252(0x76)
	struct UCoherentUIGTAudioWrapper* AudioWrapper; // 0x2c8(0x08)
	char UnknownData_2D0[0x30]; // 0x2d0(0x30)

	void UpdateWholeDataModelFromStruct(FieldPathProperty Arg); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x73a6e0
	void UpdateWholeDataModelFromObject(struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x73fd70
	void TriggerJSEvent(struct FString Name, struct UCoherentUIGTJSEvent* EventData); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x73faa0
	void SynchronizeModels(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x73fa40
	void ShowPaintRects(bool Show); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects // (Final|Native|Public|BlueprintCallable) // @ game+0x73f920
	void SetClickThroughAlphaThreshold(float Threshold); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold // (Final|Native|Public|BlueprintCallable) // @ game+0x73f300
	void Resize(int32_t Width, int32_t Height); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize // (Native|Public|BlueprintCallable) // @ game+0x73f240
	void Reload(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload // (Final|Native|Public|BlueprintCallable) // @ game+0x73f200
	void Redraw(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x73f1c0
	void Load(struct FString Path); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load // (Final|Native|Public|BlueprintCallable) // @ game+0x73ee40
	bool IsTransparent(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73ede0
	bool IsReadyToCreateView(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73edb0
	bool IsReadyForBindings(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73ed50
	bool IsDocumentReady(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73ecc0
	bool HasRequestedView(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73eab0
	float GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e7d0
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave // (Final|Native|Public|BlueprintCallable) // @ game+0x73e700
	void EnableDelayedUpdate(bool bEnabled); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x73e670
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x73e630
	struct UCoherentUIGTJSEvent* CreateJSEvent(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x73e580
	void CreateDataModelFromStruct(struct FString Name, FieldPathProperty Arg); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct // (Final|Native|Public|BlueprintCallable) // @ game+0x73a480
	void CreateDataModelFromObject(struct FString Name, struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject // (Final|Native|Public|BlueprintCallable) // @ game+0x73e3c0
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave // (Final|Native|Public|BlueprintCallable) // @ game+0x73e380
};

// Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCoherentUIGTBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void TriggerJSEvent(struct UCoherentUIGTBaseComponent* Component, struct FString EventName, struct UCoherentUIGTJSEvent* JSEvent); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73fb80
	void SetupLoadingScreen(struct UObject* WorldContextObject, struct FCoherentUIGTLoadingScreenSettings Settings); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f690
	struct UCoherentUIGTJSEvent* CreateJSEvent(struct UObject* WorldContextObject); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73e5b0
	void AddStructArg(struct UCoherentUIGTJSEvent* JSEvent, FieldPathProperty Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73a2f0
	void AddString(struct UCoherentUIGTJSEvent* JSEvent, struct FString Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73e020
	void AddObject(struct UCoherentUIGTJSEvent* JSEvent, struct UObject* Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73def0
	void AddInt32(struct UCoherentUIGTJSEvent* JSEvent, int32_t Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32 // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73dd30
	void AddFloat(struct UCoherentUIGTJSEvent* JSEvent, float Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73dbf0
	void AddByte(struct UCoherentUIGTJSEvent* JSEvent, enum class None Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73dac0
	void AddBool(struct UCoherentUIGTJSEvent* JSEvent, bool Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73d970
	void AddArrayOfStructs(struct UCoherentUIGTJSEvent* JSEvent, struct TArray<int32_t> Arg); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73a0e0
	void AddArray(struct UCoherentUIGTJSEvent* JSEvent, struct TArray<int32_t> Arg, int32_t ArrayType); // Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73d850
};

// Class CoherentUIGTPlugin.CoherentUIGTComponent
// Size: 0x338 (Inherited: 0x300)
struct UCoherentUIGTComponent : UCoherentUIGTBaseComponent {
	struct FString URL; // 0x300(0x10)
	int32_t Width; // 0x310(0x04)
	int32_t Height; // 0x314(0x04)
	char UnknownData_318_0 : 7; // 0x318(0x01)
	bool ManualTexture : 1; // 0x318(0x01)
	char UnknownData_319[0x3]; // 0x319(0x03)
	float ClickThroughAlphaThreshold; // 0x31c(0x04)
	char UnknownData_320_0 : 7; // 0x320(0x01)
	bool Transparent : 1; // 0x320(0x01)
	char UnknownData_321[0x17]; // 0x321(0x17)
};

// Class CoherentUIGTPlugin.CoherentUIGTEventHelpers
// Size: 0x28 (Inherited: 0x28)
struct UCoherentUIGTEventHelpers : UObject {
};

// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// Size: 0x488 (Inherited: 0x3e0)
struct ACoherentUIGTGameHUD : AHUD {
	struct UCoherentUIGTHUD* CoherentUIGTHUD; // 0x3e0(0x08)
	char UnknownData_3E8[0xa0]; // 0x3e8(0xa0)

	void SetupUIGTView(struct FString PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x73f770
	bool HasSetupUIGTView(); // Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x73eb10
};

// Class CoherentUIGTPlugin.CoherentUIGTHUD
// Size: 0x330 (Inherited: 0x300)
struct UCoherentUIGTHUD : UCoherentUIGTBaseComponent {
	struct FSoftObjectPath HUDMaterialName; // 0x300(0x18)
	struct UMaterial* HUDMaterial; // 0x318(0x08)
	struct UMaterialInstanceDynamic* HUDMaterialInstance; // 0x320(0x08)
	char UnknownData_328[0x8]; // 0x328(0x08)
};

// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// Size: 0x348 (Inherited: 0x2f0)
struct ACoherentUIGTInputActor : AActor {
	struct FMulticastInlineDelegate OnCoherentUIGTInputActorMouseButtonDown; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnCoherentUIGTInputActorMouseButtonUp; // 0x300(0x10)
	struct FMulticastInlineDelegate OnCoherentUIGTInputActorKeyDown; // 0x310(0x10)
	struct FMulticastInlineDelegate OnCoherentUIGTInputActorKeyUp; // 0x320(0x10)
	char UnknownData_330[0x18]; // 0x330(0x18)

	void ToggleCoherentUIGTInputFocus(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x73fa80
	void SetLineTraceMode(enum class EGTInputWidgetLineTraceMode Mode); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode // (Final|Native|Public|BlueprintCallable) // @ game+0x73f610
	void SetInputPropagationBehaviour(enum class ECoherentUIGTInputPropagationBehaviour Propagation); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour // (Final|Native|Public|BlueprintCallable) // @ game+0x73f510
	void SetCoherentUIGTViewFocus(struct UCoherentUIGTBaseComponent* NewFocusedView); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x73f490
	void SetCoherentUIGTInputFocus(bool FocusUI); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus // (Final|Native|Public|BlueprintCallable) // @ game+0x73f400
	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73ed20
	bool IsCoherentUIGTFocused(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73ec90
	void Initialize(enum class ECollisionChannel CollisionChannel, enum class TextureAddress AddressMode, enum class EGTInputWidgetRaycastQuality RaycastQuality, int32_t UVChannel); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize // (Final|Native|Public|BlueprintCallable) // @ game+0x73eb40
	enum class ECoherentUIGTInputPropagationBehaviour GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e830
	void AlwaysAcceptMouseInput(bool bAccept); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput // (Final|Native|Public|BlueprintCallable) // @ game+0x73e2f0
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow); // Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED // (Final|Native|Public|BlueprintCallable) // @ game+0x73e260
};

// Class CoherentUIGTPlugin.CoherentUIGTJSEvent
// Size: 0xb8 (Inherited: 0x28)
struct UCoherentUIGTJSEvent : UObject {
	char UnknownData_28[0x80]; // 0x28(0x80)
	struct TArray<struct UStruct*> StructTypes; // 0xa8(0x10)

	void AddText(struct FText Text); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73e190
	void AddStructArg(FieldPathProperty Arg); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg // (Final|Native|Public|BlueprintCallable) // @ game+0x73a3d0
	void AddString(struct FString str); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString // (Final|Native|Public|BlueprintCallable) // @ game+0x73e0f0
	void AddObject(struct UObject* Object); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject // (Final|Native|Public|BlueprintCallable) // @ game+0x73dfa0
	void AddName(struct FName Name); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73de60
	void AddInt32(int32_t integer); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32 // (Final|Native|Public|BlueprintCallable) // @ game+0x73dde0
	void AddFloat(float fl); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x73dcb0
	void AddByte(enum class None byte); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte // (Final|Native|Public|BlueprintCallable) // @ game+0x73db70
	void AddBool(bool B); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool // (Final|Native|Public|BlueprintCallable) // @ game+0x73da30
	void AddArray(struct TArray<int32_t> Array); // Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73a030
};

// Class CoherentUIGTPlugin.CoherentUIGTJSPayload
// Size: 0x40 (Inherited: 0x28)
struct UCoherentUIGTJSPayload : UObject {
	struct FString EventName; // 0x28(0x10)
	char UnknownData_38[0x8]; // 0x38(0x08)

	void ReadObject(int32_t Index, struct UObject* Object); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject // (Final|Native|Public|BlueprintCallable) // @ game+0x73f100
	struct FString GetString(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString // (Final|Native|Public|BlueprintCallable) // @ game+0x73e9e0
	float GetNumber(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber // (Final|Native|Public|BlueprintCallable) // @ game+0x73e920
	int32_t GetInt32(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32 // (Final|Native|Public|BlueprintCallable) // @ game+0x73e890
	bool GetBool(int32_t Index); // Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool // (Final|Native|Public|BlueprintCallable) // @ game+0x73e740
};

// Class CoherentUIGTPlugin.CoherentUIGTLiveView
// Size: 0x1b0 (Inherited: 0x180)
struct UCoherentUIGTLiveView : UActorComponent {
	struct FString LinkName; // 0x180(0x10)
	struct UTextureRenderTarget2D* Texture; // 0x190(0x08)
	char UnknownData_198[0x18]; // 0x198(0x18)

	void OnLiveViewSizeRequest(struct UCoherentUIGTBaseComponent* baseComponent, struct FString Name, int32_t Width, int32_t Height); // Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73ef80
};

// Class CoherentUIGTPlugin.CoherentUIGTSettings
// Size: 0x68 (Inherited: 0x28)
struct UCoherentUIGTSettings : UObject {
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool EnableLiveReload : 1; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	int32_t InspectorPort; // 0x2c(0x04)
	int32_t WebdriverPort; // 0x30(0x04)
	char UnknownData_34_0 : 7; // 0x34(0x01)
	bool EnableWebSecurity : 1; // 0x34(0x01)
	char UnknownData_35_0 : 7; // 0x35(0x01)
	bool EnableLocalization : 1; // 0x35(0x01)
	char UnknownData_36_0 : 7; // 0x36(0x01)
	bool RunAsynchronous : 1; // 0x36(0x01)
	char UnknownData_37_0 : 7; // 0x37(0x01)
	bool AllowPerformanceWarningsInEditor : 1; // 0x37(0x01)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool ShowWarningsOnScreen : 1; // 0x38(0x01)
	enum class ECoherentUIGTSettingsSeverity LogSeverity; // 0x39(0x01)
	char UnknownData_3A_0 : 7; // 0x3a(0x01)
	bool bPaintToBackBuffer : 1; // 0x3a(0x01)
	char UnknownData_3B_0 : 7; // 0x3b(0x01)
	bool bRespectTitleSafeZone : 1; // 0x3b(0x01)
	char UnknownData_3C_0 : 7; // 0x3c(0x01)
	bool bRespectLetterboxing : 1; // 0x3c(0x01)
	char UnknownData_3D[0x3]; // 0x3d(0x03)
	struct FString HUDMaterialName; // 0x40(0x10)
	struct FString CoUIResourcesRoot; // 0x50(0x10)
	char UnknownData_60_0 : 7; // 0x60(0x01)
	bool TickWhileGameIsPaused : 1; // 0x60(0x01)
	char UnknownData_61_0 : 7; // 0x61(0x01)
	bool bUseLowerCaseNamesForAutoExposedProperties : 1; // 0x61(0x01)
	enum class ECoherentUIGTMSAA MSAA; // 0x62(0x01)
	char UnknownData_63[0x5]; // 0x63(0x05)
};

// Class CoherentUIGTPlugin.CoherentUIGTSystem
// Size: 0x350 (Inherited: 0x2f0)
struct ACoherentUIGTSystem : AActor {
	char UnknownData_2F0[0x60]; // 0x2f0(0x60)
};

// Class CoherentUIGTPlugin.CoherentUIGTWidget
// Size: 0x2c0 (Inherited: 0x108)
struct UCoherentUIGTWidget : UWidget {
	char UnknownData_108[0x18]; // 0x108(0x18)
	struct AActor* Owner; // 0x120(0x08)
	struct FMulticastInlineDelegate ReadyForBindings; // 0x128(0x10)
	struct FMulticastInlineDelegate BindingsReleased; // 0x138(0x10)
	struct FMulticastInlineDelegate FinishLoad; // 0x148(0x10)
	struct FMulticastInlineDelegate FailLoad; // 0x158(0x10)
	struct FMulticastInlineDelegate StartLoading; // 0x168(0x10)
	struct FMulticastInlineDelegate NavigateTo; // 0x178(0x10)
	struct FMulticastInlineDelegate JavaScriptEvent; // 0x188(0x10)
	struct FMulticastInlineDelegate UIGTScriptingReady; // 0x198(0x10)
	char UnknownData_1A8[0x18]; // 0x1a8(0x18)
	enum class TextureFilter Filter; // 0x1c0(0x01)
	char UnknownData_1C1_0 : 7; // 0x1c1(0x01)
	bool bReceiveInput : 1; // 0x1c1(0x01)
	enum class ECoherentUIGTInputPropagationBehaviour InputPropagationBehaviour; // 0x1c2(0x01)
	char UnknownData_1C3_0 : 7; // 0x1c3(0x01)
	bool bReceiveInputWhenTransparent : 1; // 0x1c3(0x01)
	char UnknownData_1C4_0 : 7; // 0x1c4(0x01)
	bool bGammaCorrectedMaterial : 1; // 0x1c4(0x01)
	char UnknownData_1C5[0x3]; // 0x1c5(0x03)
	float TickPeriodInMinimizedGame; // 0x1c8(0x04)
	char UnknownData_1CC_0 : 7; // 0x1cc(0x01)
	bool AllowPerformanceWarnings : 1; // 0x1cc(0x01)
	char UnknownData_1CD[0x3]; // 0x1cd(0x03)
	float ExecuteJSTimersThresholdMs; // 0x1d0(0x04)
	float UpdateStylesAndLayoutThresholdMs; // 0x1d4(0x04)
	float RecordRenderingCommandsThresholdMs; // 0x1d8(0x04)
	float PaintWarningThresholdMs; // 0x1dc(0x04)
	int32_t LayersCountThreshold; // 0x1e0(0x04)
	int32_t LayerWidthThreshold; // 0x1e4(0x04)
	int32_t LayerHeightThreshold; // 0x1e8(0x04)
	char UnknownData_1EC_0 : 7; // 0x1ec(0x01)
	bool bEnableAdditionalDefaultStyles : 1; // 0x1ec(0x01)
	char UnknownData_1ED[0x33]; // 0x1ed(0x33)
	struct UCoherentUIGTAudioWrapper* AudioWrapper; // 0x220(0x08)
	char UnknownData_228[0x80]; // 0x228(0x80)
	struct FString URL; // 0x2a8(0x10)
	float ClickThroughAlphaThreshold; // 0x2b8(0x04)
	char UnknownData_2BC_0 : 7; // 0x2bc(0x01)
	bool Transparent : 1; // 0x2bc(0x01)
	char UnknownData_2BD[0x3]; // 0x2bd(0x03)

	void UpdateWholeDataModelFromStruct(FieldPathProperty Arg); // Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x73a7b0
	void UpdateWholeDataModelFromObject(struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x73fdf0
	void TriggerJSEvent(struct FString Name, struct UCoherentUIGTJSEvent* EventData); // Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x73fc90
	void SynchronizeModels(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x73fa60
	void ShowPaintRects(bool Show); // Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects // (Final|Native|Public|BlueprintCallable) // @ game+0x73f9b0
	void SetInputPropagationBehaviour(enum class ECoherentUIGTInputPropagationBehaviour Propagation); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetInputPropagationBehaviour // (Final|Native|Public|BlueprintCallable) // @ game+0x73f590
	void SetClickThroughAlphaThreshold(float Threshold); // Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold // (Final|Native|Public|BlueprintCallable) // @ game+0x73f380
	void Reload(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload // (Final|Native|Public|BlueprintCallable) // @ game+0x73f220
	void Redraw(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x73f1e0
	void Load(struct FString Path); // Function CoherentUIGTPlugin.CoherentUIGTWidget.Load // (Final|Native|Public|BlueprintCallable) // @ game+0x73eee0
	bool IsTransparent(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73ee10
	bool IsReadyToCreateView(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73edb0
	bool IsReadyForBindings(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73ed80
	bool IsDocumentReady(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73ecf0
	bool HasRequestedView(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73eae0
	struct UTextureRenderTarget2D* GetRenderTexture(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e9b0
	enum class ECoherentUIGTInputPropagationBehaviour GetInputPropagationBehaviour(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetInputPropagationBehaviour // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e860
	float GetClickThroughAlphaThreshold(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e800
	void EndDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave // (Final|Native|Public|BlueprintCallable) // @ game+0x73e720
	void DebugSaveNextFrame(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x73e650
	struct UCoherentUIGTJSEvent* CreateJSEvent(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x73e580
	void CreateDataModelFromStruct(struct FString Name, FieldPathProperty Arg); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct // (Final|Native|Public|BlueprintCallable) // @ game+0x73a5a0
	void CreateDataModelFromObject(struct FString Name, struct UObject* Model); // Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject // (Final|Native|Public|BlueprintCallable) // @ game+0x73e4a0
	void BeginDebugFrameSave(); // Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave // (Final|Native|Public|BlueprintCallable) // @ game+0x73e3a0
};

