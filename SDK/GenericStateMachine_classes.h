// Class GenericStateMachine.BaseStateMachine
// Size: 0x60 (Inherited: 0x28)
struct UBaseStateMachine : UObject {
	char UnknownData_28[0x18]; // 0x28(0x18)
	struct TArray<struct UBaseState*> States; // 0x40(0x10)
	int32_t CurrentStateIdx; // 0x50(0x04)
	struct FName InitialStateName; // 0x54(0x08)
	char UnknownData_5C_0 : 7; // 0x5c(0x01)
	bool bAlwaysTickAllStates : 1; // 0x5c(0x01)
	char UnknownData_5D_0 : 7; // 0x5d(0x01)
	bool bApplyInitialStateOnce : 1; // 0x5d(0x01)
	char UnknownData_5E[0x2]; // 0x5e(0x02)

	void OnRep_CurrentStateIdx(); // Function GenericStateMachine.BaseStateMachine.OnRep_CurrentStateIdx // (Native|Protected) // @ game+0x337fcf0
	struct FName GetCurrentStateName(); // Function GenericStateMachine.BaseStateMachine.GetCurrentStateName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ac1480
	bool ChangeState(struct FName StateName); // Function GenericStateMachine.BaseStateMachine.ChangeState // (Final|Native|Public|BlueprintCallable) // @ game+0x3ac13f0
};

// Class GenericStateMachine.BaseState
// Size: 0x38 (Inherited: 0x28)
struct UBaseState : UObject {
	struct FName StateName; // 0x28(0x08)
	char UnknownData_30[0x8]; // 0x30(0x08)
};

