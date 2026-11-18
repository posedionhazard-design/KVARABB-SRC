#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UGamelet_UpdateProductConfig_Params
{
	int                                                ReturnValue;                                              
};


struct UGamelet_StopTick_Params
{
};


struct UGamelet_StartTick_Params
{
};


struct UGamelet_SetTickIntervalSec_Params
{
	float                                              TickIntervalSec;                                          
};


struct UGamelet_SetScriptExternalLoadDir_Params
{
	struct FString                                     ExternalLoadDir;                                          
	int                                                ReturnValue;                                              
};


struct UGamelet_SetFont_Params
{
	struct FString                                     FontName;                                                 
	struct FString                                     FontPath;                                                 
	int                                                ReturnValue;                                              
};


struct UGamelet_SetDefaultFont_Params
{
	struct FString                                     FontName;                                                 
	int                                                ReturnValue;                                              
};


struct UGamelet_SetBuiltinResConfig_Params
{
	struct FString                                     ResConfig;                                                
	int                                                ReturnValue;                                              
};


struct UGamelet_SetAppVisibility_Params
{
	struct FString                                     AppID;                                                    
	bool                                               Visible;                                                  
	int                                                ReturnValue;                                              
};


struct UGamelet_SetAppPageVisibility_Params
{
	struct FString                                     AppID;                                                    
	struct FString                                     AppPage;                                                  
	bool                                               Visible;                                                  
	int                                                ReturnValue;                                              
};


struct UGamelet_SendMessageToSdk_Params
{
	struct FString                                     Msg;                                                      
	int                                                ReturnValue;                                              
};


struct UGamelet_SendMessageToApp_Params
{
	struct FString                                     AppID;                                                    
	struct FString                                     Msg;                                                      
	int                                                ReturnValue;                                              
};


struct UGamelet_RefreshUserdata_Params
{
	TMap<struct FString, struct FString>               UserData;                                                 
	int                                                ReturnValue;                                              
};


struct UGamelet_OpenBeforeLoginWithGameVersion_Params
{
	TEnumAsByte<EGameletEnvironment>                   Environment;                                              
	struct FString                                     GameVersion;                                              
	int                                                ReturnValue;                                              
};


struct UGamelet_OpenBeforeLogin_Params
{
	TEnumAsByte<EGameletEnvironment>                   Environment;                                              
	int                                                ReturnValue;                                              
};


struct UGamelet_OpenApp_Params
{
	struct FString                                     AppID;                                                    
	struct FString                                     OpenArgs;                                                 
	int                                                ReturnValue;                                              
};


struct UGamelet_Open_Params
{
	TEnumAsByte<EGameletEnvironment>                   Environment;                                              
	TMap<struct FString, struct FString>               UserData;                                                 
	int                                                ReturnValue;                                              
};


struct UGamelet_Initialize_Params
{
	class UGameletSettings*                            Settings;                                                 
	int                                                ReturnValue;                                              
};


struct UGamelet_GetProductConfig_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGamelet_GetIsProductEnvironment_Params
{
	bool                                               ReturnValue;                                              
};


struct UGamelet_GetGlobalSettings_Params
{
	class UGameletSettings*                            ReturnValue;                                              
};


struct UGamelet_GetBackTrace_Params
{
	struct FString                                     TraceInfo;                                                
	int                                                ReturnValue;                                              
};


struct UGamelet_Get_Params
{
	class UGamelet*                                    ReturnValue;                                              
};


struct UGamelet_ExecOnSDKMessage_Params
{
	struct FString                                     Msg;                                                      
	int                                                ReturnValue;                                              
};


struct UGamelet_ExecOnReportData_Params
{
	struct FString                                     EventName;                                                
	struct FString                                     Data;                                                     
	int                                                ReturnValue;                                              
};


struct UGamelet_ExecOnRefreshUserdata_Params
{
	int                                                ReturnValue;                                              
};


struct UGamelet_EnableLog_Params
{
	bool                                               Enable;                                                   
};


struct UGamelet_Deinitialize_Params
{
	int                                                ReturnValue;                                              
};


struct UGamelet_CollectPixUILogOutput_Params
{
	EPxLogGroups                                       PixUILogType;                                             
	EPxLogLevels                                       PixUILogLevel;                                            
	struct FString                                     logContent;                                               
};


struct UGamelet_CloseAppPage_Params
{
	struct FString                                     AppID;                                                    
	struct FString                                     AppPage;                                                  
	int                                                ReturnValue;                                              
};


