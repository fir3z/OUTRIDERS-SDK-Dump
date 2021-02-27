// ScriptStruct LevelSequence.LevelSequenceCameraSettings
// Size: 0x02 (Inherited: 0x00)
struct FLevelSequenceCameraSettings {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bOverrideAspectRatioAxisConstraint : 1; // 0x00(0x01)
	enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x01(0x01)
};

// ScriptStruct LevelSequence.SecondaryAnimationManager
// Size: 0x78 (Inherited: 0x00)
struct FSecondaryAnimationManager {
	struct TArray<struct UObject*> CurrentlyReferencedSecondaryAnimations; // 0x00(0x10)
	char UnknownData_10[0x68]; // 0x10(0x68)
};

// ScriptStruct LevelSequence.SequenceAssetManager
// Size: 0x80 (Inherited: 0x00)
struct FSequenceAssetManager {
	struct TArray<struct UObject*> CurrentlyReferencedAssets; // 0x00(0x10)
	struct TArray<struct UMovieSceneSection*> AccesibleDialogSections; // 0x10(0x10)
	char UnknownData_20[0x60]; // 0x20(0x60)
};

// ScriptStruct LevelSequence.BoundActorProxy
// Size: 0x01 (Inherited: 0x00)
struct FBoundActorProxy {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// Size: 0xa0 (Inherited: 0x00)
struct FLevelSequenceBindingReferences {
	struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x00(0x50)
	struct TSet<struct FGuid> AnimSequenceInstances; // 0x50(0x50)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// Size: 0x10 (Inherited: 0x00)
struct FLevelSequenceBindingReferenceArray {
	struct TArray<struct FLevelSequenceBindingReference> References; // 0x00(0x10)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// Size: 0x48 (Inherited: 0x00)
struct FLevelSequenceBindingReference {
	struct FString PackageName; // 0x00(0x10)
	struct FSoftObjectPath ExternalObjectPath; // 0x10(0x18)
	struct FString ObjectPath; // 0x28(0x10)
	char UnknownData_38[0x10]; // 0x38(0x10)
};

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// Size: 0x50 (Inherited: 0x00)
struct FLevelSequenceObjectReferenceMap {
	char UnknownData_0[0x50]; // 0x00(0x50)
};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// Size: 0x20 (Inherited: 0x00)
struct FLevelSequenceLegacyObjectReference {
	char UnknownData_0[0x20]; // 0x00(0x20)
};

// ScriptStruct LevelSequence.LevelSequenceObject
// Size: 0x38 (Inherited: 0x00)
struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x00(0x20)
	struct FString ComponentName; // 0x20(0x10)
	struct FWeakObjectPtr<struct UObject> CachedComponent; // 0x30(0x08)
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// Size: 0xb8 (Inherited: 0x00)
struct FLevelSequencePlayerSnapshot {
	struct FString MasterName; // 0x00(0x10)
	struct FQualifiedFrameTime MasterTime; // 0x10(0x10)
	struct FQualifiedFrameTime SourceTime; // 0x20(0x10)
	struct FString CurrentShotName; // 0x30(0x10)
	struct FQualifiedFrameTime CurrentShotLocalTime; // 0x40(0x10)
	struct FQualifiedFrameTime CurrentShotSourceTime; // 0x50(0x10)
	struct FString SourceTimecode; // 0x60(0x10)
	struct TSoftObjectPtr<struct UCameraComponent> CameraComponent; // 0x70(0x28)
	struct FLevelSequenceSnapshotSettings Settings; // 0x98(0x0c)
	char UnknownData_A4[0x4]; // 0xa4(0x04)
	struct ULevelSequence* ActiveShot; // 0xa8(0x08)
	struct FMovieSceneSequenceID ShotID; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// Size: 0x0c (Inherited: 0x00)
struct FLevelSequenceSnapshotSettings {
	enum class None ZeroPadAmount; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FFrameRate FrameRate; // 0x04(0x08)
};

