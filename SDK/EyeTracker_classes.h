// Class EyeTracker.EyeTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	void SetEyeTrackedPlayer(struct APlayerController* PlayerController); // Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2be4b20
	bool IsStereoGazeDataAvailable(); // Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2be4af0
	bool IsEyeTrackerConnected(); // Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2be4ac0
	bool GetStereoGazeData(struct FEyeTrackerStereoGazeData OutGazeData); // Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2be4a20
	bool GetGazeData(struct FEyeTrackerGazeData OutGazeData); // Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2be4970
};

