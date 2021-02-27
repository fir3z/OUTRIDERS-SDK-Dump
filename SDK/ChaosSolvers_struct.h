// ScriptStruct ChaosSolvers.SolverBreakingFilterSettings
// Size: 0x10 (Inherited: 0x00)
struct FSolverBreakingFilterSettings {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool FilterEnabled : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinVolume; // 0x0c(0x04)
};

// ScriptStruct ChaosSolvers.SolverCollisionFilterSettings
// Size: 0x10 (Inherited: 0x00)
struct FSolverCollisionFilterSettings {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool FilterEnabled : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinImpulse; // 0x0c(0x04)
};

// ScriptStruct ChaosSolvers.SolverTrailingFilterSettings
// Size: 0x10 (Inherited: 0x00)
struct FSolverTrailingFilterSettings {
	char UnknownData_0_0 : 7; // 0x00(0x01)
	bool FilterEnabled : 1; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinVolume; // 0x0c(0x04)
};

