// ScriptStruct OnlineFrameworkCore.CurveTableOSDKType
// Size: 0x10 (Inherited: 0x00)
struct FCurveTableOSDKType {
	struct TArray<struct FCurveTableRowOSDKType> Rows; // 0x00(0x10)
};

// ScriptStruct OnlineFrameworkCore.CurveTableRowOSDKType
// Size: 0x20 (Inherited: 0x00)
struct FCurveTableRowOSDKType {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct FCurveKeyOSDKType> Keys; // 0x10(0x10)
};

// ScriptStruct OnlineFrameworkCore.CurveKeyOSDKType
// Size: 0x08 (Inherited: 0x00)
struct FCurveKeyOSDKType {
	float Time; // 0x00(0x04)
	float Value; // 0x04(0x04)
};

