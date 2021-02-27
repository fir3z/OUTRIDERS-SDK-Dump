// BlueprintGeneratedClass MCSE_InFire.MCSE_InFire_C
// Size: 0x2b4 (Inherited: 0x238)
struct UMCSE_InFire_C : UMadCharacterShaderEffect {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	float Burned_Body_Size_Multiplier:Value; // 0x240(0x04)
	float Burned_Body_TextureSize_Multiplier:Value; // 0x244(0x04)
	struct FLinearColor Burned_Body_Inside_Glow_Location:Value; // 0x248(0x10)
	struct FLinearColor Burned_Body_Inside_Glow_Shape:Value; // 0x258(0x10)
	struct FLinearColor Body_Flames_Location:Value; // 0x268(0x10)
	struct FLinearColor Body_Flames_Shape:Value; // 0x278(0x10)
	float Burned_body_fire_cracks: Begin Duration; // 0x288(0x04)
	float Burned_body_opacity2: Begin Duration; // 0x28c(0x04)
	float Burned_body_opacity3: Begin Duration; // 0x290(0x04)
	float Burned_body_opacity1: Begin Duration; // 0x294(0x04)
	float Body_flames_opacity:Begin Duration; // 0x298(0x04)
	float Body_Flames_Size_Multiplier:Value; // 0x29c(0x04)
	float Body_Flames_TextureSize_Multiplier:Value; // 0x2a0(0x04)
	float Burned_body_fire_cracks: End Duration; // 0x2a4(0x04)
	float Burned_body_opacity3: End Duration; // 0x2a8(0x04)
	float Body_flames_opacity:End Duration; // 0x2ac(0x04)
	float Burned_body_opacity3: Value; // 0x2b0(0x04)