struct UGamelet_CloseApp_Params
{
	struct FString                                     AppID;                                                    
	int                                                ReturnValue;                                              
};


struct UGamelet_Close_Params
{
	int                                                ReturnValue;                                              
};


struct UGamelet_AllAssetsGC_Params
{
	int                                                ReturnValue;                                              
};


struct UGameletEnvMgr_OnEnvToGameMessage_Params
{
	struct FString                                     Msg;                                                      
	int                                                ReturnValue;                                              
};


struct UGameletEnvMgr_OnEnvToEntryMessage_Params
{
	struct FString                                     Msg;                                                      
	int                                                ReturnValue;                                              
};


struct UGameletEnvMgr_OnEnvReportData_Params
{
	struct FString                                     EventName;                                                
	struct FString                                     Data;                                                     
	int                                                ReturnValue;                                              
};


struct UGameletEnvMgr_OnEnvRefreshUserdata_Params
{
	int                                                ReturnValue;                                              
};


struct UGameletEnvMgr_OnEnvLoaded_Params
{
	struct FString                                     URL;                                                      
	int                                                ErrorCode;                                                
};


struct UGameletEnvMgr_OnEnvInternalError_Params
{
	int                                                ErrorCode;                                                
	struct FString                                     ErrorMsg;                                                 
};


struct UGameletEnvMgr_GetBackTrace_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletFile_WriteFile_Params
{
	struct FString                                     Path;                                                     
	struct FGameletArrayBuffer                         ArrayBuffer;                                              
	bool                                               ReturnValue;                                              
};


struct UGameletFile_SaveStringToFile_Params
{
	struct FString                                     Path;                                                     
	struct FString                                     Content;                                                  
	bool                                               ReturnValue;                                              
};


struct UGameletFile_ReadFile_Params
{
	struct FString                                     Path;                                                     
	struct FGameletArrayBuffer                         ReturnValue;                                              
};


