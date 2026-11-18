#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UAsyncLoadHelper_SetMaxTaskNum_Params
{
	int                                                Num;                                                      
};


struct UAsyncLoadHelper_RunNextTask_Params
{
};


struct UAsyncLoadHelper_OnLoadCallBack_Params
{
	struct FSoftObjectPath                             softObjPath;                                              
};


struct UAsyncLoadHelper_ClearOneTask_Params
{
	struct FString                                     ObjectPath;                                               
};


struct UAsyncLoadHelper_ClearAllTask_Params
{
};


struct UAsyncLoadHelper_AddTask_Params
{
	struct FString                                     ObjectPath;                                               
	int                                                LoadPriority;                                             
};


struct UAsyncLoadWidgetBlueprint_Cancel_Params
{
};


struct UAsyncLoadWidgetBlueprint_AsyncLoadWidgetBlueprint_Params
{
	struct FString                                     BlueprintPath;                                            
	int                                                Priority;                                                 
	class UAsyncLoadWidgetBlueprint*                   ReturnValue;                                              
};


struct UAsyncLoadWidgetBlueprint_AfterLoadCallback_Params
{
	struct FSoftObjectPath                             SoftObjectPath;                                           
};


struct UAsyncLoadWidgetBlueprint_Activate_Params
{
};


struct UAsyncTaskCDNDownloader_DownloadCDNContent_Params
{
	struct FString                                     URL;                                                      
	int                                                loaderType;                                               
	struct FString                                     savedDir;                                                 
	bool                                               breakpointContinualTransfer;                              
	class UAsyncTaskCDNDownloader*                     ReturnValue;                                              
};


struct UAsyncTaskDownloader_DownloadContent_Params
{
	struct FString                                     URL;                                                      
	int                                                loaderType;                                               
	struct FString                                     savedDir;                                                 
	bool                                               breakpointContinualTransfer;                              
	class UAsyncTaskDownloader*                        ReturnValue;                                              
};


struct UBattleScriptHelper_SyncNewBattlePlayer_Params
{
	class UBattleUtils*                                Utils;                                                    
	uint64_t                                           UID;                                                      
	struct FPlayerInfoData                             Info;                                                     
	uint32_t                                           ReturnValue;                                              
};


struct UBattleScriptHelper_SyncGameInfo_Params
{
	class UBattleUtils*                                Utils;                                                    
	struct FBattleGameInfo                             Info;                                                     
};


struct UBattleScriptHelper_SyncGameExit_Params
{
	class UBattleUtils*                                Utils;                                                    
};


struct UBattleScriptHelper_SyncBattlePlayerExit_Params
{
	class UBattleUtils*                                Utils;                                                    
	uint64_t                                           UID;                                                      
	struct FName                                       PlayerType;                                               
	struct FString                                     Reason;                                                   
};


struct UBattleScriptHelper_ResponPlayerWeaponDIYData_Params
{
	class UBattleUtils*                                Utils;                                                    
	uint64_t                                           PlayerUID;                                                
	struct FWeaponDIYData                              InWeaponDIYData;                                          
};


struct UBattleScriptHelper_GenerateAIPlayerParams_Params
{
	class UBattleUtils*                                Utils;                                                    
	struct FPlayerInfoData                             Info;                                                     
};


struct UBattlePlayer_ExtractGameModePlayerParams_Params
{
	struct FGameModePlayerParams                       ReturnValue;                                              
};


struct UBattleAIPlayer_ExtractGameModeAIPlayerParams_Params
{
	struct FGameModeAIPlayerParams                     ReturnValue;                                              
};


struct UBattleUtils_SyncNewBattlePlayer_Params
{
	uint64_t                                           UID;                                                      
	struct FPlayerInfoData                             Info;                                                     
	uint32_t                                           ReturnValue;                                              
};


struct UBattleUtils_SyncGameInfo_Params
{
	struct FBattleGameInfo                             Info;                                                     
};


struct UBattleUtils_SyncGameExit_Params
{
};


struct UBattleUtils_SyncBattlePlayerExit_Params
{
	uint64_t                                           UID;                                                      
	struct FName                                       PlayerType;                                               
	struct FString                                     Reason;                                                   
};


struct UBattleUtils_RetrievePlayerParams_Params
{
	struct FPlayerID                                   PlayerID;                                                 
	struct FGameModePlayerParams                       ReturnValue;                                              
};


struct UBattleUtils_RetrieveAIPlayerParams_Params
{
	struct FPlayerID                                   PlayerID;                                                 
	struct FGameModeAIPlayerParams                     ReturnValue;                                              
};


struct UBattleUtils_ResponPlayerWeaponDIYData_Params
{
	uint64_t                                           PlayerUID;                                                
	struct FWeaponDIYData                              InWeaponDIYData;                                          
};


struct UBattleUtils_RequestSomePlayersBattleData_Params
{
	TArray<uint64_t>                                   PlayerUIDList;                                            
	unsigned char                                      DataType;                                                 
};


struct UBattleUtils_RequestPlayerWeaponDIYData_Params
{
	uint64_t                                           PlayerUID;                                                
	int                                                WeaponSkinID;                                             
	int                                                PlanID;                                                   
};


struct UBattleUtils_RequestOnePlayersBattleData_Params
{
	uint64_t                                           PlayerUID;                                                
	unsigned char                                      DataType;                                                 
};


struct UBattleUtils_RequestAllPlayersBattleData_Params
{
	unsigned char                                      DataType;                                                 
};


struct UBattleUtils_OnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    
};


struct UBattleUtils_NewBattlePlayer_Params
{
	class UBattlePlayer*                               ReturnValue;                                              
};


struct UBattleUtils_NewBattleAIPlayer_Params
{
	class UBattleAIPlayer*                             ReturnValue;                                              
};


struct UBattleUtils_HandleGameModeStateChanged_Params
{
	struct FGameModeStateChangedParams                 Params;                                                   
};


struct UBattleUtils_GetBattleGameMode_Params
{
	class AUAEGameMode*                                ReturnValue;                                              
};


struct UBattleUtils_GenerateAIPlayerParams_Params
{
	struct FPlayerInfoData                             Info;                                                     
};


struct UBattleUtils_FindPlayerByUID_Params
{
	uint64_t                                           UID;                                                      
	struct FName                                       PlayerType;                                               
	class UBattlePlayer*                               ReturnValue;                                              
};


struct UBattleUtils_FindPlayerByPlayerName_Params
{
	struct FString                                     PlayerName;                                               
	struct FName                                       PlayerType;                                               
	class UBattlePlayer*                               ReturnValue;                                              
};


struct UBattleUtils_FindPlayerByPlayerKey_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FName                                       PlayerType;                                               
	class UBattlePlayer*                               ReturnValue;                                              
};


struct UBattleWindowMgr_ShowUI_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     WindowName;                                               
	class UObject*                                     ObjectParam;                                              
};


struct UBattleWindowMgr_SetInstance_Params
{
	class UBattleWindowMgrLuaUtils*                    InInstance;                                               
	class ULuaStateWrapper*                            InLuaStateWrapper;                                        
};


struct UBattleWindowMgr_HideUI_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     WindowName;                                               
};


struct UBattleWindowMgr_CheckWindowOpen_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     WindowName;                                               
	bool                                               ReturnValue;                                              
};


