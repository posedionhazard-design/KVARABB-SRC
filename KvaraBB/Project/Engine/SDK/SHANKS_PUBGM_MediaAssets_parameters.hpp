#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UMediaSource_Validate_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaSource_GetUrl_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UFileMediaSource_SetFilePath_Params
{
	struct FString                                     Path;                                                     
};


struct UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Params
{
	TArray<struct FMediaCaptureDevice>                 OutDevices;                                               
	int                                                filter;                                                   
};


struct UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Params
{
	TArray<struct FMediaCaptureDevice>                 OutDevices;                                               
	int                                                filter;                                                   
};


struct UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Params
{
	TArray<struct FMediaCaptureDevice>                 OutDevices;                                               
	int                                                filter;                                                   
};


struct UMediaPlayer_SupportsSeeking_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_SupportsScrubbing_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_SupportsRate_Params
{
	float                                              Rate;                                                     
	bool                                               Unthinned;                                                
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_SetViewRotation_Params
{
	struct FRotator                                    Rotation;                                                 
	bool                                               Absolute;                                                 
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_SetViewField_Params
{
	float                                              Horizontal;                                               
	float                                              Vertical;                                                 
	bool                                               Absolute;                                                 
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_SetVideoTrackFrameRate_Params
{
	int                                                TrackIndex;                                               
	int                                                FormatIndex;                                              
	float                                              FrameRate;                                                
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_SetTrackFormat_Params
{
	EMediaPlayerTrack                                  TrackType;                                                
	int                                                TrackIndex;                                               
	int                                                FormatIndex;                                              
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_SetRate_Params
{
	float                                              Rate;                                                     
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_SetLooping_Params
{
	bool                                               Looping;                                                  
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_SetDesiredPlayerName_Params
{
	struct FName                                       PlayerName;                                               
};


struct UMediaPlayer_SetCancelPending_Params
{
	bool                                               flag;                                                     
};


struct UMediaPlayer_SelectTrack_Params
{
	EMediaPlayerTrack                                  TrackType;                                                
	int                                                TrackIndex;                                               
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_Seek_Params
{
	struct FTimespan                                   Time;                                                     
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_Rewind_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_Reopen_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_Previous_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_Play_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_Pause_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_OpenUrl_Params
{
	struct FString                                     URL;                                                      
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_OpenSource_Params
{
	class UMediaSource*                                MediaSource;                                              
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_OpenPlaylistIndex_Params
{
	class UMediaPlaylist*                              InPlaylist;                                               
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_OpenPlaylist_Params
{
	class UMediaPlaylist*                              InPlaylist;                                               
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_OpenFile_Params
{
	struct FString                                     FilePath;                                                 
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_Next_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_IsReady_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_IsPreparing_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_IsPaused_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_IsLooping_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_IsConnecting_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_IsBuffering_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_HasError_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              
};


struct UMediaPlayer_GetVideoTrackType_Params
{
	int                                                TrackIndex;                                               
	int                                                FormatIndex;                                              
	struct FString                                     ReturnValue;                                              
};


struct UMediaPlayer_GetVideoTrackFrameRates_Params
{
	int                                                TrackIndex;                                               
	int                                                FormatIndex;                                              
	struct FFloatRange                                 ReturnValue;                                              
};


struct UMediaPlayer_GetVideoTrackFrameRate_Params
{
	int                                                TrackIndex;                                               
	int                                                FormatIndex;                                              
	float                                              ReturnValue;                                              
};


struct UMediaPlayer_GetVideoTrackDimensions_Params
{
	int                                                TrackIndex;                                               
	int                                                FormatIndex;                                              
	struct FIntPoint                                   ReturnValue;                                              
};


struct UMediaPlayer_GetVideoTrackAspectRatio_Params
{
	int                                                TrackIndex;                                               
	int                                                FormatIndex;                                              
	float                                              ReturnValue;                                              
};


struct UMediaPlayer_GetVerticalFieldOfView_Params
{
	float                                              ReturnValue;                                              
};


struct UMediaPlayer_GetUrl_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UMediaPlayer_GetTrackLanguage_Params
{
	EMediaPlayerTrack                                  TrackType;                                                
	int                                                TrackIndex;                                               
	struct FString                                     ReturnValue;                                              
};


struct UMediaPlayer_GetTrackFormat_Params
{
	EMediaPlayerTrack                                  TrackType;                                                
	int                                                TrackIndex;                                               
	int                                                ReturnValue;                                              
};


struct UMediaPlayer_GetTrackDisplayName_Params
{
	EMediaPlayerTrack                                  TrackType;                                                
	int                                                TrackIndex;                                               
	struct FText                                       ReturnValue;                                              
};


struct UMediaPlayer_GetTime_Params
{
	struct FTimespan                                   ReturnValue;                                              
};


struct UMediaPlayer_GetSupportedRates_Params
{
	TArray<struct FFloatRange>                         OutRates;                                                 
	bool                                               Unthinned;                                                
};


struct UMediaPlayer_GetSelectedTrack_Params
{
	EMediaPlayerTrack                                  TrackType;                                                
	int                                                ReturnValue;                                              
};


struct UMediaPlayer_GetRate_Params
{
	float                                              ReturnValue;                                              
};


struct UMediaPlayer_GetPlaylistIndex_Params
{
	int                                                ReturnValue;                                              
};


struct UMediaPlayer_GetPlaylist_Params
{
	class UMediaPlaylist*                              ReturnValue;                                              
};


struct UMediaPlayer_GetPlayerName_Params
{
	struct FName                                       ReturnValue;                                              
};


struct UMediaPlayer_GetNumTracks_Params
{
	EMediaPlayerTrack                                  TrackType;                                                
	int                                                ReturnValue;                                              
};


struct UMediaPlayer_GetNumTrackFormats_Params
{
	EMediaPlayerTrack                                  TrackType;                                                
	int                                                TrackIndex;                                               
	int                                                ReturnValue;                                              
};


struct UMediaPlayer_GetMediaName_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UMediaPlayer_GetHorizontalFieldOfView_Params
{
	float                                              ReturnValue;                                              
};


struct UMediaPlayer_GetDuration_Params
{
	struct FTimespan                                   ReturnValue;                                              
};


struct UMediaPlayer_GetDesiredPlayerName_Params
{
	struct FName                                       ReturnValue;                                              
};


struct UMediaPlayer_GetAudioTrackType_Params
{
	int                                                TrackIndex;                                               
	int                                                FormatIndex;                                              
	struct FString                                     ReturnValue;                                              
};


struct UMediaPlayer_GetAudioTrackSampleRate_Params
{
	int                                                TrackIndex;                                               
	int                                                FormatIndex;                                              
	int                                                ReturnValue;                                              
};


struct UMediaPlayer_GetAudioTrackChannels_Params
{
	int                                                TrackIndex;                                               
	int                                                FormatIndex;                                              
	int                                                ReturnValue;                                              
};


struct UMediaPlayer_Close_Params
{
};


struct UMediaPlayer_CanPlayUrl_Params
{
	struct FString                                     URL;                                                      
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_CanPlaySource_Params
{
	class UMediaSource*                                MediaSource;                                              
	bool                                               ReturnValue;                                              
};


struct UMediaPlayer_CanPause_Params
{
	bool                                               ReturnValue;                                              
};


struct UMediaPlaylist_Replace_Params
{
	int                                                Index;                                                    
	class UMediaSource*                                Replacement;                                              
	bool                                               ReturnValue;                                              
};


struct UMediaPlaylist_RemoveAt_Params
{
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UMediaPlaylist_Remove_Params
{
	class UMediaSource*                                MediaSource;                                              
	bool                                               ReturnValue;                                              
};


struct UMediaPlaylist_Num_Params
{
	int                                                ReturnValue;                                              
};


struct UMediaPlaylist_Insert_Params
{
	class UMediaSource*                                MediaSource;                                              
	int                                                Index;                                                    
};


struct UMediaPlaylist_GetRandom_Params
{
	int                                                OutIndex;                                                 
	class UMediaSource*                                ReturnValue;                                              
};


struct UMediaPlaylist_GetPrevious_Params
{
	int                                                InOutIndex;                                               
	class UMediaSource*                                ReturnValue;                                              
};


struct UMediaPlaylist_GetNext_Params
{
	int                                                InOutIndex;                                               
	class UMediaSource*                                ReturnValue;                                              
};


struct UMediaPlaylist_Get_Params
{
	int                                                Index;                                                    
	class UMediaSource*                                ReturnValue;                                              
};


struct UMediaPlaylist_AddUrl_Params
{
	struct FString                                     URL;                                                      
	bool                                               ReturnValue;                                              
};


struct UMediaPlaylist_AddFile_Params
{
	struct FString                                     FilePath;                                                 
	bool                                               ReturnValue;                                              
};


struct UMediaPlaylist_Add_Params
{
	class UMediaSource*                                MediaSource;                                              
	bool                                               ReturnValue;                                              
};


struct UMediaTexture_GetWidth_Params
{
	int                                                ReturnValue;                                              
};


struct UMediaTexture_GetHeight_Params
{
	int                                                ReturnValue;                                              
};


struct UMediaTexture_GetAspectRatio_Params
{
	float                                              ReturnValue;                                              
};

}

