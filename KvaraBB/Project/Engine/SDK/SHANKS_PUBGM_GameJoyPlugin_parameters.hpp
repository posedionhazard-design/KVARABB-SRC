#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBP_GameJoyPluginLibrary_WriteCaptureTextureToVideo_Params
{
};


struct UBP_GameJoyPluginLibrary_UseBackbuffer_Params
{
	bool                                               use;                                                      
};


struct UBP_GameJoyPluginLibrary_UpdateRedDot_Params
{
	bool                                               showRedDot;                                               
};


struct UBP_GameJoyPluginLibrary_UnLockRecorderPosition_Params
{
};


struct UBP_GameJoyPluginLibrary_StopRecorder_Params
{
};


struct UBP_GameJoyPluginLibrary_StartRecorder_Params
{
	bool                                               ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_ShowRecorderDialog_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
};


struct UBP_GameJoyPluginLibrary_ShowConsole_Params
{
};


struct UBP_GameJoyPluginLibrary_SetWwiseListenerStatus_Params
{
	bool                                               isMultiple;                                               
};


struct UBP_GameJoyPluginLibrary_SetWatermark_Params
{
	struct FString                                     Path;                                                     
	float                                              X;                                                        
	float                                              Y;                                                        
};


struct UBP_GameJoyPluginLibrary_SetVideoResolution_Params
{
	int                                                Type;                                                     
	int                                                Resolution;                                               
};


struct UBP_GameJoyPluginLibrary_SetVideoQuality_Params
{
	int                                                Quality;                                                  
};


struct UBP_GameJoyPluginLibrary_SetVideoBitrate_Params
{
	int                                                Type;                                                     
	int                                                BitRate;                                                  
};


struct UBP_GameJoyPluginLibrary_SetShareRenderContext_Params
{
};


struct UBP_GameJoyPluginLibrary_SetMinAvailableSpaceMB_Params
{
	int                                                minAvailableSpaceMB;                                      
};


struct UBP_GameJoyPluginLibrary_SetLoggerLevel_Params
{
	int                                                Level;                                                    
};


struct UBP_GameJoyPluginLibrary_SetGameUseRenderAPI_Params
{
	int                                                api;                                                      
};


struct UBP_GameJoyPluginLibrary_SetGameUseColorSpace_Params
{
	int                                                colorSpace;                                               
};


struct UBP_GameJoyPluginLibrary_SetFrameRate_Params
{
	int                                                FrameRate;                                                
};


struct UBP_GameJoyPluginLibrary_SetEnableBackbufferCallback_Params
{
	bool                                               bEnable;                                                  
};


struct UBP_GameJoyPluginLibrary_SetCoverSize_Params
{
	int                                                Width;                                                    
	int                                                Height;                                                   
};


struct UBP_GameJoyPluginLibrary_SetCaptureTextureFlipY_Params
{
	bool                                               flip;                                                     
};


struct UBP_GameJoyPluginLibrary_SetCaptureTexture_Params
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             
	bool                                               ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_SetCaptureSource_Params
{
	int                                                CaptureSource;                                            
};


struct UBP_GameJoyPluginLibrary_SetAutoProfileLevel_Params
{
	bool                                               Enabled;                                                  
};


struct UBP_GameJoyPluginLibrary_SetAlbumName_Params
{
	struct FString                                     albumName;                                                
};


struct UBP_GameJoyPluginLibrary_RequestSDKPermission_Params
{
	int                                                EventID;                                                  
	struct FString                                     Type;                                                     
};


struct UBP_GameJoyPluginLibrary_PxAuthSetSecretKey_Params
{
	struct FString                                     SecretKey;                                                
};


struct UBP_GameJoyPluginLibrary_PxAuthLogout_Params
{
};


struct UBP_GameJoyPluginLibrary_PxAuthGetSdkVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_OnPostRender_Params
{
};


struct UBP_GameJoyPluginLibrary_NotifySpaceNotEnough_Params
{
};


struct UBP_GameJoyPluginLibrary_MoveVideoToAlbum_Params
{
	int                                                EventID;                                                  
	struct FString                                     albumName;                                                
	struct FString                                     srcPath;                                                  
};


struct UBP_GameJoyPluginLibrary_MoveFileToDocument_Params
{
	struct FString                                     fromPath;                                                 
	struct FString                                     toSubPath;                                                
};


