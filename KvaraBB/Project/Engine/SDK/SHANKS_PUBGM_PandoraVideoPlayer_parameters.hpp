#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBP_PixVideoLibrary_SetPixVideoLibraryPath_Params
{
	struct FString                                     LibPath;                                                  
	bool                                               ReturnValue;                                              
};


struct UBP_PixVideoLibrary_CreatePlayerWidget_Params
{
	struct FString                                     Name;                                                     
	class UUserWidget*                                 ReturnValue;                                              
};


struct UPVideoImage_VideoPlayerEvent__DelegateSignature_Params
{
	int                                                EventCode;                                                
	int                                                nParam1;                                                  
	int                                                nParam2;                                                  
	struct FString                                     strMsg;                                                   
};


struct UPVideoImage_UseFileDelegate_Params
{
	bool                                               bEnable;                                                  
};


struct UPVideoImage_Update_Params
{
};


struct UPVideoImage_SetVolume_Params
{
	int                                                nVolume;                                                  
};


struct UPVideoImage_SetVideoAlpha_Params
{
	float                                              fAlpha;                                                   
};


struct UPVideoImage_SetStopAsyn_Params
{
	int                                                stopAsyn;                                                 
};


struct UPVideoImage_SetRate_Params
{
	float                                              nRate;                                                    
};


struct UPVideoImage_SetOnlyPlayType_Params
{
	int                                                Type;                                                     
};


struct UPVideoImage_SetNextVideo_Params
{
	struct FString                                     strUrl;                                                   
	bool                                               bLoop;                                                    
};


struct UPVideoImage_SetNeedVideoTexture_Params
{
	bool                                               needVideoTexture;                                         
};


struct UPVideoImage_SetNeedPlayAudio_Params
{
	bool                                               needPlayAudio;                                            
};


struct UPVideoImage_SetMediaCodecMaxBufferGap_Params
{
	int                                                maxBufferGap;                                             
	bool                                               ReturnValue;                                              
};


struct UPVideoImage_SetDecryptionKey_Params
{
	struct FString                                     decryptionKey;                                            
	int                                                ReturnValue;                                              
};


struct UPVideoImage_SetDataUpdateCallback_Params
{
	TScriptInterface<class UPVideoPlayerInterface>     dataUpdateInterface;                                      
};


struct UPVideoImage_SetAutoPlay_Params
{
	bool                                               doAutoPlay;                                               
};


struct UPVideoImage_SeekMs_Params
{
	int                                                millisec;                                                 
};


struct UPVideoImage_SeekAndPause_Params
{
	int                                                nMilliSec;                                                
};


struct UPVideoImage_Seek_Params
{
	int                                                nSecond;                                                  
};


struct UPVideoImage_Resume_Params
{
};


struct UPVideoImage_PlayWithFd_Params
{
	int                                                nFd;                                                      
	bool                                               bLoop;                                                    
	int                                                ReturnValue;                                              
};


struct UPVideoImage_PlayOnceAndLoopBetween_Params
{
	struct FString                                     strUrl;                                                   
	int                                                nStartMs;                                                 
	int                                                nEndMs;                                                   
	int                                                ReturnValue;                                              
};


struct UPVideoImage_Play_Params
{
	struct FString                                     strUrl;                                                   
	bool                                               bLoop;                                                    
	int                                                ReturnValue;                                              
};


struct UPVideoImage_Pause_Params
{
};


struct UPVideoImage_IsTextureUpdated_Params
{
	bool                                               ReturnValue;                                              
};


struct UPVideoImage_IsPlaying_Params
{
	bool                                               ReturnValue;                                              
};


struct UPVideoImage_IsPause_Params
{
	bool                                               ReturnValue;                                              
};


struct UPVideoImage_IsAlphaVideo_Params
{
	bool                                               ReturnValue;                                              
};


struct UPVideoImage_GetYUVFormat_Params
{
	int                                                ReturnValue;                                              
};


struct UPVideoImage_GetVideoTime_Params
{
	float                                              fCurTime;                                                 
	float                                              fTotalTime;                                               
};


struct UPVideoImage_GetVideoTexture_Params
{
	int                                                nIdx;                                                     
	class UTexture2D*                                  ReturnValue;                                              
};


struct UPVideoImage_GetVideoAlpha_Params
{
	float                                              ReturnValue;                                              
};


struct UPVideoImage_GetRgbParameter_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct UPVideoImage_GetResolution_Params
{
	int                                                nWidth;                                                   
	int                                                nHeight;                                                  
};


struct UPVideoImage_GetPlayStatus_Params
{
	int                                                ReturnValue;                                              
};


struct UPVideoImage_GetMediaType_Params
{
	int                                                ReturnValue;                                              
};


struct UPVideoImage_GetDuration_Params
{
	int                                                ReturnValue;                                              
};


struct UPVideoImage_GetCurrentPosition_Params
{
	int                                                ReturnValue;                                              
};


struct UPVideoImage_GetAlphaParameter_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct UPVideoImage_EnableCacheResource_Params
{
	bool                                               bEnable;                                                  
	struct FString                                     cachePath;                                                
};


