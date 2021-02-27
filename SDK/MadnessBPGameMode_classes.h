// BlueprintGeneratedClass MadnessBPGameMode.MadnessBPGameMode_C
// Size: 0x5b0 (Inherited: 0x4d0)
struct AMadnessBPGameMode_C : AMadGameMode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4d8(0x08)
	struct FMulticastInlineDelegate IntroMatineePlay; // 0x4e0(0x10)
	struct FMulticastInlineDelegate IntroMatineeFinished; // 0x4f0(0x10)
	struct FMulticastInlineDelegate SpawnEnemiesinPart1; // 0x500(0x10)
	struct FMulticastInlineDelegate MudWaterShake; // 0x510(0x10)
	struct FMulticastInlineDelegate TracksInTerrain; // 0x520(0x10)
	struct FMulticastInlineDelegate Snow Cut Intro; // 0x530(0x10)
	struct FMulticastInlineDelegate AbilityJumpFinished; // 0x540(0x10)
	struct FVector Airstrike Location; // 0x550(0x0c)
	char UnknownData_55C[0x4]; // 0x55c(0x04)
	struct FMulticastInlineDelegate AbilityJumpFall; // 0x560(0x10)
	struct FVector RocketJump Hit Location; // 0x570(0x0c)
	char UnknownData_57C[0x4]; // 0x57c(0x04)
	struct FMulticastInlineDelegate AbilityJumpEnd; // 0x580(0x10)
	struct FMulticastInlineDelegate ClientConnected; // 0x590(0x10)
	struct FMulticastInlineDelegate ClientDisconnected; // 0x5a0(0x10)

	void xxx(); // Function MadnessBPGameMode.MadnessBPGameMode_C.xxx // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Unload Part 1(); // Function MadnessBPGameMode.MadnessBPGameMode_C.Unload Part 1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Unload Part 2(); // Function MadnessBPGameMode.MadnessBPGameMode_C.Unload Part 2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Unload Part 4(); // Function MadnessBPGameMode.MadnessBPGameMode_C.Unload Part 4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Unload Part 5(); // Function MadnessBPGameMode.MadnessBPGameMode_C.Unload Part 5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void MakeMudWaterShake(); // Function MadnessBPGameMode.MadnessBPGameMode_C.MakeMudWaterShake // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void SpawnEnemyTrigger(); // Function MadnessBPGameMode.MadnessBPGameMode_C.SpawnEnemyTrigger // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void CreateTracksInTerrain(); // Function MadnessBPGameMode.MadnessBPGameMode_C.CreateTracksInTerrain // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void IntroFinished(); // Function MadnessBPGameMode.MadnessBPGameMode_C.IntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Load Outro(); // Function MadnessBPGameMode.MadnessBPGameMode_C.Load Outro // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Snow Cut - Intro  (); // Function MadnessBPGameMode.MadnessBPGameMode_C.Snow Cut - Intro   // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_PostLogin(struct APlayerController* NewPlayer); // Function MadnessBPGameMode.MadnessBPGameMode_C.K2_PostLogin // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void ReceiveBeginPlay(); // Function MadnessBPGameMode.MadnessBPGameMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void PlayIntro(); // Function MadnessBPGameMode.MadnessBPGameMode_C.PlayIntro // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnLogout(struct AController* ExitingController); // Function MadnessBPGameMode.MadnessBPGameMode_C.K2_OnLogout // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MadnessBPGameMode(int32_t EntryPoint); // Function MadnessBPGameMode.MadnessBPGameMode_C.ExecuteUbergraph_MadnessBPGameMode // (Final|UbergraphFunction) // @ game+0x1a35c70
	void ClientDisconnected__DelegateSignature(); // Function MadnessBPGameMode.MadnessBPGameMode_C.ClientDisconnected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ClientConnected__DelegateSignature(struct APlayerController* PlayerController); // Function MadnessBPGameMode.MadnessBPGameMode_C.ClientConnected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void AbilityJumpEnd__DelegateSignature(); // Function MadnessBPGameMode.MadnessBPGameMode_C.AbilityJumpEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void AbilityJumpFall__DelegateSignature(); // Function MadnessBPGameMode.MadnessBPGameMode_C.AbilityJumpFall__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void AbilityJumpFinished__DelegateSignature(); // Function MadnessBPGameMode.MadnessBPGameMode_C.AbilityJumpFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void Snow Cut Intro__DelegateSignature(); // Function MadnessBPGameMode.MadnessBPGameMode_C.Snow Cut Intro__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void TracksInTerrain__DelegateSignature(); // Function MadnessBPGameMode.MadnessBPGameMode_C.TracksInTerrain__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void MudWaterShake__DelegateSignature(); // Function MadnessBPGameMode.MadnessBPGameMode_C.MudWaterShake__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void SpawnEnemiesinPart1__DelegateSignature(); // Function MadnessBPGameMode.MadnessBPGameMode_C.SpawnEnemiesinPart1__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void IntroMatineeFinished__DelegateSignature(); // Function MadnessBPGameMode.MadnessBPGameMode_C.IntroMatineeFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void IntroMatineePlay__DelegateSignature(); // Function MadnessBPGameMode.MadnessBPGameMode_C.IntroMatineePlay__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
};

