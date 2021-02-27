// Class MovieScene.MovieSceneSignedObject
// Size: 0x50 (Inherited: 0x28)
struct UMovieSceneSignedObject : UObject {
	struct FGuid Signature; // 0x28(0x10)
	char UnknownData_38[0x18]; // 0x38(0x18)
};

// Class MovieScene.MovieSceneSection
// Size: 0xe0 (Inherited: 0x50)
struct UMovieSceneSection : UMovieSceneSignedObject {
	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x50(0x02)
	char UnknownData_52[0x6]; // 0x52(0x06)
	struct FMovieSceneEasingSettings Easing; // 0x58(0x38)
	struct FMovieSceneFrameRange SectionRange; // 0x90(0x10)
	struct FFrameNumber PreRollFrames; // 0xa0(0x04)
	struct FFrameNumber PostRollFrames; // 0xa4(0x04)
	int32_t RowIndex; // 0xa8(0x04)
	int32_t OverlapPriority; // 0xac(0x04)
	char bIsActive : 1; // 0xb0(0x01)
	char bIsLocked : 1; // 0xb0(0x01)
	char UnknownData_B0_2 : 6; // 0xb0(0x01)
	char UnknownData_B1[0x3]; // 0xb1(0x03)
	float StartTime; // 0xb4(0x04)
	float EndTime; // 0xb8(0x04)
	float PrerollTime; // 0xbc(0x04)
	float PostrollTime; // 0xc0(0x04)
	char bIsInfinite : 1; // 0xc4(0x01)
	char UnknownData_C4_1 : 7; // 0xc4(0x01)
	char UnknownData_C5[0x3]; // 0xc5(0x03)
	char UnknownData_C8_0 : 7; // 0xc8(0x01)
	bool bSupportsInfiniteRange : 1; // 0xc8(0x01)
	struct FOptionalMovieSceneBlendType BlendType; // 0xc9(0x02)
	char UnknownData_CB[0x15]; // 0xcb(0x15)

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x2769ec0
	void SetPreRollFrames(int32_t InPreRollFrames); // Function MovieScene.MovieSceneSection.SetPreRollFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x2769e30
	void SetPostRollFrames(int32_t InPostRollFrames); // Function MovieScene.MovieSceneSection.SetPostRollFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x2769da0
	void SetOverlapPriority(int32_t NewPriority); // Function MovieScene.MovieSceneSection.SetOverlapPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x2769d20
	void SetIsLocked(bool bInIsLocked); // Function MovieScene.MovieSceneSection.SetIsLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x2769c90
	void SetIsActive(bool bInIsActive); // Function MovieScene.MovieSceneSection.SetIsActive // (Final|Native|Public|BlueprintCallable) // @ game+0x2769c00
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode); // Function MovieScene.MovieSceneSection.SetCompletionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x2769b80
	void SetBlendType(enum class EMovieSceneBlendType InBlendType); // Function MovieScene.MovieSceneSection.SetBlendType // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x2769b00
	bool IsLocked(); // Function MovieScene.MovieSceneSection.IsLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2769ad0
	bool IsActive(); // Function MovieScene.MovieSceneSection.IsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2769aa0
	int32_t GetRowIndex(); // Function MovieScene.MovieSceneSection.GetRowIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2769a80
	int32_t GetPreRollFrames(); // Function MovieScene.MovieSceneSection.GetPreRollFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2769a60
	int32_t GetPostRollFrames(); // Function MovieScene.MovieSceneSection.GetPostRollFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2769a40
	int32_t GetOverlapPriority(); // Function MovieScene.MovieSceneSection.GetOverlapPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2769a20
	enum class EMovieSceneCompletionMode GetCompletionMode(); // Function MovieScene.MovieSceneSection.GetCompletionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2769a00
	struct FOptionalMovieSceneBlendType GetBlendType(); // Function MovieScene.MovieSceneSection.GetBlendType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27699d0
};

