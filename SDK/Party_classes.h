// Class Party.Chatroom
// Size: 0x58 (Inherited: 0x28)
struct UChatroom : UObject {
	struct FString CurrentChatRoomId; // 0x28(0x10)
	int32_t MaxChatRoomRetries; // 0x38(0x04)
	int32_t NumChatRoomRetries; // 0x3c(0x04)
	char UnknownData_40[0x18]; // 0x40(0x18)
};

// Class Party.Party
// Size: 0x270 (Inherited: 0x28)
struct UParty : UObject {
	char UnknownData_28[0x80]; // 0x28(0x80)
	int32_t DefaultMaxPartySize; // 0xa8(0x04)
	char UnknownData_AC[0x14]; // 0xac(0x14)
	char UnknownData_C0_0 : 7; // 0xc0(0x01)
	bool bLeavingPersistentParty : 1; // 0xc0(0x01)
	char UnknownData_C1[0x1af]; // 0xc1(0x1af)
};

// Class Party.PartyGameState
// Size: 0x330 (Inherited: 0x28)
struct UPartyGameState : UObject {
	struct UScriptStruct* PartyStateRefDef; // 0x28(0x08)
	char UnknownData_30[0x8]; // 0x30(0x08)
	struct FUniqueNetIdRepl OwningUserId; // 0x38(0x28)
	char UnknownData_60[0x50]; // 0x60(0x50)
	char UnknownData_B0_0 : 7; // 0xb0(0x01)
	bool bDebugAcceptingMembers : 1; // 0xb0(0x01)
	char UnknownData_B1[0x18]; // 0xb1(0x18)
	char UnknownData_C9_0 : 7; // 0xc9(0x01)
	bool bStayWithPartyOnDisconnect : 1; // 0xc9(0x01)
	char UnknownData_CA[0x6]; // 0xca(0x06)
	struct UPartyMemberState* PartyMemberStateClass; // 0xd0(0x08)
	char UnknownData_D8[0x170]; // 0xd8(0x170)
	struct APartyBeaconClient* ReservationBeaconClientClass; // 0x248(0x08)
	struct APartyBeaconClient* ReservationBeaconClient; // 0x250(0x08)
	char UnknownData_258[0xd8]; // 0x258(0xd8)
};

// Class Party.SocialManager
// Size: 0x1a0 (Inherited: 0x28)
struct USocialManager : UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
	struct TArray<struct USocialToolkit*> SocialToolkits; // 0x48(0x10)
	struct USocialDebugTools* SocialDebugTools; // 0x58(0x08)
	char UnknownData_60[0x140]; // 0x60(0x140)
};

// Class Party.SocialParty
// Size: 0x2a0 (Inherited: 0x28)
struct USocialParty : UObject {
	char UnknownData_28[0x30]; // 0x28(0x30)
	struct APartyBeaconClient* ReservationBeaconClientClass; // 0x58(0x08)
	struct ASpectatorBeaconClient* SpectatorBeaconClientClass; // 0x60(0x08)
	char UnknownData_68[0x10]; // 0x68(0x10)
	struct FUniqueNetIdRepl OwningLocalUserId; // 0x78(0x28)
	struct FUniqueNetIdRepl CurrentLeaderId; // 0xa0(0x28)
	struct TMap<struct FUniqueNetIdRepl, struct UPartyMember*> PartyMembersById; // 0xc8(0x50)
	char UnknownData_118_0 : 7; // 0x118(0x01)
	bool bEnableAutomaticPartyRejoin : 1; // 0x118(0x01)
	char UnknownData_119[0x77]; // 0x119(0x77)
	struct APartyBeaconClient* ReservationBeaconClient; // 0x190(0x08)
	char UnknownData_198[0x8]; // 0x198(0x08)
	struct ASpectatorBeaconClient* SpectatorBeaconClient; // 0x1a0(0x08)
	char UnknownData_1A8[0xf8]; // 0x1a8(0xf8)
};

// Class Party.PartyMember
// Size: 0xf0 (Inherited: 0x28)
struct UPartyMember : UObject {
	char UnknownData_28[0x40]; // 0x28(0x40)
	struct USocialUser* SocialUser; // 0x68(0x08)
	char UnknownData_70[0x80]; // 0x70(0x80)
};

// Class Party.PartyMemberState
// Size: 0x88 (Inherited: 0x28)
struct UPartyMemberState : UObject {
	struct FUniqueNetIdRepl UniqueId; // 0x28(0x28)
	struct FText DisplayName; // 0x50(0x18)
	struct UScriptStruct* MemberStateRefDef; // 0x68(0x08)
	char UnknownData_70[0x10]; // 0x70(0x10)
	char UnknownData_80_0 : 7; // 0x80(0x01)
	bool bHasAnnouncedJoin : 1; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)

	bool IsPartyLeader(); // Function Party.PartyMemberState.IsPartyLeader // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8a410
	bool IsLocalPlayer(); // Function Party.PartyMemberState.IsLocalPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8a3e0
};

