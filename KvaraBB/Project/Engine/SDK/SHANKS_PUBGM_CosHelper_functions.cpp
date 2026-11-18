
 
#include "../SDK.hpp"

namespace SDK
{









TArray<unsigned char> UCosBase::GetContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosBase.GetContent");

	UCosBase_GetContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












class UCosRequest* UCosHelperBlueprintLibrary::UploadFileMemory(class UCosHelper* CosHelper, TArray<unsigned char> FileMemoryBuffer, const struct FString& URIPathName, const struct FString& URLParameters, const struct FScriptDelegate& OnCosRequestCompleted)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosHelperBlueprintLibrary.UploadFileMemory");

	UCosHelperBlueprintLibrary_UploadFileMemory_Params params;
	params.CosHelper = CosHelper;
	params.FileMemoryBuffer = FileMemoryBuffer;
	params.URIPathName = URIPathName;
	params.URLParameters = URLParameters;
	params.OnCosRequestCompleted = OnCosRequestCompleted;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












class UCosRequest* UCosHelperBlueprintLibrary::UploadFile(class UCosHelper* CosHelper, const struct FString& FilePathName, const struct FString& URIPathName, const struct FString& URLParameters, const struct FScriptDelegate& OnCosRequestCompleted)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosHelperBlueprintLibrary.UploadFile");

	UCosHelperBlueprintLibrary_UploadFile_Params params;
	params.CosHelper = CosHelper;
	params.FilePathName = FilePathName;
	params.URIPathName = URIPathName;
	params.URLParameters = URLParameters;
	params.OnCosRequestCompleted = OnCosRequestCompleted;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FCosHelperInitializeInfo UCosHelperBlueprintLibrary::InitCosInfo(const struct FString& Section)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosHelperBlueprintLibrary.InitCosInfo");

	UCosHelperBlueprintLibrary_InitCosInfo_Params params;
	params.Section = Section;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












class UCosRequest* UCosHelperBlueprintLibrary::GetFileInfo(class UCosHelper* CosHelper, const struct FString& URIPathName, const struct FString& URLParameters, int FileInfoType, const struct FScriptDelegate& OnCosRequestCompleted)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosHelperBlueprintLibrary.GetFileInfo");

	UCosHelperBlueprintLibrary_GetFileInfo_Params params;
	params.CosHelper = CosHelper;
	params.URIPathName = URIPathName;
	params.URLParameters = URLParameters;
	params.FileInfoType = FileInfoType;
	params.OnCosRequestCompleted = OnCosRequestCompleted;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












class UCosRequest* UCosHelperBlueprintLibrary::DownloadFile(class UCosHelper* CosHelper, const struct FString& URIPathName, const struct FString& URLParameters, const struct FString& SavedPathName, const struct FScriptDelegate& OnCosRequestCompleted)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosHelperBlueprintLibrary.DownloadFile");

	UCosHelperBlueprintLibrary_DownloadFile_Params params;
	params.CosHelper = CosHelper;
	params.URIPathName = URIPathName;
	params.URLParameters = URLParameters;
	params.SavedPathName = SavedPathName;
	params.OnCosRequestCompleted = OnCosRequestCompleted;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCosHelperBlueprintLibrary::DestroyCosHelper(class UCosHelper* CosHelper)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosHelperBlueprintLibrary.DestroyCosHelper");

	UCosHelperBlueprintLibrary_DestroyCosHelper_Params params;
	params.CosHelper = CosHelper;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UCosHelper* UCosHelperBlueprintLibrary::ConstructCosHelper(const struct FCosHelperInitializeInfo& InitializeInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosHelperBlueprintLibrary.ConstructCosHelper");

	UCosHelperBlueprintLibrary_ConstructCosHelper_Params params;
	params.InitializeInfo = InitializeInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UCosResponse::IsOK()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosResponse.IsOK");

	UCosResponse_IsOK_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UCosResponse::GetResponseCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosResponse.GetResponseCode");

	UCosResponse_GetResponseCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCosResponse::GetRequestURL()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosResponse.GetRequestURL");

	UCosResponse_GetRequestURL_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCosResponse::GetFileInfo(ECosHelperFileInfoType InFileInfoType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosResponse.GetFileInfo");

	UCosResponse_GetFileInfo_Params params;
	params.InFileInfoType = InFileInfoType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCosResponse::GetContentAsString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CosHelper.CosResponse.GetContentAsString");

	UCosResponse_GetContentAsString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

