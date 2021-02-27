// Class UdpMessaging.UdpMessagingSettings
// Size: 0xa0 (Inherited: 0x28)
struct UUdpMessagingSettings : UObject {
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool EnableTransport : 1; // 0x28(0x01)
	char UnknownData_29_0 : 7; // 0x29(0x01)
	bool bAutoRepair : 1; // 0x29(0x01)
	char UnknownData_2A_0 : 7; // 0x2a(0x01)
	bool bStopServiceWhenAppDeactivates : 1; // 0x2a(0x01)
	char UnknownData_2B[0x5]; // 0x2b(0x05)
	struct FString UnicastEndpoint; // 0x30(0x10)
	struct FString MulticastEndpoint; // 0x40(0x10)
	enum class EUdpMessageFormat MessageFormat; // 0x50(0x01)
	enum class None MulticastTimeToLive; // 0x51(0x01)
	char UnknownData_52[0x6]; // 0x52(0x06)
	struct TArray<struct FString> StaticEndpoints; // 0x58(0x10)
	char UnknownData_68_0 : 7; // 0x68(0x01)
	bool EnableTunnel : 1; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct FString TunnelUnicastEndpoint; // 0x70(0x10)
	struct FString TunnelMulticastEndpoint; // 0x80(0x10)
	struct TArray<struct FString> RemoteTunnelEndpoints; // 0x90(0x10)
};

