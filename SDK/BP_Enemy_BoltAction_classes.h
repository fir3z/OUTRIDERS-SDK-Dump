// BlueprintGeneratedClass BP_Enemy_BoltAction.BP_Enemy_BoltAction_C
// Size: 0x1f98 (Inherited: 0x1f80)
struct ABP_Enemy_BoltAction_C : AMadBoltAction {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f80(0x08)
	float LaserFlicker_Alpha_D519C4DC4AE961827C1899B3E2CCCE03; // 0x1f88(0x04)
	enum class ETimelineDirection LaserFlicker__Direction_D519C4DC4AE961827C1899B3E2CCCE03; // 0x1f8c(0x01)
	char UnknownData_1F8D[0x3]; // 0x1f8d(0x03)
	struct UTimelineComponent* LaserFlicker; // 0x1f90(0x08)

	void LaserFlicker__FinishedFunc(); // Function BP_Enemy_BoltAction.BP_Enemy_BoltAction_C.LaserFlicker__FinishedFunc // (BlueprintEvent) // @ game+0x1a35c70
	void LaserFlicker__UpdateFunc(); // Function BP_Enemy_BoltAction.BP_Enemy_BoltAction_C.LaserFlicker__UpdateFunc // (BlueprintEvent) // @ game+0x1a35c70
	void StartLaserFlicker(float TimeToFlicker); // Function BP_Enemy_BoltAction.BP_Enemy_BoltAction_C.StartLaserFlicker // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void ReceiveBeginPlay(); // Function BP_Enemy_BoltAction.BP_Enemy_BoltAction_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_BP_Enemy_BoltAction(int32_t EntryPoint); // Function BP_Enemy_BoltAction.BP_Enemy_BoltAction_C.ExecuteUbergraph_BP_Enemy_BoltAction // (Final|UbergraphFunction) // @ game+0x1a35c70
};

