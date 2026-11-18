
 
#include "../SDK.hpp"

namespace SDK
{









struct FString UTextWidgetInterface::GetTextContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.TextWidgetInterface.GetTextContent");

	UTextWidgetInterface_GetTextContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UCommonLuaLibrary::IsMatch(const struct FString& Source, const struct FString& regex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.CommonLuaLibrary.IsMatch");

	UCommonLuaLibrary_IsMatch_Params params;
	params.Source = Source;
	params.regex = regex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCommonLuaLibrary::GetName(class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.CommonLuaLibrary.GetName");

	UCommonLuaLibrary_GetName_Params params;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FString> UCommonLuaLibrary::GetModNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.CommonLuaLibrary.GetModNames");

	UCommonLuaLibrary_GetModNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UWorld* UCommonLuaLibrary::GetGWorld()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.CommonLuaLibrary.GetGWorld");

	UCommonLuaLibrary_GetGWorld_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UCommonLuaLibrary::GetFullName(class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.CommonLuaLibrary.GetFullName");

	UCommonLuaLibrary_GetFullName_Params params;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class URuntimeFilesDownloaderLibrary* URuntimeFilesDownloaderLibrary::DownloadFile(const struct FString& URL, const struct FString& SavePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.RuntimeFilesDownloaderLibrary.DownloadFile");

	URuntimeFilesDownloaderLibrary_DownloadFile_Params params;
	params.URL = URL;
	params.SavePath = SavePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class URuntimeFilesDownloaderLibrary* URuntimeFilesDownloaderLibrary::CreateDownloader()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.RuntimeFilesDownloaderLibrary.CreateDownloader");

	URuntimeFilesDownloaderLibrary_CreateDownloader_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UServiceManager::UnregisterService(class UClass* ServiceType, const struct FString& serviceName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.ServiceManager.UnregisterService");

	UServiceManager_UnregisterService_Params params;
	params.ServiceType = ServiceType;
	params.serviceName = serviceName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UServiceManager::RegisterService(class UObject* Service, class UClass* ServiceType, const struct FString& serviceName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.ServiceManager.RegisterService");

	UServiceManager_RegisterService_Params params;
	params.Service = Service;
	params.ServiceType = ServiceType;
	params.serviceName = serviceName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









class UObject* UServiceManager::GetService(class UClass* ServiceType, const struct FString& serviceName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonLib.ServiceManager.GetService");

	UServiceManager_GetService_Params params;
	params.ServiceType = ServiceType;
	params.serviceName = serviceName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

