// Class GameplayTasks.GameplayTasksComponent
// Size: 0x1f0 (Inherited: 0x180)
struct UGameplayTasksComponent : UActorComponent {
	char UnknownData_180[0xc]; // 0x180(0x0c)
	char UnknownData_18C_0 : 1; // 0x18c(0x01)
	char bIsNetDirty : 1; // 0x18c(0x01)
	char UnknownData_18C_2 : 6; // 0x18c(0x01)
	char UnknownData_18D[0x3]; // 0x18d(0x03)
	struct TArray<struct UGameplayTask*> SimulatedTasks; // 0x190(0x10)
	struct TArray<struct UGameplayTask*> TaskPriorityQueue; // 0x1a0(0x10)
	char UnknownData_1B0[0x10]; // 0x1b0(0x10)
	struct TArray<struct UGameplayTask*> TickingTasks; // 0x1c0(0x10)
	struct TArray<struct UGameplayTask*> KnownTasks; // 0x1d0(0x10)
	struct FMulticastInlineDelegate OnClaimedResourcesChange; // 0x1e0(0x10)

	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks // (Final|Native|Public) // @ game+0x2a7bbc0
	enum class EGameplayTaskRunResult K2_RunGameplayTask(struct TScriptInterface<None> TaskOwner, struct UGameplayTask* Task, enum class None Priority, struct TArray<struct UGameplayTaskResource*> AdditionalRequiredResources, struct TArray<struct UGameplayTaskResource*> AdditionalClaimedResources); // Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2a7b980
};

// Class GameplayTasks.GameplayTask
// Size: 0x68 (Inherited: 0x28)
struct UGameplayTask : UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FName InstanceName; // 0x30(0x08)
	char UnknownData_38[0x2]; // 0x38(0x02)
	enum class ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3a(0x01)
	char UnknownData_3B[0x25]; // 0x3b(0x25)
	struct UGameplayTask* ChildTask; // 0x60(0x08)

	void ReadyForActivation(); // Function GameplayTasks.GameplayTask.ReadyForActivation // (Final|Native|Public|BlueprintCallable) // @ game+0x2a7bbe0
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
	void EndTask(); // Function GameplayTasks.GameplayTask.EndTask // (Final|Native|Public|BlueprintCallable) // @ game+0x2a7b890
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x68 (Inherited: 0x68)
struct UGameplayTask_ClaimResource : UGameplayTask {

	struct UGameplayTask_ClaimResource* ClaimResources(struct TScriptInterface<None> InTaskOwner, struct TArray<struct UGameplayTaskResource*> ResourceClasses, enum class None Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2a7b6e0
	struct UGameplayTask_ClaimResource* ClaimResource(struct TScriptInterface<None> InTaskOwner, struct UGameplayTaskResource* ResourceClass, enum class None Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2a7b590
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xa8 (Inherited: 0x68)
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastInlineDelegate Success; // 0x68(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x78(0x10)
	char UnknownData_88[0x18]; // 0x88(0x18)
	struct AActor* ClassToSpawn; // 0xa0(0x08)

	struct UGameplayTask_SpawnActor* SpawnActor(struct TScriptInterface<None> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct AActor* Class, bool bSpawnOnlyOnAuthority); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x2a7bc00
	void FinishSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor // (Native|Public|BlueprintCallable) // @ game+0x2a7b8b0
	bool BeginSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2a7b4b0
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0x98 (Inherited: 0x68)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastInlineDelegate OnFinished; // 0x68(0x10)
	struct FMulticastInlineDelegate OnTimeExpired; // 0x78(0x10)
	char UnknownData_88[0x10]; // 0x88(0x10)
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x80 (Inherited: 0x68)
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastInlineDelegate OnFinish; // 0x68(0x10)
	char UnknownData_78[0x8]; // 0x78(0x08)

	struct UGameplayTask_WaitDelay* TaskWaitDelay(struct TScriptInterface<None> TaskOwner, float Time, enum class None Priority); // Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x2a7bdb0
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a35c70
};

// Class GameplayTasks.GameplayTaskOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameplayTaskOwnerInterface : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x38 (Inherited: 0x28)
struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; // 0x28(0x04)
	int8_t AutoResourceID; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	char bManuallySetID : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

