// Enum LifeCycle.EStartGameMode
enum class EStartGameMode : uint8 {
	None,
	Game,
	Matchmaking,
	EStartGameMode_MAX,
};

// Enum LifeCycle.EJoiningAsPartyState
enum class EJoiningAsPartyState : uint8 {
	None,
	InitJoining,
	HostWaitingOnClientConfirmation,
	JoiningParty,
	Failed,
	EJoiningAsPartyState_MAX,
};

// Enum LifeCycle.EErrorMessageType
enum class EErrorMessageType : uint8 {
	Error,
	Warning,
	Info,
	EErrorMessageType_MAX,
};

// ScriptStruct LifeCycle.LifeCycleSessionMemberState
// Size: 0x08 (Inherited: 0x00)
struct FLifeCycleSessionMemberState {
	uint32_t LifeCycleStateToken; // 0x00(0x04)
	uint16 StatusFlags; // 0x04(0x02)
	char UnknownData_6[0x2]; // 0x06(0x02)
};

// ScriptStruct LifeCycle.LifeCycleSessionState
// Size: 0x20 (Inherited: 0x00)
struct FLifeCycleSessionState {
	int32_t State; // 0x00(0x04)
	uint32_t Token; // 0x04(0x04)
	int32_t Alarm; // 0x08(0x04)
	enum class EJoiningAsPartyState JoinFlag; // 0x0c(0x01)
	char UnknownData_D_0 : 7; // 0x0d(0x01)
	bool FrOnly : 1; // 0x0d(0x01)
	enum class EStartGameMode StartGM; // 0x0e(0x01)
	char UnknownData_F[0x1]; // 0x0f(0x01)
	struct FString JoinId; // 0x10(0x10)
};

