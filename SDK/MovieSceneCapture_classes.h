// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// Size: 0x58 (Inherited: 0x28)
struct UMovieSceneCaptureProtocolBase : UObject {
	char UnknownData_28[0x28]; // 0x28(0x28)
	enum class EMovieSceneCaptureProtocolState State; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)

	bool IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c2ac30
	enum class EMovieSceneCaptureProtocolState GetState(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24b9c50
};

// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneAudioCaptureProtocolBase : UMovieSceneCaptureProtocolBase {
};

// Class MovieSceneCapture.NullAudioCaptureProtocol
// Size: 0x58 (Inherited: 0x58)
struct UNullAudioCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Size: 0x90 (Inherited: 0x58)
struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	struct FString Filename; // 0x58(0x10)
	char UnknownData_68[0x28]; // 0x68(0x28)
};

// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// Size: 0x58 (Inherited: 0x58)
struct UMovieSceneImageCaptureProtocolBase : UMovieSceneCaptureProtocolBase {
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// Size: 0xc0 (Inherited: 0x58)
struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58(0x10)
	char UnknownData_68_0 : 7; // 0x68(0x01)
	bool bCaptureFramesInHDR : 1; // 0x68(0x01)
	char UnknownData_69[0x3]; // 0x69(0x03)
	int32_t HDRCompressionQuality; // 0x6c(0x04)
	enum class EHDRCaptureGamut CaptureGamut; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
	struct FSoftObjectPath PostProcessingMaterial; // 0x78(0x18)
	char UnknownData_90_0 : 7; // 0x90(0x01)
	bool bDisableScreenPercentage : 1; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
	struct UMaterialInterface* PostProcessingMaterialPtr; // 0x98(0x08)
	char UnknownData_A0[0x20]; // 0xa0(0x20)
};

// Class MovieSceneCapture.FrameGrabberProtocol
// Size: 0x68 (Inherited: 0x58)
struct UFrameGrabberProtocol : UMovieSceneImageCaptureProtocolBase {
	char UnknownData_58[0x10]; // 0x58(0x10)
};

// Class MovieSceneCapture.ImageSequenceProtocol
// Size: 0xd8 (Inherited: 0x68)
struct UImageSequenceProtocol : UFrameGrabberProtocol {
	char UnknownData_68[0x70]; // 0x68(0x70)
};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
// Size: 0xe0 (Inherited: 0xd8)
struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
};

// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// Size: 0xd8 (Inherited: 0xd8)
struct UImageSequenceProtocol_BMP : UImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// Size: 0xe0 (Inherited: 0xe0)
struct UImageSequenceProtocol_PNG : UCompressedImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// Size: 0xe0 (Inherited: 0xe0)
struct UImageSequenceProtocol_JPG : UCompressedImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// Size: 0xe8 (Inherited: 0xd8)
struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	char UnknownData_D8_0 : 7; // 0xd8(0x01)
	bool bCompressed : 1; // 0xd8(0x01)
	enum class EHDRCaptureGamut CaptureGamut; // 0xd9(0x01)
	char UnknownData_DA[0xe]; // 0xda(0x0e)
};

