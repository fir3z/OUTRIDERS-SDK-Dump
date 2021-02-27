// Class OnlineFramework.OnlinePlayerController
// Size: 0x648 (Inherited: 0x648)
struct AOnlinePlayerController : APlayerController {
};

// Class OnlineFramework.OnlineGameMode
// Size: 0x458 (Inherited: 0x3d8)
struct AOnlineGameMode : AGameMode {
	char UnknownData_3D8[0x80]; // 0x3d8(0x80)
};

// Class OnlineFramework.OnlineLocalPlayer
// Size: 0x2b0 (Inherited: 0x258)
struct UOnlineLocalPlayer : ULocalPlayer {
	char UnknownData_258[0x58]; // 0x258(0x58)
};

// Class OnlineFramework.HMLevelAsyncLoadingObject
// Size: 0x40 (Inherited: 0x28)
struct UHMLevelAsyncLoadingObject : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)

	void OnLevelProcessed(); // Function OnlineFramework.HMLevelAsyncLoadingObject.OnLevelProcessed // (Final|Native|Public) // @ game+0x36c49b0
};

// Class OnlineFramework.OnlineDbgCommComponent
// Size: 0x180 (Inherited: 0x180)
struct UOnlineDbgCommComponent : UActorComponent {

	void KillServer(); // Function OnlineFramework.OnlineDbgCommComponent.KillServer // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1662650
	void KillClients(); // Function OnlineFramework.OnlineDbgCommComponent.KillClients // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x15a7380
};

// Class OnlineFramework.OnlineFrameworkBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOnlineFrameworkBlueprintLibrary : UBlueprintFunctionLibrary {

	void RequestLoginRetry(struct APlayerController* Player); // Function OnlineFramework.OnlineFrameworkBlueprintLibrary.RequestLoginRetry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x36c4b00
	void RegisterOneTimeLoginFinishedCallback(struct APlayerController* Player, struct FDelegate Callback); // Function OnlineFramework.OnlineFrameworkBlueprintLibrary.RegisterOneTimeLoginFinishedCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x36c49d0
	void KickPlayerFromParty(struct UObject* WorldContextObject, struct APlayerController* InPlayerToKick, struct FText KickReason); // Function OnlineFramework.OnlineFrameworkBlueprintLibrary.KickPlayerFromParty // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x36c4870
	enum class ELoginState GetLoginState(struct APlayerController* Player); // Function OnlineFramework.OnlineFrameworkBlueprintLibrary.GetLoginState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x36c47f0
};

// Class OnlineFramework.OnlineFrameworkOnlineSession
// Size: 0x40 (Inherited: 0x28)
struct UOnlineFrameworkOnlineSession : UOnlineSession {
	char UnknownData_28[0x18]; // 0x28(0x18)
};

// Class OnlineFramework.OnlineGamesSearch
// Size: 0x38 (Inherited: 0x28)
struct UOnlineGamesSearch : UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)

	struct TArray<struct FString> GetFoundGames(); // Function OnlineFramework.OnlineGamesSearch.GetFoundGames // (Final|Native|Public|BlueprintCallable) // @ game+0x36c4710
};

// Class OnlineFramework.UserDialogRequest
// Size: 0xa0 (Inherited: 0x28)
struct UUserDialogRequest : UObject {
	struct FString Question; // 0x28(0x10)
	struct FString LeftButtonText; // 0x38(0x10)
	struct FString RightButtonText; // 0x48(0x10)
	struct APlayerController* PC; // 0x58(0x08)
	char UnknownData_60[0x40]; // 0x60(0x40)

	void Answered(bool bLeft); // Function OnlineFramework.UserDialogRequest.Answered // (Final|Native|Public|BlueprintCallable) // @ game+0x36c4680
};

// Class OnlineFramework.OnlineEvents
// Size: 0x28 (Inherited: 0x28)
struct UOnlineEvents : UObject {

	void OnUserDialogRequested(struct UUserDialogRequest* UserDialogRequestObject); // Function OnlineFramework.OnlineEvents.OnUserDialogRequested // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void HostMigrationStarted(); // Function OnlineFramework.OnlineEvents.HostMigrationStarted // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void HostMigrationFinished(bool bSuccess); // Function OnlineFramework.OnlineEvents.HostMigrationFinished // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
};

// Class OnlineFramework.OnlineSettings
// Size: 0x40 (Inherited: 0x28)
struct UOnlineSettings : UObject {
	struct FSoftClassPath OnlineEventsClassName; // 0x28(0x18)
};

// Class OnlineFramework.PCFNetConnection
// Size: 0x1b08 (Inherited: 0x1b00)
struct UPCFNetConnection : UIpConnection {
	char UnknownData_1B00_0 : 7; // 0x1b00(0x01)
	bool bIsPassthrough : 1; // 0x1b00(0x01)
	char UnknownData_1B01[0x7]; // 0x1b01(0x07)
};

// Class OnlineFramework.PCFNetDriver
// Size: 0x878 (Inherited: 0x870)
struct UPCFNetDriver : UIpNetDriver {
	char UnknownData_870[0x8]; // 0x870(0x08)
};

