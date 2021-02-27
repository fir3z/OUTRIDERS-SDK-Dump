// BlueprintGeneratedClass CoverMarker.CoverMarker_C
// Size: 0x3e0 (Inherited: 0x3b8)
struct ACoverMarker_C : AMadCoverMarker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UBase3DWidgetComponent* OffScreenWidget; // 0x3c0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x3c8(0x08)
	struct UCoverSwapOffscreenIndicator_UMG_C* IndicatorWidget; // 0x3d0(0x08)
	struct AMadPlayerCharacter* PlayerCharacter; // 0x3d8(0x08)

	void ReceiveBeginPlay(); // Function CoverMarker.CoverMarker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void OnCoverToCoverIconShow_Event_1(enum class ECoverToCoverMoveType Type); // Function CoverMarker.CoverMarker_C.OnCoverToCoverIconShow_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Respawn(); // Function CoverMarker.CoverMarker_C.Respawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_CoverMarker(int32_t EntryPoint); // Function CoverMarker.CoverMarker_C.ExecuteUbergraph_CoverMarker // (Final|UbergraphFunction) // @ game+0x1a35c70
};

