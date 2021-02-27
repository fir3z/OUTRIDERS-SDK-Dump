// Enum MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8 {
	MT_Normal,
	MT_Looped,
	MT_LoadingLoop,
	MT_MAX,
};

// ScriptStruct MoviePlayer.LoadingScreenHintTable
// Size: 0x38 (Inherited: 0x08)
struct FLoadingScreenHintTable : FTableRowBase {
	struct FString PC; // 0x08(0x10)
	struct FString XBONE; // 0x18(0x10)
	struct FString PS4; // 0x28(0x10)
};