struct UGameletFile_LoadFileToString_Params
{
	struct FString                                     Path;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UGameletFile_GetFileMd5_Params
{
	struct FString                                     Path;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UGameletFile_FileSize_Params
{
	struct FString                                     Path;                                                     
	int64_t                                            ReturnValue;                                              
};


struct UGameletFile_FileExists_Params
{
	struct FString                                     Path;                                                     
	bool                                               ReturnValue;                                              
};


struct UGameletFile_DirectoryExists_Params
{
	struct FString                                     Path;                                                     
	bool                                               ReturnValue;                                              
};


struct UGameletFile_DeleteFile_Params
{
	struct FString                                     Path;                                                     
	bool                                               ReturnValue;                                              
};


struct UGameletFile_DeleteDirectory_Params
{
	struct FString                                     Path;                                                     
	bool                                               ReturnValue;                                              
};


struct UGameletFile_CreateDirectory_Params
{
	struct FString                                     Path;                                                     
	bool                                               ReturnValue;                                              
};


struct UGameletPaths_ToAbsolutePathForWrite_Params
{
	struct FString                                     Path;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_ToAbsolutePathForRead_Params
{
	struct FString                                     Path;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_RootDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_ProjectUserDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_ProjectSavedDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_ProjectModsDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_ProjectIntermediateDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_ProjectDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_ProjectContentDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_ProjectConfigDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_LaunchDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_GetPuertsScriptFolderName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_GetPuertsEntrancePath_Params
{
	struct FString                                     PakName;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_GetPuertsAppScriptPath_Params
{
	struct FString                                     AppFolderName;                                            
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_GetPuertsAppNameByPakName_Params
{
	struct FString                                     PakName;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_GetPuertsAppIndexPath_Params
{
	struct FString                                     AppFolderName;                                            
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_GameletSavedRoot_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_GameletFolderName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_GameletContentRoot_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPaths_GameletAppArchiveRoot_Params
{
	struct FString                                     AppID;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UGameletPuertsEnvMgr_OnEnvScriptStateInit_Params
{
};


struct UGameletPuertsEnvMgr_OnEnvMessage_Params
{
	struct FString                                     Msg;                                                      
};


struct UGameletPuertsEnvMgr_OnEnvLoaded_Params
{
	struct FString                                     URL;                                                      
	int                                                ErrorCode;                                                
};


struct UGameletPuertsEnvMgr_Get_Params
{
	class UGameletPuertsEnvMgr*                        ReturnValue;                                              
};


struct UGameletPuertsUtilities_UpdateTextureResources_Params
{
	class UTexture2D*                                  Texture;                                                  
};


struct UGameletPuertsUtilities_UnmountPak_Params
{
	struct FString                                     pakPath;                                                  
	int                                                ReturnValue;                                              
};


struct UGameletPuertsUtilities_RemoveUserWidgetFromGame_Params
{
	class UUserWidget*                                 UserWidget;                                               
	struct FString                                     PanelInfo;                                                
};


struct UGameletPuertsUtilities_ReleaseTextureResource_Params
{
	class UTexture2D*                                  Texture;                                                  
};


struct UGameletPuertsUtilities_MountPak_Params
{
	struct FString                                     pakPath;                                                  
	int                                                ReturnValue;                                              
};


struct UGameletPuertsUtilities_LoadUI_Params
{
	struct FString                                     Ref;                                                      
	class UObject*                                     Obj;                                                      
	class UUserWidget*                                 ReturnValue;                                              
};


struct UGameletPuertsUtilities_LoadImageToTexture2D_Params
{
	struct FString                                     Path;                                                     
	TEnumAsByte<ETextureGroup>                         LODGroup;                                                 
	unsigned char                                      IsSRGB;                                                   
	class UTexture2D*                                  ReturnValue;                                              
};


struct UGameletPuertsUtilities_IsWithEditor_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameletPuertsUtilities_HelloWorld_Params
{
};


struct UGameletPuertsUtilities_GetWidgetAnimationByName_Params
{
	class UUserWidget*                                 Widget;                                                   
	struct FString                                     Name;                                                     
	class UWidgetAnimation*                            ReturnValue;                                              
};


struct UGameletPuertsUtilities_GetSDKVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPuertsUtilities_GetPlatformDesc_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPuertsUtilities_GetNetworkType_Params
{
	unsigned char                                      ReturnValue;                                              
};


struct UGameletPuertsUtilities_GetIsProductEnvironment_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameletPuertsUtilities_GetHardwareInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPuertsUtilities_GetEngineVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UGameletPuertsUtilities_FlushPuertsVMMessages_Params
{
};


struct UGameletPuertsUtilities_CallCommonFunc_Params
{
	struct FString                                     Type;                                                     
	struct FString                                     ParamJson;                                                
	class UWidget*                                     Widget;                                                   
	struct FScriptDelegate                             Callback;                                                 
};


struct UGameletPuertsUtilities_AddUserWidgetToGame_Params
{
	class UUserWidget*                                 UserWidget;                                               
	struct FString                                     PanelInfo;                                                
};


struct UGameletSettings_IsValidSetting_Params
{
	bool                                               ReturnValue;                                              
};


struct UGameletSettings_Get_Params
{
	class UGameletSettings*                            ReturnValue;                                              
};


struct UGameletWidget_SetWidgetOffset_Params
{
	struct FMargin                                     OffsetData;                                               
};


struct UGameletWidget_SetWidgetAnchor_Params
{
	struct FAnchors                                    AnchorData;                                               
};


struct UGameletWidget_SetUseSRGB_Params
{
	bool                                               EnableSRGB;                                               
};


struct UGameletWidget_SetRHIConfigured_Params
{
	bool                                               Configured;                                               
};


struct UGameletWidget_SetBackgroundWidgetOffset_Params
{
	struct FMargin                                     OffsetData;                                               
};


struct UGameletWidget_SetBackgroundWidgetAnchor_Params
{
	struct FAnchors                                    AnchorData;                                               
};


struct UGameletWidget_SetBackgroundImage_Params
{
	struct FString                                     ImagePath;                                                
};


struct UGameletWidget_GetPixUIWidget_Params
{
	TWeakObjectPtr<class UPixUIWidget>                 ReturnValue;                                              
};


struct UGameletWindow_OnPxWidgetScriptStateInit_Params
{
};


struct UGameletWindow_OnPxWidgetScriptStateDone_Params
{
};


struct UGameletWindow_OnPxWidgetRequestOpen_Params
{
	struct FString                                     URL;                                                      
	struct FString                                     Name;                                                     
	struct FString                                     Features;                                                 
	bool                                               bReplace;                                                 
	bool                                               ReturnValue;                                              
};


struct UGameletWindow_OnPxWidgetMessage_Params
{
	struct FString                                     Msg;                                                      
};


struct UGameletWindow_OnPxWidgetLoaded_Params
{
	struct FString                                     URL;                                                      
	int                                                ErrorCode;                                                
};


struct UGameletWindow_OnPxWidgetInternalError_Params
{
	int                                                ErrorCode;                                                
	struct FString                                     ErrorMsg;                                                 
};


struct UGameletWindow_OnPxWidgetClose_Params
{
};

}

