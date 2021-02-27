// Class CinematicCamera.CameraRig_Crane
// Size: 0x320 (Inherited: 0x2f0)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x2f0(0x04)
	float CraneYaw; // 0x2f4(0x04)
	float CraneArmLength; // 0x2f8(0x04)
	char UnknownData_2FC_0 : 7; // 0x2fc(0x01)
	bool bLockMountPitch : 1; // 0x2fc(0x01)
	char UnknownData_2FD_0 : 7; // 0x2fd(0x01)
	bool bLockMountYaw : 1; // 0x2fd(0x01)
	char UnknownData_2FE[0x2]; // 0x2fe(0x02)
	struct USceneComponent* TransformComponent; // 0x300(0x08)
	struct USceneComponent* CraneYawControl; // 0x308(0x08)
	struct USceneComponent* CranePitchControl; // 0x310(0x08)
	struct USceneComponent* CraneCameraMount; // 0x318(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x310 (Inherited: 0x2f0)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x2f0(0x04)
	char UnknownData_2F4_0 : 7; // 0x2f4(0x01)
	bool bLockOrientationToRail : 1; // 0x2f4(0x01)
	char UnknownData_2F5[0x3]; // 0x2f5(0x03)
	struct USceneComponent* TransformComponent; // 0x2f8(0x08)
	struct USplineComponent* RailSplineComponent; // 0x300(0x08)
	struct USceneComponent* RailCameraMount; // 0x308(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x29473b0
};

// Class CinematicCamera.CineCameraActor
// Size: 0x8d0 (Inherited: 0x870)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x870(0x50)
	char UnknownData_8C0[0x10]; // 0x8c0(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29470c0
};

// Class CinematicCamera.CineCameraComponent
// Size: 0x990 (Inherited: 0x890)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x890(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0x89c(0x0c)
	struct FCameraLensSettings LensSettings; // 0x8a8(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x8c0(0x58)
	float CurrentFocalLength; // 0x918(0x04)
	float CurrentAperture; // 0x91c(0x04)
	float CurrentFocusDistance; // 0x920(0x04)
	char UnknownData_924[0xc]; // 0x924(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x930(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x940(0x10)
	struct FString DefaultFilmbackPresetName; // 0x950(0x10)
	struct FString DefaultFilmbackPreset; // 0x960(0x10)
	struct FString DefaultLensPresetName; // 0x970(0x10)
	float DefaultLensFocalLength; // 0x980(0x04)
	float DefaultLensFStop; // 0x984(0x04)
	char UnknownData_988[0x8]; // 0x988(0x08)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x2947540
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x29474a0
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2947400
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29473d0
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x29472d0
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2947250
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x2947220
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29471a0
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29470e0
};

