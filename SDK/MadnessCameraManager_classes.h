// BlueprintGeneratedClass MadnessCameraManager.MadnessCameraManager_C
// Size: 0x2be8 (Inherited: 0x2bd0)
struct AMadnessCameraManager_C : AMadCameraManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2bd0(0x08)
	float FadeOutIn_Fade_75D58AE44E994997EEF548A1D416808D; // 0x2bd8(0x04)
	enum class ETimelineDirection FadeOutIn__Direction_75D58AE44E994997EEF548A1D416808D; // 0x2bdc(0x01)
	char UnknownData_2BDD[0x3]; // 0x2bdd(0x03)
	struct UTimelineComponent* FadeOutIn; // 0x2be0(0x08)

	void FadeOutIn__FinishedFunc(); // Function MadnessCameraManager.MadnessCameraManager_C.FadeOutIn__FinishedFunc // (BlueprintEvent) // @ game+0x1a35c70
	void FadeOutIn__UpdateFunc(); // Function MadnessCameraManager.MadnessCameraManager_C.FadeOutIn__UpdateFunc // (BlueprintEvent) // @ game+0x1a35c70
	void FadeOutIn__OnFade__EventFunc(); // Function MadnessCameraManager.MadnessCameraManager_C.FadeOutIn__OnFade__EventFunc // (BlueprintEvent) // @ game+0x1a35c70
	void ActivateFadeOutIn(); // Function MadnessCameraManager.MadnessCameraManager_C.ActivateFadeOutIn // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MadnessCameraManager(int32_t EntryPoint); // Function MadnessCameraManager.MadnessCameraManager_C.ExecuteUbergraph_MadnessCameraManager // (Final|UbergraphFunction) // @ game+0x1a35c70
};

