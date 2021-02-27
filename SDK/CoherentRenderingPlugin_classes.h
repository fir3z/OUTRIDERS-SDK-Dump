// Class CoherentRenderingPlugin.CoherentRenderingSettings
// Size: 0x40 (Inherited: 0x28)
struct UCoherentRenderingSettings : UObject {
	enum class ECoherentRenderingSettingsSeverity RenderingLogSeverity; // 0x28(0x01)
	char UnknownData_29_0 : 7; // 0x29(0x01)
	bool ShowWarningsOnScreen : 1; // 0x29(0x01)
	char UnknownData_2A[0x6]; // 0x2a(0x06)
	struct FString DeveloperOptions; // 0x30(0x10)
};

// Class CoherentRenderingPlugin.CohTextureUserWrapData
// Size: 0x78 (Inherited: 0x28)
struct UCohTextureUserWrapData : UObject {
	char UnknownData_28[0x48]; // 0x28(0x48)
	struct UTexture* Texture; // 0x70(0x08)
};