	void OnCompleted_70C05DB94EC24D1E7D8F848D2934EEF3(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_70C05DB94EC24D1E7D8F848D2934EEF3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_CFE3DF8E48A7EE43E5C2E99506F5106B(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_CFE3DF8E48A7EE43E5C2E99506F5106B // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_13EF26E5495A36A1D04B66B97D146A06(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_13EF26E5495A36A1D04B66B97D146A06 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_4AB616CE45E7AD050B7108844466195B(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_4AB616CE45E7AD050B7108844466195B // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_9776E48C4566B8C80F219E9DA272F956(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_9776E48C4566B8C80F219E9DA272F956 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_27F174E84BF04F058B45AABDE243B4C4(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_27F174E84BF04F058B45AABDE243B4C4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_23B86ADC46E515F518EC1C8AFBACA05B(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_23B86ADC46E515F518EC1C8AFBACA05B // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_181B720749FD4B973C7ED2BE80B504F2(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_181B720749FD4B973C7ED2BE80B504F2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_DE262AE44263CF79EFBF85AE72AC8E74(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_DE262AE44263CF79EFBF85AE72AC8E74 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_39D9681F4D9C2DF05F0A7A82BCD7C673(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_39D9681F4D9C2DF05F0A7A82BCD7C673 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_F02ADFE74C53E10531ADA680AF2DB261(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_F02ADFE74C53E10531ADA680AF2DB261 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_A15632C5439B141D10EF049336658946(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_A15632C5439B141D10EF049336658946 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_C08CEB2E45FDD544436FA287A6820A26(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_C08CEB2E45FDD544436FA287A6820A26 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_5E12A0E140500D442FB3F6979915B18F(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_5E12A0E140500D442FB3F6979915B18F // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_DF39E63F4BD632698CBAB5974C434756(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_DF39E63F4BD632698CBAB5974C434756 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_DEDFE52D4DD8432A12A04A81012FC1CD(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_DEDFE52D4DD8432A12A04A81012FC1CD // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_7C74FFA6475BA7B50325EA9824712911(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_7C74FFA6475BA7B50325EA9824712911 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_35C978DE4242B519C6DE21AEDECCCD78(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_35C978DE4242B519C6DE21AEDECCCD78 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_297B288645591B2E141A2F9CCFC0D3C6(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_297B288645591B2E141A2F9CCFC0D3C6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_D307314C4AD462B2B5DC1AB2B7CBC1E4(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_D307314C4AD462B2B5DC1AB2B7CBC1E4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_ED196DE9428C835807FD18985788FF86(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_ED196DE9428C835807FD18985788FF86 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_149FD7FB48FE4A6E02B4FDBF5B80A4DB(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_149FD7FB48FE4A6E02B4FDBF5B80A4DB // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_C0208743441D8C351CA4F49CCA3AEC03(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_C0208743441D8C351CA4F49CCA3AEC03 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_6826BC6541F99FAD715A04ACA9B12FFF(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_6826BC6541F99FAD715A04ACA9B12FFF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_EA062B154CECB2D3980E049B75CC942A(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_EA062B154CECB2D3980E049B75CC942A // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_019C6FF54C942F8A32466ABAF7949A79(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_019C6FF54C942F8A32466ABAF7949A79 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_357115A0412BD8C5AE0504AE2877C44C(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_357115A0412BD8C5AE0504AE2877C44C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_131C9D814AADA513D063DC9D8C80631A(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_131C9D814AADA513D063DC9D8C80631A // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_250A52E34049E9927FA217896AD032CF(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_250A52E34049E9927FA217896AD032CF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_6AFD614944312C0CE6FB63AA73B3D243(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_6AFD614944312C0CE6FB63AA73B3D243 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_768BB6044A033AF9BBA3ABBCB47BFE21(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_768BB6044A033AF9BBA3ABBCB47BFE21 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_40EE408240005C6044477B9408A299A0(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_40EE408240005C6044477B9408A299A0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_63184C854CD9D839CF3712BED68AF1F7(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_63184C854CD9D839CF3712BED68AF1F7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_4304750E4FD38729F885CF9F7E77DF1C(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_4304750E4FD38729F885CF9F7E77DF1C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_ED5EF5B64A510DDC6B84A28649E80417(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_ED5EF5B64A510DDC6B84A28649E80417 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_91D0716D4DABBEEA60D639BC655A60EF(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_91D0716D4DABBEEA60D639BC655A60EF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_85FD8D74464914DFC9CAA0A8037DA0DA(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_85FD8D74464914DFC9CAA0A8037DA0DA // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_0F7C7383480F1B2C3D9071BBCE7558A3(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_0F7C7383480F1B2C3D9071BBCE7558A3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_A200F21C431D2B65E05DC29BB7B865A6(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_A200F21C431D2B65E05DC29BB7B865A6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_74BD2E104A5A00A3C1A795A0EC8FF612(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_74BD2E104A5A00A3C1A795A0EC8FF612 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_3A251E224235FF114404E8AC99D6C2BD(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_3A251E224235FF114404E8AC99D6C2BD // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_3F90F6FB48AD661BF9473CBE70A0C3A1(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_3F90F6FB48AD661BF9473CBE70A0C3A1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_3F55241842C44CAEE9F76D9E2B3B634F(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_3F55241842C44CAEE9F76D9E2B3B634F // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnCompleted_CCE1D14A4F28D85F045C4BAB76DBF375(); // Function MCSE_InFire.MCSE_InFire_C.OnCompleted_CCE1D14A4F28D85F045C4BAB76DBF375 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a35c70
	void OnDeactivated(); // Function MCSE_InFire.MCSE_InFire_C.OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnActivated(); // Function MCSE_InFire.MCSE_InFire_C.OnActivated // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnEndPlay(); // Function MCSE_InFire.MCSE_InFire_C.OnEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void OnBeginPlay(); // Function MCSE_InFire.MCSE_InFire_C.OnBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a35c70
	void ExecuteUbergraph_MCSE_InFire(int32_t EntryPoint); // Function MCSE_InFire.MCSE_InFire_C.ExecuteUbergraph_MCSE_InFire // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a35c70
};

