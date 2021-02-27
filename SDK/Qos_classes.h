// Class Qos.QosBeaconClient
// Size: 0x3b8 (Inherited: 0x380)
struct AQosBeaconClient : AOnlineBeaconClient {
	char UnknownData_380[0x38]; // 0x380(0x38)

	void ServerQosRequest(struct FString InSessionId); // Function Qos.QosBeaconClient.ServerQosRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xc32ec0
	void ClientQosResponse(enum class EQosResponseType response); // Function Qos.QosBeaconClient.ClientQosResponse // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xc32e40
};

// Class Qos.QosBeaconHost
// Size: 0x328 (Inherited: 0x318)
struct AQosBeaconHost : AOnlineBeaconHostObject {
	char UnknownData_318[0x10]; // 0x318(0x10)
};

// Class Qos.QosEvaluator
// Size: 0x80 (Inherited: 0x28)
struct UQosEvaluator : UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
	char UnknownData_48_0 : 7; // 0x48(0x01)
	bool bInProgress : 1; // 0x48(0x01)
	char UnknownData_49_0 : 7; // 0x49(0x01)
	bool bCancelOperation : 1; // 0x49(0x01)
	char UnknownData_4A[0x6]; // 0x4a(0x06)
	struct TArray<struct FDatacenterQosInstance> Datacenters; // 0x50(0x10)
	char UnknownData_60[0x20]; // 0x60(0x20)
};

// Class Qos.QosRegionManager
// Size: 0xc0 (Inherited: 0x28)
struct UQosRegionManager : UObject {
	int32_t NumTestsPerRegion; // 0x28(0x04)
	float PingTimeout; // 0x2c(0x04)
	struct TArray<struct FQosRegionInfo> RegionDefinitions; // 0x30(0x10)
	struct TArray<struct FQosDatacenterInfo> DatacenterDefinitions; // 0x40(0x10)
	struct FDateTime LastCheckTimestamp; // 0x50(0x08)
	struct UQosEvaluator* Evaluator; // 0x58(0x08)
	enum class EQosCompletionResult QosEvalResult; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct TArray<struct FRegionQosInstance> RegionOptions; // 0x68(0x10)
	struct FString ForceRegionId; // 0x78(0x10)
	char UnknownData_88_0 : 7; // 0x88(0x01)
	bool bRegionForcedViaCommandline : 1; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
	struct FString SelectedRegionId; // 0x90(0x10)
	char UnknownData_A0[0x20]; // 0xa0(0x20)
};

