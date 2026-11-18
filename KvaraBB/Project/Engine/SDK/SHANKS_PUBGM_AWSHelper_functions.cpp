
 
#include "../SDK.hpp"

namespace SDK
{














void UAWSHelperBlueprintLibrary::UploadFile(class UAWSHelper* CosHelper, const struct FString& FromFilePath, const struct FString& ToURL, const struct FString& NoneMatchHeader, const struct FScriptDelegate& OnComplete, const struct FScriptDelegate& OnProgress)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AWSHelper.AWSHelperBlueprintLibrary.UploadFile");

	UAWSHelperBlueprintLibrary_UploadFile_Params params;
	params.CosHelper = CosHelper;
	params.FromFilePath = FromFilePath;
	params.ToURL = ToURL;
	params.NoneMatchHeader = NoneMatchHeader;
	params.OnComplete = OnComplete;
	params.OnProgress = OnProgress;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void UAWSHelperBlueprintLibrary::UploadBinary(class UAWSHelper* CosHelper, TArray<unsigned char> FromBinaries, const struct FString& ToURL, const struct FString& NoneMatchHeader, const struct FScriptDelegate& OnComplete, const struct FScriptDelegate& OnProgress)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AWSHelper.AWSHelperBlueprintLibrary.UploadBinary");

	UAWSHelperBlueprintLibrary_UploadBinary_Params params;
	params.CosHelper = CosHelper;
	params.FromBinaries = FromBinaries;
	params.ToURL = ToURL;
	params.NoneMatchHeader = NoneMatchHeader;
	params.OnComplete = OnComplete;
	params.OnProgress = OnProgress;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UAWSHelperBlueprintLibrary::DownloadFile(class UAWSHelper* CosHelper, const struct FString& FromURL, const struct FString& ToFilePath, const struct FScriptDelegate& OnComplete, const struct FScriptDelegate& OnProgress)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AWSHelper.AWSHelperBlueprintLibrary.DownloadFile");

	UAWSHelperBlueprintLibrary_DownloadFile_Params params;
	params.CosHelper = CosHelper;
	params.FromURL = FromURL;
	params.ToFilePath = ToFilePath;
	params.OnComplete = OnComplete;
	params.OnProgress = OnProgress;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UAWSHelperBlueprintLibrary::DownloadBinary(class UAWSHelper* CosHelper, const struct FString& FromURL, const struct FScriptDelegate& OnComplete, const struct FScriptDelegate& OnProgress)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AWSHelper.AWSHelperBlueprintLibrary.DownloadBinary");

	UAWSHelperBlueprintLibrary_DownloadBinary_Params params;
	params.CosHelper = CosHelper;
	params.FromURL = FromURL;
	params.OnComplete = OnComplete;
	params.OnProgress = OnProgress;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAWSHelperBlueprintLibrary::DestroyAWSHelper(class UAWSHelper* AWSHelper)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AWSHelper.AWSHelperBlueprintLibrary.DestroyAWSHelper");

	UAWSHelperBlueprintLibrary_DestroyAWSHelper_Params params;
	params.AWSHelper = AWSHelper;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UAWSHelper* UAWSHelperBlueprintLibrary::ConstructAWSHelper()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AWSHelper.AWSHelperBlueprintLibrary.ConstructAWSHelper");

	UAWSHelperBlueprintLibrary_ConstructAWSHelper_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UAWSResponse::IsOK()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AWSHelper.AWSResponse.IsOK");

	UAWSResponse_IsOK_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UAWSResponse::GetResponseCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AWSHelper.AWSResponse.GetResponseCode");

	UAWSResponse_GetResponseCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UAWSResponse::GetRequestURL()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AWSHelper.AWSResponse.GetRequestURL");

	UAWSResponse_GetRequestURL_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UAWSResponse::GetErrorMessage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AWSHelper.AWSResponse.GetErrorMessage");

	UAWSResponse_GetErrorMessage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UAWSResponse::GetErrorCode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AWSHelper.AWSResponse.GetErrorCode");

	UAWSResponse_GetErrorCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UAWSResponse::GetContentAsString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AWSHelper.AWSResponse.GetContentAsString");

	UAWSResponse_GetContentAsString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<unsigned char> UAWSResponse::GetContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AWSHelper.AWSResponse.GetContent");

	UAWSResponse_GetContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

