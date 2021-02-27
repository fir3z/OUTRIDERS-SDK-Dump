// Class LifeCycle.LifeCycleSettings
// Size: 0x50 (Inherited: 0x28)
struct ULifeCycleSettings : UObject {
	float MaxMatchmakingStartDelay; // 0x28(0x04)
	float MinMatchHostingTime; // 0x2c(0x04)
	float MaxMatchHostingTime; // 0x30(0x04)
	float StartMatchmakingConnectingToHostTimeoutSecs; // 0x34(0x04)
	float MigrateHostWaitingOnHostTimeoutSecs; // 0x38(0x04)
	float HostMigrationWaitForHostMigrationAgreementSecs; // 0x3c(0x04)
	float HostMigrationWaitForNewSessionOwnerTimeoutSecs; // 0x40(0x04)
	float HostMigrationWaitForP2PConnectionTimeoutSecs; // 0x44(0x04)
	int32_t MigrateHostRetryConnectMaxCount; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

