// Class OnlineSubsystemEOS.EOSArtifactSettings
// Size: 0x90 (Inherited: 0x30)
struct UEOSArtifactSettings : UDataAsset {
	struct FString ClientId; // 0x30(0x10)
	struct FString ClientSecret; // 0x40(0x10)
	struct FString ProductId; // 0x50(0x10)
	struct FString SandboxId; // 0x60(0x10)
	struct FString DeploymentId; // 0x70(0x10)
	struct FString EncryptionKey; // 0x80(0x10)
};

// Class OnlineSubsystemEOS.EOSSettings
// Size: 0x60 (Inherited: 0x28)
struct UEOSSettings : UObject {
	struct FString CacheDir; // 0x28(0x10)
	struct FString DefaultArtifactName; // 0x38(0x10)
	int32_t TickBudgetInMilliseconds; // 0x48(0x04)
	char UnknownData_4C_0 : 7; // 0x4c(0x01)
	bool bEnableOverlay : 1; // 0x4c(0x01)
	char UnknownData_4D_0 : 7; // 0x4d(0x01)
	bool bEnableSocialOverlay : 1; // 0x4d(0x01)
	char UnknownData_4E[0x2]; // 0x4e(0x02)
	struct TArray<struct FArtifactLink> ArtifactObjects; // 0x50(0x10)
};

// Class OnlineSubsystemEOS.NetConnectionEOS
// Size: 0x1b08 (Inherited: 0x1b00)
struct UNetConnectionEOS : UIpConnection {
	char UnknownData_1B00[0x8]; // 0x1b00(0x08)
};

// Class OnlineSubsystemEOS.NetDriverEOS
// Size: 0x878 (Inherited: 0x870)
struct UNetDriverEOS : UIpNetDriver {
	char UnknownData_870_0 : 7; // 0x870(0x01)
	bool bIsPassthrough : 1; // 0x870(0x01)
	char UnknownData_871_0 : 7; // 0x871(0x01)
	bool bIsUsingP2PSockets : 1; // 0x871(0x01)
	char UnknownData_872[0x6]; // 0x872(0x06)
};

