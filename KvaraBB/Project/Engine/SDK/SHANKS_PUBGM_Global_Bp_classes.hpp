#pragma once


 
namespace SDK
{






class UGlobal_Bp_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class USettingConfig_C*                            SettingConfigObject;                                      
	class Abp_global_C*                                bp_global;                                                
	bool                                               isPostProcessVolumeInit;                                  
	unsigned char                                      UnknownData00[0x7];                                       
	class APostProcessVolume*                          postProcessClassic;                                       
	class ACameraPostProcessActor_C*                   cameraPostProcessActor;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C");
		return pStaticClass;
	}


	void InitOBSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitCustomizeSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitFireGyroSensibilitySettingData(class USettingConfig_C* ServerSettingConfig);
	void MapFromCBToESBH(class USettingConfig_C* SettingConfig);
	void InitMirrorObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitThrowObjMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitDrugMapPickupSetting(class USettingConfig_C* ServerSettingConfig);
	void InitBasicSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitPickupSettingData_XT(class USettingConfig_C* SettingConfig);
	void InitPickupSettingData(class USettingConfig_C* ServerSettingConfig);
	void InitSensibilitySettingData(class USettingConfig_C* ServerSettingConfig);
	void SetGrenadeDefaultPickValue();
	void InitMapFromCBToES();
	void MapFromCBToESGlobal(class USettingConfig_C* SettingConfig);
	void MapFromCBToESJK(class USettingConfig_C* SettingConfig);
	void MapFromCBToESVN(class USettingConfig_C* SettingConfig);
	void LoadSettingConfigFromSlot();
	void SetPostProcessSettings(int ID, float Time, bool isReverse, bool isClosing);
	void EventAndroidQuitGame();
	void Construct();
	void ExecuteUbergraph_Global_Bp(int EntryPoint);
};


}

