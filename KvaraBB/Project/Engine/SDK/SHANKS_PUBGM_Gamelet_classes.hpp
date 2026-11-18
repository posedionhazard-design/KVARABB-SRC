#pragma once


 
namespace SDK
{






class UGamelet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.Gamelet");
		return pStaticClass;
	}


	int UpdateProductConfig();
	static void StopTick();
	static void StartTick();
	static void SetTickIntervalSec(float TickIntervalSec);
	int SetScriptExternalLoadDir(const struct FString& ExternalLoadDir);
	int SetFont(const struct FString& FontName, const struct FString& FontPath);
	int SetDefaultFont(const struct FString& FontName);
	int SetBuiltinResConfig(const struct FString& ResConfig);
	int SetAppVisibility(const struct FString& AppID, bool Visible);
	int SetAppPageVisibility(const struct FString& AppID, const struct FString& AppPage, bool Visible);
	int SendMessageToSdk(const struct FString& Msg);
	int SendMessageToApp(const struct FString& AppID, const struct FString& Msg);
	int RefreshUserdata(TMap<struct FString, struct FString> UserData);
	int OpenBeforeLoginWithGameVersion(TEnumAsByte<EGameletEnvironment> Environment, const struct FString& GameVersion);
	int OpenBeforeLogin(TEnumAsByte<EGameletEnvironment> Environment);
	int OpenApp(const struct FString& AppID, const struct FString& OpenArgs);
	int Open(TEnumAsByte<EGameletEnvironment> Environment, TMap<struct FString, struct FString> UserData);
	int Initialize(class UGameletSettings* Settings);
	static struct FString GetProductConfig();
	bool GetIsProductEnvironment();
	class UGameletSettings* GetGlobalSettings();
	int GetBackTrace(struct FString* TraceInfo);
	static class UGamelet* Get();
	int ExecOnSDKMessage(const struct FString& Msg);
	int ExecOnReportData(const struct FString& EventName, const struct FString& Data);
	int ExecOnRefreshUserdata();
	void EnableLog(bool Enable);
	int Deinitialize();
	void CollectPixUILogOutput(EPxLogGroups PixUILogType, EPxLogLevels PixUILogLevel, const struct FString& logContent);
	int CloseAppPage(const struct FString& AppID, const struct FString& AppPage);
	int CloseApp(const struct FString& AppID);
	int Close();
	int AllAssetsGC();
};




class UGameletMatBrush : public UPixUIBrushWrapper
{
public:
	class UMaterialInstanceDynamic*                    MatInstance;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletMatBrush");
		return pStaticClass;
	}

};




class UGameletEnvMgr : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletEnvMgr");
		return pStaticClass;
	}


	int OnEnvToGameMessage(const struct FString& Msg);
	int OnEnvToEntryMessage(const struct FString& Msg);
	int OnEnvReportData(const struct FString& EventName, const struct FString& Data);
	int OnEnvRefreshUserdata();
	void OnEnvLoaded(const struct FString& URL, int ErrorCode);
	void OnEnvInternalError(int ErrorCode, const struct FString& ErrorMsg);
	struct FString GetBackTrace();
};




class UGameletFile : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletFile");
		return pStaticClass;
	}


	static bool WriteFile(const struct FString& Path, const struct FGameletArrayBuffer& ArrayBuffer);
	static bool SaveStringToFile(const struct FString& Path, const struct FString& Content);
	static struct FGameletArrayBuffer ReadFile(const struct FString& Path);
	static struct FString LoadFileToString(const struct FString& Path);
	static struct FString GetFileMd5(const struct FString& Path);
	static int64_t FileSize(const struct FString& Path);
	static bool FileExists(const struct FString& Path);
	static bool DirectoryExists(const struct FString& Path);
	static bool DeleteFile(const struct FString& Path);
	static bool DeleteDirectory(const struct FString& Path);
	static bool CreateDirectory(const struct FString& Path);
};




class UGameletPaths : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletPaths");
		return pStaticClass;
	}


	static struct FString ToAbsolutePathForWrite(const struct FString& Path);
	static struct FString ToAbsolutePathForRead(const struct FString& Path);
	static struct FString RootDir();
	static struct FString ProjectUserDir();
	static struct FString ProjectSavedDir();
	static struct FString ProjectModsDir();
	static struct FString ProjectIntermediateDir();
	static struct FString ProjectDir();
	static struct FString ProjectContentDir();
	static struct FString ProjectConfigDir();
	static struct FString LaunchDir();
	static struct FString GetPuertsScriptFolderName();
	static struct FString GetPuertsEntrancePath(const struct FString& PakName);
	static struct FString GetPuertsAppScriptPath(const struct FString& AppFolderName);
	static struct FString GetPuertsAppNameByPakName(const struct FString& PakName);
	static struct FString GetPuertsAppIndexPath(const struct FString& AppFolderName);
	static struct FString GameletSavedRoot();
	static struct FString GameletFolderName();
	static struct FString GameletContentRoot();
	static struct FString GameletAppArchiveRoot(const struct FString& AppID);
};




