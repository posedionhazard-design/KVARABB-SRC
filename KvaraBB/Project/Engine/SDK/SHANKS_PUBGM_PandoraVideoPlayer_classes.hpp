#pragma once


 
namespace SDK
{






class UBP_PixVideoLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.BP_PixVideoLibrary");
		return pStaticClass;
	}


	static bool SetPixVideoLibraryPath(const struct FString& LibPath);
	static class UUserWidget* CreatePlayerWidget(const struct FString& Name);
};




class UPVideoImage : public UImage
{
public:
	struct FScriptMulticastDelegate                    PlayerEventDelegate;                                      
	unsigned char                                      UnknownData00[0x18];                                      
	class UPVideoPlayer*                               m_pPlayer;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.PVideoImage");
		return pStaticClass;
	}


	void VideoPlayerEvent__DelegateSignature(int EventCode, int nParam1, int nParam2, const struct FString& strMsg);
	void UseFileDelegate(bool bEnable);
	void Update();
	void SetVolume(int nVolume);
	void SetVideoAlpha(float fAlpha);
	void SetStopAsyn(int stopAsyn);
	void SetRate(float nRate);
	void SetOnlyPlayType(int Type);
	void SetNextVideo(const struct FString& strUrl, bool bLoop);
	void SetNeedVideoTexture(bool needVideoTexture);
	void SetNeedPlayAudio(bool needPlayAudio);
	bool SetMediaCodecMaxBufferGap(int maxBufferGap);
	int SetDecryptionKey(const struct FString& decryptionKey);
	void SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface);
	void SetAutoPlay(bool doAutoPlay);
	void SeekMs(int millisec);
	void SeekAndPause(int nMilliSec);
	void Seek(int nSecond);
	void Resume();
	int PlayWithFd(int nFd, bool bLoop);
	int PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs);
	int Play(const struct FString& strUrl, bool bLoop);
	void Pause();
	bool IsTextureUpdated();
	bool IsPlaying();
	bool IsPause();
	bool IsAlphaVideo();
	int GetYUVFormat();
	void GetVideoTime(float* fCurTime, float* fTotalTime);
	class UTexture2D* GetVideoTexture(int nIdx);
	float GetVideoAlpha();
	struct FLinearColor GetRgbParameter();
	void GetResolution(int* nWidth, int* nHeight);
	int GetPlayStatus();
	int GetMediaType();
	int GetDuration();
	int GetCurrentPosition();
	struct FLinearColor GetAlphaParameter();
	void EnableCacheResource(bool bEnable, const struct FString& cachePath);
	void Close();
};




class UPVideoPlayerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.PVideoPlayerInterface");
		return pStaticClass;
	}


	bool OnAudioDataUpdateCallback(TArray<unsigned char> AudioData, int Size, int Samples, int Channels, int sample_rate, float clock);
};




class UPVideoPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FScriptMulticastDelegate                    MediaPlayerEventDelegate;                                 
	unsigned char                                      UnknownData01[0xD8];                                      
	TArray<class UTexture2D*>                          m_pTextures;                                              
	unsigned char                                      UnknownData02[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.PVideoPlayer");
		return pStaticClass;
	}


	void UseFileDelegate(bool bEnable);
	void Update();
	void SetVolume(int nVolume);
	void SetVideoAlpha(float fAlpha);
	static void SetStopAsyn(int stopAsyn);
	void SetRate(float nRate);
	void SetOnlyPlayType(int Type);
	void SetNextVideo(const struct FString& strUrl, bool bLoop);
	void SetNeedVideoTexture(bool bNeedVideoTexture);
	void SetNeedPlayAudio(bool bNeedPlayAudio);
	static bool SetMediaCodecMaxBufferGap(int maxBufferGap);
	static void SetHardwareDecodec(bool bHareware);
	int SetDecryptionKey(const struct FString& decryptionKey);
	void SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface);
	static void SetCachePacketSize(int nSizeMb);
	void SetAutoPlay(bool bAutoPlay);
	void SeekMs(int millisec);
	void SeekAndPause(int nMilliSec);
	void Seek(int nSecond);
	void Resume();
	int PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs);
	int Play(const struct FString& strUrl, bool bLoop);
	void Pause();
	void MediaPlayerEvent__DelegateSignature(int EventCode, int nParam1, int nParam2, const struct FString& strMsg);
	bool IsTextureUpdated();
	bool IsPlaying();
	bool IsPause();
	bool IsAlphaVideo();
	static bool InitPVideo();
	int GetYUVFormat();
	void GetVideoTime(float* fCurTime, float* fTotalTime);
	class UTexture2D* GetVideoTexture(int nIdx);
	float GetVideoAlpha();
	struct FLinearColor GetRgbParameter();
	void GetResolution(int* nWidth, int* nHeight);
	float GetRate();
	int GetPlayStatus();
	int GetMediaType();
	int GetDuration();
	int GetCurrentPosition();
	struct FLinearColor GetAlphaParameter();
	void EnableCacheResource(bool bEnable, const struct FString& cachePath);
	void Close();
	static void ClearCacheResource(const struct FString& cachePath);
	void BlueTick();
	void BeginPlay();
};




class UVideoPlayerWidget : public UUserWidget
{
public:
	class UPVideoImage*                                PVideoImage_Instance;                                     
	struct FScriptMulticastDelegate                    OnPlayerEventDelegate;                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraVideoPlayer.VideoPlayerWidget");
		return pStaticClass;
	}


	void VideoPlayerEvent__DelegateSignature(int nEvent, int nArg1, int nArg2, const struct FString& sMsg);
	void UseFileDelegate(bool bEnable);
	void SetVolume(int nVolume);
	void SetVideoAlpha(float fAlpha);
	void SetStopAsyn(int stopAsyn);
	void SetRate(float nRate);
	void SetOnlyPlayType(int Type);
	void SetNextVideo(const struct FString& strUrl, bool bLoop);
	void SetNeedVideoTexture(bool needVideoTexture);
	void SetNeedPlayAudio(bool needPlayAudio);
	bool SetMediaCodecMaxBufferGap(int maxBufferGap);
	void SetHardwareDecodec(bool bHardWare);
	int SetDecryptionKey(const struct FString& decryptionKey);
	void SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface);
	void SetAutoPlay(bool doAutoPlay);
	void SeekMs(int nMilliSec);
	void SeekAndPause(int nMilliSec);
	void Seek(int nSecond);
	void Resume();
	int PlayWithFd(int nFd, bool bLoop);
	int PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs);
	int Play1(const struct FString& strUrl, bool bLoop);
	void Pause();
	void OnPlayerEvent(int EventCode, int nParam1, int nParam2, const struct FString& strMsg);
	float GetVideoAlpha();
	int GetPlayStatus1();
	int GetDuration1();
	int GetCurrentPosition1();
	void EnableCacheResource(bool bEnable, const struct FString& Path);
	void Close();
	void ClearCacheResource(const struct FString& Path);
};


}

