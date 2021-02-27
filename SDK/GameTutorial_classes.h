// Class GameTutorial.GameTutorialBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGameTutorialBPLibrary : UBlueprintFunctionLibrary {

	void ProgressTutorial(); // Function GameTutorial.GameTutorialBPLibrary.ProgressTutorial // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x367baf0
	void HighlightWidget(struct FName WidgetName, bool bHighlight); // Function GameTutorial.GameTutorialBPLibrary.HighlightWidget // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x367ba30
	struct UTutorialWrapper* GetNamedTutorialWrapper(struct FName WidgetName); // Function GameTutorial.GameTutorialBPLibrary.GetNamedTutorialWrapper // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x367b9b0
	struct UGameTutorialObject* GetActiveTutorial(); // Function GameTutorial.GameTutorialBPLibrary.GetActiveTutorial // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x367b980
};

// Class GameTutorial.GameTutorialObject
// Size: 0x48 (Inherited: 0x28)
struct UGameTutorialObject : UObject {
	struct TArray<struct FGameTutorialStage> Stages; // 0x28(0x10)
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct APlayerController* OwnerPC; // 0x40(0x08)

	void PrevStage(); // Function GameTutorial.GameTutorialObject.PrevStage // (Native|Public|BlueprintCallable) // @ game+0x16c68a0
	void OnTutorialFinished(); // Function GameTutorial.GameTutorialObject.OnTutorialFinished // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void NextStage(); // Function GameTutorial.GameTutorialObject.NextStage // (Native|Public|BlueprintCallable) // @ game+0x337fcf0
	void EndTutorial(); // Function GameTutorial.GameTutorialObject.EndTutorial // (Native|Public|BlueprintCallable) // @ game+0x156dc80
	void BeginTutorial(); // Function GameTutorial.GameTutorialObject.BeginTutorial // (Native|Public|BlueprintCallable) // @ game+0x156dca0
};

// Class GameTutorial.TutorialWrapper
// Size: 0x158 (Inherited: 0x120)
struct UTutorialWrapper : UContentWidget {
	struct FMulticastInlineDelegate OnBeginHighlight; // 0x120(0x10)
	struct FMulticastInlineDelegate OnEndHighlight; // 0x130(0x10)
	struct FName WrapperID; // 0x140(0x08)
	char UnknownData_148[0x10]; // 0x148(0x10)
};

