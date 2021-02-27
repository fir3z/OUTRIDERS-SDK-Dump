// BlueprintGeneratedClass Initial_P.Initial_P_C
// Size: 0x368 (Inherited: 0x2f8)
struct AInitial_P_C : ABaseLevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	char UnknownData_300_0 : 7; // 0x300(0x01)
	bool PartyLight : 1; // 0x300(0x01)
	char UnknownData_301[0x7]; // 0x301(0x07)
	struct UAudioComponent* MenuMusic; // 0x308(0x08)
	struct AMadLobbyActor* MadLobbyActor_1_ExecuteUbergraph_Initial_P_RefProperty; // 0x310(0x08)
	struct ANote* SpawnLocation_1_ExecuteUbergraph_Initial_P_RefProperty; // 0x318(0x08)
	struct ANote* SpawnLocation_2_ExecuteUbergraph_Initial_P_RefProperty; // 0x320(0x08)
	struct ANote* SpawnLocation_3_ExecuteUbergraph_Initial_P_RefProperty; // 0x328(0x08)
	struct ANote* SpawnLocation_4_ExecuteUbergraph_Initial_P_RefProperty; // 0x330(0x08)
	struct ACameraActor* PartyScreen_ExecuteUbergraph_Initial_P_RefProperty; // 0x338(0x08)
	struct ACameraActor* CharacterCreation_ExecuteUbergraph_Initial_P_RefProperty; // 0x340(0x08)
	struct ACameraActor* CharacterSelection_ExecuteUbergraph_Initial_P_RefProperty; // 0x348(0x08)
	struct ABP_LobbyPreviewTruck_C* BP_LobbyPreviewTruck3_ExecuteUbergraph_Initial_P_RefProperty; // 0x350(0x08)
	struct ASpotLight* 01_char_FaceDirectRight_EdGraph_0_RefProperty; // 0x358(0x08)
	struct ASpotLight* 01_PARTY_FaceDirectRight2_EdGraph_0_RefProperty; // 0x360(0x08)

	void UpdateLobbyLight(bool PartyLight); // Function Initial_P.Initial_P_C.UpdateLobbyLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnRegionStarted(enum class ERegionStartedState StartedState, struct UStreamableCinematic* PassedCinematic); // Function Initial_P.Initial_P_C.OnRegionStarted // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnLobbyStateChangedEvent(enum class EMadLobbyState NewState); // Function Initial_P.Initial_P_C.OnLobbyStateChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Initial_P.Initial_P_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void ReceiveBeginPlay(); // Function Initial_P.Initial_P_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_Initial_P(int32_t EntryPoint); // Function Initial_P.Initial_P_C.ExecuteUbergraph_Initial_P // (Final|UbergraphFunction) // @ game+0x1a35c70
};

