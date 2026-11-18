
 
#include "../SDK.hpp"

namespace SDK
{










bool UBP_PixVideoLibrary::SetPixVideoLibraryPath(const struct FString& LibPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.BP_PixVideoLibrary.SetPixVideoLibraryPath");

	UBP_PixVideoLibrary_SetPixVideoLibraryPath_Params params;
	params.LibPath = LibPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UUserWidget* UBP_PixVideoLibrary::CreatePlayerWidget(const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.BP_PixVideoLibrary.CreatePlayerWidget");

	UBP_PixVideoLibrary_CreatePlayerWidget_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










void UPVideoImage::VideoPlayerEvent__DelegateSignature(int EventCode, int nParam1, int nParam2, const struct FString& strMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction PandoraVideoPlayer.PVideoImage.VideoPlayerEvent__DelegateSignature");

	UPVideoImage_VideoPlayerEvent__DelegateSignature_Params params;
	params.EventCode = EventCode;
	params.nParam1 = nParam1;
	params.nParam2 = nParam2;
	params.strMsg = strMsg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoImage::UseFileDelegate(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.UseFileDelegate");

	UPVideoImage_UseFileDelegate_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPVideoImage::Update()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.Update");

	UPVideoImage_Update_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoImage::SetVolume(int nVolume)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetVolume");

	UPVideoImage_SetVolume_Params params;
	params.nVolume = nVolume;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoImage::SetVideoAlpha(float fAlpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetVideoAlpha");

	UPVideoImage_SetVideoAlpha_Params params;
	params.fAlpha = fAlpha;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoImage::SetStopAsyn(int stopAsyn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetStopAsyn");

	UPVideoImage_SetStopAsyn_Params params;
	params.stopAsyn = stopAsyn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoImage::SetRate(float nRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetRate");

	UPVideoImage_SetRate_Params params;
	params.nRate = nRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoImage::SetOnlyPlayType(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetOnlyPlayType");

	UPVideoImage_SetOnlyPlayType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPVideoImage::SetNextVideo(const struct FString& strUrl, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetNextVideo");

	UPVideoImage_SetNextVideo_Params params;
	params.strUrl = strUrl;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoImage::SetNeedVideoTexture(bool needVideoTexture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetNeedVideoTexture");

	UPVideoImage_SetNeedVideoTexture_Params params;
	params.needVideoTexture = needVideoTexture;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoImage::SetNeedPlayAudio(bool needPlayAudio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetNeedPlayAudio");

	UPVideoImage_SetNeedPlayAudio_Params params;
	params.needPlayAudio = needPlayAudio;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UPVideoImage::SetMediaCodecMaxBufferGap(int maxBufferGap)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetMediaCodecMaxBufferGap");

	UPVideoImage_SetMediaCodecMaxBufferGap_Params params;
	params.maxBufferGap = maxBufferGap;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UPVideoImage::SetDecryptionKey(const struct FString& decryptionKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetDecryptionKey");

	UPVideoImage_SetDecryptionKey_Params params;
	params.decryptionKey = decryptionKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UPVideoImage::SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetDataUpdateCallback");

	UPVideoImage_SetDataUpdateCallback_Params params;
	params.dataUpdateInterface = dataUpdateInterface;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoImage::SetAutoPlay(bool doAutoPlay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SetAutoPlay");

	UPVideoImage_SetAutoPlay_Params params;
	params.doAutoPlay = doAutoPlay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoImage::SeekMs(int millisec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SeekMs");

	UPVideoImage_SeekMs_Params params;
	params.millisec = millisec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoImage::SeekAndPause(int nMilliSec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.SeekAndPause");

	UPVideoImage_SeekAndPause_Params params;
	params.nMilliSec = nMilliSec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoImage::Seek(int nSecond)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.Seek");

	UPVideoImage_Seek_Params params;
	params.nSecond = nSecond;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPVideoImage::Resume()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.Resume");

	UPVideoImage_Resume_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









int UPVideoImage::PlayWithFd(int nFd, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.PlayWithFd");

	UPVideoImage_PlayWithFd_Params params;
	params.nFd = nFd;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










int UPVideoImage::PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.PlayOnceAndLoopBetween");

	UPVideoImage_PlayOnceAndLoopBetween_Params params;
	params.strUrl = strUrl;
	params.nStartMs = nStartMs;
	params.nEndMs = nEndMs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UPVideoImage::Play(const struct FString& strUrl, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.Play");

	UPVideoImage_Play_Params params;
	params.strUrl = strUrl;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UPVideoImage::Pause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.Pause");

	UPVideoImage_Pause_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UPVideoImage::IsTextureUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.IsTextureUpdated");

	UPVideoImage_IsTextureUpdated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UPVideoImage::IsPlaying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.IsPlaying");

	UPVideoImage_IsPlaying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UPVideoImage::IsPause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.IsPause");

	UPVideoImage_IsPause_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UPVideoImage::IsAlphaVideo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.IsAlphaVideo");

	UPVideoImage_IsAlphaVideo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UPVideoImage::GetYUVFormat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetYUVFormat");

	UPVideoImage_GetYUVFormat_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UPVideoImage::GetVideoTime(float* fCurTime, float* fTotalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetVideoTime");

	UPVideoImage_GetVideoTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (fCurTime != nullptr)
		*fCurTime = params.fCurTime;
	if (fTotalTime != nullptr)
		*fTotalTime = params.fTotalTime;
}








class UTexture2D* UPVideoImage::GetVideoTexture(int nIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetVideoTexture");

	UPVideoImage_GetVideoTexture_Params params;
	params.nIdx = nIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UPVideoImage::GetVideoAlpha()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetVideoAlpha");

	UPVideoImage_GetVideoAlpha_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FLinearColor UPVideoImage::GetRgbParameter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetRgbParameter");

	UPVideoImage_GetRgbParameter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UPVideoImage::GetResolution(int* nWidth, int* nHeight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetResolution");

	UPVideoImage_GetResolution_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (nWidth != nullptr)
		*nWidth = params.nWidth;
	if (nHeight != nullptr)
		*nHeight = params.nHeight;
}







int UPVideoImage::GetPlayStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetPlayStatus");

	UPVideoImage_GetPlayStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UPVideoImage::GetMediaType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetMediaType");

	UPVideoImage_GetMediaType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UPVideoImage::GetDuration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetDuration");

	UPVideoImage_GetDuration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UPVideoImage::GetCurrentPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetCurrentPosition");

	UPVideoImage_GetCurrentPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FLinearColor UPVideoImage::GetAlphaParameter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.GetAlphaParameter");

	UPVideoImage_GetAlphaParameter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UPVideoImage::EnableCacheResource(bool bEnable, const struct FString& cachePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.EnableCacheResource");

	UPVideoImage_EnableCacheResource_Params params;
	params.bEnable = bEnable;
	params.cachePath = cachePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPVideoImage::Close()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoImage.Close");

	UPVideoImage_Close_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}













bool UPVideoPlayerInterface::OnAudioDataUpdateCallback(TArray<unsigned char> AudioData, int Size, int Samples, int Channels, int sample_rate, float clock)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayerInterface.OnAudioDataUpdateCallback");

	UPVideoPlayerInterface_OnAudioDataUpdateCallback_Params params;
	params.AudioData = AudioData;
	params.Size = Size;
	params.Samples = Samples;
	params.Channels = Channels;
	params.sample_rate = sample_rate;
	params.clock = clock;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UPVideoPlayer::UseFileDelegate(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.UseFileDelegate");

	UPVideoPlayer_UseFileDelegate_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPVideoPlayer::Update()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.Update");

	UPVideoPlayer_Update_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoPlayer::SetVolume(int nVolume)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetVolume");

	UPVideoPlayer_SetVolume_Params params;
	params.nVolume = nVolume;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoPlayer::SetVideoAlpha(float fAlpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetVideoAlpha");

	UPVideoPlayer_SetVideoAlpha_Params params;
	params.fAlpha = fAlpha;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoPlayer::SetStopAsyn(int stopAsyn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetStopAsyn");

	UPVideoPlayer_SetStopAsyn_Params params;
	params.stopAsyn = stopAsyn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoPlayer::SetRate(float nRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetRate");

	UPVideoPlayer_SetRate_Params params;
	params.nRate = nRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoPlayer::SetOnlyPlayType(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetOnlyPlayType");

	UPVideoPlayer_SetOnlyPlayType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPVideoPlayer::SetNextVideo(const struct FString& strUrl, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetNextVideo");

	UPVideoPlayer_SetNextVideo_Params params;
	params.strUrl = strUrl;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoPlayer::SetNeedVideoTexture(bool bNeedVideoTexture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetNeedVideoTexture");

	UPVideoPlayer_SetNeedVideoTexture_Params params;
	params.bNeedVideoTexture = bNeedVideoTexture;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoPlayer::SetNeedPlayAudio(bool bNeedPlayAudio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetNeedPlayAudio");

	UPVideoPlayer_SetNeedPlayAudio_Params params;
	params.bNeedPlayAudio = bNeedPlayAudio;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UPVideoPlayer::SetMediaCodecMaxBufferGap(int maxBufferGap)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetMediaCodecMaxBufferGap");

	UPVideoPlayer_SetMediaCodecMaxBufferGap_Params params;
	params.maxBufferGap = maxBufferGap;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UPVideoPlayer::SetHardwareDecodec(bool bHareware)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetHardwareDecodec");

	UPVideoPlayer_SetHardwareDecodec_Params params;
	params.bHareware = bHareware;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UPVideoPlayer::SetDecryptionKey(const struct FString& decryptionKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetDecryptionKey");

	UPVideoPlayer_SetDecryptionKey_Params params;
	params.decryptionKey = decryptionKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UPVideoPlayer::SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetDataUpdateCallback");

	UPVideoPlayer_SetDataUpdateCallback_Params params;
	params.dataUpdateInterface = dataUpdateInterface;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoPlayer::SetCachePacketSize(int nSizeMb)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetCachePacketSize");

	UPVideoPlayer_SetCachePacketSize_Params params;
	params.nSizeMb = nSizeMb;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoPlayer::SetAutoPlay(bool bAutoPlay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SetAutoPlay");

	UPVideoPlayer_SetAutoPlay_Params params;
	params.bAutoPlay = bAutoPlay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoPlayer::SeekMs(int millisec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SeekMs");

	UPVideoPlayer_SeekMs_Params params;
	params.millisec = millisec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoPlayer::SeekAndPause(int nMilliSec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.SeekAndPause");

	UPVideoPlayer_SeekAndPause_Params params;
	params.nMilliSec = nMilliSec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoPlayer::Seek(int nSecond)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.Seek");

	UPVideoPlayer_Seek_Params params;
	params.nSecond = nSecond;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPVideoPlayer::Resume()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.Resume");

	UPVideoPlayer_Resume_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










int UPVideoPlayer::PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.PlayOnceAndLoopBetween");

	UPVideoPlayer_PlayOnceAndLoopBetween_Params params;
	params.strUrl = strUrl;
	params.nStartMs = nStartMs;
	params.nEndMs = nEndMs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UPVideoPlayer::Play(const struct FString& strUrl, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.Play");

	UPVideoPlayer_Play_Params params;
	params.strUrl = strUrl;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UPVideoPlayer::Pause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.Pause");

	UPVideoPlayer_Pause_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UPVideoPlayer::MediaPlayerEvent__DelegateSignature(int EventCode, int nParam1, int nParam2, const struct FString& strMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction PandoraVideoPlayer.PVideoPlayer.MediaPlayerEvent__DelegateSignature");

	UPVideoPlayer_MediaPlayerEvent__DelegateSignature_Params params;
	params.EventCode = EventCode;
	params.nParam1 = nParam1;
	params.nParam2 = nParam2;
	params.strMsg = strMsg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UPVideoPlayer::IsTextureUpdated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.IsTextureUpdated");

	UPVideoPlayer_IsTextureUpdated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UPVideoPlayer::IsPlaying()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.IsPlaying");

	UPVideoPlayer_IsPlaying_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UPVideoPlayer::IsPause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.IsPause");

	UPVideoPlayer_IsPause_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UPVideoPlayer::IsAlphaVideo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.IsAlphaVideo");

	UPVideoPlayer_IsAlphaVideo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UPVideoPlayer::InitPVideo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.InitPVideo");

	UPVideoPlayer_InitPVideo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UPVideoPlayer::GetYUVFormat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetYUVFormat");

	UPVideoPlayer_GetYUVFormat_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UPVideoPlayer::GetVideoTime(float* fCurTime, float* fTotalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetVideoTime");

	UPVideoPlayer_GetVideoTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (fCurTime != nullptr)
		*fCurTime = params.fCurTime;
	if (fTotalTime != nullptr)
		*fTotalTime = params.fTotalTime;
}








class UTexture2D* UPVideoPlayer::GetVideoTexture(int nIdx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetVideoTexture");

	UPVideoPlayer_GetVideoTexture_Params params;
	params.nIdx = nIdx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UPVideoPlayer::GetVideoAlpha()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetVideoAlpha");

	UPVideoPlayer_GetVideoAlpha_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FLinearColor UPVideoPlayer::GetRgbParameter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetRgbParameter");

	UPVideoPlayer_GetRgbParameter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UPVideoPlayer::GetResolution(int* nWidth, int* nHeight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetResolution");

	UPVideoPlayer_GetResolution_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (nWidth != nullptr)
		*nWidth = params.nWidth;
	if (nHeight != nullptr)
		*nHeight = params.nHeight;
}







float UPVideoPlayer::GetRate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetRate");

	UPVideoPlayer_GetRate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UPVideoPlayer::GetPlayStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetPlayStatus");

	UPVideoPlayer_GetPlayStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UPVideoPlayer::GetMediaType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetMediaType");

	UPVideoPlayer_GetMediaType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UPVideoPlayer::GetDuration()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetDuration");

	UPVideoPlayer_GetDuration_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UPVideoPlayer::GetCurrentPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetCurrentPosition");

	UPVideoPlayer_GetCurrentPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FLinearColor UPVideoPlayer::GetAlphaParameter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.GetAlphaParameter");

	UPVideoPlayer_GetAlphaParameter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UPVideoPlayer::EnableCacheResource(bool bEnable, const struct FString& cachePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.EnableCacheResource");

	UPVideoPlayer_EnableCacheResource_Params params;
	params.bEnable = bEnable;
	params.cachePath = cachePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPVideoPlayer::Close()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.Close");

	UPVideoPlayer_Close_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPVideoPlayer::ClearCacheResource(const struct FString& cachePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.ClearCacheResource");

	UPVideoPlayer_ClearCacheResource_Params params;
	params.cachePath = cachePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPVideoPlayer::BlueTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.BlueTick");

	UPVideoPlayer_BlueTick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPVideoPlayer::BeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.PVideoPlayer.BeginPlay");

	UPVideoPlayer_BeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UVideoPlayerWidget::VideoPlayerEvent__DelegateSignature(int nEvent, int nArg1, int nArg2, const struct FString& sMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction PandoraVideoPlayer.VideoPlayerWidget.VideoPlayerEvent__DelegateSignature");

	UVideoPlayerWidget_VideoPlayerEvent__DelegateSignature_Params params;
	params.nEvent = nEvent;
	params.nArg1 = nArg1;
	params.nArg2 = nArg2;
	params.sMsg = sMsg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVideoPlayerWidget::UseFileDelegate(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.UseFileDelegate");

	UVideoPlayerWidget_UseFileDelegate_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVideoPlayerWidget::SetVolume(int nVolume)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetVolume");

	UVideoPlayerWidget_SetVolume_Params params;
	params.nVolume = nVolume;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVideoPlayerWidget::SetVideoAlpha(float fAlpha)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetVideoAlpha");

	UVideoPlayerWidget_SetVideoAlpha_Params params;
	params.fAlpha = fAlpha;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVideoPlayerWidget::SetStopAsyn(int stopAsyn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetStopAsyn");

	UVideoPlayerWidget_SetStopAsyn_Params params;
	params.stopAsyn = stopAsyn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVideoPlayerWidget::SetRate(float nRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetRate");

	UVideoPlayerWidget_SetRate_Params params;
	params.nRate = nRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVideoPlayerWidget::SetOnlyPlayType(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetOnlyPlayType");

	UVideoPlayerWidget_SetOnlyPlayType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UVideoPlayerWidget::SetNextVideo(const struct FString& strUrl, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetNextVideo");

	UVideoPlayerWidget_SetNextVideo_Params params;
	params.strUrl = strUrl;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVideoPlayerWidget::SetNeedVideoTexture(bool needVideoTexture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetNeedVideoTexture");

	UVideoPlayerWidget_SetNeedVideoTexture_Params params;
	params.needVideoTexture = needVideoTexture;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVideoPlayerWidget::SetNeedPlayAudio(bool needPlayAudio)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetNeedPlayAudio");

	UVideoPlayerWidget_SetNeedPlayAudio_Params params;
	params.needPlayAudio = needPlayAudio;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UVideoPlayerWidget::SetMediaCodecMaxBufferGap(int maxBufferGap)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetMediaCodecMaxBufferGap");

	UVideoPlayerWidget_SetMediaCodecMaxBufferGap_Params params;
	params.maxBufferGap = maxBufferGap;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UVideoPlayerWidget::SetHardwareDecodec(bool bHardWare)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetHardwareDecodec");

	UVideoPlayerWidget_SetHardwareDecodec_Params params;
	params.bHardWare = bHardWare;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UVideoPlayerWidget::SetDecryptionKey(const struct FString& decryptionKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetDecryptionKey");

	UVideoPlayerWidget_SetDecryptionKey_Params params;
	params.decryptionKey = decryptionKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UVideoPlayerWidget::SetDataUpdateCallback(const TScriptInterface<class UPVideoPlayerInterface>& dataUpdateInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetDataUpdateCallback");

	UVideoPlayerWidget_SetDataUpdateCallback_Params params;
	params.dataUpdateInterface = dataUpdateInterface;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVideoPlayerWidget::SetAutoPlay(bool doAutoPlay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SetAutoPlay");

	UVideoPlayerWidget_SetAutoPlay_Params params;
	params.doAutoPlay = doAutoPlay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVideoPlayerWidget::SeekMs(int nMilliSec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SeekMs");

	UVideoPlayerWidget_SeekMs_Params params;
	params.nMilliSec = nMilliSec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVideoPlayerWidget::SeekAndPause(int nMilliSec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.SeekAndPause");

	UVideoPlayerWidget_SeekAndPause_Params params;
	params.nMilliSec = nMilliSec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVideoPlayerWidget::Seek(int nSecond)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.Seek");

	UVideoPlayerWidget_Seek_Params params;
	params.nSecond = nSecond;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVideoPlayerWidget::Resume()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.Resume");

	UVideoPlayerWidget_Resume_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









int UVideoPlayerWidget::PlayWithFd(int nFd, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.PlayWithFd");

	UVideoPlayerWidget_PlayWithFd_Params params;
	params.nFd = nFd;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










int UVideoPlayerWidget::PlayOnceAndLoopBetween(const struct FString& strUrl, int nStartMs, int nEndMs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.PlayOnceAndLoopBetween");

	UVideoPlayerWidget_PlayOnceAndLoopBetween_Params params;
	params.strUrl = strUrl;
	params.nStartMs = nStartMs;
	params.nEndMs = nEndMs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int UVideoPlayerWidget::Play1(const struct FString& strUrl, bool bLoop)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.Play1");

	UVideoPlayerWidget_Play1_Params params;
	params.strUrl = strUrl;
	params.bLoop = bLoop;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UVideoPlayerWidget::Pause()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.Pause");

	UVideoPlayerWidget_Pause_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UVideoPlayerWidget::OnPlayerEvent(int EventCode, int nParam1, int nParam2, const struct FString& strMsg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.OnPlayerEvent");

	UVideoPlayerWidget_OnPlayerEvent_Params params;
	params.EventCode = EventCode;
	params.nParam1 = nParam1;
	params.nParam2 = nParam2;
	params.strMsg = strMsg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







float UVideoPlayerWidget::GetVideoAlpha()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.GetVideoAlpha");

	UVideoPlayerWidget_GetVideoAlpha_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UVideoPlayerWidget::GetPlayStatus1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.GetPlayStatus1");

	UVideoPlayerWidget_GetPlayStatus1_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UVideoPlayerWidget::GetDuration1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.GetDuration1");

	UVideoPlayerWidget_GetDuration1_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UVideoPlayerWidget::GetCurrentPosition1()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.GetCurrentPosition1");

	UVideoPlayerWidget_GetCurrentPosition1_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UVideoPlayerWidget::EnableCacheResource(bool bEnable, const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.EnableCacheResource");

	UVideoPlayerWidget_EnableCacheResource_Params params;
	params.bEnable = bEnable;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVideoPlayerWidget::Close()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.Close");

	UVideoPlayerWidget_Close_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVideoPlayerWidget::ClearCacheResource(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraVideoPlayer.VideoPlayerWidget.ClearCacheResource");

	UVideoPlayerWidget_ClearCacheResource_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

