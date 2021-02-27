// Enum Party.EJoinPartyDenialReason
enum class EJoinPartyDenialReason : uint8 {
	NoReason,
	Busy,
	PartyFull,
	GameFull,
	NotPartyLeader,
	PartyPrivate,
	NeedsTutorial,
	GameModeRestricted,
	JoinerCrossplayRestricted,
	MemberCrossplayRestricted,
	EJoinPartyDenialReason_MAX,
};

// Enum Party.EApprovalAction
enum class EApprovalAction : uint8 {
	Approve,
	Enqueue,
	EnqueueAndStartBeacon,
	Deny,
	EApprovalAction_MAX,
};

// Enum Party.EPartyJoinDenialReason
enum class EPartyJoinDenialReason : uint8 {
	NoReason,
	JoinAttemptAborted,
	Busy,
	OssUnavailable,
	PartyFull,
	GameFull,
	NotPartyLeader,
	PartyPrivate,
	JoinerCrossplayRestricted,
	MemberCrossplayRestricted,
	GameModeRestricted,
	Banned,
	NotLoggedIn,
	CheckingForRejoin,
	TargetUserMissingPresence,
	TargetUserUnjoinable,
	TargetUserAway,
	AlreadyLeaderInPlatformSession,
	TargetUserPlayingDifferentGame,
	TargetUserMissingPlatformSession,
	PlatformSessionMissingJoinInfo,
	FailedToStartFindConsoleSession,
	MissingPartyClassForTypeId,
	TargetUserBlocked,
	CustomReason0,
	CustomReason1,
	CustomReason2,
	CustomReason3,
	CustomReason4,
	CustomReason5,
	CustomReason6,
	CustomReason7,
	CustomReason8,
	CustomReason9,
	CustomReason10,
	CustomReason11,
	CustomReason12,
	CustomReason13,
	CustomReason14,
	CustomReason15,
	CustomReason16,
	CustomReason17,
	CustomReason18,
	CustomReason19,
	CustomReason20,
	CustomReason21,
	CustomReason22,
	CustomReason23,
	CustomReason24,
	CustomReason25,
	CustomReason26,
	CustomReason27,
	CustomReason28,
	CustomReason29,
	CustomReason30,
	CustomReason31,
	CustomReason32,
	CustomReason33,
	CustomReason34,
	CustomReason35,
	CustomReason36,
	CustomReason37,
	CustomReason38,
	CustomReason39,
	MAX,
};

// Enum Party.EPartyInviteRestriction
enum class EPartyInviteRestriction : uint8 {
	AnyMember,
	LeaderOnly,
	NoInvites,
	EPartyInviteRestriction_MAX,
};

// Enum Party.EPartyType
enum class EPartyType : uint8 {
	Public,
	FriendsOnly,
	Private,
	EPartyType_MAX,
};

// Enum Party.ESocialChannelType
enum class ESocialChannelType : uint8 {
	General,
	Founder,
	Party,
	Team,
	System,
	Private,
	ESocialChannelType_MAX,
};

// Enum Party.EPlatformIconDisplayRule
enum class EPlatformIconDisplayRule : uint8 {
	Always,
	AlwaysIfDifferent,
	AlwaysWhenInCrossplayParty,
	AlwaysIfDifferentWhenInCrossplayParty,
	Never,
	EPlatformIconDisplayRule_MAX,
};

// Enum Party.ECrossplayPreference
enum class ECrossplayPreference : uint8 {
	NoSelection,
	OptedIn,
	OptedOut,
	OptedOutRestricted,
	ECrossplayPreference_MAX,
};

// Enum Party.ESocialRelationship
enum class ESocialRelationship : uint8 {
	Any,
	FriendInviteReceived,
	FriendInviteSent,
	PartyInvite,
	Friend,
	BlockedPlayer,
	SuggestedFriend,
	RecentPlayer,
	ESocialRelationship_MAX,
};

// Enum Party.ESocialSubsystem
enum class ESocialSubsystem : uint8 {
	Primary,
	Platform,
	MAX,
};

