// Class OnlineSubsystemUtils.IpConnection
// Size: 0x1b00 (Inherited: 0x1a30)
struct UIpConnection : UNetConnection {
	char UnknownData_1A30[0x80]; // 0x1a30(0x80)
	float SocketErrorDisconnectDelay; // 0x1ab0(0x04)
	char UnknownData_1AB4[0x4c]; // 0x1ab4(0x4c)
};

// Class OnlineSubsystemUtils.IpNetDriver
// Size: 0x870 (Inherited: 0x800)
struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x800(0x01)
	char AllowPlayerPortUnreach : 1; // 0x800(0x01)
	char UnknownData_800_2 : 6; // 0x800(0x01)
	char UnknownData_801[0x3]; // 0x801(0x03)
	uint32_t MaxPortCountToTry; // 0x804(0x04)
	char UnknownData_808[0xc]; // 0x808(0x0c)
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x814(0x04)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x818(0x04)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x81c(0x04)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x820(0x04)
	char UnknownData_824[0x4]; // 0x824(0x04)
	double MaxSecondsInReceive; // 0x828(0x08)
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x830(0x04)
	float ResolutionConnectionTimeout; // 0x834(0x04)
	char UnknownData_838[0x38]; // 0x838(0x38)
};

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary {

	void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool bFoundID, float Progress); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb106b0
	void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool bFoundID, struct FText Title, struct FText LockedDescription, struct FText UnlockedDescription, bool bHidden); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb10360
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size: 0x68 (Inherited: 0x30)
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char UnknownData_50[0x18]; // 0x50(0x18)

	struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb0f1a0
	struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb0f0e0
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char UnknownData_50[0x30]; // 0x50(0x30)

	struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb10c10
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char UnknownData_50[0x28]; // 0x50(0x28)

	struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb0f260
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char UnknownData_50[0x48]; // 0x50(0x48)

	struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb0fa60
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char UnknownData_50[0x28]; // 0x50(0x28)

	struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb0fb90
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char UnknownData_50[0x30]; // 0x50(0x30)

	struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<None> MatchActor, struct FString MatchId, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb0fc50
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char UnknownData_50[0x28]; // 0x50(0x28)

	struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchId, struct TScriptInterface<None> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb0fe70
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size: 0x90 (Inherited: 0x30)
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char UnknownData_50[0x40]; // 0x50(0x40)

	struct FString GetServerName(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb10af0
	int32_t GetPingInMs(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb10a10
	int32_t GetMaxPlayers(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb10930
	int32_t GetCurrentPlayers(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xb10850
	struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb10020
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size: 0x88 (Inherited: 0x30)
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char UnknownData_50[0x38]; // 0x50(0x38)

	struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<None> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb10150
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Size: 0x88 (Inherited: 0x28)
struct UInAppPurchaseCallbackProxy : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char UnknownData_48[0x40]; // 0x48(0x40)

	struct UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb0f410
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Size: 0xb0 (Inherited: 0x28)
struct UInAppPurchaseCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char UnknownData_48[0x68]; // 0x48(0x68)

	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb0f9e0
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb0f720
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest2 ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb0f320
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Size: 0x98 (Inherited: 0x28)
struct UInAppPurchaseQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char UnknownData_48[0x50]; // 0x48(0x50)

	struct UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString> ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb0f610
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Size: 0x68 (Inherited: 0x28)
struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char UnknownData_48[0x20]; // 0x48(0x20)

	struct UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString> ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb0f500
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Size: 0x98 (Inherited: 0x28)
struct UInAppPurchaseRestoreCallbackProxy : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char UnknownData_48[0x50]; // 0x48(0x50)

	struct UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb0f8c0
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Size: 0xa8 (Inherited: 0x28)
struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char UnknownData_48[0x60]; // 0x48(0x60)

	struct UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb0f7a0
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size: 0x198 (Inherited: 0x30)
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char UnknownData_50[0x148]; // 0x50(0x148)

	struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb14970
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary {

	bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue); // Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb158e0
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size: 0x68 (Inherited: 0x28)
struct ULeaderboardFlushCallbackProxy : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char UnknownData_48[0x20]; // 0x48(0x20)

	struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb147f0
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size: 0x98 (Inherited: 0x28)
struct ULeaderboardQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate onSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x38(0x10)
	char UnknownData_48[0x50]; // 0x48(0x50)

	struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb148b0
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size: 0x68 (Inherited: 0x30)
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char UnknownData_50[0x18]; // 0x50(0x18)

	struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb14ad0
};

// Class OnlineSubsystemUtils.OnlineBeacon
// Size: 0x320 (Inherited: 0x2f0)
struct AOnlineBeacon : AActor {
	char UnknownData_2F0[0x8]; // 0x2f0(0x08)
	float BeaconConnectionInitialTimeout; // 0x2f8(0x04)
	float BeaconConnectionTimeout; // 0x2fc(0x04)
	struct UNetDriver* NetDriver; // 0x300(0x08)
	char UnknownData_308[0x18]; // 0x308(0x18)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size: 0x380 (Inherited: 0x320)
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* BeaconOwner; // 0x320(0x08)
	struct UNetConnection* BeaconConnection; // 0x328(0x08)
	enum class EBeaconConnectionState ConnectionState; // 0x330(0x01)
	char UnknownData_331[0x4f]; // 0x331(0x4f)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0xb14550
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size: 0x3d8 (Inherited: 0x320)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x320(0x04)
	char UnknownData_324[0x4]; // 0x324(0x04)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x328(0x10)
	char UnknownData_338[0xa0]; // 0x338(0xa0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size: 0x318 (Inherited: 0x2f0)
struct AOnlineBeaconHostObject : AActor {
	struct FString BeaconTypeName; // 0x2f0(0x10)
	struct AOnlineBeaconClient* ClientBeaconActorClass; // 0x300(0x08)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x308(0x10)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size: 0x128 (Inherited: 0x28)
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	struct FName VoiceSubsystemNameOverride; // 0x28(0x08)
	char UnknownData_30[0xf8]; // 0x30(0xf8)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x50 (Inherited: 0x38)
struct UOnlinePIESettings : UDeveloperSettings {
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool bOnlinePIEEnabled : 1; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x40(0x10)
};

// Class OnlineSubsystemUtils.OnlineSessionClient
// Size: 0x1f8 (Inherited: 0x28)
struct UOnlineSessionClient : UOnlineSession {
	char UnknownData_28[0x1c8]; // 0x28(0x1c8)
	char UnknownData_1F0_0 : 7; // 0x1f0(0x01)
	bool bIsFromInvite : 1; // 0x1f0(0x01)
	char UnknownData_1F1_0 : 7; // 0x1f1(0x01)
	bool bHandlingDisconnect : 1; // 0x1f1(0x01)
	char UnknownData_1F2[0x6]; // 0x1f2(0x06)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x440 (Inherited: 0x380)
struct APartyBeaconClient : AOnlineBeaconClient {
	char UnknownData_380[0x30]; // 0x380(0x30)
	struct FString DestSessionId; // 0x3b0(0x10)
	struct FPartyReservation PendingReservation; // 0x3c0(0x50)
	enum class EClientRequestType RequestType; // 0x410(0x01)
	char UnknownData_411_0 : 7; // 0x411(0x01)
	bool bPendingReservationSent : 1; // 0x411(0x01)
	char UnknownData_412_0 : 7; // 0x412(0x01)
	bool bCancelReservation : 1; // 0x412(0x01)
	char UnknownData_413[0x2d]; // 0x413(0x2d)

	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xb155a0
	void ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xb15130
	void ServerRemoveMemberFromReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xb14eb0
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xb14d50
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xb146d0
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xb14690
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xb14590
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xb14450
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size: 0x390 (Inherited: 0x318)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct UPartyBeaconState* State; // 0x318(0x08)
	char UnknownData_320[0x60]; // 0x320(0x60)
	char UnknownData_380_0 : 7; // 0x380(0x01)
	bool bLogoutOnSessionTimeout : 1; // 0x380(0x01)
	char UnknownData_381[0x3]; // 0x381(0x03)
	float SessionTimeoutSecs; // 0x384(0x04)
	float TravelSessionTimeoutSecs; // 0x388(0x04)
	char UnknownData_38C[0x4]; // 0x38c(0x04)
};

// Class OnlineSubsystemUtils.PartyBeaconState
// Size: 0x78 (Inherited: 0x28)
struct UPartyBeaconState : UObject {
	struct FName SessionName; // 0x28(0x08)
	int32_t NumConsumedReservations; // 0x30(0x04)
	int32_t MaxReservations; // 0x34(0x04)
	int32_t NumTeams; // 0x38(0x04)
	int32_t NumPlayersPerTeam; // 0x3c(0x04)
	struct FName TeamAssignmentMethod; // 0x40(0x08)
	int32_t ReservedHostTeamNum; // 0x48(0x04)
	int32_t ForceTeamNum; // 0x4c(0x04)
	char UnknownData_50_0 : 7; // 0x50(0x01)
	bool bRestrictCrossConsole : 1; // 0x50(0x01)
	char UnknownData_51_0 : 7; // 0x51(0x01)
	bool bEnableRemovalRequests : 1; // 0x51(0x01)
	char UnknownData_52[0x6]; // 0x52(0x06)
	struct TArray<struct FPartyReservation> Reservations; // 0x58(0x10)
	char UnknownData_68[0x10]; // 0x68(0x10)
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char UnknownData_50[0x28]; // 0x50(0x28)

	struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchId, enum class EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb14b90
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size: 0x60 (Inherited: 0x30)
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate onSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate onFailure; // 0x40(0x10)
	char UnknownData_50[0x10]; // 0x50(0x10)

	struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb15820
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size: 0x468 (Inherited: 0x380)
struct ASpectatorBeaconClient : AOnlineBeaconClient {
	char UnknownData_380[0x30]; // 0x380(0x30)
	struct FString DestSessionId; // 0x3b0(0x10)
	struct FSpectatorReservation PendingReservation; // 0x3c0(0x78)
	enum class ESpectatorClientRequestType RequestType; // 0x438(0x01)
	char UnknownData_439_0 : 7; // 0x439(0x01)
	bool bPendingReservationSent : 1; // 0x439(0x01)
	char UnknownData_43A_0 : 7; // 0x43a(0x01)
	bool bCancelReservation : 1; // 0x43a(0x01)
	char UnknownData_43B[0x2d]; // 0x43b(0x2d)

	void ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xb153b0
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0xb14d50
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xb14760
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xb146b0
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xb14610
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xb144d0
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size: 0x390 (Inherited: 0x318)
struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	struct USpectatorBeaconState* State; // 0x318(0x08)
	char UnknownData_320[0x60]; // 0x320(0x60)
	char UnknownData_380_0 : 7; // 0x380(0x01)
	bool bLogoutOnSessionTimeout : 1; // 0x380(0x01)
	char UnknownData_381[0x3]; // 0x381(0x03)
	float SessionTimeoutSecs; // 0x384(0x04)
	float TravelSessionTimeoutSecs; // 0x388(0x04)
	char UnknownData_38C[0x4]; // 0x38c(0x04)
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
// Size: 0x60 (Inherited: 0x28)
struct USpectatorBeaconState : UObject {
	struct FName SessionName; // 0x28(0x08)
	int32_t NumConsumedReservations; // 0x30(0x04)
	int32_t MaxReservations; // 0x34(0x04)
	char UnknownData_38_0 : 7; // 0x38(0x01)
	bool bRestrictCrossConsole : 1; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct TArray<struct FSpectatorReservation> Reservations; // 0x40(0x10)
	char UnknownData_50[0x10]; // 0x50(0x10)
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size: 0x380 (Inherited: 0x380)
struct ATestBeaconClient : AOnlineBeaconClient {

	void ServerPong(); // Function OnlineSubsystemUtils.TestBeaconClient.ServerPong // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xb14e60
	void ClientPing(); // Function OnlineSubsystemUtils.TestBeaconClient.ClientPing // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xb14570
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size: 0x318 (Inherited: 0x318)
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary {

	void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb16410
	void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchId, int32_t PlayerIndex, struct FString PlayerDisplayName); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb16200
	void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchId, int32_t PlayerIndex); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb16060
	void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchId, bool bIsMyTurn); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xb15ec0
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size: 0x800 (Inherited: 0x7a0)
struct UVoipListenerSynthComponent : USynthComponent {
	char UnknownData_7A0[0x60]; // 0x7a0(0x60)

	bool IsIdling(); // Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling // (Final|Native|Public|BlueprintCallable) // @ game+0xb163e0
};

