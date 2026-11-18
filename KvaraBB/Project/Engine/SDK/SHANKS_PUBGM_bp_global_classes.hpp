#pragma once


 
namespace SDK
{






class Abp_global_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  
	int                                                GLOBAL_USE_ITEM;                                          
	struct FBP_STRUCT_NATION_SWITCH                    BP_STRUCT_NATION_SWITCH;                                  
	int                                                BP_StartUpType;                                           
	int                                                BP_Share_Platform;                                        
	bool                                               BP_REVIEW_SVR_ENABLE_GM;                                  
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                BP_Platform;                                              
	bool                                               BP_IsAppleAudit;                                          
	bool                                               BP_IS_EXTERNAL_CHANNEL;                                   
	bool                                               BP_IOS_CHECK;                                             
	unsigned char                                      UnknownData01[0x1];                                       
	int                                                BP_GlobalSwitchCameraIndex;                               
	int                                                BP_Global_PreviewItemId;                                  
	bool                                               BP_Global_AndroidKey_IsValid;                             
	bool                                               BP_Global_AdvertiseNeedShowtask;                          
	unsigned char                                      UnknownData02[0x2];                                       
	struct FString                                     BP_GEM_REPORT_SUBEVENT;                                   
	struct FString                                     BP_GEM_REPORT_PARA2;                                      
	struct FString                                     BP_GEM_REPORT_PARA1;                                      
	bool                                               BP_CHECK_MENU_OPEN_RESULT;                                
	unsigned char                                      UnknownData03[0x3];                                       
	int                                                BP_CHECK_MENU_OPEN_ID;                                    
	int                                                BP_BA_REASON;                                             
	int                                                BP_BA_BUTTON_TYPE;                                        
	class USceneComponent*                             DefaultSceneRoot;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_global.bp_global_C");
		return pStaticClass;
	}


	void EventShowPlatWXStartup_NoFetch();
	void EventShowPlatWXStartup();
	void EventShowPlatQQStartup_NoFetch();
	void EventShowPlatQQStartup();
	void EventShowPlatIconTips_NoFetch();
	void EventShowPlatIconTips();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventSendClickGemReport_NoFetch();
	void EventSendClickGemReport();
	void EventSendBAReport_NoFetch();
	void EventSendBAReport();
	void EventGlobalUseItem_NoFetch();
	void EventGlobalUseItem();
	void EventGlobalCloseItemTips_NoFetch();
	void EventGlobalCloseItemTips();
	void EventFetchNationSwitch_NoFetch();
	void EventFetchNationSwitch();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventComMsgBoxSluaClickUrl_NoFetch();
	void EventComMsgBoxSluaClickUrl();
	void EventClickLobbyEventGemReport_NoFetch();
	void EventClickLobbyEventGemReport();
	void EventCheckIfMenuOpen_NoFetch();
	void EventCheckIfMenuOpen();
	void EventAndroidQuitGame_NoFetch();
	void EventAndroidQuitGame();
	void UserConstructionScript();
};


}

