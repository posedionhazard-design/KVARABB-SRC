#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UFilePicker_UnInitialize_Params
{
};


struct UFilePicker_OpenFilePicker_Params
{
	struct FString                                     InParamJson;                                              
	bool                                               ReturnValue;                                              
};


struct UFilePicker_Initialize_Params
{
};


struct UFilePicker_GetInstance_Params
{
	class UFilePicker*                                 ReturnValue;                                              
};


struct UFilePicker_FileSelectionCompleteDelegate__DelegateSignature_Params
{
	struct FString                                     ResultJson;                                               
};


struct UFirebaseHelper_SetFirebaseDebugMode_Params
{
	bool                                               bEnable;                                                  
};


struct UFirebaseHelper_SetConsent_Params
{
	TMap<int, int>                                     InConsent;                                                
};


struct UFirebaseHelper_IsNotificationLaunchApp_Params
{
	bool                                               ReturnValue;                                              
};


struct UFirebaseHelper_IsFirebaseDebugMode_Params
{
	bool                                               ReturnValue;                                              
};


struct UFirebaseHelper_GetNotificationLaunchAppExtraData_Params
{
	struct FString                                     InKey;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UFirebaseHelper_GetInstance_Params
{
	class UFirebaseHelper*                             ReturnValue;                                              
};


struct UFirebaseHelper_GetFIRInstallId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UFirebaseHelper_GetFIRAppInstanceId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UFirebaseHelper_GetFCMToken_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UFirebaseHelper_ConsumeNotificationLaunchApp_Params
{
};


struct UFirebaseRemoteConfigImpl_GetStatus_Params
{
	EQFirebaseRemoteConfigStatus                       ReturnValue;                                              
};


struct UFirebaseRemoteConfigImpl_GetRemoteConfig_Params
{
	struct FString                                     ConfigNameToQuery;                                        
	struct FString                                     ReturnValue;                                              
};


struct UFirebaseRemoteConfigImpl_GetInstance_Params
{
	class UFirebaseRemoteConfigImpl*                   ReturnValue;                                              
};


struct ULocationHelper_QueryLocation_Params
{
	int                                                InTimeout;                                                
};


struct ULocationHelper_Initialize_Params
{
};


struct ULocationHelper_GetInstance_Params
{
	class ULocationHelper*                             ReturnValue;                                              
};


struct ULocationHelper_Destroy_Params
{
};


struct UPhotoAlbumHelper_UnRegisterScreenCaptureListener_Params
{
};


struct UPhotoAlbumHelper_RegisterScreenCaptureListener_Params
{
	struct FString                                     InScreenshotFolders;                                      
	struct FString                                     InScreenshotMimeTypes;                                    
};


struct UPhotoAlbumHelper_Initialize_Params
{
};


struct UPhotoAlbumHelper_GetInstance_Params
{
	class UPhotoAlbumHelper*                           ReturnValue;                                              
};


struct UPhotoAlbumHelper_GenerateImageFromAlbum_Params
{
	struct FString                                     InFilePath;                                               
	struct FString                                     InThumbFilePath;                                          
	int                                                InThumbnailWidth;                                         
	int                                                InThumbnailHeight;                                        
	bool                                               InForceJPG;                                               
	bool                                               InOverride;                                               
	int                                                ReturnValue;                                              
};


struct UPhotoAlbumHelper_FetchAlbumImageInfo_Params
{
	int                                                InStartIndex;                                             
	int                                                InLimitNum;                                               
	int                                                InThumbWidth;                                             
	int                                                InThumbHeight;                                            
	struct FString                                     InThumbPath;                                              
	struct FString                                     InExtraJson;                                              
};


struct UStoreKit_RequestReview_Params
{
	bool                                               bForceOpenStoreInTestEnv;                                 
};


struct UStoreKit_OpenStorePage_Params
{
	struct FString                                     storeParam;                                               
};


struct UStoreKit_GetCountryCode_Params
{
	struct FScriptDelegate                             Callback;                                                 
};


struct USystemPermissionHelper_RequestPermissions_Params
{
	int                                                InPermissionType;                                         
	int                                                InRequestCode;                                            
	bool                                               ReturnValue;                                              
};


struct USystemPermissionHelper_IsPermissionGranted_Params
{
	int                                                InPermissionType;                                         
	bool                                               ReturnValue;                                              
};


struct USystemPermissionHelper_Initialize_Params
{
};


struct USystemPermissionHelper_GetPermissionStatus_Params
{
	int                                                InPermissionType;                                         
	int                                                ReturnValue;                                              
};


struct USystemPermissionHelper_GetInstance_Params
{
	class USystemPermissionHelper*                     ReturnValue;                                              
};


struct USystemPermissionHelper_AndroidShouldShowRequestPermissionRationale_Params
{
	struct FString                                     InPermission;                                             
	bool                                               ReturnValue;                                              
};


struct USystemPermissionHelper_AndroidRequestPermissions_Params
{
	struct FString                                     InPermission;                                             
	int                                                InRequestCode;                                            
	bool                                               ReturnValue;                                              
};


struct USystemPermissionHelper_AndroidIsPermissionGranted_Params
{
	struct FString                                     InPermission;                                             
	bool                                               ReturnValue;                                              
};


struct USystemPermissionHelper_AndroidHasDefinePermission_Params
{
	struct FString                                     InPermssionName;                                          
	bool                                               ReturnValue;                                              
};


struct UTouchTransmission_UnInitialize_Params
{
};


struct UTouchTransmission_TransmissionCompleteDelegate__DelegateSignature_Params
{
	struct FString                                     ResultJson;                                               
};


struct UTouchTransmission_Initialize_Params
{
};


struct UTouchTransmission_HandleReceivedPakFiles_Params
{
	struct FString                                     InParamJson;                                              
	bool                                               ReturnValue;                                              
};


struct UTouchTransmission_GetTransmissionRawJsonContent_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UTouchTransmission_GetInstance_Params
{
	class UTouchTransmission*                          ReturnValue;                                              
};

}

