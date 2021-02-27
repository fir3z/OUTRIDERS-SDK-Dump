// WidgetBlueprintGeneratedClass UMG_Crosshair.UMG_Crosshair_C
// Size: 0x438 (Inherited: 0x230)
struct UUMG_Crosshair_C : UMadUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* FadeInOut; // 0x238(0x08)
	struct UImage* Bottom; // 0x240(0x08)
	struct UImage* BottomLeft; // 0x248(0x08)
	struct UImage* BottomRight; // 0x250(0x08)
	struct UImage* Circular; // 0x258(0x08)
	struct USizeBox* Crosshair_Panel; // 0x260(0x08)
	struct UImage* DefaultDot; // 0x268(0x08)
	struct UImage* DoT; // 0x270(0x08)
	struct UScaleBox* HUDScaleBox; // 0x278(0x08)
	struct UImage* Left; // 0x280(0x08)
	struct UImage* Notify_Damage; // 0x288(0x08)
	struct UImage* Notify_Kill; // 0x290(0x08)
	struct UImage* Notify_Miss; // 0x298(0x08)
	struct UImage* Notify_NoAmmoDash; // 0x2a0(0x08)
	struct UImage* Notify_NoAmmoDashed; // 0x2a8(0x08)
	struct UImage* Notify_Reloading; // 0x2b0(0x08)
	struct UImage* Notify_ReloadingCircle; // 0x2b8(0x08)
	struct UOverlay* Overlay; // 0x2c0(0x08)
	struct UCanvasPanel* Parts; // 0x2c8(0x08)
	struct UImage* Right; // 0x2d0(0x08)
	struct UImage* Static; // 0x2d8(0x08)
	struct UImage* Top; // 0x2e0(0x08)
	struct UImage* TopLeft; // 0x2e8(0x08)
	struct UImage* TopRight; // 0x2f0(0x08)
	struct UImage* Tri1; // 0x2f8(0x08)
	struct UImage* Tri2; // 0x300(0x08)
	struct UImage* Tri3; // 0x308(0x08)
	struct FLinearColor RegularTint; // 0x310(0x10)
	struct FLinearColor AmmoBarTint; // 0x320(0x10)
	struct FLinearColor EnemyTint; // 0x330(0x10)
	struct FLinearColor AllyTint; // 0x340(0x10)
	enum class EWeaponCrosshairMovementType CurrMovementType; // 0x350(0x01)
	char UnknownData_351[0x3]; // 0x351(0x03)
	float Marker Duration; // 0x354(0x04)
	struct AMadPlayerCharacter* Player; // 0x358(0x08)
	struct AMadWeapon* Weapon; // 0x360(0x08)
	struct TMap<SoftClassProperty, struct UAmmoBarWidget*> Ammo Bars; // 0x368(0x50)
	struct TSet<SoftClassProperty> AsyncLoadingAmmoBarWidgets; // 0x3b8(0x50)
	char UnknownData_408_0 : 7; // 0x408(0x01)
	bool OldPath : 1; // 0x408(0x01)
	char UnknownData_409[0x7]; // 0x409(0x07)
	struct TArray<struct UImage*> CurrentWidgets; // 0x410(0x10)
	float CurrentScale; // 0x420(0x04)
	float CurrentOffset; // 0x424(0x04)
	struct UTexture2D* LastTexture; // 0x428(0x08)
	struct AMadPlayerCharacter* WeaponFiredBindedPawn; // 0x430(0x08)

	void Get Variant Tint(enum class EWeaponCrosshairVariant Variant, struct FLinearColor Tint); // Function UMG_Crosshair.UMG_Crosshair_C.Get Variant Tint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
	void Get Variant(enum class EWeaponCrosshairVariant Variant); // Function UMG_Crosshair.UMG_Crosshair_C.Get Variant // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
	enum class ESlateVisibility GetCrosshairPanelVisibility(); // Function UMG_Crosshair.UMG_Crosshair_C.GetCrosshairPanelVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a35c70
	void SetCurrentParams(struct FWeaponCrosshairData Data); // Function UMG_Crosshair.UMG_Crosshair_C.SetCurrentParams // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void GetCurrentAmmoBarClass(SoftClassProperty Result); // Function UMG_Crosshair.UMG_Crosshair_C.GetCurrentAmmoBarClass // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
	void UpdateAmmoValues(SoftClassProperty CurrentAmmoBar); // Function UMG_Crosshair.UMG_Crosshair_C.UpdateAmmoValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Refresh Reload(); // Function UMG_Crosshair.UMG_Crosshair_C.Refresh Reload // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Refresh Out of Ammo(); // Function UMG_Crosshair.UMG_Crosshair_C.Refresh Out of Ammo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Should Show Hit Marker(enum class EHitMarkerType Marker Type, bool Hit Marker Visible); // Function UMG_Crosshair.UMG_Crosshair_C.Should Show Hit Marker // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
	void Refresh Ammo(); // Function UMG_Crosshair.UMG_Crosshair_C.Refresh Ammo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Refresh Variant(); // Function UMG_Crosshair.UMG_Crosshair_C.Refresh Variant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Refresh Default Dot(); // Function UMG_Crosshair.UMG_Crosshair_C.Refresh Default Dot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Refresh Dot(); // Function UMG_Crosshair.UMG_Crosshair_C.Refresh Dot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Refresh Parts(); // Function UMG_Crosshair.UMG_Crosshair_C.Refresh Parts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Set Movement Type(enum class EWeaponCrosshairMovementType MovementType); // Function UMG_Crosshair.UMG_Crosshair_C.Set Movement Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Set Main Texture(struct UTexture2D* Texture); // Function UMG_Crosshair.UMG_Crosshair_C.Set Main Texture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Set Variant(enum class EWeaponCrosshairVariant Variant); // Function UMG_Crosshair.UMG_Crosshair_C.Set Variant // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Refresh Crosshair(struct ABaseCharacter* character); // Function UMG_Crosshair.UMG_Crosshair_C.Refresh Crosshair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Set Spread(float Spread); // Function UMG_Crosshair.UMG_Crosshair_C.Set Spread // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnLoaded_85DD302F4BD000667425EABDCC8DE0D4(struct UObject* Loaded); // Function UMG_Crosshair.UMG_Crosshair_C.OnLoaded_85DD302F4BD000667425EABDCC8DE0D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Init(); // Function UMG_Crosshair.UMG_Crosshair_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Crosshair.UMG_Crosshair_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void On Fade in Out Anim Finished(); // Function UMG_Crosshair.UMG_Crosshair_C.On Fade in Out Anim Finished // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void AsyncCreateAndUpdateAmmoBarWidget(SoftClassProperty AmmoBarWidgetClass); // Function UMG_Crosshair.UMG_Crosshair_C.AsyncCreateAndUpdateAmmoBarWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void RebindToWeaponFired(); // Function UMG_Crosshair.UMG_Crosshair_C.RebindToWeaponFired // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void WeaponFired(struct FHitResult Trace, struct TArray<struct ABaseCharacter*> EnemiesHit, enum class EHitMarkerType HitMarkerType); // Function UMG_Crosshair.UMG_Crosshair_C.WeaponFired // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void TryRebindIfOwnerWasChanged(); // Function UMG_Crosshair.UMG_Crosshair_C.TryRebindIfOwnerWasChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Construct(); // Function UMG_Crosshair.UMG_Crosshair_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void Destruct(); // Function UMG_Crosshair.UMG_Crosshair_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnHUDScaleChanged(float FloatParam); // Function UMG_Crosshair.UMG_Crosshair_C.OnHUDScaleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_UMG_Crosshair(int32_t EntryPoint); // Function UMG_Crosshair.UMG_Crosshair_C.ExecuteUbergraph_UMG_Crosshair // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

