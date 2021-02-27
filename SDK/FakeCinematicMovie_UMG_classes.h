// WidgetBlueprintGeneratedClass FakeCinematicMovie_UMG.FakeCinematicMovie_UMG_C
// Size: 0x260 (Inherited: 0x238)
struct UFakeCinematicMovie_UMG_C : UPlayMovieWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UImage* Image_video; // 0x240(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x248(0x08)
	struct UAudioComponent* MovieSound; // 0x250(0x08)
	struct UMediaSource* Media_Source; // 0x258(0x08)

	void Play video(); // Function FakeCinematicMovie_UMG.FakeCinematicMovie_UMG_C.Play video // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnEndReachedEvent(); // Function FakeCinematicMovie_UMG.FakeCinematicMovie_UMG_C.OnEndReachedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnPlayMovie(struct UMediaSource* InMediaSource); // Function FakeCinematicMovie_UMG.FakeCinematicMovie_UMG_C.OnPlayMovie // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void OnStopMovie(); // Function FakeCinematicMovie_UMG.FakeCinematicMovie_UMG_C.OnStopMovie // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_FakeCinematicMovie_UMG(int32_t EntryPoint); // Function FakeCinematicMovie_UMG.FakeCinematicMovie_UMG_C.ExecuteUbergraph_FakeCinematicMovie_UMG // (Final|UbergraphFunction) // @ game+0x1a35c70
};

