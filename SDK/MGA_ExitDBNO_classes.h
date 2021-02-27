// BlueprintGeneratedClass MGA_ExitDBNO.MGA_ExitDBNO_C
// Size: 0x4e0 (Inherited: 0x4b8)
struct UMGA_ExitDBNO_C : UMadGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UMadAbilityTask_PlayMontageAndWaitNotifyName* CurrentMontatage; // 0x4c0(0x08)
	struct UAbilityTask_WaitDelay* DelayTask; // 0x4c8(0x08)
	struct AMadBaseCharacter* RevivedPlayer; // 0x4d0(0x08)
	struct AActor* Instigator; // 0x4d8(0x08)

	void OnNotifyEnd_DD4EEC144E0DEC6B75B1AC874B201612(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnNotifyEnd_DD4EEC144E0DEC6B75B1AC874B201612 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyBegin_DD4EEC144E0DEC6B75B1AC874B201612(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnNotifyBegin_DD4EEC144E0DEC6B75B1AC874B201612 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCancelled_DD4EEC144E0DEC6B75B1AC874B201612(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnCancelled_DD4EEC144E0DEC6B75B1AC874B201612 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInterrupted_DD4EEC144E0DEC6B75B1AC874B201612(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnInterrupted_DD4EEC144E0DEC6B75B1AC874B201612 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnComplete_DD4EEC144E0DEC6B75B1AC874B201612(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnComplete_DD4EEC144E0DEC6B75B1AC874B201612 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void EventReceived_FFF2539A401C99814058359EB171746E(struct FGameplayEventData payload); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.EventReceived_FFF2539A401C99814058359EB171746E // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void EventReceived_399037BC4A181944A2AB30A16DAF028C(struct FGameplayEventData payload); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.EventReceived_399037BC4A181944A2AB30A16DAF028C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyEnd_5DB4017B46287FAAE465C9B6F520C6CE(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnNotifyEnd_5DB4017B46287FAAE465C9B6F520C6CE // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyBegin_5DB4017B46287FAAE465C9B6F520C6CE(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnNotifyBegin_5DB4017B46287FAAE465C9B6F520C6CE // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCancelled_5DB4017B46287FAAE465C9B6F520C6CE(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnCancelled_5DB4017B46287FAAE465C9B6F520C6CE // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInterrupted_5DB4017B46287FAAE465C9B6F520C6CE(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnInterrupted_5DB4017B46287FAAE465C9B6F520C6CE // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnComplete_5DB4017B46287FAAE465C9B6F520C6CE(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnComplete_5DB4017B46287FAAE465C9B6F520C6CE // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyEnd_40B6DC1D411F4D88B90DD09A0D050B50(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnNotifyEnd_40B6DC1D411F4D88B90DD09A0D050B50 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnNotifyBegin_40B6DC1D411F4D88B90DD09A0D050B50(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnNotifyBegin_40B6DC1D411F4D88B90DD09A0D050B50 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCancelled_40B6DC1D411F4D88B90DD09A0D050B50(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnCancelled_40B6DC1D411F4D88B90DD09A0D050B50 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnInterrupted_40B6DC1D411F4D88B90DD09A0D050B50(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnInterrupted_40B6DC1D411F4D88B90DD09A0D050B50 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnComplete_40B6DC1D411F4D88B90DD09A0D050B50(struct FName NotifyName); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnComplete_40B6DC1D411F4D88B90DD09A0D050B50 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnFinish_0B376BD44222E687A797E582CFCB0DA5(); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.OnFinish_0B376BD44222E687A797E582CFCB0DA5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a35c70
	void K2_OnEndAbility(bool bWasCancelled); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MGA_ExitDBNO(int32_t EntryPoint); // Function MGA_ExitDBNO.MGA_ExitDBNO_C.ExecuteUbergraph_MGA_ExitDBNO // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

