// Enum OnlineFramework.EUISelectOption
enum class EUISelectOption : uint8 {
	Submit,
	Cancel,
	EUISelectOption_MAX,
};

// Enum OnlineFramework.EUIErrorCode
enum class EUIErrorCode : uint8 {
	NoError,
	UnexpectedError,
	GamepadLostConnection,
	InternetLostConnection,
	UserSignedOut,
	ReturnedFromSuspend,
	LostConnectionToSession,
	NewUserSignedIn,
	NoGamepadConnected,
	OnDisconnectOthers,
	ServerCommunicationError,
	AuthenticationError,
	OSDKAuthenticationError,
	FirstPartyAuthenticationError,
	PlayfabAuthenticationError,
	PlayFabUnavailable,
	MaintenanceBegin,
	Maintenance,
	ForcedLogoutBegin,
	ForcedLogoutCountdown,
	ForcedLogout,
	HostConnectionProblem,
	NoDownloadedRegion,
	MatchmakingFailed_InstallationInProgress,
	JoiningFailed_InstallationInProgress,
	PartyIsFull,
	KickedOutFromParty,
	SessionUserInviteFailure,
	JoinPartyError,
	MatchmakingError,
	CannotJoinPrologueNotFinished,
	OnlinePlayRestricted,
	UnderageAccountSignedIn,
	ConnectionToHostFailure,
	PlayerChangeCharacter,
	JoinAsPartyToPrivateParty,
	CreatePartyError,
	CharacterNotSelected,
	JoinCodeInvalid,
	ClosedPartyError,
	FriendsOnlyPartyError,
	DemoMismatch,
	CrossPlatformJoinBlockedByHost,
	CrossPlatformJoinBlockedByClient,
	CrossPlatformDisabled,
	PatchAvailable,
	Blocked_Prologue,
	Blocked_ChallengeFinalStage,
	Blocked_BossFight,
	Blocked_Cutscene,
	Blocked_HostMigration,
	Blocked_PlayerInTransition,
	Blocked_PlayerInCharacterCreator,
	Blocked_CharacterNotSelected,
	Blocked_Underage,
	ActivityUnavailable,
	EUIErrorCode_MAX,
};

// Enum OnlineFramework.EMMRuleType
enum class EMMRuleType : uint8 {
	FromSave,
	General,
	Max_None,
	EMMRuleType_MAX,
};

// Enum OnlineFramework.ELoginState
enum class ELoginState : uint8 {
	LoginInProgress,
	LoggedOut,
	LoggedIn,
	ELoginState_MAX,
};

// ScriptStruct OnlineFramework.ActiveTitleConfigOverrideRow
// Size: 0x28 (Inherited: 0x08)
struct FActiveTitleConfigOverrideRow : FTableRowBase {
	struct FString TypeName; // 0x08(0x10)
	struct UDataTable* Target; // 0x18(0x08)
	struct UDataTable* Source; // 0x20(0x08)
};

// ScriptStruct OnlineFramework.TimeStampBuckets
// Size: 0x10 (Inherited: 0x00)
struct FTimeStampBuckets {
	struct TArray<struct FBuildTimeStamps> Buckets; // 0x00(0x10)
};

// ScriptStruct OnlineFramework.BuildTimeStamps
// Size: 0x20 (Inherited: 0x00)
struct FBuildTimeStamps {
	struct FString BucketName; // 0x00(0x10)
	struct TArray<struct FString> TimeStamps; // 0x10(0x10)
};

// ScriptStruct OnlineFramework.MatchmakingConfig
// Size: 0x38 (Inherited: 0x08)
struct FMatchmakingConfig : FTableRowBase {
	char UnknownData_8_0 : 7; // 0x08(0x01)
	bool bIsEnabled : 1; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bWaitBetweenSearchPhases : 1; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
	float TimeoutSeconds; // 0x0c(0x04)
	int32_t NumOfPhase; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct TArray<struct FMatchmakingRule> MMRules; // 0x18(0x10)
	char UnknownData_28[0x10]; // 0x28(0x10)
};

// ScriptStruct OnlineFramework.MatchmakingRule
// Size: 0x14 (Inherited: 0x00)
struct FMatchmakingRule {
	struct FName RuleName; // 0x00(0x08)
	enum class EMMRuleType RuleType; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	int32_t Range; // 0x0c(0x04)
	int32_t Phase; // 0x10(0x04)
};

// ScriptStruct OnlineFramework.PlayFabMatchmakingUserAttributes
// Size: 0x40 (Inherited: 0x00)
struct FPlayFabMatchmakingUserAttributes {
	struct FString SessionId; // 0x00(0x10)
	uint32_t TeamSize; // 0x10(0x04)
	uint32_t Backfilling; // 0x14(0x04)
	uint32_t MatchmakingUniqueValue; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString Key; // 0x20(0x10)
	struct FString PartyMemberId; // 0x30(0x10)
};

