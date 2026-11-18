#pragma once


 
namespace SDK
{






class UMediaSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaAssets.MediaSource");
		return pStaticClass;
	}


	bool Validate();
	struct FString GetUrl();
};




class UBaseMediaSource : public UMediaSource
{
public:
	struct FName                                       PlayerName;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaAssets.BaseMediaSource");
		return pStaticClass;
	}

};




class UFileMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     FilePath;                                                 
	bool                                               PrecacheFile;                                             
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaAssets.FileMediaSource");
		return pStaticClass;
	}


	void SetFilePath(const struct FString& Path);
};




class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaAssets.MediaBlueprintFunctionLibrary");
		return pStaticClass;
	}


	static void EnumerateWebcamCaptureDevices(int filter, TArray<struct FMediaCaptureDevice>* OutDevices);
	static void EnumerateVideoCaptureDevices(int filter, TArray<struct FMediaCaptureDevice>* OutDevices);
	static void EnumerateAudioCaptureDevices(int filter, TArray<struct FMediaCaptureDevice>* OutDevices);
};




class UMediaPlayer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnEndReached;                                             
	struct FScriptMulticastDelegate                    OnMediaClosed;                                            
	struct FScriptMulticastDelegate                    OnMediaOpened;                                            
	struct FScriptMulticastDelegate                    OnMediaOpenFailed;                                        
	struct FScriptMulticastDelegate                    OnPlaybackResumed;                                        
	struct FScriptMulticastDelegate                    OnPlaybackSuspended;                                      
	struct FScriptMulticastDelegate                    OnSeekCompleted;                                          
	struct FScriptMulticastDelegate                    OnTracksChanged;                                          
	struct FScriptMulticastDelegate                    OnMediaPlayFirstFrame;                                    
	struct FTimespan                                   CacheAhead;                                               
	struct FTimespan                                   CacheBehind;                                              
	struct FTimespan                                   CacheBehindGame;                                          
	bool                                               NativeAudioOut;                                           
	bool                                               PlayOnOpen;                                               
	unsigned char                                      Shuffle : 1;                                              
	unsigned char                                      Loop : 1;                                                 
	unsigned char                                      UnknownData00[0x5];                                       
	class UMediaPlaylist*                              Playlist;                                                 
	int                                                PlaylistIndex;                                            
	float                                              HorizontalFieldOfView;                                    
	float                                              VerticalFieldOfView;                                      
	struct FRotator                                    ViewRotation;                                             
	unsigned char                                      UnknownData01[0x28];                                      
	struct FGuid                                       PlayerGuid;                                               
	unsigned char                                      UnknownData02[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return pStaticClass;
	}


	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetViewRotation(const struct FRotator& Rotation, bool Absolute);
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);
	bool SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate);
	bool SetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex, int FormatIndex);
	bool SetRate(float Rate);
	bool SetLooping(bool Looping);
	void SetDesiredPlayerName(const struct FName& PlayerName);
	void SetCancelPending(bool flag);
	bool SelectTrack(EMediaPlayerTrack TrackType, int TrackIndex);
	bool Seek(const struct FTimespan& Time);
	bool Rewind();
	bool Reopen();
	bool Previous();
	bool Play();
	bool Pause();
	bool OpenUrl(const struct FString& URL);
	bool OpenSource(class UMediaSource* MediaSource);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenFile(const struct FString& FilePath);
	bool Next();
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsConnecting();
	bool IsBuffering();
	bool HasError();
	struct FRotator GetViewRotation();
	struct FString GetVideoTrackType(int TrackIndex, int FormatIndex);
	struct FFloatRange GetVideoTrackFrameRates(int TrackIndex, int FormatIndex);
	float GetVideoTrackFrameRate(int TrackIndex, int FormatIndex);
	struct FIntPoint GetVideoTrackDimensions(int TrackIndex, int FormatIndex);
	float GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex);
	float GetVerticalFieldOfView();
	struct FString GetUrl();
	struct FString GetTrackLanguage(EMediaPlayerTrack TrackType, int TrackIndex);
	int GetTrackFormat(EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int TrackIndex);
	struct FTimespan GetTime();
	void GetSupportedRates(bool Unthinned, TArray<struct FFloatRange>* OutRates);
	int GetSelectedTrack(EMediaPlayerTrack TrackType);
	float GetRate();
	int GetPlaylistIndex();
	class UMediaPlaylist* GetPlaylist();
	struct FName GetPlayerName();
	int GetNumTracks(EMediaPlayerTrack TrackType);
	int GetNumTrackFormats(EMediaPlayerTrack TrackType, int TrackIndex);
	struct FText GetMediaName();
	float GetHorizontalFieldOfView();
	struct FTimespan GetDuration();
	struct FName GetDesiredPlayerName();
	struct FString GetAudioTrackType(int TrackIndex, int FormatIndex);
	int GetAudioTrackSampleRate(int TrackIndex, int FormatIndex);
	int GetAudioTrackChannels(int TrackIndex, int FormatIndex);
	void Close();
	bool CanPlayUrl(const struct FString& URL);
	bool CanPlaySource(class UMediaSource* MediaSource);
	bool CanPause();
};




class UMediaPlaylist : public UObject
{
public:
	unsigned char                                      Loop : 1;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<class UMediaSource*>                        Items;                                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaAssets.MediaPlaylist");
		return pStaticClass;
	}


	bool Replace(int Index, class UMediaSource* Replacement);
	bool RemoveAt(int Index);
	bool Remove(class UMediaSource* MediaSource);
	int Num();
	void Insert(class UMediaSource* MediaSource, int Index);
	class UMediaSource* GetRandom(int* OutIndex);
	class UMediaSource* GetPrevious(int* InOutIndex);
	class UMediaSource* GetNext(int* InOutIndex);
	class UMediaSource* Get(int Index);
	bool AddUrl(const struct FString& URL);
	bool AddFile(const struct FString& FilePath);
	bool Add(class UMediaSource* MediaSource);
};




class UMediaSoundComponent : public USynthComponent
{
public:
	EMediaSoundChannels                                Channels;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	unsigned char                                      UnknownData01[0x4];                                       
	class UMediaPlayer*                                MediaPlayer;                                              
	unsigned char                                      UnknownData02[0x70];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaAssets.MediaSoundComponent");
		return pStaticClass;
	}

};




class UMediaTexture : public UTexture
{
public:
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 
	bool                                               AutoClear;                                                
	unsigned char                                      UnknownData00[0x1];                                       
	struct FLinearColor                                ClearColor;                                               
	unsigned char                                      UnknownData01[0x4];                                       
	class UMediaPlayer*                                MediaPlayer;                                              
	unsigned char                                      UnknownData02[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaAssets.MediaTexture");
		return pStaticClass;
	}


	int GetWidth();
	int GetHeight();
	float GetAspectRatio();
};




class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                                MediaSource;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaAssets.PlatformMediaSource");
		return pStaticClass;
	}

};




class UStreamMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     StreamUrl;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaAssets.StreamMediaSource");
		return pStaticClass;
	}

};


}

