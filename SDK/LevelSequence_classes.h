// Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0x70 (Inherited: 0x28)
struct UDefaultLevelSequenceInstanceData : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct AActor* TransformOriginActor; // 0x30(0x08)
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FTransform TransformOrigin; // 0x40(0x30)
};

// Class LevelSequence.LevelSequenceMetaData
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceMetaData : UInterface {
};

// Class LevelSequence.LevelSequence
// Size: 0x598 (Inherited: 0x348)
struct ULevelSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x08)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x350(0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0x3a0(0xa0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x440(0x50)
	struct UObject* DirectorClass; // 0x490(0x08)
	struct FSequenceAssetManager SequenceAssetManager; // 0x498(0x80)
	char UnknownData_518_0 : 7; // 0x518(0x01)
	bool bUseSequenceAssetManager : 1; // 0x518(0x01)
	char UnknownData_519[0x7]; // 0x519(0x07)
	struct FSecondaryAnimationManager SecondaryAnimationManager; // 0x520(0x78)

	void RemoveMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x2c16b30
	struct UObject* FindOrAddMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x2c16480
	struct UObject* FindMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c16480
	struct UObject* CopyMetaData(struct UObject* InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData // (Final|Native|Public|BlueprintCallable) // @ game+0x2c16480
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50 (Inherited: 0x28)
struct ULevelSequenceBurnInOptions : UObject {
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bUseBurnIn : 1; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FSoftClassPath BurnInClass; // 0x30(0x18)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x08)

	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2c16ef0
};

// Class LevelSequence.LevelSequenceActor
// Size: 0x388 (Inherited: 0x2f0)
struct ALevelSequenceActor : AActor {
	char UnknownData_2F0[0x10]; // 0x2f0(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x300(0x14)
	char UnknownData_314[0x4]; // 0x314(0x04)
	struct ULevelSequencePlayer* SequencePlayer; // 0x318(0x08)
	struct FSoftObjectPath LevelSequence; // 0x320(0x18)
	struct TArray<struct AActor*> AdditionalEventReceivers; // 0x338(0x10)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x348(0x02)
	char UnknownData_34A[0x6]; // 0x34a(0x06)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x350(0x08)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x358(0x08)
	char bAutoPlay : 1; // 0x360(0x01)
	char bOverrideInstanceData : 1; // 0x360(0x01)
	char bReplicatePlayback : 1; // 0x360(0x01)
	char UnknownData_360_3 : 5; // 0x360(0x01)
	char UnknownData_361[0x7]; // 0x361(0x07)
	struct UObject* DefaultInstanceData; // 0x368(0x08)
	struct AActor* ReservedBy; // 0x370(0x08)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x378(0x08)
	char UnknownData_380_0 : 7; // 0x380(0x01)
	bool bShowBurnin : 1; // 0x380(0x01)
	char UnknownData_381[0x7]; // 0x381(0x07)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0x2c17230
	void SetSequence(struct ULevelSequence* InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x2c171b0
	void SetReplicatePlayback(bool ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback // (Final|Native|Public|BlueprintCallable) // @ game+0x2c17120
	void SetEventReceivers(struct TArray<struct AActor*> AdditionalReceivers); // Function LevelSequence.LevelSequenceActor.SetEventReceivers // (Final|Native|Public|BlueprintCallable) // @ game+0x2c16fe0
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*> Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c16dc0
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*> Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2c16c70
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings // (Final|Native|Public|BlueprintCallable) // @ game+0x2c16c50
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x2c16ba0
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x2c16a70
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x2c16980
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature // (Public|Delegate) // @ game+0x1a35c70
	struct ULevelSequence* LoadSequence(); // Function LevelSequence.LevelSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c16910
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0x2c168f0
	struct ULevelSequencePlayer* GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c16890
	struct ULevelSequence* GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c16840
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c16720
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c16670
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x2c16370
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x2c16230
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x2f0 (Inherited: 0x230)
struct ULevelSequenceBurnIn : UUserWidget {
	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x230(0xb8)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x2e8(0x08)

	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	struct ULevelSequenceBurnInInitSettings* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x1622400
};

// Class LevelSequence.LevelSequenceDirector
// Size: 0x30 (Inherited: 0x28)
struct ULevelSequenceDirector : UObject {
	struct ULevelSequencePlayer* Player; // 0x28(0x08)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xa0 (Inherited: 0xa0)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint {
};

// Class LevelSequence.LevelSequencePlayer
// Size: 0x9b0 (Inherited: 0x890)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	struct FMulticastInlineDelegate OnCameraCut; // 0x890(0x10)
	char UnknownData_8A0[0x110]; // 0x8a0(0x110)

	struct APlayerController* GetTargetPlayerController(); // Function LevelSequence.LevelSequencePlayer.GetTargetPlayerController // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c168c0
	struct UCameraComponent* GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c16800
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor* OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2c16500
};

// Class LevelSequence.LevelSequenceMediaController
// Size: 0x318 (Inherited: 0x2f0)
struct ALevelSequenceMediaController : AActor {
	char UnknownData_2F0[0x8]; // 0x2f0(0x08)
	struct ALevelSequenceActor* Sequence; // 0x2f8(0x08)
	struct UMediaComponent* MediaComponent; // 0x300(0x08)
	float ServerStartTimeSeconds; // 0x308(0x04)
	char UnknownData_30C[0xc]; // 0x30c(0x0c)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer // (Final|Native|Public|BlueprintCallable) // @ game+0x2c17250
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x2c16960
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds // (Final|Native|Private) // @ game+0x2c16940
	struct ALevelSequenceActor* GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2c16870
	struct UMediaComponent* GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29473b0
};

