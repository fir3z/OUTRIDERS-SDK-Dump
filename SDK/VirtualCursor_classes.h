// WidgetBlueprintGeneratedClass VirtualCursor.VirtualCursor_C
// Size: 0x268 (Inherited: 0x250)
struct UVirtualCursor_C : UMadVirtualCursor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UImage* Image; // 0x258(0x08)
	struct USizeBox* SizeBox_1; // 0x260(0x08)

	void UpdateCursorSize(); // Function VirtualCursor.VirtualCursor_C.UpdateCursorSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	struct UImage* GetCursorImage(); // Function VirtualCursor.VirtualCursor_C.GetCursorImage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a35c70
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function VirtualCursor.VirtualCursor_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_VirtualCursor(int32_t EntryPoint); // Function VirtualCursor.VirtualCursor_C.ExecuteUbergraph_VirtualCursor // (Final|UbergraphFunction) // @ game+0x1a35c70
};

