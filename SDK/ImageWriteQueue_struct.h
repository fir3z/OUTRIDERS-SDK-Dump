// Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8 {
	PNG,
	JPG,
	BMP,
	EXR,
	EDesiredImageFormat_MAX,
};

// ScriptStruct ImageWriteQueue.ImageWriteOptions
// Size: 0x60 (Inherited: 0x00)
struct FImageWriteOptions {
	enum class EDesiredImageFormat Format; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FDelegate OnComplete; // 0x08(0x10)
	int32_t CompressionQuality; // 0x18(0x04)
	char UnknownData_1C_0 : 7; // 0x1c(0x01)
	bool bOverwriteFile : 1; // 0x1c(0x01)
	char UnknownData_1D_0 : 7; // 0x1d(0x01)
	bool bAsync : 1; // 0x1d(0x01)
	char UnknownData_1E[0x42]; // 0x1e(0x42)
};

