#pragma once


 
namespace SDK
{






class UFilePicker : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnFileSelectionComplete;                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.FilePicker");
		return pStaticClass;
	}


	static void UnInitialize();
	bool OpenFilePicker(const struct FString& InParamJson);
	void Initialize();
	static class UFilePicker* GetInstance();
	void FileSelectionCompleteDelegate__DelegateSignature(const struct FString& ResultJson);
};




class UFirebaseHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.FirebaseHelper");
		return pStaticClass;
	}


	void SetFirebaseDebugMode(bool bEnable);
	void SetConsent(TMap<int, int> InConsent);
	bool IsNotificationLaunchApp();
	bool IsFirebaseDebugMode();
	struct FString GetNotificationLaunchAppExtraData(const struct FString& InKey);
	static class UFirebaseHelper* GetInstance();
	struct FString GetFIRInstallId();
	struct FString GetFIRAppInstanceId();
	struct FString GetFCMToken();
	void ConsumeNotificationLaunchApp();
};




class UFirebaseRemoteConfigImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<struct FString>                             QueryConfigNamesArray;                                    
	unsigned char                                      UnknownData01[0xA0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.FirebaseRemoteConfigImpl");
		return pStaticClass;
	}


	EQFirebaseRemoteConfigStatus GetStatus();
	struct FString GetRemoteConfig(const struct FString& ConfigNameToQuery);
	static class UFirebaseRemoteConfigImpl* GetInstance();
};




class ULocationHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    LocationCompleteCallback;                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.LocationHelper");
		return pStaticClass;
	}


	void QueryLocation(int InTimeout);
	void Initialize();
	static class ULocationHelper* GetInstance();
	void Destroy();
};




class UPhotoAlbumHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    FetchAlbumImageInfoCompleteCallback;                      
	struct FScriptMulticastDelegate                    GenerateImageFromAlbumCompleteCallback;                   
	struct FScriptMulticastDelegate                    ScreenCapturedCompleteCallback;                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.PhotoAlbumHelper");
		return pStaticClass;
	}


	void UnRegisterScreenCaptureListener();
	void RegisterScreenCaptureListener(const struct FString& InScreenshotFolders, const struct FString& InScreenshotMimeTypes);
	void Initialize();
	static class UPhotoAlbumHelper* GetInstance();
	int GenerateImageFromAlbum(const struct FString& InFilePath, const struct FString& InThumbFilePath, int InThumbnailWidth, int InThumbnailHeight, bool InForceJPG, bool InOverride);
	void FetchAlbumImageInfo(int InStartIndex, int InLimitNum, int InThumbWidth, int InThumbHeight, const struct FString& InThumbPath, const struct FString& InExtraJson);
};




class UStoreKit : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.StoreKit");
		return pStaticClass;
	}


	static void RequestReview(bool bForceOpenStoreInTestEnv);
	static void OpenStorePage(const struct FString& storeParam);
	static void GetCountryCode(const struct FScriptDelegate& Callback);
};




class USystemPermissionHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    RequestPermissionResultCallback;                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.SystemPermissionHelper");
		return pStaticClass;
	}


	bool RequestPermissions(int InPermissionType, int InRequestCode);
	bool IsPermissionGranted(int InPermissionType);
	void Initialize();
	int GetPermissionStatus(int InPermissionType);
	static class USystemPermissionHelper* GetInstance();
	bool AndroidShouldShowRequestPermissionRationale(const struct FString& InPermission);
	bool AndroidRequestPermissions(const struct FString& InPermission, int InRequestCode);
	bool AndroidIsPermissionGranted(const struct FString& InPermission);
	bool AndroidHasDefinePermission(const struct FString& InPermssionName);
};




class UTouchTransmission : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnTransmissionComplete;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class QDevKit.TouchTransmission");
		return pStaticClass;
	}


	static void UnInitialize();
	void TransmissionCompleteDelegate__DelegateSignature(const struct FString& ResultJson);
	void Initialize();
	bool HandleReceivedPakFiles(const struct FString& InParamJson);
	struct FString GetTransmissionRawJsonContent();
	static class UTouchTransmission* GetInstance();
};


}

