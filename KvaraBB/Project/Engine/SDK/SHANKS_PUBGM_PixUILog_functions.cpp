
 
#include "../SDK.hpp"

namespace SDK
{










void UPxLogMgr::PxLogToggleSwitchLevel(EPxLogLevels eLogLevel, bool beOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUILog.PxLogMgr.PxLogToggleSwitchLevel");

	UPxLogMgr_PxLogToggleSwitchLevel_Params params;
	params.eLogLevel = eLogLevel;
	params.beOpen = beOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPxLogMgr::PxLogToggleSwitchGroup(EPxLogGroups eLogGroup, bool beOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUILog.PxLogMgr.PxLogToggleSwitchGroup");

	UPxLogMgr_PxLogToggleSwitchGroup_Params params;
	params.eLogGroup = eLogGroup;
	params.beOpen = beOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPxLogMgr::PxLogToggleForceLocalOutPut(bool beOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUILog.PxLogMgr.PxLogToggleForceLocalOutPut");

	UPxLogMgr_PxLogToggleForceLocalOutPut_Params params;
	params.beOpen = beOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPxLogMgr::PxLogEnable(bool beEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUILog.PxLogMgr.PxLogEnable");

	UPxLogMgr_PxLogEnable_Params params;
	params.beEnable = beEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UPxLogMgr* UPxLogMgr::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUILog.PxLogMgr.Get");

	UPxLogMgr_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UPxLogMgr::DispatchLog(EPxLogGroups eLogGroup, EPxLogLevels eLogLevel, const struct FString& strLogContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUILog.PxLogMgr.DispatchLog");

	UPxLogMgr_DispatchLog_Params params;
	params.eLogGroup = eLogGroup;
	params.eLogLevel = eLogLevel;
	params.strLogContent = strLogContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