class UGameletPuertsEnvMgr : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPostMessage;                                            
	unsigned char                                      UnknownData00[0x60];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletPuertsEnvMgr");
		return pStaticClass;
	}


	void OnEnvScriptStateInit();
	void OnEnvMessage(const struct FString& Msg);
	void OnEnvLoaded(const struct FString& URL, int ErrorCode);
	static class UGameletPuertsEnvMgr* Get();
};




class UGameletPuertsUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletPuertsUtilities");
		return pStaticClass;
	}


	static void UpdateTextureResources(class UTexture2D* Texture);
	static int UnmountPak(const struct FString& pakPath);
	static void RemoveUserWidgetFromGame(class UUserWidget* UserWidget, const struct FString& PanelInfo);
	static void ReleaseTextureResource(class UTexture2D* Texture);
	static int MountPak(const struct FString& pakPath);
	static class UUserWidget* LoadUI(const struct FString& Ref, class UObject* Obj);
	static class UTexture2D* LoadImageToTexture2D(const struct FString& Path, TEnumAsByte<ETextureGroup> LODGroup, unsigned char IsSRGB);
	static bool IsWithEditor();
	static void HelloWorld();
	static class UWidgetAnimation* GetWidgetAnimationByName(class UUserWidget* Widget, const struct FString& Name);
	static struct FString GetSDKVersion();
	static struct FString GetPlatformDesc();
	static unsigned char GetNetworkType();
	static bool GetIsProductEnvironment();
	static struct FString GetHardwareInfo();
	static struct FString GetEngineVersion();
	static void FlushPuertsVMMessages();
	static void CallCommonFunc(const struct FString& Type, const struct FString& ParamJson, class UWidget* Widget, const struct FScriptDelegate& Callback);
	static void AddUserWidgetToGame(class UUserWidget* UserWidget, const struct FString& PanelInfo);
};




class UGameletSettings : public UObject
{
public:
	struct FScriptDelegate                             OnSDKMessage;                                             
	struct FScriptDelegate                             OnRefreshUserdata;                                        
	struct FScriptDelegate                             OnViewCreated;                                            
	struct FScriptDelegate                             OnViewAboutToDestroy;                                     
	struct FScriptDelegate                             OnReportData;                                             
	struct FScriptDelegate                             OnProfileJSSDKMessage;                                    
	struct FScriptDelegate                             OnPuertsCommonFuncDelegate;                               
	bool                                               DisableJsErrReport;                                       
	bool                                               DisableGetBackTrace;                                      
	bool                                               DelayWndCallMsg;                                          
	bool                                               SupportUseEngineFont;                                     
	bool                                               UseSRGB;                                                  
	bool                                               ForbiddenSyncServerLogConf;                               
	unsigned char                                      UnknownData00[0x2];                                       
	struct FScriptDelegate                             OnCoreCodeLoad;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletSettings");
		return pStaticClass;
	}


	bool IsValidSetting();
	static class UGameletSettings* Get();
};




class UGameletWidget : public UCanvasPanel
{
public:
	unsigned char                                      UnknownData00[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletWidget");
		return pStaticClass;
	}


	void SetWidgetOffset(const struct FMargin& OffsetData);
	void SetWidgetAnchor(const struct FAnchors& AnchorData);
	void SetUseSRGB(bool EnableSRGB);
	void SetRHIConfigured(bool Configured);
	void SetBackgroundWidgetOffset(const struct FMargin& OffsetData);
	void SetBackgroundWidgetAnchor(const struct FAnchors& AnchorData);
	void SetBackgroundImage(const struct FString& ImagePath);
	TWeakObjectPtr<class UPixUIWidget> GetPixUIWidget();
};




class UGameletWindow : public UObject
{
public:
	unsigned char                                      UnknownData00[0x148];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gamelet.GameletWindow");
		return pStaticClass;
	}


	void OnPxWidgetScriptStateInit();
	void OnPxWidgetScriptStateDone();
	bool OnPxWidgetRequestOpen(const struct FString& URL, const struct FString& Name, const struct FString& Features, bool bReplace);
	void OnPxWidgetMessage(const struct FString& Msg);
	void OnPxWidgetLoaded(const struct FString& URL, int ErrorCode);
	void OnPxWidgetInternalError(int ErrorCode, const struct FString& ErrorMsg);
	void OnPxWidgetClose();
};


}