struct UPVideoImage_Close_Params
{
};


struct UPVideoPlayerInterface_OnAudioDataUpdateCallback_Params
{
	TArray<unsigned char>                              AudioData;                                                
	int                                                Size;                                                     
	int                                                Samples;                                                  
	int                                                Channels;                                                 
	int                                                sample_rate;                                              
	float                                              clock;                                                    
	bool                                               ReturnValue;                                              
};


struct UPVideoPlayer_UseFileDelegate_Params
{
	bool                                               bEnable;                                                  
};


struct UPVideoPlayer_Update_Params
{
};


struct UPVideoPlayer_SetVolume_Params
{
	int                                                nVolume;                                                  
};


struct UPVideoPlayer_SetVideoAlpha_Params
{
	float                                              fAlpha;                                                   
};


struct UPVideoPlayer_SetStopAsyn_Params
{
	int                                                stopAsyn;                                                 
};


struct UPVideoPlayer_SetRate_Params
{
	float                                              nRate;                                                    
};


struct UPVideoPlayer_SetOnlyPlayType_Params
{
	int                                                Type;                                                     
};


struct UPVideoPlayer_SetNextVideo_Params
{
	struct FString                                     strUrl;                                                   
	bool                                               bLoop;                                                    
};


struct UPVideoPlayer_SetNeedVideoTexture_Params
{
	bool                                               bNeedVideoTexture;                                        
};


struct UPVideoPlayer_SetNeedPlayAudio_Params
{
	bool                                               bNeedPlayAudio;                                           
};


struct UPVideoPlayer_SetMediaCodecMaxBufferGap_Params
{
	int                                                maxBufferGap;                                             
	bool                                               ReturnValue;                                              
};


struct UPVideoPlayer_SetHardwareDecodec_Params
{
	bool                                               bHareware;                                                
};


struct UPVideoPlayer_SetDecryptionKey_Params
{
	struct FString                                     decryptionKey;                                            
	int                                                ReturnValue;                                              
};


struct UPVideoPlayer_SetDataUpdateCallback_Params
{
	TScriptInterface<class UPVideoPlayerInterface>     dataUpdateInterface;                                      
};


struct UPVideoPlayer_SetCachePacketSize_Params
{
	int                                                nSizeMb;                                                  
};


struct UPVideoPlayer_SetAutoPlay_Params
{
	bool                                               bAutoPlay;                                                
};


struct UPVideoPlayer_SeekMs_Params
{
	int                                                millisec;                                                 
};


struct UPVideoPlayer_SeekAndPause_Params
{
	int                                                nMilliSec;                                                
};


struct UPVideoPlayer_Seek_Params
{
	int                                                nSecond;                                                  
};


struct UPVideoPlayer_Resume_Params
{
};


struct UPVideoPlayer_PlayOnceAndLoopBetween_Params
{
	struct FString                                     strUrl;                                                   
	int                                                nStartMs;                                                 
	int                                                nEndMs;                                                   
	int                                                ReturnValue;                                              
};


struct UPVideoPlayer_Play_Params
{
	struct FString                                     strUrl;                                                   
	bool                                               bLoop;                                                    
	int                                                ReturnValue;                                              
};


struct UPVideoPlayer_Pause_Params
{
};


struct UPVideoPlayer_MediaPlayerEvent__DelegateSignature_Params
{
	int                                                EventCode;                                                
	int                                                nParam1;                                                  
	int                                                nParam2;                                                  
	struct FString                                     strMsg;                                                   
};


struct UPVideoPlayer_IsTextureUpdated_Params
{
	bool                                               ReturnValue;                                              
};


struct UPVideoPlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              
};


struct UPVideoPlayer_IsPause_Params
{
	bool                                               ReturnValue;                                              
};


struct UPVideoPlayer_IsAlphaVideo_Params
{
	bool                                               ReturnValue;                                              
};


struct UPVideoPlayer_InitPVideo_Params
{
	bool                                               ReturnValue;                                              
};


struct UPVideoPlayer_GetYUVFormat_Params
{
	int                                                ReturnValue;                                              
};


struct UPVideoPlayer_GetVideoTime_Params
{
	float                                              fCurTime;                                                 
	float                                              fTotalTime;                                               
};


struct UPVideoPlayer_GetVideoTexture_Params
{
	int                                                nIdx;                                                     
	class UTexture2D*                                  ReturnValue;                                              
};


struct UPVideoPlayer_GetVideoAlpha_Params
{
	float                                              ReturnValue;                                              
};


struct UPVideoPlayer_GetRgbParameter_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct UPVideoPlayer_GetResolution_Params
{
	int                                                nWidth;                                                   
	int                                                nHeight;                                                  
};


struct UPVideoPlayer_GetRate_Params
{
	float                                              ReturnValue;                                              
};


struct UPVideoPlayer_GetPlayStatus_Params
{
	int                                                ReturnValue;                                              
};


