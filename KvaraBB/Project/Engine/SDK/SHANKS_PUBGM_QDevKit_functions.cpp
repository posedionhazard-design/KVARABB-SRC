
 
#include "../SDK.hpp"

namespace SDK
{







void UFilePicker::UnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FilePicker.UnInitialize");

	UFilePicker_UnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UFilePicker::OpenFilePicker(const struct FString& InParamJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FilePicker.OpenFilePicker");

	UFilePicker_OpenFilePicker_Params params;
	params.InParamJson = InParamJson;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UFilePicker::Initialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FilePicker.Initialize");

	UFilePicker_Initialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UFilePicker* UFilePicker::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FilePicker.GetInstance");

	UFilePicker_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UFilePicker::FileSelectionCompleteDelegate__DelegateSignature(const struct FString& ResultJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction QDevKit.FilePicker.FileSelectionCompleteDelegate__DelegateSignature");

	UFilePicker_FileSelectionCompleteDelegate__DelegateSignature_Params params;
	params.ResultJson = ResultJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UFirebaseHelper::SetFirebaseDebugMode(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FirebaseHelper.SetFirebaseDebugMode");

	UFirebaseHelper_SetFirebaseDebugMode_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UFirebaseHelper::SetConsent(TMap<int, int> InConsent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FirebaseHelper.SetConsent");

	UFirebaseHelper_SetConsent_Params params;
	params.InConsent = InConsent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UFirebaseHelper::IsNotificationLaunchApp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FirebaseHelper.IsNotificationLaunchApp");

	UFirebaseHelper_IsNotificationLaunchApp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UFirebaseHelper::IsFirebaseDebugMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FirebaseHelper.IsFirebaseDebugMode");

	UFirebaseHelper_IsFirebaseDebugMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UFirebaseHelper::GetNotificationLaunchAppExtraData(const struct FString& InKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FirebaseHelper.GetNotificationLaunchAppExtraData");

	UFirebaseHelper_GetNotificationLaunchAppExtraData_Params params;
	params.InKey = InKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UFirebaseHelper* UFirebaseHelper::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FirebaseHelper.GetInstance");

	UFirebaseHelper_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UFirebaseHelper::GetFIRInstallId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FirebaseHelper.GetFIRInstallId");

	UFirebaseHelper_GetFIRInstallId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UFirebaseHelper::GetFIRAppInstanceId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FirebaseHelper.GetFIRAppInstanceId");

	UFirebaseHelper_GetFIRAppInstanceId_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UFirebaseHelper::GetFCMToken()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FirebaseHelper.GetFCMToken");

	UFirebaseHelper_GetFCMToken_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UFirebaseHelper::ConsumeNotificationLaunchApp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FirebaseHelper.ConsumeNotificationLaunchApp");

	UFirebaseHelper_ConsumeNotificationLaunchApp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







EQFirebaseRemoteConfigStatus UFirebaseRemoteConfigImpl::GetStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FirebaseRemoteConfigImpl.GetStatus");

	UFirebaseRemoteConfigImpl_GetStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FString UFirebaseRemoteConfigImpl::GetRemoteConfig(const struct FString& ConfigNameToQuery)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FirebaseRemoteConfigImpl.GetRemoteConfig");

	UFirebaseRemoteConfigImpl_GetRemoteConfig_Params params;
	params.ConfigNameToQuery = ConfigNameToQuery;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UFirebaseRemoteConfigImpl* UFirebaseRemoteConfigImpl::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.FirebaseRemoteConfigImpl.GetInstance");

	UFirebaseRemoteConfigImpl_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ULocationHelper::QueryLocation(int InTimeout)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.LocationHelper.QueryLocation");

	ULocationHelper_QueryLocation_Params params;
	params.InTimeout = InTimeout;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ULocationHelper::Initialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.LocationHelper.Initialize");

	ULocationHelper_Initialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class ULocationHelper* ULocationHelper::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.LocationHelper.GetInstance");

	ULocationHelper_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void ULocationHelper::Destroy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.LocationHelper.Destroy");

	ULocationHelper_Destroy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotoAlbumHelper::UnRegisterScreenCaptureListener()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.PhotoAlbumHelper.UnRegisterScreenCaptureListener");

	UPhotoAlbumHelper_UnRegisterScreenCaptureListener_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPhotoAlbumHelper::RegisterScreenCaptureListener(const struct FString& InScreenshotFolders, const struct FString& InScreenshotMimeTypes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.PhotoAlbumHelper.RegisterScreenCaptureListener");

	UPhotoAlbumHelper_RegisterScreenCaptureListener_Params params;
	params.InScreenshotFolders = InScreenshotFolders;
	params.InScreenshotMimeTypes = InScreenshotMimeTypes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotoAlbumHelper::Initialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.PhotoAlbumHelper.Initialize");

	UPhotoAlbumHelper_Initialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UPhotoAlbumHelper* UPhotoAlbumHelper::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.PhotoAlbumHelper.GetInstance");

	UPhotoAlbumHelper_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}













int UPhotoAlbumHelper::GenerateImageFromAlbum(const struct FString& InFilePath, const struct FString& InThumbFilePath, int InThumbnailWidth, int InThumbnailHeight, bool InForceJPG, bool InOverride)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.PhotoAlbumHelper.GenerateImageFromAlbum");

	UPhotoAlbumHelper_GenerateImageFromAlbum_Params params;
	params.InFilePath = InFilePath;
	params.InThumbFilePath = InThumbFilePath;
	params.InThumbnailWidth = InThumbnailWidth;
	params.InThumbnailHeight = InThumbnailHeight;
	params.InForceJPG = InForceJPG;
	params.InOverride = InOverride;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












void UPhotoAlbumHelper::FetchAlbumImageInfo(int InStartIndex, int InLimitNum, int InThumbWidth, int InThumbHeight, const struct FString& InThumbPath, const struct FString& InExtraJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.PhotoAlbumHelper.FetchAlbumImageInfo");

	UPhotoAlbumHelper_FetchAlbumImageInfo_Params params;
	params.InStartIndex = InStartIndex;
	params.InLimitNum = InLimitNum;
	params.InThumbWidth = InThumbWidth;
	params.InThumbHeight = InThumbHeight;
	params.InThumbPath = InThumbPath;
	params.InExtraJson = InExtraJson;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UStoreKit::RequestReview(bool bForceOpenStoreInTestEnv)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.StoreKit.RequestReview");

	UStoreKit_RequestReview_Params params;
	params.bForceOpenStoreInTestEnv = bForceOpenStoreInTestEnv;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UStoreKit::OpenStorePage(const struct FString& storeParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.StoreKit.OpenStorePage");

	UStoreKit_OpenStorePage_Params params;
	params.storeParam = storeParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UStoreKit::GetCountryCode(const struct FScriptDelegate& Callback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.StoreKit.GetCountryCode");

	UStoreKit_GetCountryCode_Params params;
	params.Callback = Callback;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool USystemPermissionHelper::RequestPermissions(int InPermissionType, int InRequestCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.SystemPermissionHelper.RequestPermissions");

	USystemPermissionHelper_RequestPermissions_Params params;
	params.InPermissionType = InPermissionType;
	params.InRequestCode = InRequestCode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool USystemPermissionHelper::IsPermissionGranted(int InPermissionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.SystemPermissionHelper.IsPermissionGranted");

	USystemPermissionHelper_IsPermissionGranted_Params params;
	params.InPermissionType = InPermissionType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void USystemPermissionHelper::Initialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.SystemPermissionHelper.Initialize");

	USystemPermissionHelper_Initialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int USystemPermissionHelper::GetPermissionStatus(int InPermissionType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.SystemPermissionHelper.GetPermissionStatus");

	USystemPermissionHelper_GetPermissionStatus_Params params;
	params.InPermissionType = InPermissionType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class USystemPermissionHelper* USystemPermissionHelper::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.SystemPermissionHelper.GetInstance");

	USystemPermissionHelper_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool USystemPermissionHelper::AndroidShouldShowRequestPermissionRationale(const struct FString& InPermission)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.SystemPermissionHelper.AndroidShouldShowRequestPermissionRationale");

	USystemPermissionHelper_AndroidShouldShowRequestPermissionRationale_Params params;
	params.InPermission = InPermission;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool USystemPermissionHelper::AndroidRequestPermissions(const struct FString& InPermission, int InRequestCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.SystemPermissionHelper.AndroidRequestPermissions");

	USystemPermissionHelper_AndroidRequestPermissions_Params params;
	params.InPermission = InPermission;
	params.InRequestCode = InRequestCode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool USystemPermissionHelper::AndroidIsPermissionGranted(const struct FString& InPermission)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.SystemPermissionHelper.AndroidIsPermissionGranted");

	USystemPermissionHelper_AndroidIsPermissionGranted_Params params;
	params.InPermission = InPermission;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool USystemPermissionHelper::AndroidHasDefinePermission(const struct FString& InPermssionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.SystemPermissionHelper.AndroidHasDefinePermission");

	USystemPermissionHelper_AndroidHasDefinePermission_Params params;
	params.InPermssionName = InPermssionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UTouchTransmission::UnInitialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.TouchTransmission.UnInitialize");

	UTouchTransmission_UnInitialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UTouchTransmission::TransmissionCompleteDelegate__DelegateSignature(const struct FString& ResultJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction QDevKit.TouchTransmission.TransmissionCompleteDelegate__DelegateSignature");

	UTouchTransmission_TransmissionCompleteDelegate__DelegateSignature_Params params;
	params.ResultJson = ResultJson;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UTouchTransmission::Initialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.TouchTransmission.Initialize");

	UTouchTransmission_Initialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UTouchTransmission::HandleReceivedPakFiles(const struct FString& InParamJson)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.TouchTransmission.HandleReceivedPakFiles");

	UTouchTransmission_HandleReceivedPakFiles_Params params;
	params.InParamJson = InParamJson;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UTouchTransmission::GetTransmissionRawJsonContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.TouchTransmission.GetTransmissionRawJsonContent");

	UTouchTransmission_GetTransmissionRawJsonContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UTouchTransmission* UTouchTransmission::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function QDevKit.TouchTransmission.GetInstance");

	UTouchTransmission_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

