// Class MediaAssets.MediaSource
// Size: 0x80 (Inherited: 0x28)
struct UMediaSource : UObject {
	char UnknownData_28[0x58]; // 0x28(0x58)

	bool Validate(); // Function MediaAssets.MediaSource.Validate // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c05420
	void SetMediaOptionString(struct FName Key, struct FString Value); // Function MediaAssets.MediaSource.SetMediaOptionString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c049c0
	void SetMediaOptionInt64(struct FName Key, int64_t Value); // Function MediaAssets.MediaSource.SetMediaOptionInt64 // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c048f0
	void SetMediaOptionFloat(struct FName Key, float Value); // Function MediaAssets.MediaSource.SetMediaOptionFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c04820
	void SetMediaOptionBool(struct FName Key, bool Value); // Function MediaAssets.MediaSource.SetMediaOptionBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c04750
	struct FString GetUrl(); // Function MediaAssets.MediaSource.GetUrl // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c030e0
};

// Class MediaAssets.BaseMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UBaseMediaSource : UMediaSource {
	struct FName PlayerName; // 0x80(0x08)
};

// Class MediaAssets.FileMediaSource
// Size: 0xb0 (Inherited: 0x88)
struct UFileMediaSource : UBaseMediaSource {
	struct FString FilePath; // 0x88(0x10)
	char UnknownData_98_0 : 7; // 0x98(0x01)
	bool PrecacheFile : 1; // 0x98(0x01)
	char UnknownData_99[0x17]; // 0x99(0x17)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath // (Final|Native|Public|BlueprintCallable) // @ game+0x2c04620
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice> OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2c01fc0
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice> OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2c01e70
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice> OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2c01d20
};

// Class MediaAssets.MediaComponent
// Size: 0x190 (Inherited: 0x180)
struct UMediaComponent : UActorComponent {
	struct UMediaTexture* MediaTexture; // 0x180(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x188(0x08)

	struct UMediaTexture* GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02710
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02680
};