// ScriptStruct Party.PartyState
// Size: 0x10 (Inherited: 0x00)
struct FPartyState {
	char UnknownData_0[0x8]; // 0x00(0x08)
	enum class EPartyType PartyType; // 0x08(0x01)
	char UnknownData_9_0 : 7; // 0x09(0x01)
	bool bFr : 1; // 0x09(0x01)
	char UnknownData_A_0 : 7; // 0x0a(0x01)
	bool bInvOnly : 1; // 0x0a(0x01)
	char UnknownData_B_0 : 7; // 0x0b(0x01)
	bool bNoInv : 1; // 0x0b(0x01)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Party.OnlinePartyRepDataBase
// Size: 0x18 (Inherited: 0x00)
struct FOnlinePartyRepDataBase {
	char UnknownData_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Party.PartyMemberRepData
// Size: 0x140 (Inherited: 0x18)
struct FPartyMemberRepData : FOnlinePartyRepDataBase {
	char UnknownData_18[0x8]; // 0x18(0x08)
	struct FUserPlatform Platform; // 0x20(0x20)
	char UnknownData_40[0x30]; // 0x40(0x30)
	struct FUniqueNetIdRepl PlatformUniqueId; // 0x70(0x28)
	char UnknownData_98[0x30]; // 0x98(0x30)
	struct FString PlatformSessionId; // 0xc8(0x10)
	char UnknownData_D8[0x30]; // 0xd8(0x30)
	enum class ECrossplayPreference CrossplayPreference; // 0x108(0x01)
	char UnknownData_109[0x37]; // 0x109(0x37)
};

// ScriptStruct Party.UserPlatform
// Size: 0x20 (Inherited: 0x00)
struct FUserPlatform {
	struct FSocialPlatformDescription PlatformDescription; // 0x00(0x20)
};

// ScriptStruct Party.SocialPlatformDescription
// Size: 0x20 (Inherited: 0x00)
struct FSocialPlatformDescription {
	struct FString SocialPlatformTypeName; // 0x00(0x10)
	struct FString SocialPlatformName; // 0x10(0x10)
};

// ScriptStruct Party.PartyMemberRepState
// Size: 0x08 (Inherited: 0x00)
struct FPartyMemberRepState {
	char UnknownData_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Party.PartyPrivacySettings
// Size: 0x03 (Inherited: 0x00)
struct FPartyPrivacySettings {
	enum class EPartyType PartyType; // 0x00(0x01)
	enum class EPartyInviteRestriction PartyInviteRestriction; // 0x01(0x01)
	char UnknownData_2_0 : 7; // 0x02(0x01)
	bool bOnlyLeaderFriendsCanJoin : 1; // 0x02(0x01)
};

// ScriptStruct Party.PartyPlatformSessionInfo
// Size: 0x40 (Inherited: 0x00)
struct FPartyPlatformSessionInfo {
	struct FName OssName; // 0x00(0x08)
	struct FString SessionId; // 0x08(0x10)
	struct FUniqueNetIdRepl OwnerPrimaryId; // 0x18(0x28)
};

// ScriptStruct Party.SocialChatChannelConfig
// Size: 0x40 (Inherited: 0x00)
struct FSocialChatChannelConfig {
	struct USocialUser* SocialUser; // 0x00(0x08)
	char UnknownData_8[0x10]; // 0x08(0x10)
	struct TArray<struct USocialChatChannel*> ListenChannels; // 0x18(0x10)
	char UnknownData_28[0x18]; // 0x28(0x18)
};

// ScriptStruct Party.PartyRepData
// Size: 0x80 (Inherited: 0x18)
struct FPartyRepData : FOnlinePartyRepDataBase {
	char UnknownData_18[0x8]; // 0x18(0x08)
	struct FPartyPrivacySettings PrivacySettings; // 0x20(0x03)
	char UnknownData_23[0x35]; // 0x23(0x35)
	struct TArray<struct FPartyPlatformSessionInfo> PlatformSessions; // 0x58(0x10)
	char UnknownData_68[0x18]; // 0x68(0x18)
};

