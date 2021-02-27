// Class ActorSequence.ActorSequence
// Size: 0x370 (Inherited: 0x348)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x08)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x350(0x20)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0x1a8 (Inherited: 0x180)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x180(0x14)
	char UnknownData_194[0x4]; // 0x194(0x04)
	struct UActorSequence* Sequence; // 0x198(0x08)
	struct UActorSequencePlayer* SequencePlayer; // 0x1a0(0x08)
};

// Class ActorSequence.ActorSequencePlayer
// Size: 0x890 (Inherited: 0x890)
struct UActorSequencePlayer : UMovieSceneSequencePlayer {
};