// Class MediaAssets.MediaPlayer
// Size: 0x138 (Inherited: 0x28)
struct UMediaPlayer : UObject {
	struct FMulticastInlineDelegate OnEndReached; // 0x28(0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x48(0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x58(0x10)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x68(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x78(0x10)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x88(0x10)
	struct FMulticastInlineDelegate OnTracksChanged; // 0x98(0x10)
	struct FTimespan CacheAhead; // 0xa8(0x08)
	struct FTimespan CacheBehind; // 0xb0(0x08)
	struct FTimespan CacheBehindGame; // 0xb8(0x08)
	char UnknownData_C0_0 : 7; // 0xc0(0x01)
	bool NativeAudioOut : 1; // 0xc0(0x01)
	char UnknownData_C1_0 : 7; // 0xc1(0x01)
	bool PlayOnOpen : 1; // 0xc1(0x01)
	char UnknownData_C2[0x2]; // 0xc2(0x02)
	char Shuffle : 1; // 0xc4(0x01)
	char Loop : 1; // 0xc4(0x01)
	char UnknownData_C4_2 : 6; // 0xc4(0x01)
	char UnknownData_C5[0x3]; // 0xc5(0x03)
	struct UMediaPlaylist* Playlist; // 0xc8(0x08)
	int32_t PlaylistIndex; // 0xd0(0x04)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
	struct FTimespan TimeDelay; // 0xd8(0x08)
	float HorizontalFieldOfView; // 0xe0(0x04)
	float VerticalFieldOfView; // 0xe4(0x04)
	struct FRotator ViewRotation; // 0xe8(0x0c)
	char UnknownData_F4[0x2c]; // 0xf4(0x2c)
	struct FGuid PlayerGuid; // 0x120(0x10)
	char UnknownData_130[0x8]; // 0x130(0x08)

	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c053f0
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c053c0
	bool SupportsRate(float Rate, bool Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c052f0
	bool SetViewRotation(struct FRotator Rotation, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2c05210
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewField // (Final|Native|Public|BlueprintCallable) // @ game+0x2c05100
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate // (Final|Native|Public|BlueprintCallable) // @ game+0x2c05000
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat // (Final|Native|Public|BlueprintCallable) // @ game+0x2c04f00
	void SetTimeDelay(struct FTimespan TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2c04e80
	bool SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate // (Final|Native|Public|BlueprintCallable) // @ game+0x2c04cc0
	bool SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x2c04c30
	void SetMediaOptions(struct UMediaSource* Options); // Function MediaAssets.MediaPlayer.SetMediaOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x2c04ab0
	bool SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x2c046c0
	void SetDesiredPlayerName(struct FName PlayerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName // (Final|Native|Public|BlueprintCallable) // @ game+0x2c043c0
	void SetBlockOnTime(struct FTimespan Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2c04330
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack // (Final|Native|Public|BlueprintCallable) // @ game+0x2c04270
	bool Seek(struct FTimespan Time); // Function MediaAssets.MediaPlayer.Seek // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2c041d0
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind // (Final|Native|Public|BlueprintCallable) // @ game+0x2c041a0
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen // (Final|Native|Public|BlueprintCallable) // @ game+0x2c040b0
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous // (Final|Native|Public|BlueprintCallable) // @ game+0x2c03f60
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek // (Final|Native|Public|BlueprintCallable) // @ game+0x2c03f40
	bool Play(); // Function MediaAssets.MediaPlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x2c03f10
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x2c03ee0
	bool OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x2c03e30
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions Options); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c03d30
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions Options, bool bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c03b50
	bool OpenSource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.OpenSource // (Final|Native|Public|BlueprintCallable) // @ game+0x2c03ac0
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x2c03a00
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist // (Final|Native|Public|BlueprintCallable) // @ game+0x2c03960
	bool OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile // (Final|Native|Public|BlueprintCallable) // @ game+0x2c038b0
	bool Next(); // Function MediaAssets.MediaPlayer.Next // (Final|Native|Public|BlueprintCallable) // @ game+0x2c03860
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c03830
	bool IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c03800
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c037d0
	bool IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c037a0
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c03770
	bool IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c03740
	bool IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c03710
	bool IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c036e0
	bool HasError(); // Function MediaAssets.MediaPlayer.HasError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c035f0
	struct FRotator GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c035b0
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c034b0
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c033e0
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c03320
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c03250
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c03190
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c03160
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c030a0
	struct FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02f90
	int32_t GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02ed0
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02db0
	struct FTimespan GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02d70
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02d30
	void GetSupportedRates(struct TArray<struct FFloatRange> OutRates, bool Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02c30
	int32_t GetSelectedTrack(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02b20
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02af0
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02990
	struct UMediaPlaylist* GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02970
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02930
	int32_t GetNumTracks(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c028a0
	int32_t GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c027e0
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c025e0
	struct FTimespan GetLastVideoSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c025a0
	struct FTimespan GetLastAudioSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02560
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02530
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02490
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02450
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02350
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02290
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c021d0
	void Close(); // Function MediaAssets.MediaPlayer.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x2c01d00
	bool CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x2c01c50
	bool CanPlaySource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource // (Final|Native|Public|BlueprintCallable) // @ game+0x2c01bc0
	bool CanPause(); // Function MediaAssets.MediaPlayer.CanPause // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c01b90
};

// Class MediaAssets.MediaPlaylist
// Size: 0x38 (Inherited: 0x28)
struct UMediaPlaylist : UObject {
	struct TArray<struct UMediaSource*> Items; // 0x28(0x10)

	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace // (Final|Native|Public|BlueprintCallable) // @ game+0x2c040e0
	bool RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt // (Final|Native|Public|BlueprintCallable) // @ game+0x2c04020
	bool Remove(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Remove // (Final|Native|Public|BlueprintCallable) // @ game+0x2c03f90
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num // (Final|Native|Public|BlueprintCallable) // @ game+0x2c03890
	void Insert(struct UMediaSource* MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert // (Final|Native|Public|BlueprintCallable) // @ game+0x2c03620
	struct UMediaSource* GetRandom(int32_t OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c02a50
	struct UMediaSource* GetPrevious(int32_t InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c029b0
	struct UMediaSource* GetNext(int32_t InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c02740
	struct UMediaSource* Get(int32_t Index); // Function MediaAssets.MediaPlaylist.Get // (Final|Native|Public|BlueprintCallable) // @ game+0x2c02110
	bool AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl // (Final|Native|Public|BlueprintCallable) // @ game+0x2c01890
	bool AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile // (Final|Native|Public|BlueprintCallable) // @ game+0x2c017e0
	bool Add(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Add // (Final|Native|Public|BlueprintCallable) // @ game+0x2c01750
};

// Class MediaAssets.MediaSoundComponent
// Size: 0x9a0 (Inherited: 0x7a0)
struct UMediaSoundComponent : USynthComponent {
	enum class EMediaSoundChannels Channels; // 0x7a0(0x04)
	char UnknownData_7A4_0 : 7; // 0x7a4(0x01)
	bool DynamicRateAdjustment : 1; // 0x7a4(0x01)
	char UnknownData_7A5[0x3]; // 0x7a5(0x03)
	float RateAdjustmentFactor; // 0x7a8(0x04)
	struct FFloatRange RateAdjustmentRange; // 0x7ac(0x10)
	char UnknownData_7BC[0x4]; // 0x7bc(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x7c0(0x08)
	char UnknownData_7C8[0x1d8]; // 0x7c8(0x1d8)

	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x2c04d50
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x2c04b30
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings // (Final|Native|Public|BlueprintCallable) // @ game+0x2c04560
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis // (Final|Native|Public|BlueprintCallable) // @ game+0x2c044d0
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing // (Final|Native|Public|BlueprintCallable) // @ game+0x2c04440
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData // (Final|Native|Public|BlueprintCallable) // @ game+0x2c02bb0
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c026b0
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c024d0
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c01940
};

// Class MediaAssets.MediaTexture
// Size: 0x1b8 (Inherited: 0xe8)
struct UMediaTexture : UTexture {
	enum class TextureAddress AddressX; // 0xe8(0x01)
	enum class TextureAddress AddressY; // 0xe9(0x01)
	char UnknownData_EA_0 : 7; // 0xea(0x01)
	bool AutoClear : 1; // 0xea(0x01)
	char UnknownData_EB[0x1]; // 0xeb(0x01)
	struct FLinearColor ClearColor; // 0xec(0x10)
	char UnknownData_FC_0 : 7; // 0xfc(0x01)
	bool EnableGenMips : 1; // 0xfc(0x01)
	enum class None NumMips; // 0xfd(0x01)
	char UnknownData_FE[0x2]; // 0xfe(0x02)
	struct UMediaPlayer* MediaPlayer; // 0x100(0x08)
	char UnknownData_108[0xb0]; // 0x108(0xb0)

	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x2c04bb0
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x291b4c0
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c026e0
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c02500
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c021a0
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x88 (Inherited: 0x80)
struct UPlatformMediaSource : UMediaSource {
	struct UMediaSource* MediaSource; // 0x80(0x08)
};

// Class MediaAssets.StreamMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UStreamMediaSource : UBaseMediaSource {
	struct FString StreamUrl; // 0x88(0x10)
};

// Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	char UnknownData_88_0 : 7; // 0x88(0x01)
	bool bUseTimeSynchronization : 1; // 0x88(0x01)
	char UnknownData_89[0x3]; // 0x89(0x03)
	int32_t FrameDelay; // 0x8c(0x04)
	double TimeDelay; // 0x90(0x08)
};

