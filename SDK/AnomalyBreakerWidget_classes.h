// WidgetBlueprintGeneratedClass AnomalyBreakerWidget.AnomalyBreakerWidget_C
// Size: 0x270 (Inherited: 0x230)
struct UAnomalyBreakerWidget_C : UMadUIAnomalyBreakerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* PreEnrageSkullAnim; // 0x238(0x08)
	struct UImage* EnrageDurationProgress; // 0x240(0x08)
	struct UImage* Skull_Icon; // 0x248(0x08)
	struct FLinearColor ChargingSkullColor; // 0x250(0x10)
	struct FLinearColor EnrageSkullColor; // 0x260(0x10)

	void SetAnomalyBreakerVisState(enum class EAnomalyBreakerVisState InAnomalyBreakerVisState); // Function AnomalyBreakerWidget.AnomalyBreakerWidget_C.SetAnomalyBreakerVisState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void SetEnragedDurationProgress(float InProgress); // Function AnomalyBreakerWidget.AnomalyBreakerWidget_C.SetEnragedDurationProgress // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_AnomalyBreakerWidget(int32_t EntryPoint); // Function AnomalyBreakerWidget.AnomalyBreakerWidget_C.ExecuteUbergraph_AnomalyBreakerWidget // (Final|UbergraphFunction) // @ game+0x1a35c70
};

