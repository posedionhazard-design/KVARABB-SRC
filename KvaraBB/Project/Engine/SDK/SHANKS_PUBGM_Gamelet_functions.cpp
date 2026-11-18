
 
#include "../SDK.hpp"

namespace SDK
{









int UGamelet::UpdateProductConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.UpdateProductConfig");

	UGamelet_UpdateProductConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UGamelet::StopTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.StopTick");

	UGamelet_StopTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGamelet::StartTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.StartTick");

	UGamelet_StartTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGamelet::SetTickIntervalSec(float TickIntervalSec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetTickIntervalSec");

	UGamelet_SetTickIntervalSec_Params params;
	params.TickIntervalSec = TickIntervalSec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UGamelet::SetScriptExternalLoadDir(const struct FString& ExternalLoadDir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetScriptExternalLoadDir");

	UGamelet_SetScriptExternalLoadDir_Params params;
	params.ExternalLoadDir = ExternalLoadDir;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UGamelet::SetFont(const struct FString& FontName, const struct FString& FontPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetFont");

	UGamelet_SetFont_Params params;
	params.FontName = FontName;
	params.FontPath = FontPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UGamelet::SetDefaultFont(const struct FString& FontName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetDefaultFont");

	UGamelet_SetDefaultFont_Params params;
	params.FontName = FontName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UGamelet::SetBuiltinResConfig(const struct FString& ResConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetBuiltinResConfig");

	UGamelet_SetBuiltinResConfig_Params params;
	params.ResConfig = ResConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UGamelet::SetAppVisibility(const struct FString& AppID, bool Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetAppVisibility");

	UGamelet_SetAppVisibility_Params params;
	params.AppID = AppID;
	params.Visible = Visible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










int UGamelet::SetAppPageVisibility(const struct FString& AppID, const struct FString& AppPage, bool Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SetAppPageVisibility");

	UGamelet_SetAppPageVisibility_Params params;
	params.AppID = AppID;
	params.AppPage = AppPage;
	params.Visible = Visible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UGamelet::SendMessageToSdk(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SendMessageToSdk");

	UGamelet_SendMessageToSdk_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UGamelet::SendMessageToApp(const struct FString& AppID, const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.SendMessageToApp");

	UGamelet_SendMessageToApp_Params params;
	params.AppID = AppID;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UGamelet::RefreshUserdata(TMap<struct FString, struct FString> UserData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.RefreshUserdata");

	UGamelet_RefreshUserdata_Params params;
	params.UserData = UserData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UGamelet::OpenBeforeLoginWithGameVersion(TEnumAsByte<EGameletEnvironment> Environment, const struct FString& GameVersion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.OpenBeforeLoginWithGameVersion");

	UGamelet_OpenBeforeLoginWithGameVersion_Params params;
	params.Environment = Environment;
	params.GameVersion = GameVersion;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UGamelet::OpenBeforeLogin(TEnumAsByte<EGameletEnvironment> Environment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.OpenBeforeLogin");

	UGamelet_OpenBeforeLogin_Params params;
	params.Environment = Environment;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UGamelet::OpenApp(const struct FString& AppID, const struct FString& OpenArgs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.OpenApp");

	UGamelet_OpenApp_Params params;
	params.AppID = AppID;
	params.OpenArgs = OpenArgs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UGamelet::Open(TEnumAsByte<EGameletEnvironment> Environment, TMap<struct FString, struct FString> UserData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Open");

	UGamelet_Open_Params params;
	params.Environment = Environment;
	params.UserData = UserData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UGamelet::Initialize(class UGameletSettings* Settings)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Initialize");

	UGamelet_Initialize_Params params;
	params.Settings = Settings;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGamelet::GetProductConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.GetProductConfig");

	UGamelet_GetProductConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UGamelet::GetIsProductEnvironment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.GetIsProductEnvironment");

	UGamelet_GetIsProductEnvironment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UGameletSettings* UGamelet::GetGlobalSettings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.GetGlobalSettings");

	UGamelet_GetGlobalSettings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UGamelet::GetBackTrace(struct FString* TraceInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.GetBackTrace");

	UGamelet_GetBackTrace_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TraceInfo != nullptr)
		*TraceInfo = params.TraceInfo;

	return params.ReturnValue;
}







class UGamelet* UGamelet::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Get");

	UGamelet_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UGamelet::ExecOnSDKMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.ExecOnSDKMessage");

	UGamelet_ExecOnSDKMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UGamelet::ExecOnReportData(const struct FString& EventName, const struct FString& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.ExecOnReportData");

	UGamelet_ExecOnReportData_Params params;
	params.EventName = EventName;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UGamelet::ExecOnRefreshUserdata()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.ExecOnRefreshUserdata");

	UGamelet_ExecOnRefreshUserdata_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UGamelet::EnableLog(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.EnableLog");

	UGamelet_EnableLog_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







int UGamelet::Deinitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Deinitialize");

	UGamelet_Deinitialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UGamelet::CollectPixUILogOutput(EPxLogGroups PixUILogType, EPxLogLevels PixUILogLevel, const struct FString& logContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.CollectPixUILogOutput");

	UGamelet_CollectPixUILogOutput_Params params;
	params.PixUILogType = PixUILogType;
	params.PixUILogLevel = PixUILogLevel;
	params.logContent = logContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









int UGamelet::CloseAppPage(const struct FString& AppID, const struct FString& AppPage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.CloseAppPage");

	UGamelet_CloseAppPage_Params params;
	params.AppID = AppID;
	params.AppPage = AppPage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UGamelet::CloseApp(const struct FString& AppID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.CloseApp");

	UGamelet_CloseApp_Params params;
	params.AppID = AppID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UGamelet::Close()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.Close");

	UGamelet_Close_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UGamelet::AllAssetsGC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.Gamelet.AllAssetsGC");

	UGamelet_AllAssetsGC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UGameletEnvMgr::OnEnvToGameMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvToGameMessage");

	UGameletEnvMgr_OnEnvToGameMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UGameletEnvMgr::OnEnvToEntryMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvToEntryMessage");

	UGameletEnvMgr_OnEnvToEntryMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UGameletEnvMgr::OnEnvReportData(const struct FString& EventName, const struct FString& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvReportData");

	UGameletEnvMgr_OnEnvReportData_Params params;
	params.EventName = EventName;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UGameletEnvMgr::OnEnvRefreshUserdata()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvRefreshUserdata");

	UGameletEnvMgr_OnEnvRefreshUserdata_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UGameletEnvMgr::OnEnvLoaded(const struct FString& URL, int ErrorCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvLoaded");

	UGameletEnvMgr_OnEnvLoaded_Params params;
	params.URL = URL;
	params.ErrorCode = ErrorCode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGameletEnvMgr::OnEnvInternalError(int ErrorCode, const struct FString& ErrorMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.OnEnvInternalError");

	UGameletEnvMgr_OnEnvInternalError_Params params;
	params.ErrorCode = ErrorCode;
	params.ErrorMsg = ErrorMsg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UGameletEnvMgr::GetBackTrace()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletEnvMgr.GetBackTrace");

	UGameletEnvMgr_GetBackTrace_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UGameletFile::WriteFile(const struct FString& Path, const struct FGameletArrayBuffer& ArrayBuffer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.WriteFile");

	UGameletFile_WriteFile_Params params;
	params.Path = Path;
	params.ArrayBuffer = ArrayBuffer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UGameletFile::SaveStringToFile(const struct FString& Path, const struct FString& Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.SaveStringToFile");

	UGameletFile_SaveStringToFile_Params params;
	params.Path = Path;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FGameletArrayBuffer UGameletFile::ReadFile(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.ReadFile");

	UGameletFile_ReadFile_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UGameletFile::LoadFileToString(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.LoadFileToString");

	UGameletFile_LoadFileToString_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UGameletFile::GetFileMd5(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.GetFileMd5");

	UGameletFile_GetFileMd5_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int64_t UGameletFile::FileSize(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.FileSize");

	UGameletFile_FileSize_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UGameletFile::FileExists(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.FileExists");

	UGameletFile_FileExists_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UGameletFile::DirectoryExists(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.DirectoryExists");

	UGameletFile_DirectoryExists_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UGameletFile::DeleteFile(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.DeleteFile");

	UGameletFile_DeleteFile_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UGameletFile::DeleteDirectory(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.DeleteDirectory");

	UGameletFile_DeleteDirectory_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UGameletFile::CreateDirectory(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletFile.CreateDirectory");

	UGameletFile_CreateDirectory_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UGameletPaths::ToAbsolutePathForWrite(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ToAbsolutePathForWrite");

	UGameletPaths_ToAbsolutePathForWrite_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UGameletPaths::ToAbsolutePathForRead(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ToAbsolutePathForRead");

	UGameletPaths_ToAbsolutePathForRead_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPaths::RootDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.RootDir");

	UGameletPaths_RootDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPaths::ProjectUserDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ProjectUserDir");

	UGameletPaths_ProjectUserDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPaths::ProjectSavedDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ProjectSavedDir");

	UGameletPaths_ProjectSavedDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPaths::ProjectModsDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ProjectModsDir");

	UGameletPaths_ProjectModsDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPaths::ProjectIntermediateDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ProjectIntermediateDir");

	UGameletPaths_ProjectIntermediateDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPaths::ProjectDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ProjectDir");

	UGameletPaths_ProjectDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPaths::ProjectContentDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ProjectContentDir");

	UGameletPaths_ProjectContentDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPaths::ProjectConfigDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.ProjectConfigDir");

	UGameletPaths_ProjectConfigDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPaths::LaunchDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.LaunchDir");

	UGameletPaths_LaunchDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPaths::GetPuertsScriptFolderName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GetPuertsScriptFolderName");

	UGameletPaths_GetPuertsScriptFolderName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UGameletPaths::GetPuertsEntrancePath(const struct FString& PakName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GetPuertsEntrancePath");

	UGameletPaths_GetPuertsEntrancePath_Params params;
	params.PakName = PakName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UGameletPaths::GetPuertsAppScriptPath(const struct FString& AppFolderName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GetPuertsAppScriptPath");

	UGameletPaths_GetPuertsAppScriptPath_Params params;
	params.AppFolderName = AppFolderName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UGameletPaths::GetPuertsAppNameByPakName(const struct FString& PakName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GetPuertsAppNameByPakName");

	UGameletPaths_GetPuertsAppNameByPakName_Params params;
	params.PakName = PakName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UGameletPaths::GetPuertsAppIndexPath(const struct FString& AppFolderName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GetPuertsAppIndexPath");

	UGameletPaths_GetPuertsAppIndexPath_Params params;
	params.AppFolderName = AppFolderName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPaths::GameletSavedRoot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GameletSavedRoot");

	UGameletPaths_GameletSavedRoot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPaths::GameletFolderName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GameletFolderName");

	UGameletPaths_GameletFolderName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPaths::GameletContentRoot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GameletContentRoot");

	UGameletPaths_GameletContentRoot_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UGameletPaths::GameletAppArchiveRoot(const struct FString& AppID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPaths.GameletAppArchiveRoot");

	UGameletPaths_GameletAppArchiveRoot_Params params;
	params.AppID = AppID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UGameletPuertsEnvMgr::OnEnvScriptStateInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsEnvMgr.OnEnvScriptStateInit");

	UGameletPuertsEnvMgr_OnEnvScriptStateInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGameletPuertsEnvMgr::OnEnvMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsEnvMgr.OnEnvMessage");

	UGameletPuertsEnvMgr_OnEnvMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGameletPuertsEnvMgr::OnEnvLoaded(const struct FString& URL, int ErrorCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsEnvMgr.OnEnvLoaded");

	UGameletPuertsEnvMgr_OnEnvLoaded_Params params;
	params.URL = URL;
	params.ErrorCode = ErrorCode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UGameletPuertsEnvMgr* UGameletPuertsEnvMgr::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsEnvMgr.Get");

	UGameletPuertsEnvMgr_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UGameletPuertsUtilities::UpdateTextureResources(class UTexture2D* Texture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.UpdateTextureResources");

	UGameletPuertsUtilities_UpdateTextureResources_Params params;
	params.Texture = Texture;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UGameletPuertsUtilities::UnmountPak(const struct FString& pakPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.UnmountPak");

	UGameletPuertsUtilities_UnmountPak_Params params;
	params.pakPath = pakPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UGameletPuertsUtilities::RemoveUserWidgetFromGame(class UUserWidget* UserWidget, const struct FString& PanelInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.RemoveUserWidgetFromGame");

	UGameletPuertsUtilities_RemoveUserWidgetFromGame_Params params;
	params.UserWidget = UserWidget;
	params.PanelInfo = PanelInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGameletPuertsUtilities::ReleaseTextureResource(class UTexture2D* Texture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.ReleaseTextureResource");

	UGameletPuertsUtilities_ReleaseTextureResource_Params params;
	params.Texture = Texture;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UGameletPuertsUtilities::MountPak(const struct FString& pakPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.MountPak");

	UGameletPuertsUtilities_MountPak_Params params;
	params.pakPath = pakPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UUserWidget* UGameletPuertsUtilities::LoadUI(const struct FString& Ref, class UObject* Obj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.LoadUI");

	UGameletPuertsUtilities_LoadUI_Params params;
	params.Ref = Ref;
	params.Obj = Obj;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










class UTexture2D* UGameletPuertsUtilities::LoadImageToTexture2D(const struct FString& Path, TEnumAsByte<ETextureGroup> LODGroup, unsigned char IsSRGB)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.LoadImageToTexture2D");

	UGameletPuertsUtilities_LoadImageToTexture2D_Params params;
	params.Path = Path;
	params.LODGroup = LODGroup;
	params.IsSRGB = IsSRGB;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UGameletPuertsUtilities::IsWithEditor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.IsWithEditor");

	UGameletPuertsUtilities_IsWithEditor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UGameletPuertsUtilities::HelloWorld()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.HelloWorld");

	UGameletPuertsUtilities_HelloWorld_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









class UWidgetAnimation* UGameletPuertsUtilities::GetWidgetAnimationByName(class UUserWidget* Widget, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.GetWidgetAnimationByName");

	UGameletPuertsUtilities_GetWidgetAnimationByName_Params params;
	params.Widget = Widget;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPuertsUtilities::GetSDKVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.GetSDKVersion");

	UGameletPuertsUtilities_GetSDKVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPuertsUtilities::GetPlatformDesc()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.GetPlatformDesc");

	UGameletPuertsUtilities_GetPlatformDesc_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







unsigned char UGameletPuertsUtilities::GetNetworkType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.GetNetworkType");

	UGameletPuertsUtilities_GetNetworkType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UGameletPuertsUtilities::GetIsProductEnvironment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.GetIsProductEnvironment");

	UGameletPuertsUtilities_GetIsProductEnvironment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPuertsUtilities::GetHardwareInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.GetHardwareInfo");

	UGameletPuertsUtilities_GetHardwareInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UGameletPuertsUtilities::GetEngineVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.GetEngineVersion");

	UGameletPuertsUtilities_GetEngineVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UGameletPuertsUtilities::FlushPuertsVMMessages()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.FlushPuertsVMMessages");

	UGameletPuertsUtilities_FlushPuertsVMMessages_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGameletPuertsUtilities::CallCommonFunc(const struct FString& Type, const struct FString& ParamJson, class UWidget* Widget, const struct FScriptDelegate& Callback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.CallCommonFunc");

	UGameletPuertsUtilities_CallCommonFunc_Params params;
	params.Type = Type;
	params.ParamJson = ParamJson;
	params.Widget = Widget;
	params.Callback = Callback;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGameletPuertsUtilities::AddUserWidgetToGame(class UUserWidget* UserWidget, const struct FString& PanelInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletPuertsUtilities.AddUserWidgetToGame");

	UGameletPuertsUtilities_AddUserWidgetToGame_Params params;
	params.UserWidget = UserWidget;
	params.PanelInfo = PanelInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UGameletSettings::IsValidSetting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletSettings.IsValidSetting");

	UGameletSettings_IsValidSetting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UGameletSettings* UGameletSettings::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletSettings.Get");

	UGameletSettings_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UGameletWidget::SetWidgetOffset(const struct FMargin& OffsetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWidget.SetWidgetOffset");

	UGameletWidget_SetWidgetOffset_Params params;
	params.OffsetData = OffsetData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGameletWidget::SetWidgetAnchor(const struct FAnchors& AnchorData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWidget.SetWidgetAnchor");

	UGameletWidget_SetWidgetAnchor_Params params;
	params.AnchorData = AnchorData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGameletWidget::SetUseSRGB(bool EnableSRGB)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWidget.SetUseSRGB");

	UGameletWidget_SetUseSRGB_Params params;
	params.EnableSRGB = EnableSRGB;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGameletWidget::SetRHIConfigured(bool Configured)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWidget.SetRHIConfigured");

	UGameletWidget_SetRHIConfigured_Params params;
	params.Configured = Configured;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGameletWidget::SetBackgroundWidgetOffset(const struct FMargin& OffsetData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWidget.SetBackgroundWidgetOffset");

	UGameletWidget_SetBackgroundWidgetOffset_Params params;
	params.OffsetData = OffsetData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGameletWidget::SetBackgroundWidgetAnchor(const struct FAnchors& AnchorData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWidget.SetBackgroundWidgetAnchor");

	UGameletWidget_SetBackgroundWidgetAnchor_Params params;
	params.AnchorData = AnchorData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGameletWidget::SetBackgroundImage(const struct FString& ImagePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWidget.SetBackgroundImage");

	UGameletWidget_SetBackgroundImage_Params params;
	params.ImagePath = ImagePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TWeakObjectPtr<class UPixUIWidget> UGameletWidget::GetPixUIWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWidget.GetPixUIWidget");

	UGameletWidget_GetPixUIWidget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UGameletWindow::OnPxWidgetScriptStateInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetScriptStateInit");

	UGameletWindow_OnPxWidgetScriptStateInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGameletWindow::OnPxWidgetScriptStateDone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetScriptStateDone");

	UGameletWindow_OnPxWidgetScriptStateDone_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











bool UGameletWindow::OnPxWidgetRequestOpen(const struct FString& URL, const struct FString& Name, const struct FString& Features, bool bReplace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetRequestOpen");

	UGameletWindow_OnPxWidgetRequestOpen_Params params;
	params.URL = URL;
	params.Name = Name;
	params.Features = Features;
	params.bReplace = bReplace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UGameletWindow::OnPxWidgetMessage(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetMessage");

	UGameletWindow_OnPxWidgetMessage_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGameletWindow::OnPxWidgetLoaded(const struct FString& URL, int ErrorCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetLoaded");

	UGameletWindow_OnPxWidgetLoaded_Params params;
	params.URL = URL;
	params.ErrorCode = ErrorCode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UGameletWindow::OnPxWidgetInternalError(int ErrorCode, const struct FString& ErrorMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetInternalError");

	UGameletWindow_OnPxWidgetInternalError_Params params;
	params.ErrorCode = ErrorCode;
	params.ErrorMsg = ErrorMsg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGameletWindow::OnPxWidgetClose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Gamelet.GameletWindow.OnPxWidgetClose");

	UGameletWindow_OnPxWidgetClose_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

