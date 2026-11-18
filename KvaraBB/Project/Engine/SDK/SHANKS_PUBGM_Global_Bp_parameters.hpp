#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UGlobal_Bp_C_InitOBSettingData_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      
};


struct UGlobal_Bp_C_InitCustomizeSettingData_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      
};


struct UGlobal_Bp_C_InitFireGyroSensibilitySettingData_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      
};


struct UGlobal_Bp_C_MapFromCBToESBH_Params
{
	class USettingConfig_C*                            SettingConfig;                                            
};


struct UGlobal_Bp_C_InitMirrorObjMapPickupSetting_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      
};


struct UGlobal_Bp_C_InitThrowObjMapPickupSetting_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      
};


struct UGlobal_Bp_C_InitDrugMapPickupSetting_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      
};


struct UGlobal_Bp_C_InitBasicSettingData_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      
};


struct UGlobal_Bp_C_InitPickupSettingData_XT_Params
{
	class USettingConfig_C*                            SettingConfig;                                            
};


struct UGlobal_Bp_C_InitPickupSettingData_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      
};


struct UGlobal_Bp_C_InitSensibilitySettingData_Params
{
	class USettingConfig_C*                            ServerSettingConfig;                                      
};


struct UGlobal_Bp_C_SetGrenadeDefaultPickValue_Params
{
};


struct UGlobal_Bp_C_InitMapFromCBToES_Params
{
};


struct UGlobal_Bp_C_MapFromCBToESGlobal_Params
{
	class USettingConfig_C*                            SettingConfig;                                            
};


struct UGlobal_Bp_C_MapFromCBToESJK_Params
{
	class USettingConfig_C*                            SettingConfig;                                            
};


struct UGlobal_Bp_C_MapFromCBToESVN_Params
{
	class USettingConfig_C*                            SettingConfig;                                            
};


struct UGlobal_Bp_C_LoadSettingConfigFromSlot_Params
{
};


struct UGlobal_Bp_C_SetPostProcessSettings_Params
{
	int                                                ID;                                                       
	float                                              Time;                                                     
	bool                                               isReverse;                                                
	bool                                               isClosing;                                                
};


struct UGlobal_Bp_C_EventAndroidQuitGame_Params
{
};


struct UGlobal_Bp_C_Construct_Params
{
};


struct UGlobal_Bp_C_ExecuteUbergraph_Global_Bp_Params
{
	int                                                EntryPoint;                                               
};

}

