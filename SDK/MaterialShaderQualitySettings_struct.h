// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8 {
	NoFiltering,
	PCF_1x1,
	PCF_2x2,
	PCF_3x3,
	EMobileCSMQuality_MAX,
};

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// Size: 0x09 (Inherited: 0x00)
struct FMaterialQualityOverrides {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool bDiscardQualityDuringCook : 1; // 0x00(0x01)
	char UnknownData_1_0 : 7; // 0x01(0x01)
	bool bEnableOverride : 1; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bForceFullyRough : 1; // 0x02(0x01)
	char UnknownData_3_0 : 7; // 0x03(0x01)
	bool bForceNonMetal : 1; // 0x03(0x01)
	char UnknownData_4_0 : 7; // 0x04(0x01)
	bool bForceDisableLMDirectionality : 1; // 0x04(0x01)
	char UnknownData_5_0 : 7; // 0x05(0x01)
	bool bForceLQReflections : 1; // 0x05(0x01)
	char UnknownData_6_0 : 7; // 0x06(0x01)
	bool bForceDisablePreintegratedGF : 1; // 0x06(0x01)
	char UnknownData_7_0 : 7; // 0x07(0x01)
	bool bDisableMaterialNormalCalculation : 1; // 0x07(0x01)
	enum class EMobileCSMQuality MobileCSMQuality; // 0x08(0x01)
};

