// Class Hotfix.OnlineHotfixManager
// Size: 0x220 (Inherited: 0x28)
struct UOnlineHotfixManager : UObject {
	char UnknownData_28[0x1b8]; // 0x28(0x1b8)
	struct FString OssName; // 0x1e0(0x10)
	struct FString HotfixManagerClassName; // 0x1f0(0x10)
	struct FString DebugPrefix; // 0x200(0x10)
	struct TArray<struct UObject*> AssetsHotfixedFromIniFiles; // 0x210(0x10)

	void StartHotfixProcess(); // Function Hotfix.OnlineHotfixManager.StartHotfixProcess // (Native|Public|BlueprintCallable) // @ game+0xca2e80
};

// Class Hotfix.UpdateManager
// Size: 0x118 (Inherited: 0x28)
struct UUpdateManager : UObject {
	char UnknownData_28[0x60]; // 0x28(0x60)
	float HotfixCheckCompleteDelay; // 0x88(0x04)
	float UpdateCheckCompleteDelay; // 0x8c(0x04)
	float HotfixAvailabilityCheckCompleteDelay; // 0x90(0x04)
	float UpdateCheckAvailabilityCompleteDelay; // 0x94(0x04)
	char UnknownData_98_0 : 7; // 0x98(0x01)
	bool bCheckPlatformOSSForUpdate : 1; // 0x98(0x01)
	char UnknownData_99_0 : 7; // 0x99(0x01)
	bool bCheckOSSForUpdate : 1; // 0x99(0x01)
	char UnknownData_9A[0x2]; // 0x9a(0x02)
	int32_t AppSuspendedUpdateCheckTimeSeconds; // 0x9c(0x04)
	char UnknownData_A0[0x8]; // 0xa0(0x08)
	char UnknownData_A8_0 : 7; // 0xa8(0x01)
	bool bPlatformEnvironmentDetected : 1; // 0xa8(0x01)
	char UnknownData_A9_0 : 7; // 0xa9(0x01)
	bool bInitialUpdateFinished : 1; // 0xa9(0x01)
	char UnknownData_AA_0 : 7; // 0xaa(0x01)
	bool bCheckHotfixAvailabilityOnly : 1; // 0xaa(0x01)
	enum class EUpdateState CurrentUpdateState; // 0xab(0x01)
	int32_t WorstNumFilesPendingLoadViewed; // 0xac(0x04)
	enum class EPatchCheckResult LastPatchCheckResult; // 0xb0(0x01)
	enum class EHotfixResult LastHotfixResult; // 0xb1(0x01)
	char UnknownData_B2[0x2e]; // 0xb2(0x2e)
	struct FDateTime LastUpdateCheck[0x2]; // 0xe0(0x10)
	enum class EUpdateCompletionStatus LastCompletionResult[0x2]; // 0xf0(0x02)
	char UnknownData_F2[0x16]; // 0xf2(0x16)
	struct UEnum* UpdateStateEnum; // 0x108(0x08)
	struct UEnum* UpdateCompletionEnum; // 0x110(0x08)
};

