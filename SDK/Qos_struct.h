// Enum Qos.EQosResponseType
enum class EQosResponseType : uint8 {
	NoResponse,
	Success,
	Failure,
	EQosResponseType_MAX,
};

// Enum Qos.EQosCompletionResult
enum class EQosCompletionResult : uint8 {
	Invalid,
	Success,
	Failure,
	Canceled,
	EQosCompletionResult_MAX,
};

// Enum Qos.EQosDatacenterResult
enum class EQosDatacenterResult : uint8 {
	Invalid,
	Success,
	Incomplete,
	EQosDatacenterResult_MAX,
};

// ScriptStruct Qos.RegionQosInstance
// Size: 0x40 (Inherited: 0x00)
struct FRegionQosInstance {
	struct FQosRegionInfo Definition; // 0x00(0x30)
	struct TArray<struct FDatacenterQosInstance> DatacenterOptions; // 0x30(0x10)
};

// ScriptStruct Qos.DatacenterQosInstance
// Size: 0x68 (Inherited: 0x00)
struct FDatacenterQosInstance {
	struct FQosDatacenterInfo Definition; // 0x00(0x38)
	enum class EQosDatacenterResult Result; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	int32_t AvgPingMs; // 0x3c(0x04)
	struct TArray<int32_t> PingResults; // 0x40(0x10)
	char UnknownData_50[0x8]; // 0x50(0x08)
	struct FDateTime LastCheckTimestamp; // 0x58(0x08)
	char UnknownData_60_0 : 7; // 0x60(0x01)
	bool bUsable : 1; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Qos.QosDatacenterInfo
// Size: 0x38 (Inherited: 0x00)
struct FQosDatacenterInfo {
	struct FString ID; // 0x00(0x10)
	struct FString RegionId; // 0x10(0x10)
	char UnknownData_20_0 : 7; // 0x20(0x01)
	bool bEnabled : 1; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
	struct TArray<struct FQosPingServerInfo> Servers; // 0x28(0x10)
};

// ScriptStruct Qos.QosPingServerInfo
// Size: 0x18 (Inherited: 0x00)
struct FQosPingServerInfo {
	struct FString Address; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Qos.QosRegionInfo
// Size: 0x30 (Inherited: 0x00)
struct FQosRegionInfo {
	struct FText DisplayName; // 0x00(0x18)
	struct FString RegionId; // 0x18(0x10)
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bEnabled : 1; // 0x28(0x01)
	char UnknownData_29_0 : 7; // 0x29(0x01)
	bool bVisible : 1; // 0x29(0x01)
	char UnknownData_2A_0 : 7; // 0x2a(0x01)
	bool bAutoAssignable : 1; // 0x2a(0x01)
	char UnknownData_2B[0x5]; // 0x2b(0x05)
};

