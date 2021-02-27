// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
// Size: 0x28 (Inherited: 0x28)
struct USteamAuthComponentModuleInterface : UHandlerComponentFactory {
};

// Class OnlineSubsystemSteam.SteamNetConnection
// Size: 0x1b08 (Inherited: 0x1b00)
struct USteamNetConnection : UIpConnection {
	char UnknownData_1B00_0 : 7; // 0x1b00(0x01)
	bool bIsPassthrough : 1; // 0x1b00(0x01)
	char UnknownData_1B01[0x7]; // 0x1b01(0x07)
};

// Class OnlineSubsystemSteam.SteamNetDriver
// Size: 0x878 (Inherited: 0x870)
struct USteamNetDriver : UIpNetDriver {
	char UnknownData_870[0x8]; // 0x870(0x08)
};

