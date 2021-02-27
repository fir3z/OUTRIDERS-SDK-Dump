// Enum FireteamParty.EPartyPrivacy
enum class EPartyPrivacy : uint8 {
	Closed,
	Open,
	OpenToFriendsOnly,
	EPartyPrivacy_MAX,
};

// ScriptStruct FireteamParty.OnlinePartyState
// Size: 0x48 (Inherited: 0x10)
struct FOnlinePartyState : FPartyState {
	struct FLifeCycleSessionState LC; // 0x10(0x20)
	struct FString GSId; // 0x30(0x10)
	enum class EPartyPrivacy Priv; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
};

// ScriptStruct FireteamParty.OnlinePartyMemberRepState
// Size: 0x68 (Inherited: 0x08)
struct FOnlinePartyMemberRepState : FPartyMemberRepState {
	struct FLifeCycleSessionMemberState LifeCycleState; // 0x08(0x08)
	struct FString PlayerName; // 0x10(0x10)
	int32_t PlayerLevel; // 0x20(0x04)
	int32_t CombatPower; // 0x24(0x04)
	struct FPlayerSymbol PlayerSymbol; // 0x28(0x28)
	struct FConvoyPaths ConvoyPaths; // 0x50(0x0c)
	int32_t AnomalyPath; // 0x5c(0x04)
	char UnknownData_60_0 : 7; // 0x60(0x01)
	bool bSuccessFlag : 1; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
};

// ScriptStruct FireteamParty.ConvoyPaths
// Size: 0x0c (Inherited: 0x00)
struct FConvoyPaths {
	int32_t Path1; // 0x00(0x04)
	int32_t Path2; // 0x04(0x04)
	int32_t Path3; // 0x08(0x04)
};

// ScriptStruct FireteamParty.PlayerSymbol
// Size: 0x28 (Inherited: 0x00)
struct FPlayerSymbol {
	struct FString SymbolId; // 0x00(0x10)
	int32_t SymbolNum; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FString SymbolLink; // 0x18(0x10)
};