// Class MovieScene.MovieSceneTrack
// Size: 0x58 (Inherited: 0x50)
struct UMovieSceneTrack : UMovieSceneSignedObject {
	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x50(0x04)
	char UnknownData_54[0x1]; // 0x54(0x01)
	char UnknownData_55_0 : 7; // 0x55(0x01)
	bool bIsEvalDisabled : 1; // 0x55(0x01)
	char UnknownData_56[0x2]; // 0x56(0x02)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

// Class MovieScene.MovieSceneSequence
// Size: 0x348 (Inherited: 0x50)
struct UMovieSceneSequence : UMovieSceneSignedObject {
	struct FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate; // 0x50(0x2f0)
	enum class EMovieSceneCompletionMode DefaultCompletionMode; // 0x340(0x01)
	char UnknownData_341_0 : 7; // 0x341(0x01)
	bool bParentContextsAreSignificant : 1; // 0x341(0x01)
	char UnknownData_342_0 : 7; // 0x342(0x01)
	bool bPlayableDirectly : 1; // 0x342(0x01)
	char UnknownData_343[0x5]; // 0x343(0x05)

	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27698f0
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2769840
};

// Class MovieScene.MovieSceneSequencePlayer
// Size: 0x890 (Inherited: 0x28)
struct UMovieSceneSequencePlayer : UObject {
	char UnknownData_28[0x3e8]; // 0x28(0x3e8)
	struct FMulticastInlineDelegate OnPlay; // 0x410(0x10)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x420(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x430(0x10)
	struct FMulticastInlineDelegate OnPause; // 0x440(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x450(0x10)
	enum class EMovieScenePlayerStatus Status; // 0x460(0x01)
	char UnknownData_461[0x3]; // 0x461(0x03)
	char bReversePlayback : 1; // 0x464(0x01)
	char UnknownData_464_1 : 7; // 0x464(0x01)
	char UnknownData_465[0x3]; // 0x465(0x03)
	struct UMovieSceneSequence* Sequence; // 0x468(0x08)
	struct FFrameNumber StartTime; // 0x470(0x04)
	int32_t DurationFrames; // 0x474(0x04)
	int32_t CurrentNumLoops; // 0x478(0x04)
	char UnknownData_47C[0x14]; // 0x47c(0x14)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x490(0x14)
	char UnknownData_4A4[0x4]; // 0x4a4(0x04)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x4a8(0x320)
	char UnknownData_7C8[0x68]; // 0x7c8(0x68)
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x830(0x10)
	struct TScriptInterface<None> PlaybackClient; // 0x840(0x10)
	char UnknownData_850[0x40]; // 0x850(0x40)

	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime // (Final|Native|Public|BlueprintCallable) // @ game+0x276dfc0
	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x276dfa0
	void SetTimeRange(float StartTime, float DURATION); // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange // (Final|Native|Public|BlueprintCallable) // @ game+0x276dee0
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate // (Final|Native|Public|BlueprintCallable) // @ game+0x276dc20
	void SetPlaybackRange(float NewStartTime, float NewEndTime); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange // (Final|Native|Public|BlueprintCallable) // @ game+0x276dda0
	void SetPlaybackPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition // (Final|Native|Public|BlueprintCallable) // @ game+0x276dca0
	void SetFrameRate(struct FFrameRate FrameRate); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate // (Final|Native|Public|BlueprintCallable) // @ game+0x276db90
	void SetFrameRange(int32_t StartFrame, int32_t DURATION); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange // (Final|Native|Public|BlueprintCallable) // @ game+0x276dad0
	void SetDisableCameraCuts(bool bInDisableCameraCuts); // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts // (Final|Native|Public|BlueprintCallable) // @ game+0x276da40
	void ScrubToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x276d3e0
	bool ScrubToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x276d990
	void ScrubToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x276d900
	void Scrub(); // Function MovieScene.MovieSceneSequencePlayer.Scrub // (Final|Native|Public|BlueprintCallable) // @ game+0x276d8e0
	void RPC_OnStopEvent(struct FFrameTime StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x276d850
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, struct FFrameTime RelevantTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x276d780
	void PlayToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x276d700
	bool PlayToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x276d650
	void PlayToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.PlayToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x276d5c0
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse // (Final|Native|Public|BlueprintCallable) // @ game+0x276d5a0
	void PlayLooping(int32_t NumLoops); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x276d520
	void Play(); // Function MovieScene.MovieSceneSequencePlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x276d500
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x276d4e0
	void JumpToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0x276d460
	void JumpToPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToPosition // (Final|Native|Public|BlueprintCallable) // @ game+0x276d3e0
	bool JumpToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x276d330
	void JumpToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x276d2a0
	bool IsReversed(); // Function MovieScene.MovieSceneSequencePlayer.IsReversed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276d270
	bool IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276d240
	bool IsPaused(); // Function MovieScene.MovieSceneSequencePlayer.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276d210
	void GoToEndAndStop(); // Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop // (Final|Native|Public|BlueprintCallable) // @ game+0x276d1f0
	struct FQualifiedFrameTime GetStartTime(); // Function MovieScene.MovieSceneSequencePlayer.GetStartTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276d1a0
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276cf40
	float GetPlaybackStart(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276d0f0
	float GetPlaybackPosition(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276d000
	float GetPlaybackEnd(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276cf70
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject); // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings // (Final|Native|Public|BlueprintCallable) // @ game+0x276ce60
	float GetLength(); // Function MovieScene.MovieSceneSequencePlayer.GetLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276ce30
	struct FFrameRate GetFrameRate(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276ce10
	int32_t GetFrameDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276cde0
	struct FQualifiedFrameTime GetEndTime(); // Function MovieScene.MovieSceneSequencePlayer.GetEndTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276cd80
	struct FQualifiedFrameTime GetDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276cd40
	bool GetDisableCameraCuts(); // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts // (Final|Native|Public|BlueprintCallable) // @ game+0x276cd10
	struct FQualifiedFrameTime GetCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276ccd0
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects // (Final|Native|Public|BlueprintCallable) // @ game+0x276cbd0
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection // (Final|Native|Public|BlueprintCallable) // @ game+0x276cbb0
};

// Class MovieScene.MovieSceneSubSection
// Size: 0x158 (Inherited: 0xe0)
struct UMovieSceneSubSection : UMovieSceneSection {
	struct FMovieSceneSectionParameters Parameters; // 0xe0(0x24)
	float StartOffset; // 0x104(0x04)
	float TimeScale; // 0x108(0x04)
	float PrerollTime; // 0x10c(0x04)
	struct UMovieSceneSequence* SubSequence; // 0x110(0x08)
	LazyObjectProperty ActorToRecord; // 0x118(0x20)
	struct FString TargetSequenceName; // 0x138(0x10)
	struct FDirectoryPath TargetPathToRecordTo; // 0x148(0x10)

	void SetSequence(struct UMovieSceneSequence* Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x276de60
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSubSection.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x276d170
};

// Class MovieScene.MovieSceneSubTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x58(0x10)
};

// Class MovieScene.MovieSceneCustomClockSource
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCustomClockSource : UInterface {

	void OnTick(float DeltaSeconds, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnTick // (Native|Public) // @ game+0x2765480
	void OnStopPlaying(struct FQualifiedFrameTime InStopTime); // Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying // (Native|Public|HasOutParms) // @ game+0x27653d0
	void OnStartPlaying(struct FQualifiedFrameTime InStartTime); // Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying // (Native|Public|HasOutParms) // @ game+0x2765320
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime InCurrentTime, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime // (Native|Public|HasOutParms) // @ game+0x2765220
};

// Class MovieScene.MovieScenePlaybackClient
// Size: 0x28 (Inherited: 0x28)
struct UMovieScenePlaybackClient : UInterface {
};

// Class MovieScene.MovieScene
// Size: 0x148 (Inherited: 0x50)
struct UMovieScene : UMovieSceneSignedObject {
	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x50(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x60(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x70(0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x80(0x50)
	struct TArray<struct UMovieSceneTrack*> MasterTracks; // 0xd0(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xe0(0x08)
	struct FMovieSceneFrameRange SelectionRange; // 0xe8(0x10)
	struct FMovieSceneFrameRange PlaybackRange; // 0xf8(0x10)
	struct FFrameRate TickResolution; // 0x108(0x08)
	struct FFrameRate DisplayRate; // 0x110(0x08)
	enum class EMovieSceneEvaluationType EvaluationType; // 0x118(0x01)
	enum class EUpdateClockSource ClockSource; // 0x119(0x01)
	char UnknownData_11A_0 : 7; // 0x11a(0x01)
	bool bFadeOnEnd : 1; // 0x11a(0x01)
	char UnknownData_11B_0 : 7; // 0x11b(0x01)
	bool bCanBeSkipped : 1; // 0x11b(0x01)
	char UnknownData_11C[0x4]; // 0x11c(0x04)
	struct FSoftObjectPath CustomClockSourcePath; // 0x120(0x18)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x138(0x10)
};

// Class MovieScene.MovieSceneBindingOverrides
// Size: 0x90 (Inherited: 0x28)
struct UMovieSceneBindingOverrides : UObject {
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x28(0x10)
	char UnknownData_38[0x58]; // 0x38(0x58)
};

// Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneBindingOwnerInterface : UInterface {
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneBuiltInEasingFunction : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	enum class EMovieSceneBuiltInEasing Type; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x38 (Inherited: 0x28)
struct UMovieSceneEasingExternalCurve : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct UCurveFloat* Curve; // 0x30(0x08)
};

// Class MovieScene.MovieSceneEasingFunction
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneEasingFunction : UInterface {

	float OnEvaluate(float Interp); // Function MovieScene.MovieSceneEasingFunction.OnEvaluate // (Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a35c70
};

// Class MovieScene.MovieSceneFolder
// Size: 0x70 (Inherited: 0x28)
struct UMovieSceneFolder : UObject {
	struct FName FolderName; // 0x28(0x08)
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // 0x30(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; // 0x40(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x50(0x10)
	char UnknownData_60[0x10]; // 0x60(0x10)
};

// Class MovieScene.MovieSceneKeyProxy
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneKeyProxy : UInterface {
};

// Class MovieScene.TestMovieSceneTrack
// Size: 0x70 (Inherited: 0x58)
struct UTestMovieSceneTrack : UMovieSceneTrack {
	char UnknownData_58_0 : 7; // 0x58(0x01)
	bool bHighPassFilter : 1; // 0x58(0x01)
	char UnknownData_59[0x7]; // 0x59(0x07)
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x60(0x10)
};

// Class MovieScene.TestMovieSceneSection
// Size: 0xe0 (Inherited: 0xe0)
struct UTestMovieSceneSection : UMovieSceneSection {
};

// Class MovieScene.TestMovieSceneSequence
// Size: 0x350 (Inherited: 0x348)
struct UTestMovieSceneSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x08)
};

// Class MovieScene.TestMovieSceneSubTrack
// Size: 0x78 (Inherited: 0x68)
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x68(0x10)
};

// Class MovieScene.TestMovieSceneSubSection
// Size: 0x158 (Inherited: 0x158)
struct UTestMovieSceneSubSection : UMovieSceneSubSection {
};

