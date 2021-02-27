// Class TemplateSequence.TemplateSequence
// Size: 0x3f0 (Inherited: 0x348)
struct UTemplateSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x08)
	SoftClassProperty BoundActorClass; // 0x350(0x28)
	struct TSoftObjectPtr<struct AActor> BoundPreviewActor; // 0x378(0x28)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0x3a0(0x50)
};

// Class TemplateSequence.CameraAnimationSequence
// Size: 0x3f0 (Inherited: 0x3f0)
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.TemplateSequenceActor
// Size: 0x340 (Inherited: 0x2f0)
struct ATemplateSequenceActor : AActor {
	char UnknownData_2F0[0x8]; // 0x2f0(0x08)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x2f8(0x14)
	char UnknownData_30C[0x4]; // 0x30c(0x04)
	struct UTemplateSequencePlayer* SequencePlayer; // 0x310(0x08)
	struct FSoftObjectPath TemplateSequence; // 0x318(0x18)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x330(0x10)

	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0xe18540
	void SetBinding(struct AActor* Actor); // Function TemplateSequence.TemplateSequenceActor.SetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0xe184c0
	struct UTemplateSequence* LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe18490
	struct UTemplateSequencePlayer* GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe18460
	struct UTemplateSequence* GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xe18430
};

// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x898 (Inherited: 0x890)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {
	char UnknownData_890[0x8]; // 0x890(0x08)

	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor* OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xe182c0
};

// Class TemplateSequence.TemplateSequenceSection
// Size: 0x158 (Inherited: 0x158)
struct UTemplateSequenceSection : UMovieSceneSubSection {
};

// Class TemplateSequence.TemplateSequenceTrack
// Size: 0x68 (Inherited: 0x68)
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