// Class MovieSceneCapture.MovieSceneCaptureInterface
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCaptureInterface : UInterface {
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x220 (Inherited: 0x28)
struct UMovieSceneCapture : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct FSoftClassPath ImageCaptureProtocolType; // 0x38(0x18)
	struct FSoftClassPath AudioCaptureProtocolType; // 0x50(0x18)
	struct UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x68(0x08)
	struct UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x70(0x08)
	struct FMovieSceneCaptureSettings Settings; // 0x78(0x70)
	char UnknownData_E8_0 : 7; // 0xe8(0x01)
	bool bUseSeparateProcess : 1; // 0xe8(0x01)
	char UnknownData_E9_0 : 7; // 0xe9(0x01)
	bool bCloseEditorWhenCaptureStarts : 1; // 0xe9(0x01)
	char UnknownData_EA[0x6]; // 0xea(0x06)
	struct FString AdditionalCommandLineArguments; // 0xf0(0x10)
	struct FString InheritedCommandLineArguments; // 0x100(0x10)
	char UnknownData_110[0x110]; // 0x110(0x110)

	void SetImageCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType // (Final|Native|Public|BlueprintCallable) // @ game+0x2c2aef0
	void SetAudioCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType // (Final|Native|Public|BlueprintCallable) // @ game+0x2c2ae70
	struct UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol // (Final|Native|Public|BlueprintCallable) // @ game+0x2c2abe0
	struct UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol // (Final|Native|Public|BlueprintCallable) // @ game+0x2c2ab40
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x248 (Inherited: 0x220)
struct ULevelCapture : UMovieSceneCapture {
	char UnknownData_220_0 : 7; // 0x220(0x01)
	bool bAutoStartCapture : 1; // 0x220(0x01)
	char UnknownData_221[0xf]; // 0x221(0x0f)
	struct FGuid PrerequisiteActorId; // 0x230(0x10)
	char UnknownData_240[0x8]; // 0x240(0x08)
};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneCaptureEnvironment : UObject {

	bool IsCaptureInProgress(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2c2ac00
	int32_t GetCaptureFrameNumber(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2c2ab90
	float GetCaptureElapsedTime(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2c2ab60
	struct UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2c2a790
	struct UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2c2a760
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
// Size: 0xd8 (Inherited: 0x58)
struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct UWorld* World; // 0x58(0x08)
	char UnknownData_60[0x78]; // 0x60(0x78)

	void StopCapturingFinalPixels(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels // (Final|Native|Public|BlueprintCallable) // @ game+0x2c2b100
	void StartCapturingFinalPixels(struct FCapturedPixelsID StreamID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c2af70
	void ResolveBuffer(struct UTexture* Buffer, struct FCapturedPixelsID BufferID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c2aca0
	void OnWarmUp(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void OnTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void OnStartCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	bool OnSetup(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup // (Native|Event|Protected|BlueprintEvent) // @ game+0x2c2ac70
	void OnPreTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void OnPixelsReceived(struct FCapturedPixels Pixels, struct FCapturedPixelsID ID, struct FFrameMetrics FrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void OnPauseCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void OnFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void OnCaptureFrame(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	bool OnCanFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize // (Native|Event|Protected|BlueprintEvent|Const) // @ game+0xbde300
	void OnBeginFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	struct FFrameMetrics GetCurrentFrameMetrics(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c2abc0
	struct FString GenerateFilename(struct FFrameMetrics InFrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c2a7c0
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// Size: 0xe0 (Inherited: 0xd8)
struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	enum class EDesiredImageFormat Format; // 0xd8(0x01)
	char UnknownData_D9_0 : 7; // 0xd9(0x01)
	bool bEnableCompression : 1; // 0xd9(0x01)
	char UnknownData_DA[0x2]; // 0xda(0x02)
	int32_t CompressionQuality; // 0xdc(0x04)

	void WriteImageToDisk(struct FCapturedPixels PixelData, struct FCapturedPixelsID StreamID, struct FFrameMetrics FrameMetrics, bool bCopyImageData); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c2b120
	struct FString GenerateFilenameForCurrentFrame(); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame // (Final|Native|Public|BlueprintCallable) // @ game+0x2c2aac0
	struct FString GenerateFilenameForBuffer(struct UTexture* Buffer, struct FCapturedPixelsID StreamID); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c2a8b0
};

// Class MovieSceneCapture.VideoCaptureProtocol
// Size: 0x80 (Inherited: 0x68)
struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	char UnknownData_68_0 : 7; // 0x68(0x01)
	bool bUseCompression : 1; // 0x68(0x01)
	char UnknownData_69[0x3]; // 0x69(0x03)
	float CompressionQuality; // 0x6c(0x04)
	char UnknownData_70[0x10]; // 0x70(0x10)
};

