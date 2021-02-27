// Class Lobby.LobbyBeaconClient
// Size: 0x408 (Inherited: 0x380)
struct ALobbyBeaconClient : AOnlineBeaconClient {
	struct ALobbyBeaconState* LobbyState; // 0x380(0x08)
	struct ALobbyBeaconPlayerState* PlayerState; // 0x388(0x08)
	char UnknownData_390[0x1]; // 0x390(0x01)
	enum class ELobbyBeaconJoinState LobbyJoinServerState; // 0x391(0x01)
	char UnknownData_392[0x76]; // 0x392(0x76)

	void ServerSetPartyOwner(struct FUniqueNetIdRepl InUniqueId, struct FUniqueNetIdRepl InPartyOwnerId); // Function Lobby.LobbyBeaconClient.ServerSetPartyOwner // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xc92e40
	void ServerNotifyJoiningServer(); // Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xc92df0
	void ServerLoginPlayer(struct FString InSessionId, struct FUniqueNetIdRepl InUniqueId, struct FString UrlString); // Function Lobby.LobbyBeaconClient.ServerLoginPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xc92c40
	void ServerKickPlayer(struct FUniqueNetIdRepl PlayerToKick, struct FText Reason); // Function Lobby.LobbyBeaconClient.ServerKickPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xc92ab0
	void ServerDisconnectFromLobby(); // Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xc92a60
	void ServerCheat(struct FString Msg); // Function Lobby.LobbyBeaconClient.ServerCheat // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xc929a0
	void ClientWasKicked(struct FText KickReason); // Function Lobby.LobbyBeaconClient.ClientWasKicked // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xc92840
	void ClientSetInviteFlags(struct FJoinabilitySettings Settings); // Function Lobby.LobbyBeaconClient.ClientSetInviteFlags // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xc927b0
	void ClientPlayerLeft(struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerLeft // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xc926c0
	void ClientPlayerJoined(struct FText NewPlayerName, struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerJoined // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xc92550
	void ClientLoginComplete(struct FUniqueNetIdRepl InUniqueId, bool bWasSuccessful); // Function Lobby.LobbyBeaconClient.ClientLoginComplete // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xc92420
	void ClientJoinGame(); // Function Lobby.LobbyBeaconClient.ClientJoinGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xc92400
	void ClientAckJoiningServer(); // Function Lobby.LobbyBeaconClient.ClientAckJoiningServer // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xb14690
};

// Class Lobby.LobbyBeaconHost
// Size: 0x350 (Inherited: 0x318)
struct ALobbyBeaconHost : AOnlineBeaconHostObject {
	char UnknownData_318[0x8]; // 0x318(0x08)
	SoftClassProperty LobbyStateClass; // 0x320(0x28)
	struct ALobbyBeaconState* LobbyState; // 0x348(0x08)
};

// Class Lobby.LobbyBeaconPlayerState
// Size: 0x3b0 (Inherited: 0x2f0)
struct ALobbyBeaconPlayerState : AInfo {
	struct FText DisplayName; // 0x2f0(0x18)
	struct FUniqueNetIdRepl UniqueId; // 0x308(0x28)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x330(0x28)
	char UnknownData_358_0 : 7; // 0x358(0x01)
	bool bInLobby : 1; // 0x358(0x01)
	char UnknownData_359[0x7]; // 0x359(0x07)
	struct AOnlineBeaconClient* ClientActor; // 0x360(0x08)
	char UnknownData_368[0x48]; // 0x368(0x48)

	void OnRep_UniqueId(); // Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId // (Final|Native|Protected) // @ game+0xc92960
	void OnRep_PartyOwner(); // Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner // (Final|Native|Protected) // @ game+0xc92940
	void OnRep_InLobby(); // Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby // (Final|Native|Protected) // @ game+0xc92900
};

// Class Lobby.LobbyBeaconState
// Size: 0x498 (Inherited: 0x2f0)
struct ALobbyBeaconState : AInfo {
	int32_t MaxPlayers; // 0x2f0(0x04)
	char UnknownData_2F4[0x4]; // 0x2f4(0x04)
	struct ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x2f8(0x08)
	char UnknownData_300[0x8]; // 0x300(0x08)
	char UnknownData_308_0 : 7; // 0x308(0x01)
	bool bLobbyStarted : 1; // 0x308(0x01)
	char UnknownData_309[0x3]; // 0x309(0x03)
	float WaitForPlayersTimeRemaining; // 0x30c(0x04)
	struct FLobbyPlayerStateInfoArray Players; // 0x310(0x120)
	char UnknownData_430[0x68]; // 0x430(0x68)

	void OnRep_WaitForPlayersTimeRemaining(); // Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining // (Final|Native|Protected) // @ game+0xc92980
	void OnRep_LobbyStarted(); // Function Lobby.LobbyBeaconState.OnRep_LobbyStarted // (Final|Native|Protected) // @ game+0xc92920
};

