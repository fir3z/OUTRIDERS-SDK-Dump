// Class SignificanceManager.DelayedTaskHelper
// Size: 0x28 (Inherited: 0x28)
struct UDelayedTaskHelper : UObject {

	void DestroyActorWithDelayedTask(struct AActor* TargetActor); // Function SignificanceManager.DelayedTaskHelper.DestroyActorWithDelayedTask // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x29b5500
	void AddBlueprintDelayedTaskForActor(struct AActor* Instigator, struct AActor* TargetActor, int32_t Optional1, float Optional2, float Optional3, struct FDelegate TaskDelegate, struct FDelegate TaskExecutedDelegate, bool bNeedToBeDoneImmediately, enum class ETaskSignificance TaskSignificance, bool bCanBeSkipped, float ExpirationTime, float InitialDelay); // Function SignificanceManager.DelayedTaskHelper.AddBlueprintDelayedTaskForActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x29b50a0
	void AddBlueprintDelayedTask(struct AActor* Instigator, struct FDelegate TaskDelegate, struct FDelegate TaskExecutedDelegate, bool bNeedToBeDoneImmediately, enum class ETaskSignificance TaskSignificance, bool bCanBeSkipped, float ExpirationTime, float InitialDelay); // Function SignificanceManager.DelayedTaskHelper.AddBlueprintDelayedTask // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x29b4d50
};

// Class SignificanceManager.SignificanceManager
// Size: 0x490 (Inherited: 0x28)
struct USignificanceManager : UObject {
	char UnknownData_28[0x2d8]; // 0x28(0x2d8)
	struct FSoftClassPath SignificanceManagerClassName; // 0x300(0x18)
	char UnknownData_318[0x178]; // 0x318(0x178)
};

