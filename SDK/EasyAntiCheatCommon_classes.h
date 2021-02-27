// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// Size: 0x188 (Inherited: 0x180)
struct UEasyAntiCheatNetComponent : UActorComponent {
	char UnknownData_180[0x8]; // 0x180(0x08)

	void ServerMessage(struct TArray<enum class None> Message); // Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xd8a6d0
	void ClientMessage(struct TArray<enum class None> Message); // Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xd8a630
};

