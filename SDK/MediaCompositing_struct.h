// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
// Size: 0x58 (Inherited: 0x48)
struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct UMediaSource* MediaSource; // 0x48(0x08)
	struct FFrameNumber SectionStartFrame; // 0x50(0x04)
	char UnknownData_54_0 : 7; // 0x54(0x01)
	bool bLoop : 1; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// Size: 0x58 (Inherited: 0x20)
struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneMediaSectionParams Params; // 0x20(0x38)
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// Size: 0x38 (Inherited: 0x00)
struct FMovieSceneMediaSectionParams {
	struct UMediaSoundComponent* MediaSoundComponent; // 0x00(0x08)
	struct UMediaSource* MediaSource; // 0x08(0x08)
	struct UMediaTexture* MediaTexture; // 0x10(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x18(0x08)
	struct FFrameNumber SectionStartFrame; // 0x20(0x04)
	struct FFrameNumber SectionEndFrame; // 0x24(0x04)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bLooping : 1; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	struct FFrameNumber StartFrameOffset; // 0x2c(0x04)
	char UnknownData_30_0 : 7; // 0x30(0x01)
	bool bDisplayFullScreen : 1; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