struct UPVideoPlayer_GetMediaType_Params
{
	int                                                ReturnValue;                                              
};


struct UPVideoPlayer_GetDuration_Params
{
	int                                                ReturnValue;                                              
};


struct UPVideoPlayer_GetCurrentPosition_Params
{
	int                                                ReturnValue;                                              
};


struct UPVideoPlayer_GetAlphaParameter_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct UPVideoPlayer_EnableCacheResource_Params
{
	bool                                               bEnable;                                                  
	struct FString                                     cachePath;                                                
};


struct UPVideoPlayer_Close_Params
{
};


struct UPVideoPlayer_ClearCacheResource_Params
{
	struct FString                                     cachePath;                                                
};


struct UPVideoPlayer_BlueTick_Params
{
};


struct UPVideoPlayer_BeginPlay_Params
{
};


struct UVideoPlayerWidget_VideoPlayerEvent__DelegateSignature_Params
{
	int                                                nEvent;                                                   
	int                                                nArg1;                                                    
	int                                                nArg2;                                                    
	struct FString                                     sMsg;                                                     
};


struct UVideoPlayerWidget_UseFileDelegate_Params
{
	bool                                               bEnable;                                                  
};


struct UVideoPlayerWidget_SetVolume_Params
{
	int                                                nVolume;                                                  
};


struct UVideoPlayerWidget_SetVideoAlpha_Params
{
	float                                              fAlpha;                                                   
};


struct UVideoPlayerWidget_SetStopAsyn_Params
{
	int                                                stopAsyn;                                                 
};


struct UVideoPlayerWidget_SetRate_Params
{
	float                                              nRate;                                                    
};


struct UVideoPlayerWidget_SetOnlyPlayType_Params
{
	int                                                Type;                                                     
};


struct UVideoPlayerWidget_SetNextVideo_Params
{
	struct FString                                     strUrl;                                                   
	bool                                               bLoop;                                                    
};


struct UVideoPlayerWidget_SetNeedVideoTexture_Params
{
	bool                                               needVideoTexture;                                         
};


struct UVideoPlayerWidget_SetNeedPlayAudio_Params
{
	bool                                               needPlayAudio;                                            
};


struct UVideoPlayerWidget_SetMediaCodecMaxBufferGap_Params
{
	int                                                maxBufferGap;                                             
	bool                                               ReturnValue;                                              
};


struct UVideoPlayerWidget_SetHardwareDecodec_Params
{
	bool                                               bHardWare;                                                
};


struct UVideoPlayerWidget_SetDecryptionKey_Params
{
	struct FString                                     decryptionKey;                                            
	int                                                ReturnValue;                                              
};


struct UVideoPlayerWidget_SetDataUpdateCallback_Params
{
	TScriptInterface<class UPVideoPlayerInterface>     dataUpdateInterface;                                      
};


struct UVideoPlayerWidget_SetAutoPlay_Params
{
	bool                                               doAutoPlay;                                               
};


struct UVideoPlayerWidget_SeekMs_Params
{
	int                                                nMilliSec;                                                
};


struct UVideoPlayerWidget_SeekAndPause_Params
{
	int                                                nMilliSec;                                                
};


struct UVideoPlayerWidget_Seek_Params
{
	int                                                nSecond;                                                  
};


struct UVideoPlayerWidget_Resume_Params
{
};


struct UVideoPlayerWidget_PlayWithFd_Params
{
	int                                                nFd;                                                      
	bool                                               bLoop;                                                    
	int                                                ReturnValue;                                              
};


struct UVideoPlayerWidget_PlayOnceAndLoopBetween_Params
{
	struct FString                                     strUrl;                                                   
	int                                                nStartMs;                                                 
	int                                                nEndMs;                                                   
	int                                                ReturnValue;                                              
};


struct UVideoPlayerWidget_Play1_Params
{
	struct FString                                     strUrl;                                                   
	bool                                               bLoop;                                                    
	int                                                ReturnValue;                                              
};


struct UVideoPlayerWidget_Pause_Params
{
};


struct UVideoPlayerWidget_OnPlayerEvent_Params
{
	int                                                EventCode;                                                
	int                                                nParam1;                                                  
	int                                                nParam2;                                                  
	struct FString                                     strMsg;                                                   
};


struct UVideoPlayerWidget_GetVideoAlpha_Params
{
	float                                              ReturnValue;                                              
};


struct UVideoPlayerWidget_GetPlayStatus1_Params
{
	int                                                ReturnValue;                                              
};


struct UVideoPlayerWidget_GetDuration1_Params
{
	int                                                ReturnValue;                                              
};


struct UVideoPlayerWidget_GetCurrentPosition1_Params
{
	int                                                ReturnValue;                                              
};


struct UVideoPlayerWidget_EnableCacheResource_Params
{
	bool                                               bEnable;                                                  
	struct FString                                     Path;                                                     
};


struct UVideoPlayerWidget_Close_Params
{
};


struct UVideoPlayerWidget_ClearCacheResource_Params
{
	struct FString                                     Path;                                                     
};

}

