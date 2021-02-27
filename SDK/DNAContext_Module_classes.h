// Class DNAContext_Module.DNAContext
// Size: 0x98 (Inherited: 0x28)
struct UDNAContext : UObject {
	char UnknownData_28[0x70]; // 0x28(0x70)

	bool SetFormatStrings(struct FString controlCurvesFormat, struct FString blendShapesFormat, struct FString mapMultipliersFormat); // Function DNAContext_Module.DNAContext.SetFormatStrings // (Final|Native|Public|BlueprintCallable) // @ game+0xc12a40
	bool SetDnaId(int32_t newId); // Function DNAContext_Module.DNAContext.SetDnaId // (Final|Native|Public|BlueprintCallable) // @ game+0xc129b0
	struct UDNAContext* MakeEmbeddedDnaContext(struct UObject* Outer); // Function DNAContext_Module.DNAContext.MakeEmbeddedDnaContext // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc12930
	bool AddDnaDatabases(struct TArray<struct FString> pathsFromContentFolderToDnaFile); // Function DNAContext_Module.DNAContext.AddDnaDatabases // (Final|Native|Public|BlueprintCallable) // @ game+0xc127b0
	bool AddDnaDatabase(struct FString pathFromContentFolderToDnaFile); // Function DNAContext_Module.DNAContext.AddDnaDatabase // (Final|Native|Public|BlueprintCallable) // @ game+0xc126c0
};

