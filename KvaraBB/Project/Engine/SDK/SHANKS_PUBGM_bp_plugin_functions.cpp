
 
#include "../SDK.hpp"

namespace SDK
{









void Ubp_pluginBPLibrary::bp_pluginSendEvent(const struct FString& jsonEventCmd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginSendEvent");

	Ubp_pluginBPLibrary_bp_pluginSendEvent_Params params;
	params.jsonEventCmd = jsonEventCmd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









int Ubp_pluginBPLibrary::bp_pluginRequestInstallWidget(int wigetType, const struct FString& authInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginRequestInstallWidget");

	Ubp_pluginBPLibrary_bp_pluginRequestInstallWidget_Params params;
	params.wigetType = wigetType;
	params.authInfo = authInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float Ubp_pluginBPLibrary::bp_pluginLaunchMeemoFunction(const struct FString& Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginLaunchMeemoFunction");

	Ubp_pluginBPLibrary_bp_pluginLaunchMeemoFunction_Params params;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool Ubp_pluginBPLibrary::bp_pluginIsInForeground()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginIsInForeground");

	Ubp_pluginBPLibrary_bp_pluginIsInForeground_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int Ubp_pluginBPLibrary::bp_pluginGetInstalledWidgetType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_plugin.bp_pluginBPLibrary.bp_pluginGetInstalledWidgetType");

	Ubp_pluginBPLibrary_bp_pluginGetInstalledWidgetType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

