
 
#include "../SDK.hpp"

namespace SDK
{









void UGlobal_Bp_C::InitOBSettingData(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitOBSettingData");

	UGlobal_Bp_C_InitOBSettingData_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGlobal_Bp_C::InitCustomizeSettingData(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitCustomizeSettingData");

	UGlobal_Bp_C_InitCustomizeSettingData_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGlobal_Bp_C::InitFireGyroSensibilitySettingData(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitFireGyroSensibilitySettingData");

	UGlobal_Bp_C_InitFireGyroSensibilitySettingData_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGlobal_Bp_C::MapFromCBToESBH(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.MapFromCBToESBH");

	UGlobal_Bp_C_MapFromCBToESBH_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGlobal_Bp_C::InitMirrorObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitMirrorObjMapPickupSetting");

	UGlobal_Bp_C_InitMirrorObjMapPickupSetting_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGlobal_Bp_C::InitThrowObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitThrowObjMapPickupSetting");

	UGlobal_Bp_C_InitThrowObjMapPickupSetting_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGlobal_Bp_C::InitDrugMapPickupSetting(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitDrugMapPickupSetting");

	UGlobal_Bp_C_InitDrugMapPickupSetting_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGlobal_Bp_C::InitBasicSettingData(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitBasicSettingData");

	UGlobal_Bp_C_InitBasicSettingData_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGlobal_Bp_C::InitPickupSettingData_XT(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitPickupSettingData_XT");

	UGlobal_Bp_C_InitPickupSettingData_XT_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGlobal_Bp_C::InitPickupSettingData(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitPickupSettingData");

	UGlobal_Bp_C_InitPickupSettingData_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGlobal_Bp_C::InitSensibilitySettingData(class USettingConfig_C* ServerSettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitSensibilitySettingData");

	UGlobal_Bp_C_InitSensibilitySettingData_Params params;
	params.ServerSettingConfig = ServerSettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGlobal_Bp_C::SetGrenadeDefaultPickValue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SetGrenadeDefaultPickValue");

	UGlobal_Bp_C_SetGrenadeDefaultPickValue_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGlobal_Bp_C::InitMapFromCBToES()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitMapFromCBToES");

	UGlobal_Bp_C_InitMapFromCBToES_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGlobal_Bp_C::MapFromCBToESGlobal(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.MapFromCBToESGlobal");

	UGlobal_Bp_C_MapFromCBToESGlobal_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGlobal_Bp_C::MapFromCBToESJK(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.MapFromCBToESJK");

	UGlobal_Bp_C_MapFromCBToESJK_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGlobal_Bp_C::MapFromCBToESVN(class USettingConfig_C* SettingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.MapFromCBToESVN");

	UGlobal_Bp_C_MapFromCBToESVN_Params params;
	params.SettingConfig = SettingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGlobal_Bp_C::LoadSettingConfigFromSlot()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.LoadSettingConfigFromSlot");

	UGlobal_Bp_C_LoadSettingConfigFromSlot_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UGlobal_Bp_C::SetPostProcessSettings(int ID, float Time, bool isReverse, bool isClosing)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SetPostProcessSettings");

	UGlobal_Bp_C_SetPostProcessSettings_Params params;
	params.ID = ID;
	params.Time = Time;
	params.isReverse = isReverse;
	params.isClosing = isClosing;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGlobal_Bp_C::EventAndroidQuitGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.EventAndroidQuitGame");

	UGlobal_Bp_C_EventAndroidQuitGame_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UGlobal_Bp_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.Construct");

	UGlobal_Bp_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UGlobal_Bp_C::ExecuteUbergraph_Global_Bp(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.ExecuteUbergraph_Global_Bp");

	UGlobal_Bp_C_ExecuteUbergraph_Global_Bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