struct UBugReporter_SendScreenShot_Params
{
	struct FString                                     ErrorReason;                                              
	struct FString                                     errorDescription;                                         
	struct FString                                     ImagePath;                                                
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UBugReporter_SendLog_Params
{
	struct FString                                     ErrorReason;                                              
	struct FString                                     errorDescription;                                         
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	bool                                               pullAll;                                                  
	bool                                               zipLogUpload;                                             
};


struct UBugReporter_ReadZipLog_Params
{
	struct FString                                     Filename;                                                 
};


struct UBugReporter_CompressLog_Params
{
	bool                                               pullAllLog;                                               
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UBusinessHelper_XorEncryptDecrypt_Params
{
	struct FString                                     Data;                                                     
	bool                                               bEncrypt;                                                 
	struct FString                                     Key;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_UIGetResWithPath_Params
{
	struct FString                                     DesManagerName;                                           
	class UObject*                                     ReturnValue;                                              
};


struct UBusinessHelper_UIGetLuaManagerByName_Params
{
	class UUAEUserWidget*                              pUIClass;                                                 
	struct FString                                     InManagerName;                                            
	class ALuaClassObj*                                ReturnValue;                                              
};


struct UBusinessHelper_UIGetLuaManager_Params
{
	class UUAEUserWidget*                              pUIClass;                                                 
	class ALuaClassObj*                                ReturnValue;                                              
};


struct UBusinessHelper_StopUIStat_Params
{
	struct FString                                     UIName;                                                   
	bool                                               bReport;                                                  
};


struct UBusinessHelper_StopTimeWatch_Params
{
	float                                              ReturnValue;                                              
};


struct UBusinessHelper_StartUIStat_Params
{
	struct FString                                     UIName;                                                   
};


struct UBusinessHelper_StartTimeWatch_Params
{
};


struct UBusinessHelper_SpecialBase64Encode_Params
{
	struct FString                                     Data;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_SpecialBase64Decode_Params
{
	struct FString                                     Data;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_SetUIStatMaxClickTimes_Params
{
	int                                                Times;                                                    
};


struct UBusinessHelper_LoadAssetFromPath_Params
{
	struct FString                                     DesManagerName;                                           
	class UObject*                                     ReturnValue;                                              
};


struct UBusinessHelper_IsSplitMiniPakVersion_Params
{
	bool                                               ReturnValue;                                              
};


struct UBusinessHelper_IsSplitMapPakVersion_Params
{
	bool                                               ReturnValue;                                              
};


struct UBusinessHelper_IsLightVer_Params
{
	bool                                               ReturnValue;                                              
};


struct UBusinessHelper_IsFirstGaming_Params
{
	bool                                               ReturnValue;                                              
};


struct UBusinessHelper_IsClassOf_Params
{
	class UObject*                                     Object;                                                   
	class UClass*                                      Class;                                                    
	bool                                               ReturnValue;                                              
};


struct UBusinessHelper_IsChildOf_Params
{
	class UClass*                                      ChildClass;                                               
	class UClass*                                      Class;                                                    
	bool                                               ReturnValue;                                              
};


struct UBusinessHelper_IsCEVersion_Params
{
	bool                                               ReturnValue;                                              
};


struct UBusinessHelper_IsAppFromStore_Params
{
	bool                                               ReturnValue;                                              
};


struct UBusinessHelper_HasDownloadedBasePak_Params
{
	bool                                               ReturnValue;                                              
};


struct UBusinessHelper_GetXORKey_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetWidgetByName_Params
{
	class UUAEUserWidget*                              pUIClass;                                                 
	struct FString                                     InManagerName;                                            
	struct FString                                     InWidgtName;                                              
	class UUAEUserWidget*                              ReturnValue;                                              
};


struct UBusinessHelper_GetVoiceSdkGameId_Params
{
	uint64_t                                           ReturnValue;                                              
};


struct UBusinessHelper_GetTSSGameId_Params
{
	int                                                ReturnValue;                                              
};


struct UBusinessHelper_GetTime_Params
{
	float                                              ReturnValue;                                              
};


struct UBusinessHelper_GetSplitMapConfigInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetPublishRegion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetPathFromUserWidgetToViewport_Params
{
	class UUserWidget*                                 UserWidget;                                               
	bool                                               withObjectNum;                                            
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetPackChannel_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetPackageType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetOperationRegion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetObjectClassName_Params
{
	class UObject*                                     Object;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetMobileBasePath_Params
{
	struct FString                                     InPath;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetLuaManagerByName_Params
{
	class UUAEUserWidget*                              pUIClass;                                                 
	struct FString                                     InManagerName;                                            
	class ALuaClassObj*                                ReturnValue;                                              
};


struct UBusinessHelper_GetITopGameId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetInGameLocalConnectURL_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetIMSDKEnv_Params
{
	int                                                ReturnValue;                                              
};


struct UBusinessHelper_GetDeviceQualityLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UBusinessHelper_GetDeviceOrientation_Params
{
	int                                                ReturnValue;                                              
};


struct UBusinessHelper_GetDataTable_Params
{
	struct FString                                     tableName;                                                
	class UUAEDataTable*                               ReturnValue;                                              
};


struct UBusinessHelper_GetCurrentNetworkState_Params
{
	int                                                ReturnValue;                                              
};


struct UBusinessHelper_GetChildByName_Params
{
	class UUserWidget*                                 pParent;                                                  
	struct FString                                     Name;                                                     
	class UWidget*                                     ReturnValue;                                              
};


struct UBusinessHelper_GetBuildURL_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetBuildNo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetBranchName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetBase64Key_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetAppVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_GetAOSSHOPID_Params
{
	int                                                ReturnValue;                                              
};


struct UBusinessHelper_GetAOSSHOP_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_FullGC_Params
{
};


struct UBusinessHelper_ClearDisplayLookupTable_Params
{
};


struct UBusinessHelper_BroadCastMSG_Params
{
	class UFrontendHUD*                                FrontendHUD;                                              
	struct FString                                     DesManagerName;                                           
	struct FString                                     Msg;                                                      
};


struct UBusinessHelper_Base64Encode_Params
{
	struct FString                                     Data;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UBusinessHelper_Base64Decode_Params
{
	struct FString                                     Data;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_UpdateXGPushNightTag_Params
{
	bool                                               bInit;                                                    
};


struct UIntlHelper_UpdateXGPushDayTag_Params
{
	bool                                               bInit;                                                    
};


struct UIntlHelper_UpdateVoiceUrl_Params
{
	struct FString                                     regionVoiceUrl;                                           
};


struct UIntlHelper_UnInitTweenMaker_Params
{
};


struct UIntlHelper_TimeFormatString_Params
{
	struct FString                                     Format;                                                   
	int                                                hours;                                                    
	int                                                Mins;                                                     
	int                                                secs;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_SaveXGTags_Params
{
	struct FString                                     Language;                                                 
	struct FString                                     timezone;                                                 
	struct FString                                     Region;                                                   
};


struct UIntlHelper_OnSwitchLanguage_Params
{
};


struct UIntlHelper_OnChoosingZone_Params
{
	int                                                ZoneID;                                                   
	struct FString                                     AddrIP;                                                   
	struct FString                                     regionVoiceUrl;                                           
};


struct UIntlHelper_IsRemoteNotificationsEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UIntlHelper_IsHelpshiftEnable4CurrentChannel_Params
{
	bool                                               ReturnValue;                                              
};


struct UIntlHelper_IsHelpshiftEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct UIntlHelper_IsAwakedByAdjust_Params
{
	bool                                               ReturnValue;                                              
};


struct UIntlHelper_InitTweenMaker_Params
{
};


struct UIntlHelper_HelpshiftUploadLog_Params
{
};


struct UIntlHelper_HelpshiftShowSingleFAQWithInfo_Params
{
	struct FString                                     publishID;                                                
	TMap<struct FString, struct FString>               hsMetaInfo;                                               
	struct FString                                     ExtraTags;                                                
	struct FString                                     hsIssueFieldsJson;                                        
};


struct UIntlHelper_HelpshiftShowFAQsWithInfo_Params
{
	TMap<struct FString, struct FString>               hsMetaInfo;                                               
	struct FString                                     ExtraTags;                                                
	struct FString                                     hsIssueFieldsJson;                                        
};


struct UIntlHelper_HelpshiftShowFAQs_Params
{
};


struct UIntlHelper_HelpshiftShowConversionWithInfo_Params
{
	TMap<struct FString, struct FString>               hsMetaInfo;                                               
	struct FString                                     hsIssueFieldsJson;                                        
};


struct UIntlHelper_HelpshiftShowConversion_Params
{
};


struct UIntlHelper_HelpshiftRequestUnreadMessagesCount_Params
{
};


struct UIntlHelper_HelpshiftGetUnreadMessgesCount_Params
{
	int                                                ReturnValue;                                              
};


struct UIntlHelper_HelpshiftClearUnreadMessgesCount_Params
{
};


struct UIntlHelper_GetTranslationText_Params
{
	struct FString                                     Key;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetSavedXGTimezoneTag_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetSavedXGRegionTag_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetSavedXGPushNightTag_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetSavedXGPushDayTag_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetSavedXGLanguageTag_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetPlayerUCLevel_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetLocalTimezone_Params
{
	int                                                ReturnValue;                                              
};


struct UIntlHelper_GetLocalizeStringWithString_Params
{
	struct FString                                     sourceString;                                             
	int                                                numStringIndex;                                           
	struct FString                                     string1;                                                  
	struct FString                                     string2;                                                  
	struct FString                                     string3;                                                  
	struct FString                                     string4;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetLocalizeStringWithNum_Params
{
	int                                                ID;                                                       
	int                                                numStringIndex;                                           
	struct FString                                     string1;                                                  
	struct FString                                     string2;                                                  
	struct FString                                     string3;                                                  
	struct FString                                     string4;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetLocalizeStrByStr_Params
{
	struct FString                                     Source;                                                   
	struct FString                                     string1;                                                  
	struct FString                                     string2;                                                  
	struct FString                                     string3;                                                  
	struct FString                                     string4;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetLocalizeStrByID_Params
{
	int                                                ID;                                                       
	struct FString                                     string1;                                                  
	struct FString                                     string2;                                                  
	struct FString                                     string3;                                                  
	struct FString                                     string4;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetLocalizationStringWithID_Params
{
	int                                                ID;                                                       
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetLocalizationString_Params
{
	struct FString                                     Key;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetLocalizationBattleStringWithID_Params
{
	int                                                ID;                                                       
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetHistoryErrorCode_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetGameMasterVID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetDeepLinkUrl_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_GetCurrentZoneID_Params
{
	int                                                ReturnValue;                                              
};


struct UIntlHelper_FormatLocalizeStrByStr_Params
{
	struct FString                                     Source;                                                   
	TArray<struct FString>                             stringArr;                                                
	struct FString                                     ReturnValue;                                              
};


struct UIntlHelper_DirectToNotificationSetup_Params
{
};


struct UIntlHelper_ClearAdjustDeepLink_Params
{
};


struct UIntlHelper_AdjustParaAnalysis_Params
{
};


struct UIntlHelper_AddErrorCodeToHistory_Params
{
	struct FString                                     InErrorCode;                                              
};


struct ATestHUD_TestFunctionNOParam_Params
{
};


struct ATestHUD_TestFunctionBP_LUA_Params
{
	float                                              ReturnValue;                                              
};


struct ATestHUD_TestFunctionBP_Params
{
	float                                              ReturnValue;                                              
};


struct ATestHUD_Function_Lua_Params
{
	float                                              ReturnValue;                                              
};


struct ATestHUD_Function_CPlus_Call_Params
{
	float                                              ReturnValue;                                              
};


struct ATestHUD_Function_CPlus_Params
{
	float                                              ReturnValue;                                              
};


struct ATestHUD_Function_BP_CPP_Params
{
	float                                              ReturnValue;                                              
};


struct ATestHUD_Function_BP_Call_LUA_Params
{
	float                                              ReturnValue;                                              
};


struct ATestHUD_Function_BP_Call_CPP_Params
{
	float                                              ReturnValue;                                              
};


struct ATestHUD_Function_BP_Call_CPlus_Params
{
	float                                              ReturnValue;                                              
};


struct ATestHUD_Function_BP_Call_Params
{
	float                                              ReturnValue;                                              
};


struct ATestHUD_Function_BP_Params
{
	float                                              ReturnValue;                                              
};


struct UCDNUpdate_StartUpdateApp_Params
{
};


struct UCDNUpdate_StartAppUpdate_Params
{
	bool                                               StartGrayUpdate;                                          
};


struct UCDNUpdate_OnRequestProgress_Params
{
	struct FCDNDownloaderInfo                          Info;                                                     
};


struct UCDNUpdate_OnRequestComplete_Params
{
	struct FCDNDownloaderInfo                          Info;                                                     
};


struct UCDNUpdate_IsUpdating_Params
{
	bool                                               ReturnValue;                                              
};


struct UCDNUpdate_IsGrayUpdate_Params
{
	bool                                               ReturnValue;                                              
};


struct UCDNUpdate_GetCurStage_Params
{
	float                                              percent;                                                  
	int                                                GetCurVal;                                                
	int                                                GetMaxVal;                                                
	int                                                ReturnValue;                                              
};


struct UCDNUpdate_FinishUpdate_Params
{
};


struct UCDNUpdate_ContinueUpdate_Params
{
};


struct UCDNUpdate_CancelUpdate_Params
{
};


struct UCentauriManager_TickCentauriPackage_Params
{
};


struct UCentauriManager_Tick_Params
{
	float                                              DeltaTime;                                                
};


struct UCentauriManager_SwitchPayChannel_Params
{
	ECentauriMultiPayChannelSwitch                     switchChannel;                                            
};


struct UCentauriManager_Subscribe_Params
{
	struct FString                                     productid;                                                
	struct FString                                     InPayItem;                                                
	struct FString                                     Country;                                                  
	struct FString                                     currency;                                                 
	struct FString                                     serviceCode;                                              
	struct FString                                     serviceName;                                              
	bool                                               autoPay;                                                  
	struct FString                                     basePlanId;                                               
	struct FString                                     gwOfferId;                                                
	struct FString                                     InChannelExtras;                                          
	struct FString                                     InAppExtends;                                             
};


struct UCentauriManager_SetZoneID_Params
{
	struct FString                                     inZoneID;                                                 
	struct FString                                     inGoodsZoneID;                                            
};


struct UCentauriManager_SetRoleInfo_Params
{
	int                                                InChannel;                                                
	struct FString                                     OpenID;                                                   
};


struct UCentauriManager_SetPayEnvironment_Params
{
	struct FString                                     InPayEnvironment;                                         
};


struct UCentauriManager_SetInIDC_Params
{
	struct FString                                     InInIDC;                                                  
};


struct UCentauriManager_SetIDCInfo_Params
{
	struct FString                                     InIDCInfo;                                                
};


struct UCentauriManager_SetFrontendHUD_Params
{
	class UGameFrontendHUD*                            InFrontendHUD;                                            
};


struct UCentauriManager_Reprovide_Params
{
};


struct UCentauriManager_Pay_Params
{
	struct FString                                     productid;                                                
	struct FString                                     InPayItem;                                                
	struct FString                                     Country;                                                  
	struct FString                                     currency;                                                 
	struct FString                                     InChannelExtras;                                          
	struct FString                                     InAppExtends;                                             
	struct FString                                     InPayChannel;                                             
	struct FString                                     InURL;                                                    
	bool                                               bUseWOW;                                                  
};


struct UCentauriManager_ModifySubscribe_Params
{
	struct FString                                     newProductid;                                             
	struct FString                                     Country;                                                  
	struct FString                                     currency;                                                 
	struct FString                                     serviceCode;                                              
	struct FString                                     serviceName;                                              
	bool                                               autoPay;                                                  
	struct FString                                     basePlanId;                                               
	struct FString                                     gwOfferId;                                                
	struct FString                                     InChannelExtras;                                          
	struct FString                                     InAppExtends;                                             
};


struct UCentauriManager_IsH5PayEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct UCentauriManager_Initialize_Params
{
	ECentauriMultiPayChannelSwitch                     envior;                                                   
	bool                                               bUseWOW;                                                  
};


struct UCentauriManager_H5Pay_Params
{
	struct FString                                     Country;                                                  
	struct FString                                     InChannelExtras;                                          
	struct FString                                     InAppExtends;                                             
	bool                                               bUseWOW;                                                  
};


struct UCentauriManager_GoodsPresent_Params
{
	struct FString                                     productid;                                                
	struct FString                                     InPayItem;                                                
	struct FString                                     Price;                                                    
	struct FString                                     Country;                                                  
	struct FString                                     currency;                                                 
	struct FString                                     MetaData;                                                 
	struct FString                                     InChannelExtras;                                          
	struct FString                                     InAppExtends;                                             
	struct FString                                     InPayChannel;                                             
	struct FString                                     InURL;                                                    
	bool                                               bUseWOW;                                                  
};


struct UCentauriManager_Goods_Params
{
	struct FString                                     productid;                                                
	struct FString                                     InPayItem;                                                
	struct FString                                     Price;                                                    
	struct FString                                     Country;                                                  
	struct FString                                     currency;                                                 
	struct FString                                     InChannelExtras;                                          
	struct FString                                     InAppExtends;                                             
	struct FString                                     InPayChannel;                                             
	struct FString                                     InURL;                                                    
	bool                                               bUseWOW;                                                  
};


struct UCentauriManager_GetProductInfo_Params
{
	TMap<struct FString, struct FString>               listProductID;                                            
	bool                                               bUseWOW;                                                  
};


struct UCentauriManager_getPF_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCentauriManager_GetPaymentProductId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCentauriManager_GetPayChannel_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCentauriManager_GetPackChannel_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCentauriManager_GetOfferIDForWOWH5_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCentauriManager_GetOfferIDForWOW_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCentauriManager_GetOfferID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCentauriManager_GetNativePackageTag_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UCentauriManager_GetMPInfo_Params
{
	struct FString                                     Country;                                                  
	struct FString                                     currency;                                                 
	struct FString                                     InAppExtends;                                             
	struct FString                                     InDrmInfo;                                                
	bool                                               bUseWOW;                                                  
};


struct UCentauriManager_GetIntroPrice_Params
{
	TMap<struct FString, struct FString>               listProductID;                                            
	bool                                               bUseWOW;                                                  
};


struct UCentauriManager_GetInstance_Params
{
	class UCentauriManager*                            ReturnValue;                                              
};


struct UCentauriManager_GetAOSSHOP_Params
{
	int                                                ReturnValue;                                              
};


struct UCompressTextureHelper_TestGetTexture2DFromDisk_KTX2_Params
{
	struct FString                                     PathName;                                                 
	class UTexture2D*                                  ReturnValue;                                              
};


struct UGameBackendUtils_GetTableManager_Params
{
	class UUAETableManager*                            ReturnValue;                                              
};


struct UGameBackendHUD_GetUtils_Params
{
	class UGameBackendUtils*                           ReturnValue;                                              
};


struct UGameBackendHUD_GetInstance_Params
{
	class UGameBackendHUD*                             ReturnValue;                                              
};


struct UGameBackendHUD_GetGameFrontendHUDByGameInstance_Params
{
	class UGameInstance*                               GameInstance;                                             
	class UGameFrontendHUD*                            ReturnValue;                                              
};


struct UGameBackendHUD_GetFirstGameFrontendHUD_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UGameFrontendHUD*                            ReturnValue;                                              
};


struct UGameBusinessManager_GetWidget_Params
{
	int                                                Index;                                                    
	class UUAEUserWidget*                              ReturnValue;                                              
};


struct UGameBusinessManager_GetLuaObject_Params
{
	class ALuaClassObj*                                ReturnValue;                                              
};


struct UGameBusinessManager_GetGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            ReturnValue;                                              
};


struct UGameFrontendHUD_UnRegisterUIShowHideEventDelegate_Params
{
	struct FString                                     Source;                                                   
};


struct UGameFrontendHUD_TimeStatisticStop_Params
{
	int                                                Type;                                                     
	struct FString                                     Name;                                                     
};


struct UGameFrontendHUD_TimeStatisticStart_Params
{
	int                                                Type;                                                     
};


struct UGameFrontendHUD_TickUdpCollector_Params
{
	float                                              DeltaTime;                                                
};


struct UGameFrontendHUD_StatisVisibilityWidget_Params
{
	class UWidget*                                     Widget;                                                   
};


struct UGameFrontendHUD_StatisLoadedTexture_Params
{
	class UTexture*                                    Texture;                                                  
};


struct UGameFrontendHUD_StartUpdate_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameFrontendHUD_StartGrayUpdate_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameFrontendHUD_StartDolphinUpdateAfterCDNUpdateFailed_Params
{
};


struct UGameFrontendHUD_StartCDNUpdateAfterDolphinUpdateFailed_Params
{
};


struct UGameFrontendHUD_ShutdownUnrealNetwork_Params
{
};


struct UGameFrontendHUD_SetShouldShowAdaptTipInLobby_Params
{
	bool                                               bShoudShow;                                               
};


struct UGameFrontendHUD_SetGameSubMode_Params
{
	struct FString                                     SubMode;                                                  
};


struct UGameFrontendHUD_SetGameStatusMap_Params
{
	TMap<struct FString, struct FString>               InGameStatusMap;                                          
};


struct UGameFrontendHUD_SetClientEnterBattleStage_Params
{
	struct FString                                     InStageStr;                                               
};


struct UGameFrontendHUD_SetAccountByWebLogin_Params
{
	int                                                Channel;                                                  
	struct FString                                     OpenID;                                                   
	struct FString                                     UserId;                                                   
	struct FString                                     TokenID;                                                  
	int                                                expireTime;                                               
};


struct UGameFrontendHUD_RetryDownload_Params
{
};


struct UGameFrontendHUD_RetryCDNDownload_Params
{
};


struct UGameFrontendHUD_RequestPhotoPermission_Params
{
	struct FScriptDelegate                             PermissionResultEvent;                                    
};


struct UGameFrontendHUD_RequestCameraPermission_Params
{
	struct FScriptDelegate                             PermissionResultEvent;                                    
};


struct UGameFrontendHUD_ReportNetContinuousSaturate_Params
{
};


struct UGameFrontendHUD_RemoveSuppotAdaptationBind_Params
{
	class UPanelSlot*                                  PanelSlot;                                                
};


struct UGameFrontendHUD_ReleaseLuaBlueprintSysMgr_Params
{
};


struct UGameFrontendHUD_ReleaseInGameUIManager_Params
{
};


struct UGameFrontendHUD_ReleaseBattleUtils_Params
{
};


struct UGameFrontendHUD_RegisterUserSettingsDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 
};


struct UGameFrontendHUD_RegisterUIShowHideEventDelegate_Params
{
	struct FString                                     Source;                                                   
	struct FScriptDelegate                             Delegate;                                                 
};


struct UGameFrontendHUD_PickVideo_Params
{
	struct FScriptDelegate                             VideoPickEvent;                                           
	int                                                MaxSize;                                                  
	float                                              MaxDuration;                                              
};


struct UGameFrontendHUD_PickImageDetectQRCode_Params
{
	struct FScriptDelegate                             ImagePickDetectEvent;                                     
};


struct UGameFrontendHUD_OnWebviewNotify_Params
{
	struct FWebviewInfoWrapper                         webviewinfo;                                              
};


struct UGameFrontendHUD_OnWebviewActionNotify_Params
{
	struct FString                                     URL;                                                      
};


struct UGameFrontendHUD_OnUAAssistantEvent_Params
{
	struct FUAAssistantInfoWrapper                     UAAssistentInfo;                                          
};


struct UGameFrontendHUD_OnSDKCallbackEvent_Params
{
	struct FSDKCallbackInfoWrapper                     sdkCallbackInfo;                                          
};


struct UGameFrontendHUD_OnRequestComplete_Params
{
	struct FCDNDownloaderInfo                          Info;                                                     
};


struct UGameFrontendHUD_OnRefreshAccountInfo_Params
{
	bool                                               Result;                                                   
	int                                                InChannel;                                                
	struct FString                                     InOpenid;                                                 
};


struct UGameFrontendHUD_OnQuickLoginNotify_Params
{
	struct FWakeupInfoWrapper                          wakeupinfo;                                               
};


struct UGameFrontendHUD_OnPlatformFriendNotify_Params
{
	struct FPlatformFriendInfoMap                      PlatformFriendInfoMap;                                    
};


struct UGameFrontendHUD_OnNotUpdateFinished_Params
{
};


struct UGameFrontendHUD_OnLoginFlowNotify_Params
{
	int                                                _Flow;                                                    
	int                                                _Param;                                                   
	struct FString                                     ExtraData;                                                
};


struct UGameFrontendHUD_OnHttpImgResponse_Params
{
	class UTexture2D*                                  Texture;                                                  
	class UImageDownloader*                            downloader;                                               
};


struct UGameFrontendHUD_OnGroupNotify_Params
{
	struct FGroupInfoWrapper                           groupInfo;                                                
};


struct UGameFrontendHUD_OnGetTicketNotify_Params
{
	struct FString                                     Ticket;                                                   
};


struct UGameFrontendHUD_OnGetShortUrlNotify_Params
{
	int                                                Ret;                                                      
	struct FString                                     shortUrl;                                                 
};


struct UGameFrontendHUD_OnGetCountryNoNotify_Params
{
	int                                                Country;                                                  
};


struct UGameFrontendHUD_OnGenQRImgNotify_Params
{
	int                                                Ret;                                                      
	int                                                Size;                                                     
	struct FString                                     imgPath;                                                  
};


struct UGameFrontendHUD_OnGameMasterEvent_Params
{
	struct FString                                     EventName;                                                
	int                                                Ret;                                                      
};


struct UGameFrontendHUD_OnConnectorNetStateChangeNotify_Params
{
	int                                                State;                                                    
	int                                                EventParam1;                                              
	int                                                EventParam2;                                              
	int                                                EventParam3;                                              
};


struct UGameFrontendHUD_OnCheckUpdateStateFinished_Params
{
	struct FDownloaderInfo                             Info;                                                     
};


struct UGameFrontendHUD_OnAreaChanged_Params
{
	struct FString                                     InArea;                                                   
};


struct UGameFrontendHUD_NotifyLoadingUIOperation_Params
{
	int                                                OperationType;                                            
};


struct UGameFrontendHUD_MakeToSuppotAdaptation_Params
{
	class UPanelSlot*                                  PanelSlot;                                                
};


struct UGameFrontendHUD_LuaDoString_Params
{
	struct FString                                     LuaString;                                                
};


struct UGameFrontendHUD_IsWindowOB_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameFrontendHUD_IsODPaksBinLoaded_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameFrontendHUD_IsInstallPlatform_Params
{
	struct FString                                     Platform;                                                 
	bool                                               ReturnValue;                                              
};


struct UGameFrontendHUD_IsCEHideLobbyUI_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameFrontendHUD_HasAnyNetMsgToHandle_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameFrontendHUD_GetWidgetRenderCanChange_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameFrontendHUD_GetVoiceSDKInterface_Params
{
	class UVoiceSDKInterface*                          ReturnValue;                                              
};


struct UGameFrontendHUD_GetUserSettings_Params
{
	class USaveGame*                                   ReturnValue;                                              
};


struct UGameFrontendHUD_GetUpdater_Params
{
	class UGDolphinUpdater*                            ReturnValue;                                              
};


struct UGameFrontendHUD_GetTranslator_Params
{
	class UTranslator*                                 ReturnValue;                                              
};


struct UGameFrontendHUD_GetShouldShowAdaptTipInLobby_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameFrontendHUD_GetSettingSubsystem_Params
{
	class USettingSubsystem*                           ReturnValue;                                              
};


struct UGameFrontendHUD_GetPufferDownloader_Params
{
	class UGCPufferDownloader*                         ReturnValue;                                              
};


struct UGameFrontendHUD_GetPlayerStatusReportInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameFrontendHUD_GetPingReportInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameFrontendHUD_GetPhotoPermission_Params
{
	int                                                ReturnValue;                                              
};


struct UGameFrontendHUD_GetPacketLossReportInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameFrontendHUD_GetLuaStateWrapper_Params
{
	class ULuaStateWrapper*                            ReturnValue;                                              
};


struct UGameFrontendHUD_GetLuaEventBridge_Params
{
	class ULuaEventBridge*                             ReturnValue;                                              
};


struct UGameFrontendHUD_GetLuaBlueprintSysMgr_Params
{
	class ULuaBlueprintMgr*                            ReturnValue;                                              
};


struct UGameFrontendHUD_GetHttpWrapper_Params
{
	class UHttpWrapper*                                ReturnValue;                                              
};


struct UGameFrontendHUD_GetGameSubMode_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameFrontendHUD_GetGameState_Params
{
	class AGameStateBase*                              ReturnValue;                                              
};


struct UGameFrontendHUD_GetFPSReportInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameFrontendHUD_GetEffectSettingMgr_Params
{
	class UEffectSettingMgr*                           ReturnValue;                                              
};


struct UGameFrontendHUD_GetDetailNetInfoFromDPM_Params
{
	int                                                ReturnValue;                                              
};


struct UGameFrontendHUD_GetColorBlindnessMgr_Params
{
	class UColorBlindnessMgr*                          ReturnValue;                                              
};


struct UGameFrontendHUD_GetClientNetObj_Params
{
	class UObject*                                     ReturnValue;                                              
};


struct UGameFrontendHUD_GetClientEnterBattleStageCostTime_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameFrontendHUD_GetClientEnterBattleStage_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameFrontendHUD_GetCameraPermission_Params
{
	int                                                ReturnValue;                                              
};


struct UGameFrontendHUD_GetBugReporter_Params
{
	class UBugReporter*                                ReturnValue;                                              
};


struct UGameFrontendHUD_GetBattleUtils_Params
{
	class UBattleUtils*                                ReturnValue;                                              
};


struct UGameFrontendHUD_GetBattleIDHexStr_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameFrontendHUD_GetAsyncLoadHelper_Params
{
	class UAsyncLoadHelper*                            ReturnValue;                                              
};


struct UGameFrontendHUD_FinishModifyUserSettings_Params
{
};


struct UGameFrontendHUD_EnableLobbyEntry_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameFrontendHUD_EnableFPSAndMemoryLog_Params
{
	bool                                               bEnable;                                                  
};


struct UGameFrontendHUD_DispatchLongTimeNoOperation_Params
{
	int                                                TimeOutCounter;                                           
};


struct UGameFrontendHUD_DestroyDolphin_Params
{
};


struct UGameFrontendHUD_CvmRotateClockwise_Params
{
	float                                              Yaw;                                                      
	float                                              DeltaTime;                                                
	float                                              ReturnValue;                                              
};


struct UGameFrontendHUD_CreateQRCodeTexture_Params
{
	struct FString                                     Text;                                                     
	class UTexture2D*                                  ReturnValue;                                              
};


struct UGameFrontendHUD_CreateInGameUIManager_Params
{
};


struct UGameFrontendHUD_CreateBattleUtils_Params
{
};


struct UGameFrontendHUD_CallGlobalScriptFunctionWithString_Params
{
	struct FString                                     InFunctionName;                                           
	struct FString                                     Arg1;                                                     
};


struct UGameFrontendHUD_CallGlobalScriptFunction_Params
{
	struct FString                                     InFunctionName;                                           
};


struct UGameFrontendHUD_BeginModifyUserSettings_Params
{
};


struct UGameFrontendHUD_BattleUtilsGameEnd_Params
{
};


struct UGameFrontendHUD_AfterLoadedEditorLogin_Params
{
};


struct UGameFrontendHUD_AddAdaptationWidgetDelegateEx_Params
{
	class UPanelSlot*                                  PanelSlot;                                                
};


struct UGameFrontendHUD_AddAdaptationWidgetDelegate_Params
{
	class UPanelSlot*                                  PanelSlot;                                                
};


struct UGameJoyInterface_ShareVideo_Params
{
	int                                                Channel;                                                  
};


struct UGameJoyInterface_SetGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            InHUD;                                                    
};


struct UGameJoyInterface_OnVideoShare_Params
{
	struct FString                                     Msg;                                                      
};


struct UGameJoyInterface_OnShowVideoPlayer_Params
{
	int                                                IsShow;                                                   
};


struct UGameJoyInterface_OnRecordingStart_Params
{
	int                                                status;                                                   
};


struct UGameJoyInterface_OnRecordingEnd_Params
{
	int64_t                                            Duration;                                                 
};


struct UGameJoyInterface_OnManualRecordingStart_Params
{
	int                                                status;                                                   
};


struct UGameJoyInterface_OnCheckSDKPermission_Params
{
	bool                                               IsSuccess;                                                
};


struct UGameJoyInterface_OnCheckSDKFeature_Params
{
	int                                                sdkFeatureInt;                                            
};


struct UGameJoyInterface_IsSDKFeatureSupport_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameJoyInterface_GetInstance_Params
{
	class UGameJoyInterface*                           ReturnValue;                                              
};


struct UGDolphinUpdater_StartAppUpdate_Params
{
};


struct UGDolphinUpdater_SetEnableCDNGetVersion_Params
{
	bool                                               Enable;                                                   
};


struct UGDolphinUpdater_OnUpdateError_Params
{
	int                                                curVersionStage;                                          
	int                                                ErrorCode;                                                
};


struct UGDolphinUpdater_OnDolphinBGDownloadDone_Params
{
};


struct UGDolphinUpdater_OnAreaChanged_Params
{
	struct FString                                     InArea;                                                   
};


struct UGDolphinUpdater_IsUpdating_Params
{
	bool                                               ReturnValue;                                              
};


struct UGDolphinUpdater_IsGrayUpdate_Params
{
	bool                                               ReturnValue;                                              
};


struct UGDolphinUpdater_IsExamine_Params
{
	bool                                               ReturnValue;                                              
};


struct UGDolphinUpdater_Install_Params
{
};


struct UGDolphinUpdater_GetTotalValue_Params
{
	int                                                ReturnValue;                                              
};


struct UGDolphinUpdater_GetCurValue_Params
{
	int                                                ReturnValue;                                              
};


struct UGDolphinUpdater_GetCurStage_Params
{
	float                                              percent;                                                  
	int                                                GetCurVal;                                                
	int                                                GetMaxVal;                                                
	int                                                ReturnValue;                                              
};


struct UGDolphinUpdater_GetCurPercent_Params
{
	float                                              ReturnValue;                                              
};


struct UGDolphinUpdater_GetChannelIDWithHUD_Params
{
	class UGameFrontendHUD*                            InGameFrontendHUD;                                        
	uint32_t                                           ReturnValue;                                              
};


struct UGDolphinUpdater_GetChannelID_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UGDolphinUpdater_FinishUpdate_Params
{
};


struct UGDolphinUpdater_FinishPufferUpdate_Params
{
};


struct UGDolphinUpdater_EnableIOSBGDownload4G_Params
{
	bool                                               bEnableCellularAccess;                                    
};


struct UGDolphinUpdater_EnableCDNGetVersion_Params
{
	bool                                               ReturnValue;                                              
};


struct UGDolphinUpdater_DynamicAdjustDolphinSystemParameter_Params
{
	TMap<int, struct FString>                          InConiguration;                                           
};


struct UGDolphinUpdater_ContinueUpdate_Params
{
};


struct UGDolphinUpdater_CancelUpdate_Params
{
};


struct UGDolphinUpdater_CancelAppUpdate_Params
{
};


struct UAvatarItemDownloadPuffer_StartDownloadItem_Params
{
	uint32_t                                           ItemId;                                                   
	uint32_t                                           Priority;                                                 
	struct FScriptDelegate                             OnItemDownloadDelegate;                                   
};


struct UAvatarItemDownloadPuffer_StartBatchDownloadItem_Params
{
	TArray<uint32_t>                                   ItemIDs;                                                  
	uint32_t                                           Priority;                                                 
	struct FScriptDelegate                             OnBatchItemDownloadDelegate;                              
};


struct UGCPufferDownloader_StopTask_Params
{
	uint64_t                                           TaskID;                                                   
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_StopMergeBinDiffPak_Params
{
	int                                                outterTaskID;                                             
	int                                                ReturnValue;                                              
};


struct UGCPufferDownloader_StopCheckDownloadFileFraming_Params
{
	int                                                outterTaskID;                                             
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_StopBGDownloadNotification_Params
{
};


struct UGCPufferDownloader_StopAllTask_Params
{
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_StartDownloadItem_Params
{
	uint32_t                                           ItemId;                                                   
	uint32_t                                           Priority;                                                 
	struct FScriptDelegate                             downloadDelegate;                                         
};


struct UGCPufferDownloader_StartBGDownloadNotification_Params
{
	uint64_t                                           InDownloadedSize;                                         
};


struct UGCPufferDownloader_StartBatchDownloadItem_Params
{
	TArray<uint32_t>                                   ItemIDs;                                                  
	uint32_t                                           Priority;                                                 
	struct FScriptDelegate                             OnBatchItemDownloadDelegate;                              
};


struct UGCPufferDownloader_SetTempProductIdBase_Params
{
	int                                                ProductIdRaw;                                             
};


struct UGCPufferDownloader_SetPrefetchConfig_Params
{
	bool                                               pakEnable;                                                
	bool                                               fileClearEnable;                                          
	bool                                               convertEnable;                                            
	int                                                reserveredDiskSpace;                                      
	struct FString                                     FileList;                                                 
	int                                                InPreFetchODPaksMaxNum;                                   
	int                                                InPreFetchODPaksBatchSize;                                
};


struct UGCPufferDownloader_SetIOSBGDownloadAttribute_Params
{
	bool                                               bEnableCellularAccess;                                    
	bool                                               bEnableResumeData;                                        
	int                                                nMinFileSize;                                             
	int                                                nMaxTasks;                                                
};


struct UGCPufferDownloader_SetImmDLPollingTime_Params
{
	int                                                InPollingTime;                                            
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_SetImmDLMaxTask_Params
{
	int                                                InMaxTask;                                                
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_SetImmDLMaxSpeed_Params
{
	uint64_t                                           MaxSpeed;                                                 
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_SetImmDLMaxDownloadsPerTask_Params
{
	int                                                InMaxDownloadsPerTask;                                    
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_SetImmDLGapSize_Params
{
	int                                                InGapSize;                                                
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_SetBattleDownloadSwitch_Params
{
	bool                                               Enable;                                                   
};


struct UGCPufferDownloader_ReturnSplitMiniPakFilelist_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UGCPufferDownloader_ReturnSplitLobbyPakFileList_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UGCPufferDownloader_ReturnLocalFiles_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UGCPufferDownloader_RequestFile_Params
{
	struct FString                                     FilePath;                                                 
	bool                                               ForceUpdate;                                              
	struct FString                                     InUA;                                                     
	uint64_t                                           ReturnValue;                                              
};


struct UGCPufferDownloader_RemountPakFiles_Params
{
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_ReadFile_Params
{
	struct FString                                     Filename;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UGCPufferDownloader_PreFetchPakFiles_Params
{
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_PreFetchODPakFilesUpdate_Params
{
	int                                                ReturnValue;                                              
};


struct UGCPufferDownloader_PreFetchODPakFilesPreProcess_Params
{
	bool                                               Start;                                                    
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_PreFetchODPakFilesPostProcess_Params
{
	int                                                ErrorCode;                                                
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_PreFetchODPakFiles_Params
{
	bool                                               Start;                                                    
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_OnItemDownloadedInFighting_Params
{
	struct FString                                     PackHash;                                                 
	struct FString                                     ErrorCode;                                                
};


struct UGCPufferDownloader_OnHashGenerateFinished_Params
{
	int                                                outterTaskID;                                             
	struct FString                                     hashCode;                                                 
};


struct UGCPufferDownloader_MoveFileTo_Params
{
	struct FString                                     Filename;                                                 
	struct FString                                     From;                                                     
	struct FString                                     To;                                                       
	int                                                ReturnValue;                                              
};


struct UGCPufferDownloader_MoveFile_Params
{
	struct FString                                     From;                                                     
	struct FString                                     To;                                                       
	int                                                ReturnValue;                                              
};


struct UGCPufferDownloader_MergeBinDiffPak_Params
{
	int                                                outterTaskID;                                             
	struct FString                                     PakFilenameOld;                                           
	struct FString                                     PakFilenameDiff;                                          
	struct FString                                     PakFilenameNew;                                           
	bool                                               fast;                                                     
	int                                                ReturnValue;                                              
};


struct UGCPufferDownloader_IsODPaks_Params
{
	struct FString                                     FilePath;                                                 
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_IsODFileExists_Params
{
	struct FString                                     Path;                                                     
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_IsInitSuccess_Params
{
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_IsFileReady_Params
{
	struct FString                                     FilePath;                                                 
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_IsFileExist_Params
{
	struct FString                                     Filename;                                                 
	struct FString                                     extension;                                                
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_InitializeODPaks_Params
{
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_GetTempWorkPath_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGCPufferDownloader_GetPufferInitSuccessNum_Params
{
	int                                                ReturnValue;                                              
};


struct UGCPufferDownloader_GetPufferInitingNum_Params
{
	int                                                ReturnValue;                                              
};


struct UGCPufferDownloader_GetPufferChannelNum_Params
{
	int                                                ReturnValue;                                              
};


struct UGCPufferDownloader_GetProductIDBase_Params
{
	TArray<int>                                        ProductIDs;                                               
};


struct UGCPufferDownloader_GetProductID_Params
{
	TArray<int>                                        ProductIDs;                                               
};


struct UGCPufferDownloader_GetODPakNum_Params
{
	int                                                ReturnValue;                                              
};


struct UGCPufferDownloader_GetODPakName_Params
{
	struct FString                                     Path;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UGCPufferDownloader_GetInitErrcode_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UGCPufferDownloader_GetFileSizeCompressed_Params
{
	struct FString                                     FilePath;                                                 
	uint64_t                                           ReturnValue;                                              
};


struct UGCPufferDownloader_GetFileSize_Params
{
	struct FString                                     Filename;                                                 
	float                                              ReturnValue;                                              
};


struct UGCPufferDownloader_GetDownloadPath_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGCPufferDownloader_GetCurrentSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct UGCPufferDownloader_GetBatchODPaksDownloadList_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UGCPufferDownloader_EnableUseOldInterface_Params
{
	bool                                               Enable;                                                   
};


struct UGCPufferDownloader_DynamicAdjustPufferSystemParameter_Params
{
	int                                                InPufferParameterKey;                                     
	struct FString                                     InPufferParameterValue;                                   
};


struct UGCPufferDownloader_DeleteFileEvenIfUnfinished_Params
{
	struct FString                                     FilePath;                                                 
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_DeleteFile_Params
{
	struct FString                                     fullPath;                                                 
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_ConvertPreFetchFiles_Params
{
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_ConvertItemIdToPakName_Params
{
	uint32_t                                           ItemId;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UGCPufferDownloader_ClearUselessODPaks_Params
{
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_ClearPreFetchODPaksFiles_Params
{
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_ClearPreFetchFiles_Params
{
	bool                                               ReturnValue;                                              
};


struct UGCPufferDownloader_CheckDownloadFileFraming_Params
{
	int                                                outterTaskID;                                             
	struct FString                                     Filename;                                                 
	int                                                chunkSize;                                                
	bool                                               ReturnValue;                                              
};


struct UGMLogShare_ShareLogFile_Params
{
	struct FString                                     InLogFileName;                                            
};


struct UGMLogShare_Init_Params
{
};


struct UIMSDKNotice_GetNotice_Params
{
	struct FString                                     Scene;                                                    
	TArray<struct FIMSDKNoticeInfo>                    ReturnValue;                                              
};


struct UIMSDKNotice_GetInstance_Params
{
	class UIMSDKNotice*                                ReturnValue;                                              
};


struct UIMSDKNotice_ClearNotice_Params
{
};


struct UHttpWrapper_SimplePostForLua_Params
{
	struct FString                                     URL;                                                      
	struct FString                                     Content;                                                  
	int                                                Priority;                                                 
	int                                                QueueType;                                                
};


struct UHttpWrapper_SetQueueSize_Params
{
	int                                                QueueType;                                                
	int                                                InSize;                                                   
};


struct UHttpWrapper_SetQueueEnable_Params
{
	bool                                               InEnableQueue;                                            
};


struct UHttpWrapper_SetPoolEnable_Params
{
	bool                                               InEnablePool;                                             
};


struct UHttpWrapper_RequestForLua_Params
{
	struct FString                                     URL;                                                      
	struct FString                                     Verb;                                                     
	TMap<struct FString, struct FString>               Headers;                                                  
	struct FString                                     Content;                                                  
	int                                                Priority;                                                 
	int                                                QueueType;                                                
	int                                                ReturnValue;                                              
};


struct UHttpWrapper_ImageDownloadRequestForLua_Params
{
	struct FString                                     URL;                                                      
	struct FString                                     Verb;                                                     
	TMap<struct FString, struct FString>               Headers;                                                  
	struct FString                                     Content;                                                  
	int                                                Priority;                                                 
	int                                                ReturnValue;                                              
};


struct UHttpWrapper_GetQueueEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct UHttpWrapper_GetPoolEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct UHttpWrapper_GetInternalIndex_Params
{
	int                                                ReturnValue;                                              
};


struct UHttpWrapper_CancelRequestAll_Params
{
	int                                                QueueType;                                                
};


struct UHttpWrapper_CancelRequest_Params
{
	int                                                QueueType;                                                
	int                                                ReqIndex;                                                 
};


struct UImageDownloader_Start_Params
{
	struct FString                                     URL;                                                      
};


struct UImageDownloader_MakeDownloaderInGame_Params
{
	class UImageDownloader*                            ReturnValue;                                              
};


struct UImageDownloader_MakeDownloader_Params
{
	class UImageDownloader*                            ReturnValue;                                              
};


struct UImageDownloader_GetTextureFromUrlWithoutDownload_Params
{
	struct FString                                     URL;                                                      
	class UTexture2D*                                  ReturnValue;                                              
};


struct UImageDownloader_CheckAndGetEncryptUrl_Params
{
	struct FString                                     InURL;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UImageDownloadUtil_SaveImageDownloadDiskFile_Params
{
	TArray<unsigned char>                              OutArray;                                                 
	struct FString                                     SavePath;                                                 
};


struct UImageDownloadUtil_GetTextureFromMemory_Params
{
	struct FString                                     PathName;                                                 
	class UTexture2D*                                  ReturnValue;                                              
};


struct UImageDownloadUtil_GetTexture2DFromDisk_Params
{
	struct FString                                     SavePath;                                                 
	bool                                               IsCompressed;                                             
	class UTexture2D*                                  ReturnValue;                                              
};


struct UImageDownloadUtil_GetTexture2DFromArrayWithSRGB_Params
{
	TArray<unsigned char>                              OutArray;                                                 
	bool                                               IsCompressed;                                             
	bool                                               bSRGB;                                                    
	class UTexture2D*                                  ReturnValue;                                              
};


struct UImageDownloadUtil_GetTexture2DFromArray_Params
{
	TArray<unsigned char>                              OutArray;                                                 
	bool                                               IsCompressed;                                             
	class UTexture2D*                                  ReturnValue;                                              
};


struct UImageDownloadUtil_GetLocalImageFormat_Params
{
	struct FString                                     Path;                                                     
	int                                                ReturnValue;                                              
};


struct UImageDownloadUtil_CheckDiskFile_Params
{
	struct FString                                     ImgDir;                                                   
	struct FString                                     SubDir;                                                   
};


struct UInGameUIManager_SubUIWidgetListWithMountData_Params
{
	TArray<struct FInGameWidgetData>                   InGameWidgetDataList;                                     
	TArray<struct FString>                             GameStatusStrList;                                        
	bool                                               InPersistentUI;                                           
	bool                                               InUsedByControler;                                        
	bool                                               InOberverOnly;                                            
	int                                                inUIControlState;                                         
};


struct UInGameUIManager_SubUIWidgetList_Params
{
	TArray<struct FGameWidgetConfig>                   InWidgetConfigList;                                       
	TArray<struct FString>                             GameStatusStrList;                                        
	bool                                               InPersistentUI;                                           
	bool                                               InUsedByControler;                                        
	bool                                               InOberverOnly;                                            
};


struct UInGameUIManager_SubDynamicUIWidgetList_Params
{
	TArray<struct FDynamicWidgetData>                  DynamicWidgetMap;                                         
};


struct UInGameUIManager_OnAsyncLoadWidgetClassObj_Params
{
	class UObject*                                     InClassObj;                                               
	int                                                RequestID;                                                
};


struct UInGameUIManager_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                
};


struct UInGameUIManager_HandleMountWidget_Params
{
	class UInGameUIManager*                            IngameManager;                                            
};


struct UInGameUIManager_HandleDynamicDestroy_Params
{
};


struct UInGameUIManager_HandleDynamicCreation_Params
{
	bool                                               isAsyncLoad;                                              
};


struct UInGameUIManager_GetWidgetHandleAsyncWithCallBack_Params
{
	struct FString                                     WidgetKey;                                                
	struct FScriptDelegate                             InCallback;                                               
};


struct UInGameUIManager_GetWidgetHandle_Params
{
	struct FString                                     WidgetKey;                                                
	class UUAEUserWidget*                              ReturnValue;                                              
};


struct UInGameUIManager_GetMountCanvasPanel_Params
{
	struct FString                                     MountOuterName;                                           
	struct FString                                     MountName;                                                
	class UCanvasPanel*                                ReturnValue;                                              
};


struct UInGameUIManager_ChangeSubUIWidgetList_Params
{
	TArray<struct FGameWidgetConfig>                   InWidgetConfigList;                                       
};


struct UInGameUIManager_ChangeInvalidWorldNameList_Params
{
	TArray<struct FString>                             InList;                                                   
};


struct UIntlSDKComplianceHelper_SetUserProfile_Params
{
	struct FString                                     InRegion;                                                 
	bool                                               ReturnValue;                                              
};


struct UIntlSDKComplianceHelper_SetParentStatus_Params
{
	int                                                ParentCertificateStatus;                                  
};


struct UIntlSDKComplianceHelper_SetLogConfig_Params
{
	bool                                               enableConsoleLog;                                         
	bool                                               enableFileLog;                                            
	int                                                LogLevel;                                                 
};


struct UIntlSDKComplianceHelper_SetEUAgreeStatus_Params
{
	int                                                AgreeStatus;                                              
};


struct UIntlSDKComplianceHelper_SetAdulthood_Params
{
	int                                                AgeStatus;                                                
};


struct UIntlSDKComplianceHelper_SendVoiceControlEmail_Params
{
	struct FString                                     InEmail;                                                  
	struct FString                                     InUserName;                                               
};


struct UIntlSDKComplianceHelper_SendEmail_Params
{
	struct FString                                     InEmail;                                                  
	struct FString                                     UserName;                                                 
	int                                                InScene;                                                  
};


struct UIntlSDKComplianceHelper_QueryUserStatus_Params
{
};


struct UIntlSDKComplianceHelper_QueryIsEEA_Params
{
	struct FString                                     InRegion;                                                 
};


struct UIntlSDKComplianceHelper_QueryConfig_Params
{
};


struct UIntlSDKComplianceHelper_OpenConsentSocial_Params
{
	struct FString                                     InBaseUrl;                                                
	struct FString                                     InParamJson;                                              
	struct FString                                     InExtraJson;                                              
};


struct UIntlSDKComplianceHelper_OpenAgeGate_Params
{
	struct FString                                     InBaseUrl;                                                
	struct FString                                     InParamJson;                                              
	struct FString                                     InExtraJson;                                              
};


struct UIntlSDKComplianceHelper_OnMSDKEvnSwitched_Params
{
	int                                                Env;                                                      
};


struct UIntlSDKComplianceHelper_GetInstance_Params
{
	class UIntlSDKComplianceHelper*                    ReturnValue;                                              
};


struct UIntlSDKComplianceHelper_ComplianceInit_Params
{
};


struct UIntlSDKComplianceHelper_CommitBirthday_Params
{
	struct FString                                     InBirthday;                                               
};


struct UIntlSDKComplianceHelper_ClearUserStatus_Params
{
};


struct UIntlSDKComplianceHelper_ChangeRegion_Params
{
	struct FString                                     InRegion;                                                 
};


struct ULiveBroadcast_SetFullScreen_Params
{
	bool                                               FullScreen;                                               
};


struct ULiveBroadcast_OpenLiveBroadcast_Params
{
	struct FString                                     URL;                                                      
	float                                              Margin;                                                   
};


struct ULiveBroadcast_GetInstance_Params
{
	class ULiveBroadcast*                              ReturnValue;                                              
};


struct ULiveBroadcast_CloseWebView_Params
{
};


struct ULiveBroadcast_C2JSetString_Params
{
	struct FString                                     str;                                                      
};


struct ULiveBroadcast_C2JSetIndex_Params
{
	int                                                Index;                                                    
};


struct ULoadTexture_LoadTexture2D_Params
{
	struct FString                                     ImagePath;                                                
	bool                                               IsValid;                                                  
	int                                                OutWidth;                                                 
	int                                                OutHeight;                                                
	class UTexture2D*                                  ReturnValue;                                              
};


struct ULoadTexture_GetTexture2DFromDiskFile_Params
{
	struct FString                                     FilePath;                                                 
	class UTexture2D*                                  ReturnValue;                                              
};


struct ULobbyChatSecurity_GetKey_Params
{
	struct FString                                     OpenID;                                                   
	struct FString                                     ReturnValue;                                              
};


struct ULobbyDecalBakingComponent_SwitchDecalParam_Params
{
	int                                                From;                                                     
	int                                                To;                                                       
};


struct ULobbyDecalBakingComponent_SavePng_Params
{
	class USceneCaptureComponent2D*                    SceneCapComp;                                             
	struct FString                                     ImagePath;                                                
	struct FLinearColor                                ClearColor;                                               
	bool                                               ReturnValue;                                              
};


struct ULobbyDecalBakingComponent_ReplaceOneDecalParam_Params
{
	class UStaticMeshComponent*                        MeshComp;                                                 
	int                                                Index;                                                    
	class UDecalBakingParameterComponent*              DecalParamComponent;                                      
};


struct ULobbyDecalBakingComponent_Init_Params
{
};


struct ULobbyDecalBakingComponent_DelOneDecalParam_Params
{
	int                                                Index;                                                    
};


struct ULobbyDecalBakingComponent_Baking_Params
{
	class UStaticMeshComponent*                        MeshComp;                                                 
	class UMaterial*                                   DecaledMaterial;                                          
	bool                                               Async;                                                    
};


struct ULobbyDecalBakingComponent_AddOneDecalParam_Params
{
	class UStaticMeshComponent*                        MeshComp;                                                 
	class UDecalBakingParameterComponent*              DecalParamComponent;                                      
};


struct ALobbyMatChgActor_ChangeMaterialToIdx_Params
{
	int                                                idx;                                                      
};


struct ULobbyModelUtils_TickAndRefreshBoneForGivenSkMeshComp_Params
{
	class USkeletalMeshComponent*                      InSkMesh;                                                 
};


struct ULobbyModelUtils_GetActorBoundingBox_Params
{
	class AActor*                                      InActor;                                                  
	bool                                               EnableDrawDebugBox;                                       
	struct FAABBBox                                    ReturnValue;                                              
};


struct ULobbyModelUtils_DeprojectScreenToWorldFast_Params
{
	class APlayerController*                           Player;                                                   
	struct FVector2D                                   ScreenPosition;                                           
	struct FVector                                     WorldPosition;                                            
	struct FVector                                     WorldDirection;                                           
	bool                                               ReturnValue;                                              
};


struct ALobbySceneCaptureActor_ResizeRT_Params
{
};


struct ALobbySceneCaptureActor_LogError_Params
{
	struct FString                                     FilePath;                                                 
};


struct ALobbySceneCaptureActor_Capture_Params
{
};


struct ULuaBlueprintLibrary_StringToLVar_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     Value;                                                    
	struct FLuaBPVar                                   ReturnValue;                                              
};


struct ULuaBlueprintLibrary_RequireAndCallLuaWithArgs_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     ModulePath;                                               
	struct FString                                     FunctionName;                                             
	struct FLuaBPVar                                   InA;                                                      
	struct FLuaBPVar                                   InB;                                                      
	struct FLuaBPVar                                   InC;                                                      
	struct FLuaBPVar                                   InD;                                                      
	struct FLuaBPVar                                   OutA;                                                     
	struct FLuaBPVar                                   OutB;                                                     
	struct FLuaBPVar                                   OutC;                                                     
	struct FLuaBPVar                                   OutD;                                                     
};


struct ULuaBlueprintLibrary_ObjectToLVar_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UObject*                                     O;                                                        
	struct FLuaBPVar                                   ReturnValue;                                              
};


struct ULuaBlueprintLibrary_LVarToString_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FLuaBPVar                                   Value;                                                    
	struct FString                                     ReturnValue;                                              
};


struct ULuaBlueprintLibrary_LVarToObject_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FLuaBPVar                                   Value;                                                    
	class UObject*                                     ReturnValue;                                              
};


struct ULuaBlueprintLibrary_LVarToInt_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FLuaBPVar                                   Value;                                                    
	int                                                ReturnValue;                                              
};


struct ULuaBlueprintLibrary_LVarToFloat_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FLuaBPVar                                   Value;                                                    
	float                                              ReturnValue;                                              
};


struct ULuaBlueprintLibrary_LVarToBool_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FLuaBPVar                                   Value;                                                    
	bool                                               ReturnValue;                                              
};


struct ULuaBlueprintLibrary_IntToLVar_Params
{
	class UObject*                                     WorldContextObject;                                       
	int                                                Value;                                                    
	struct FLuaBPVar                                   ReturnValue;                                              
};


struct ULuaBlueprintLibrary_FloatToLVar_Params
{
	class UObject*                                     WorldContextObject;                                       
	float                                              Value;                                                    
	struct FLuaBPVar                                   ReturnValue;                                              
};


struct ULuaBlueprintLibrary_CallLuaWithMultiArgs_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     Function;                                                 
	struct FLuaBPVar                                   InA;                                                      
	struct FLuaBPVar                                   InB;                                                      
	struct FLuaBPVar                                   InC;                                                      
	struct FLuaBPVar                                   InD;                                                      
	struct FLuaBPVar                                   InE;                                                      
	struct FLuaBPVar                                   InF;                                                      
	struct FLuaBPVar                                   OutA;                                                     
	struct FLuaBPVar                                   OutB;                                                     
	struct FLuaBPVar                                   OutC;                                                     
	struct FLuaBPVar                                   OutD;                                                     
};


struct ULuaBlueprintLibrary_CallLuaWithHUD_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     Function;                                                 
	struct FLuaBPVar                                   InA;                                                      
	struct FLuaBPVar                                   InB;                                                      
	struct FLuaBPVar                                   InC;                                                      
	struct FLuaBPVar                                   InD;                                                      
	struct FLuaBPVar                                   OutA;                                                     
	struct FLuaBPVar                                   OutB;                                                     
	struct FLuaBPVar                                   OutC;                                                     
	struct FLuaBPVar                                   OutD;                                                     
};


struct ULuaBlueprintLibrary_CallLuaWithArgs_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     Function;                                                 
	struct FLuaBPVar                                   InA;                                                      
	struct FLuaBPVar                                   InB;                                                      
	struct FLuaBPVar                                   InC;                                                      
	struct FLuaBPVar                                   InD;                                                      
	struct FLuaBPVar                                   OutA;                                                     
	struct FLuaBPVar                                   OutB;                                                     
	struct FLuaBPVar                                   OutC;                                                     
	struct FLuaBPVar                                   OutD;                                                     
};


struct ULuaBlueprintLibrary_CallLua_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     Function;                                                 
	struct FLuaBPVar                                   OutA;                                                     
	struct FLuaBPVar                                   OutB;                                                     
	struct FLuaBPVar                                   OutC;                                                     
	struct FLuaBPVar                                   OutD;                                                     
};


struct ULuaBlueprintLibrary_BoolToLVar_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               Value;                                                    
	struct FLuaBPVar                                   ReturnValue;                                              
};


struct ULuaBlueprintMgr_GetSystemByName_Params
{
	struct FString                                     SystemName;                                               
	class ULuaBluepirntSys*                            ReturnValue;                                              
};


struct ULuaBlueprintMgr_AddSystem_Params
{
	struct FString                                     SystemName;                                               
	struct FString                                     BPPath;                                                   
};


struct ULuaBluepirntSys_Init_Params
{
};


struct ALuaClassObj_SubUIWidgetList_Params
{
	TArray<struct FGameWidgetConfig>                   InWidgetConfigList;                                       
	TArray<struct FString>                             GameStatusStrList;                                        
	bool                                               bPersistentUI;                                            
	bool                                               InStatusConcern;                                          
	bool                                               bDynamicWidget;                                           
	bool                                               bKeepDynamicWidget;                                       
};


struct ALuaClassObj_SubShowHideEvent_Params
{
	TArray<struct FString>                             WidgetPathList;                                           
};


struct ALuaClassObj_SubDefaultSceneCamera_Params
{
	int                                                sceneCameraIndex;                                         
};


struct ALuaClassObj_SubDefaultChildUI_Params
{
	TArray<struct FString>                             childList;                                                
};


struct ALuaClassObj_SubDefaultBaseUI_Params
{
	struct FString                                     baseUI;                                                   
};


struct ALuaClassObj_SubCollapseWidgetList_Params
{
	struct FString                                     RootWidgetName;                                           
	TArray<struct FString>                             ChildWidgetNames;                                         
};


struct ALuaClassObj_SetWidgetZorder_Params
{
	int                                                Index;                                                    
	int                                                ZOrder;                                                   
};


struct ALuaClassObj_RestoreWidgetZorder_Params
{
	int                                                Index;                                                    
};


struct ALuaClassObj_RestoreAllWidgetZorder_Params
{
};


struct ALuaClassObj_IsTopStackPanel_Params
{
	bool                                               ReturnValue;                                              
};


struct ALuaClassObj_IsPushedPanel_Params
{
	bool                                               ReturnValue;                                              
};


struct ALuaClassObj_HandleUIMessageNoFetch_Params
{
	struct FString                                     UIMessage;                                                
};


struct ALuaClassObj_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                
};


struct ALuaClassObj_HandleStopAsyncLoad_Params
{
};


struct ALuaClassObj_HandleDynamicDestroy_Params
{
};


struct ALuaClassObj_HandleDynamicCreationInternal_Params
{
	bool                                               isAsyncLoad;                                              
};


struct ALuaClassObj_HandleDynamicCreation_Params
{
	bool                                               isAsyncLoad;                                              
};


struct ALuaClassObj_HandleCollapseWidgetList_Params
{
	struct FString                                     RootWidgetName;                                           
};


struct ALuaClassObj_GetTopStackPanelSrcTag_Params
{
	struct FString                                     ReturnValue;                                              
};


struct ALuaClassObj_GetTopStackPanelDstTag_Params
{
	struct FString                                     ReturnValue;                                              
};


struct ALuaClassObj_GetGameStatus_Params
{
	struct FString                                     ReturnValue;                                              
};


struct ALuaClassObj_ChangeSubUIWidgetList_Params
{
	TArray<struct FGameWidgetConfig>                   InWidgetConfigList;                                       
};


struct ALuaClassObj_AddToTopStackPanel_Params
{
};


struct UMaskBox_SetMaskTransformScale_Params
{
	struct FVector2D                                   Scale;                                                    
};


struct UMaskBox_SetMaskTransformPivot_Params
{
	struct FVector2D                                   Pivot;                                                    
};


struct UMaskBox_SetMaskTransformAngle_Params
{
	float                                              Angle;                                                    
};


struct UMaskBox_SetMaskMaterial_Params
{
	class UMaterialInterface*                          EffectMaterial;                                           
};


struct UMaskBox_SetBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                  
};


struct UMaskBox_GetVector2D__DelegateSignature_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UMaskBox_GetMaskMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UMaskImage_SetMaskTransformScale_Params
{
	struct FVector2D                                   Scale;                                                    
};


struct UMaskImage_SetMaskTransformPivot_Params
{
	struct FVector2D                                   Pivot;                                                    
};


struct UMaskImage_SetMaskTransformAngle_Params
{
	float                                              Angle;                                                    
};


struct UMaskImage_SetMaskTexture_Params
{
	class UTexture2D*                                  Texture;                                                  
};


struct UMaskImage_SetMaskMaterial_Params
{
	class UMaterialInterface*                          InEffectMaterial;                                         
};


struct UMaskImage_GetMaskMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              
};


struct UNewButton_SetClickSound_Params
{
	EButtonClickSoundTypes                             inSoundType;                                              
};


struct UPandoraV2Helper_UpdateActivityAndLoad_Params
{
	struct FString                                     InActivityName;                                           
};


struct UPandoraV2Helper_SetUserData_Params
{
	TMap<struct FString, struct FString>               InUserdata;                                               
};


struct UPandoraV2Helper_SetSDKVersion_Params
{
	int                                                InSDKVer;                                                 
};


struct UPandoraV2Helper_SetSDKCoreDataPath_Params
{
	struct FString                                     InPath;                                                   
};


struct UPandoraV2Helper_SetPandoraEnable_Params
{
	bool                                               Enable;                                                   
};


struct UPandoraV2Helper_SetLuaCoreData_Params
{
	struct FString                                     InFilePath;                                               
	bool                                               ReturnValue;                                              
};


struct UPandoraV2Helper_SetLogEnable_Params
{
	bool                                               Enable;                                                   
};


struct UPandoraV2Helper_SetLiteMode_Params
{
	bool                                               bEnable;                                                  
};


struct UPandoraV2Helper_RetryStartUp_Params
{
};


struct UPandoraV2Helper_ResumeLuaGC_Params
{
};


struct UPandoraV2Helper_RefreshUserDataTokens_Params
{
};


struct UPandoraV2Helper_PauseLuaGC_Params
{
};


struct UPandoraV2Helper_IsLiteMode_Params
{
	bool                                               ReturnValue;                                              
};


struct UPandoraV2Helper_Init_Params
{
	bool                                               InEnable;                                                 
	int                                                InEnv;                                                    
	bool                                               InEnablePixUI;                                            
};


struct UPandoraV2Helper_GetSDKVersion_Params
{
	int                                                ReturnValue;                                              
};


struct UPandoraV2Helper_GetRemoteConfigStatus_Params
{
	int                                                ReturnValue;                                              
};


struct UPandoraV2Helper_GetAllActivityStatus_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UPandoraV2Helper_GetActivityStatus_Params
{
	struct FString                                     InActivityName;                                           
	struct FString                                     ReturnValue;                                              
};


struct UPandoraV2Helper_Get_Params
{
	class UPandoraV2Helper*                            ReturnValue;                                              
};


struct UPandoraV2Helper_Do_Params
{
	struct FString                                     InCmdJson;                                                
	int                                                InMsgType;                                                
};


struct UPandoraV2Helper_Deinit_Params
{
};


struct UPandoraV2Helper_Close_Params
{
};


struct UPublishAreaMgr_SelectArea_Params
{
	struct FString                                     InArea;                                                   
};


struct UPublishAreaMgr_IsMultiAreaBuild_Params
{
	bool                                               ReturnValue;                                              
};


struct UPublishAreaMgr_GetString_Params
{
	struct FString                                     InKey;                                                    
	struct FString                                     InDefaultValue;                                           
	struct FString                                     ReturnValue;                                              
};


struct UPublishAreaMgr_GetPublishAreas_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UPublishAreaMgr_GetInt_Params
{
	struct FString                                     InKey;                                                    
	int                                                InDefaultValue;                                           
	int                                                ReturnValue;                                              
};


struct UPublishAreaMgr_GetBool_Params
{
	struct FString                                     InKey;                                                    
	bool                                               InDefaultValue;                                           
	bool                                               ReturnValue;                                              
};


struct UPublishAreaMgr_GetArea_Params
{
	struct FString                                     ReturnValue;                                              
};


struct USavedFileUtil_LoadFileToArrayAsync_Params
{
	struct FString                                     AssetPath;                                                
	struct FSluaBPVar                                  Callback;                                                 
	int                                                ReturnValue;                                              
};


struct USavedFileUtil_GetFileCreationTime_Params
{
	struct FString                                     Filename;                                                 
	int64_t                                            ReturnValue;                                              
};


struct USavedFileUtil_GetDirSizeAsync_Params
{
	struct FString                                     Dir;                                                      
	bool                                               Recursive;                                                
	struct FSluaBPVar                                  Callback;                                                 
};


struct USavedFileUtil_GetDirSize_Params
{
	struct FString                                     Dir;                                                      
	bool                                               Recursive;                                                
	int64_t                                            ReturnValue;                                              
};


struct USavedFileUtil_FindFilesAsync_Params
{
	struct FString                                     Dir;                                                      
	struct FString                                     Pattern;                                                  
	bool                                               Recursive;                                                
	struct FSluaBPVar                                  Callback;                                                 
};


struct USavedFileUtil_FindFiles_Params
{
	struct FString                                     dirPath;                                                  
	struct FString                                     extension;                                                
	bool                                               Recursive;                                                
	TArray<struct FString>                             ReturnValue;                                              
};


struct USavedFileUtil_DeleteDirectoryAsync_Params
{
	struct FString                                     Dir;                                                      
	struct FSluaBPVar                                  Callback;                                                 
};


struct USavedFileUtil_CleanupDirectoryBySize_Params
{
	struct FString                                     Dir;                                                      
	int                                                MaxSize;                                                  
	struct FString                                     extension;                                                
	bool                                               ReturnValue;                                              
};


struct USavedFileUtil_CancelLoadSavedFile_Params
{
	int                                                Handle;                                                   
	bool                                               ReturnValue;                                              
};


struct UScatterPlot_SetPoints_Params
{
	TArray<struct FScatterPlotPoint>                   InPoints;                                                 
};


struct UScatterPlot_SetPointBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  
};


struct UScatterPlot_Empty_Params
{
	int                                                Slack;                                                    
};


struct UScatterPlot_Apply_Params
{
};


struct UScatterPlot_Add_Params
{
	struct FScatterPlotPoint                           InPoint;                                                  
};


struct UScreenInput_Shutdown_Params
{
};


struct UScreenInput_OnScreenTouch__DelegateSignature_Params
{
};


struct UScreenInput_OnMouseButtonDown__DelegateSignature_Params
{
	struct FVector2D                                   ContainerPos;                                             
};


struct UScreenInput_OnMotionDetected__DelegateSignature_Params
{
	struct FVector                                     Tilt;                                                     
	struct FVector                                     RotationRate;                                             
	struct FVector                                     Gravity;                                                  
	struct FVector                                     Acceleration;                                             
};


struct UScreenInput_Init_Params
{
};


struct UScreenshotMaker_SetDefaultShowUI_Params
{
	bool                                               ShowUI;                                                   
};


struct UScreenshotMaker_SaveToPhotosAlbumEx_Params
{
	struct FString                                     pathStr;                                                  
	bool                                               ReturnValue;                                              
};


struct UScreenshotMaker_SaveToPhotosAlbum_Params
{
	struct FString                                     pathStr;                                                  
	bool                                               ReturnValue;                                              
};


struct UScreenshotMaker_RotateCropPicture_Params
{
	struct FString                                     srcPath;                                                  
	struct FVector4                                    CropRect;                                                 
	int                                                Angle;                                                    
	struct FString                                     DstPath;                                                  
	int                                                Quality;                                                  
	bool                                               ReturnValue;                                              
};


struct UScreenshotMaker_ResizePicture_Params
{
	struct FString                                     pathStr;                                                  
	float                                              Scale;                                                    
	struct FString                                     savePathStr;                                              
};


struct UScreenshotMaker_ReMakePicture_Params
{
	struct FString                                     pathStr;                                                  
	struct FVector4                                    Vector4;                                                  
};


struct UScreenshotMaker_ReMakeMomentPicture_Params
{
	struct FString                                     srcPath;                                                  
	struct FVector4                                    Vector4;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UScreenshotMaker_MosaicPictureByLocalImage_Params
{
	TArray<struct FString>                             Paths;                                                    
	struct FString                                     toPath;                                                   
	int                                                Width;                                                    
	float                                              Scale;                                                    
	bool                                               ReturnValue;                                              
};


struct UScreenshotMaker_MakeWidgetScreenshot_Params
{
	class UWidget*                                     Widget;                                                   
	struct FVector2D                                   DrawSize;                                                 
	float                                              Scale;                                                    
	class UTextureRenderTarget2D*                      ReturnValue;                                              
};


struct UScreenshotMaker_MakePictureWithName_Params
{
	struct FString                                     PicName;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UScreenshotMaker_MakePictureToLua_Params
{
	class UGameFrontendHUD*                            InFrontendHUD;                                            
	struct FString                                     tableName;                                                
	struct FString                                     FunctionName;                                             
	bool                                               isShowUI;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UScreenshotMaker_MakePictureByName_Params
{
	struct FString                                     PicName;                                                  
	bool                                               ShowUI;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UScreenshotMaker_MakePicture_Params
{
	bool                                               isShowUI;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UScreenshotMaker_MakeBugReprotPic_Params
{
	bool                                               isShowUI;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UScreenshotMaker_HasCaptured_Params
{
	struct FString                                     pathStr;                                                  
	bool                                               ReturnValue;                                              
};


struct UScreenshotMaker_GetSaveStatus_Params
{
	int                                                ReturnValue;                                              
};


struct UScreenshotMaker_GetPhotoHash_Params
{
	struct FString                                     pathStr;                                                  
	int                                                algorithmVersion;                                         
	int                                                ReturnValue;                                              
};


struct UScreenshotMaker_GetMomentThumbPictureFullPathFiles_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScreenshotMaker_GetMomentPictureFullPathFiles_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScreenshotMaker_GetHashFromArray_Params
{
	TArray<unsigned char>                              inArray;                                                  
	int                                                algorithmVersion;                                         
	int                                                ReturnValue;                                              
};


struct UScreenshotMaker_CropAndResizePicture_Params
{
	struct FString                                     pathStr;                                                  
	float                                              Scale;                                                    
	float                                              cropWidthScale;                                           
	float                                              cropHeightScale;                                          
	struct FString                                     savePathStr;                                              
};


struct UScriptHelperClient_WriteFileAtPath_Params
{
	struct FString                                     FilePath;                                                 
	struct FString                                     Content;                                                  
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_WakeupFromSuspendSound_Params
{
};


struct UScriptHelperClient_VPNTearDown_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_VPNSetUserInfo_Params
{
	struct FString                                     InUserId;                                                 
	struct FString                                     InUserToken;                                              
	struct FString                                     InAppId;                                                  
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_VPNSetPortRange_Params
{
	int                                                Min;                                                      
	int                                                Max;                                                      
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_VPNSetNodelist_Params
{
	struct FString                                     InNodelist;                                               
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_VPNPrepare_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_VPNHandUp_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_VPNGetNodeRegionList_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_VPNDialUp_Params
{
	struct FString                                     InRegion;                                                 
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_Vibrate_Params
{
	int                                                Param;                                                    
};


struct UScriptHelperClient_VerifySavFileData_Params
{
	int                                                CompressedSize;                                           
	int                                                UncompressedSize;                                         
	TArray<unsigned char>                              ByteArray;                                                
	int                                                ToCheckEndWithCDLength;                                   
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_USFSIsNewestVersion_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_USFSGetUpgradeDiffList_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_USFSDeletePkg_V2_Params
{
	struct FString                                     PkgOrig;                                                  
};


struct UScriptHelperClient_USFSDeletePkg_Params
{
	struct FString                                     PkgOrig;                                                  
};


struct UScriptHelperClient_USFSCacheSysContextUpdatePkgPatch_Params
{
	TMap<struct FString, int>                          PkgPaths;                                                 
};


struct UScriptHelperClient_USFSCacheSysContextUpdatePkgDiff_Params
{
	TArray<struct FString>                             PkgDiffPaths;                                             
};


struct UScriptHelperClient_USFSCacheSysContextUpdatePkgBinDiff_Params
{
	TArray<struct FString>                             PkgDiffPaths;                                             
};


struct UScriptHelperClient_USFSCacheSysContextUpdatePkg_Params
{
	TArray<struct FString>                             PkgPaths;                                                 
};


struct UScriptHelperClient_USFSCacheSysContextSwitchWrite_Params
{
	bool                                               bSwitch;                                                  
};


struct UScriptHelperClient_USFSCacheSysContextSwitchAll_Params
{
	bool                                               bSwitch;                                                  
};


struct UScriptHelperClient_USFSCacheSysContextStart_Params
{
};


struct UScriptHelperClient_USFSCacheSysContextChangePkgName_Params
{
	TArray<struct FString>                             PkgChgInfo;                                               
};


struct UScriptHelperClient_USFSCacheSysContexInit_Params
{
	TMap<struct FString, struct FString>               PkgNameToConHash;                                         
};


struct UScriptHelperClient_UserName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_UrlEncode_Params
{
	struct FString                                     UnencodedString;                                          
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_UQMSetAppVersion_Params
{
	struct FString                                     Version;                                                  
};


struct UScriptHelperClient_UQMCrashReportStuck_Params
{
	int                                                threadId;                                                 
	int                                                maxChecks;                                                
	int64_t                                            CheckInterval;                                            
	struct FString                                     Name;                                                     
	struct FString                                     Message;                                                  
	struct FString                                     ExtraInfo;                                                
	int                                                dumpNativeType;                                           
};


struct UScriptHelperClient_UQMCrashPutUserData_Params
{
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
};


struct UScriptHelperClient_UQMCrashPostExceptionWithCustomData_Params
{
	int                                                Category;                                                 
	struct FString                                     stack;                                                    
	TMap<struct FString, struct FString>               customData;                                               
	int                                                dumpNativeType;                                           
};


struct UScriptHelperClient_UQMCrashPostExceptionFullWithCustomData_Params
{
	int                                                Category;                                                 
	struct FString                                     Name;                                                     
	struct FString                                     Reason;                                                   
	struct FString                                     stack;                                                    
	TMap<struct FString, struct FString>               customData;                                               
	int                                                dumpNativeType;                                           
};


struct UScriptHelperClient_UQMCrashPostExceptionFull_Params
{
	int                                                Category;                                                 
	struct FString                                     Name;                                                     
	struct FString                                     Msg;                                                      
	struct FString                                     stack;                                                    
	int                                                dumpNativeType;                                           
};


struct UScriptHelperClient_UQMCrashPostException_Params
{
	int                                                Category;                                                 
	struct FString                                     Reason;                                                   
	int                                                dumpNativeType;                                           
};


struct UScriptHelperClient_UQMCrashLog_Params
{
	int                                                Level;                                                    
	struct FString                                     Tag;                                                      
	struct FString                                     Log;                                                      
	bool                                               needDump;                                                 
};


struct UScriptHelperClient_UploadGainCrashLogBackground_Params
{
};


struct UScriptHelperClient_UpdateServerTimeInSec_Params
{
};


struct UScriptHelperClient_UpdatePublishRegionForBattle_Params
{
};


struct UScriptHelperClient_UpdatePkgCompressionInfo_Params
{
	TArray<struct FString>                             PkgList;                                                  
	struct FString                                     CompressMethod;                                           
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_UpdateMemResource_Params
{
	struct FString                                     ResType;                                                  
	struct FString                                     Keyword;                                                  
};


struct UScriptHelperClient_UpdateAkAudioDeviceBluetoothDelay_Params
{
	int                                                InDelayTime;                                              
};


struct UScriptHelperClient_UnsubscribeFromTopic_Params
{
	struct FString                                     Topic;                                                    
};


struct UScriptHelperClient_UnmountPakFile_Params
{
	struct FString                                     InPakFilename;                                            
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_UnmapUnusedMap_Params
{
};


struct UScriptHelperClient_UnitTestODPaksOpen_Params
{
	int                                                fileCount;                                                
	int                                                Times;                                                    
	int                                                threadNum;                                                
};


struct UScriptHelperClient_TVMacroTesting_Params
{
};


struct UScriptHelperClient_TryApplyDeviceMotionBody_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_TrimEngineMemory_Params
{
};


struct UScriptHelperClient_TriggerTouchEvent_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	int                                                event_type;                                               
};


struct UScriptHelperClient_TriggerTestCmd_Params
{
	struct FString                                     Cmd;                                                      
};


struct UScriptHelperClient_TriggerOOMCrash_Params
{
};


struct UScriptHelperClient_TriggerNativeDump_Params
{
	int                                                DumpCount;                                                
	double                                             Timespan;                                                 
	int                                                NativeDumpType;                                           
};


struct UScriptHelperClient_TriggerLoginCrashTest_Params
{
	int                                                Type;                                                     
};


struct UScriptHelperClient_TriggerLobbyCrashTest_Params
{
	int                                                Type;                                                     
};


struct UScriptHelperClient_TriggerBlockAndroidANR_Params
{
};


struct UScriptHelperClient_TPerforPlatReport_Params
{
	int                                                Type;                                                     
	struct FString                                     ExtraInfo;                                                
	bool                                               Send;                                                     
};


struct UScriptHelperClient_TPerforPlatPostLargeValueS_Params
{
	struct FString                                     catgory;                                                  
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
};


struct UScriptHelperClient_TPerforPlatMarkTime_Params
{
	int                                                Type;                                                     
};


struct UScriptHelperClient_TPerforPlatMarkLevelLoad_Params
{
	struct FString                                     SceneName;                                                
	int                                                DeviceLevel;                                              
};


struct UScriptHelperClient_TPerforPlatMarkLevelFin_Params
{
};


struct UScriptHelperClient_TPerforPlatDisconnectReport_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	int                                                EventID;                                                  
};


struct UScriptHelperClient_TPerforPlatDataReport_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	int                                                EventID;                                                  
	struct FString                                     EventInfo;                                                
};


struct UScriptHelperClient_TMFPSwitchRichTapMode_Params
{
	struct FString                                     Mode;                                                     
};


struct UScriptHelperClient_TMFPStopRichTap_Params
{
};


struct UScriptHelperClient_TMFPStartRichTapWithData_Params
{
	struct FString                                     InKey;                                                    
	TMap<struct FString, struct FString>               InMapData;                                                
};


struct UScriptHelperClient_TMFPStartRichTap_Params
{
	struct FString                                     Filename;                                                 
};


struct UScriptHelperClient_TMFPLoadHeFile_Params
{
	struct FString                                     StrFilePath;                                              
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_TMFPGetRichTapSupport_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_TMFPGetRichTapAmplitudeSupport_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_TickODPakRuntimeCache_Params
{
};


struct UScriptHelperClient_TestSaveStringToFile_Params
{
	struct FString                                     String;                                                   
	struct FString                                     TargetDir;                                                
	struct FString                                     FullPathName;                                             
};


struct UScriptHelperClient_TestLoadGameSlotMultiThread_Params
{
};


struct UScriptHelperClient_TestLoadGameSlot_Params
{
};


struct UScriptHelperClient_TestCallCvmFuncWithVarArg_Params
{
	int                                                FuncID;                                                   
	TArray<struct FString>                             Arguments;                                                
	uint64_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_Tea2Encrypt_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_Tea2Decrypt_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_TakeHighResScreenshot_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_TakeHighResScreenshot_Params
{
	struct FString                                     Filename;                                                 
	int                                                ResolutionX;                                              
	int                                                ResolutionY;                                              
	float                                              ResolutionScale;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_SystemLanguageId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_SyncLoadPackageUpdateCurrentWorldStage_Params
{
	struct FString                                     WorldStage;                                               
};


struct UScriptHelperClient_SyncLoadPackageUpdateCurrentWorldName_Params
{
	struct FString                                     WorldName;                                                
};


struct UScriptHelperClient_SyncLoadPackageInfoCollect_Params
{
	struct FString                                     PackageName;                                              
	struct FString                                     WorldName;                                                
};


struct UScriptHelperClient_SyncLoadPackageGetPackageListForWorld_Params
{
	struct FString                                     WorldName;                                                
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_SyncLoadInfoCollector_Reset_Params
{
};


struct UScriptHelperClient_SyncLoadInfoCollector_OnLevelStart_Params
{
};


struct UScriptHelperClient_SyncLoadInfoCollector_OnLevelEnd_Params
{
};


struct UScriptHelperClient_SwitchUser_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               useExternalAccount;                                       
};


struct UScriptHelperClient_SwitchSceneCamera_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     SceneCameraName;                                          
	float                                              BlendTime;                                                
	bool                                               bForce;                                                   
};


struct UScriptHelperClient_SwitchOutputDeviceFileLog_Params
{
};


struct UScriptHelperClient_SwitchMapMangedTickProfile_Params
{
	int                                                MapID;                                                    
};


struct UScriptHelperClient_SuspendSound_Params
{
};


struct UScriptHelperClient_SuppressSwap_Params
{
};


struct UScriptHelperClient_SubscribeToTopic_Params
{
	struct FString                                     Topic;                                                    
};


struct UScriptHelperClient_StringToJsonString_Params
{
	struct FString                                     String;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_StopUIStat_Params
{
	struct FString                                     UIName;                                                   
	bool                                               bReport;                                                  
};


struct UScriptHelperClient_StopTouchRecord_Params
{
	struct FTouchInputRecord                           ReturnValue;                                              
};


struct UScriptHelperClient_StopTask_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	uint64_t                                           TaskID;                                                   
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_StopShaderPrecompile_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_StopPuffer_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_StopMonitorFileModified_Params
{
};


struct UScriptHelperClient_StopHapticsEngine_Params
{
};


struct UScriptHelperClient_StopH5Downloading_Params
{
};


struct UScriptHelperClient_StopBluetoothMonitor_Params
{
};


struct UScriptHelperClient_StartUIStat_Params
{
	struct FString                                     UIName;                                                   
};


struct UScriptHelperClient_StartTrace_Params
{
	struct FString                                     InHost;                                                   
	int                                                InStartTTL;                                               
	int                                                InMaxTTL;                                                 
	int                                                InCount;                                                  
	struct FString                                     InExtraData;                                              
};


struct UScriptHelperClient_StartTouchRecord_Params
{
};


struct UScriptHelperClient_StartShaderPrecompile_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_StartOpenReadCollect_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               bStart;                                                   
};


struct UScriptHelperClient_StartMonitorFileModified_Params
{
	struct FString                                     Filename;                                                 
	int                                                Mask;                                                     
};


struct UScriptHelperClient_StartHapticsEngine_Params
{
	struct FScriptDelegate                             Callback;                                                 
};


struct UScriptHelperClient_StartGrayUpdate_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_StartDownloadItem_Params
{
	uint32_t                                           ItemId;                                                   
	uint32_t                                           Priority;                                                 
	struct FScriptDelegate                             OnItemDownloadDelegate;                                   
};


struct UScriptHelperClient_StartDolphinResourceUpdate_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_StartCDNUpdateAfterDolphinUpdateFailed_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_StartBluetoothMonitor_Params
{
	int                                                DelayMs;                                                  
};


struct UScriptHelperClient_StartBatchDownloadItem_Params
{
	TArray<uint32_t>                                   ItemIDs;                                                  
	uint32_t                                           Priority;                                                 
	struct FScriptDelegate                             OnBatchItemDownloadDelegate;                              
};


struct UScriptHelperClient_SnapshotLobbyUObjects_Params
{
	struct FString                                     Tag;                                                      
};


struct UScriptHelperClient_SimpleXOREncryptDecrypt_Params
{
	TArray<unsigned char>                              Data;                                                     
	unsigned char                                      Key;                                                      
};


struct UScriptHelperClient_ShutdownUnrealNetwork_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_ShutdownPuffer_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_ShrinkUObjectHashTables_Params
{
};


struct UScriptHelperClient_ShrinkDrawBuffer_Params
{
};


struct UScriptHelperClient_ShowWebView_Params
{
	bool                                               Show;                                                     
};


struct UScriptHelperClient_ShowVLink_Params
{
	struct FString                                     jsonString;                                               
	struct FString                                     signString;                                               
};


struct UScriptHelperClient_ShowVideoListDialog_Params
{
};


struct UScriptHelperClient_ShowScreenDebugMessage_Params
{
	struct FString                                     Message;                                                  
};


struct UScriptHelperClient_ShowH5WebView_Params
{
};


struct UScriptHelperClient_ShorterStreamingDistanceWhenGameEnd_Params
{
	uint32_t                                           Distance;                                                 
};


struct UScriptHelperClient_ShareWithPhotoByChannel_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     _imgPath;                                                 
	struct FString                                     _mediaTagName;                                            
	struct FString                                     _messageExt;                                              
	struct FString                                     _messageAction;                                           
	int                                                _channel;                                                 
	struct FString                                     _url;                                                     
};


struct UScriptHelperClient_ShareLogFile_Params
{
	struct FString                                     InLogFileName;                                            
};


struct UScriptHelperClient_SHA256Bytes_Params
{
	TArray<unsigned char>                              inArray;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_SHA256_Params
{
	struct FString                                     str;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_SHA1_Params
{
	struct FString                                     str;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_SetWebviewPosition_Params
{
	int                                                X;                                                        
	int                                                Y;                                                        
	int                                                W;                                                        
	int                                                H;                                                        
};


struct UScriptHelperClient_SetWebViewCacheInfoDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 
};


struct UScriptHelperClient_SetVpnServiceStrategy_Params
{
	struct FString                                     InKey;                                                    
	int                                                InValue;                                                  
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_SetVoiceSwitch_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               FirstVoicePopupSwitch;                                    
	bool                                               GDPRForbidVoiceSwitch;                                    
	bool                                               GDPRSettingSwitch;                                        
};


struct UScriptHelperClient_SetVoiceReEneterInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	float                                              Duration;                                                 
	int                                                MaxCount;                                                 
};


struct UScriptHelperClient_SetUserVulkanSetting_Params
{
	bool                                               Enable;                                                   
};


struct UScriptHelperClient_SetUserTMFPTapEnableFlag_Params
{
	int                                                EnableFlag;                                               
};


struct UScriptHelperClient_SetUserProperty_Params
{
	struct FString                                     propertyKey;                                              
	struct FString                                     propertyValue;                                            
};


struct UScriptHelperClient_SetUseMouseForTouch_Params
{
	bool                                               bUse;                                                     
};


struct UScriptHelperClient_SetUpdatedSoPatchFile_Params
{
	struct FString                                     InSourceFile;                                             
	int                                                InABI;                                                    
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_SetupAkAudioDeviceListener_Params
{
};


struct UScriptHelperClient_SetUIStatMaxClickTimes_Params
{
	int                                                Times;                                                    
};


struct UScriptHelperClient_SetUIConfigTMFPTapEnableFlag_Params
{
	int                                                uiEnable;                                                 
};


struct UScriptHelperClient_SetUDPPingControlFlag_Params
{
	int                                                Lock;                                                     
	int                                                BindType;                                                 
};


struct UScriptHelperClient_SetTssNetworkStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	int                                                status;                                                   
};


struct UScriptHelperClient_SetTMFPTapWhiteListFlag_Params
{
	int                                                TapWhiteList;                                             
};


struct UScriptHelperClient_SetTextureGroupLODBias_Params
{
	unsigned char                                      GroupID;                                                  
	int                                                MipBias;                                                  
};


struct UScriptHelperClient_SetTestEditorNum_Params
{
	int                                                PlayerCount;                                              
	struct FString                                     Num;                                                      
	struct FString                                     SceneName;                                                
	int                                                Platform;                                                 
};


struct UScriptHelperClient_SetSoundEffectQuality_Params
{
	int                                                Type;                                                     
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_SetShowFriendObservers_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               bShow;                                                    
};


struct UScriptHelperClient_SetServerTimeInSec_Params
{
	int64_t                                            InServerTimeInSec;                                        
};


struct UScriptHelperClient_SetSelfieSwitch_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               SelfieSwitch;                                             
};


struct UScriptHelperClient_SetSdkIoctl_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	int                                                Request;                                                  
	struct FString                                     Token;                                                    
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_SetScreenPadding_Params
{
	struct FMargin                                     InPadding;                                                
};


struct UScriptHelperClient_SetReportBugSwitch_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReportBugSwitch;                                          
};


struct UScriptHelperClient_SetRemoteResource_Params
{
	struct FString                                     AssetId;                                                  
	class UObject*                                     DescObj;                                                  
};


struct UScriptHelperClient_SetRegionNoByLua_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	int                                                regionNo;                                                 
};


struct UScriptHelperClient_SetRedBloodSwitch_Params
{
	bool                                               redBloodSwitch;                                           
};


struct UScriptHelperClient_SetPufferBuildInfo_Params
{
	struct FString                                     PipeLineID;                                               
	struct FString                                     BuildNo;                                                  
};


struct UScriptHelperClient_SetPublishRegion_Params
{
	struct FString                                     Region;                                                   
};


struct UScriptHelperClient_SetPlayerBaseInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     OpenID;                                                   
	uint64_t                                           RoleID;                                                   
	struct FString                                     PlayerName;                                               
	struct FString                                     HeadIconUrl;                                              
};


struct UScriptHelperClient_SetNationSwitch_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               NationAllSwitch;                                          
	bool                                               NationBattleSwitch;                                       
	bool                                               NationRankSwitch;                                         
};


struct UScriptHelperClient_SetMyFriendObserversDetail_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	TArray<struct FFriendObserver>                     FriendObserversDetails;                                   
};


struct UScriptHelperClient_SetMiniGameFinalAwardResId_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	int                                                AwardResId;                                               
};


struct UScriptHelperClient_SetMatchNoAuthMode_Params
{
	bool                                               bUsingNoAuth;                                             
};


struct UScriptHelperClient_SetLuaFastGCMode_Params
{
	int                                                Mode;                                                     
};


struct UScriptHelperClient_SetLinkStyle_Params
{
	struct FString                                     StyleName;                                                
	int                                                FontSize;                                                 
	struct FString                                     FontPath;                                                 
	struct FString                                     FontColor;                                                
	bool                                               ShowUnderline;                                            
	struct FString                                     PathHyperLinkNormalBrush;                                 
	struct FString                                     PathHyperLinkHoveredrBrush;                               
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_SetLevelStreamingUnloadTimeslice_Params
{
	bool                                               Enabled;                                                  
};


struct UScriptHelperClient_SetLevelGamePlayLoadPriority_Params
{
	class ULevelStreaming*                             TargetLevel;                                              
	int                                                Priority;                                                 
};


struct UScriptHelperClient_SetiTOPLbsDelay_Params
{
	int                                                Delay;                                                    
};


struct UScriptHelperClient_SetIPRegion_Params
{
	int                                                region_no;                                                
};


struct UScriptHelperClient_SetIosStuckEnableByServerConfig_Params
{
	int                                                bEnable;                                                  
};


struct UScriptHelperClient_SetIOSBGDownloadAttribute_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               bEnableCellularAccess;                                    
	bool                                               bEnableResumeData;                                        
	int                                                nMinFileSize;                                             
	int                                                nMaxTasks;                                                
};


struct UScriptHelperClient_SetImageStyle_Params
{
	struct FString                                     StyleName;                                                
	int                                                ImageSize;                                                
	struct FString                                     ImagePath;                                                
	struct FString                                     ImageColor;                                               
	bool                                               bPreLoad;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_SetIGProxyData_Params
{
	struct FString                                     InJsonData;                                               
};


struct UScriptHelperClient_SetHapticsEngineEnable_Params
{
	bool                                               bEnable;                                                  
};


struct UScriptHelperClient_SetGlobalRedBloodSwitch_Params
{
	bool                                               redBloodSwitch;                                           
};


struct UScriptHelperClient_SetGDPRUserType_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	int                                                GDPRUserType;                                             
};


struct UScriptHelperClient_SetGameThreadPriority_Params
{
	int                                                NewPriority;                                              
};


struct UScriptHelperClient_SetGameThreadName_Params
{
	struct FString                                     GameThreadName;                                           
};


struct UScriptHelperClient_SetGameStatusMap_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	TMap<struct FString, struct FString>               GameStatusMap;                                            
};


struct UScriptHelperClient_SetGameSrvID_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	int                                                GameSrvID;                                                
};


struct UScriptHelperClient_SetForceVulkanAvailable_Params
{
	bool                                               Enable;                                                   
};


struct UScriptHelperClient_SetFontStyle_Params
{
	struct FString                                     StyleName;                                                
	int                                                FontSize;                                                 
	struct FString                                     FontPath;                                                 
	struct FString                                     FontColor;                                                
	bool                                               UseShadow;                                                
	bool                                               IsBold;                                                   
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_SetFixPostLoadSubojbectsBugEnable_Params
{
	int                                                Option;                                                   
};


struct UScriptHelperClient_SetFileHideKeywords_Params
{
	TArray<struct FString>                             Keywords;                                                 
};


struct UScriptHelperClient_SetExtraLocalizationMap_Params
{
	TMap<struct FString, struct FString>               translationMap;                                           
};


struct UScriptHelperClient_SetExtraItemTableMappingByFix_Params
{
	TMap<int, struct FItemFixTableItem>                ItemFixMap;                                               
};


struct UScriptHelperClient_SetEncryptKey_Params
{
	int                                                KeyChainId;                                               
	int                                                KeyIndex;                                                 
	struct FString                                     Key;                                                      
};


struct UScriptHelperClient_SetDynamicLevels_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	TArray<struct FString>                             DynamicLevels;                                            
};


struct UScriptHelperClient_SetDumpShaderCompile_Params
{
	int                                                iDumpVal;                                                 
};


struct UScriptHelperClient_SetDownLoadLanguageName_Params
{
	struct FString                                     Language;                                                 
};


struct UScriptHelperClient_SetDisableGyrSensor_Params
{
	bool                                               InDisableSensor;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_SetDeviceQualityLevel_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_SetDeviceQualityLevel_Params
{
	int                                                NewLevel;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_SetCrashContextReportLevel_Params
{
	int                                                Level;                                                    
};


struct UScriptHelperClient_SetConfigString_Params
{
	struct FString                                     IniFileName;                                              
	struct FString                                     SectionName;                                              
	struct FString                                     KeyName;                                                  
	struct FString                                     Value;                                                    
};


struct UScriptHelperClient_SetConfigInt_Params
{
	struct FString                                     IniFileName;                                              
	struct FString                                     SectionName;                                              
	struct FString                                     KeyName;                                                  
	int                                                Value;                                                    
};


struct UScriptHelperClient_SetConfigBool_Params
{
	struct FString                                     IniFileName;                                              
	struct FString                                     SectionName;                                              
	struct FString                                     KeyName;                                                  
	bool                                               Value;                                                    
};


struct UScriptHelperClient_SetCanWatchEnemy_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               bCan;                                                     
};


struct UScriptHelperClient_SetBtnClickInCdFunc_Params
{
};


struct UScriptHelperClient_SetAppDetailInfo_Params
{
	struct FString                                     AppInfo;                                                  
};


struct UScriptHelperClient_SetAllTextureGroupBiasFromQuality_Params
{
};


struct UScriptHelperClient_SetAllLinkStyle_Params
{
};


struct UScriptHelperClient_SetAllImageStyle_Params
{
};


struct UScriptHelperClient_SetAllFontStyle_Params
{
};


struct UScriptHelperClient_SetActivePufferTick_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ActivePufferTick;                                         
};


struct UScriptHelperClient_SetAccountRegion_Params
{
	struct FString                                     Region;                                                   
};


struct UScriptHelperClient_SendRecordFinishedGuideReq_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     TipsID;                                                   
};


struct UScriptHelperClient_SendPlayEmote_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	int                                                EmoteIndex;                                               
};


struct UScriptHelperClient_SendLobbyChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     gid;                                                      
	struct FString                                     Content;                                                  
};


struct UScriptHelperClient_SendClientLog_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     ErrorReason;                                              
	struct FString                                     errorDescription;                                         
	bool                                               pullAll;                                                  
};


struct UScriptHelperClient_ScheduleLocalNotificationAtTime_Params
{
	int                                                Year;                                                     
	int                                                Month;                                                    
	int                                                Day;                                                      
	int                                                Hour;                                                     
	int                                                Minute;                                                   
	int                                                Second;                                                   
	bool                                               LocalTime;                                                
	struct FString                                     Title;                                                    
	struct FString                                     Body;                                                     
	struct FString                                     Action;                                                   
	int                                                NotificationID;                                           
};


struct UScriptHelperClient_SaveToSharedPreferences_Params
{
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
};


struct UScriptHelperClient_SaveStringToIntermediateFile_Params
{
	struct FString                                     String;                                                   
	struct FString                                     Filename;                                                 
};


struct UScriptHelperClient_SaveStringToFileWithEncoding_Params
{
	struct FString                                     String;                                                   
	struct FString                                     Filename;                                                 
	int                                                EncodingOptions;                                          
};


struct UScriptHelperClient_SaveStringToFile_Params
{
	struct FString                                     String;                                                   
	struct FString                                     Filename;                                                 
};


struct UScriptHelperClient_SaveStringArrayToFile_Params
{
	TArray<struct FString>                             Lines;                                                    
	struct FString                                     Filename;                                                 
};


struct UScriptHelperClient_SaveSMapsFile_Params
{
};


struct UScriptHelperClient_SaveSavFileByByteArray_Params
{
	struct FString                                     Filename;                                                 
	int                                                CompressedSize;                                           
	int                                                UncompressedSize;                                         
	TArray<unsigned char>                              ByteArray;                                                
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_SaveLuaMemoryFile_Params
{
	struct FString                                     Filename;                                                 
	struct FString                                     InputContent;                                             
	bool                                               RmExistFile;                                              
};


struct UScriptHelperClient_SaveLoadGameSlotCrashFlag_Params
{
};


struct UScriptHelperClient_SaveGameSlotMultiThread_Params
{
};


struct UScriptHelperClient_SaveArrayToFileByFullPath_Params
{
	TArray<unsigned char>                              Content;                                                  
	struct FString                                     FullPathName;                                             
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_SaveArrayToFile_Params
{
	TArray<unsigned char>                              Content;                                                  
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_SaveAOSMemMapsInfo_Params
{
};


struct UScriptHelperClient_RunTestCreateLobbyActor_Params
{
};


struct UScriptHelperClient_RunFileLockHelper_Params
{
};


struct UScriptHelperClient_RunCvmTestCases_Params
{
	uint64_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_RunConsoleCommondAndGetString_Params
{
	struct FString                                     commond;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_RunConsoleCommond_Params
{
	struct FString                                     commond;                                                  
};


struct UScriptHelperClient_RSAPubEncrypt_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_RSAPubDecrypt_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_RSAPriEncrypt_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_RSAPriDecrypt_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_RoomOwnerInterruptGame_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_ReturnToLobby_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_RestartShaderPrecompileBackend_Params
{
};


struct UScriptHelperClient_RestartShaderPrecompile_Params
{
};


struct UScriptHelperClient_RestartPuffer_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               needCheck;                                                
	int                                                maxDownloadsPerTask;                                      
	int                                                maxDownTask;                                              
	int                                                maxDownloadSpeed;                                         
	bool                                               useOldInterface;                                          
	bool                                               removeOldWhenUpdate;                                      
	int                                                versionType;                                              
	struct FString                                     InDownloadFuncDict;                                       
	int                                                InDnsType;                                                
	int                                                InDownloadStage;                                          
	int                                                InDownloadEngine;                                         
};


struct UScriptHelperClient_RestartGame_Params
{
};


struct UScriptHelperClient_ResolveDNSWithServerIP_Params
{
	struct FString                                     DomainName;                                               
	struct FString                                     ServerIP;                                                 
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_ResolveDNS_Params
{
	struct FString                                     DomainName;                                               
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_ResetSlateTickEveryFrame_Params
{
	int                                                SlateUIID;                                                
};


struct UScriptHelperClient_ResetAllTextureGroupBiasFromQuality_Params
{
};


struct UScriptHelperClient_ResetAllSlateTickEveryFrame_Params
{
};


struct UScriptHelperClient_RequireSlateTickEveryFrameBeforeTargetFrame_Params
{
	int                                                FrameNum;                                                 
};


struct UScriptHelperClient_RequireSlateTickEveryFrame_Params
{
	int                                                SlateUIID;                                                
};


struct UScriptHelperClient_RequestFile_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     FilePath;                                                 
	bool                                               ForceUpdate;                                              
	struct FString                                     InUA;                                                     
	uint64_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_ReportFirebaseEventWithString_Params
{
	struct FString                                     eventTypeString;                                          
	struct FString                                     bundleExtraKey;                                           
	struct FString                                     bundleExtraValue;                                         
	bool                                               isUnique;                                                 
};


struct UScriptHelperClient_ReportFirebaseEventWithParam_Params
{
	struct FString                                     eventTypeString;                                          
	TMap<struct FString, struct FString>               _params;                                                  
	bool                                               isUnique;                                                 
};


struct UScriptHelperClient_ReportEventRegisterCompleted_Params
{
};


struct UScriptHelperClient_ReportEventPurchaseConsider_Params
{
};


struct UScriptHelperClient_ReportEventLoadingCompleted_Params
{
};


struct UScriptHelperClient_ReportCrashLogWithFDNum_Params
{
	struct FString                                     baseLogInfo;                                              
};


struct UScriptHelperClient_ReportContextValuesOnCrash_Params
{
	struct FString                                     Json;                                                     
};


struct UScriptHelperClient_ReportBattleChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     Msg;                                                      
	int                                                msgExtraParam;                                            
};


struct UScriptHelperClient_ReplyInvite_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     gid;                                                      
	bool                                               bReply;                                                   
};


struct UScriptHelperClient_RemoveWebView_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_RemoveKnownMissingPackageRefObjectByObj_Params
{
	class UObject*                                     BindObj;                                                  
};


struct UScriptHelperClient_RemoveKnownMissingPackage_Params
{
	struct FString                                     PackageName;                                              
};


struct UScriptHelperClient_RemoveBPClassManager_Params
{
};


struct UScriptHelperClient_RemountPakFiles_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_RemapMemMap_Params
{
	struct FString                                     Name;                                                     
	int                                                NewSize;                                                  
};


struct UScriptHelperClient_ReleaseWifiLock_Params
{
};


struct UScriptHelperClient_ReleaseSplashScreenImage_Params
{
};


struct UScriptHelperClient_ReleaseSlateTickEveryFrame_Params
{
	int                                                SlateUIID;                                                
};


struct UScriptHelperClient_ReleaseRTPoolSnapShots_Params
{
};


struct UScriptHelperClient_ReleaseRTPoolResources_Params
{
};


struct UScriptHelperClient_ReleaseGameEnginePlaybackComp_Params
{
	int                                                Option;                                                   
};


struct UScriptHelperClient_ReleaseAllTables_Params
{
};


struct UScriptHelperClient_ReInitializePuffer_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               needCheck;                                                
	int                                                maxDownloadsPerTask;                                      
	int                                                maxDownTask;                                              
	int                                                maxDownloadSpeed;                                         
	bool                                               useOldInterface;                                          
	bool                                               removeOldWhenUpdate;                                      
	int                                                versionType;                                              
	struct FString                                     InDownloadFuncDict;                                       
	int                                                InDnsType;                                                
	int                                                InDownloadStage;                                          
	int                                                InDownloadEngine;                                         
};


struct UScriptHelperClient_ReInitializeCvm_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_RegisterMemoryWarningHandle_Params
{
	struct FScriptDelegate                             OnMemoryWarning;                                          
};


struct UScriptHelperClient_RefershAllManagedTickConfigWhenFPSChanged_Params
{
};


struct UScriptHelperClient_ReduceVirMem_Params
{
	int                                                Low;                                                      
	int                                                Dec;                                                      
};


struct UScriptHelperClient_RecoverWebView_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_RecoverShrunkODPaksBins_Params
{
	TMap<uint32_t, struct FString>                     Keys;                                                     
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_RecordVirMemInfo_Params
{
};


struct UScriptHelperClient_RecordThreadIndexByGameThreadIOS_Params
{
};


struct UScriptHelperClient_RecordLuaExceptionInfo_Params
{
	struct FString                                     exception;                                                
};


struct UScriptHelperClient_RebuildHISM_Params
{
	class UHierarchicalInstancedStaticMeshComponent*   Comp;                                                     
	bool                                               Async;                                                    
	bool                                               ForceUpdate;                                              
};


struct UScriptHelperClient_ReadManagedTickMapSwitchers_Params
{
};


struct UScriptHelperClient_QuitFightChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_QuickLogin_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	int                                                refreshTokenBeforeExpDays;                                
};


struct UScriptHelperClient_PurgePackageByKeyword_Params
{
	struct FString                                     Keyword;                                                  
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_ProjectUserDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_ProjectSavedDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_ProjectDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_ProjectContentDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_ProcessSoPatch_Params
{
	struct FString                                     InAppVerStr;                                              
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_ProcessServerRelationChainError_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     ErrorMsg;                                                 
	int                                                iForceLoginInterval;                                      
};


struct UScriptHelperClient_PrintUAEDataTableManagerMemDetail_Params
{
};


struct UScriptHelperClient_PostGameStatusToTMFPSMap_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     Key;                                                      
	TMap<struct FString, struct FString>               mapData;                                                  
};


struct UScriptHelperClient_PlayHapticsFile_Params
{
	struct FString                                     FilePath;                                                 
	int                                                Duration;                                                 
	struct FScriptDelegate                             Callback;                                                 
};


struct UScriptHelperClient_PerfReportSetLabel_Params
{
	struct FString                                     str;                                                      
};


struct UScriptHelperClient_PerfReportAddNote_Params
{
	struct FString                                     str;                                                      
};


struct UScriptHelperClient_OpenWebviewInGameProcess_Params
{
	struct FString                                     URL;                                                      
	int                                                Left;                                                     
	int                                                Top;                                                      
	int                                                Right;                                                    
	int                                                Bottom;                                                   
};


struct UScriptHelperClient_OpenURLInSDK_Params
{
	struct FString                                     InURL;                                                    
	bool                                               InVisibleToolbar;                                         
	bool                                               InSystemWebBrowser;                                       
	bool                                               InFullScreen;                                             
	struct FString                                     ExtraJson;                                                
};


struct UScriptHelperClient_OpenSystemStorage_Params
{
};


struct UScriptHelperClient_OpenSystemSettings_Params
{
};


struct UScriptHelperClient_OpenShaderCodeLibrary_Params
{
	struct FString                                     Path;                                                     
	struct FString                                     VersionNum;                                               
	bool                                               bForceOpen;                                               
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_OpenH5FromCache_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     ModuleName;                                               
	struct FString                                     Language;                                                 
	int                                                netType;                                                  
	int                                                Top;                                                      
	int                                                Left;                                                     
	int                                                Right;                                                    
	struct FString                                     ViewParam;                                                
};


struct UScriptHelperClient_OnWebViewCacheInfoDelegate__DelegateSignature_Params
{
	int                                                code;                                                     
};


struct UScriptHelperClient_OnWebViewCache_Params
{
	int                                                code;                                                     
};


struct UScriptHelperClient_OnPakFileCRCCheck_Params
{
	struct FString                                     PakFileName;                                              
};


struct UScriptHelperClient_OnNotifyFightFriendChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FFightFriendChat                            Data;                                                     
};


struct UScriptHelperClient_OnIslandPlayerInfoNotify_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	int                                                LandId;                                                   
};


struct UScriptHelperClient_OnInviteNextBattle_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     gid;                                                      
	struct FString                                     Name;                                                     
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_OnGetUpdateStateCDNConfigUrl_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     URL;                                                      
};


struct UScriptHelperClient_OnGetItemBigIcon__DelegateSignature_Params
{
	struct FString                                     strPath;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_OneUp_GLauncherSetLogger_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_OneUp_GLauncherSetLauncherEventCallback_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_OneUp_GLauncherSendEditorHWND_Params
{
	struct FString                                     HWNDStr;                                                  
};


struct UScriptHelperClient_OneUp_GLauncherInitialize_Params
{
	struct FString                                     GameID;                                                   
	struct FString                                     gameChannelId;                                            
	struct FString                                     launcherChannelId;                                        
	struct FString                                     Port;                                                     
	struct FString                                     loginFrom;                                                
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_OneUp_GLauncherGetMsdkWebTokenEncodeUrl_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_OneUp_GLauncherGetLoginInfoJsonStr_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_OneUp_GLauncherAsyncGetMsdkWebTokenEncodeUrl_Params
{
	struct FString                                     URL;                                                      
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_OneUp_GLauncherAsyncGameEventNotify_Params
{
	struct FString                                     Event_Code;                                               
	struct FString                                     Event_Msg;                                                
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_OnEnterLobbyReloadLocalizationResource_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_OnEnterGameReleaseLocalizationResource_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_OnDolphinAppUpdateFinished_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_OnCombatHitFeedback_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               bCombatHitFeedbackEnable;                                 
};


struct UScriptHelperClient_OnBattleResultCallBack_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FBattleResultData                           BattleResultData;                                         
};


struct UScriptHelperClient_OnBattleResult_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FBattleResultData                           BattleResultData;                                         
};


struct UScriptHelperClient_ObjectPoolServerSwitch_Params
{
	bool                                               bSwitchOn;                                                
};


struct UScriptHelperClient_NotifyBeginnerFinishedGuideUpdated_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               GuideSwitch;                                              
	TArray<struct FPlayerFinishedGuide>                finished_guide;                                           
	int                                                player_level;                                             
	int                                                player_exp_type;                                          
};


struct UScriptHelperClient_NoschatShareWithUrlInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     _descShare;                                               
	struct FString                                     _titleShare;                                              
	struct FString                                     _imgPath;                                                 
	struct FString                                     _url;                                                     
	int                                                _shareScene;                                              
};


struct UScriptHelperClient_NoschatShareToFriend_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     OpenID;                                                   
	struct FString                                     Title;                                                    
	struct FString                                     Desc;                                                     
	struct FString                                     mediaId;                                                  
	struct FString                                     messageExt;                                               
	struct FString                                     mediaTagName;                                             
	struct FString                                     msdkExtInfo;                                              
};


struct UScriptHelperClient_NoschatShare_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     _descShare;                                               
	struct FString                                     _titleShare;                                              
	struct FString                                     _imgPath;                                                 
	struct FString                                     _mediaTagName;                                            
	struct FString                                     _messageExt;                                              
};


struct UScriptHelperClient_MSDKWebViewCallJS_Params
{
	struct FString                                     strJS;                                                    
};


struct UScriptHelperClient_MoveFollowTarget_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	int                                                FollowType;                                               
	uint64_t                                           UID;                                                      
};


struct UScriptHelperClient_MoveFile_Params
{
	struct FString                                     SrcFullPath;                                              
	struct FString                                     DesFullPath;                                              
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_MountPakFile_Params
{
	struct FString                                     InPakFilename;                                            
	struct FString                                     Key;                                                      
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_MountDecompressedShaderLibrary_Params
{
	struct FString                                     GroupName;                                                
};


struct UScriptHelperClient_MessageBoxExt_Params
{
	struct FString                                     Caption;                                                  
	struct FString                                     Text;                                                     
};


struct UScriptHelperClient_MemOptSetGameState_Params
{
	int                                                State;                                                    
};


struct UScriptHelperClient_MemOption_Params
{
	int                                                Option;                                                   
};


struct UScriptHelperClient_MediaCopyFromPakToLocal_Params
{
	struct FString                                     From;                                                     
	bool                                               bForce;                                                   
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_MD5LuaString_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_MD5HashAnsiString_Params
{
	struct FString                                     str;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_ManualSleep_Params
{
	float                                              Seconds;                                                  
};


struct UScriptHelperClient_LuaSnapShot_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_LuaLoadFileToString_Params
{
	struct FString                                     InFileName;                                               
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_LowMemoryInGB_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_LogoutAllDevices_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
};


struct UScriptHelperClient_Logout_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
};


struct UScriptHelperClient_LoginWithExtraInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	uint32_t                                           Channel;                                                  
	struct FString                                     InExtraJson;                                              
	bool                                               SkipLocalCacheCheck;                                      
};


struct UScriptHelperClient_Login_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	uint32_t                                           Channel;                                                  
};


struct UScriptHelperClient_LobbySetUserRegion_Params
{
	int                                                InRegion;                                                 
};


struct UScriptHelperClient_LobbySetProxyPortlist_Params
{
	struct FString                                     InNodePortList;                                           
};


struct UScriptHelperClient_LobbySetProxyNodelist_Params
{
	struct FString                                     InNodeIpList;                                             
};


struct UScriptHelperClient_LobbySetEchoPortlist_Params
{
	struct FString                                     InEchoPortList;                                           
};


struct UScriptHelperClient_LobbyIsLinkProxy_Params
{
	struct FString                                     InIp;                                                     
	int                                                InPort;                                                   
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_LobbyAddAddress_Params
{
	struct FString                                     InProtocol;                                               
	struct FString                                     InIp;                                                     
	int                                                InPort;                                                   
};


struct UScriptHelperClient_LoadSOFromOBB_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_LoadSideLoadSOFromOBB_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_LoadSavFileAsByteArray_Params
{
	struct FString                                     Filename;                                                 
	struct FSavFileData                                ReturnValue;                                              
};


struct UScriptHelperClient_LoadSavedFileToStringArray_Params
{
	struct FString                                     Filename;                                                 
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_LoadLibraryAdditional_Params
{
	struct FString                                     UsageVariant;                                             
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_LoadIntermediateFileToString_Params
{
	struct FString                                     Filename;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_LoadH5FromCache_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     ModuleName;                                               
	struct FString                                     Language;                                                 
	int                                                netType;                                                  
	int                                                Top;                                                      
	int                                                Left;                                                     
	int                                                Right;                                                    
	struct FString                                     ViewParam;                                                
};


struct UScriptHelperClient_LoadFileToStringByFullPath_Params
{
	struct FString                                     FullPathName;                                             
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_LoadFileToString_Params
{
	struct FString                                     Filename;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_LoadFileToArrayByFullPath_Params
{
	struct FString                                     FullPathName;                                             
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UScriptHelperClient_LoadFileToArray_Params
{
	struct FString                                     Filename;                                                 
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UScriptHelperClient_LoadAmendODs_Params
{
	TMap<uint32_t, struct FString>                     Keys;                                                     
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_LoadAFDTranslation_Params
{
};


struct UScriptHelperClient_ListDirectoryFiles_Params
{
	struct FString                                     DirectoryPath;                                            
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_ListAllLoadedSymbols_Params
{
};


struct UScriptHelperClient_LaunchUrl_Params
{
	struct FString                                     URL;                                                      
};


struct UScriptHelperClient_IsWoWEditor_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsWindowsClientReplay_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsWindows_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsWindowOB_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsUsingBluetooth_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsUseTypicalResultFlowMode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsUpdateSkip_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsUEPUBGM_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsTypicalMode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsTest_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsSystemVPNOpened_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsSupportVulkan_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsSplitMiniPakVersion_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsSplitMapPakVersion_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_isSkipUpdateByRepair_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsShowingWatermark_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsShipping_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsRuningOnVulkan_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsReleaseVersion_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsPVEMode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsPerformanceLimitedStat_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsOpenAOS90FPSConfig_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsOpenAOS120FPSConfig_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_IsODPakMonted_Params
{
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsNotificationEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsNoAuthMode_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsNetworkReachable_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsMounted_Params
{
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsMlAIDebug_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsMatchVersion_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsMatchNoAuthMode_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsLowMemoryDevice_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsLightVer_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsLaunchedByLocalNotification_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsLastSessionCrash_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsJaguar_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsIPhoneFiveSOriginal_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsIPhoneFiveS_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsIOSVersionAbove13_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsInstallWX_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsInstallWhatsapp_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsInstallVK_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsInstallTwitter_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsInstallTikTok_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsInstallOpenRec_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsInstallMirrativ_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsInstallMessenger_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsInstallLite_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsInstallLine_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsInstallFaceBook_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsInstallDiscord_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsInstallBgBgByiTOP_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsInReplayState_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsHOS_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsHapticsEngineEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsGameFileExistsWithPakCheck_Params
{
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsForwardPlusShaderLibraryLoaded_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsForCE_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsFileReady_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     FilePath;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsFileExistsWithPakCheckMatchExt_Params
{
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsFileExistsWithPakCheck_Params
{
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsFileExistsWithOutPakCheck_Params
{
	struct FString                                     Path;                                                     
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsFileExistInCSCWithCheckRaw_Params
{
	struct FString                                     PkgName;                                                  
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsFileExistInCSCWithCheck_Params
{
	struct FString                                     Path;                                                     
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsFileExistByFileName_Params
{
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsFileExistByExtension_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     Filename;                                                 
	struct FString                                     fileExtension;                                            
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsFileExist_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsEnableDSGrayPublishFlag_Params
{
	uint64_t                                           nGrayPublishFlag;                                         
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsEmulatorWhenInit_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsEmulator_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsEditorDedicatedServer_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsEditor_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsEarlyZPassEnable_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_IsDolbyAtmosSupported_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsDeviceSupportsViberation_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsDeviceSupportsHapticsEngine_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsDeviceSupportGyrSensor_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsDeviceOverheat_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsDeviceMotionBodyAvailable_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsDeviceHWSupportVulkan_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsDevelopment_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsCPUArchMisMatch_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsConnected_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsCloudVersion_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsCEVersion_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsCEHideLobbyUI_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsBlueprintEnum_Params
{
	struct FString                                     Path;                                                     
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsBasePrefecthOpen_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsAsanVersion_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsAos32Bit_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_IsAndroidHasGyr_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_InviteWhatsappOfflineFriends_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     Title;                                                    
	struct FString                                     Content;                                                  
};


struct UScriptHelperClient_InviteSystemOfflineFriends_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     Title;                                                    
	struct FString                                     Content;                                                  
};


struct UScriptHelperClient_InviteSMSOfflineFriends_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     Content;                                                  
};


struct UScriptHelperClient_InviteLineOfflineFriends_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     Title;                                                    
	struct FString                                     Content;                                                  
};


struct UScriptHelperClient_InviteFBOfflineFriends_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     Title;                                                    
	struct FString                                     Content;                                                  
	struct FString                                     link;                                                     
};


struct UScriptHelperClient_InstallNewApp_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_InitWebViewManager_Params
{
};


struct UScriptHelperClient_InitVPN_Params
{
	struct FString                                     InVPNGUID;                                                
	struct FString                                     InClientVersion;                                          
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_InitVlink_Params
{
};


struct UScriptHelperClient_InitQPlatformMisc_Params
{
};


struct UScriptHelperClient_InitLoginAccount_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	uint64_t                                           AccUin;                                                   
	struct FString                                     AccPswd;                                                  
};


struct UScriptHelperClient_InitJavaFunctions_Params
{
};


struct UScriptHelperClient_InitIOSNotchSize_Params
{
};


struct UScriptHelperClient_InitIMSDKEnv_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	uint32_t                                           iEnv;                                                     
};


struct UScriptHelperClient_InitializePuffer_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               needCheck;                                                
	int                                                maxDownloadsPerTask;                                      
	int                                                maxDownTask;                                              
	int                                                maxDownloadSpeed;                                         
	bool                                               useOldInterface;                                          
	bool                                               removeOldWhenUpdate;                                      
	int                                                versionType;                                              
	struct FString                                     InDownloadFuncDict;                                       
	int                                                InDnsType;                                                
	int                                                InDownloadStage;                                          
	int                                                InDownloadEngine;                                         
};


struct UScriptHelperClient_InitializeLaggingReporter_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               Enable;                                                   
};


struct UScriptHelperClient_InitializeCvmWithRunPhase_Params
{
	int                                                RunPhase;                                                 
};


struct UScriptHelperClient_InitHF_Params
{
};


struct UScriptHelperClient_InitHDmpveRemoteConfig_Params
{
};


struct UScriptHelperClient_InitDH2048_Params
{
	struct FString                                     gen_hex;                                                  
	struct FString                                     prime_hex;                                                
	int                                                v_srand;                                                  
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_InitDH_Params
{
	struct FString                                     gen;                                                      
	struct FString                                     prime;                                                    
	int                                                v_srand;                                                  
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_InfinityGauntletWithPrefix_Params
{
	struct FString                                     ClsName;                                                  
	struct FString                                     Prefix;                                                   
};


struct UScriptHelperClient_InfinityGauntlet_Params
{
	struct FString                                     ClsName;                                                  
};


struct UScriptHelperClient_HtmlEncode_Params
{
	struct FString                                     UnencodedString;                                          
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_HideH5WebView_Params
{
};


struct UScriptHelperClient_HDmpveRemoteConfigStartOnce_Params
{
};


struct UScriptHelperClient_HDmpveRemoteConfigSetUrl_Params
{
	struct FString                                     InRemoteConfigUrl;                                        
};


struct UScriptHelperClient_HDmpveRemoteConfigGetStringNotDefalut_Params
{
	struct FString                                     InKey;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_HDmpveRemoteConfigGetString_Params
{
	struct FString                                     InKey;                                                    
	struct FString                                     InDefaultValue;                                           
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_HDmpveRemoteConfigGetIntNotDefalut_Params
{
	struct FString                                     InKe;                                                     
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_HDmpveRemoteConfigGetInt_Params
{
	struct FString                                     InKey;                                                    
	int                                                InDefaultValue;                                           
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_HDmpveRemoteConfigGetBoolNotDefalut_Params
{
	struct FString                                     InKey;                                                    
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_HDmpveRemoteConfigGetBool_Params
{
	struct FString                                     InKey;                                                    
	bool                                               InDefaultValue;                                           
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_HDmpveRemoteConfigClear_Params
{
};


struct UScriptHelperClient_HaveReceivedNoticeCallback_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_HasRemoteConfigReady_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_HasNotice_Params
{
	int                                                Type;                                                     
	struct FString                                     Scene;                                                    
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_HasNotchInScreen_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_HasLoadGameSlotCrashFlag_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_HasDownloadedBasePak_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_HasActiveWifi_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_GuestLogin_Params
{
};


struct UScriptHelperClient_GRromelinkRecreateGameSocket_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GMTestAllocUObjs_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	int                                                Num;                                                      
};


struct UScriptHelperClient_GMH5Enable_Params
{
	bool                                               flag;                                                     
};


struct UScriptHelperClient_GetZddc_Check_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetYYXDeviceModel_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetWidgetsByClass_Params
{
	class UWidget*                                     Parent;                                                   
	class UClass*                                      Type;                                                     
	TArray<class UWidget*>                             Children;                                                 
};


struct UScriptHelperClient_GetWebViewTicket_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetWebviewFullScreenSize_Params
{
	int                                                OutSurfaceWidth;                                          
	int                                                OutSurfaceHeight;                                         
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetWeaponDIYIconPath_Params
{
	struct FString                                     PlayerUID;                                                
	int                                                WeaponId;                                                 
	struct FString                                     PlanID;                                                   
	bool                                               relativePath;                                             
	int                                                Width;                                                    
	int                                                Height;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetVolume_Params
{
	int                                                InStreamType;                                             
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetVoiceSdkReconnectInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	TMap<struct FString, struct FString>               Data;                                                     
};


struct UScriptHelperClient_GetUserVulkanSetting_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_GetUserTMFPTapEnableFlag_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetUseMouseForTouch_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_GetUObjectName_Params
{
	class UObject*                                     uObj;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetUnrealNetworkStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetUEPUBGMServerName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetUEPUBGMCPName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetToken_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetTMFPTapDeviceSupportFlag_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetTimezoneName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetTimeInMiliSeconds_Params
{
	float                                              ReturnValue;                                              
};


struct UScriptHelperClient_GetThreadIndexByThreadIOS_Params
{
	int                                                TargetThread;                                             
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetTextureGroupLODBias_Params
{
	unsigned char                                      GroupID;                                                  
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetTelecomSvr_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetTCDeviceLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetTableCount_Params
{
	struct FString                                     tableName;                                                
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetSystemProperty_Params
{
	struct FString                                     InKey;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetSystemLanguage_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetSubsideFeatureLevel_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_GetSrcVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetSplitMapConfigInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetSpecialData_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetSoundEffectQuality_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetSOStoredPath_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetSlateTouchDebugLogQueue_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_GetShaderPrecompileProgress_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetServerDelay_Params
{
	struct FString                                     ServerAddress;                                            
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetScreenWidthForWebview_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetScreenWidth_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetScreenPadding_Params
{
	struct FMargin                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetScreenHight_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetScreenHeightForWebview_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetScreenDensity_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetRootDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetRingMode_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetRemarkNameByGIDWithObj_Params
{
	class UObject*                                     Obj;                                                      
	struct FString                                     gid;                                                      
	struct FString                                     PlayerName;                                               
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetRemarkNameByGID_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     gid;                                                      
	struct FString                                     PlayerName;                                               
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetRegisterChannelID_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetRedFlameSwitch_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_GetRedBloodSwitch_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_GetPureIOSTmpDirectory_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetPureIOSLibraryDirectory_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetPureIOSDocumentsDirectory_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetPufferInitResult_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_GetPufferInitErrCode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	uint32_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_GetPublishRegion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetPublicKey_Params
{
	struct FString                                     cli_pri_key;                                              
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetPUBGModuleBaseAddr_Params
{
	struct FString                                     ParamModuleName;                                          
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetPrivateKey_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetPkgsFromDir_Params
{
	bool                                               bUseCheck;                                                
	struct FString                                     InDir;                                                    
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_GetPingReportInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetPingReportData_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetPhysicalScreenWidth_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetPhysicalScreenHeight_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetPhysicalFileTime_Params
{
	struct FString                                     InPath;                                                   
	int64_t                                            ReturnValue;                                              
};


struct UScriptHelperClient_GetPhoneType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetPhoneDeviceID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetPhoneAdvertisingID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetPandoraAllocatedMemory_Params
{
	int64_t                                            ReturnValue;                                              
};


struct UScriptHelperClient_GetPackChannel_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetPackageType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetPackageName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetOSVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetOperator_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetOperationRegion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetODPaksFileUseTime_Params
{
	struct FString                                     DumpFilename;                                             
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_GetODPaksDiffBinPakList_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_GetODPakName_Params
{
	struct FString                                     Path;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetObjectArrayNum_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetObbFilePath_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetNotchSize_Params
{
	TArray<int>                                        ReturnValue;                                              
};


struct UScriptHelperClient_GetNetworkType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetNativeVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetNativePackageTag_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetMyFriendObservers_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_GetMountedPaks_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_GetMemoryStats_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetMemorySize_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetMaxFPSConfigByQuality_Params
{
	TArray<int>                                        ReturnValue;                                              
};


struct UScriptHelperClient_GetLuaTableSize_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetLuaRootDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetLowerSOCModelAboveAndroid12_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetLoginChannel_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetLoadGameSlotCrashInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetLoadCostUseTime_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetLaunchLocalNotificationID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetLastSessionUserId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetKnownMissingPackage_Params
{
	struct FString                                     PackageName;                                              
	struct FString                                     DumpFilename;                                             
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_GetiTOPLbsDelay_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetITopGameId_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetIsSecretVersion_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetIsPlayerUsingVPN_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_GetIsOpenBattlePlayback_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_GetIPRegion_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetIpAddrByHost_Params
{
	struct FString                                     Host;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetIpAddr_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetInternalFilesDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetInstallChannelID_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetIMSDKEnv_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetHDmpveInstanceId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetH5CacheStatus_Params
{
	struct FString                                     ModuleName;                                               
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_GetGyroDuoOrientation_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetGyroDuoDiagnostic_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetGroupInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	int                                                SnsAction;                                                
	struct FGroupInfoWrapper                           ReturnValue;                                              
};


struct UScriptHelperClient_GetGPUFamily_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetGoogleServiceVersionCode_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetGLVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetGLType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetGameThreadId_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_GetGameStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetGameModeID_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetGameMasterGUID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetFromSharedPreferences_Params
{
	struct FString                                     Key;                                                      
	struct FString                                     DefaultValue;                                             
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetFrameCounter_Params
{
	int64_t                                            ReturnValue;                                              
};


struct UScriptHelperClient_GetFPS_Params
{
	float                                              ReturnValue;                                              
};


struct UScriptHelperClient_GetForceVulkanAvailable_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_GetFocusedSlateName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetFireBaseFCMToken_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetFileSizeOutsideSandbox_Params
{
	struct FString                                     FilePath;                                                 
	int64_t                                            ReturnValue;                                              
};


struct UScriptHelperClient_GetFileSizeOnDiskBytes_Params
{
	struct FString                                     FilePath;                                                 
	int64_t                                            ReturnValue;                                              
};


struct UScriptHelperClient_GetFileSizeOnDisk_Params
{
	struct FString                                     FilePath;                                                 
	uint32_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_GetFileSizeCompressed_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     FilePath;                                                 
	uint64_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_GetFileHash_Params
{
	struct FString                                     FilePath;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetFileDirPath_Params
{
	struct FString                                     FilePath;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetFBFriendsUnregistered_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	uint32_t                                           page;                                                     
	uint32_t                                           Count;                                                    
	uint32_t                                           Type;                                                     
	struct FString                                     extend;                                                   
};


struct UScriptHelperClient_GetExpandMaxFPSConfigByQuality_Params
{
	TArray<int>                                        ReturnValue;                                              
};


struct UScriptHelperClient_GetExactDeviceLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetEncodeUrl_Params
{
	struct FString                                     URL;                                                      
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetEmulatorName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetDSVersion_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetDSConnectionState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetDSConnectionIP_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetDownLoadLanguageName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetDownloadDirPath_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetDH2048PublicKey_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetDH2048PrivateKey_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetDH2048BattleKey_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetDeviceXID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetDeviceTotalSpace_Params
{
	uint64_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_GetDeviceQualityLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetDevicePlatformName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetDeviceName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetDeviceModel_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetDeviceMaxSupportSoundEffect_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetDeviceMake_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetDeviceInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetDeviceFreeSpace_Params
{
	uint64_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_GetDeviceABIInfoJson_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetDeivceNickName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetDataTime_MDHMS_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetCurrentRHILevel_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetCurrentLanguage_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetCurrentChannel_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetCrashUserAction_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetCpuType_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetCPUMaxFrequency_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetCPUCoreCount_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetCPUClockCycles_Params
{
	uint64_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_GetConfigString_Params
{
	struct FString                                     IniFileName;                                              
	struct FString                                     SectionName;                                              
	struct FString                                     KeyName;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetConfigInt_Params
{
	struct FString                                     IniFileName;                                              
	struct FString                                     SectionName;                                              
	struct FString                                     KeyName;                                                  
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetConfigBool_Params
{
	struct FString                                     IniFileName;                                              
	struct FString                                     SectionName;                                              
	struct FString                                     KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_GetCleanFileName_Params
{
	struct FString                                     FilePath;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetCDNUpdateInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	TMap<struct FString, struct FString>               Data;                                                     
};


struct UScriptHelperClient_GetCarrierInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetBuildVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetBlockCRC_Params
{
	struct FString                                     Filename;                                                 
	int64_t                                            Offset;                                                   
	uint32_t                                           Size;                                                     
	uint32_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_GetBattleKey_Params
{
	struct FString                                     svr_pub_key;                                              
	struct FString                                     cli_pri_key;                                              
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetAreaIPNo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetAppVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetAppStartupStageTime_Params
{
	struct FString                                     str;                                                      
	int64_t                                            ReturnValue;                                              
};


struct UScriptHelperClient_GetAppMountHandleInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetApplicationVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetAOSSHOP_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetAndroidVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetAndroidSysInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetAndroidSOVersion_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetAndroidMaxStackSize_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_GetAndroidMaxFDNum_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_GetAndroidCurrentFDNum_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UScriptHelperClient_GetAndroidBuildForArm_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GetAllLocalNotificationIDs_Params
{
	TArray<int>                                        ReturnValue;                                              
};


struct UScriptHelperClient_GetAllFilesInDir_Params
{
	struct FString                                     Dir;                                                      
	struct FString                                     Pattern;                                                  
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_GetActiveProfileName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetAccountRegion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GetAccessToken_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GenerateQRImage_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	int                                                Tag;                                                      
	int                                                Size;                                                     
	struct FString                                     Content;                                                  
	struct FString                                     logoPath;                                                 
};


struct UScriptHelperClient_GEMReportSubEvent_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     EventName;                                                
	struct FString                                     SubEventName;                                             
	TArray<struct FString>                             eventParams;                                              
};


struct UScriptHelperClient_GEMReportLobbyCustomEvent_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	int                                                EventID;                                                  
	bool                                               IsSuccess;                                                
	struct FString                                     strDesc;                                                  
};


struct UScriptHelperClient_GEMReportEvent_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     EventName;                                                
	TMap<struct FString, struct FString>               eventParams;                                              
};


struct UScriptHelperClient_GEMReportEnterLobbyEvent_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               IsSuccess;                                                
	struct FString                                     strDesc;                                                  
};


struct UScriptHelperClient_GameRegisterGRomeLink_Params
{
};


struct UScriptHelperClient_GameMasterSetUserInfo_Params
{
	struct FString                                     InPaidInfo;                                               
	struct FString                                     InUserToken;                                              
	struct FString                                     InAppId;                                                  
};


struct UScriptHelperClient_GameMasterSetUsableRegion_Params
{
	struct FString                                     InRegion;                                                 
};


struct UScriptHelperClient_GameMasterSetUdpEchoPort_Params
{
	int                                                InPort;                                                   
};


struct UScriptHelperClient_GameMasterSetOnlyWifiAccel_Params
{
	bool                                               InOn;                                                     
};


struct UScriptHelperClient_GameMasterSetFreeFlowUser_Params
{
	int                                                InType;                                                   
};


struct UScriptHelperClient_GameMasterOnNetDelay_Params
{
	int                                                InMillis;                                                 
};


struct UScriptHelperClient_GameMasterIsAccelOpened_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_GameMasterInit_Params
{
	int                                                InHookType;                                               
	struct FString                                     InGuid;                                                   
	struct FString                                     InLibs;                                                   
	int                                                InEchoPort;                                               
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GameMasterGetWebUIUrl_Params
{
	int                                                InType;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GameMasterGetVIPValidTime_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GameMasterGetUserID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_GameMasterGetAccelerationStatus_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_GameMasterClearAccelAddr_Params
{
};


struct UScriptHelperClient_GameMasterBeginRound_Params
{
	struct FString                                     InOpenid;                                                 
	struct FString                                     InPvpId;                                                  
};


struct UScriptHelperClient_GameMasterAddNewArenaAddress_Params
{
	struct FString                                     InProtocol;                                               
	struct FString                                     InIp;                                                     
	int                                                InPort;                                                   
};


struct UScriptHelperClient_GameMasterAddAccelAddr_Params
{
	struct FString                                     InProtocol;                                               
	struct FString                                     InIp;                                                     
	int                                                InPort;                                                   
};


struct UScriptHelperClient_GameJoySwitchOn_Params
{
	int                                                isOn;                                                     
};


struct UScriptHelperClient_GameJoyStopManualRecord_Params
{
};


struct UScriptHelperClient_GameJoyStartMomentsRecord_Params
{
};


struct UScriptHelperClient_GameJoyStartManualRecord_Params
{
};


struct UScriptHelperClient_GameJoySetVideoQuality_Params
{
	int                                                Quality;                                                  
};


struct UScriptHelperClient_GameJoySetMomentRecordSwitchOn_Params
{
	int                                                isOn;                                                     
};


struct UScriptHelperClient_GameJoySetLuaguage_Params
{
};


struct UScriptHelperClient_GameJoySetCurrentRecorderPosition_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
};


struct UScriptHelperClient_GameJoyIsSDKFeatureSupport_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_GameJoyEndMomentsRecord_Params
{
};


struct UScriptHelperClient_GameJoyClearMomentsVideo_Params
{
};


struct UScriptHelperClient_GainSystemLog_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_FullPathFileExist_Params
{
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_FullGC_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_ForceDecompressShaderLibrary_Params
{
	struct FString                                     GroupName;                                                
};


struct UScriptHelperClient_FlushPressedKeys_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_FlushKnownMissingPackageRefObject_Params
{
};


struct UScriptHelperClient_FlushAndroidWindowMemory_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_FinishPufferUpdateInDolphin_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               IsFinished;                                               
};


struct UScriptHelperClient_FindObjectByPath_Params
{
	struct FString                                     ObjectPath;                                               
	class UObject*                                     ReturnValue;                                              
};


struct UScriptHelperClient_FindFilesRecursiveSkipPakPlatform_Params
{
	struct FString                                     Dir;                                                      
	struct FString                                     Pattern;                                                  
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_FindFileInPakFiles_Params
{
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_FindClassByPath_Params
{
	struct FString                                     ObjectPath;                                               
	class UClass*                                      ReturnValue;                                              
};


struct UScriptHelperClient_FileSystemTesting_Params
{
	uint32_t                                           Count;                                                    
};


struct UScriptHelperClient_FetchFileFromPAK_Params
{
	struct FString                                     InFilePathInPak;                                          
	struct FString                                     InLocalFilePath;                                          
	bool                                               Override;                                                 
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_FeatureGuardSet_Params
{
	struct FString                                     FeatureName;                                              
	bool                                               bEnable;                                                  
};


struct UScriptHelperClient_ExportLocalUsage_3_Params
{
	struct FString                                     DestDir;                                                  
	struct FString                                     DumpFilePath;                                             
};


struct UScriptHelperClient_ExportLocalUsage_Params
{
	struct FString                                     DumpFilePath;                                             
};


struct UScriptHelperClient_ExitGameForSafety_Params
{
};


struct UScriptHelperClient_ExitGame_Params
{
};


struct UScriptHelperClient_ExeMemoryWarningHandle_Params
{
};


struct UScriptHelperClient_EnterLoading_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_EnterFightChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     gid;                                                      
};


struct UScriptHelperClient_EnterBattleStandAlone_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     MapPath;                                                  
	uint32_t                                           PlayerKey;                                                
	struct FString                                     PlayerName;                                               
	struct FString                                     DynamicLevelsOp;                                          
	struct FString                                     AdditionalURLSuffixes;                                    
	uint32_t                                           ModeID;                                                   
};


struct UScriptHelperClient_EnterBattle_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     URL;                                                      
	struct FString                                     HostnameOrIP;                                             
	uint32_t                                           Port;                                                     
	uint32_t                                           PlayerKey;                                                
	struct FString                                     PacketKey;                                                
	uint64_t                                           GameID;                                                   
	bool                                               IsObserver;                                               
	TMap<int, struct FString>                          AdvConfig;                                                
	int                                                WaterType;                                                
	uint32_t                                           WaterUserID;                                              
	uint32_t                                           ModeID;                                                   
	uint32_t                                           MainModeID;                                               
};


struct UScriptHelperClient_EncryptUID_Params
{
	struct FString                                     sUid;                                                     
	struct FString                                     sKey;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_EncryptItemData_Params
{
	TArray<int>                                        EncryptionItemList;                                       
};


struct UScriptHelperClient_EnableUseOldInterface_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               Enable;                                                   
};


struct UScriptHelperClient_EnableUrlCheck_Params
{
	bool                                               bShouldEnable;                                            
};


struct UScriptHelperClient_EnableTxtCheck_Params
{
};


struct UScriptHelperClient_EnableSubMountPoint_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_EnableShaderGroupAsync_New_Params
{
	struct FString                                     GroupNames;                                               
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_EnableShaderGroupAsync_Params
{
	struct FString                                     GroupNames;                                               
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_EnableShaderGroup_Params
{
	struct FString                                     GroupName;                                                
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_EnableShaderFinishPersent_Params
{
	float                                              ReturnValue;                                              
};


struct UScriptHelperClient_EnableReportVoiceSdkEvent_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               InitVoiceSdkComponentReportEnable;                        
	bool                                               VoiceSdkJoinRoomReportEnable;                             
	bool                                               VoiceSdkQuitRoomReportEnable;                             
	bool                                               VoiceSdkJoinLbsRoomReportEnable;                          
	bool                                               VoiceSdkQuitLbsRoomReportEnable;                          
	bool                                               VoiceSdkOnJoinTeamRoomReportEnable;                       
	bool                                               VoiceSdkOnJoinLbsRoomReportEnable;                        
};


struct UScriptHelperClient_EnableNativeDump_Params
{
	int                                                EnableDump;                                               
};


struct UScriptHelperClient_EnableMergeVirtual_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_EnableLowMemoryDevice_Params
{
	bool                                               bEnable;                                                  
};


struct UScriptHelperClient_EnableLocalizationStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               status;                                                   
};


struct UScriptHelperClient_EnableLobbyEntry_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_EnableIosStuckWorkWithDelayFrames_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               bEnable;                                                  
	int                                                DelayFrames;                                              
};


struct UScriptHelperClient_EnableIosStuckWorkNewWithDelayFrames_Params
{
	int                                                WorkType;                                                 
	int                                                DelayFrames;                                              
};


struct UScriptHelperClient_EnableIosStuckWorkNew_Params
{
	int                                                WorkType;                                                 
};


struct UScriptHelperClient_EnableIosStuckWork_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               bEnable;                                                  
};


struct UScriptHelperClient_EnableDataTunnelReport_Params
{
	bool                                               InEnable;                                                 
};


struct UScriptHelperClient_EnableAutoObjectRefreshStage_Params
{
	bool                                               bEnable;                                                  
};


struct UScriptHelperClient_EnableAOSForceAnsiMalloc_Params
{
};


struct UScriptHelperClient_EnableAkAudioSilenceMode_Params
{
	bool                                               InEnable;                                                 
};


struct UScriptHelperClient_DynamicUpdatePakOrderBackUp_Params
{
	struct FString                                     Filename;                                                 
};


struct UScriptHelperClient_DynamicUpdatePakOrder_Params
{
	struct FString                                     Filename;                                                 
};


struct UScriptHelperClient_DumpPhysScene_Params
{
	struct FString                                     Filename;                                                 
};


struct UScriptHelperClient_DumpPackageMemInfo_Params
{
	TArray<struct FString>                             AssetList;                                                
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_DumpOpenReadCollect_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     DumpFilename;                                             
};


struct UScriptHelperClient_DumpLogFile_Params
{
	bool                                               backup;                                                   
};


struct UScriptHelperClient_DumpConsoleVariables_Params
{
};


struct UScriptHelperClient_DoesPackageExist_Params
{
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_Disconnect_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
};


struct UScriptHelperClient_DisableSysCache_Params
{
};


struct UScriptHelperClient_DisableRepairResource_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_DisableAOSForceAnsiMalloc_Params
{
};


struct UScriptHelperClient_DisableAndroidHardwareAcceleration_Params
{
};


struct UScriptHelperClient_DirectToSetting_Params
{
};


struct UScriptHelperClient_DirectToMemoryManagement_Params
{
};


struct UScriptHelperClient_DH2048BN2Hex_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_DestroyConnector_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
};


struct UScriptHelperClient_DeleteFile_Params
{
	struct FString                                     fullPath;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_DeleteDirectory_Params
{
	struct FString                                     FilePath;                                                 
};


struct UScriptHelperClient_DelayInitThirdPartSDK_Params
{
};


struct UScriptHelperClient_CSCGetStatInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_CreateWidgetInfoCollector_Reset_Params
{
};


struct UScriptHelperClient_CreateWidgetInfoCollector_OnLevelStart_Params
{
};


struct UScriptHelperClient_CreateWidgetInfoCollector_OnLevelEnd_Params
{
};


struct UScriptHelperClient_CreateQRCodeTexture_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     Text;                                                     
	class UTexture2D*                                  ReturnValue;                                              
};


struct UScriptHelperClient_CreateHapticsEngine_Params
{
	struct FScriptDelegate                             Callback;                                                 
};


struct UScriptHelperClient_CrashSetUserId_Params
{
	struct FString                                     UserId;                                                   
};


struct UScriptHelperClient_CrashSetAppVersion_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     Version;                                                  
};


struct UScriptHelperClient_CrashReportLogInfo_Params
{
	struct FString                                     MsgType;                                                  
	struct FString                                     Info;                                                     
};


struct UScriptHelperClient_CrashPutUserData_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     Key;                                                      
	struct FString                                     Value;                                                    
};


struct UScriptHelperClient_CrashPostExceptionFull_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	int                                                Category;                                                 
	struct FString                                     Name;                                                     
	struct FString                                     Msg;                                                      
	struct FString                                     stack;                                                    
};


struct UScriptHelperClient_CrashPostException_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	int                                                Category;                                                 
	struct FString                                     Reason;                                                   
};


struct UScriptHelperClient_CrashLog_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	int                                                Level;                                                    
	struct FString                                     Tag;                                                      
	struct FString                                     Log;                                                      
	bool                                               needDump;                                                 
};


struct UScriptHelperClient_CopyFile_Params
{
	struct FString                                     SrcFullPath;                                              
	struct FString                                     DesFullPath;                                              
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_ConvertToAbsolutePathForExternalAppForWrite_Params
{
	struct FString                                     FilePath;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_ConvertToAbsolutePathForExternalAppForRead_Params
{
	struct FString                                     FilePath;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_ConvertTMap2JsonStr_Params
{
	TMap<struct FString, struct FString>               mapData;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_ConvertRelativePathToFull_Params
{
	struct FString                                     InPath;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_ConvertGamePathToRelativeFilePath_Params
{
	struct FString                                     Path;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_ConsumeLocalNotificationLaunchApp_Params
{
};


struct UScriptHelperClient_ConsoleCommand_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     Command;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_ConnectToURLWithDNSProxy_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     ProxyIP;                                                  
	struct FString                                     URL;                                                      
	int                                                ConnectTimeOutSeconds;                                    
};


struct UScriptHelperClient_ConnectToURL_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     URL;                                                      
	int                                                ConnectTimeOutSeconds;                                    
};


struct UScriptHelperClient_ComputerName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperClient_CloudVersionPipe_SendDataWithKey_Params
{
	struct FString                                     MsgKey;                                                   
	struct FString                                     MsgInfo;                                                  
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_CloudVersionPipe_SendData_Params
{
	struct FString                                     MsgInfo;                                                  
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_CloudVersionPipe_RecvDataTest_Params
{
	struct FString                                     MsgInfo;                                                  
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_CloudVersionPipe_PipeHelper_Params
{
	class UObject*                                     ReturnValue;                                              
};


struct UScriptHelperClient_CloudVersionPipe_Log_Params
{
	struct FString                                     LogInfo;                                                  
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_CloudVersionInitDataPipeline_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_CloseWebView_Params
{
};


struct UScriptHelperClient_CloseVLink_Params
{
};


struct UScriptHelperClient_CloseVideoListDialog_Params
{
};


struct UScriptHelperClient_CloseH5WebView_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_ClipBoardCopy_Params
{
	struct FString                                     Text;                                                     
};


struct UScriptHelperClient_ClientKickPlayerFromGame_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_ClientEnterWarMode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_ClientConfirmReturnToGame_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
};


struct UScriptHelperClient_ClientConfirmMisKill_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	int                                                bConfirm;                                                 
};


struct UScriptHelperClient_ClearUpdatedSoPatch_Params
{
};


struct UScriptHelperClient_ClearUnknownRT_Params
{
};


struct UScriptHelperClient_ClearSyncLoadCacheSystem_Params
{
};


struct UScriptHelperClient_ClearSluaClassCache_Params
{
};


struct UScriptHelperClient_ClearSlateTouchDebugLogQueue_Params
{
};


struct UScriptHelperClient_ClearSlateCache_Params
{
};


struct UScriptHelperClient_ClearNotifications_Params
{
};


struct UScriptHelperClient_ClearNotice_Params
{
};


struct UScriptHelperClient_ClearJankStats_Params
{
};


struct UScriptHelperClient_ClearIGProxyData_Params
{
};


struct UScriptHelperClient_ClearHasLoadGameSlotCrashFlag_Params
{
};


struct UScriptHelperClient_ClearH5WebViewCookie_Params
{
	struct FString                                     Domain;                                                   
};


struct UScriptHelperClient_ClearDeviceMotionBody_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_ClearChannelID_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
};


struct UScriptHelperClient_ClearAllLocalNotifications_Params
{
};


struct UScriptHelperClient_ClearAllAudioBanks_Params
{
};


struct UScriptHelperClient_CheckRegisterGestureConflictWithZoom_Params
{
};


struct UScriptHelperClient_CheckMetalLibraryUncompressed_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_CheckMemorySymbolSource_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_CheckLocalPakContentHash_Params
{
	struct FString                                     Filename;                                                 
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_CheckLocalizationExist_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_CheckFilesInPakWithResult_Params
{
	TArray<struct FString>                             Files;                                                    
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_CheckFilesInPakLite_Params
{
	TArray<struct FString>                             Files;                                                    
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_CheckFilesInPak_Params
{
	TArray<struct FString>                             Files;                                                    
	TArray<struct FString>                             ReturnValue;                                              
};


struct UScriptHelperClient_CheckCanUseUrl_Params
{
	struct FString                                     URL;                                                      
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_CheckBeforeInitPuffer_Params
{
};


struct UScriptHelperClient_ChangeLocalizationReleaseTestStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               status;                                                   
};


struct UScriptHelperClient_CanUseHapticsEngine_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_CanEnableLuaClassIndexCache_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_CancelLocalNotification_Params
{
	int                                                NotificationID;                                           
};


struct UScriptHelperClient_CallIngameFirstTimeTips_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	struct FString                                     tableName;                                                
	struct FString                                     FunctionName;                                             
};


struct UScriptHelperClient_CallEngineGC_Params
{
};


struct UScriptHelperClient_CacheH5WebView_Params
{
	struct FString                                     ModuleName;                                               
};


struct UScriptHelperClient_BqBqShareToFriend_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	int                                                act;                                                      
	struct FString                                     OpenID;                                                   
	struct FString                                     Title;                                                    
	struct FString                                     Desc;                                                     
	struct FString                                     targetUrl;                                                
	struct FString                                     imgUrl;                                                   
	struct FString                                     previewText;                                              
	struct FString                                     gameTag;                                                  
	struct FString                                     msdkExtInfo;                                              
};


struct UScriptHelperClient_BqBqShare_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     _descShare;                                               
	struct FString                                     _titleShare;                                              
	struct FString                                     _imgPath;                                                 
	struct FString                                     _imgUrl;                                                  
	struct FString                                     _url;                                                     
	int                                                _shareScene;                                              
};


struct UScriptHelperClient_BqBqAddFriend_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FString                                     OpenID;                                                   
	struct FString                                     Desc;                                                     
	struct FString                                     Message;                                                  
};


struct UScriptHelperClient_BindMotionDetectedDelegate_Params
{
	class ASTExtraPlayerController*                    PlayerController;                                         
	class UScreenInput*                                InScreenInput;                                            
};


struct UScriptHelperClient_AssembleODPaksFromDiffCache_Params
{
	TArray<struct FString>                             PakNames;                                                 
	struct FString                                     OutputDir;                                                
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_AssembleAllODPaksFromDiffAsync_New_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_AssembleAllODPaksFromDiffAsync_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_AskForNotificationPermission_Params
{
};


struct UScriptHelperClient_AppendForcedKeepODPaks_Params
{
	TArray<struct FString>                             Filenames;                                                
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_AndroidShouldShowPermissionRationale_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_AndroidCheckPermission_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_AllocVirMem_Params
{
	int64_t                                            XMiB;                                                     
};


struct UScriptHelperClient_AkAudio_UnloadInitBank_Params
{
};


struct UScriptHelperClient_AkAudio_UnloadAllFilePackages_Params
{
};


struct UScriptHelperClient_AkAudio_StopAllSounds_Params
{
	bool                                               bShouldStopUISounds;                                      
};


struct UScriptHelperClient_AkAudio_LoadInitBank_Params
{
};


struct UScriptHelperClient_AkAudio_Flush_Params
{
	class UWorld*                                      WorldToFlush;                                             
};


struct UScriptHelperClient_AkAudio_ClearBanks_Params
{
};


struct UScriptHelperClient_AddStreamingLevel_Params
{
	class UWorld*                                      World;                                                    
	struct FString                                     SubLevel;                                                 
	bool                                               bShouldBeLoaded;                                          
	bool                                               bShouldBeVisible;                                         
	bool                                               bShouldBlockOnLoad;                                       
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_AddOnScreenDebugMessage_Params
{
	struct FString                                     Message;                                                  
	int                                                Key;                                                      
	float                                              TimeToDisplay;                                            
	struct FColor                                      Color;                                                    
	struct FVector2D                                   TextScale;                                                
};


struct UScriptHelperClient_AddMemoryLogSize_Params
{
	int                                                b_size;                                                   
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_AddKnownMissingPackage_Params
{
	struct FString                                     PackageName;                                              
	class UObject*                                     BindObj;                                                  
	bool                                               bReplace;                                                 
};


struct UScriptHelperClient_AddCrashContextType_Params
{
	int                                                Type;                                                     
	struct FString                                     KeyString;                                                
};


struct UScriptHelperClient_AddCrashContextData_Params
{
	int                                                Key;                                                      
	struct FString                                     Val;                                                      
	bool                                               bAppendTimeStamp;                                         
	int                                                reportLevel;                                              
};


struct UScriptHelperClient_AddAttachFileString_Params
{
	struct FString                                     Type;                                                     
	bool                                               bClear;                                                   
	struct FString                                     strinfo;                                                  
};


struct UScriptHelperClient_AddAttachDataString_Params
{
	struct FString                                     Type;                                                     
	bool                                               bClear;                                                   
	struct FString                                     strinfo;                                                  
};


struct UScriptHelperClient_ActivateCameraByName_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperClient_ActivateCameraByName_Params
{
	struct FString                                     CameraName;                                               
	bool                                               ReturnValue;                                              
};


struct UScriptHelperClient_AcquireWifiLock_Params
{
};


struct UScriptHelperEngine_TestLz4Decompress_Params
{
	TArray<unsigned char>                              Source;                                                   
	bool                                               bEnable;                                                  
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UScriptHelperEngine_TestLz4Compress_Params
{
	TArray<unsigned char>                              Source;                                                   
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UScriptHelperEngine_StopTGPA_Params
{
};


struct UScriptHelperEngine_StartTGPA_Params
{
};


struct UScriptHelperEngine_ReplaceEmoji_Params
{
	struct FString                                     Content;                                                  
	int                                                MaxEmojiNum;                                              
	struct FString                                     SpecialCharacter;                                         
	struct FString                                     ReturnValue;                                              
};


struct UScriptHelperEngine_PrepareTGPA_Params
{
};


struct UScriptHelperEngine_IsSupportTGPA_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperEngine_IsSupportADPF_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperEngine_IsLowMemoryDevice_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperEngine_Is64BitVersion_Params
{
	bool                                               ReturnValue;                                              
};


struct UScriptHelperEngine_GetThermalStatus_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperEngine_GetThermal15sAfter_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperEngine_GetMemoryUsedVirtualInKB_Params
{
	float                                              ReturnValue;                                              
};


struct UScriptHelperEngine_GetMemoryUsedPhysicalInKB_Params
{
	float                                              ReturnValue;                                              
};


struct USDKCallbackHelper_Init_Params
{
};


struct USDKCallbackHelper_GetInstance_Params
{
	class USDKCallbackHelper*                          ReturnValue;                                              
};


struct USettingSubsystem_UnregisterUserSettingDelegate_Params
{
	int                                                Handle;                                                   
};


struct USettingSubsystem_SetUserSettings_String_Params
{
	struct FString                                     PropertyName;                                             
	struct FString                                     Val;                                                      
	bool                                               ReturnValue;                                              
};


struct USettingSubsystem_SetUserSettings_Int_Params
{
	struct FString                                     PropertyName;                                             
	int                                                Value;                                                    
	bool                                               ReturnValue;                                              
};


struct USettingSubsystem_SetUserSettings_Float_Params
{
	struct FString                                     PropertyName;                                             
	float                                              Value;                                                    
	bool                                               ReturnValue;                                              
};


struct USettingSubsystem_SetUserSettings_Bool_Params
{
	struct FString                                     PropertyName;                                             
	bool                                               Value;                                                    
	bool                                               IngoreSave;                                               
	bool                                               ReturnValue;                                              
};


struct USettingSubsystem_RegisterUserSettingsDelegate_Int_Params
{
	struct FString                                     PropertyName;                                             
	struct FScriptDelegate                             Delegate;                                                 
	int                                                ReturnValue;                                              
};


struct USettingSubsystem_RegisterUserSettingsDelegate_Float_Params
{
	struct FString                                     PropertyName;                                             
	struct FScriptDelegate                             Delegate;                                                 
	int                                                ReturnValue;                                              
};


struct USettingSubsystem_RegisterUserSettingsDelegate_Bool_Params
{
	struct FString                                     PropertyName;                                             
	struct FScriptDelegate                             Delegate;                                                 
	int                                                ReturnValue;                                              
};


struct USettingSubsystem_RegisterUserSettingsDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 
};


struct USettingSubsystem_RefreshSettingDataForReport_Params
{
};


struct USettingSubsystem_OnReportSettingConfigStart_Params
{
};


struct USettingSubsystem_OnRefreshReportSettingConfig_Params
{
};


struct USettingSubsystem_GetUserSettingsByDelegate_Params
{
	struct FString                                     LayoutName;                                               
	class USaveGame*                                   ReturnValue;                                              
};


struct USettingSubsystem_GetUserSettings_String_Params
{
	struct FString                                     PropertyName;                                             
	struct FString                                     ReturnValue;                                              
};


struct USettingSubsystem_GetUserSettings_Int_Params
{
	struct FString                                     PropertyName;                                             
	int                                                ReturnValue;                                              
};


struct USettingSubsystem_GetUserSettings_Float_Params
{
	struct FString                                     PropertyName;                                             
	float                                              ReturnValue;                                              
};


struct USettingSubsystem_GetUserSettings_Bool_Params
{
	struct FString                                     PropertyName;                                             
	bool                                               ReturnValue;                                              
};


struct USettingSubsystem_GetUserSettings_Params
{
	class USaveGame*                                   ReturnValue;                                              
};


struct USettingSubsystem_GetUserLanguageSettingsProperty_String_Params
{
	struct FString                                     PropertyName;                                             
	struct FString                                     ReturnValue;                                              
};


struct USettingSubsystem_GetEffectSettingMgr_Params
{
	class UEffectSettingMgr*                           ReturnValue;                                              
};


struct USettingSubsystem_FinishModifyUserSettings_Params
{
};


struct USettingSubsystem_ClearSettingDataForReport_Params
{
};


struct USettingSubsystem_CheckLocalizationLanguage_Params
{
};


struct USettingSubsystem_CheckChangeWithCache_Params
{
	class UObject*                                     Source;                                                   
	class UProperty*                                   Property;                                                 
	struct FString                                     PropertyName;                                             
	bool                                               ReturnValue;                                              
};


struct USettingSubsystem_CacheRegisterValue_Params
{
	class UObject*                                     Source;                                                   
	class UProperty*                                   Property;                                                 
	struct FString                                     PropertyName;                                             
};


struct USettingSubsystem_BeginModifyUserSettings_Params
{
};


struct USoundTools_StopConversionByUser_Params
{
	int                                                Index;                                                    
};


struct USoundTools_SaveWavInIOS_Params
{
	struct FString                                     GameFilePath;                                             
};


struct USoundTools_SaveToAndroidPath_Params
{
	struct FString                                     GameFilePath;                                             
};


struct USoundTools_GetSizeOfWwiseAudioToWav_Params
{
	struct FString                                     EventName;                                                
	struct FString                                     BankName;                                                 
	struct FString                                     outFilePath;                                              
	int                                                ReturnValue;                                              
};


struct USoundTools_GetConversionPercent_Params
{
	int                                                Index;                                                    
	float                                              ReturnValue;                                              
};


struct USoundTools_ConvertWwiseAudioToWavSync_Params
{
	struct FString                                     EventName;                                                
	struct FString                                     BankName;                                                 
	struct FString                                     outFilePath;                                              
	int                                                ReturnValue;                                              
};


struct USoundTools_ConvertWwiseAudioToWav_Params
{
	struct FString                                     EventName;                                                
	struct FString                                     BankName;                                                 
	struct FString                                     outFilePath;                                              
	int                                                ReturnValue;                                              
};


struct USoundTools_CanWwiseAudioToWav_Params
{
	bool                                               ReturnValue;                                              
};


struct USTExtraClientUtils_IsVolumetricLightmapRegistered_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FName                                       LevelPackageName;                                         
	int                                                ReturnValue;                                              
};


struct USTExtraClientUtils_GetWidgetHandleAsyncWithCallBack_Params
{
	class UObject*                                     WorldContext;                                             
	struct FString                                     ModuleName;                                               
	struct FString                                     WidgetKey;                                                
	struct FScriptDelegate                             Callback;                                                 
};


struct USTExtraClientUtils_GetDynamicWidgetHandle_Params
{
	class UObject*                                     WorldContext;                                             
	struct FString                                     ModuleName;                                               
	struct FString                                     WidetKey;                                                 
	class UUAEUserWidget*                              ReturnValue;                                              
};


struct USTExtraClientUtils_GetBPUtils_Params
{
	class USTExtraClientUIBPUtils*                     ReturnValue;                                              
};


struct USTExtraClientUtils_EnsureVolumetricLightmapRegistered_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FName                                       LevelPackageName;                                         
};


struct USTExtraClientUtils_AsyncLoadAssetInstWithCallback_Params
{
	struct FString                                     InPath;                                                   
	struct FScriptDelegate                             Callback;                                                 
	int                                                ReturnValue;                                              
};


struct USTExtraClientUIBPUtils_OnAsyncAssetLoaded_Params
{
	struct FSoftObjectPath                             InSoftPath;                                               
	int                                                RequestIdx;                                               
};


struct USTExtraClientUIBPUtils_AsyncLoadAssetInstWithCallback_Params
{
	struct FString                                     InPath;                                                   
	struct FScriptDelegate                             Callback;                                                 
	int                                                ReturnValue;                                              
};


struct UTPerfPlat_SetQuality_Params
{
	int                                                Quality;                                                  
};


struct UTPerfPlat_requestResourceGuarantee_Params
{
	int                                                Condition;                                                
	int                                                LoadType;                                                 
	int                                                applyType;                                                
};


struct UTPerfPlat_PostGameStatusToTMFPIS_Params
{
	int                                                Key;                                                      
	struct FString                                     Value;                                                    
};


struct UTPerfPlat_GetDeviceLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UTranslator_TranslateV2_Params
{
	int                                                Channel;                                                  
	int                                                ID;                                                       
	struct FString                                     Text;                                                     
};


struct UTranslator_Translate_Params
{
	struct FString                                     URL;                                                      
	struct FString                                     Verb;                                                     
	TMap<struct FString, struct FString>               Headers;                                                  
	struct FString                                     Content;                                                  
};


struct UTranslator_PostMsg_Params
{
	struct FString                                     URL;                                                      
	struct FString                                     Content;                                                  
};


struct UTranslator_OnTranslateV2_Params
{
	bool                                               Success;                                                  
	struct FString                                     Data;                                                     
};


struct UTranslator_OnTranslate__DelegateSignature_Params
{
	bool                                               IsSuccess;                                                
	struct FString                                     LanguageFrom;                                             
	struct FString                                     Translation;                                              
};


struct UTranslator_OnTranslate_Params
{
	bool                                               Success;                                                  
	struct FString                                     Data;                                                     
};


struct UTranslator_OnGetAccessTokenV2_Params
{
	bool                                               Success;                                                  
	struct FString                                     Data;                                                     
};


struct UTranslator_OnGetAccessToken__DelegateSignature_Params
{
	bool                                               IsSuccess;                                                
	struct FString                                     Token;                                                    
};


struct UTranslator_OnGetAccessToken_Params
{
	bool                                               Success;                                                  
	struct FString                                     Data;                                                     
};


struct UTranslator_OnDetectV2_Params
{
	bool                                               Success;                                                  
	struct FString                                     Data;                                                     
};


struct UTranslator_OnDetect__DelegateSignature_Params
{
	bool                                               IsSuccess;                                                
	struct FString                                     From;                                                     
	struct FString                                     To;                                                       
};


struct UTranslator_OnDetect_Params
{
	bool                                               Success;                                                  
	struct FString                                     Data;                                                     
};


struct UTranslator_HasTranslating_Params
{
	bool                                               ReturnValue;                                              
};


struct UTranslator_GetAccessToken_Params
{
	bool                                               bForceGet;                                                
	struct FString                                     URL;                                                      
	struct FString                                     Verb;                                                     
	TMap<struct FString, struct FString>               Headers;                                                  
	struct FString                                     Content;                                                  
};


struct UTranslator_Detect_Params
{
	struct FString                                     URL;                                                      
	struct FString                                     Verb;                                                     
	TMap<struct FString, struct FString>               Headers;                                                  
	struct FString                                     Content;                                                  
};


struct UTssManager_SendSkdData_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UTssManager_SendEigeninfoData_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UTssManager_SaveSendEigeninfoCode_LuaState_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct UTssManager_OnRecvData_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UTssManager_InvokeSDKIoctl_Params
{
	int                                                Command;                                                  
	struct FString                                     InCmdData;                                                
	uint32_t                                           ReturnValue;                                              
};


struct UTssManager_GetUserTag4Lua_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UTssManager_GetDeviceFeature_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UTssManager_EigenArrayObfuscationVerify_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UUTRichTextBlock_SetWrapTextAt_Params
{
	float                                              Val;                                                      
};


struct UUTRichTextBlock_SetTextJustification_Params
{
	TEnumAsByte<ETextJustify>                          InJustification;                                          
};


struct UUTRichTextBlock_SetText_Params
{
	struct FText                                       InText;                                                   
};


struct UUTRichTextBlock_SetIgnoreOutlineForPerformance_Params
{
	bool                                               bIgnore;                                                  
};


struct UUTRichTextBlock_SetGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            InHUD;                                                    
};


struct UUTRichTextBlock_SetFont_Params
{
	struct FSlateFontInfo                              InFontInfo;                                               
};


struct UUTRichTextBlock_SetColorAndOpacity_Params
{
	struct FSlateColor                                 InColorAndOpacity;                                        
};


struct UUTRichTextBlock_SetActiveColorIndex_Params
{
	int                                                InIndex;                                                  
};


struct UUTRichTextBlock_OnHyperlinkClickedEvent__DelegateSignature_Params
{
	struct FMetaDataHolder                             MetaDataHolder;                                           
};


struct UUTRichTextBlock_GetViewSizes_Params
{
	TArray<struct FVector2D>                           ReturnValue;                                              
};


struct UUTRichTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UUTRichTextBlock_EstimateDesiredSize_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UAEVarButton_SetTouchMethod_Params
{
	TEnumAsByte<EButtonTouchMethod>                    InTouchMethod;                                            
};


struct UAEVarButton_SetStyle_Params
{
	struct FButtonStyle                                InStyle;                                                  
};


struct UAEVarButton_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        
};


struct UAEVarButton_SetClickMethod_Params
{
	TEnumAsByte<EButtonClickMethod>                    InClickMethod;                                            
};


struct UAEVarButton_SetBackgroundColor_Params
{
	struct FLinearColor                                InBackgroundColor;                                        
};


struct UAEVarButton_IsPressed_Params
{
	bool                                               ReturnValue;                                              
};


struct UAutoSizeFallC_SwitchChildToIndex_Params
{
	class UWidget*                                     Content;                                                  
	int                                                Index;                                                    
};


struct UAutoSizeFallC_SetScrollOffset_Params
{
	float                                              NewScrollOffset;                                          
};


struct UAutoSizeFallC_SetItemPadding_Params
{
	float                                              InPaddingX;                                               
	float                                              InPaddingY;                                               
};


struct UAutoSizeFallC_SetColumnNum_Params
{
	int                                                InColumnNum;                                              
};


struct UAutoSizeFallC_ScrollToStart_Params
{
};


struct UAutoSizeFallC_ScrollToEnd_Params
{
};


struct UAutoSizeFallC_RemoveItem_Params
{
	class UWidget*                                     Item;                                                     
	bool                                               ReturnValue;                                              
};


struct UAutoSizeFallC_RefreshLayout_Params
{
};


struct UAutoSizeFallC_NotifyItemSizeChanged_Params
{
	class UWidget*                                     Item;                                                     
	bool                                               ReturnValue;                                              
};


struct UAutoSizeFallC_InsertItem_Params
{
	class UWidget*                                     Item;                                                     
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UAutoSizeFallC_GetScrollOffset_Params
{
	float                                              ReturnValue;                                              
};


struct UAutoSizeFallC_GetScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                              
};


struct UAutoSizeFallC_GetItemCount_Params
{
	int                                                ReturnValue;                                              
};


struct UAutoSizeFallC_GetItemAt_Params
{
	int                                                Index;                                                    
	class UWidget*                                     ReturnValue;                                              
};


struct UAutoSizeFallC_GetContentSize_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UAutoSizeFallC_ClearItems_Params
{
};


struct UAutoSizeFallC_AddItem_Params
{
	class UWidget*                                     Item;                                                     
	int                                                ReturnValue;                                              
};


struct UReuseFallC_SoftReload_Params
{
	int                                                __ItemCount;                                              
};


struct UReuseFallC_SetTopMargin_Params
{
	float                                              Val;                                                      
};


struct UReuseFallC_SetScrollOffset_Params
{
	float                                              NewScrollOffset;                                          
};


struct UReuseFallC_SetItemSize_Params
{
	int                                                __Idx;                                                    
	float                                              __Size;                                                   
};


struct UReuseFallC_SetItemFullStyle_Params
{
	int                                                idx;                                                      
};


struct UReuseFallC_SetCurItemClass_Params
{
	struct FString                                     StrName;                                                  
	bool                                               ReturnValue;                                              
};


struct UReuseFallC_SetBottomMargin_Params
{
	float                                              Val;                                                      
};


struct UReuseFallC_ScrollToStart_Params
{
};


struct UReuseFallC_ScrollToEnd_Params
{
};


struct UReuseFallC_ResetCurItemClassToDefault_Params
{
};


struct UReuseFallC_Reload_Params
{
	int                                                __ItemCount;                                              
};


struct UReuseFallC_RefreshOne_Params
{
	int                                                __Idx;                                                    
};


struct UReuseFallC_Refresh_Params
{
};


struct UReuseFallC_OnUpdateItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   
	int                                                idx;                                                      
};


struct UReuseFallC_OnTouchFinishDelegate__DelegateSignature_Params
{
};


struct UReuseFallC_OnTouchFinishCallback_Params
{
};


struct UReuseFallC_OnOverscrollStateDelegate__DelegateSignature_Params
{
	EReuseFallOverscrollState                          State;                                                    
};


struct UReuseFallC_OnHideItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   
	int                                                idx;                                                      
};


struct UReuseFallC_OnCreateItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   
	int                                                idx;                                                      
};


struct UReuseFallC_OnBeforeNewItemDelegate__DelegateSignature_Params
{
	int                                                idx;                                                      
};


struct UReuseFallC_OnAfterNewItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   
	int                                                idx;                                                      
};


struct UReuseFallC_JumpByIdx_Params
{
	int                                                __Idx;                                                    
	bool                                               bImmedia;                                                 
};


struct UReuseFallC_GetViewSize_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UReuseFallC_GetScrollOffset_Params
{
	float                                              ReturnValue;                                              
};


struct UReuseFallC_GetScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                              
};


struct UReuseFallC_GetOverscrollState_Params
{
	EReuseFallOverscrollState                          ReturnValue;                                              
};


struct UReuseFallC_GetContentSize_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UReuseFallC_ClearItemSizeAll_Params
{
};


struct UReuseFallC_ClearItemSize_Params
{
	int                                                idx;                                                      
};


struct UReuseFallC_ClearItemFullStyle_Params
{
};


struct UReuseFallC_Clear_Params
{
};


struct UReuseListC_SetTitleSlotAutoSize_Params
{
	bool                                               as;                                                       
};


struct UReuseListC_SetTitleSize_Params
{
	int                                                sz;                                                       
};


struct UReuseListC_SetScrollOffset_Params
{
	float                                              NewScrollOffset;                                          
};


struct UReuseListC_ScrollToStart_Params
{
};


struct UReuseListC_ScrollToEnd_Params
{
};


struct UReuseListC_Reset_Params
{
	class UClass*                                      __ItemClass;                                              
	EReuseListStyle                                    __Style;                                                  
	int                                                __ItemWidth;                                              
	int                                                __ItemHeight;                                             
	int                                                __PaddingX;                                               
	int                                                __PaddingY;                                               
};


struct UReuseListC_Reload_Params
{
	int                                                __ItemCount;                                              
};


struct UReuseListC_RefreshParam_Params
{
	struct FString                                     _Param;                                                   
};


struct UReuseListC_RefreshOneParam_Params
{
	int                                                __Idx;                                                    
	struct FString                                     _Param;                                                   
};


struct UReuseListC_RefreshOne_Params
{
	int                                                __Idx;                                                    
};


struct UReuseListC_Refresh_Params
{
};


struct UReuseListC_OnUpdateItemParamDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   
	int                                                idx;                                                      
	struct FString                                     Param;                                                    
};


struct UReuseListC_OnUpdateItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   
	int                                                idx;                                                      
};


struct UReuseListC_OnScrollItemDelegate__DelegateSignature_Params
{
	int                                                BeginIdx;                                                 
	int                                                EndIdx;                                                   
};


struct UReuseListC_OnCreateItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   
};


struct UReuseListC_JumpByIdxStyle_Params
{
	int                                                __Idx;                                                    
	EReuseListJumpStyle                                __Style;                                                  
};


struct UReuseListC_JumpByIdx_Params
{
	int                                                __Idx;                                                    
};


struct UReuseListC_GetViewSize_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UReuseListC_GetScrollOffset_Params
{
	float                                              ReturnValue;                                              
};


struct UReuseListC_GetPaddingY_Params
{
	int                                                ReturnValue;                                              
};


struct UReuseListC_GetPaddingX_Params
{
	int                                                ReturnValue;                                              
};


struct UReuseListC_GetItemWidthAndPaddingX_Params
{
	int                                                ReturnValue;                                              
};


struct UReuseListC_GetItemWidth_Params
{
	int                                                ReturnValue;                                              
};


struct UReuseListC_GetItemHeightAndPaddingY_Params
{
	int                                                ReturnValue;                                              
};


struct UReuseListC_GetItemHeight_Params
{
	int                                                ReturnValue;                                              
};


struct UReuseListC_GetContentSize_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UReuseListC_GetAllWidgetItems_Params
{
	TArray<class UUserWidget*>                         ResultItemList;                                           
};


struct UReuseListC_FindItem_Params
{
	int                                                idx;                                                      
	class UUserWidget*                                 ReturnValue;                                              
};


struct UReuseListC_Clear_Params
{
};


struct UReusePageC_SetAutoPlayRate_Params
{
	float                                              Rate;                                                     
};


struct UReusePageC_SelectPage_Params
{
	int                                                __Idx;                                                    
};


struct UReusePageC_Reload_Params
{
	int                                                __Count;                                                  
};


struct UReusePageC_Play_Params
{
	bool                                               bPlay;                                                    
};


struct UReusePageC_OnUpdateItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   
	int                                                idx;                                                      
};


struct UReusePageC_OnPageChangedDelegate__DelegateSignature_Params
{
	int                                                PageIdx;                                                  
};


struct UReusePageC_OnEndScrollDelegate__DelegateSignature_Params
{
	int                                                PageIdx;                                                  
};


struct UReusePageC_OnEndDragDelegate__DelegateSignature_Params
{
	int                                                PageIdx;                                                  
};


struct UReusePageC_OnCreateItemDelegate__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   
};


struct UReusePageC_OnBeginDragDelegate__DelegateSignature_Params
{
};


struct UReusePageC_MovePrePage_Params
{
};


struct UReusePageC_MoveNextPage_Params
{
};


struct UReusePageC_IsDraging_Params
{
	bool                                               ReturnValue;                                              
};


struct UReusePageC_GetPageCount_Params
{
	int                                                ReturnValue;                                              
};


struct UReusePageC_GetPage_Params
{
	int                                                ReturnValue;                                              
};


struct UReusePageC_GetOffset_Params
{
	float                                              ReturnValue;                                              
};


struct UReusePageC_GetAutoPlayRate_Params
{
	float                                              ReturnValue;                                              
};


struct UReusePageC_GetAllItems_Params
{
	TArray<class UUserWidget*>                         ResultItemList;                                           
	bool                                               OnlyVisible;                                              
};


struct UReusePageC_ClearCache_Params
{
};


struct UUDPPingCollector_TickUDPPing_Params
{
	float                                              DeltaTime;                                                
};


struct UUDPPingCollector_setUDPPingServerAddress_Params
{
	struct FString                                     ServerIP;                                                 
	struct FString                                     ServerPort;                                               
	int                                                ZoneID;                                                   
	int                                                WaterMarkType;                                            
};


struct UUDPPingCollector_SetPingSystemControlFlag_Params
{
	int                                                TakeEffectModule;                                         
	int                                                ThreadReportTlog;                                         
	int                                                EpollReportTlog;                                          
};


struct UUDPPingCollector_PingServer_Params
{
	struct FString                                     address;                                                  
	float                                              Timeout;                                                  
	int                                                WaterMarkType;                                            
};


struct UUDPPingCollector_OnPostSwitchGameStatus_Params
{
	struct FString                                     MapName;                                                  
};


struct UUDPPingCollector_OnPingServerResultDelegate__DelegateSignature_Params
{
	struct FString                                     address;                                                  
	int                                                IsSuccess;                                                
	float                                              Time;                                                     
	int                                                PingSystemType;                                           
};


struct UUDPPingCollector_IsChooingZoneAccess_Params
{
	bool                                               ReturnValue;                                              
};


struct UUDPPingCollector_isAllZoneHasPingValue_Params
{
	bool                                               ReturnValue;                                              
};


struct UUDPPingCollector_Init_Params
{
	float                                              MinPingintervalTime;                                      
	float                                              pingintervalTime;                                         
	float                                              pingTimeoutSecond;                                        
	float                                              normalDelayMilliSecond;                                   
	float                                              maxAutoChooseZoneDelayMilliSecond;                        
};


struct UUDPPingCollector_GetZoneServerDelay_Params
{
	struct FString                                     ServerAddress;                                            
	float                                              ReturnValue;                                              
};


struct UUDPPingCollector_GetMinDealyAddress_Params
{
	int                                                ReturnValue;                                              
};


struct UUDPPingCollector_ChoosingZone_Params
{
	int                                                ZoneID;                                                   
	struct FString                                     AddrIP;                                                   
};


struct UVibrateSystemManager_StopVibrate_Params
{
};


struct UVibrateSystemManager_SetVibrationLoopTime_Params
{
	struct FString                                     InLoopTime;                                               
};


struct UVibrateSystemManager_PostVibrateTriggerActionDirectly_Params
{
	int                                                SpesifyID;                                                
	int                                                Amplitude;                                                
};


struct UVibrateSystemManager_PostVibrateTriggerAction_Params
{
	struct FVibrateTriggerAction                       Action;                                                   
	bool                                               bCheckGate;                                               
	bool                                               bCheckInterval;                                           
	int                                                SpesifyID;                                                
};


struct UVibrateSystemManager_PlayVibrateEntity_Params
{
	struct FVibrateEntity                              Entity;                                                   
};


struct UVibrateSystemManager_ModifyWeaponVibrationSwitch_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyWeaponVibrationLevel_Params
{
	int                                                InVal;                                                    
};


struct UVibrateSystemManager_ModifyVehicleVibrationSwitch_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyVehicleVibrationLevel_Params
{
	int                                                InVal;                                                    
};


struct UVibrateSystemManager_ModifyVehicleSoundUIVibrateSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyVehicleEngineVibrationSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyVehicleCrashVibrateSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyVehicleBeHitVibrateSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifySoundUIVibrationSwitch_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifySoundUIVibrationLevel_Params
{
	int                                                InVal;                                                    
};


struct UVibrateSystemManager_ModifySemiAutoWeaponVibrateSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyOtherWeaponVibrateSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyGlassBrokenSoundUIVibrateSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyFootstepSoundUIVibrateSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyFireShotSoundUIVibrateSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyEntireVibrationSwitch_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyEntireVibrationLevel_Params
{
	int                                                InValue;                                                  
};


struct UVibrateSystemManager_ModifyCharacterVibrationSwitch_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyCharacterVibrationLevel_Params
{
	int                                                InVal;                                                    
};


struct UVibrateSystemManager_ModifyCharacterSwimVibrateSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyCharacterFallVibrateSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyCharacterClimbVibrateSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyCharacterBeHitVibrateSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyBoltWeaponVibrateSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_ModifyAutoWeaponVibrateSetting_Params
{
	bool                                               Val;                                                      
};


struct UVibrateSystemManager_LoadUserSettingData_Params
{
	int                                                inCharacterVibrationLevel;                                
	int                                                inWeaponVibrationLevel;                                   
	int                                                inVehicleVibrationLevel;                                  
	int                                                inSoundUIVibrationLevel;                                  
	bool                                               binCharacterBeHitVibrate;                                 
	bool                                               binCharacterClimbVibrate;                                 
	bool                                               binCharacterFallVibrate;                                  
	bool                                               binCharacterSwimVibrate;                                  
	bool                                               binVehicleEngineVibrate;                                  
	bool                                               binVehicleBeHitVibrate;                                   
	bool                                               binVehicleCrashVibrate;                                   
	bool                                               binFootstepSoundUIVibrate;                                
	bool                                               binFireShotSoundUIVibrate;                                
	bool                                               binGlassBrokenSoundUIVibrate;                             
	bool                                               binVehicleSoundUIVibrate;                                 
	int                                                inEntireVibrationLevel;                                   
	bool                                               binAutoWeaponVibrate;                                     
	bool                                               binSemiAutoWeaponVibrate;                                 
	bool                                               binBoltWeaponVibrate;                                     
	bool                                               binOtherWeaponVibrate;                                    
};


struct UVibrateSystemManager_InvalidateVibrateEntityByEventType_Params
{
	EVibrateTriggerEventType                           EventType;                                                
};


struct UVibrateSystemManager_InitUserSetting_Params
{
};


struct UVibrateSystemManager_InitSystem_Params
{
};


struct UVibrateSystemManager_HandleApplicationWillTerminate_Params
{
};


struct UVibrateSystemManager_HandleApplicationWillEnterBackground_Params
{
};


struct UVibrateSystemManager_HandleApplicationWillDeactivate_Params
{
};


struct UVibrateSystemManager_HandleApplicationHasReactivated_Params
{
};


struct UVibrateSystemManager_HandleApplicationHasEnteredForeground_Params
{
};


struct UVibrateSystemManager_GetInstance_Params
{
	class UObject*                                     WorldContext;                                             
	bool                                               bAutoCreate;                                              
	class UVibrateSystemManager*                       ReturnValue;                                              
};


struct UVibrateSystemManager_GetEntireVibrationLevel_Params
{
	int                                                ReturnValue;                                              
};


struct UVibrateSystemManager_GetCurrentPlayingVibrationDebugInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UVibrateSystemManager_GetAmplitudeByAlpha_Params
{
	float                                              Alpha;                                                    
	int                                                ReturnValue;                                              
};


struct UVibrateSystemManager_ClearVibratePath2Json_Params
{
};


struct UVibrateSystemManager_ClearAllVibration_Params
{
};


struct UVibrateSystemManager_CheckShootWeaponTypeVibrateGate_Params
{
	class ASTExtraWeapon*                              Weapon;                                                   
	bool                                               ReturnValue;                                              
};


struct UVibrateSystemManager_CheckAndCopyFilesToSavedDir_Params
{
	class UVibrateSystemManager*                       Mgr;                                                      
};


struct UVibrateSystemManager_ActiveInGameVibration_Params
{
	bool                                               Inactive;                                                 
};


struct UVoiceSDKInterface_UploadRecordFile_Params
{
	bool                                               InPermanent;                                              
};


struct UVoiceSDKInterface_UploadRecordedFile_Params
{
	struct FString                                     InFilePath;                                               
	int                                                InTimeout;                                                
	bool                                               InPermanent;                                              
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_UpdateVoiceCoordinate_Params
{
	struct FString                                     InRoomName;                                               
	int64_t                                            X;                                                        
	int64_t                                            Y;                                                        
	int64_t                                            Z;                                                        
	int64_t                                            Radius;                                                   
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_TestMic_Params
{
};


struct UVoiceSDKInterface_TeamSpeakerEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_TeamMicphoneEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_SwitchMode_Params
{
	ECharacterMainType                                 CharMode;                                                 
};


struct UVoiceSDKInterface_SwitchMicphoneWhenCorpsMode_Params
{
};


struct UVoiceSDKInterface_StopRecording_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_StopRecord_Params
{
};


struct UVoiceSDKInterface_StopPlayRecordFile_Params
{
};


struct UVoiceSDKInterface_StopInterphone_Params
{
};


struct UVoiceSDKInterface_StartRecording_Params
{
	struct FString                                     InFilePath;                                               
	bool                                               InNotVoip;                                                
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_StartRecord_Params
{
};


struct UVoiceSDKInterface_StartInterphone_Params
{
};


struct UVoiceSDKInterface_SpeechTranslate_Params
{
	struct FString                                     InFileID;                                                 
	int                                                InSrcLang;                                                
	int                                                InTargetLang;                                             
	int                                                InTransType;                                              
	int                                                InTimeoutMS;                                              
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_SpeechStreamTranslateStart_Params
{
	struct FString                                     InFileID;                                                 
	struct FString                                     InOutFilePath;                                            
	int                                                InSrcLang;                                                
	int                                                InTargetLang;                                             
	struct FString                                     InVoiceType;                                              
	int                                                InVolume;                                                 
	int                                                InTimeoutMS;                                              
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_SpeechFileTranslate_Params
{
	struct FString                                     InFilePath;                                               
	int                                                InSrcLang;                                                
	int                                                InTargetLang;                                             
	int                                                InVoiceType;                                              
	float                                              InVoiceRate;                                              
	float                                              InVolume;                                                 
	int                                                InTimeoutMS;                                              
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_ShowOpenSpeakerAtFirstMsg_Params
{
};


struct UVoiceSDKInterface_ShowCorpsModeCannotUseLBSVoice_Params
{
};


struct UVoiceSDKInterface_SetVoiceServer_Params
{
	struct FString                                     ServerInfo;                                               
};


struct UVoiceSDKInterface_SetVoiceSDKSupportBackgroundChat_Params
{
	bool                                               isSupportBGChat;                                          
};


struct UVoiceSDKInterface_SetVoiceSDKChatServiceEnable_Params
{
	bool                                               IsEnable;                                                 
};


struct UVoiceSDKInterface_SetVoiceMode_Params
{
	int                                                Type;                                                     
};


struct UVoiceSDKInterface_SetUserInfo_Params
{
	struct FString                                     InUserInfo;                                               
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_SetTransSecInfo_Params
{
	struct FString                                     InTransSecInfo;                                           
};


struct UVoiceSDKInterface_SetSpeakerVolum_Params
{
	float                                              Value;                                                    
};


struct UVoiceSDKInterface_SetSpeakerStatus_Params
{
	bool                                               flag;                                                     
};


struct UVoiceSDKInterface_SetServerUrl_Params
{
	int                                                InUrlType;                                                
	struct FString                                     InURL;                                                    
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_SetServerInfo_Params
{
	struct FString                                     URL;                                                      
	struct FString                                     InDefaultIpSvr;                                           
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_SetRoomOperationTimeout_Params
{
	int                                                InTimeout;                                                
};


struct UVoiceSDKInterface_SetResourePath_Params
{
	struct FString                                     InResourcePath;                                           
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_SetReportBufferTime_Params
{
	int                                                nTimeSec;                                                 
};


struct UVoiceSDKInterface_SetRealtimeTransParams_Params
{
	struct FString                                     InRoomName;                                               
	struct FString                                     InVoiceType;                                              
	float                                              InVoiceRate;                                              
	float                                              InVolume;                                                 
	struct FString                                     InMagicVoiceTone;                                         
	bool                                               InAllowRemoteTranslate;                                   
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_SetPlayerVolume_Params
{
	struct FString                                     InPlayerId;                                               
	int                                                InVol;                                                    
};


struct UVoiceSDKInterface_SetNotify_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_SetMode_Params
{
	int                                                InGVMode;                                                 
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_SetMicphoneVolum_Params
{
	float                                              Value;                                                    
};


struct UVoiceSDKInterface_SetMicphoneStatus_Params
{
	bool                                               flag;                                                     
};


struct UVoiceSDKInterface_SetMagicVoiceMsgType_Params
{
	struct FString                                     InMagicType;                                              
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_SetLbsVoiceRadius_Params
{
	float                                              Radius;                                                   
};


struct UVoiceSDKInterface_SetLbsRoomEnableStatus_Params
{
	bool                                               flag;                                                     
};


struct UVoiceSDKInterface_SetKwsModelPath_Params
{
	struct FString                                     KwsPath;                                                  
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_SetGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            InHUD;                                                    
};


struct UVoiceSDKInterface_SetFeature_Params
{
	int8_t                                             InFeature;                                                
	bool                                               Inactive;                                                 
};


struct UVoiceSDKInterface_SetDeliverData_Params
{
	TArray<unsigned char>                              pbuf;                                                     
	int                                                Len;                                                      
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_SetAppInfo_Params
{
	struct FString                                     InAppId;                                                  
	struct FString                                     InAppKey;                                                 
	struct FString                                     InOpenid;                                                 
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_SetAllVoiceStatus_Params
{
	bool                                               flag;                                                     
};


struct UVoiceSDKInterface_RSTSStopRecording_Params
{
};


struct UVoiceSDKInterface_RSTSStartRecording_Params
{
	int                                                InSrcLang;                                                
	TArray<int>                                        InTargetLangs;                                            
	int                                                InTargetLangCnt;                                          
	int                                                InTransType;                                              
	int                                                InTimeoutMS;                                              
	struct FString                                     InRecordFilePath;                                         
	struct FString                                     InSrcLangStr;                                             
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_RSTSSpeechToText_Params
{
	int                                                InSrcLang;                                                
	struct FString                                     InExtraInfo;                                              
	struct FString                                     InRecordFilePath;                                         
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_ResetWhenLogOut_Params
{
};


struct UVoiceSDKInterface_ReportPlayers_Params
{
	struct FString                                     InExtraInfo;                                              
	TArray<struct FString>                             InOpenids;                                                
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_ReportFileForAbroad_Params
{
	struct FString                                     InFilePath;                                               
	bool                                               InTranslate;                                              
	bool                                               InChangeVoice;                                            
	int                                                InTime;                                                   
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_RemoveMemberFromRoom_Params
{
	struct FString                                     InRoomName;                                               
	int                                                InMemberId;                                               
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_RecoverPlayersVolume_Params
{
	int                                                InVol;                                                    
};


struct UVoiceSDKInterface_ReactiveLbsStatus_Params
{
};


struct UVoiceSDKInterface_QuitVoiceRoom_Params
{
	struct FString                                     InRoomName;                                               
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_QuitRoom_Params
{
};


struct UVoiceSDKInterface_QuitLbsRoom_Params
{
	bool                                               needReenterLbs;                                           
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_QuitCommonRoom_Params
{
	struct FString                                     InRoomName;                                               
};


struct UVoiceSDKInterface_Poll_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_PlayRecordFileV2_Params
{
	struct FString                                     InFileID;                                                 
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_PlayRecordedFile_Params
{
	struct FString                                     InDownloadInFilePath;                                     
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_OpenVoiceSpeaker_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_OpenVoiceMic_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_OpenTeamSpeakerOnly_Params
{
	bool                                               ShowTips;                                                 
};


struct UVoiceSDKInterface_OpenTeamMicphoneOnly_Params
{
	bool                                               ShowTips;                                                 
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_OpenTeamInterphone_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_OpenSpeaker_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_OpenMicAndSpeakerAfterJoinLbsRoom_Params
{
};


struct UVoiceSDKInterface_OpenMic_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_OpenLBSInterphone_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_OpenIngameSpeaker_Params
{
};


struct UVoiceSDKInterface_OpenIngameMicphone_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_OpenAllSpeaker_Params
{
	bool                                               ShowTips;                                                 
};


struct UVoiceSDKInterface_OpenAllMicphone_Params
{
	bool                                               ShowTips;                                                 
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_OpenAllInterphone_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_OnRoomTypeChanged_Params
{
	struct FString                                     itemtext;                                                 
};


struct UVoiceSDKInterface_OnResume_Params
{
};


struct UVoiceSDKInterface_OnPause_Params
{
};


struct UVoiceSDKInterface_OnDeliverData_Params
{
	TArray<unsigned char>                              pbuf;                                                     
	int                                                Len;                                                      
	struct FString                                     OpenID;                                                   
};


struct UVoiceSDKInterface_LbsSpeakerEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_LbsMicphoneEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_JoinTeamRoom_Params
{
	struct FString                                     InRoomName;                                               
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_JoinRoom_Params
{
	struct FString                                     Room;                                                     
	struct FString                                     UserId;                                                   
};


struct UVoiceSDKInterface_JoinRangeRoom_Params
{
	struct FString                                     InRoomName;                                               
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_JoinLbsRoom_Params
{
	struct FString                                     lbsRoom;                                                  
	struct FString                                     UserId;                                                   
};


struct UVoiceSDKInterface_JoinCommonRoom_Params
{
	struct FString                                     InRoomName;                                               
};


struct UVoiceSDKInterface_IsVoiceSDKEnable_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_IsVoiceRoomHasSpeakDataInLastSeconds_Params
{
	int                                                InRoomType;                                               
	int                                                InDeltaSeconds;                                           
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_IsTeamSpeakerWanted_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_IsTeamMicWanted_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_IsTeamInterphoneOpenned_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_IsSpeaking_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_IsLbsSpeakerWanted_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_IsLbsMicWanted_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_IsLbsInterphoneOpenned_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_IsInterphoneMode_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_IsEnableCivilFile_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_IsCommonRoomHasSpeakDataInLastSeconds_Params
{
	struct FString                                     InRoomName;                                               
	int                                                InDeltaSeconds;                                           
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_Invoke_Params
{
	uint32_t                                           InCmd;                                                    
	uint32_t                                           InParam1;                                                 
	uint32_t                                           InParam2;                                                 
	struct FString                                     InExterInfo;                                              
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_InstallSystemAudioEventListener_Params
{
	bool                                               InEnable;                                                 
};


struct UVoiceSDKInterface_InitVoiceSDKComponent_Params
{
	struct FString                                     UserId;                                                   
};


struct UVoiceSDKInterface_InitVoiceSDK_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_Init_Params
{
};


struct UVoiceSDKInterface_HaveTeamRoom_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_HaveLbsRoom_Params
{
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_GetVoiceLength_Params
{
	float                                              ReturnValue;                                              
};


struct UVoiceSDKInterface_GetTeamRoomName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UVoiceSDKInterface_GetRoomStatus_Params
{
	struct FString                                     InRoomName;                                               
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_GetRoomSnapshot_Params
{
	struct FString                                     InRoomName;                                               
	struct FVoiceRoomSnapshot                          ReturnValue;                                              
};


struct UVoiceSDKInterface_GetRoomMemberVoiceData_Params
{
	struct FString                                     InOpenid;                                                 
	int                                                InIndexType;                                              
	int                                                DataType;                                                 
	bool                                               OnlyIncludeLatest;                                        
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_GetRoomMemberId_Params
{
	struct FString                                     InOpenid;                                                 
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_GetPlayerVolume_Params
{
	struct FString                                     InPlayerId;                                               
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_GetMicState_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_GetLocalRecordFilePath_Params
{
	struct FString                                     InFileName;                                               
	struct FString                                     ReturnValue;                                              
};


struct UVoiceSDKInterface_GetLbsRoomName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UVoiceSDKInterface_GetAuthKey_Params
{
};


struct UVoiceSDKInterface_GetAudioDeviceConnectionState_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_ForbidTeammateVoiceById_Params
{
	int                                                memberID;                                                 
	bool                                               IsEnable;                                                 
};


struct UVoiceSDKInterface_ForbidMemberVoice_Params
{
	int                                                InMember;                                                 
	bool                                               InEnable;                                                 
	struct FString                                     InRoomName;                                               
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_ForbidLbsMemberVoiceById_Params
{
	int                                                memberID;                                                 
	bool                                               IsEnable;                                                 
};


struct UVoiceSDKInterface_EnableVoiceSdk_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	bool                                               Enable;                                                   
};


struct UVoiceSDKInterface_EnableVoiceRoomMicrophone_Params
{
	struct FString                                     InRoomName;                                               
	bool                                               InEnable;                                                 
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_EnableVoiceChat_Params
{
	bool                                               InEnable;                                                 
};


struct UVoiceSDKInterface_EnableTranslate_Params
{
	struct FString                                     InRoomName;                                               
	bool                                               InEnable;                                                 
	int                                                InMyLang;                                                 
	int                                                InTransType;                                              
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_EnableTeamRoomSpeaker_Params
{
	bool                                               bEnable;                                                  
};


struct UVoiceSDKInterface_EnableTeamRoomMic_Params
{
	bool                                               bEnable;                                                  
};


struct UVoiceSDKInterface_EnableRSTSSubtitle_Params
{
	bool                                               InEnable;                                                 
	int                                                InSrcLang;                                                
	struct FString                                     InExtInfo;                                                
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_EnableRoomSpeaker_Params
{
	struct FString                                     InRoomName;                                               
	bool                                               InEnable;                                                 
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_EnableReportForAbroad_Params
{
	bool                                               InIsWholeRoundaudit;                                      
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_EnableReportALLAbroad_Params
{
	bool                                               InEnable;                                                 
	bool                                               InWithEncryption;                                         
	int                                                InTimeout;                                                
	bool                                               ReturnValue;                                              
};


struct UVoiceSDKInterface_EnableRecvMagicVoice_Params
{
	bool                                               InEnable;                                                 
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_EnableMultiRoom_Params
{
	bool                                               InEnable;                                                 
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_EnableMagicVoice_Params
{
	struct FString                                     InMagicType;                                              
	bool                                               InEnable;                                                 
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_EnableLog_Params
{
	bool                                               InEnable;                                                 
};


struct UVoiceSDKInterface_EnableLbsRoomSpeaker_Params
{
	bool                                               bEnable;                                                  
};


struct UVoiceSDKInterface_EnableLbsRoomMic_Params
{
	bool                                               bEnable;                                                  
};


struct UVoiceSDKInterface_EnableKws_Params
{
	bool                                               bEnable;                                                  
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_EnableCommonRoomSpeaker_Params
{
	struct FString                                     InRoomName;                                               
	bool                                               InEnable;                                                 
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_EnableCommonRoomMic_Params
{
	struct FString                                     InRoomName;                                               
	bool                                               InEnable;                                                 
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_EnableCivilFile_Params
{
	bool                                               Enable;                                                   
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_EnableBluetoothSCO_Params
{
	bool                                               InEnable;                                                 
};


struct UVoiceSDKInterface_DownloadRecordFileV2_Params
{
	struct FString                                     InFileID;                                                 
	bool                                               InPermanent;                                              
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_DownloadRecordedFile_Params
{
	struct FString                                     InFileID;                                                 
	struct FString                                     InDownloadInFilePath;                                     
	int                                                InTimeout;                                                
	bool                                               InPermanent;                                              
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_CommonTestMic_Params
{
};


struct UVoiceSDKInterface_CloseVoiceSpeaker_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_CloseVoiceMic_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_CloseSpeaker_Params
{
};


struct UVoiceSDKInterface_CloseMic_Params
{
};


struct UVoiceSDKInterface_CloseIngameSpeaker_Params
{
};


struct UVoiceSDKInterface_CloseIngameMicphone_Params
{
};


struct UVoiceSDKInterface_CloseAllSpeaker_Params
{
	bool                                               ShowTips;                                                 
};


struct UVoiceSDKInterface_CloseAllMicphone_Params
{
	bool                                               ShowTips;                                                 
};


struct UVoiceSDKInterface_CheckDeviceMuteState_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_CheckAndEnableRoomSpeaker_Params
{
};


struct UVoiceSDKInterface_ChatShowAgeRestrictionMsgInLobby_Params
{
};


struct UVoiceSDKInterface_ChatShowAgeRestrictionMsgInFighting_Params
{
};


struct UVoiceSDKInterface_ChatShowAgeRestrictionMsgInChat_Params
{
};


struct UVoiceSDKInterface_ChatRequestPrivacyInSetting_Params
{
};


struct UVoiceSDKInterface_ChatRequestPrivacyInGame_Params
{
};


struct UVoiceSDKInterface_ApplyMessageKey_Params
{
	int                                                ReturnValue;                                              
};


struct UVoiceSDKInterface_AlwaysDisableRoomMic_Params
{
	struct FString                                     InRoomName;                                               
	bool                                               WithClear;                                                
};


struct AWeaponDIYCaptureActor_ResizeRT_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             
	int                                                Width;                                                    
	int                                                Height;                                                   
};


struct UWINSDKFBWebLogin_OnWINSDKHttpResponed__DelegateSignature_Params
{
	bool                                               requestSucc;                                              
	struct FString                                     txtContent;                                               
};


struct UWINSDKFBWebLogin_OnUrlChanged__DelegateSignature_Params
{
	struct FText                                       Text;                                                     
};


struct UWINSDKFBWebLogin_LoadUrl_Params
{
	struct FString                                     NewURL;                                                   
};


struct UWINSDKFBWebLogin_DoHttpRequest_Params
{
	struct FString                                     URL;                                                      
};


struct UWINWebSocketServer_Tick_Params
{
	int                                                DeltaTime;                                                
};


struct UWINWebSocketServer_Stop_Params
{
};


struct UWINWebSocketServer_Start_Params
{
	int                                                InPort;                                                   
};


struct UWINWebSocketServer_Send_Params
{
	struct FString                                     InMsg;                                                    
};


struct UWINWebSocketServer_GetInstance_Params
{
	class UWINWebSocketServer*                         ReturnValue;                                              
};

}

