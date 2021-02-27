// Class MoviePlayer.MoviePlayerSettings
// Size: 0x40 (Inherited: 0x28)
struct UMoviePlayerSettings : UObject {
	char UnknownData_28_0 : 7; // 0x28(0x01)
	bool bWaitForMoviesToComplete : 1; // 0x28(0x01)
	char UnknownData_29_0 : 7; // 0x29(0x01)
	bool bMoviesAreSkippable : 1; // 0x29(0x01)
	char UnknownData_2A[0x6]; // 0x2a(0x06)
	struct TArray<struct FString> StartupMovies; // 0x30(0x10)
};