// Class Party.SocialToolkit
// Size: 0x1f0 (Inherited: 0x28)
struct USocialToolkit : UObject {
	char UnknownData_28[0x38]; // 0x28(0x38)
	struct USocialUser* LocalUser; // 0x60(0x08)
	struct TArray<struct USocialUser*> AllUsers; // 0x68(0x10)
	char UnknownData_78[0x50]; // 0x78(0x50)
	struct ULocalPlayer* LocalPlayerOwner; // 0xc8(0x08)
	struct USocialChatManager* SocialChatManager; // 0xd0(0x08)
	char UnknownData_D8[0x118]; // 0xd8(0x118)
};

// Class Party.SocialChatManager
// Size: 0x220 (Inherited: 0x28)
struct USocialChatManager : UObject {
	char UnknownData_28[0x50]; // 0x28(0x50)
	struct TMap<struct FWeakObjectPtr<struct USocialUser>, struct USocialPrivateMessageChannel*> DirectChannelsByTargetUser; // 0x78(0x50)
	struct TMap<struct FString, struct USocialChatRoom*> ChatRoomsById; // 0xc8(0x50)
	struct TMap<struct FString, struct USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName; // 0x118(0x50)
	char UnknownData_168_0 : 7; // 0x168(0x01)
	bool bEnableChatSlashCommands : 1; // 0x168(0x01)
	char UnknownData_169[0x7]; // 0x169(0x07)
	struct TMap<struct FUniqueNetIdRepl, struct USocialGroupChannel*> GroupChannels; // 0x170(0x50)
	char UnknownData_1C0[0x60]; // 0x1c0(0x60)
};

// Class Party.SocialChatChannel
// Size: 0xe8 (Inherited: 0x28)
struct USocialChatChannel : UObject {
	char UnknownData_28[0xc0]; // 0x28(0xc0)
};

// Class Party.SocialChatRoom
// Size: 0xf8 (Inherited: 0xe8)
struct USocialChatRoom : USocialChatChannel {
	char UnknownData_E8[0x10]; // 0xe8(0x10)
};

// Class Party.SocialDebugTools
// Size: 0x88 (Inherited: 0x28)
struct USocialDebugTools : UObject {
	char UnknownData_28[0x60]; // 0x28(0x60)
};

// Class Party.SocialGroupChannel
// Size: 0x90 (Inherited: 0x28)
struct USocialGroupChannel : UObject {
	struct USocialUser* SocialUser; // 0x28(0x08)
	struct FUniqueNetIdRepl GroupId; // 0x30(0x28)
	struct FText DisplayName; // 0x58(0x18)
	struct TArray<struct USocialUser*> Members; // 0x70(0x10)
	char UnknownData_80[0x10]; // 0x80(0x10)
};

// Class Party.SocialPartyChatRoom
// Size: 0xf8 (Inherited: 0xf8)
struct USocialPartyChatRoom : USocialChatRoom {
};

// Class Party.SocialPrivateMessageChannel
// Size: 0xf0 (Inherited: 0xe8)
struct USocialPrivateMessageChannel : USocialChatChannel {
	struct USocialUser* TargetUser; // 0xe8(0x08)
};

// Class Party.SocialReadOnlyChatChannel
// Size: 0xe8 (Inherited: 0xe8)
struct USocialReadOnlyChatChannel : USocialChatChannel {
};

// Class Party.SocialSettings
// Size: 0x60 (Inherited: 0x28)
struct USocialSettings : UObject {
	struct TArray<struct FName> OssNamesWithEnvironmentIdPrefix; // 0x28(0x10)
	int32_t DefaultMaxPartySize; // 0x38(0x04)
	char UnknownData_3C_0 : 7; // 0x3c(0x01)
	bool bPreferPlatformInvites : 1; // 0x3c(0x01)
	char UnknownData_3D_0 : 7; // 0x3d(0x01)
	bool bMustSendPrimaryInvites : 1; // 0x3d(0x01)
	char UnknownData_3E_0 : 7; // 0x3e(0x01)
	bool bLeavePartyOnDisconnect : 1; // 0x3e(0x01)
	char UnknownData_3F[0x1]; // 0x3f(0x01)
	float UserListAutoUpdateRate; // 0x40(0x04)
	int32_t MinNicknameLength; // 0x44(0x04)
	int32_t MaxNicknameLength; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FSocialPlatformDescription> SocialPlatformDescriptions; // 0x50(0x10)
};

// Class Party.SocialUser
// Size: 0x168 (Inherited: 0x28)
struct USocialUser : UObject {
	char UnknownData_28[0x140]; // 0x28(0x140)
};

