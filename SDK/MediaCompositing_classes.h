// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// Size: 0xf0 (Inherited: 0xe0)
struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	struct UMediaSource* MediaSource; // 0xe0(0x08)
	char UnknownData_E8_0 : 7; // 0xe8(0x01)
	bool bLoop : 1; // 0xe8(0x01)
	char UnknownData_E9[0x7]; // 0xe9(0x07)
};

// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneMediaPlayerPropertyTrack : UMovieScenePropertyTrack {
};

// Class MediaCompositing.MovieSceneMediaSection
// Size: 0x118 (Inherited: 0xe0)
struct UMovieSceneMediaSection : UMovieSceneSection {
	struct UMediaSource* MediaSource; // 0xe0(0x08)
	char UnknownData_E8_0 : 7; // 0xe8(0x01)
	bool bLooping : 1; // 0xe8(0x01)
	char UnknownData_E9[0x3]; // 0xe9(0x03)
	struct FFrameNumber StartFrameOffset; // 0xec(0x04)
	struct UMediaTexture* MediaTexture; // 0xf0(0x08)
	char UnknownData_F8_0 : 7; // 0xf8(0x01)
	bool bDisplayFullScreen : 1; // 0xf8(0x01)
	char UnknownData_F9[0x7]; // 0xf9(0x07)
	struct UMediaSoundComponent* MediaSoundComponent; // 0x100(0x08)
	char UnknownData_108_0 : 7; // 0x108(0x01)
	bool bUseExternalMediaPlayer : 1; // 0x108(0x01)
	char UnknownData_109[0x7]; // 0x109(0x07)
	struct UMediaPlayer* ExternalMediaPlayer; // 0x110(0x08)
};

// Class MediaCompositing.MovieSceneMediaTrack
// Size: 0x68 (Inherited: 0x58)
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> MediaSections; // 0x58(0x10)
};

