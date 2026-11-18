
 
#include "../SDK.hpp"

namespace SDK
{









class UBP_PandoraPickerLibraryLibrary* UBP_PandoraPickerLibraryLibrary::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraPickerPlugin.BP_PandoraPickerLibraryLibrary.GetInstance");

	UBP_PandoraPickerLibraryLibrary_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBP_PandoraPickerLibraryLibrary::BP_SetVideoExportQuality(int Quality)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraPickerPlugin.BP_PandoraPickerLibraryLibrary.BP_SetVideoExportQuality");

	UBP_PandoraPickerLibraryLibrary_BP_SetVideoExportQuality_Params params;
	params.Quality = Quality;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










class UTexture2D* UBP_PandoraPickerLibraryLibrary::BP_PandoraPickerLoadImageTest(const struct FString& fImagePath, const struct FString& fOrgImagePath, class UTexture2D** orgTex2D)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraPickerPlugin.BP_PandoraPickerLibraryLibrary.BP_PandoraPickerLoadImageTest");

	UBP_PandoraPickerLibraryLibrary_BP_PandoraPickerLoadImageTest_Params params;
	params.fImagePath = fImagePath;
	params.fOrgImagePath = fOrgImagePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (orgTex2D != nullptr)
		*orgTex2D = params.orgTex2D;

	return params.ReturnValue;
}







int UBP_PandoraPickerLibraryLibrary::BP_PandoraPickerInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraPickerPlugin.BP_PandoraPickerLibraryLibrary.BP_PandoraPickerInit");

	UBP_PandoraPickerLibraryLibrary_BP_PandoraPickerInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBP_PandoraPickerLibraryLibrary::BP_PandoraPickerGetSavedPath(struct FString* strSavePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraPickerPlugin.BP_PandoraPickerLibraryLibrary.BP_PandoraPickerGetSavedPath");

	UBP_PandoraPickerLibraryLibrary_BP_PandoraPickerGetSavedPath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (strSavePath != nullptr)
		*strSavePath = params.strSavePath;
}










void UBP_PandoraPickerLibraryLibrary::BP_OpenImageLibraryWithOrg(int Width, int Height, const struct FString& SecretKey, const struct FString& savedPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraPickerPlugin.BP_PandoraPickerLibraryLibrary.BP_OpenImageLibraryWithOrg");

	UBP_PandoraPickerLibraryLibrary_BP_OpenImageLibraryWithOrg_Params params;
	params.Width = Width;
	params.Height = Height;
	params.SecretKey = SecretKey;
	params.savedPath = savedPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_PandoraPickerLibraryLibrary::BP_OpenImageLibraryVideo(const struct FString& SecretKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraPickerPlugin.BP_PandoraPickerLibraryLibrary.BP_OpenImageLibraryVideo");

	UBP_PandoraPickerLibraryLibrary_BP_OpenImageLibraryVideo_Params params;
	params.SecretKey = SecretKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UBP_PandoraPickerLibraryLibrary::BP_OpenImageLibraryNoCut(int Width, int Height, const struct FString& SecretKey, const struct FString& savedPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraPickerPlugin.BP_PandoraPickerLibraryLibrary.BP_OpenImageLibraryNoCut");

	UBP_PandoraPickerLibraryLibrary_BP_OpenImageLibraryNoCut_Params params;
	params.Width = Width;
	params.Height = Height;
	params.SecretKey = SecretKey;
	params.savedPath = savedPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UBP_PandoraPickerLibraryLibrary::BP_OpenImageLibrary(int Width, int Height, const struct FString& SecretKey, const struct FString& savedPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraPickerPlugin.BP_PandoraPickerLibraryLibrary.BP_OpenImageLibrary");

	UBP_PandoraPickerLibraryLibrary_BP_OpenImageLibrary_Params params;
	params.Width = Width;
	params.Height = Height;
	params.SecretKey = SecretKey;
	params.savedPath = savedPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

