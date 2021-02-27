// Class Rejoin.RejoinCheck
// Size: 0x188 (Inherited: 0x28)
struct URejoinCheck : UObject {
	enum class ERejoinStatus LastKnownStatus; // 0x28(0x01)
	char UnknownData_29_0 : 7; // 0x29(0x01)
	bool bRejoinAfterCheck : 1; // 0x29(0x01)
	char UnknownData_2A_0 : 7; // 0x2a(0x01)
	bool bAttemptingRejoin : 1; // 0x2a(0x01)
	char UnknownData_2B[0x15d]; // 0x2b(0x15d)
};