struct UBP_GameJoyPluginLibrary_MoveFile_Params
{
	struct FString                                     From;                                                     
	struct FString                                     dst;                                                      
	bool                                               ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_MoveAlbumToLocal_Params
{
	int                                                EventID;                                                  
	struct FString                                     albumPath;                                                
	struct FString                                     localPath;                                                
};


struct UBP_GameJoyPluginLibrary_MergeVideoWithImageAndVideo_Params
{
	int                                                EventID;                                                  
	struct FString                                     videoPath;                                                
	struct FString                                     headerVideo;                                              
	struct FString                                     ImagePath;                                                
};


struct UBP_GameJoyPluginLibrary_LockRecorderPosition_Params
{
};


struct UBP_GameJoyPluginLibrary_IsRecording_Params
{
	bool                                               ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_IsRecorderDialogShow_Params
{
	bool                                               ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_IsIOSFileExist_Params
{
	struct FString                                     FilePath;                                                 
	bool                                               ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_IsFileExist_Params
{
	struct FString                                     FilePath;                                                 
	bool                                               ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_IsDirExist_Params
{
	struct FString                                     Path;                                                     
	bool                                               ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_InitGameJoyBPLib_Params
{
};


struct UBP_GameJoyPluginLibrary_GetVideoMd5_Params
{
	int                                                EventID;                                                  
	struct FString                                     videoPathJson;                                            
};


struct UBP_GameJoyPluginLibrary_GetVideoInfo_Params
{
	int                                                EventID;                                                  
	struct FString                                     videoPathJson;                                            
};


struct UBP_GameJoyPluginLibrary_GetTimeSeconds_Params
{
	int                                                ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_GetTimeMilliSeconds_Params
{
	int                                                ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_GetSDKVersion_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_GetSandboxPath_Params
{
	int                                                EventID;                                                  
};


struct UBP_GameJoyPluginLibrary_GetRecorderPosition_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_GetPaths_Params
{
	int                                                pathType;                                                 
	bool                                               Relative;                                                 
	struct FString                                     ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_GetPathRelativeTo_Params
{
	struct FString                                     fromPath;                                                 
	struct FString                                     relativeTo;                                               
	struct FString                                     ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_GetInstance_Params
{
	class UBP_GameJoyPluginLibrary*                    ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_GetGFilePathBase_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_GetFreeDiskSpace_Params
{
	int                                                ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_GetFilesInDir_Params
{
	struct FString                                     Path;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_GetFilesFromPath_Params
{
	int                                                EventID;                                                  
	struct FString                                     Path;                                                     
	bool                                               isIncludeChildren;                                        
};


struct UBP_GameJoyPluginLibrary_GetFilePathFromUri_Params
{
	struct FString                                     uriPath;                                                  
	struct FString                                     ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_GetFdFromUri_Params
{
	struct FString                                     uri;                                                      
	int                                                ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_GetDeviceInfo_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_GetCaptureSource_Params
{
	int                                                ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_GenerateVideoCover_Params
{
	int                                                EventID;                                                  
	struct FString                                     videoPath;                                                
};


struct UBP_GameJoyPluginLibrary_GenerateMomentsVideo_Params
{
	struct FString                                     videoTimeStampListJson;                                   
};


struct UBP_GameJoyPluginLibrary_EnableInGameAudio_Params
{
	bool                                               Enable;                                                   
};


struct UBP_GameJoyPluginLibrary_EnableCodecHighProfile_Params
{
	bool                                               Enabled;                                                  
};


struct UBP_GameJoyPluginLibrary_EnableBgmMix_Params
{
	bool                                               mixing;                                                   
};


struct UBP_GameJoyPluginLibrary_DeleteVideoByAlbum_Params
{
	int                                                EventID;                                                  
	struct FString                                     albumName;                                                
	struct FString                                     srcPath;                                                  
};


struct UBP_GameJoyPluginLibrary_DeInitGameJoyBPLib_Params
{
};


struct UBP_GameJoyPluginLibrary_CopyFile_Params
{
	struct FString                                     From;                                                     
	struct FString                                     dst;                                                      
	bool                                               ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_CloseRecorderDialog_Params
{
};


struct UBP_GameJoyPluginLibrary_CloseFd_Params
{
	int                                                fd;                                                       
	int                                                ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_ClipVideo_Params
{
	int                                                EventID;                                                  
	struct FString                                     videoEditJson;                                            
};


struct UBP_GameJoyPluginLibrary_CleanWorkFolders_Params
{
	int                                                Level;                                                    
};


struct UBP_GameJoyPluginLibrary_CheckSDKPermission_Params
{
	struct FString                                     Type;                                                     
	int                                                ReturnValue;                                              
};


struct UBP_GameJoyPluginLibrary_CheckAlbumVideoExist_Params
{
	struct FString                                     Path;                                                     
	bool                                               ReturnValue;                                              
};

}

