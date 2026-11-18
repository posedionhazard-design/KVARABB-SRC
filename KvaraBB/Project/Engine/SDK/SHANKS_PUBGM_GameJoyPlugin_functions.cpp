
 
#include "../SDK.hpp"

namespace SDK
{







void UBP_GameJoyPluginLibrary::WriteCaptureTextureToVideo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.WriteCaptureTextureToVideo");

	UBP_GameJoyPluginLibrary_WriteCaptureTextureToVideo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::UseBackbuffer(bool use)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.UseBackbuffer");

	UBP_GameJoyPluginLibrary_UseBackbuffer_Params params;
	params.use = use;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::UpdateRedDot(bool showRedDot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.UpdateRedDot");

	UBP_GameJoyPluginLibrary_UpdateRedDot_Params params;
	params.showRedDot = showRedDot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBP_GameJoyPluginLibrary::UnLockRecorderPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.UnLockRecorderPosition");

	UBP_GameJoyPluginLibrary_UnLockRecorderPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBP_GameJoyPluginLibrary::StopRecorder()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.StopRecorder");

	UBP_GameJoyPluginLibrary_StopRecorder_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UBP_GameJoyPluginLibrary::StartRecorder()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.StartRecorder");

	UBP_GameJoyPluginLibrary_StartRecorder_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBP_GameJoyPluginLibrary::ShowRecorderDialog(float X, float Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.ShowRecorderDialog");

	UBP_GameJoyPluginLibrary_ShowRecorderDialog_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBP_GameJoyPluginLibrary::ShowConsole()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.ShowConsole");

	UBP_GameJoyPluginLibrary_ShowConsole_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::SetWwiseListenerStatus(bool isMultiple)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetWwiseListenerStatus");

	UBP_GameJoyPluginLibrary_SetWwiseListenerStatus_Params params;
	params.isMultiple = isMultiple;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBP_GameJoyPluginLibrary::SetWatermark(const struct FString& Path, float X, float Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetWatermark");

	UBP_GameJoyPluginLibrary_SetWatermark_Params params;
	params.Path = Path;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBP_GameJoyPluginLibrary::SetVideoResolution(int Type, int Resolution)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetVideoResolution");

	UBP_GameJoyPluginLibrary_SetVideoResolution_Params params;
	params.Type = Type;
	params.Resolution = Resolution;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::SetVideoQuality(int Quality)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetVideoQuality");

	UBP_GameJoyPluginLibrary_SetVideoQuality_Params params;
	params.Quality = Quality;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBP_GameJoyPluginLibrary::SetVideoBitrate(int Type, int BitRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetVideoBitrate");

	UBP_GameJoyPluginLibrary_SetVideoBitrate_Params params;
	params.Type = Type;
	params.BitRate = BitRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBP_GameJoyPluginLibrary::SetShareRenderContext()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetShareRenderContext");

	UBP_GameJoyPluginLibrary_SetShareRenderContext_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::SetMinAvailableSpaceMB(int minAvailableSpaceMB)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetMinAvailableSpaceMB");

	UBP_GameJoyPluginLibrary_SetMinAvailableSpaceMB_Params params;
	params.minAvailableSpaceMB = minAvailableSpaceMB;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::SetLoggerLevel(int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetLoggerLevel");

	UBP_GameJoyPluginLibrary_SetLoggerLevel_Params params;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::SetGameUseRenderAPI(int api)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetGameUseRenderAPI");

	UBP_GameJoyPluginLibrary_SetGameUseRenderAPI_Params params;
	params.api = api;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::SetGameUseColorSpace(int colorSpace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetGameUseColorSpace");

	UBP_GameJoyPluginLibrary_SetGameUseColorSpace_Params params;
	params.colorSpace = colorSpace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::SetFrameRate(int FrameRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetFrameRate");

	UBP_GameJoyPluginLibrary_SetFrameRate_Params params;
	params.FrameRate = FrameRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::SetEnableBackbufferCallback(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetEnableBackbufferCallback");

	UBP_GameJoyPluginLibrary_SetEnableBackbufferCallback_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBP_GameJoyPluginLibrary::SetCoverSize(int Width, int Height)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetCoverSize");

	UBP_GameJoyPluginLibrary_SetCoverSize_Params params;
	params.Width = Width;
	params.Height = Height;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::SetCaptureTextureFlipY(bool flip)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetCaptureTextureFlipY");

	UBP_GameJoyPluginLibrary_SetCaptureTextureFlipY_Params params;
	params.flip = flip;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBP_GameJoyPluginLibrary::SetCaptureTexture(class UTextureRenderTarget2D* RenderTarget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetCaptureTexture");

	UBP_GameJoyPluginLibrary_SetCaptureTexture_Params params;
	params.RenderTarget = RenderTarget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBP_GameJoyPluginLibrary::SetCaptureSource(int CaptureSource)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetCaptureSource");

	UBP_GameJoyPluginLibrary_SetCaptureSource_Params params;
	params.CaptureSource = CaptureSource;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::SetAutoProfileLevel(bool Enabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetAutoProfileLevel");

	UBP_GameJoyPluginLibrary_SetAutoProfileLevel_Params params;
	params.Enabled = Enabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::SetAlbumName(const struct FString& albumName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.SetAlbumName");

	UBP_GameJoyPluginLibrary_SetAlbumName_Params params;
	params.albumName = albumName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBP_GameJoyPluginLibrary::RequestSDKPermission(int EventID, const struct FString& Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.RequestSDKPermission");

	UBP_GameJoyPluginLibrary_RequestSDKPermission_Params params;
	params.EventID = EventID;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::PxAuthSetSecretKey(const struct FString& SecretKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.PxAuthSetSecretKey");

	UBP_GameJoyPluginLibrary_PxAuthSetSecretKey_Params params;
	params.SecretKey = SecretKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBP_GameJoyPluginLibrary::PxAuthLogout()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.PxAuthLogout");

	UBP_GameJoyPluginLibrary_PxAuthLogout_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UBP_GameJoyPluginLibrary::PxAuthGetSdkVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.PxAuthGetSdkVersion");

	UBP_GameJoyPluginLibrary_PxAuthGetSdkVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBP_GameJoyPluginLibrary::OnPostRender()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.OnPostRender");

	UBP_GameJoyPluginLibrary_OnPostRender_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBP_GameJoyPluginLibrary::NotifySpaceNotEnough()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.NotifySpaceNotEnough");

	UBP_GameJoyPluginLibrary_NotifySpaceNotEnough_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBP_GameJoyPluginLibrary::MoveVideoToAlbum(int EventID, const struct FString& albumName, const struct FString& srcPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.MoveVideoToAlbum");

	UBP_GameJoyPluginLibrary_MoveVideoToAlbum_Params params;
	params.EventID = EventID;
	params.albumName = albumName;
	params.srcPath = srcPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBP_GameJoyPluginLibrary::MoveFileToDocument(const struct FString& fromPath, const struct FString& toSubPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.MoveFileToDocument");

	UBP_GameJoyPluginLibrary_MoveFileToDocument_Params params;
	params.fromPath = fromPath;
	params.toSubPath = toSubPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UBP_GameJoyPluginLibrary::MoveFile(struct FString* From, struct FString* dst)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.MoveFile");

	UBP_GameJoyPluginLibrary_MoveFile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (From != nullptr)
		*From = params.From;
	if (dst != nullptr)
		*dst = params.dst;

	return params.ReturnValue;
}









void UBP_GameJoyPluginLibrary::MoveAlbumToLocal(int EventID, const struct FString& albumPath, const struct FString& localPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.MoveAlbumToLocal");

	UBP_GameJoyPluginLibrary_MoveAlbumToLocal_Params params;
	params.EventID = EventID;
	params.albumPath = albumPath;
	params.localPath = localPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UBP_GameJoyPluginLibrary::MergeVideoWithImageAndVideo(int EventID, const struct FString& videoPath, const struct FString& headerVideo, const struct FString& ImagePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.MergeVideoWithImageAndVideo");

	UBP_GameJoyPluginLibrary_MergeVideoWithImageAndVideo_Params params;
	params.EventID = EventID;
	params.videoPath = videoPath;
	params.headerVideo = headerVideo;
	params.ImagePath = ImagePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBP_GameJoyPluginLibrary::LockRecorderPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.LockRecorderPosition");

	UBP_GameJoyPluginLibrary_LockRecorderPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UBP_GameJoyPluginLibrary::IsRecording()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsRecording");

	UBP_GameJoyPluginLibrary_IsRecording_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBP_GameJoyPluginLibrary::IsRecorderDialogShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsRecorderDialogShow");

	UBP_GameJoyPluginLibrary_IsRecorderDialogShow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBP_GameJoyPluginLibrary::IsIOSFileExist(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsIOSFileExist");

	UBP_GameJoyPluginLibrary_IsIOSFileExist_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBP_GameJoyPluginLibrary::IsFileExist(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsFileExist");

	UBP_GameJoyPluginLibrary_IsFileExist_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBP_GameJoyPluginLibrary::IsDirExist(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.IsDirExist");

	UBP_GameJoyPluginLibrary_IsDirExist_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UBP_GameJoyPluginLibrary::InitGameJoyBPLib()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.InitGameJoyBPLib");

	UBP_GameJoyPluginLibrary_InitGameJoyBPLib_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBP_GameJoyPluginLibrary::GetVideoMd5(int EventID, const struct FString& videoPathJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetVideoMd5");

	UBP_GameJoyPluginLibrary_GetVideoMd5_Params params;
	params.EventID = EventID;
	params.videoPathJson = videoPathJson;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBP_GameJoyPluginLibrary::GetVideoInfo(int EventID, const struct FString& videoPathJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetVideoInfo");

	UBP_GameJoyPluginLibrary_GetVideoInfo_Params params;
	params.EventID = EventID;
	params.videoPathJson = videoPathJson;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







int UBP_GameJoyPluginLibrary::GetTimeSeconds()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetTimeSeconds");

	UBP_GameJoyPluginLibrary_GetTimeSeconds_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBP_GameJoyPluginLibrary::GetTimeMilliSeconds()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetTimeMilliSeconds");

	UBP_GameJoyPluginLibrary_GetTimeMilliSeconds_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UBP_GameJoyPluginLibrary::GetSDKVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetSDKVersion");

	UBP_GameJoyPluginLibrary_GetSDKVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBP_GameJoyPluginLibrary::GetSandboxPath(int EventID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetSandboxPath");

	UBP_GameJoyPluginLibrary_GetSandboxPath_Params params;
	params.EventID = EventID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UBP_GameJoyPluginLibrary::GetRecorderPosition()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetRecorderPosition");

	UBP_GameJoyPluginLibrary_GetRecorderPosition_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UBP_GameJoyPluginLibrary::GetPaths(int pathType, bool Relative)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetPaths");

	UBP_GameJoyPluginLibrary_GetPaths_Params params;
	params.pathType = pathType;
	params.Relative = Relative;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UBP_GameJoyPluginLibrary::GetPathRelativeTo(const struct FString& fromPath, const struct FString& relativeTo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetPathRelativeTo");

	UBP_GameJoyPluginLibrary_GetPathRelativeTo_Params params;
	params.fromPath = fromPath;
	params.relativeTo = relativeTo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UBP_GameJoyPluginLibrary* UBP_GameJoyPluginLibrary::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetInstance");

	UBP_GameJoyPluginLibrary_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UBP_GameJoyPluginLibrary::GetGFilePathBase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetGFilePathBase");

	UBP_GameJoyPluginLibrary_GetGFilePathBase_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBP_GameJoyPluginLibrary::GetFreeDiskSpace()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFreeDiskSpace");

	UBP_GameJoyPluginLibrary_GetFreeDiskSpace_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UBP_GameJoyPluginLibrary::GetFilesInDir(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFilesInDir");

	UBP_GameJoyPluginLibrary_GetFilesInDir_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UBP_GameJoyPluginLibrary::GetFilesFromPath(int EventID, const struct FString& Path, bool isIncludeChildren)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFilesFromPath");

	UBP_GameJoyPluginLibrary_GetFilesFromPath_Params params;
	params.EventID = EventID;
	params.Path = Path;
	params.isIncludeChildren = isIncludeChildren;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








struct FString UBP_GameJoyPluginLibrary::GetFilePathFromUri(const struct FString& uriPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFilePathFromUri");

	UBP_GameJoyPluginLibrary_GetFilePathFromUri_Params params;
	params.uriPath = uriPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UBP_GameJoyPluginLibrary::GetFdFromUri(const struct FString& uri)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetFdFromUri");

	UBP_GameJoyPluginLibrary_GetFdFromUri_Params params;
	params.uri = uri;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UBP_GameJoyPluginLibrary::GetDeviceInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetDeviceInfo");

	UBP_GameJoyPluginLibrary_GetDeviceInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBP_GameJoyPluginLibrary::GetCaptureSource()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GetCaptureSource");

	UBP_GameJoyPluginLibrary_GetCaptureSource_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBP_GameJoyPluginLibrary::GenerateVideoCover(int EventID, const struct FString& videoPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GenerateVideoCover");

	UBP_GameJoyPluginLibrary_GenerateVideoCover_Params params;
	params.EventID = EventID;
	params.videoPath = videoPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::GenerateMomentsVideo(const struct FString& videoTimeStampListJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.GenerateMomentsVideo");

	UBP_GameJoyPluginLibrary_GenerateMomentsVideo_Params params;
	params.videoTimeStampListJson = videoTimeStampListJson;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::EnableInGameAudio(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.EnableInGameAudio");

	UBP_GameJoyPluginLibrary_EnableInGameAudio_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::EnableCodecHighProfile(bool Enabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.EnableCodecHighProfile");

	UBP_GameJoyPluginLibrary_EnableCodecHighProfile_Params params;
	params.Enabled = Enabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::EnableBgmMix(bool mixing)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.EnableBgmMix");

	UBP_GameJoyPluginLibrary_EnableBgmMix_Params params;
	params.mixing = mixing;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBP_GameJoyPluginLibrary::DeleteVideoByAlbum(int EventID, const struct FString& albumName, const struct FString& srcPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.DeleteVideoByAlbum");

	UBP_GameJoyPluginLibrary_DeleteVideoByAlbum_Params params;
	params.EventID = EventID;
	params.albumName = albumName;
	params.srcPath = srcPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBP_GameJoyPluginLibrary::DeInitGameJoyBPLib()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.DeInitGameJoyBPLib");

	UBP_GameJoyPluginLibrary_DeInitGameJoyBPLib_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UBP_GameJoyPluginLibrary::CopyFile(struct FString* From, struct FString* dst)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.CopyFile");

	UBP_GameJoyPluginLibrary_CopyFile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (From != nullptr)
		*From = params.From;
	if (dst != nullptr)
		*dst = params.dst;

	return params.ReturnValue;
}





void UBP_GameJoyPluginLibrary::CloseRecorderDialog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.CloseRecorderDialog");

	UBP_GameJoyPluginLibrary_CloseRecorderDialog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UBP_GameJoyPluginLibrary::CloseFd(int fd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.CloseFd");

	UBP_GameJoyPluginLibrary_CloseFd_Params params;
	params.fd = fd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBP_GameJoyPluginLibrary::ClipVideo(int EventID, const struct FString& videoEditJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.ClipVideo");

	UBP_GameJoyPluginLibrary_ClipVideo_Params params;
	params.EventID = EventID;
	params.videoEditJson = videoEditJson;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBP_GameJoyPluginLibrary::CleanWorkFolders(int Level)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.CleanWorkFolders");

	UBP_GameJoyPluginLibrary_CleanWorkFolders_Params params;
	params.Level = Level;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UBP_GameJoyPluginLibrary::CheckSDKPermission(const struct FString& Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.CheckSDKPermission");

	UBP_GameJoyPluginLibrary_CheckSDKPermission_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBP_GameJoyPluginLibrary::CheckAlbumVideoExist(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GameJoyPlugin.BP_GameJoyPluginLibrary.CheckAlbumVideoExist");

	UBP_GameJoyPluginLibrary_CheckAlbumVideoExist_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

