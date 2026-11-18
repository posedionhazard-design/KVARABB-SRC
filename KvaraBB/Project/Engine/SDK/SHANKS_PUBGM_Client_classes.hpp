#pragma once


 
namespace SDK
{






class UAppBaseConfig : public UObject
{
public:
	int                                                PUBLISH_REGION_ID;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     PUBLISH_AREA;                                             
	struct FString                                     IMSDK_GAME_ID;                                            
	struct FString                                     GEMAppID;                                                 
	uint32_t                                           TSSGameId;                                                
	unsigned char                                      UnknownData01[0x4];                                       
	uint64_t                                           GameID;                                                   
	struct FString                                     GameKey;                                                  
	uint64_t                                           VoiceSdkGameId;                                           
	struct FString                                     VoiceSdkGameKey;                                          
	struct FString                                     APPID_FACEBOOK;                                           
	struct FString                                     APPID_APPLE;                                              
	struct FString                                     APPID_GOOGLE;                                             
	struct FString                                     APPID_TWITTER;                                            
	struct FString                                     APPID_NosCHAT;                                            
	struct FString                                     APPID_VK;                                                 
	struct FString                                     APPID_LINE;                                               
	struct FString                                     APPID_BgBg;                                               
	struct FString                                     GUID_GAMEMASTER;                                          
	struct FString                                     GEMCtrlURL;                                               
	struct FString                                     TMFPCtrlURL;                                              
	int                                                SubsideFeatureLevel;                                      
	unsigned char                                      UnknownData02[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AppBaseConfig");
		return pStaticClass;
	}

};




class UAsyncLoadHelper : public UObject
{
public:
	TMap<struct FString, class UObject*>               PreloadObjectMap;                                         
	unsigned char                                      UnknownData00[0x68];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncLoadHelper");
		return pStaticClass;
	}


	void SetMaxTaskNum(int Num);
	void RunNextTask();
	void OnLoadCallBack(const struct FSoftObjectPath& softObjPath);
	void ClearOneTask(const struct FString& ObjectPath);
	void ClearAllTask();
	void AddTask(const struct FString& ObjectPath, int LoadPriority);
};




class UAsyncLoadWidgetBlueprint : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    BeforeLoad;                                               
	struct FScriptMulticastDelegate                    AfterLoad;                                                
	struct FScriptMulticastDelegate                    OnCancelled;                                              
	unsigned char                                      UnknownData00[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncLoadWidgetBlueprint");
		return pStaticClass;
	}


	void Cancel();
	static class UAsyncLoadWidgetBlueprint* AsyncLoadWidgetBlueprint(const struct FString& BlueprintPath, int Priority);
	void AfterLoadCallback(struct FSoftObjectPath* SoftObjectPath);
	void Activate();
};




class UAsyncTaskCDNDownloader : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      
	struct FScriptMulticastDelegate                    onRequestHandler;                                         
	unsigned char                                      UnknownData01[0x30];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncTaskCDNDownloader");
		return pStaticClass;
	}


	static class UAsyncTaskCDNDownloader* DownloadCDNContent(const struct FString& URL, int loaderType, const struct FString& savedDir, bool breakpointContinualTransfer);
};




class UAsyncTaskDownloader : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      
	struct FScriptMulticastDelegate                    onRequestHandler;                                         
	unsigned char                                      UnknownData01[0x30];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncTaskDownloader");
		return pStaticClass;
	}


	static class UAsyncTaskDownloader* DownloadContent(const struct FString& URL, int loaderType, const struct FString& savedDir, bool breakpointContinualTransfer);
};




class UBattleScriptHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleScriptHelper");
		return pStaticClass;
	}


	static uint32_t SyncNewBattlePlayer(class UBattleUtils* Utils, uint64_t UID, const struct FPlayerInfoData& Info);
	static void SyncGameInfo(class UBattleUtils* Utils, const struct FBattleGameInfo& Info);
	static void SyncGameExit(class UBattleUtils* Utils);
	static void SyncBattlePlayerExit(class UBattleUtils* Utils, uint64_t UID, const struct FName& PlayerType, const struct FString& Reason);
	static void ResponPlayerWeaponDIYData(class UBattleUtils* Utils, uint64_t PlayerUID, const struct FWeaponDIYData& InWeaponDIYData);
	static void GenerateAIPlayerParams(class UBattleUtils* Utils, const struct FPlayerInfoData& Info);
};




class UBattlePlayer : public UObject
{
public:
	uint64_t                                           UID;                                                      
	struct FPlayerInfoData                             PlayerInfoData;                                           
	struct FPlayerAvatarData                           PlayerAvatarData;                                         
	TMap<int, struct FWeaponDIYData>                   WeaponDIYData;                                            
	class UBattleUtils*                                OwningBattleUtils;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattlePlayer");
		return pStaticClass;
	}


	struct FGameModePlayerParams ExtractGameModePlayerParams();
};




class UBattleAIPlayer : public UBattlePlayer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleAIPlayer");
		return pStaticClass;
	}


	struct FGameModeAIPlayerParams ExtractGameModeAIPlayerParams();
};




class UBattleUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	class UGameFrontendHUD*                            OwningFrontendHUD;                                        
	unsigned char                                      UnknownData01[0x10];                                      
	class AUAEGameMode*                                BattleGameMode;                                           
	TArray<class UBattlePlayer*>                       BattlePlayerList;                                         
	struct FBattleGameInfo                             CachedBattleGameInfo;                                     
	struct FGameModeAIPlayerParams                     CachedAIPlayerParams;                                     
	struct FString                                     LuaFilePath;                                              
	unsigned char                                      UnknownData02[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleUtils");
		return pStaticClass;
	}


	uint32_t SyncNewBattlePlayer(uint64_t UID, const struct FPlayerInfoData& Info);
	void SyncGameInfo(const struct FBattleGameInfo& Info);
	void SyncGameExit();
	void SyncBattlePlayerExit(uint64_t UID, const struct FName& PlayerType, const struct FString& Reason);
	struct FGameModePlayerParams RetrievePlayerParams(const struct FPlayerID& PlayerID);
	struct FGameModeAIPlayerParams RetrieveAIPlayerParams(const struct FPlayerID& PlayerID);
	void ResponPlayerWeaponDIYData(uint64_t PlayerUID, const struct FWeaponDIYData& InWeaponDIYData);
	void RequestSomePlayersBattleData(TArray<uint64_t> PlayerUIDList, unsigned char DataType);
	void RequestPlayerWeaponDIYData(uint64_t PlayerUID, int WeaponSkinID, int PlanID);
	void RequestOnePlayersBattleData(uint64_t PlayerUID, unsigned char DataType);
	void RequestAllPlayersBattleData(unsigned char DataType);
	void OnPostLoadMapWithWorld(class UWorld* World);
	class UBattlePlayer* NewBattlePlayer();
	class UBattleAIPlayer* NewBattleAIPlayer();
	void HandleGameModeStateChanged(const struct FGameModeStateChangedParams& Params);
	class AUAEGameMode* GetBattleGameMode();
	void GenerateAIPlayerParams(const struct FPlayerInfoData& Info);
	class UBattlePlayer* FindPlayerByUID(uint64_t UID, const struct FName& PlayerType);
	class UBattlePlayer* FindPlayerByPlayerName(const struct FString& PlayerName, const struct FName& PlayerType);
	class UBattlePlayer* FindPlayerByPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
};




class UBattleWindowMgr : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleWindowMgr");
		return pStaticClass;
	}


	static void ShowUI(class UObject* WorldContextObject, const struct FString& WindowName, class UObject* ObjectParam);
	static void SetInstance(class UBattleWindowMgrLuaUtils* InInstance, class ULuaStateWrapper* InLuaStateWrapper);
	static void HideUI(class UObject* WorldContextObject, const struct FString& WindowName);
	static bool CheckWindowOpen(class UObject* WorldContextObject, const struct FString& WindowName);
};




class UBattleWindowMgrLuaUtils : public UObject
{
public:
	TWeakObjectPtr<class ULuaStateWrapper>             LuaStateWrapper;                                          
	struct FString                                     LuaManagerName;                                           
	struct FString                                     ShowUI;                                                   
	struct FString                                     HideUI;                                                   
	struct FString                                     CheckWindowOpen;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleWindowMgrLuaUtils");
		return pStaticClass;
	}

};




class UBugReporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BugReporter");
		return pStaticClass;
	}


	void SendScreenShot(const struct FString& ErrorReason, const struct FString& errorDescription, const struct FString& ImagePath, float X, float Y, float Z);
	void SendLog(const struct FString& ErrorReason, const struct FString& errorDescription, float X, float Y, float Z, bool pullAll, bool zipLogUpload);
	void ReadZipLog(const struct FString& Filename);
	TArray<unsigned char> CompressLog(bool pullAllLog);
};




class UBuildConfig : public UObject
{
public:
	struct FString                                     branch_name;                                              
	struct FString                                     build_no;                                                 
	struct FString                                     build_url;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BuildConfig");
		return pStaticClass;
	}

};




class UBusinessHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BusinessHelper");
		return pStaticClass;
	}


	struct FString XorEncryptDecrypt(const struct FString& Data, bool bEncrypt, const struct FString& Key);
	static class UObject* UIGetResWithPath(const struct FString& DesManagerName);
	static class ALuaClassObj* UIGetLuaManagerByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName);
	static class ALuaClassObj* UIGetLuaManager(class UUAEUserWidget* pUIClass);
	static void StopUIStat(const struct FString& UIName, bool bReport);
	static float StopTimeWatch();
	static void StartUIStat(const struct FString& UIName);
	static void StartTimeWatch();
	struct FString SpecialBase64Encode(const struct FString& Data);
	struct FString SpecialBase64Decode(const struct FString& Data);
	static void SetUIStatMaxClickTimes(int Times);
	static class UObject* LoadAssetFromPath(const struct FString& DesManagerName);
	static bool IsSplitMiniPakVersion();
	static bool IsSplitMapPakVersion();
	static bool IsLightVer();
	static bool IsFirstGaming();
	static bool IsClassOf(class UObject* Object, class UClass* Class);
	static bool IsChildOf(class UClass* ChildClass, class UClass* Class);
	static bool IsCEVersion();
	static bool IsAppFromStore();
	static bool HasDownloadedBasePak();
	static struct FString GetXORKey();
	static class UUAEUserWidget* GetWidgetByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName, const struct FString& InWidgtName);
	static uint64_t GetVoiceSdkGameId();
	static int GetTSSGameId();
	static float GetTime();
	static struct FString GetSplitMapConfigInfo();
	static struct FString GetPublishRegion();
	struct FString GetPathFromUserWidgetToViewport(class UUserWidget* UserWidget, bool withObjectNum);
	static struct FString GetPackChannel();
	static struct FString GetPackageType();
	static struct FString GetOperationRegion();
	static struct FString GetOpenId();
	static struct FString GetObjectClassName(class UObject* Object);
	static struct FString GetMobileBasePath(const struct FString& InPath);
	static class ALuaClassObj* GetLuaManagerByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName);
	static struct FString GetITopGameId();
	static struct FString GetInGameLocalConnectURL();
	static int GetIMSDKEnv();
	static int GetDeviceQualityLevel();
	static int GetDeviceOrientation();
	static class UUAEDataTable* GetDataTable(const struct FString& tableName);
	static int GetCurrentNetworkState();
	static class UWidget* GetChildByName(class UUserWidget* pParent, const struct FString& Name);
	static struct FString GetBuildURL();
	static struct FString GetBuildNo();
	static struct FString GetBranchName();
	static struct FString GetBase64Key();
	static struct FString GetAppVersion();
	static int GetAOSSHOPID();
	static struct FString GetAOSSHOP();
	static void FullGC();
	static void ClearDisplayLookupTable();
	static void BroadCastMSG(class UFrontendHUD* FrontendHUD, const struct FString& DesManagerName, const struct FString& Msg);
	struct FString Base64Encode(const struct FString& Data);
	struct FString Base64Decode(const struct FString& Data);
};




class UIntlHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.IntlHelper");
		return pStaticClass;
	}


	static void UpdateXGPushNightTag(bool bInit);
	static void UpdateXGPushDayTag(bool bInit);
	static void UpdateVoiceUrl(const struct FString& regionVoiceUrl);
	static void UnInitTweenMaker();
	static struct FString TimeFormatString(const struct FString& Format, int hours, int Mins, int secs);
	static void SaveXGTags(const struct FString& Language, const struct FString& timezone, const struct FString& Region);
	static void OnSwitchLanguage();
	static void OnChoosingZone(int ZoneID, const struct FString& AddrIP, const struct FString& regionVoiceUrl);
	static bool IsRemoteNotificationsEnabled();
	static bool IsHelpshiftEnable4CurrentChannel();
	static bool IsHelpshiftEnable();
	static bool IsAwakedByAdjust();
	static void InitTweenMaker();
	static void HelpshiftUploadLog();
	static void HelpshiftShowSingleFAQWithInfo(const struct FString& publishID, TMap<struct FString, struct FString> hsMetaInfo, const struct FString& ExtraTags, const struct FString& hsIssueFieldsJson);
	static void HelpshiftShowFAQsWithInfo(TMap<struct FString, struct FString> hsMetaInfo, const struct FString& ExtraTags, const struct FString& hsIssueFieldsJson);
	static void HelpshiftShowFAQs();
	static void HelpshiftShowConversionWithInfo(TMap<struct FString, struct FString> hsMetaInfo, const struct FString& hsIssueFieldsJson);
	static void HelpshiftShowConversion();
	static void HelpshiftRequestUnreadMessagesCount();
	static int HelpshiftGetUnreadMessgesCount();
	static void HelpshiftClearUnreadMessgesCount();
	static struct FString GetTranslationText(const struct FString& Key);
	static struct FString GetSavedXGTimezoneTag();
	static struct FString GetSavedXGRegionTag();
	static struct FString GetSavedXGPushNightTag();
	static struct FString GetSavedXGPushDayTag();
	static struct FString GetSavedXGLanguageTag();
	static struct FString GetPlayerUCLevel();
	static int GetLocalTimezone();
	static struct FString GetLocalizeStringWithString(const struct FString& sourceString, int numStringIndex, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	static struct FString GetLocalizeStringWithNum(int ID, int numStringIndex, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	static struct FString GetLocalizeStrByStr(const struct FString& Source, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	static struct FString GetLocalizeStrByID(int ID, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	static struct FString GetLocalizationStringWithID(int ID);
	static struct FString GetLocalizationString(const struct FString& Key);
	static struct FString GetLocalizationBattleStringWithID(int ID);
	static struct FString GetHistoryErrorCode();
	static struct FString GetGameMasterVID();
	static struct FString GetDeepLinkUrl();
	static int GetCurrentZoneID();
	static struct FString FormatLocalizeStrByStr(const struct FString& Source, TArray<struct FString> stringArr);
	static void DirectToNotificationSetup();
	static void ClearAdjustDeepLink();
	static void AdjustParaAnalysis();
	static void AddErrorCodeToHistory(const struct FString& InErrorCode);
};




class ATestHUD : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.TestHUD");
		return pStaticClass;
	}


	void TestFunctionNOParam();
	float TestFunctionBP_LUA();
	float TestFunctionBP();
	float Function_Lua();
	float Function_CPlus_Call();
	float Function_CPlus();
	float Function_BP_CPP();
	float Function_BP_Call_LUA();
	float Function_BP_Call_CPP();
	float Function_BP_Call_CPlus();
	float Function_BP_Call();
	float Function_BP();
};




class UCDNUpdate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	unsigned char                                      UnknownData01[0x2A8];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CDNUpdate");
		return pStaticClass;
	}


	void StartUpdateApp();
	void StartAppUpdate(bool StartGrayUpdate);
	void OnRequestProgress(const struct FCDNDownloaderInfo& Info);
	void OnRequestComplete(const struct FCDNDownloaderInfo& Info);
	bool IsUpdating();
	bool IsGrayUpdate();
	int GetCurStage(float* percent, int* GetCurVal, int* GetMaxVal);
	void FinishUpdate();
	void ContinueUpdate();
	void CancelUpdate();
};




class UCentauriManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      
	struct FString                                     payChannel;                                               
	struct FString                                     ZoneID;                                                   
	struct FString                                     goodsZoneID;                                              
	struct FString                                     offerID;                                                  
	int                                                iAOSShop;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     offerID_H5;                                               
	struct FString                                     offerID_WOW;                                              
	struct FString                                     offerID_WOWH5;                                            
	struct FString                                     payChannel_H5;                                            
	unsigned char                                      UnknownData02[0x58];                                      
	struct FString                                     IDCInfo;                                                  
	unsigned char                                      UnknownData03[0x18];                                      
	struct FString                                     PAY_TYPE_UC;                                              
	struct FString                                     PAY_TYPE_GOODS;                                           
	struct FString                                     PAY_TYPE_SUBSCRIBE;                                       
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	unsigned char                                      UnknownData04[0x60];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CentauriManager");
		return pStaticClass;
	}


	void TickCentauriPackage();
	void Tick(float DeltaTime);
	void SwitchPayChannel(ECentauriMultiPayChannelSwitch switchChannel);
	void Subscribe(const struct FString& productid, const struct FString& InPayItem, const struct FString& Country, const struct FString& currency, const struct FString& serviceCode, const struct FString& serviceName, bool autoPay, const struct FString& basePlanId, const struct FString& gwOfferId, const struct FString& InChannelExtras, const struct FString& InAppExtends);
	void SetZoneID(const struct FString& inZoneID, const struct FString& inGoodsZoneID);
	void SetRoleInfo(int InChannel, const struct FString& OpenID);
	void SetPayEnvironment(const struct FString& InPayEnvironment);
	void SetInIDC(const struct FString& InInIDC);
	void SetIDCInfo(const struct FString& InIDCInfo);
	void SetFrontendHUD(class UGameFrontendHUD* InFrontendHUD);
	void Reprovide();
	void Pay(const struct FString& productid, const struct FString& InPayItem, const struct FString& Country, const struct FString& currency, const struct FString& InChannelExtras, const struct FString& InAppExtends, const struct FString& InPayChannel, const struct FString& InURL, bool bUseWOW);
	void ModifySubscribe(const struct FString& newProductid, const struct FString& Country, const struct FString& currency, const struct FString& serviceCode, const struct FString& serviceName, bool autoPay, const struct FString& basePlanId, const struct FString& gwOfferId, const struct FString& InChannelExtras, const struct FString& InAppExtends);
	bool IsH5PayEnable();
	void Initialize(ECentauriMultiPayChannelSwitch envior, bool bUseWOW);
	void H5Pay(const struct FString& Country, const struct FString& InChannelExtras, const struct FString& InAppExtends, bool bUseWOW);
	void GoodsPresent(const struct FString& productid, const struct FString& InPayItem, const struct FString& Price, const struct FString& Country, const struct FString& currency, const struct FString& MetaData, const struct FString& InChannelExtras, const struct FString& InAppExtends, const struct FString& InPayChannel, const struct FString& InURL, bool bUseWOW);
	void Goods(const struct FString& productid, const struct FString& InPayItem, const struct FString& Price, const struct FString& Country, const struct FString& currency, const struct FString& InChannelExtras, const struct FString& InAppExtends, const struct FString& InPayChannel, const struct FString& InURL, bool bUseWOW);
	void GetProductInfo(TMap<struct FString, struct FString> listProductID, bool bUseWOW);
	struct FString getPF();
	struct FString GetPaymentProductId();
	struct FString GetPayChannel();
	struct FString GetPackChannel();
	struct FString GetOfferIDForWOWH5();
	struct FString GetOfferIDForWOW();
	struct FString GetOfferID();
	struct FString GetNativePackageTag();
	void GetMPInfo(const struct FString& Country, const struct FString& currency, const struct FString& InAppExtends, const struct FString& InDrmInfo, bool bUseWOW);
	void GetIntroPrice(TMap<struct FString, struct FString> listProductID, bool bUseWOW);
	static class UCentauriManager* GetInstance();
	int GetAOSSHOP();
};




class UClientNetInterface : public UNetInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ClientNetInterface");
		return pStaticClass;
	}

};




class UCommonItemBase : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CommonItemBase");
		return pStaticClass;
	}

};




class UCompressTextureHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CompressTextureHelper");
		return pStaticClass;
	}


	static class UTexture2D* TestGetTexture2DFromDisk_KTX2(const struct FString& PathName);
};




class UDataTunnel : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.DataTunnel");
		return pStaticClass;
	}

};




class UDragDropTextBox : public UEditableTextBox
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.DragDropTextBox");
		return pStaticClass;
	}

};




class UGameBackendUtils : public UBackendUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBackendUtils");
		return pStaticClass;
	}


	class UUAETableManager* GetTableManager();
};




class UGameBackendHUD : public UBackendHUD
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBackendHUD");
		return pStaticClass;
	}


	class UGameBackendUtils* GetUtils();
	static class UGameBackendHUD* GetInstance();
	class UGameFrontendHUD* GetGameFrontendHUDByGameInstance(class UGameInstance* GameInstance);
	class UGameFrontendHUD* GetFirstGameFrontendHUD(class UObject* WorldContextObject);
};




class UGameBusinessManager : public ULogicManagerBase
{
public:
	TArray<struct FGameWidgetConfig>                   WidgetConfigList;                                         
	unsigned char                                      UnknownData00[0x50];                                      
	class AUAEPlayerController*                        OwningController;                                         
	unsigned char                                      UnknownData01[0x8];                                       
	class ALuaClassObj*                                LuaObject;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBusinessManager");
		return pStaticClass;
	}


	class UUAEUserWidget* GetWidget(int Index);
	class ALuaClassObj* GetLuaObject();
	class UGameFrontendHUD* GetGameFrontendHUD();
};




class UGameFrontendHUD : public UFrontendHUD
{
public:
	struct FScriptMulticastDelegate                    OnHandleWebviewActionDelegate;                            
	struct FScriptMulticastDelegate                    OnGetTicketNotifyDelegate;                                
	struct FScriptMulticastDelegate                    OnHandleServerListDownload;                               
	struct FScriptMulticastDelegate                    OnUIStatReport;                                           
	struct FScriptMulticastDelegate                    OnCloudGMReceive;                                         
	struct FScriptMulticastDelegate                    OnReportClientTool;                                       
	bool                                               bDuringLobbyEntry;                                        
	unsigned char                                      UnknownData00[0x7];                                       
	uint64_t                                           LastDuringLobbyEntryFrame;                                
	struct FString                                     LobbyEntryOptions;                                        
	struct FString                                     LobbyEntryLastGameStatus;                                 
	struct FString                                     CSVTableRelativeDir;                                      
	TMap<struct FString, struct FString>               GameStatusMap;                                            
	bool                                               EnableTickLog;                                            
	unsigned char                                      UnknownData01[0x1];                                       
	bool                                               bEnableReportMemory;                                      
	unsigned char                                      UnknownData02[0x5];                                       
	struct FScriptMulticastDelegate                    OnDeleteFileNotifyEvent;                                  
	unsigned char                                      UnknownData03[0x8];                                       
	struct FScriptMulticastDelegate                    OnLoadODPaksBinFinishNotifyEvent;                         
	unsigned char                                      UnknownData04[0x58];                                      
	class UVoiceSDKInterface*                          VoiceSDK;                                                 
	class UBugReporter*                                GameBugReporter;                                          
	class UGMLogShare*                                 LogShare;                                                 
	int                                                MaxUpdateRetryTimes;                                      
	unsigned char                                      UnknownData05[0xC];                                       
	class UGDolphinUpdater*                            GDolphin;                                                 
	class UTranslator*                                 Translator;                                               
	class UHttpWrapper*                                HttpWrapper;                                              
	class UGCPufferDownloader*                         GPuffer;                                                  
	class ULaggingReporter*                            LaggingReporter;                                          
	unsigned char                                      UnknownData06[0x8];                                       
	class UAsyncTaskDownloader*                        DownloadTask;                                             
	unsigned char                                      UnknownData07[0x44];                                      
	bool                                               bUseDolphinUpdateFirst;                                   
	bool                                               bEnableUseDolphinUpdate;                                  
	bool                                               bEnableUseCDNUpdate;                                      
	bool                                               bUseDolphinUpdateAfterCDNFailed;                          
	bool                                               bUseCDNUpdateAfterDolphinFailed;                          
	bool                                               bEnableEditorPufferDownload;                              
	bool                                               bIsWaitingUpdateStateData;                                
	bool                                               IsUsingDolphinUpdate;                                     
	bool                                               IsUsingCDNUpdate;                                         
	unsigned char                                      UnknownData08[0x13];                                      
	class UCDNUpdate*                                  CDNUpdater;                                               
	int                                                ODPaksPoolSize;                                           
	int                                                ODPaksPoolSizeLowend;                                     
	int                                                ODPaksPoolSizeLowendThreshold;                            
	bool                                               ODPaksEnable;                                             
	unsigned char                                      UnknownData09[0x23];                                      
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
	struct FName                                       UnrealNetworkStatus;                                      
	unsigned char                                      UnknownData10[0x18];                                      
	float                                              UnrealNetworkConnectingTimer;                             
	unsigned char                                      UnknownData11[0x18];                                      
	float                                              UnrealNetworkConnectingTime;                              
	float                                              UnrealNetworkConnectingTimeAsan;                          
	bool                                               bUseDynamicCreateLuaManager;                              
	unsigned char                                      UnknownData12[0x3];                                       
	TArray<struct FString>                             PersistentLuaManager;                                     
	unsigned char                                      UnknownData13[0x10];                                      
	bool                                               bPatchReInitSequence;                                     
	unsigned char                                      UnknownData14[0x7];                                       
	class ULuaStateWrapper*                            LuaStateWrapper;                                          
	class ULuaEventBridge*                             LuaEventBridgeInstace;                                    
	class UBattleWindowMgrLuaUtils*                    LuaBattleWindowMgr;                                       
	class ULuaBlueprintMgr*                            LuaBlueprintSysMgr;                                       
	unsigned char                                      UnknownData15[0x8];                                       
	struct FString                                     ScriptBPRelativeDir;                                      
	struct FString                                     ScriptRelativeDir;                                        
	struct FString                                     InGameLuaDir;                                             
	struct FString                                     PreloadLuaFileRelativePath;                               
	TArray<struct FString>                             LuaDirList;                                               
	TArray<struct FString>                             NoGCPackage;                                              
	float                                              LuaTickTime;                                              
	bool                                               bCallLuaTick;                                             
	bool                                               bAutoLoginEnable;                                         
	unsigned char                                      UnknownData16[0x2A];                                      
	int                                                PingFirstReportIntervalSecond;                            
	int                                                PingReportIntervalSecond;                                 
	int                                                LossSyncIntervalSecond;                                   
	int                                                PlayerStatusReportIntervalSecond;                         
	int                                                LossArraySyncIntervalSecond;                              
	unsigned char                                      UnknownData17[0x4];                                       
	int                                                vmInstrumentOptimization;                                 
	unsigned char                                      UnknownData18[0x4];                                       
	class UTssManager*                                 TssMgr;                                                   
	unsigned char                                      UnknownData19[0x1C];                                      
	float                                              PingReportInterval;                                       
	unsigned char                                      UnknownData20[0x110];                                     
	int64_t                                            DeactivatedThreshold;                                     
	int64_t                                            TimePassThreshold;                                        
	uint32_t                                           ImageDownloadClearDayCount;                               
	unsigned char                                      UnknownData21[0x4];                                       
	struct FScriptMulticastDelegate                    UIStackChangeDelegate;                                    
	struct FScriptMulticastDelegate                    UIStackRecoverDelegate;                                   
	struct FScriptMulticastDelegate                    OnFRefreshAdaptationUIEvent;                              
	struct FScriptMulticastDelegate                    OnFRefreshAdaptationExUIEvent;                            
	struct FScriptMulticastDelegate                    EnterBattleStageDelegate;                                 
	struct FScriptMulticastDelegate                    OnAfterInitedDolphinDelegate;                             
	struct FScriptMulticastDelegate                    OnDolphinVersionInfoDelegate;                             
	struct FScriptMulticastDelegate                    OnDolphinNoticeInstallApkDelegate;                        
	struct FScriptMulticastDelegate                    OnDolphinProgressDelegate;                                
	struct FScriptMulticastDelegate                    OnDolphinErrorDelegate;                                   
	struct FScriptMulticastDelegate                    OnRepairOverMaxTimesDelegate;                             
	struct FScriptMulticastDelegate                    OnUpdateFinishedDelegate;                                 
	struct FScriptMulticastDelegate                    OnRestartGameDelegate;                                    
	struct FScriptMulticastDelegate                    OnInitIMSDKEnvDelegate;                                   
	struct FScriptMulticastDelegate                    OnGetEnableCDNGetVersionDelegate;                         
	struct FScriptMulticastDelegate                    OnAfterLoadedEditorLoginDelegate;                         
	struct FScriptMulticastDelegate                    OnClearUIBeforeReInitLuaStateDelegate;                    
	struct FScriptMulticastDelegate                    OnInitStateDelegate;                                      
	struct FScriptMulticastDelegate                    OnStartPufferUpdateDelegage;                              
	struct FScriptMulticastDelegate                    OnGetUpdateStateCDNConfigUrlDelegate;                     
	struct FScriptMulticastDelegate                    OnGetCDNUpdateInfoDelegate;                               
	struct FScriptMulticastDelegate                    OnQuickLoginDelegate;                                     
	struct FScriptMulticastDelegate                    OnGetRegionNoByCountryNoDelegate;                         
	struct FScriptMulticastDelegate                    OnPhoneMailLoginCallbackDelegate;                         
	struct FScriptMulticastDelegate                    OnLoginSDKCallbackDelegate;                               
	struct FScriptMulticastDelegate                    OnFileModifiedDelegate;                                   
	struct FScriptMulticastDelegate                    OnLauncherEventCallback;                                  
	unsigned char                                      UnknownData22[0xC8];                                      
	class UImageDownloader*                            ImageDownloaderInGame;                                    
	int                                                FpsForWindowClient;                                       
	unsigned char                                      UnknownData23[0x4];                                       
	class UUDPPingCollector*                           UDPPingCollector;                                         
	bool                                               UIElemLayoutJsonConfigSwitch;                             
	bool                                               NationAllSwitch;                                          
	bool                                               NationBattleSwitch;                                       
	bool                                               NationRankSwitch;                                         
	bool                                               SelfieSwitch;                                             
	bool                                               ReportBugSwitch;                                          
	bool                                               FirstVoicePopupSwitch;                                    
	bool                                               GDPRForbidVoiceSwitch;                                    
	bool                                               GDPRSettingSwitch;                                        
	unsigned char                                      UnknownData24[0x3];                                       
	int                                                GDPRUserType;                                             
	bool                                               bShouldShowAdaptTipInLobby;                               
	unsigned char                                      UnknownData25[0x3];                                       
	float                                              fLaggingFPSDiffThreshold;                                 
	float                                              fLaggingFPSDiffThresholdMin;                              
	float                                              fLaggingFPSDiffThresholdMax;                              
	float                                              fLaggingFrameTimeThreshold;                               
	float                                              fLaggingFrameTimeThresholdMin;                            
	float                                              fLaggingFrameTimeThresholdMax;                            
	float                                              fFPSReportInterval;                                       
	unsigned char                                      UnknownData26[0x10];                                      
	bool                                               bUnLoadNoGcPackage;                                       
	unsigned char                                      UnknownData27[0x7];                                       
	TArray<class UPackage*>                            NoGcPackages;                                             
	bool                                               bFlushAsyncLoadingBeforeGC;                               
	bool                                               bEnableJMLog;                                             
	unsigned char                                      UnknownData28[0xB6];                                      
	bool                                               bEnableH5Cache;                                           
	bool                                               bCheckWorldNameForLoadConfig;                             
	unsigned char                                      UnknownData29[0x6];                                       
	class UColorBlindnessMgr*                          ColorBlindnessMgrInstace;                                 
	TArray<struct FNativeHUDTickContainer>             NativeHUDTickList;                                        
	bool                                               IsNativeHUDTickLock;                                      
	bool                                               IsShutDown;                                               
	unsigned char                                      UnknownData30[0x2];                                       
	int                                                NativeHUDTickIndex;                                       
	class UAsyncLoadHelper*                            AsyncLoadHelper;                                          
	unsigned char                                      UnknownData31[0x8];                                       
	struct FString                                     BattleUtilsClassName;                                     
	class UBattleUtils*                                BattleUtils;                                              
	unsigned char                                      UnknownData32[0x8];                                       
	struct FScriptDelegate                             OnImagePickDetectEvent;                                   
	struct FScriptDelegate                             OnVideoPickEvent;                                         
	struct FScriptDelegate                             OnPermissionResultEvent;                                  
	struct FScriptMulticastDelegate                    OnDeviceRotationChangedEvent;                             
	struct FString                                     CurrentMapName;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameFrontendHUD");
		return pStaticClass;
	}


	void UnRegisterUIShowHideEventDelegate(const struct FString& Source);
	void TimeStatisticStop(int Type, const struct FString& Name);
	void TimeStatisticStart(int Type);
	void TickUdpCollector(float DeltaTime);
	void StatisVisibilityWidget(class UWidget* Widget);
	void StatisLoadedTexture(class UTexture* Texture);
	bool StartUpdate();
	bool StartGrayUpdate();
	void StartDolphinUpdateAfterCDNUpdateFailed();
	void StartCDNUpdateAfterDolphinUpdateFailed();
	void ShutdownUnrealNetwork();
	void SetShouldShowAdaptTipInLobby(bool bShoudShow);
	void SetGameSubMode(const struct FString& SubMode);
	void SetGameStatusMap(TMap<struct FString, struct FString>* InGameStatusMap);
	void SetClientEnterBattleStage(const struct FString& InStageStr);
	void SetAccountByWebLogin(int Channel, const struct FString& OpenID, const struct FString& UserId, const struct FString& TokenID, int expireTime);
	void RetryDownload();
	void RetryCDNDownload();
	void RequestPhotoPermission(const struct FScriptDelegate& PermissionResultEvent);
	void RequestCameraPermission(const struct FScriptDelegate& PermissionResultEvent);
	void ReportNetContinuousSaturate();
	void RemoveSuppotAdaptationBind(class UPanelSlot* PanelSlot);
	void ReleaseLuaBlueprintSysMgr();
	void ReleaseInGameUIManager();
	void ReleaseBattleUtils();
	void RegisterUserSettingsDelegate(const struct FScriptDelegate& Delegate);
	void RegisterUIShowHideEventDelegate(const struct FString& Source, const struct FScriptDelegate& Delegate);
	void PickVideo(const struct FScriptDelegate& VideoPickEvent, int MaxSize, float MaxDuration);
	void PickImageDetectQRCode(const struct FScriptDelegate& ImagePickDetectEvent);
	void OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo);
	void OnWebviewActionNotify(const struct FString& URL);
	void OnUAAssistantEvent(const struct FUAAssistantInfoWrapper& UAAssistentInfo);
	void OnSDKCallbackEvent(const struct FSDKCallbackInfoWrapper& sdkCallbackInfo);
	void OnRequestComplete(const struct FCDNDownloaderInfo& Info);
	void OnRefreshAccountInfo(bool Result, int InChannel, const struct FString& InOpenid);
	void OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo);
	void OnPlatformFriendNotify(const struct FPlatformFriendInfoMap& PlatformFriendInfoMap);
	void OnNotUpdateFinished();
	void OnLoginFlowNotify(int _Flow, int _Param, const struct FString& ExtraData);
	void OnHttpImgResponse(class UTexture2D* Texture, class UImageDownloader* downloader);
	void OnGroupNotify(const struct FGroupInfoWrapper& groupInfo);
	void OnGetTicketNotify(const struct FString& Ticket);
	void OnGetShortUrlNotify(int Ret, const struct FString& shortUrl);
	void OnGetCountryNoNotify(int Country);
	void OnGenQRImgNotify(int Ret, int Size, const struct FString& imgPath);
	void OnGameMasterEvent(const struct FString& EventName, int Ret);
	void OnConnectorNetStateChangeNotify(int State, int EventParam1, int EventParam2, int EventParam3);
	void OnCheckUpdateStateFinished(const struct FDownloaderInfo& Info);
	void OnAreaChanged(const struct FString& InArea);
	void NotifyLoadingUIOperation(int OperationType);
	void MakeToSuppotAdaptation(class UPanelSlot* PanelSlot);
	void LuaDoString(const struct FString& LuaString);
	bool IsWindowOB();
	bool IsODPaksBinLoaded();
	bool IsInstallPlatform(const struct FString& Platform);
	bool IsCEHideLobbyUI();
	bool HasAnyNetMsgToHandle();
	bool GetWidgetRenderCanChange();
	class UVoiceSDKInterface* GetVoiceSDKInterface();
	class USaveGame* GetUserSettings();
	class UGDolphinUpdater* GetUpdater();
	class UTranslator* GetTranslator();
	bool GetShouldShowAdaptTipInLobby();
	class USettingSubsystem* GetSettingSubsystem();
	class UGCPufferDownloader* GetPufferDownloader();
	struct FString GetPlayerStatusReportInfo();
	struct FString GetPingReportInfo();
	int GetPhotoPermission();
	struct FString GetPacketLossReportInfo();
	class ULuaStateWrapper* GetLuaStateWrapper();
	class ULuaEventBridge* GetLuaEventBridge();
	class ULuaBlueprintMgr* GetLuaBlueprintSysMgr();
	class UHttpWrapper* GetHttpWrapper();
	struct FString GetGameSubMode();
	class AGameStateBase* GetGameState();
	struct FString GetFPSReportInfo();
	class UEffectSettingMgr* GetEffectSettingMgr();
	int GetDetailNetInfoFromDPM();
	class UColorBlindnessMgr* GetColorBlindnessMgr();
	class UObject* GetClientNetObj();
	struct FString GetClientEnterBattleStageCostTime();
	struct FString GetClientEnterBattleStage();
	int GetCameraPermission();
	class UBugReporter* GetBugReporter();
	class UBattleUtils* GetBattleUtils();
	struct FString GetBattleIDHexStr();
	class UAsyncLoadHelper* GetAsyncLoadHelper();
	void FinishModifyUserSettings();
	bool EnableLobbyEntry();
	void EnableFPSAndMemoryLog(bool bEnable);
	void DispatchLongTimeNoOperation(int TimeOutCounter);
	void DestroyDolphin();
	float CvmRotateClockwise(float Yaw, float DeltaTime);
	class UTexture2D* CreateQRCodeTexture(const struct FString& Text);
	void CreateInGameUIManager();
	void CreateBattleUtils();
	void CallGlobalScriptFunctionWithString(const struct FString& InFunctionName, const struct FString& Arg1);
	void CallGlobalScriptFunction(const struct FString& InFunctionName);
	void BeginModifyUserSettings();
	void BattleUtilsGameEnd();
	void AfterLoadedEditorLogin();
	void AddAdaptationWidgetDelegateEx(class UPanelSlot* PanelSlot);
	void AddAdaptationWidgetDelegate(class UPanelSlot* PanelSlot);
};




class UGameFrontendUtils : public UFrontendUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameFrontendUtils");
		return pStaticClass;
	}

};




class UGameJoyInterface : public UObject
{
public:
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameJoyInterface");
		return pStaticClass;
	}


	void ShareVideo(int Channel);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void OnVideoShare(const struct FString& Msg);
	void OnShowVideoPlayer(int IsShow);
	void OnRecordingStart(int status);
	void OnRecordingEnd(int64_t Duration);
	void OnManualRecordingStart(int status);
	void OnCheckSDKPermission(bool IsSuccess);
	void OnCheckSDKFeature(int sdkFeatureInt);
	bool IsSDKFeatureSupport();
	static class UGameJoyInterface* GetInstance();
};




class UGDolphinUpdater : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      
	TMap<struct FString, struct FString>               pakHashList;                                              
	unsigned char                                      UnknownData01[0x88];                                      
	bool                                               AllowIOSBGDownload;                                       
	bool                                               AllowIOSBGDownloadPush;                                   
	bool                                               DisableJPKRBGDownloadNightPush;                           
	unsigned char                                      UnknownData02[0x1];                                       
	int                                                DisableJPKRBGDownloadNightPushAfterHour;                  
	int                                                DisableJPKRBGDownloadNightPushBeforeHour;                 
	int                                                IOSBGDownloadPushDelaySeconds;                            
	bool                                               EnableRandomBackupURL;                                    
	bool                                               EnablePufferUpdate;                                       
	bool                                               UseLocalSrcVersionWhenUpdateFailed;                       
	unsigned char                                      UnknownData03[0x15];                                      
	struct FString                                     UpdateInfoPath;                                           
	bool                                               OpenDebugLog;                                             
	unsigned char                                      UnknownData04[0x15F];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GDolphinUpdater");
		return pStaticClass;
	}


	void StartAppUpdate();
	void SetEnableCDNGetVersion(bool Enable);
	void OnUpdateError(int curVersionStage, int ErrorCode);
	void OnDolphinBGDownloadDone();
	void OnAreaChanged(const struct FString& InArea);
	bool IsUpdating();
	bool IsGrayUpdate();
	bool IsExamine();
	void Install();
	int GetTotalValue();
	int GetCurValue();
	int GetCurStage(float* percent, int* GetCurVal, int* GetMaxVal);
	float GetCurPercent();
	uint32_t GetChannelIDWithHUD(class UGameFrontendHUD* InGameFrontendHUD);
	uint32_t GetChannelID();
	void FinishUpdate();
	void FinishPufferUpdate();
	void EnableIOSBGDownload4G(bool bEnableCellularAccess);
	bool EnableCDNGetVersion();
	void DynamicAdjustDolphinSystemParameter(TMap<int, struct FString> InConiguration);
	void ContinueUpdate();
	void CancelUpdate();
	void CancelAppUpdate();
};




class UAvatarItemDownloadPuffer : public UAvatarItemDownload
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AvatarItemDownloadPuffer");
		return pStaticClass;
	}


	void StartDownloadItem(uint32_t ItemId, uint32_t Priority, const struct FScriptDelegate& OnItemDownloadDelegate);
	void StartBatchDownloadItem(TArray<uint32_t> ItemIDs, uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate);
};




class UGCPufferDownloader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3A8];                                     
	bool                                               Disable;                                                  
	unsigned char                                      UnknownData01[0x97];                                      
	struct FString                                     DownloadDir;                                              
	struct FString                                     PufferTmpDir;                                             
	uint32_t                                           CleanFlagVer;                                             
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<struct FString>                             CleanFileNamePattern;                                     
	bool                                               PreFetchPakEnable;                                        
	bool                                               PreFetchFileClearEnable;                                  
	bool                                               PreFetchConvertEnable;                                    
	unsigned char                                      UnknownData03[0x5];                                       
	TArray<struct FString>                             PreFetchPakNames;                                         
	uint32_t                                           PreFetchReserveredDiskSpace;                              
	bool                                               PreFetchODPak_Enable;                                     
	unsigned char                                      UnknownData04[0x3];                                       
	int                                                PreFetchODPaks_MaxNum;                                    
	int                                                PreFetchODPaks_BatchSize;                                 
	int                                                PreFetchODPaks_FetchedNum;                                
	int                                                PreFetchODPaks_FetchedIndex;                              
	TArray<struct FString>                             PreFetchODPaks_Filenames;                                 
	bool                                               AllowIOSBGDownload;                                       
	bool                                               AllowIOSBGDownloadPush;                                   
	bool                                               DisableJPKRBGDownloadNightPush;                           
	unsigned char                                      UnknownData05[0x1];                                       
	int                                                DisableJPKRBGDownloadNightPushAfterHour;                  
	int                                                DisableJPKRBGDownloadNightPushBeforeHour;                 
	int                                                IOSBGDownloadPushDelaySeconds;                            
	bool                                               DisableBGDownloadNotification;                            
	unsigned char                                      UnknownData06[0x3];                                       
	int                                                OptiHttpConfig_uEnableAverageShardingStrategy;            
	int                                                OptiHttpConfig_uAverageShardingSize;                      
	int                                                OptiHttpConfig_uEnableDynamicExpansionMaxTask;            
	float                                              PreFetchODPaks_StartTime;                                 
	unsigned char                                      UnknownData07[0x4];                                       
	struct FString                                     PreFetchODPaks_ConfigName;                                
	unsigned char                                      UnknownData08[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GCPufferDownloader");
		return pStaticClass;
	}


	bool StopTask(uint64_t TaskID);
	int StopMergeBinDiffPak(int outterTaskID);
	bool StopCheckDownloadFileFraming(int outterTaskID);
	void StopBGDownloadNotification();
	bool StopAllTask();
	void StartDownloadItem(uint32_t ItemId, uint32_t Priority, const struct FScriptDelegate& downloadDelegate);
	void StartBGDownloadNotification(uint64_t InDownloadedSize);
	void StartBatchDownloadItem(TArray<uint32_t> ItemIDs, uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate);
	void SetTempProductIdBase(int ProductIdRaw);
	void SetPrefetchConfig(bool pakEnable, bool fileClearEnable, bool convertEnable, int reserveredDiskSpace, const struct FString& FileList, int InPreFetchODPaksMaxNum, int InPreFetchODPaksBatchSize);
	void SetIOSBGDownloadAttribute(bool bEnableCellularAccess, bool bEnableResumeData, int nMinFileSize, int nMaxTasks);
	bool SetImmDLPollingTime(int InPollingTime);
	bool SetImmDLMaxTask(int InMaxTask);
	bool SetImmDLMaxSpeed(uint64_t MaxSpeed);
	bool SetImmDLMaxDownloadsPerTask(int InMaxDownloadsPerTask);
	bool SetImmDLGapSize(int InGapSize);
	void SetBattleDownloadSwitch(bool Enable);
	static int ReturnSplitMiniPakFilelist_LuaState();
	static int ReturnSplitLobbyPakFileList_LuaState();
	static int ReturnLocalFiles_LuaState();
	uint64_t RequestFile(const struct FString& FilePath, bool ForceUpdate, const struct FString& InUA);
	bool RemountPakFiles();
	struct FString ReadFile(const struct FString& Filename);
	bool PreFetchPakFiles();
	int PreFetchODPakFilesUpdate();
	bool PreFetchODPakFilesPreProcess(bool Start);
	bool PreFetchODPakFilesPostProcess(int ErrorCode);
	bool PreFetchODPakFiles(bool Start);
	void OnItemDownloadedInFighting(const struct FString& PackHash, const struct FString& ErrorCode);
	void OnHashGenerateFinished(int outterTaskID, const struct FString& hashCode);
	int MoveFileTo(const struct FString& Filename, const struct FString& From, const struct FString& To);
	int MoveFile(const struct FString& From, const struct FString& To);
	int MergeBinDiffPak(int outterTaskID, const struct FString& PakFilenameOld, const struct FString& PakFilenameDiff, const struct FString& PakFilenameNew, bool fast);
	bool IsODPaks(const struct FString& FilePath);
	bool IsODFileExists(const struct FString& Path);
	bool IsInitSuccess();
	bool IsFileReady(const struct FString& FilePath);
	bool IsFileExist(const struct FString& Filename, const struct FString& extension);
	bool InitializeODPaks();
	struct FString GetTempWorkPath();
	int GetPufferInitSuccessNum();
	int GetPufferInitingNum();
	int GetPufferChannelNum();
	void GetProductIDBase(TArray<int>* ProductIDs);
	void GetProductID(TArray<int>* ProductIDs);
	int GetODPakNum();
	struct FString GetODPakName(const struct FString& Path);
	uint32_t GetInitErrcode();
	uint64_t GetFileSizeCompressed(const struct FString& FilePath);
	float GetFileSize(const struct FString& Filename);
	struct FString GetDownloadPath();
	float GetCurrentSpeed();
	int GetBatchODPaksDownloadList_LuaState();
	void EnableUseOldInterface(bool Enable);
	void DynamicAdjustPufferSystemParameter(int InPufferParameterKey, const struct FString& InPufferParameterValue);
	bool DeleteFileEvenIfUnfinished(const struct FString& FilePath);
	static bool DeleteFile(const struct FString& fullPath);
	bool ConvertPreFetchFiles();
	struct FString ConvertItemIdToPakName(uint32_t ItemId);
	bool ClearUselessODPaks();
	bool ClearPreFetchODPaksFiles();
	bool ClearPreFetchFiles();
	bool CheckDownloadFileFraming(int outterTaskID, const struct FString& Filename, int chunkSize);
};




class UGMLogShare : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GMLogShare");
		return pStaticClass;
	}


	static void ShareLogFile(const struct FString& InLogFileName);
	static void Init();
};




class UIMSDKNotice : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.IMSDKNotice");
		return pStaticClass;
	}


	TArray<struct FIMSDKNoticeInfo> GetNotice(const struct FString& Scene);
	static class UIMSDKNotice* GetInstance();
	void ClearNotice();
};




class UHttpWrapper : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnResponseEvent;                                          
	struct FScriptMulticastDelegate                    OnImageDownloadResponseEvent;                             
	unsigned char                                      UnknownData00[0x68];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.HttpWrapper");
		return pStaticClass;
	}


	void SimplePostForLua(const struct FString& URL, const struct FString& Content, int Priority, int QueueType);
	void SetQueueSize(int QueueType, int InSize);
	void SetQueueEnable(bool InEnableQueue);
	void SetPoolEnable(bool InEnablePool);
	int RequestForLua(const struct FString& URL, const struct FString& Verb, const struct FString& Content, int Priority, int QueueType, TMap<struct FString, struct FString>* Headers);
	int ImageDownloadRequestForLua(const struct FString& URL, const struct FString& Verb, const struct FString& Content, int Priority, TMap<struct FString, struct FString>* Headers);
	bool GetQueueEnable();
	bool GetPoolEnable();
	int GetInternalIndex();
	void CancelRequestAll(int QueueType);
	void CancelRequest(int QueueType, int ReqIndex);
};




class UImageDownloader : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                
	struct FScriptMulticastDelegate                    OnFail;                                                   
	struct FString                                     FileURL;                                                  
	struct FString                                     CompreesedFileUrl;                                        
	struct FString                                     FileSavePath;                                             
	struct FString                                     CompreesedFileSavePath;                                   
	struct FString                                     UrlHash;                                                  
	struct FString                                     CompreesedUrlHash;                                        
	bool                                               InvalidImageFormat;                                       
	bool                                               SaveDiskFile;                                             
	bool                                               ForceUpdate;                                              
	unsigned char                                      UnknownData00[0x5];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ImageDownloader");
		return pStaticClass;
	}


	void Start(const struct FString& URL);
	static class UImageDownloader* MakeDownloaderInGame();
	static class UImageDownloader* MakeDownloader();
	class UTexture2D* GetTextureFromUrlWithoutDownload(const struct FString& URL);
	static struct FString CheckAndGetEncryptUrl(struct FString* InURL);
};




class UImageDownloadUtil : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ImageDownloadUtil");
		return pStaticClass;
	}


	void SaveImageDownloadDiskFile(TArray<unsigned char> OutArray, const struct FString& SavePath);
	class UTexture2D* GetTextureFromMemory(const struct FString& PathName);
	class UTexture2D* GetTexture2DFromDisk(const struct FString& SavePath, bool IsCompressed);
	class UTexture2D* GetTexture2DFromArrayWithSRGB(TArray<unsigned char> OutArray, bool IsCompressed, bool bSRGB);
	class UTexture2D* GetTexture2DFromArray(TArray<unsigned char> OutArray, bool IsCompressed);
	int GetLocalImageFormat(const struct FString& Path);
	void CheckDiskFile(const struct FString& ImgDir, const struct FString& SubDir);
};




class UInGameUIManager : public UGameBusinessManager
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<class UClass*>                              InGameUIList;                                             
	unsigned char                                      UnknownData01[0x68];                                      
	TMap<struct FString, TWeakObjectPtr<class UUAEUserWidget>> WidgetsMap;                                               
	TMap<int, struct FDynamicWidgetAsyncLoadData>      PendingAsyncLoadRequests;                                 
	unsigned char                                      UnknownData02[0xD8];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.InGameUIManager");
		return pStaticClass;
	}


	void SubUIWidgetListWithMountData(TArray<struct FInGameWidgetData> InGameWidgetDataList, TArray<struct FString> GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly, int inUIControlState);
	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly);
	void SubDynamicUIWidgetList(TArray<struct FDynamicWidgetData> DynamicWidgetMap);
	void OnAsyncLoadWidgetClassObj(class UObject* InClassObj, int RequestID);
	void HandleUIMessage(const struct FString& UIMessage);
	void HandleMountWidget(class UInGameUIManager* IngameManager);
	void HandleDynamicDestroy();
	void HandleDynamicCreation(bool isAsyncLoad);
	void GetWidgetHandleAsyncWithCallBack(const struct FString& WidgetKey, const struct FScriptDelegate& InCallback);
	class UUAEUserWidget* GetWidgetHandle(const struct FString& WidgetKey);
	class UCanvasPanel* GetMountCanvasPanel(const struct FString& MountOuterName, const struct FString& MountName);
	void ChangeSubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList);
	void ChangeInvalidWorldNameList(TArray<struct FString> InList);
};




class UIntlSDKComplianceHelper : public UObject
{
public:
	struct FString                                     IntlSdkGameId;                                            
	struct FString                                     IntlSdkUrl;                                               
	struct FString                                     IntlSdkUrlDebug;                                          
	struct FString                                     IntlSdkKey;                                               
	bool                                               IntlSdkEnable;                                            
	bool                                               IntlLogEnable;                                            
	unsigned char                                      UnknownData00[0x6];                                       
	struct FString                                     IntlHttpDnsIP;                                            
	struct FString                                     IntlPf;                                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.IntlSDKComplianceHelper");
		return pStaticClass;
	}


	bool SetUserProfile(const struct FString& InRegion);
	void SetParentStatus(int ParentCertificateStatus);
	void SetLogConfig(bool enableConsoleLog, bool enableFileLog, int LogLevel);
	void SetEUAgreeStatus(int AgreeStatus);
	void SetAdulthood(int AgeStatus);
	void SendVoiceControlEmail(const struct FString& InEmail, const struct FString& InUserName);
	void SendEmail(const struct FString& InEmail, const struct FString& UserName, int InScene);
	void QueryUserStatus();
	void QueryIsEEA(const struct FString& InRegion);
	void QueryConfig();
	void OpenConsentSocial(const struct FString& InBaseUrl, const struct FString& InParamJson, const struct FString& InExtraJson);
	void OpenAgeGate(const struct FString& InBaseUrl, const struct FString& InParamJson, const struct FString& InExtraJson);
	void OnMSDKEvnSwitched(int Env);
	static class UIntlSDKComplianceHelper* GetInstance();
	void ComplianceInit();
	void CommitBirthday(const struct FString& InBirthday);
	void ClearUserStatus();
	void ChangeRegion(const struct FString& InRegion);
};




class ULaggingReporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	unsigned char                                      UnknownData01[0x48];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LaggingReporter");
		return pStaticClass;
	}

};




class ULiveBroadcast : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LiveBroadcast");
		return pStaticClass;
	}


	void SetFullScreen(bool FullScreen);
	void OpenLiveBroadcast(const struct FString& URL, float Margin);
	static class ULiveBroadcast* GetInstance();
	void CloseWebView();
	static void C2JSetString(const struct FString& str);
	void C2JSetIndex(int Index);
};




class ULoadTexture : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LoadTexture");
		return pStaticClass;
	}


	static class UTexture2D* LoadTexture2D(const struct FString& ImagePath, bool* IsValid, int* OutWidth, int* OutHeight);
	static class UTexture2D* GetTexture2DFromDiskFile(const struct FString& FilePath);
};




class ULobbyChatSecurity : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbyChatSecurity");
		return pStaticClass;
	}


	static struct FString GetKey(const struct FString& OpenID);
};




class ULobbyDecalBakingComponent : public USceneComponent
{
public:
	TArray<struct FDecalParameter>                     DecalParams;                                              
	class UTextureRenderTarget2D*                      DecalRenderTarget;                                        
	class ADecalBakingActor*                           DecalBakingActor;                                         
	int                                                RTSize;                                                   
	unsigned char                                      UnknownData00[0xC];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbyDecalBakingComponent");
		return pStaticClass;
	}


	void SwitchDecalParam(int From, int To);
	bool SavePng(class USceneCaptureComponent2D* SceneCapComp, const struct FString& ImagePath, const struct FLinearColor& ClearColor);
	void ReplaceOneDecalParam(class UStaticMeshComponent* MeshComp, int Index, class UDecalBakingParameterComponent* DecalParamComponent);
	void Init();
	void DelOneDecalParam(int Index);
	void Baking(class UStaticMeshComponent* MeshComp, class UMaterial* DecaledMaterial, bool Async);
	void AddOneDecalParam(class UStaticMeshComponent* MeshComp, class UDecalBakingParameterComponent* DecalParamComponent);
};




class ALobbyMatChgActor : public AActor
{
public:
	class UStaticMeshComponent*                        stMesh;                                                   
	TArray<struct FLobbyBgMatData>                     matWaitToChangeList;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbyMatChgActor");
		return pStaticClass;
	}


	void ChangeMaterialToIdx(int idx);
};




class ULobbyModelUtils : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbyModelUtils");
		return pStaticClass;
	}


	static void TickAndRefreshBoneForGivenSkMeshComp(class USkeletalMeshComponent* InSkMesh);
	static struct FAABBBox GetActorBoundingBox(class AActor* InActor, bool EnableDrawDebugBox);
	static bool DeprojectScreenToWorldFast(class APlayerController* Player, const struct FVector2D& ScreenPosition, struct FVector* WorldPosition, struct FVector* WorldDirection);
};




class ALobbySceneCaptureActor : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnCaptureError;                                           
	struct FString                                     PicturePath;                                              
	struct FVector2D                                   RTSize;                                                   
	bool                                               AlphaFullCorrect;                                         
	bool                                               AlphaReverse;                                             
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              AlphaRate;                                                
	bool                                               AlphaChannelEnable;                                       
	bool                                               GammaCorrect;                                             
	bool                                               HSSave;                                                   
	bool                                               ClearDrawRT;                                              
	unsigned char                                      UnknownData01[0x4];                                       
	class UMaterialInstance*                           WriteMat;                                                 
	class UTextureRenderTarget2D*                      DrawRT;                                                   
	class USceneCaptureComponent2D*                    Capture2D;                                                
	class USceneCaptureComponent2D*                    AlphaCapture2D;                                           
	float                                              ScreenWidth;                                              
	float                                              ScreenHeight;                                             
	struct FVector2D                                   AABBBoxLeftPoint;                                         
	struct FVector2D                                   AABBBoxRightPoint;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbySceneCaptureActor");
		return pStaticClass;
	}


	void ResizeRT();
	void LogError(const struct FString& FilePath);
	void Capture();
};




class ULuaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaBlueprintLibrary");
		return pStaticClass;
	}


	static struct FLuaBPVar StringToLVar(class UObject* WorldContextObject, const struct FString& Value);
	static void RequireAndCallLuaWithArgs(class UObject* WorldContextObject, const struct FLuaBPVar& InD, const struct FLuaBPVar& InC, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, struct FString* FunctionName, struct FString* ModulePath, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	static struct FLuaBPVar ObjectToLVar(class UObject* WorldContextObject, class UObject* O);
	static struct FString LVarToString(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static class UObject* LVarToObject(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static int LVarToInt(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static float LVarToFloat(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static bool LVarToBool(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static struct FLuaBPVar IntToLVar(class UObject* WorldContextObject, int Value);
	static struct FLuaBPVar FloatToLVar(class UObject* WorldContextObject, float Value);
	static void CallLuaWithMultiArgs(class UObject* WorldContextObject, const struct FLuaBPVar& InF, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, const struct FLuaBPVar& InD, const struct FLuaBPVar& InE, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	static void CallLuaWithHUD(class UObject* WorldContextObject, class UGameFrontendHUD* GameFrontendHUD, const struct FLuaBPVar& InD, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	static void CallLuaWithArgs(class UObject* WorldContextObject, const struct FLuaBPVar& InD, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	static void CallLua(class UObject* WorldContextObject, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	static struct FLuaBPVar BoolToLVar(class UObject* WorldContextObject, bool Value);
};




class ULuaBlueprintMgr : public UObject
{
public:
	TMap<struct FString, class ULuaBluepirntSys*>      SystemMap;                                                
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaBlueprintMgr");
		return pStaticClass;
	}


	class ULuaBluepirntSys* GetSystemByName(const struct FString& SystemName);
	void AddSystem(const struct FString& SystemName, const struct FString& BPPath);
};




class ULuaBluepirntSys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaBluepirntSys");
		return pStaticClass;
	}


	void Init();
};




class ALuaClassObj : public ALuaContext
{
public:
	class UGameBusinessManager*                        pManager;                                                 
	unsigned char                                      UnknownData00[0x2];                                       
	bool                                               bClearSourceCodeAfterInitialized;                         
	unsigned char                                      UnknownData01[0x45];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaClassObj");
		return pStaticClass;
	}


	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool bPersistentUI, bool InStatusConcern, bool bDynamicWidget, bool bKeepDynamicWidget);
	void SubShowHideEvent(TArray<struct FString> WidgetPathList);
	void SubDefaultSceneCamera(int sceneCameraIndex);
	void SubDefaultChildUI(TArray<struct FString> childList);
	void SubDefaultBaseUI(const struct FString& baseUI);
	void SubCollapseWidgetList(const struct FString& RootWidgetName, TArray<struct FString>* ChildWidgetNames);
	void SetWidgetZorder(int Index, int ZOrder);
	void RestoreWidgetZorder(int Index);
	void RestoreAllWidgetZorder();
	bool IsTopStackPanel();
	bool IsPushedPanel();
	void HandleUIMessageNoFetch(const struct FString& UIMessage);
	void HandleUIMessage(const struct FString& UIMessage);
	void HandleStopAsyncLoad();
	void HandleDynamicDestroy();
	void HandleDynamicCreationInternal(bool isAsyncLoad);
	void HandleDynamicCreation(bool isAsyncLoad);
	void HandleCollapseWidgetList(const struct FString& RootWidgetName);
	struct FString GetTopStackPanelSrcTag();
	struct FString GetTopStackPanelDstTag();
	struct FString GetGameStatus();
	void ChangeSubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList);
	void AddToTopStackPanel();
};




class UMaskBox : public UContentWidget
{
public:
	int                                                Phase;                                                    
	int                                                PhaseCount;                                               
	bool                                               IgnoreStretch;                                            
	bool                                               UpdateRenderTarget;                                       
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                MaskType;                                                 
	struct FVector2D                                   MaskTransformPivot;                                       
	struct FVector2D                                   MaskTransformScale;                                       
	float                                              MaskTransformAngle;                                       
	unsigned char                                      UnknownData01[0x4];                                       
	class UMaterialInterface*                          MaskMaterial;                                             
	class UTexture2D*                                  MaskTexture;                                              
	unsigned char                                      UnknownData02[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.MaskBox");
		return pStaticClass;
	}


	void SetMaskTransformScale(const struct FVector2D& Scale);
	void SetMaskTransformPivot(const struct FVector2D& Pivot);
	void SetMaskTransformAngle(float Angle);
	void SetMaskMaterial(class UMaterialInterface* EffectMaterial);
	void SetBrushFromTexture(class UTexture2D* Texture);
	struct FVector2D GetVector2D__DelegateSignature();
	class UMaterialInstanceDynamic* GetMaskMaterial();
};




class UMaskImage : public UImage
{
public:
	bool                                               bIgnoreStretch;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                MaskType;                                                 
	struct FVector2D                                   MaskTransformPivot;                                       
	struct FVector2D                                   MaskTransformScale;                                       
	float                                              MaskTransformAngle;                                       
	unsigned char                                      UnknownData01[0x4];                                       
	class UMaterialInterface*                          MaskMaterial;                                             
	class UTexture2D*                                  MaskTexture;                                              
	unsigned char                                      UnknownData02[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.MaskImage");
		return pStaticClass;
	}


	void SetMaskTransformScale(const struct FVector2D& Scale);
	void SetMaskTransformPivot(const struct FVector2D& Pivot);
	void SetMaskTransformAngle(float Angle);
	void SetMaskTexture(class UTexture2D* Texture);
	void SetMaskMaterial(class UMaterialInterface* InEffectMaterial);
	class UMaterialInstanceDynamic* GetMaskMaterial();
};




class UNewButton : public UButton
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.NewButton");
		return pStaticClass;
	}


	void SetClickSound(EButtonClickSoundTypes inSoundType);
};




class UPandoraV2Helper : public UObject
{
public:
	struct FScriptMulticastDelegate                    CallGameDelegate;                                         
	struct FScriptMulticastDelegate                    JumpDelegate;                                             
	struct FScriptMulticastDelegate                    AddUserWidgetToGameDelegate;                              
	struct FScriptMulticastDelegate                    RemoveUserWidgetFromGameDelegate;                         
	struct FScriptMulticastDelegate                    PlaySoundDelegate;                                        
	struct FScriptMulticastDelegate                    GetAccountTokenDelegate;                                  
	struct FScriptMulticastDelegate                    GetCurrencyDelegate;                                      
	struct FScriptMulticastDelegate                    ShowItemTipsDelegate;                                     
	struct FScriptMulticastDelegate                    ShowItemIconDelegate;                                     
	struct FScriptMulticastDelegate                    ShowItemDelegate;                                         
	struct FScriptMulticastDelegate                    ActivityProgressDelegate;                                 
	struct FScriptMulticastDelegate                    ActivityCompleteDelegate;                                 
	struct FScriptMulticastDelegate                    RemoteConfigStatusDelegate;                               
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.PandoraV2Helper");
		return pStaticClass;
	}


	void UpdateActivityAndLoad(const struct FString& InActivityName);
	void SetUserData(TMap<struct FString, struct FString> InUserdata);
	void SetSDKVersion(int InSDKVer);
	void SetSDKCoreDataPath(const struct FString& InPath);
	void SetPandoraEnable(bool Enable);
	bool SetLuaCoreData(const struct FString& InFilePath);
	static void SetLogEnable(bool Enable);
	void SetLiteMode(bool bEnable);
	void RetryStartUp();
	void ResumeLuaGC();
	void RefreshUserDataTokens();
	void PauseLuaGC();
	bool IsLiteMode();
	void Init(bool InEnable, int InEnv, bool InEnablePixUI);
	int GetSDKVersion();
	int GetRemoteConfigStatus();
	struct FString GetAllActivityStatus();
	struct FString GetActivityStatus(const struct FString& InActivityName);
	static class UPandoraV2Helper* Get();
	void Do(const struct FString& InCmdJson, int InMsgType);
	void Deinit();
	void Close();
};




class UPublishAreaMgr : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.PublishAreaMgr");
		return pStaticClass;
	}


	static void SelectArea(const struct FString& InArea);
	static bool IsMultiAreaBuild();
	static struct FString GetString(const struct FString& InKey, const struct FString& InDefaultValue);
	static struct FString GetPublishAreas();
	static int GetInt(const struct FString& InKey, int InDefaultValue);
	static bool GetBool(const struct FString& InKey, bool InDefaultValue);
	static struct FString GetArea();
};




class USavedFileUtil : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.SavedFileUtil");
		return pStaticClass;
	}


	static int LoadFileToArrayAsync(const struct FString& AssetPath, const struct FSluaBPVar& Callback);
	static int64_t GetFileCreationTime(const struct FString& Filename);
	static void GetDirSizeAsync(const struct FString& Dir, bool Recursive, const struct FSluaBPVar& Callback);
	static int64_t GetDirSize(const struct FString& Dir, bool Recursive);
	static void FindFilesAsync(const struct FString& Dir, const struct FString& Pattern, bool Recursive, const struct FSluaBPVar& Callback);
	static TArray<struct FString> FindFiles(const struct FString& dirPath, const struct FString& extension, bool Recursive);
	static void DeleteDirectoryAsync(const struct FString& Dir, const struct FSluaBPVar& Callback);
	static bool CleanupDirectoryBySize(const struct FString& Dir, int MaxSize, const struct FString& extension);
	static bool CancelLoadSavedFile(int Handle);
};




class UScatterPlot : public UWidget
{
public:
	struct FSlateBrush                                 PointBrush;                                               
	TArray<struct FScatterPlotPoint>                   Points;                                                   
	class UCurveFloat*                                 WeightToScaleCurve;                                       
	class UCurveLinearColor*                           WeightToColorCurve;                                       
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScatterPlot");
		return pStaticClass;
	}


	void SetPoints(TArray<struct FScatterPlotPoint> InPoints);
	void SetPointBrush(const struct FSlateBrush& InBrush);
	void Empty(int Slack);
	void Apply();
	void Add(const struct FScatterPlotPoint& InPoint);
};




class UScreenInput : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnScreenTouch;                                            
	struct FScriptDelegate                             OnMouseButtonUp;                                          
	struct FScriptDelegate                             OnMouseButtonDown;                                        
	struct FScriptDelegate                             OnMotionDetected;                                         
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScreenInput");
		return pStaticClass;
	}


	void Shutdown();
	void OnScreenTouch__DelegateSignature();
	void OnMouseButtonDown__DelegateSignature(const struct FVector2D& ContainerPos);
	void OnMotionDetected__DelegateSignature(const struct FVector& Tilt, const struct FVector& RotationRate, const struct FVector& Gravity, const struct FVector& Acceleration);
	void Init();
};




class UScreenshotMaker : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScreenshotMaker");
		return pStaticClass;
	}


	static void SetDefaultShowUI(bool ShowUI);
	static bool SaveToPhotosAlbumEx(const struct FString& pathStr);
	static bool SaveToPhotosAlbum(const struct FString& pathStr);
	static bool RotateCropPicture(const struct FString& srcPath, const struct FVector4& CropRect, int Angle, const struct FString& DstPath, int Quality);
	static void ResizePicture(const struct FString& pathStr, float Scale, const struct FString& savePathStr);
	static void ReMakePicture(const struct FString& pathStr, const struct FVector4& Vector4);
	static struct FString ReMakeMomentPicture(const struct FString& srcPath, const struct FVector4& Vector4);
	static bool MosaicPictureByLocalImage(TArray<struct FString> Paths, const struct FString& toPath, int Width, float Scale);
	static class UTextureRenderTarget2D* MakeWidgetScreenshot(class UWidget* Widget, const struct FVector2D& DrawSize, float Scale);
	static struct FString MakePictureWithName(const struct FString& PicName);
	static struct FString MakePictureToLua(class UGameFrontendHUD* InFrontendHUD, const struct FString& tableName, const struct FString& FunctionName, bool isShowUI);
	static struct FString MakePictureByName(const struct FString& PicName, bool ShowUI);
	static struct FString MakePicture(bool isShowUI);
	static struct FString MakeBugReprotPic(bool isShowUI);
	static bool HasCaptured(const struct FString& pathStr);
	static int GetSaveStatus();
	static int GetPhotoHash(const struct FString& pathStr, int algorithmVersion);
	static TArray<struct FString> GetMomentThumbPictureFullPathFiles();
	static TArray<struct FString> GetMomentPictureFullPathFiles();
	static int GetHashFromArray(TArray<unsigned char> inArray, int algorithmVersion);
	static void CropAndResizePicture(const struct FString& pathStr, float Scale, float cropWidthScale, float cropHeightScale, const struct FString& savePathStr);
};




class UScriptHelperClient : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScriptHelperClient");
		return pStaticClass;
	}


	static bool WriteFileAtPath(const struct FString& FilePath, const struct FString& Content);
	static void WakeupFromSuspendSound();
	static int VPNTearDown();
	static int VPNSetUserInfo(const struct FString& InUserId, const struct FString& InUserToken, const struct FString& InAppId);
	static int VPNSetPortRange(int Min, int Max);
	static int VPNSetNodelist(const struct FString& InNodelist);
	static int VPNPrepare();
	static int VPNHandUp();
	static struct FString VPNGetNodeRegionList();
	static int VPNDialUp(const struct FString& InRegion);
	static void Vibrate(int Param);
	static bool VerifySavFileData(int CompressedSize, int UncompressedSize, int ToCheckEndWithCDLength, TArray<unsigned char>* ByteArray);
	static bool USFSIsNewestVersion();
	static TArray<struct FString> USFSGetUpgradeDiffList();
	static void USFSDeletePkg_V2(const struct FString& PkgOrig);
	static void USFSDeletePkg(const struct FString& PkgOrig);
	static void USFSCacheSysContextUpdatePkgPatch(TMap<struct FString, int> PkgPaths);
	static void USFSCacheSysContextUpdatePkgDiff(TArray<struct FString> PkgDiffPaths);
	static void USFSCacheSysContextUpdatePkgBinDiff(TArray<struct FString> PkgDiffPaths);
	static void USFSCacheSysContextUpdatePkg(TArray<struct FString> PkgPaths);
	static void USFSCacheSysContextSwitchWrite(bool bSwitch);
	static void USFSCacheSysContextSwitchAll(bool bSwitch);
	static void USFSCacheSysContextStart();
	static void USFSCacheSysContextChangePkgName(TArray<struct FString> PkgChgInfo);
	static void USFSCacheSysContexInit(TMap<struct FString, struct FString> PkgNameToConHash);
	static struct FString UserName();
	static struct FString UrlEncode(const struct FString& UnencodedString);
	static void UQMSetAppVersion(const struct FString& Version);
	static void UQMCrashReportStuck(int threadId, int maxChecks, int64_t CheckInterval, const struct FString& Name, const struct FString& Message, const struct FString& ExtraInfo, int dumpNativeType);
	static void UQMCrashPutUserData(const struct FString& Key, const struct FString& Value);
	static void UQMCrashPostExceptionWithCustomData(int Category, const struct FString& stack, TMap<struct FString, struct FString> customData, int dumpNativeType);
	static void UQMCrashPostExceptionFullWithCustomData(int Category, const struct FString& Name, const struct FString& Reason, const struct FString& stack, TMap<struct FString, struct FString> customData, int dumpNativeType);
	static void UQMCrashPostExceptionFull(int Category, const struct FString& Name, const struct FString& Msg, const struct FString& stack, int dumpNativeType);
	static void UQMCrashPostException(int Category, const struct FString& Reason, int dumpNativeType);
	static void UQMCrashLog(int Level, const struct FString& Tag, const struct FString& Log, bool needDump);
	static void UploadGainCrashLogBackground();
	static void UpdateServerTimeInSec();
	static void UpdatePublishRegionForBattle();
	static bool UpdatePkgCompressionInfo(TArray<struct FString> PkgList, const struct FString& CompressMethod);
	static void UpdateMemResource(const struct FString& ResType, const struct FString& Keyword);
	static void UpdateAkAudioDeviceBluetoothDelay(int InDelayTime);
	static void UnsubscribeFromTopic(const struct FString& Topic);
	static bool UnmountPakFile(const struct FString& InPakFilename);
	static void UnmapUnusedMap();
	static void UnitTestODPaksOpen(int fileCount, int Times, int threadNum);
	static void TVMacroTesting();
	static bool TryApplyDeviceMotionBody();
	static void TrimEngineMemory();
	static void TriggerTouchEvent(float X, float Y, int event_type);
	static void TriggerTestCmd(const struct FString& Cmd);
	static void TriggerOOMCrash();
	static void TriggerNativeDump(int DumpCount, double Timespan, int NativeDumpType);
	static void TriggerLoginCrashTest(int Type);
	static void TriggerLobbyCrashTest(int Type);
	static void TriggerBlockAndroidANR();
	static void TPerforPlatReport(int Type, const struct FString& ExtraInfo, bool Send);
	static void TPerforPlatPostLargeValueS(const struct FString& catgory, const struct FString& Key, const struct FString& Value);
	static void TPerforPlatMarkTime(int Type);
	static void TPerforPlatMarkLevelLoad(const struct FString& SceneName, int DeviceLevel);
	static void TPerforPlatMarkLevelFin();
	static void TPerforPlatDisconnectReport(class UGameFrontendHUD* GameFrontendHUD, int EventID);
	static void TPerforPlatDataReport(class UGameFrontendHUD* GameFrontendHUD, int EventID, const struct FString& EventInfo);
	static void TMFPSwitchRichTapMode(const struct FString& Mode);
	static void TMFPStopRichTap();
	static void TMFPStartRichTapWithData(const struct FString& InKey, TMap<struct FString, struct FString> InMapData);
	static void TMFPStartRichTap(const struct FString& Filename);
	static struct FString TMFPLoadHeFile(const struct FString& StrFilePath);
	static struct FString TMFPGetRichTapSupport();
	static struct FString TMFPGetRichTapAmplitudeSupport();
	static void TickODPakRuntimeCache();
	static void TestSaveStringToFile(const struct FString& String, const struct FString& TargetDir, const struct FString& FullPathName);
	static void TestLoadGameSlotMultiThread();
	static void TestLoadGameSlot();
	static uint64_t TestCallCvmFuncWithVarArg(int FuncID, TArray<struct FString> Arguments);
	static int Tea2Encrypt_LuaState();
	static int Tea2Decrypt_LuaState();
	static int TakeHighResScreenshot_LuaState();
	static bool TakeHighResScreenshot(const struct FString& Filename, int ResolutionX, int ResolutionY, float ResolutionScale);
	static struct FString SystemLanguageId();
	static void SyncLoadPackageUpdateCurrentWorldStage(const struct FString& WorldStage);
	static void SyncLoadPackageUpdateCurrentWorldName(const struct FString& WorldName);
	static void SyncLoadPackageInfoCollect(const struct FString& PackageName, const struct FString& WorldName);
	static TArray<struct FString> SyncLoadPackageGetPackageListForWorld(const struct FString& WorldName);
	static void SyncLoadInfoCollector_Reset();
	static void SyncLoadInfoCollector_OnLevelStart();
	static void SyncLoadInfoCollector_OnLevelEnd();
	static void SwitchUser(bool useExternalAccount, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void SwitchSceneCamera(class UGameFrontendHUD* GameFrontendHUD, const struct FString& SceneCameraName, float BlendTime, bool bForce);
	static void SwitchOutputDeviceFileLog();
	static void SwitchMapMangedTickProfile(int MapID);
	static void SuspendSound();
	static void SuppressSwap();
	static void SubscribeToTopic(const struct FString& Topic);
	static struct FString StringToJsonString(const struct FString& String);
	static void StopUIStat(const struct FString& UIName, bool bReport);
	static struct FTouchInputRecord StopTouchRecord();
	static bool StopTask(class UGameFrontendHUD* GameFrontendHUD, uint64_t TaskID);
	static bool StopShaderPrecompile();
	static void StopPuffer(class UGameFrontendHUD* GameFrontendHUD);
	static void StopMonitorFileModified();
	static void StopHapticsEngine();
	static void StopH5Downloading();
	static void StopBluetoothMonitor();
	static void StartUIStat(const struct FString& UIName);
	static void StartTrace(const struct FString& InHost, int InStartTTL, int InMaxTTL, int InCount, const struct FString& InExtraData);
	static void StartTouchRecord();
	static bool StartShaderPrecompile();
	static void StartOpenReadCollect(class UGameFrontendHUD* GameFrontendHUD, bool bStart);
	static void StartMonitorFileModified(const struct FString& Filename, int Mask);
	static void StartHapticsEngine(const struct FScriptDelegate& Callback);
	static bool StartGrayUpdate(class UGameFrontendHUD* GameFrontendHUD);
	static void StartDownloadItem(uint32_t ItemId, uint32_t Priority, const struct FScriptDelegate& OnItemDownloadDelegate);
	static void StartDolphinResourceUpdate(class UGameFrontendHUD* GameFrontendHUD);
	static void StartCDNUpdateAfterDolphinUpdateFailed(class UGameFrontendHUD* GameFrontendHUD);
	static void StartBluetoothMonitor(int DelayMs);
	static void StartBatchDownloadItem(uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate, TArray<uint32_t>* ItemIDs);
	static void SnapshotLobbyUObjects(const struct FString& Tag);
	static void SimpleXOREncryptDecrypt(unsigned char Key, TArray<unsigned char>* Data);
	static void ShutdownUnrealNetwork(class UGameFrontendHUD* GameFrontendHUD);
	static void ShutdownPuffer(class UGameFrontendHUD* GameFrontendHUD);
	static void ShrinkUObjectHashTables();
	static void ShrinkDrawBuffer();
	static void ShowWebView(bool Show);
	static void ShowVLink(const struct FString& jsonString, const struct FString& signString);
	static void ShowVideoListDialog();
	static void ShowScreenDebugMessage(const struct FString& Message);
	static void ShowH5WebView();
	static void ShorterStreamingDistanceWhenGameEnd(uint32_t Distance);
	static void ShareWithPhotoByChannel(const struct FString& _messageExt, const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _url, const struct FString& _messageAction, int _channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void ShareLogFile(const struct FString& InLogFileName);
	static struct FString SHA256Bytes(TArray<unsigned char> inArray);
	static struct FString SHA256(const struct FString& str);
	static struct FString SHA1(const struct FString& str);
	static void SetWebviewPosition(int X, int Y, int W, int H);
	static void SetWebViewCacheInfoDelegate(const struct FScriptDelegate& Delegate);
	static bool SetVpnServiceStrategy(const struct FString& InKey, int InValue);
	static void SetVoiceSwitch(class UGameFrontendHUD* GameFrontendHUD, bool FirstVoicePopupSwitch, bool GDPRForbidVoiceSwitch, bool GDPRSettingSwitch);
	static void SetVoiceReEneterInfo(class UGameFrontendHUD* GameFrontendHUD, float Duration, int MaxCount);
	static void SetUserVulkanSetting(bool Enable);
	static void SetUserTMFPTapEnableFlag(int EnableFlag);
	static void SetUserProperty(const struct FString& propertyKey, const struct FString& propertyValue);
	static void SetUseMouseForTouch(bool bUse);
	static bool SetUpdatedSoPatchFile(const struct FString& InSourceFile, int InABI);
	static void SetupAkAudioDeviceListener();
	static void SetUIStatMaxClickTimes(int Times);
	static void SetUIConfigTMFPTapEnableFlag(int uiEnable);
	static void SetUDPPingControlFlag(int Lock, int BindType);
	static void SetTssNetworkStatus(class UGameFrontendHUD* GameFrontendHUD, int status);
	static void SetTMFPTapWhiteListFlag(int TapWhiteList);
	static void SetTextureGroupLODBias(unsigned char GroupID, int MipBias);
	static void SetTestEditorNum(int PlayerCount, const struct FString& Num, const struct FString& SceneName, int Platform);
	static bool SetSoundEffectQuality(int Type);
	static void SetShowFriendObservers(class UGameFrontendHUD* GameFrontendHUD, bool bShow);
	static void SetServerTimeInSec(int64_t InServerTimeInSec);
	static void SetSelfieSwitch(class UGameFrontendHUD* GameFrontendHUD, bool SelfieSwitch);
	static int SetSdkIoctl(class UGameFrontendHUD* GameFrontendHUD, int Request, struct FString* Token);
	static void SetScreenPadding(const struct FMargin& InPadding);
	static void SetReportBugSwitch(class UGameFrontendHUD* GameFrontendHUD, bool ReportBugSwitch);
	static void SetRemoteResource(class UObject* DescObj, struct FString* AssetId);
	static void SetRegionNoByLua(int regionNo, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void SetRedBloodSwitch(bool redBloodSwitch);
	static void SetPufferBuildInfo(const struct FString& PipeLineID, const struct FString& BuildNo);
	static void SetPublishRegion(const struct FString& Region);
	static void SetPlayerBaseInfo(class UGameFrontendHUD* GameFrontendHUD, const struct FString& OpenID, uint64_t RoleID, const struct FString& PlayerName, const struct FString& HeadIconUrl);
	static void SetNationSwitch(class UGameFrontendHUD* GameFrontendHUD, bool NationAllSwitch, bool NationBattleSwitch, bool NationRankSwitch);
	static void SetMyFriendObserversDetail(class UGameFrontendHUD* GameFrontendHUD, TArray<struct FFriendObserver>* FriendObserversDetails);
	static void SetMiniGameFinalAwardResId(class UGameFrontendHUD* GameFrontendHUD, int AwardResId);
	static void SetMatchNoAuthMode(bool bUsingNoAuth);
	static void SetLuaFastGCMode(int Mode);
	static bool SetLinkStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool ShowUnderline, const struct FString& PathHyperLinkNormalBrush, const struct FString& PathHyperLinkHoveredrBrush);
	static void SetLevelStreamingUnloadTimeslice(bool Enabled);
	static void SetLevelGamePlayLoadPriority(class ULevelStreaming* TargetLevel, int Priority);
	static void SetiTOPLbsDelay(int Delay);
	static void SetIPRegion(int region_no);
	static void SetIosStuckEnableByServerConfig(int bEnable);
	static void SetIOSBGDownloadAttribute(class UGameFrontendHUD* GameFrontendHUD, bool bEnableCellularAccess, bool bEnableResumeData, int nMinFileSize, int nMaxTasks);
	static bool SetImageStyle(const struct FString& StyleName, int ImageSize, const struct FString& ImagePath, const struct FString& ImageColor, bool bPreLoad);
	static void SetIGProxyData(const struct FString& InJsonData);
	static void SetHapticsEngineEnable(bool bEnable);
	static void SetGlobalRedBloodSwitch(bool redBloodSwitch);
	static void SetGDPRUserType(class UGameFrontendHUD* GameFrontendHUD, int GDPRUserType);
	static void SetGameThreadPriority(int NewPriority);
	static void SetGameThreadName(const struct FString& GameThreadName);
	static void SetGameStatusMap(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FString, struct FString>* GameStatusMap);
	static void SetGameSrvID(class UGameFrontendHUD* GameFrontendHUD, int GameSrvID);
	static void SetForceVulkanAvailable(bool Enable);
	static bool SetFontStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool UseShadow, bool IsBold);
	static void SetFixPostLoadSubojbectsBugEnable(int Option);
	static void SetFileHideKeywords(TArray<struct FString> Keywords);
	static void SetExtraLocalizationMap(TMap<struct FString, struct FString> translationMap);
	static void SetExtraItemTableMappingByFix(TMap<int, struct FItemFixTableItem> ItemFixMap);
	static void SetEncryptKey(int KeyChainId, int KeyIndex, const struct FString& Key);
	static void SetDynamicLevels(class UGameFrontendHUD* GameFrontendHUD, TArray<struct FString>* DynamicLevels);
	static void SetDumpShaderCompile(int iDumpVal);
	static void SetDownLoadLanguageName(const struct FString& Language);
	static bool SetDisableGyrSensor(bool InDisableSensor);
	static int SetDeviceQualityLevel_LuaState();
	static bool SetDeviceQualityLevel(int NewLevel);
	static void SetCrashContextReportLevel(int Level);
	static void SetConfigString(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName, const struct FString& Value);
	static void SetConfigInt(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName, int Value);
	static void SetConfigBool(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName, bool Value);
	static void SetCanWatchEnemy(class UGameFrontendHUD* GameFrontendHUD, bool bCan);
	static void SetBtnClickInCdFunc();
	static void SetAppDetailInfo(const struct FString& AppInfo);
	static void SetAllTextureGroupBiasFromQuality();
	static void SetAllLinkStyle();
	static void SetAllImageStyle();
	static void SetAllFontStyle();
	static void SetActivePufferTick(class UGameFrontendHUD* GameFrontendHUD, bool ActivePufferTick);
	static void SetAccountRegion(const struct FString& Region);
	static void SendRecordFinishedGuideReq(class UGameFrontendHUD* GameFrontendHUD, const struct FString& TipsID);
	static void SendPlayEmote(class UGameFrontendHUD* GameFrontendHUD, int EmoteIndex);
	static void SendLobbyChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Content);
	static void SendClientLog(class UGameFrontendHUD* GameFrontendHUD, const struct FString& ErrorReason, const struct FString& errorDescription, bool pullAll);
	static void ScheduleLocalNotificationAtTime(int Year, int Month, int Day, int Hour, int Minute, int Second, bool LocalTime, const struct FString& Title, const struct FString& Body, const struct FString& Action, int NotificationID);
	static void SaveToSharedPreferences(const struct FString& Key, const struct FString& Value);
	static void SaveStringToIntermediateFile(const struct FString& String, const struct FString& Filename);
	static void SaveStringToFileWithEncoding(const struct FString& String, const struct FString& Filename, int EncodingOptions);
	static void SaveStringToFile(const struct FString& String, const struct FString& Filename);
	static void SaveStringArrayToFile(TArray<struct FString> Lines, const struct FString& Filename);
	static void SaveSMapsFile();
	static bool SaveSavFileByByteArray(const struct FString& Filename, int CompressedSize, int UncompressedSize, TArray<unsigned char>* ByteArray);
	static void SaveLuaMemoryFile(const struct FString& Filename, const struct FString& InputContent, bool RmExistFile);
	static void SaveLoadGameSlotCrashFlag();
	static void SaveGameSlotMultiThread();
	static bool SaveArrayToFileByFullPath(TArray<unsigned char> Content, const struct FString& FullPathName);
	static bool SaveArrayToFile(TArray<unsigned char> Content, const struct FString& Filename);
	static void SaveAOSMemMapsInfo();
	static void RunTestCreateLobbyActor();
	static void RunFileLockHelper();
	static uint64_t RunCvmTestCases();
	static struct FString RunConsoleCommondAndGetString(const struct FString& commond);
	static void RunConsoleCommond(const struct FString& commond);
	static int RSAPubEncrypt_LuaState();
	static int RSAPubDecrypt_LuaState();
	static int RSAPriEncrypt_LuaState();
	static int RSAPriDecrypt_LuaState();
	static void RoomOwnerInterruptGame(class UGameFrontendHUD* GameFrontendHUD);
	static void ReturnToLobby(class UGameFrontendHUD* GameFrontendHUD);
	static void RestartShaderPrecompileBackend();
	static void RestartShaderPrecompile();
	static void RestartPuffer(class UGameFrontendHUD* GameFrontendHUD, bool needCheck, int maxDownloadsPerTask, int maxDownTask, int maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, int versionType, const struct FString& InDownloadFuncDict, int InDnsType, int InDownloadStage, int InDownloadEngine);
	static void RestartGame();
	static TArray<struct FString> ResolveDNSWithServerIP(const struct FString& DomainName, const struct FString& ServerIP);
	static TArray<struct FString> ResolveDNS(const struct FString& DomainName);
	static void ResetSlateTickEveryFrame(int SlateUIID);
	static void ResetAllTextureGroupBiasFromQuality();
	static void ResetAllSlateTickEveryFrame();
	static void RequireSlateTickEveryFrameBeforeTargetFrame(int FrameNum);
	static void RequireSlateTickEveryFrame(int SlateUIID);
	static uint64_t RequestFile(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath, bool ForceUpdate, const struct FString& InUA);
	static void ReportFirebaseEventWithString(const struct FString& eventTypeString, const struct FString& bundleExtraKey, const struct FString& bundleExtraValue, bool isUnique);
	static void ReportFirebaseEventWithParam(const struct FString& eventTypeString, TMap<struct FString, struct FString> _params, bool isUnique);
	static void ReportEventRegisterCompleted();
	static void ReportEventPurchaseConsider();
	static void ReportEventLoadingCompleted();
	static void ReportCrashLogWithFDNum(const struct FString& baseLogInfo);
	static void ReportContextValuesOnCrash(const struct FString& Json);
	static void ReportBattleChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Msg, int msgExtraParam);
	static void ReplyInvite(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, bool bReply);
	static bool RemoveWebView();
	static void RemoveKnownMissingPackageRefObjectByObj(class UObject* BindObj);
	static void RemoveKnownMissingPackage(const struct FString& PackageName);
	static void RemoveBPClassManager();
	static bool RemountPakFiles(class UGameFrontendHUD* GameFrontendHUD);
	static void RemapMemMap(const struct FString& Name, int NewSize);
	static void ReleaseWifiLock();
	static void ReleaseSplashScreenImage();
	static void ReleaseSlateTickEveryFrame(int SlateUIID);
	static void ReleaseRTPoolSnapShots();
	static void ReleaseRTPoolResources();
	static void ReleaseGameEnginePlaybackComp(int Option);
	static void ReleaseAllTables();
	static void ReInitializePuffer(class UGameFrontendHUD* GameFrontendHUD, bool needCheck, int maxDownloadsPerTask, int maxDownTask, int maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, int versionType, const struct FString& InDownloadFuncDict, int InDnsType, int InDownloadStage, int InDownloadEngine);
	static bool ReInitializeCvm();
	static void RegisterMemoryWarningHandle(const struct FScriptDelegate& OnMemoryWarning);
	static void RefershAllManagedTickConfigWhenFPSChanged();
	static void ReduceVirMem(int Low, int Dec);
	static bool RecoverWebView();
	static bool RecoverShrunkODPaksBins(TMap<uint32_t, struct FString> Keys);
	static void RecordVirMemInfo();
	static void RecordThreadIndexByGameThreadIOS();
	static void RecordLuaExceptionInfo(const struct FString& exception);
	static void RebuildHISM(class UHierarchicalInstancedStaticMeshComponent* Comp, bool Async, bool ForceUpdate);
	static void ReadManagedTickMapSwitchers();
	static void QuitFightChat(class UGameFrontendHUD* GameFrontendHUD);
	static void QuickLogin(int refreshTokenBeforeExpDays, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static int PurgePackageByKeyword(const struct FString& Keyword);
	static struct FString ProjectUserDir();
	static struct FString ProjectSavedDir();
	static struct FString ProjectDir();
	static struct FString ProjectContentDir();
	static bool ProcessSoPatch(const struct FString& InAppVerStr);
	static void ProcessServerRelationChainError(const struct FString& ErrorMsg, int iForceLoginInterval, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void PrintUAEDataTableManagerMemDetail();
	static void PostGameStatusToTMFPSMap(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Key, TMap<struct FString, struct FString>* mapData);
	static void PlayHapticsFile(const struct FString& FilePath, int Duration, const struct FScriptDelegate& Callback);
	static void PerfReportSetLabel(struct FString* str);
	static void PerfReportAddNote(struct FString* str);
	static void OpenWebviewInGameProcess(const struct FString& URL, int Left, int Top, int Right, int Bottom);
	static void OpenURLInSDK(const struct FString& InURL, bool InVisibleToolbar, bool InSystemWebBrowser, bool InFullScreen, const struct FString& ExtraJson);
	static void OpenSystemStorage();
	static void OpenSystemSettings();
	static bool OpenShaderCodeLibrary(const struct FString& Path, const struct FString& VersionNum, bool bForceOpen);
	static void OpenH5FromCache(class UGameFrontendHUD* GameFrontendHUD, const struct FString& ModuleName, const struct FString& Language, int netType, int Top, int Left, int Right, const struct FString& ViewParam);
	void OnWebViewCacheInfoDelegate__DelegateSignature(int code);
	static void OnWebViewCache(int code);
	static void OnPakFileCRCCheck(const struct FString& PakFileName);
	static void OnNotifyFightFriendChat(class UGameFrontendHUD* GameFrontendHUD, const struct FFightFriendChat& Data);
	static void OnIslandPlayerInfoNotify(class UGameFrontendHUD* GameFrontendHUD, int LandId);
	static bool OnInviteNextBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Name);
	static void OnGetUpdateStateCDNConfigUrl(class UGameFrontendHUD* GameFrontendHUD, const struct FString& URL);
	struct FString OnGetItemBigIcon__DelegateSignature(const struct FString& strPath);
	static bool OneUp_GLauncherSetLogger();
	static bool OneUp_GLauncherSetLauncherEventCallback();
	static void OneUp_GLauncherSendEditorHWND(const struct FString& HWNDStr);
	static bool OneUp_GLauncherInitialize(const struct FString& GameID, const struct FString& gameChannelId, const struct FString& launcherChannelId, const struct FString& Port, const struct FString& loginFrom);
	static bool OneUp_GLauncherGetMsdkWebTokenEncodeUrl();
	static bool OneUp_GLauncherGetLoginInfoJsonStr();
	static bool OneUp_GLauncherAsyncGetMsdkWebTokenEncodeUrl(const struct FString& URL);
	static bool OneUp_GLauncherAsyncGameEventNotify(const struct FString& Event_Code, const struct FString& Event_Msg);
	static void OnEnterLobbyReloadLocalizationResource(class UGameFrontendHUD* GameFrontendHUD);
	static void OnEnterGameReleaseLocalizationResource(class UGameFrontendHUD* GameFrontendHUD);
	static void OnDolphinAppUpdateFinished(class UGameFrontendHUD* GameFrontendHUD);
	static void OnCombatHitFeedback(class UGameFrontendHUD* GameFrontendHUD, bool bCombatHitFeedbackEnable);
	static void OnBattleResultCallBack(class UGameFrontendHUD* GameFrontendHUD, struct FBattleResultData* BattleResultData);
	static void OnBattleResult(class UGameFrontendHUD* GameFrontendHUD, struct FBattleResultData* BattleResultData);
	static void ObjectPoolServerSwitch(bool bSwitchOn);
	static void NotifyBeginnerFinishedGuideUpdated(class UGameFrontendHUD* GameFrontendHUD, bool GuideSwitch, TArray<struct FPlayerFinishedGuide> finished_guide, int player_level, int player_exp_type);
	static void NoschatShareWithUrlInfo(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _url, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void NoschatShareToFriend(const struct FString& mediaId, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& msdkExtInfo, const struct FString& messageExt, const struct FString& mediaTagName, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void NoschatShare(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _messageExt, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void MSDKWebViewCallJS(const struct FString& strJS);
	static void MoveFollowTarget(class UGameFrontendHUD* GameFrontendHUD, int FollowType, uint64_t UID);
	static bool MoveFile(const struct FString& SrcFullPath, const struct FString& DesFullPath);
	static bool MountPakFile(const struct FString& InPakFilename, const struct FString& Key);
	static void MountDecompressedShaderLibrary(const struct FString& GroupName);
	static void MessageBoxExt(const struct FString& Caption, const struct FString& Text);
	static void MemOptSetGameState(int State);
	static void MemOption(int Option);
	static bool MediaCopyFromPakToLocal(const struct FString& From, bool bForce);
	static int MD5LuaString_LuaState();
	static struct FString MD5HashAnsiString(const struct FString& str);
	static void ManualSleep(float Seconds);
	static int LuaSnapShot_LuaState();
	static struct FString LuaLoadFileToString(const struct FString& InFileName);
	static int LowMemoryInGB();
	static void LogoutAllDevices(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void Logout(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void LoginWithExtraInfo(uint32_t Channel, const struct FString& InExtraJson, bool SkipLocalCacheCheck, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void Login(uint32_t Channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void LobbySetUserRegion(int InRegion);
	static void LobbySetProxyPortlist(const struct FString& InNodePortList);
	static void LobbySetProxyNodelist(const struct FString& InNodeIpList);
	static void LobbySetEchoPortlist(const struct FString& InEchoPortList);
	static bool LobbyIsLinkProxy(const struct FString& InIp, int InPort);
	static void LobbyAddAddress(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	static bool LoadSOFromOBB();
	static bool LoadSideLoadSOFromOBB();
	static struct FSavFileData LoadSavFileAsByteArray(const struct FString& Filename);
	static TArray<struct FString> LoadSavedFileToStringArray(const struct FString& Filename);
	static bool LoadLibraryAdditional(const struct FString& UsageVariant);
	static struct FString LoadIntermediateFileToString(const struct FString& Filename);
	static void LoadH5FromCache(class UGameFrontendHUD* GameFrontendHUD, const struct FString& ModuleName, const struct FString& Language, int netType, int Top, int Left, int Right, const struct FString& ViewParam);
	static struct FString LoadFileToStringByFullPath(const struct FString& FullPathName);
	static struct FString LoadFileToString(const struct FString& Filename);
	static TArray<unsigned char> LoadFileToArrayByFullPath(const struct FString& FullPathName);
	static TArray<unsigned char> LoadFileToArray(const struct FString& Filename);
	static bool LoadAmendODs(TMap<uint32_t, struct FString> Keys);
	static void LoadAFDTranslation();
	static TArray<struct FString> ListDirectoryFiles(const struct FString& DirectoryPath);
	static void ListAllLoadedSymbols();
	static void LaunchUrl(const struct FString& URL);
	static bool IsWoWEditor();
	static bool IsWindowsClientReplay(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsWindows();
	static bool IsWindowOB(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsUsingBluetooth();
	static bool IsUseTypicalResultFlowMode(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsUpdateSkip(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsUEPUBGM();
	static bool IsTypicalMode(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsTest();
	static bool IsSystemVPNOpened();
	static bool IsSupportVulkan();
	static bool IsSplitMiniPakVersion();
	static bool IsSplitMapPakVersion();
	static bool isSkipUpdateByRepair(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsShowingWatermark();
	static bool IsShipping();
	static bool IsRuningOnVulkan(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsReleaseVersion(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsPVEMode(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsPerformanceLimitedStat();
	static bool IsOpenAOS90FPSConfig();
	static int IsOpenAOS120FPSConfig();
	static bool IsODPakMonted(const struct FString& Filename);
	static bool IsNotificationEnabled();
	static bool IsNoAuthMode();
	static bool IsNetworkReachable();
	static bool IsMounted(const struct FString& Filename);
	static bool IsMlAIDebug();
	static bool IsMatchVersion();
	static bool IsMatchNoAuthMode();
	static bool IsLowMemoryDevice();
	static bool IsLightVer();
	static bool IsLaunchedByLocalNotification();
	static bool IsLastSessionCrash();
	static bool IsJaguar();
	static bool IsIPhoneFiveSOriginal();
	static bool IsIPhoneFiveS(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsIOSVersionAbove13();
	static bool IsInstallWX(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallWhatsapp(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallVK(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallTwitter(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallTikTok(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallOpenRec(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallMirrativ(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallMessenger(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallLite(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallLine(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallFaceBook(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallDiscord(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallBgBgByiTOP(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInReplayState(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsHOS();
	static bool IsHapticsEngineEnable();
	static bool IsGameFileExistsWithPakCheck(const struct FString& Filename);
	static bool IsForwardPlusShaderLibraryLoaded();
	static bool IsForCE();
	static bool IsFileReady(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath);
	static bool IsFileExistsWithPakCheckMatchExt(const struct FString& Filename);
	static bool IsFileExistsWithPakCheck(const struct FString& Filename);
	static bool IsFileExistsWithOutPakCheck(const struct FString& Path);
	static bool IsFileExistInCSCWithCheckRaw(const struct FString& PkgName);
	static bool IsFileExistInCSCWithCheck(const struct FString& Path);
	static bool IsFileExistByFileName(const struct FString& Filename);
	static bool IsFileExistByExtension(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Filename, const struct FString& fileExtension);
	static bool IsFileExist(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Filename);
	static bool IsEnableDSGrayPublishFlag(uint64_t nGrayPublishFlag);
	static bool IsEmulatorWhenInit();
	static bool IsEmulator();
	static bool IsEditorDedicatedServer();
	static bool IsEditor();
	static int IsEarlyZPassEnable();
	static bool IsDolbyAtmosSupported();
	static bool IsDeviceSupportsViberation();
	static bool IsDeviceSupportsHapticsEngine();
	static bool IsDeviceSupportGyrSensor();
	static bool IsDeviceOverheat();
	static bool IsDeviceMotionBodyAvailable();
	static bool IsDeviceHWSupportVulkan();
	static bool IsDevelopment();
	static bool IsCPUArchMisMatch();
	static bool IsConnected(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsCloudVersion();
	static bool IsCEVersion();
	static bool IsCEHideLobbyUI(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsBlueprintEnum(const struct FString& Path);
	static bool IsBasePrefecthOpen();
	static bool IsAsanVersion();
	static bool IsAos32Bit();
	static bool IsAndroidHasGyr();
	static void InviteWhatsappOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InviteSystemOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InviteSMSOfflineFriends(const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InviteLineOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InviteFBOfflineFriends(const struct FString& Title, const struct FString& Content, const struct FString& link, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InstallNewApp(class UGameFrontendHUD* GameFrontendHUD);
	static void InitWebViewManager();
	static int InitVPN(const struct FString& InVPNGUID, const struct FString& InClientVersion);
	static void InitVlink();
	static void InitQPlatformMisc();
	static void InitLoginAccount(uint64_t AccUin, const struct FString& AccPswd, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InitJavaFunctions();
	static void InitIOSNotchSize();
	static void InitIMSDKEnv(uint32_t iEnv, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InitializePuffer(class UGameFrontendHUD* GameFrontendHUD, bool needCheck, int maxDownloadsPerTask, int maxDownTask, int maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, int versionType, const struct FString& InDownloadFuncDict, int InDnsType, int InDownloadStage, int InDownloadEngine);
	static void InitializeLaggingReporter(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	static void InitializeCvmWithRunPhase(int RunPhase);
	static void InitHF();
	static void InitHDmpveRemoteConfig();
	static int InitDH2048(const struct FString& gen_hex, const struct FString& prime_hex, int v_srand);
	static int InitDH(const struct FString& gen, const struct FString& prime, int v_srand);
	static void InfinityGauntletWithPrefix(const struct FString& ClsName, const struct FString& Prefix);
	static void InfinityGauntlet(const struct FString& ClsName);
	static struct FString HtmlEncode(const struct FString& UnencodedString);
	static void HideH5WebView();
	static void HDmpveRemoteConfigStartOnce();
	static void HDmpveRemoteConfigSetUrl(const struct FString& InRemoteConfigUrl);
	static struct FString HDmpveRemoteConfigGetStringNotDefalut(const struct FString& InKey);
	static struct FString HDmpveRemoteConfigGetString(const struct FString& InKey, const struct FString& InDefaultValue);
	static int HDmpveRemoteConfigGetIntNotDefalut(const struct FString& InKe);
	static int HDmpveRemoteConfigGetInt(const struct FString& InKey, int InDefaultValue);
	static bool HDmpveRemoteConfigGetBoolNotDefalut(const struct FString& InKey);
	static bool HDmpveRemoteConfigGetBool(const struct FString& InKey, bool InDefaultValue);
	static void HDmpveRemoteConfigClear();
	static bool HaveReceivedNoticeCallback();
	static bool HasRemoteConfigReady();
	static bool HasNotice(int Type, const struct FString& Scene);
	static bool HasNotchInScreen();
	static bool HasLoadGameSlotCrashFlag();
	static bool HasDownloadedBasePak();
	static bool HasActiveWifi();
	static void GuestLogin();
	static int GRromelinkRecreateGameSocket();
	static void GMTestAllocUObjs(class UGameFrontendHUD* GameFrontendHUD, int Num);
	static void GMH5Enable(bool flag);
	static int GetZddc_Check();
	static int GetYYXDeviceModel();
	static void GetWidgetsByClass(class UWidget* Parent, class UClass* Type, TArray<class UWidget*>* Children);
	static struct FString GetWebViewTicket(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetWebviewFullScreenSize(int* OutSurfaceWidth, int* OutSurfaceHeight);
	static struct FString GetWeaponDIYIconPath(const struct FString& PlayerUID, int WeaponId, const struct FString& PlanID, bool relativePath, int Width, int Height);
	static int GetVolume(int InStreamType);
	static void GetVoiceSdkReconnectInfo(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FString, struct FString> Data);
	static bool GetUserVulkanSetting();
	static int GetUserTMFPTapEnableFlag();
	static bool GetUseMouseForTouch();
	static struct FString GetUObjectName(class UObject* uObj);
	static struct FString GetUnrealNetworkStatus(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetUEPUBGMServerName();
	static struct FString GetUEPUBGMCPName();
	static struct FString GetToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static int GetTMFPTapDeviceSupportFlag();
	static struct FString GetTimezoneName();
	static float GetTimeInMiliSeconds();
	static int GetThreadIndexByThreadIOS(int TargetThread);
	static int GetTextureGroupLODBias(unsigned char GroupID);
	static struct FString GetTelecomSvr();
	static int GetTCDeviceLevel();
	static int GetTableCount(const struct FString& tableName);
	static struct FString GetSystemProperty(const struct FString& InKey);
	static int GetSystemLanguage_LuaState();
	static uint32_t GetSubsideFeatureLevel();
	static struct FString GetSrcVersion();
	static struct FString GetSplitMapConfigInfo();
	static struct FString GetSpecialData();
	static int GetSoundEffectQuality();
	static struct FString GetSOStoredPath();
	static TArray<struct FString> GetSlateTouchDebugLogQueue();
	static int GetShaderPrecompileProgress();
	static int GetServerDelay(const struct FString& ServerAddress);
	static int GetScreenWidthForWebview();
	static int GetScreenWidth();
	static struct FMargin GetScreenPadding();
	static int GetScreenHight();
	static int GetScreenHeightForWebview();
	static int GetScreenDensity();
	static struct FString GetRootDir();
	static int GetRingMode();
	static struct FString GetRemarkNameByGIDWithObj(class UObject* Obj, const struct FString& gid, const struct FString& PlayerName);
	static struct FString GetRemarkNameByGID(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& PlayerName);
	static struct FString GetRegisterChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool GetRedFlameSwitch();
	static bool GetRedBloodSwitch();
	static struct FString GetPureIOSTmpDirectory();
	static struct FString GetPureIOSLibraryDirectory();
	static struct FString GetPureIOSDocumentsDirectory();
	static bool GetPufferInitResult(class UGameFrontendHUD* GameFrontendHUD);
	static uint32_t GetPufferInitErrCode(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetPublishRegion();
	static struct FString GetPublicKey(const struct FString& cli_pri_key);
	static struct FString GetPUBGModuleBaseAddr(const struct FString& ParamModuleName);
	static struct FString GetPrivateKey();
	static TArray<struct FString> GetPkgsFromDir(bool bUseCheck, const struct FString& InDir);
	static struct FString GetPingReportInfo(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetPingReportData(class UGameFrontendHUD* GameFrontendHUD);
	static int GetPhysicalScreenWidth();
	static int GetPhysicalScreenHeight();
	static int64_t GetPhysicalFileTime(const struct FString& InPath);
	static struct FString GetPhoneType();
	static struct FString GetPhoneDeviceID();
	static struct FString GetPhoneAdvertisingID();
	static int64_t GetPandoraAllocatedMemory();
	static struct FString GetPackChannel();
	static struct FString GetPackageType();
	static struct FString GetPackageName();
	static struct FString GetOSVersion();
	static struct FString GetOperator();
	static struct FString GetOperationRegion();
	static TArray<struct FString> GetODPaksFileUseTime(const struct FString& DumpFilename);
	static TArray<struct FString> GetODPaksDiffBinPakList();
	static struct FString GetODPakName(const struct FString& Path);
	static int GetObjectArrayNum();
	static struct FString GetObbFilePath();
	static TArray<int> GetNotchSize();
	static struct FString GetNetworkType();
	static struct FString GetNativeVersion();
	static struct FString GetNativePackageTag();
	static TArray<struct FString> GetMyFriendObservers(class UGameFrontendHUD* GameFrontendHUD);
	static TArray<struct FString> GetMountedPaks();
	static int GetMemoryStats_LuaState();
	static int GetMemorySize();
	static TArray<int> GetMaxFPSConfigByQuality();
	static int GetLuaTableSize_LuaState();
	static struct FString GetLuaRootDir();
	static struct FString GetLowerSOCModelAboveAndroid12();
	static int GetLoginChannel(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetLoadGameSlotCrashInfo();
	static struct FString GetLoadCostUseTime();
	static struct FString GetLaunchLocalNotificationID();
	static struct FString GetLastSessionUserId();
	static TArray<struct FString> GetKnownMissingPackage(const struct FString& PackageName, const struct FString& DumpFilename);
	static int GetiTOPLbsDelay();
	static struct FString GetITopGameId(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static int GetIsSecretVersion();
	static bool GetIsPlayerUsingVPN();
	static bool GetIsOpenBattlePlayback(class UGameFrontendHUD* GameFrontendHUD);
	static int GetIPRegion();
	static struct FString GetIpAddrByHost(const struct FString& Host);
	static struct FString GetIpAddr();
	static struct FString GetInternalFilesDir();
	static struct FString GetInstallChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static int GetIMSDKEnv();
	static struct FString GetHDmpveInstanceId();
	static bool GetH5CacheStatus(const struct FString& ModuleName);
	static int GetGyroDuoOrientation();
	static struct FString GetGyroDuoDiagnostic();
	static struct FGroupInfoWrapper GetGroupInfo(int SnsAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetGPUFamily();
	static int GetGoogleServiceVersionCode();
	static struct FString GetGLVersion();
	static struct FString GetGLType();
	static uint32_t GetGameThreadId();
	static struct FString GetGameStatus(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetGameModeID(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetGameMasterGUID();
	static struct FString GetFromSharedPreferences(const struct FString& Key, const struct FString& DefaultValue);
	static int64_t GetFrameCounter();
	static float GetFPS();
	static bool GetForceVulkanAvailable();
	static struct FString GetFocusedSlateName();
	static struct FString GetFireBaseFCMToken();
	static int64_t GetFileSizeOutsideSandbox(const struct FString& FilePath);
	static int64_t GetFileSizeOnDiskBytes(const struct FString& FilePath);
	static uint32_t GetFileSizeOnDisk(const struct FString& FilePath);
	static uint64_t GetFileSizeCompressed(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath);
	static struct FString GetFileHash(const struct FString& FilePath);
	static struct FString GetFileDirPath(const struct FString& FilePath);
	static void GetFBFriendsUnregistered(uint32_t page, uint32_t Count, uint32_t Type, const struct FString& extend, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static TArray<int> GetExpandMaxFPSConfigByQuality();
	static int GetExactDeviceLevel();
	static struct FString GetEncodeUrl(const struct FString& URL);
	static struct FString GetEmulatorName();
	static struct FString GetDSVersion(class UGameFrontendHUD* GameFrontendHUD);
	static int GetDSConnectionState();
	static struct FString GetDSConnectionIP();
	static struct FString GetDownLoadLanguageName();
	static struct FString GetDownloadDirPath();
	static int GetDH2048PublicKey_LuaState();
	static int GetDH2048PrivateKey_LuaState();
	static int GetDH2048BattleKey_LuaState();
	static struct FString GetDeviceXID();
	static uint64_t GetDeviceTotalSpace();
	static int GetDeviceQualityLevel();
	static struct FString GetDevicePlatformName();
	static struct FString GetDeviceName();
	static struct FString GetDeviceModel();
	static int GetDeviceMaxSupportSoundEffect();
	static struct FString GetDeviceMake();
	static struct FString GetDeviceInfo();
	static uint64_t GetDeviceFreeSpace();
	static struct FString GetDeviceABIInfoJson();
	static struct FString GetDeivceNickName();
	static struct FString GetDataTime_MDHMS();
	static struct FString GetCurrentRHILevel(class UGameFrontendHUD* GameFrontendHUD);
	static int GetCurrentLanguage_LuaState();
	static int GetCurrentChannel(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetCrashUserAction();
	static struct FString GetCpuType();
	static int GetCPUMaxFrequency();
	static int GetCPUCoreCount();
	static uint64_t GetCPUClockCycles();
	static struct FString GetConfigString(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName);
	static int GetConfigInt(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName);
	static bool GetConfigBool(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName);
	static struct FString GetCleanFileName(struct FString* FilePath);
	static void GetCDNUpdateInfo(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FString, struct FString> Data);
	static struct FString GetCarrierInfo();
	static struct FString GetBuildVersion();
	static uint32_t GetBlockCRC(const struct FString& Filename, int64_t Offset, uint32_t Size);
	static struct FString GetBattleKey(const struct FString& svr_pub_key, const struct FString& cli_pri_key);
	static struct FString GetAreaIPNo();
	static struct FString GetAppVersion();
	static int64_t GetAppStartupStageTime(struct FString* str);
	static struct FString GetAppMountHandleInfo();
	static struct FString GetApplicationVersion();
	static struct FString GetAOSSHOP();
	static struct FString GetAndroidVersion();
	static struct FString GetAndroidSysInfo();
	static int GetAndroidSOVersion();
	static uint32_t GetAndroidMaxStackSize();
	static uint32_t GetAndroidMaxFDNum();
	static uint32_t GetAndroidCurrentFDNum();
	static int GetAndroidBuildForArm();
	static TArray<int> GetAllLocalNotificationIDs();
	static TArray<struct FString> GetAllFilesInDir(const struct FString& Dir, const struct FString& Pattern);
	static struct FString GetActiveProfileName();
	static struct FString GetAccountRegion();
	static struct FString GetAccessToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void GenerateQRImage(int Tag, int Size, const struct FString& Content, const struct FString& logoPath, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void GEMReportSubEvent(class UGameFrontendHUD* GameFrontendHUD, const struct FString& EventName, const struct FString& SubEventName, TArray<struct FString> eventParams);
	static void GEMReportLobbyCustomEvent(class UGameFrontendHUD* GameFrontendHUD, int EventID, bool IsSuccess, const struct FString& strDesc);
	static void GEMReportEvent(class UGameFrontendHUD* GameFrontendHUD, const struct FString& EventName, TMap<struct FString, struct FString>* eventParams);
	static void GEMReportEnterLobbyEvent(class UGameFrontendHUD* GameFrontendHUD, bool IsSuccess, const struct FString& strDesc);
	static void GameRegisterGRomeLink();
	static void GameMasterSetUserInfo(const struct FString& InPaidInfo, const struct FString& InUserToken, const struct FString& InAppId);
	static void GameMasterSetUsableRegion(const struct FString& InRegion);
	static void GameMasterSetUdpEchoPort(int InPort);
	static void GameMasterSetOnlyWifiAccel(bool InOn);
	static void GameMasterSetFreeFlowUser(int InType);
	static void GameMasterOnNetDelay(int InMillis);
	static bool GameMasterIsAccelOpened();
	static int GameMasterInit(int InHookType, const struct FString& InGuid, const struct FString& InLibs, int InEchoPort);
	static struct FString GameMasterGetWebUIUrl(int InType);
	static struct FString GameMasterGetVIPValidTime();
	static struct FString GameMasterGetUserID();
	static int GameMasterGetAccelerationStatus();
	static void GameMasterClearAccelAddr();
	static void GameMasterBeginRound(const struct FString& InOpenid, const struct FString& InPvpId);
	static void GameMasterAddNewArenaAddress(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	static void GameMasterAddAccelAddr(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	static void GameJoySwitchOn(int isOn);
	static void GameJoyStopManualRecord();
	static void GameJoyStartMomentsRecord();
	static void GameJoyStartManualRecord();
	static void GameJoySetVideoQuality(int Quality);
	static void GameJoySetMomentRecordSwitchOn(int isOn);
	static void GameJoySetLuaguage();
	static void GameJoySetCurrentRecorderPosition(float X, float Y);
	static bool GameJoyIsSDKFeatureSupport();
	static void GameJoyEndMomentsRecord();
	static void GameJoyClearMomentsVideo();
	static int GainSystemLog();
	static bool FullPathFileExist(const struct FString& Filename);
	static void FullGC(class UGameFrontendHUD* GameFrontendHUD);
	static void ForceDecompressShaderLibrary(const struct FString& GroupName);
	static void FlushPressedKeys(class UGameFrontendHUD* GameFrontendHUD);
	static void FlushKnownMissingPackageRefObject();
	static bool FlushAndroidWindowMemory();
	static void FinishPufferUpdateInDolphin(class UGameFrontendHUD* GameFrontendHUD, bool IsFinished);
	static class UObject* FindObjectByPath(const struct FString& ObjectPath);
	static TArray<struct FString> FindFilesRecursiveSkipPakPlatform(const struct FString& Dir, const struct FString& Pattern);
	static bool FindFileInPakFiles(const struct FString& Filename);
	static class UClass* FindClassByPath(const struct FString& ObjectPath);
	static void FileSystemTesting(uint32_t Count);
	static int FetchFileFromPAK(const struct FString& InFilePathInPak, const struct FString& InLocalFilePath, bool Override);
	static void FeatureGuardSet(const struct FString& FeatureName, bool bEnable);
	static void ExportLocalUsage_3(const struct FString& DumpFilePath, struct FString* DestDir);
	static void ExportLocalUsage(const struct FString& DumpFilePath);
	static void ExitGameForSafety();
	static void ExitGame();
	static void ExeMemoryWarningHandle();
	static void EnterLoading(class UGameFrontendHUD* GameFrontendHUD);
	static void EnterFightChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid);
	static void EnterBattleStandAlone(class UGameFrontendHUD* GameFrontendHUD, const struct FString& MapPath, uint32_t PlayerKey, const struct FString& PlayerName, const struct FString& DynamicLevelsOp, const struct FString& AdditionalURLSuffixes, uint32_t ModeID);
	static void EnterBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& URL, const struct FString& HostnameOrIP, uint32_t Port, uint32_t PlayerKey, const struct FString& PacketKey, uint64_t GameID, bool IsObserver, uint32_t MainModeID, int WaterType, uint32_t WaterUserID, uint32_t ModeID, TMap<int, struct FString>* AdvConfig);
	static struct FString EncryptUID(const struct FString& sUid, const struct FString& sKey);
	static void EncryptItemData(TArray<int> EncryptionItemList);
	static void EnableUseOldInterface(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	static void EnableUrlCheck(bool bShouldEnable);
	static void EnableTxtCheck();
	static bool EnableSubMountPoint();
	static bool EnableShaderGroupAsync_New(const struct FString& GroupNames);
	static bool EnableShaderGroupAsync(const struct FString& GroupNames);
	static bool EnableShaderGroup(const struct FString& GroupName);
	static float EnableShaderFinishPersent();
	static void EnableReportVoiceSdkEvent(class UGameFrontendHUD* GameFrontendHUD, bool InitVoiceSdkComponentReportEnable, bool VoiceSdkJoinRoomReportEnable, bool VoiceSdkQuitRoomReportEnable, bool VoiceSdkJoinLbsRoomReportEnable, bool VoiceSdkQuitLbsRoomReportEnable, bool VoiceSdkOnJoinTeamRoomReportEnable, bool VoiceSdkOnJoinLbsRoomReportEnable);
	static void EnableNativeDump(int EnableDump);
	static bool EnableMergeVirtual();
	static void EnableLowMemoryDevice(bool bEnable);
	static void EnableLocalizationStatus(class UGameFrontendHUD* GameFrontendHUD, bool status);
	static bool EnableLobbyEntry();
	static void EnableIosStuckWorkWithDelayFrames(class UGameFrontendHUD* GameFrontendHUD, bool bEnable, int DelayFrames);
	static void EnableIosStuckWorkNewWithDelayFrames(int WorkType, int DelayFrames);
	static void EnableIosStuckWorkNew(int WorkType);
	static void EnableIosStuckWork(class UGameFrontendHUD* GameFrontendHUD, bool bEnable);
	static void EnableDataTunnelReport(bool InEnable);
	static void EnableAutoObjectRefreshStage(bool bEnable);
	static void EnableAOSForceAnsiMalloc();
	static void EnableAkAudioSilenceMode(bool InEnable);
	static void DynamicUpdatePakOrderBackUp(const struct FString& Filename);
	static void DynamicUpdatePakOrder(const struct FString& Filename);
	static void DumpPhysScene(const struct FString& Filename);
	static struct FString DumpPackageMemInfo(TArray<struct FString>* AssetList);
	static void DumpOpenReadCollect(class UGameFrontendHUD* GameFrontendHUD, const struct FString& DumpFilename);
	static void DumpLogFile(bool backup);
	static void DumpConsoleVariables();
	static bool DoesPackageExist(const struct FString& Filename);
	static void Disconnect(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void DisableSysCache();
	static void DisableRepairResource(class UGameFrontendHUD* GameFrontendHUD);
	static void DisableAOSForceAnsiMalloc();
	static void DisableAndroidHardwareAcceleration();
	static void DirectToSetting();
	static void DirectToMemoryManagement();
	static int DH2048BN2Hex_LuaState();
	static void DestroyConnector(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool DeleteFile(const struct FString& fullPath);
	static void DeleteDirectory(const struct FString& FilePath);
	static void DelayInitThirdPartSDK();
	static struct FString CSCGetStatInfo();
	static void CreateWidgetInfoCollector_Reset();
	static void CreateWidgetInfoCollector_OnLevelStart();
	static void CreateWidgetInfoCollector_OnLevelEnd();
	static class UTexture2D* CreateQRCodeTexture(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Text);
	static void CreateHapticsEngine(const struct FScriptDelegate& Callback);
	static void CrashSetUserId(const struct FString& UserId);
	static void CrashSetAppVersion(const struct FString& Version, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void CrashReportLogInfo(const struct FString& MsgType, const struct FString& Info);
	static void CrashPutUserData(const struct FString& Key, const struct FString& Value, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void CrashPostExceptionFull(int Category, const struct FString& Name, const struct FString& Msg, const struct FString& stack, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void CrashPostException(int Category, const struct FString& Reason, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void CrashLog(int Level, const struct FString& Tag, const struct FString& Log, bool needDump, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool CopyFile(const struct FString& SrcFullPath, const struct FString& DesFullPath);
	static struct FString ConvertToAbsolutePathForExternalAppForWrite(const struct FString& FilePath);
	static struct FString ConvertToAbsolutePathForExternalAppForRead(const struct FString& FilePath);
	static struct FString ConvertTMap2JsonStr(TMap<struct FString, struct FString> mapData);
	static struct FString ConvertRelativePathToFull(const struct FString& InPath);
	static struct FString ConvertGamePathToRelativeFilePath(const struct FString& Path);
	static void ConsumeLocalNotificationLaunchApp();
	static struct FString ConsoleCommand(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Command);
	static void ConnectToURLWithDNSProxy(const struct FString& ProxyIP, const struct FString& URL, int ConnectTimeOutSeconds, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void ConnectToURL(const struct FString& URL, int ConnectTimeOutSeconds, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString ComputerName();
	static bool CloudVersionPipe_SendDataWithKey(const struct FString& MsgKey, const struct FString& MsgInfo);
	static bool CloudVersionPipe_SendData(const struct FString& MsgInfo);
	static bool CloudVersionPipe_RecvDataTest(const struct FString& MsgInfo);
	static class UObject* CloudVersionPipe_PipeHelper();
	static bool CloudVersionPipe_Log(const struct FString& LogInfo);
	static bool CloudVersionInitDataPipeline();
	static void CloseWebView();
	static void CloseVLink();
	static void CloseVideoListDialog();
	static void CloseH5WebView(class UGameFrontendHUD* GameFrontendHUD);
	static void ClipBoardCopy(const struct FString& Text);
	static void ClientKickPlayerFromGame(class UGameFrontendHUD* GameFrontendHUD);
	static void ClientEnterWarMode(class UGameFrontendHUD* GameFrontendHUD);
	static void ClientConfirmReturnToGame(class UGameFrontendHUD* GameFrontendHUD);
	static void ClientConfirmMisKill(class UGameFrontendHUD* GameFrontendHUD, int bConfirm);
	static void ClearUpdatedSoPatch();
	static void ClearUnknownRT();
	static void ClearSyncLoadCacheSystem();
	static void ClearSluaClassCache();
	static void ClearSlateTouchDebugLogQueue();
	static void ClearSlateCache();
	static void ClearNotifications();
	static void ClearNotice();
	static void ClearJankStats();
	static void ClearIGProxyData();
	static void ClearHasLoadGameSlotCrashFlag();
	static void ClearH5WebViewCookie(const struct FString& Domain);
	static bool ClearDeviceMotionBody();
	static void ClearChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void ClearAllLocalNotifications();
	static void ClearAllAudioBanks();
	static void CheckRegisterGestureConflictWithZoom();
	static int CheckMetalLibraryUncompressed();
	static int CheckMemorySymbolSource();
	static bool CheckLocalPakContentHash(const struct FString& Filename);
	static bool CheckLocalizationExist();
	static TArray<struct FString> CheckFilesInPakWithResult(TArray<struct FString> Files);
	static TArray<struct FString> CheckFilesInPakLite(TArray<struct FString> Files);
	static TArray<struct FString> CheckFilesInPak(TArray<struct FString> Files);
	static bool CheckCanUseUrl(const struct FString& URL);
	static void CheckBeforeInitPuffer();
	static void ChangeLocalizationReleaseTestStatus(class UGameFrontendHUD* GameFrontendHUD, bool status);
	static bool CanUseHapticsEngine();
	static bool CanEnableLuaClassIndexCache();
	static void CancelLocalNotification(int NotificationID);
	static void CallIngameFirstTimeTips(class UGameFrontendHUD* GameFrontendHUD, const struct FString& tableName, const struct FString& FunctionName);
	static void CallEngineGC();
	static void CacheH5WebView(const struct FString& ModuleName);
	static void BqBqShareToFriend(const struct FString& targetUrl, int act, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& msdkExtInfo, const struct FString& imgUrl, const struct FString& previewText, const struct FString& gameTag, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void BqBqShare(const struct FString& _imgPath, const struct FString& _descShare, const struct FString& _titleShare, int _shareScene, const struct FString& _imgUrl, const struct FString& _url, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void BqBqAddFriend(const struct FString& OpenID, const struct FString& Desc, const struct FString& Message, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void BindMotionDetectedDelegate(class ASTExtraPlayerController* PlayerController, class UScreenInput* InScreenInput);
	static bool AssembleODPaksFromDiffCache(TArray<struct FString> PakNames, const struct FString& OutputDir);
	static int AssembleAllODPaksFromDiffAsync_New();
	static int AssembleAllODPaksFromDiffAsync();
	static void AskForNotificationPermission();
	static bool AppendForcedKeepODPaks(TArray<struct FString> Filenames);
	static bool AndroidShouldShowPermissionRationale();
	static bool AndroidCheckPermission();
	static void AllocVirMem(int64_t XMiB);
	static void AkAudio_UnloadInitBank();
	static void AkAudio_UnloadAllFilePackages();
	static void AkAudio_StopAllSounds(bool bShouldStopUISounds);
	static void AkAudio_LoadInitBank();
	static void AkAudio_Flush(class UWorld* WorldToFlush);
	static void AkAudio_ClearBanks();
	static bool AddStreamingLevel(class UWorld* World, const struct FString& SubLevel, bool bShouldBeLoaded, bool bShouldBeVisible, bool bShouldBlockOnLoad);
	static void AddOnScreenDebugMessage(const struct FString& Message, int Key, float TimeToDisplay, const struct FVector2D& TextScale, struct FColor* Color);
	static int AddMemoryLogSize(int b_size);
	static void AddKnownMissingPackage(class UObject* BindObj, bool bReplace, struct FString* PackageName);
	void AddCrashContextType(int Type, const struct FString& KeyString);
	static void AddCrashContextData(int Key, const struct FString& Val, bool bAppendTimeStamp, int reportLevel);
	static void AddAttachFileString(const struct FString& Type, bool bClear, const struct FString& strinfo);
	static void AddAttachDataString(const struct FString& Type, bool bClear, const struct FString& strinfo);
	static int ActivateCameraByName_LuaState();
	static bool ActivateCameraByName(const struct FString& CameraName);
	static void AcquireWifiLock();
};




class UScriptHelperEngine : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScriptHelperEngine");
		return pStaticClass;
	}


	static TArray<unsigned char> TestLz4Decompress(TArray<unsigned char> Source, bool bEnable);
	static TArray<unsigned char> TestLz4Compress(TArray<unsigned char> Source);
	static void StopTGPA();
	static void StartTGPA();
	static struct FString ReplaceEmoji(const struct FString& Content, int MaxEmojiNum, const struct FString& SpecialCharacter);
	static void PrepareTGPA();
	static int IsSupportTGPA();
	static bool IsSupportADPF();
	static bool IsLowMemoryDevice();
	bool Is64BitVersion();
	static int GetThermalStatus();
	static int GetThermal15sAfter();
	static float GetMemoryUsedVirtualInKB();
	static float GetMemoryUsedPhysicalInKB();
};




class USDKCallbackHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    SDKCallbackDelegate;                                      
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.SDKCallbackHelper");
		return pStaticClass;
	}


	void Init();
	static class USDKCallbackHelper* GetInstance();
};




class USettingSubsystem : public UGameInstanceSubsystem
{
public:
	bool                                               bUseRegisterDelegateOptimize;                             
	unsigned char                                      UnknownData00[0x7];                                       
	TMap<struct FString, bool>                         CacheRegisterProperties_Bool;                             
	TMap<struct FString, int>                          CacheRegisterProperties_Int;                              
	TMap<struct FString, float>                        CacheRegisterProperties_Float;                            
	TMap<unsigned char, struct FString>                ReportSettingConfig;                                      
	unsigned char                                      UnknownData01[0x50];                                      
	struct FString                                     CachedSaveGameName;                                       
	struct FScriptDelegate                             GetUserSettingsDelegate;                                  
	class UEffectSettingMgr*                           EffectSettingMgrInstace;                                  
	class USaveGame*                                   UserSettings;                                             
	class USaveGame*                                   UserSettingsShadowData;                                   
	unsigned char                                      UnknownData02[0x8];                                       
	class UClass*                                      UserSettingsClass;                                        
	struct FString                                     UserSettingsClassName;                                    
	struct FString                                     ActiveSaveGameName;                                       
	unsigned char                                      UnknownData03[0x8];                                       
	struct FString                                     LanguageSettingsClassName;                                
	struct FString                                     LanguageSaveGameName;                                     
	unsigned char                                      UnknownData04[0xB0];                                      
	TMap<struct FString, bool>                         LanguageMap;                                              
	unsigned char                                      UnknownData05[0x8];                                       
	class UClass*                                      SaveGameUIElemLayoutClass;                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.SettingSubsystem");
		return pStaticClass;
	}


	void UnregisterUserSettingDelegate(int Handle);
	bool SetUserSettings_String(const struct FString& PropertyName, const struct FString& Val);
	bool SetUserSettings_Int(const struct FString& PropertyName, int Value);
	bool SetUserSettings_Float(const struct FString& PropertyName, float Value);
	bool SetUserSettings_Bool(const struct FString& PropertyName, bool Value, bool IngoreSave);
	int RegisterUserSettingsDelegate_Int(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	int RegisterUserSettingsDelegate_Float(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	int RegisterUserSettingsDelegate_Bool(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate(const struct FScriptDelegate& Delegate);
	void RefreshSettingDataForReport();
	void OnReportSettingConfigStart();
	void OnRefreshReportSettingConfig();
	class USaveGame* GetUserSettingsByDelegate(const struct FString& LayoutName);
	struct FString GetUserSettings_String(const struct FString& PropertyName);
	int GetUserSettings_Int(const struct FString& PropertyName);
	float GetUserSettings_Float(const struct FString& PropertyName);
	bool GetUserSettings_Bool(const struct FString& PropertyName);
	class USaveGame* GetUserSettings();
	struct FString GetUserLanguageSettingsProperty_String(const struct FString& PropertyName);
	class UEffectSettingMgr* GetEffectSettingMgr();
	void FinishModifyUserSettings();
	void ClearSettingDataForReport();
	void CheckLocalizationLanguage();
	bool CheckChangeWithCache(class UObject* Source, class UProperty* Property, const struct FString& PropertyName);
	void CacheRegisterValue(class UObject* Source, class UProperty* Property, const struct FString& PropertyName);
	void BeginModifyUserSettings();
};




class USoundTools : public UObject
{
public:
	unsigned char                                      UnknownData00[0x138];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.SoundTools");
		return pStaticClass;
	}


	void StopConversionByUser(int Index);
	void SaveWavInIOS(const struct FString& GameFilePath);
	void SaveToAndroidPath(const struct FString& GameFilePath);
	int GetSizeOfWwiseAudioToWav(const struct FString& EventName, const struct FString& BankName, const struct FString& outFilePath);
	float GetConversionPercent(int Index);
	int ConvertWwiseAudioToWavSync(const struct FString& EventName, const struct FString& BankName, const struct FString& outFilePath);
	int ConvertWwiseAudioToWav(const struct FString& EventName, const struct FString& BankName, const struct FString& outFilePath);
	bool CanWwiseAudioToWav();
};




class USTExtraClientUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.STExtraClientUtils");
		return pStaticClass;
	}


	static int IsVolumetricLightmapRegistered(class UObject* WorldContextObject, const struct FName& LevelPackageName);
	static void GetWidgetHandleAsyncWithCallBack(class UObject* WorldContext, const struct FString& ModuleName, const struct FString& WidgetKey, const struct FScriptDelegate& Callback);
	class UUAEUserWidget* GetDynamicWidgetHandle(class UObject* WorldContext, const struct FString& ModuleName, const struct FString& WidetKey);
	static class USTExtraClientUIBPUtils* GetBPUtils();
	static void EnsureVolumetricLightmapRegistered(class UObject* WorldContextObject, const struct FName& LevelPackageName);
	static int AsyncLoadAssetInstWithCallback(const struct FString& InPath, const struct FScriptDelegate& Callback);
};




class USTExtraClientUIBPUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      
	TMap<int, struct FAssetAsyncRequest>               PendingAsyncAssetRequests;                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.STExtraClientUIBPUtils");
		return pStaticClass;
	}


	void OnAsyncAssetLoaded(const struct FSoftObjectPath& InSoftPath, int RequestIdx);
	int AsyncLoadAssetInstWithCallback(const struct FString& InPath, const struct FScriptDelegate& Callback);
};




class UTPerfPlat : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.TPerfPlat");
		return pStaticClass;
	}


	static void SetQuality(int Quality);
	static void requestResourceGuarantee(int Condition, int LoadType, int applyType);
	static void PostGameStatusToTMFPIS(int Key, const struct FString& Value);
	static int GetDeviceLevel();
};




class UTranslator : public UObject
{
public:
	struct FString                                     SubscriptionKey;                                          
	struct FString                                     StoredAccessToken;                                        
	struct FScriptDelegate                             OnGetAccessTokenDelegate;                                 
	struct FScriptDelegate                             OnDetectDelegate;                                         
	struct FScriptDelegate                             OnTranslateDelegate;                                      
	unsigned char                                      UnknownData00[0x98];                                      
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	unsigned char                                      UnknownData01[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.Translator");
		return pStaticClass;
	}


	void TranslateV2(int Channel, int ID, const struct FString& Text);
	void Translate(const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
	void PostMsg(const struct FString& URL, const struct FString& Content);
	void OnTranslateV2(bool Success, const struct FString& Data);
	void OnTranslate__DelegateSignature(bool IsSuccess, const struct FString& LanguageFrom, const struct FString& Translation);
	void OnTranslate(bool Success, const struct FString& Data);
	void OnGetAccessTokenV2(bool Success, const struct FString& Data);
	void OnGetAccessToken__DelegateSignature(bool IsSuccess, const struct FString& Token);
	void OnGetAccessToken(bool Success, const struct FString& Data);
	void OnDetectV2(bool Success, const struct FString& Data);
	void OnDetect__DelegateSignature(bool IsSuccess, const struct FString& From, const struct FString& To);
	void OnDetect(bool Success, const struct FString& Data);
	bool HasTranslating();
	void GetAccessToken(bool bForceGet, const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
	void Detect(const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
};




class UTssManager : public UObject
{
public:
	struct FString                                     TssHostInfo;                                              
	struct FString                                     TssCDNHostInfo;                                           
	struct FString                                     TssBuildInIpInfo;                                         
	int                                                TssLocal;                                                 
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.TssManager");
		return pStaticClass;
	}


	static int SendSkdData_LuaState();
	static int SendEigeninfoData_LuaState();
	static uint32_t SaveSendEigeninfoCode_LuaState();
	static int OnRecvData_LuaState();
	static uint32_t InvokeSDKIoctl(int Command, const struct FString& InCmdData);
	static int GetUserTag4Lua_LuaState();
	static int GetDeviceFeature_LuaState();
	static int EigenArrayObfuscationVerify_LuaState();
};




class AUAEClientGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAEClientGameMode");
		return pStaticClass;
	}

};




class AUAELobbyGameMode : public AUAEClientGameMode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAELobbyGameMode");
		return pStaticClass;
	}

};




class AUAELobbyPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAELobbyPlayerController");
		return pStaticClass;
	}

};




class UUTRichTextBlock : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FScriptMulticastDelegate                    OnHyperlinkClicked;                                       
	bool                                               bIgnoreOutlineForPerformance;                             
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     ContentText;                                              
	unsigned char                                      UnknownData02[0x10];                                      
	bool                                               AutoCapitalizeText;                                       
	unsigned char                                      UnknownData03[0x7];                                       
	struct FSlateFontInfo                              Font;                                                     
	bool                                               bSupportHyLink;                                           
	bool                                               bSupportImage;                                            
	unsigned char                                      UnknownData04[0x6];                                       
	TArray<struct FSlateColor>                         ColorSwitchList;                                          
	int                                                ActiveColorIndex;                                         
	struct FLinearColor                                TextColor;                                                
	TEnumAsByte<ETextJustify>                          Justification;                                            
	TEnumAsByte<ETextVerticalJustify>                  TextVerticalJustification;                                
	bool                                               AutoWrapText;                                             
	unsigned char                                      UnknownData05[0x1];                                       
	struct FScrollBarStyle                             ScrollBarStyle;                                           
	struct FMargin                                     HScrollBarPadding;                                        
	struct FMargin                                     VScrollBarPadding;                                        
	float                                              WrapTextAt;                                               
	struct FMargin                                     Margin;                                                   
	float                                              LineHeightPercentage;                                     
	struct FString                                     HyperlinkDecoratorTag;                                    
	struct FString                                     HyperlinkCallBackFunctionName;                            
	struct FString                                     HyperlinkCallBackTableName;                               
	unsigned char                                      UnknownData06[0x270];                                     
	class UGameFrontendHUD*                            GameFrontendHUD;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UTRichTextBlock");
		return pStaticClass;
	}


	void SetWrapTextAt(float Val);
	void SetTextJustification(TEnumAsByte<ETextJustify> InJustification);
	void SetText(const struct FText& InText);
	void SetIgnoreOutlineForPerformance(bool bIgnore);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetActiveColorIndex(int InIndex);
	void OnHyperlinkClickedEvent__DelegateSignature(const struct FMetaDataHolder& MetaDataHolder);
	TArray<struct FVector2D> GetViewSizes();
	struct FText GetText();
	struct FVector2D EstimateDesiredSize();
};




class UAEVarButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                    
	struct FButtonStyle                                WidgetStyle;                                              
	struct FLinearColor                                ColorAndOpacity;                                          
	struct FLinearColor                                BackgroundColor;                                          
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              
	bool                                               IsFocusable;                                              
	bool                                               IsPassMouseEvent;                                         
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     ButtonVar;                                                
	struct FScriptMulticastDelegate                    OnButtonClicked;                                          
	struct FScriptMulticastDelegate                    OnButtonPressed;                                          
	struct FScriptMulticastDelegate                    OnButtonReleased;                                         
	struct FScriptMulticastDelegate                    OnButtonHovered;                                          
	struct FScriptMulticastDelegate                    OnButtonUnhovered;                                        
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   
	unsigned char                                      UnknownData01[0x10];                                      
	struct FScriptMulticastDelegate                    OnClicked;                                                
	struct FScriptMulticastDelegate                    OnPressed;                                                
	struct FScriptMulticastDelegate                    OnReleased;                                               
	struct FScriptMulticastDelegate                    OnHovered;                                                
	struct FScriptMulticastDelegate                    OnUnhovered;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AEVarButton");
		return pStaticClass;
	}


	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
	void SetStyle(const struct FButtonStyle& InStyle);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
};




class UAutoSizeFallC : public ULuaUserWidget
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           
	struct FScrollBarStyle                             ScrollBarStyle;                                           
	ESlateVisibility                                   ScrollBarVisibility;                                      
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector2D                                   ScrollbarThickness;                                       
	EWidgetClipping                                    ScrollBoxClipping;                                        
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                ColumnNum;                                                
	float                                              ItemPaddingX;                                             
	float                                              ItemPaddingY;                                             
	float                                              FallbackItemHeight;                                       
	bool                                               bAutoDetectItemSize;                                      
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              ItemSizeChangeThreshold;                                  
	int                                                StableMeasureFrames;                                      
	bool                                               bPreserveScrollAnchor;                                    
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              ViewSizeChangeThreshold;                                  
	unsigned char                                      UnknownData04[0x1C];                                      
	TArray<class UWidget*>                             Items;                                                    
	TMap<class UWidget*, struct FBox2D>                LayoutMap;                                                
	TMap<class UWidget*, float>                        MeasuredHeights;                                          
	TMap<class UWidget*, float>                        PendingMeasuredHeights;                                   
	TMap<class UWidget*, int>                          PendingMeasuredFrames;                                    
	TMap<class UWidget*, bool>                         CachedCollapsedStates;                                    
	unsigned char                                      UnknownData05[0x30];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AutoSizeFallC");
		return pStaticClass;
	}


	void SwitchChildToIndex(class UWidget* Content, int Index);
	void SetScrollOffset(float NewScrollOffset);
	void SetItemPadding(float InPaddingX, float InPaddingY);
	void SetColumnNum(int InColumnNum);
	void ScrollToStart();
	void ScrollToEnd();
	bool RemoveItem(class UWidget* Item);
	void RefreshLayout();
	bool NotifyItemSizeChanged(class UWidget* Item);
	bool InsertItem(class UWidget* Item, int Index);
	float GetScrollOffset();
	class UScrollBox* GetScrollBox();
	int GetItemCount();
	class UWidget* GetItemAt(int Index);
	struct FVector2D GetContentSize();
	void ClearItems();
	int AddItem(class UWidget* Item);
};




class UReuseFallC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnBeforeNewItem;                                          
	struct FScriptMulticastDelegate                    OnAfterNewItem;                                           
	struct FScriptMulticastDelegate                    OnRefreshItem;                                            
	struct FScriptMulticastDelegate                    OnItemCreated;                                            
	struct FScriptMulticastDelegate                    OnItemHide;                                               
	struct FScriptMulticastDelegate                    OnTouchFinish;                                            
	struct FScriptMulticastDelegate                    OnOverscrollState;                                        
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           
	EWidgetClipping                                    ScrollBoxClipping;                                        
	unsigned char                                      UnknownData00[0x7];                                       
	struct FScrollBarStyle                             ScrollBarStyle;                                           
	ESlateVisibility                                   ScrollBarVisibility;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	struct FVector2D                                   ScrollbarThickness;                                       
	int                                                ColumnNum;                                                
	int                                                ItemHeight;                                               
	int                                                ItemPaddingX;                                             
	int                                                ItemPaddingY;                                             
	float                                              OverscrollLength;                                         
	class UClass*                                      ItemClass;                                                
	TMap<struct FString, class UClass*>                OtherItemClass;                                           
	int                                                PreviewCount;                                             
	int                                                ItemPoolMaxNum;                                           
	int                                                TopSpaceReserved;                                         
	int                                                BottomSpaceReserved;                                      
	float                                              BottomMargin;                                             
	float                                              ViewSizeCmpThreshold;                                     
	unsigned char                                      UnknownData02[0x38];                                      
	class UClass*                                      CurItemClass;                                             
	unsigned char                                      UnknownData03[0x210];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ReuseFallC");
		return pStaticClass;
	}


	void SoftReload(int __ItemCount);
	void SetTopMargin(float Val);
	void SetScrollOffset(float NewScrollOffset);
	void SetItemSize(int __Idx, float __Size);
	void SetItemFullStyle(int idx);
	bool SetCurItemClass(const struct FString& StrName);
	void SetBottomMargin(float Val);
	void ScrollToStart();
	void ScrollToEnd();
	void ResetCurItemClassToDefault();
	void Reload(int __ItemCount);
	void RefreshOne(int __Idx);
	void Refresh();
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnTouchFinishDelegate__DelegateSignature();
	void OnTouchFinishCallback();
	void OnOverscrollStateDelegate__DelegateSignature(EReuseFallOverscrollState State);
	void OnHideItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnBeforeNewItemDelegate__DelegateSignature(int idx);
	void OnAfterNewItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void JumpByIdx(int __Idx, bool bImmedia);
	struct FVector2D GetViewSize();
	float GetScrollOffset();
	class UScrollBox* GetScrollBox();
	EReuseFallOverscrollState GetOverscrollState();
	struct FVector2D GetContentSize();
	void ClearItemSizeAll();
	void ClearItemSize(int idx);
	void ClearItemFullStyle();
	void Clear();
};




class UReuseListC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnUpdateItemParam;                                        
	struct FScriptMulticastDelegate                    OnUpdateItem;                                             
	struct FScriptMulticastDelegate                    OnScrollItem;                                             
	struct FScriptMulticastDelegate                    OnCreateItem;                                             
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           
	EWidgetClipping                                    ScrollBoxClipping;                                        
	ESlateVisibility                                   ScrollBoxVisibility;                                      
	unsigned char                                      UnknownData00[0x6];                                       
	struct FScrollBarStyle                             ScrollBarStyle;                                           
	ESlateVisibility                                   ScrollBarVisibility;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	struct FVector2D                                   ScrollbarThickness;                                       
	int                                                ItemWidth;                                                
	int                                                ItemHeight;                                               
	int                                                PaddingX;                                                 
	int                                                PaddingY;                                                 
	int                                                TitleSize;                                                
	int                                                TitlePadding;                                             
	bool                                               AutoTitleSize;                                            
	EReuseListStyle                                    Style;                                                    
	unsigned char                                      UnknownData02[0x2];                                       
	class UClass*                                      ItemClass;                                                
	int                                                PreviewCount;                                             
	EReuseListNotFullAlignStyle                        NotFullAlignStyle;                                        
	bool                                               NotFullScrollBoxHitTestInvisible;                         
	bool                                               UpdateForceLayoutPrepass;                                 
	unsigned char                                      UnknownData03[0x1];                                       
	int                                                ItemCacheNum;                                             
	int                                                DelayUpdateTimeLimitMS;                                   
	unsigned char                                      UnknownData04[0xE0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ReuseListC");
		return pStaticClass;
	}


	void SetTitleSlotAutoSize(bool as);
	void SetTitleSize(int sz);
	void SetScrollOffset(float NewScrollOffset);
	void ScrollToStart();
	void ScrollToEnd();
	void Reset(class UClass* __ItemClass, EReuseListStyle __Style, int __ItemWidth, int __ItemHeight, int __PaddingX, int __PaddingY);
	void Reload(int __ItemCount);
	void RefreshParam(const struct FString& _Param);
	void RefreshOneParam(int __Idx, const struct FString& _Param);
	void RefreshOne(int __Idx);
	void Refresh();
	void OnUpdateItemParamDelegate__DelegateSignature(class UUserWidget* Widget, int idx, const struct FString& Param);
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnScrollItemDelegate__DelegateSignature(int BeginIdx, int EndIdx);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget);
	void JumpByIdxStyle(int __Idx, EReuseListJumpStyle __Style);
	void JumpByIdx(int __Idx);
	struct FVector2D GetViewSize();
	float GetScrollOffset();
	int GetPaddingY();
	int GetPaddingX();
	int GetItemWidthAndPaddingX();
	int GetItemWidth();
	int GetItemHeightAndPaddingY();
	int GetItemHeight();
	struct FVector2D GetContentSize();
	void GetAllWidgetItems(TArray<class UUserWidget*>* ResultItemList);
	class UUserWidget* FindItem(int idx);
	void Clear();
};




class UReusePageC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnUpdateItem;                                             
	struct FScriptMulticastDelegate                    OnPageChanged;                                            
	struct FScriptMulticastDelegate                    OnCreateItem;                                             
	struct FScriptMulticastDelegate                    OnBeginDrag;                                              
	struct FScriptMulticastDelegate                    OnEndDrag;                                                
	struct FScriptMulticastDelegate                    OnEndScroll;                                              
	class UClass*                                      ItemClass;                                                
	unsigned char                                      IsLoopPage : 1;                                           
	unsigned char                                      IsVertical : 1;                                           
	unsigned char                                      CanDrag : 1;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                CanDragLimit;                                             
	float                                              AutoPlayRate;                                             
	int                                                ShowPageNum;                                              
	int                                                DragPageNum;                                              
	float                                              DChgPageParam;                                            
	float                                              ScrollInertial;                                           
	float                                              ScrollRate;                                               
	unsigned char                                      UnknownData01[0xB0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ReusePageC");
		return pStaticClass;
	}


	void SetAutoPlayRate(float Rate);
	void SelectPage(int __Idx);
	void Reload(int __Count);
	void Play(bool bPlay);
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnPageChangedDelegate__DelegateSignature(int PageIdx);
	void OnEndScrollDelegate__DelegateSignature(int PageIdx);
	void OnEndDragDelegate__DelegateSignature(int PageIdx);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget);
	void OnBeginDragDelegate__DelegateSignature();
	void MovePrePage();
	void MoveNextPage();
	bool IsDraging();
	int GetPageCount();
	int GetPage();
	float GetOffset();
	float GetAutoPlayRate();
	void GetAllItems(bool OnlyVisible, TArray<class UUserWidget*>* ResultItemList);
	void ClearCache();
};




class UUDPPingCollector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      
	TMap<struct FString, struct FPingServerInfo>       mUDPPingInfoMap;                                          
	unsigned char                                      UnknownData01[0x30];                                      
	struct FScriptMulticastDelegate                    UDPPingShadowResultToLuaDelegate;                         
	unsigned char                                      UnknownData02[0x60];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UDPPingCollector");
		return pStaticClass;
	}


	void TickUDPPing(float DeltaTime);
	void setUDPPingServerAddress(const struct FString& ServerIP, const struct FString& ServerPort, int ZoneID, int WaterMarkType);
	void SetPingSystemControlFlag(int TakeEffectModule, int ThreadReportTlog, int EpollReportTlog);
	void PingServer(const struct FString& address, float Timeout, int WaterMarkType);
	void OnPostSwitchGameStatus(const struct FString& MapName);
	void OnPingServerResultDelegate__DelegateSignature(const struct FString& address, int IsSuccess, float Time, int PingSystemType);
	bool IsChooingZoneAccess();
	bool isAllZoneHasPingValue();
	void Init(float MinPingintervalTime, float pingintervalTime, float pingTimeoutSecond, float normalDelayMilliSecond, float maxAutoChooseZoneDelayMilliSecond);
	float GetZoneServerDelay(const struct FString& ServerAddress);
	int GetMinDealyAddress();
	void ChoosingZone(int ZoneID, const struct FString& AddrIP);
};




class UViberateEngine : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ViberateEngine");
		return pStaticClass;
	}

};




class UVibrateSystemManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	struct FString                                     ClassPath;                                                
	struct FString                                     VibrateAssetTablePath;                                    
	int                                                MaxAmplitude;                                             
	int                                                GroundSpesificMatVibrationMinGrear;                       
	float                                              VehicleBreakingMinSpeedThreshold;                         
	float                                              VehicleGearMinSpeedThreshold;                             
	TArray<int>                                        TriggerVehicleVibrateGroundPhysicMatList;                 
	float                                              TriggerVehicleVibrateMinSlip;                             
	float                                              TriggerVehicleVibrateMinSuspensionRaisePercent;           
	float                                              VehicleRaiseSuspensionVibrateInerval;                     
	int                                                InitAssetProccessNumFrames;                               
	struct FString                                     LoopTime;                                                 
	unsigned char                                      UnknownData01[0x50];                                      
	TMap<int, EVibrateTriggerEventType>                LoadedVibrateAssetIDAndEventTypeMap;                      
	TMap<EVibrateStrengthLevel, float>                 VibrateStrengthLevelModifireMap;                          
	TMap<EVibrateTriggerEventType, float>              VibrateEventMinIntervalMap;                               
	TArray<EVibrateTriggerEventType>                   CharacterVibrateEventList;                                
	TArray<EVibrateTriggerEventType>                   WeaponVibrateEventList;                                   
	TArray<EVibrateTriggerEventType>                   VehicleVibrateEventList;                                  
	TArray<EVibrateTriggerEventType>                   SoundUIVibrateEventList;                                  
	TArray<EVibrateTriggerEventType>                   CharacterBeHitVibrateEventList;                           
	TArray<EVibrateTriggerEventType>                   VehicleEngineVibrateEventList;                            
	TArray<EVibrateTriggerEventType>                   VehicleBeHitVibrateEventList;                             
	bool                                               bEntireVibrationSwitch;                                   
	bool                                               bCharacterVibrationSwitch;                                
	bool                                               bWeaponVibrationSwitch;                                   
	bool                                               bVehicleVibrationSwitch;                                  
	bool                                               bSoundUIVibrationSwitch;                                  
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                CharacterVibrationLevel;                                  
	int                                                WeaponVibrationLevel;                                     
	int                                                VehicleVibrationLevel;                                    
	int                                                SoundUIVibrationLevel;                                    
	int                                                EntireVibrationLevel;                                     
	bool                                               bCharacterVibrate;                                        
	bool                                               bWeaponVibrate;                                           
	bool                                               bVehicleVibrate;                                          
	bool                                               bSoundUIVibrate;                                          
	bool                                               bCharacterBeHitVibrate;                                   
	bool                                               bCharacterClimbVibrate;                                   
	bool                                               bCharacterFallVibrate;                                    
	bool                                               bCharacterSwimVibrate;                                    
	bool                                               bAutoWeaponVibrate;                                       
	bool                                               bSemiAutoWeaponVibrate;                                   
	bool                                               bBoltWeaponVibrate;                                       
	bool                                               bOtherWeaponVibrate;                                      
	bool                                               bVehicleEngineVibrate;                                    
	bool                                               bVehicleBeHitVibrate;                                     
	bool                                               bVehicleCrashVibrate;                                     
	bool                                               bFootstepSoundUIVibrate;                                  
	bool                                               bFireShotSoundUIVibrate;                                  
	bool                                               bGlassBrokenSoundUIVibrate;                               
	bool                                               bVehicleSoundUIVibrate;                                   
	unsigned char                                      UnknownData03[0x1];                                       
	struct FTimerHandle                                StopVibrateHandle;                                        
	int                                                CurPlayingVibrateAssetIndex;                              
	int                                                CurLoopPlayingVibrateAssetIndex;                          
	int                                                DeviceSupportVibrateType;                                 
	bool                                               bInGameVibration;                                         
	bool                                               bIsHandBreaking;                                          
	unsigned char                                      UnknownData04[0x52];                                      
	bool                                               bHasLastVehicle;                                          
	unsigned char                                      UnknownData05[0x3];                                       
	int                                                LastVehicleGear;                                          
	bool                                               bIsLastVehicleBreaking;                                   
	bool                                               bIsLastVehicleSlipping;                                   
	unsigned char                                      UnknownData06[0x2];                                       
	int                                                LastVehicleGroundContactMaterialSurfaceType;              
	TMap<int, bool>                                    LastVehicleGearVibrateCache;                              
	TMap<EVibrateTriggerEventType, float>              LastVibrateEventTimeMap;                                  
	float                                              CurVehicleRaiseSuspensionVibrateCD;                       
	unsigned char                                      UnknownData07[0x7C];                                      
	TArray<struct FVibrateEntity>                      CacheVibrateEntityList;                                   
	TMap<struct FString, struct FString>               VibratePath2Json;                                         
	unsigned char                                      UnknownData08[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.VibrateSystemManager");
		return pStaticClass;
	}


	void StopVibrate();
	void SetVibrationLoopTime(const struct FString& InLoopTime);
	void PostVibrateTriggerActionDirectly(int SpesifyID, int Amplitude);
	void PostVibrateTriggerAction(const struct FVibrateTriggerAction& Action, bool bCheckGate, bool bCheckInterval, int SpesifyID);
	void PlayVibrateEntity(const struct FVibrateEntity& Entity);
	void ModifyWeaponVibrationSwitch(bool Val);
	void ModifyWeaponVibrationLevel(int InVal);
	void ModifyVehicleVibrationSwitch(bool Val);
	void ModifyVehicleVibrationLevel(int InVal);
	void ModifyVehicleSoundUIVibrateSetting(bool Val);
	void ModifyVehicleEngineVibrationSetting(bool Val);
	void ModifyVehicleCrashVibrateSetting(bool Val);
	void ModifyVehicleBeHitVibrateSetting(bool Val);
	void ModifySoundUIVibrationSwitch(bool Val);
	void ModifySoundUIVibrationLevel(int InVal);
	void ModifySemiAutoWeaponVibrateSetting(bool Val);
	void ModifyOtherWeaponVibrateSetting(bool Val);
	void ModifyGlassBrokenSoundUIVibrateSetting(bool Val);
	void ModifyFootstepSoundUIVibrateSetting(bool Val);
	void ModifyFireShotSoundUIVibrateSetting(bool Val);
	void ModifyEntireVibrationSwitch(bool Val);
	void ModifyEntireVibrationLevel(int InValue);
	void ModifyCharacterVibrationSwitch(bool Val);
	void ModifyCharacterVibrationLevel(int InVal);
	void ModifyCharacterSwimVibrateSetting(bool Val);
	void ModifyCharacterFallVibrateSetting(bool Val);
	void ModifyCharacterClimbVibrateSetting(bool Val);
	void ModifyCharacterBeHitVibrateSetting(bool Val);
	void ModifyBoltWeaponVibrateSetting(bool Val);
	void ModifyAutoWeaponVibrateSetting(bool Val);
	void LoadUserSettingData(int inCharacterVibrationLevel, int inWeaponVibrationLevel, int inVehicleVibrationLevel, int inSoundUIVibrationLevel, bool binCharacterBeHitVibrate, bool binCharacterClimbVibrate, bool binCharacterFallVibrate, bool binCharacterSwimVibrate, bool binVehicleEngineVibrate, bool binVehicleBeHitVibrate, bool binVehicleCrashVibrate, bool binFootstepSoundUIVibrate, bool binFireShotSoundUIVibrate, bool binGlassBrokenSoundUIVibrate, bool binVehicleSoundUIVibrate, int inEntireVibrationLevel, bool binAutoWeaponVibrate, bool binSemiAutoWeaponVibrate, bool binBoltWeaponVibrate, bool binOtherWeaponVibrate);
	void InvalidateVibrateEntityByEventType(EVibrateTriggerEventType EventType);
	void InitUserSetting();
	void InitSystem();
	void HandleApplicationWillTerminate();
	void HandleApplicationWillEnterBackground();
	void HandleApplicationWillDeactivate();
	void HandleApplicationHasReactivated();
	void HandleApplicationHasEnteredForeground();
	static class UVibrateSystemManager* GetInstance(class UObject* WorldContext, bool bAutoCreate);
	int GetEntireVibrationLevel();
	struct FString GetCurrentPlayingVibrationDebugInfo();
	int GetAmplitudeByAlpha(float Alpha);
	void ClearVibratePath2Json();
	void ClearAllVibration();
	bool CheckShootWeaponTypeVibrateGate(class ASTExtraWeapon* Weapon);
	static void CheckAndCopyFilesToSavedDir(class UVibrateSystemManager* Mgr);
	void ActiveInGameVibration(bool Inactive);
};




class UVoiceSDKInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      
	int                                                lbsRoomMemberID;                                          
	unsigned char                                      UnknownData01[0x18];                                      
	struct FScriptDelegate                             OnSTTReportCallback;                                      
	struct FScriptDelegate                             OnRSTSCallback;                                           
	struct FScriptDelegate                             OnRSTSSpeechToTextCallback;                               
	struct FScriptDelegate                             OnRSTSSubtitleCallback;                                   
	struct FScriptDelegate                             OnRSTSSubtitleASRStartCallback;                           
	struct FScriptDelegate                             OnSessionForAIInfoCallback;                               
	struct FScriptDelegate                             OnEnableMagicVoiceCallback;                               
	struct FScriptDelegate                             OnEnableRecvMagicVoiceCallback;                           
	struct FScriptDelegate                             OnSpeechFileTranslateCallback;                            
	struct FScriptDelegate                             OnSpeechTranslateCallback;                                
	struct FScriptDelegate                             OnSpeechStreamTranslateCallback;                          
	struct FScriptDelegate                             OnEnableTranslateCallback;                                
	struct FScriptDelegate                             OnRealTimeTranslateTextCallback;                          
	struct FScriptDelegate                             OnRemoveMemberFromRoomCallback;                           
	unsigned char                                      UnknownData02[0x10];                                      
	struct FString                                     ServerInfo;                                               
	uint32_t                                           openVoiceSDKLog;                                          
	uint32_t                                           MicVolumeMUFactor;                                        
	uint32_t                                           SpeekerVolumeMUFactor;                                    
	int                                                RoomOperationTimeout;                                     
	class UGameFrontendHUD*                            GameFrontendHUD;                                          
	unsigned char                                      UnknownData03[0x70];                                      
	struct FScriptDelegate                             OpenMicSuccess;                                           
	struct FScriptDelegate                             BeforeOperation;                                          
	struct FScriptDelegate                             CloseMicSuccess;                                          
	struct FScriptDelegate                             OpenSpeakerSuccess;                                       
	struct FScriptDelegate                             CloseSpeakerSuccess;                                      
	struct FScriptDelegate                             JoinRoomFail;                                             
	struct FScriptDelegate                             JoinRoomNotify;                                           
	struct FScriptDelegate                             QuitRoomNotify;                                           
	struct FScriptDelegate                             JoinLbsRoomNotify;                                        
	struct FScriptDelegate                             QuitLbsRoomNotify;                                        
	struct FScriptDelegate                             JoinCommonRoomNotify;                                     
	struct FScriptDelegate                             QuitCommonRoomNotify;                                     
	struct FScriptDelegate                             RoomStatusUpdatedNotify;                                  
	struct FScriptDelegate                             SetAppInfoSuccess;                                        
	struct FScriptDelegate                             SetAppInfoFail;                                           
	struct FScriptDelegate                             GetReconnectInfo;                                         
	struct FScriptDelegate                             ImSpeakingNotify;                                         
	struct FScriptDelegate                             TestMicFail;                                              
	struct FScriptDelegate                             TestMicSuccess;                                           
	struct FScriptDelegate                             QuitRoomFail;                                             
	struct FScriptDelegate                             DownLoadFileNotify;                                       
	struct FScriptDelegate                             UploadFileNotify;                                         
	struct FScriptDelegate                             OnPlayRecordedFileNotify;                                 
	struct FScriptDelegate                             KwsNotify;                                                
	struct FScriptDelegate                             ApplyMessageKeyNotify;                                    
	struct FScriptDelegate                             MemberIsSpeakingNotify;                                   
	struct FScriptDelegate                             LbsMemberIsSpeakingNotify;                                
	struct FScriptDelegate                             CommonMemberIsSpeakingNotify;                             
	struct FScriptDelegate                             OnMuteSwitchResult;                                       
	struct FScriptDelegate                             OnWakeUpNotify;                                           
	struct FScriptDelegate                             OnMicOptMuteResultNotify;                                 
	struct FScriptDelegate                             ReportVoiceTimeToServer;                                  
	struct FScriptDelegate                             RecordSuccess;                                            
	struct FScriptDelegate                             RecordFail;                                               
	struct FScriptDelegate                             UploadSuccess;                                            
	struct FScriptDelegate                             UploadFail;                                               
	struct FScriptDelegate                             EnableRoomMicrophone;                                     
	struct FScriptDelegate                             ExitInfectionGameMode;                                    
	struct FScriptDelegate                             JoinInfectionGameMode;                                    
	struct FScriptDelegate                             RequestPrivacyInSetting;                                  
	struct FScriptDelegate                             OnReportPlayerCallback;                                   
	struct FScriptDelegate                             OnVoiceSDKEvent;                                          
	struct FScriptDelegate                             BeforeVoiceSDKInitDelegate;                               
	struct FScriptDelegate                             AfterVoiceSDKInitDelegate;                                
	struct FScriptDelegate                             AudioRouteChangedAfterSpeakerDelegate;                    
	struct FScriptDelegate                             AudioSessionInterruptedDelegate;                          
	struct FScriptDelegate                             OnRoomMemeberInfoDelegate;                                
	unsigned char                                      UnknownData04[0x68];                                      
	struct FScriptDelegate                             OnRequestPhysicalMicToLua;                                
	struct FScriptDelegate                             OnRequestPhysicalSpeakerToLua;                            
	struct FScriptDelegate                             OnDeviceResetToLua;                                       
	unsigned char                                      UnknownData05[0x20];                                      
	struct FScriptDelegate                             OnDeliverDataCallback;                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.VoiceSDKInterface");
		return pStaticClass;
	}


	void UploadRecordFile(bool InPermanent);
	int UploadRecordedFile(const struct FString& InFilePath, int InTimeout, bool InPermanent);
	int UpdateVoiceCoordinate(const struct FString& InRoomName, int64_t X, int64_t Y, int64_t Z, int64_t Radius);
	void TestMic();
	bool TeamSpeakerEnable();
	bool TeamMicphoneEnable();
	void SwitchMode(ECharacterMainType CharMode);
	void SwitchMicphoneWhenCorpsMode();
	int StopRecording();
	void StopRecord();
	void StopPlayRecordFile();
	void StopInterphone();
	int StartRecording(const struct FString& InFilePath, bool InNotVoip);
	void StartRecord();
	void StartInterphone();
	int SpeechTranslate(const struct FString& InFileID, int InSrcLang, int InTargetLang, int InTransType, int InTimeoutMS);
	int SpeechStreamTranslateStart(const struct FString& InFileID, const struct FString& InOutFilePath, int InSrcLang, int InTargetLang, const struct FString& InVoiceType, int InVolume, int InTimeoutMS);
	int SpeechFileTranslate(const struct FString& InFilePath, int InSrcLang, int InTargetLang, int InVoiceType, float InVoiceRate, float InVolume, int InTimeoutMS);
	void ShowOpenSpeakerAtFirstMsg();
	void ShowCorpsModeCannotUseLBSVoice();
	void SetVoiceServer(const struct FString& ServerInfo);
	void SetVoiceSDKSupportBackgroundChat(bool isSupportBGChat);
	void SetVoiceSDKChatServiceEnable(bool IsEnable);
	void SetVoiceMode(int Type);
	int SetUserInfo(const struct FString& InUserInfo);
	void SetTransSecInfo(const struct FString& InTransSecInfo);
	void SetSpeakerVolum(float Value);
	void SetSpeakerStatus(bool flag);
	int SetServerUrl(int InUrlType, const struct FString& InURL);
	int SetServerInfo(const struct FString& URL, const struct FString& InDefaultIpSvr);
	void SetRoomOperationTimeout(int InTimeout);
	int SetResourePath(const struct FString& InResourcePath);
	void SetReportBufferTime(int nTimeSec);
	int SetRealtimeTransParams(const struct FString& InRoomName, const struct FString& InVoiceType, float InVoiceRate, float InVolume, const struct FString& InMagicVoiceTone, bool InAllowRemoteTranslate);
	void SetPlayerVolume(const struct FString& InPlayerId, int InVol);
	int SetNotify();
	int SetMode(int InGVMode);
	void SetMicphoneVolum(float Value);
	void SetMicphoneStatus(bool flag);
	int SetMagicVoiceMsgType(const struct FString& InMagicType);
	void SetLbsVoiceRadius(float Radius);
	void SetLbsRoomEnableStatus(bool flag);
	int SetKwsModelPath(const struct FString& KwsPath);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void SetFeature(int8_t InFeature, bool Inactive);
	int SetDeliverData(int Len, TArray<unsigned char>* pbuf);
	int SetAppInfo(const struct FString& InAppId, const struct FString& InAppKey, const struct FString& InOpenid);
	void SetAllVoiceStatus(bool flag);
	void RSTSStopRecording();
	int RSTSStartRecording(int InSrcLang, TArray<int> InTargetLangs, int InTargetLangCnt, int InTransType, int InTimeoutMS, const struct FString& InRecordFilePath, const struct FString& InSrcLangStr);
	int RSTSSpeechToText(int InSrcLang, const struct FString& InExtraInfo, const struct FString& InRecordFilePath);
	void ResetWhenLogOut();
	bool ReportPlayers(const struct FString& InExtraInfo, TArray<struct FString> InOpenids);
	int ReportFileForAbroad(const struct FString& InFilePath, bool InTranslate, bool InChangeVoice, int InTime);
	int RemoveMemberFromRoom(const struct FString& InRoomName, int InMemberId);
	void RecoverPlayersVolume(int InVol);
	void ReactiveLbsStatus();
	int QuitVoiceRoom(const struct FString& InRoomName);
	void QuitRoom();
	bool QuitLbsRoom(bool needReenterLbs);
	void QuitCommonRoom(const struct FString& InRoomName);
	int Poll();
	int PlayRecordFileV2(const struct FString& InFileID);
	int PlayRecordedFile(const struct FString& InDownloadInFilePath);
	int OpenVoiceSpeaker();
	int OpenVoiceMic();
	void OpenTeamSpeakerOnly(bool ShowTips);
	int OpenTeamMicphoneOnly(bool ShowTips);
	int OpenTeamInterphone();
	int OpenSpeaker();
	void OpenMicAndSpeakerAfterJoinLbsRoom();
	int OpenMic();
	int OpenLBSInterphone();
	void OpenIngameSpeaker();
	int OpenIngameMicphone();
	void OpenAllSpeaker(bool ShowTips);
	int OpenAllMicphone(bool ShowTips);
	int OpenAllInterphone();
	void OnRoomTypeChanged(const struct FString& itemtext);
	void OnResume();
	void OnPause();
	void OnDeliverData(TArray<unsigned char> pbuf, int Len, const struct FString& OpenID);
	bool LbsSpeakerEnable();
	bool LbsMicphoneEnable();
	int JoinTeamRoom(const struct FString& InRoomName);
	void JoinRoom(const struct FString& Room, const struct FString& UserId);
	int JoinRangeRoom(const struct FString& InRoomName);
	void JoinLbsRoom(const struct FString& lbsRoom, const struct FString& UserId);
	void JoinCommonRoom(const struct FString& InRoomName);
	bool IsVoiceSDKEnable();
	bool IsVoiceRoomHasSpeakDataInLastSeconds(int InRoomType, int InDeltaSeconds);
	bool IsTeamSpeakerWanted();
	bool IsTeamMicWanted();
	bool IsTeamInterphoneOpenned();
	bool IsSpeaking();
	bool IsLbsSpeakerWanted();
	bool IsLbsMicWanted();
	bool IsLbsInterphoneOpenned();
	bool IsInterphoneMode();
	bool IsEnableCivilFile();
	bool IsCommonRoomHasSpeakDataInLastSeconds(const struct FString& InRoomName, int InDeltaSeconds);
	int Invoke(uint32_t InCmd, uint32_t InParam1, uint32_t InParam2, const struct FString& InExterInfo);
	void InstallSystemAudioEventListener(bool InEnable);
	void InitVoiceSDKComponent(const struct FString& UserId);
	int InitVoiceSDK();
	void Init();
	bool HaveTeamRoom();
	bool HaveLbsRoom();
	float GetVoiceLength();
	struct FString GetTeamRoomName();
	int GetRoomStatus(const struct FString& InRoomName);
	struct FVoiceRoomSnapshot GetRoomSnapshot(const struct FString& InRoomName);
	int GetRoomMemberVoiceData(const struct FString& InOpenid, int InIndexType, int DataType, bool OnlyIncludeLatest);
	int GetRoomMemberId(const struct FString& InOpenid);
	int GetPlayerVolume(const struct FString& InPlayerId);
	int GetMicState();
	struct FString GetLocalRecordFilePath(const struct FString& InFileName);
	struct FString GetLbsRoomName();
	void GetAuthKey();
	int GetAudioDeviceConnectionState();
	void ForbidTeammateVoiceById(int memberID, bool IsEnable);
	int ForbidMemberVoice(int InMember, bool InEnable, const struct FString& InRoomName);
	void ForbidLbsMemberVoiceById(int memberID, bool IsEnable);
	void EnableVoiceSdk(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	int EnableVoiceRoomMicrophone(const struct FString& InRoomName, bool InEnable);
	void EnableVoiceChat(bool InEnable);
	int EnableTranslate(const struct FString& InRoomName, bool InEnable, int InMyLang, int InTransType);
	void EnableTeamRoomSpeaker(bool bEnable);
	void EnableTeamRoomMic(bool bEnable);
	int EnableRSTSSubtitle(bool InEnable, int InSrcLang, const struct FString& InExtInfo);
	int EnableRoomSpeaker(const struct FString& InRoomName, bool InEnable);
	int EnableReportForAbroad(bool InIsWholeRoundaudit);
	bool EnableReportALLAbroad(bool InEnable, bool InWithEncryption, int InTimeout);
	int EnableRecvMagicVoice(bool InEnable);
	int EnableMultiRoom(bool InEnable);
	int EnableMagicVoice(const struct FString& InMagicType, bool InEnable);
	void EnableLog(bool InEnable);
	void EnableLbsRoomSpeaker(bool bEnable);
	void EnableLbsRoomMic(bool bEnable);
	int EnableKws(bool bEnable);
	int EnableCommonRoomSpeaker(const struct FString& InRoomName, bool InEnable);
	int EnableCommonRoomMic(const struct FString& InRoomName, bool InEnable);
	int EnableCivilFile(bool Enable);
	void EnableBluetoothSCO(bool InEnable);
	int DownloadRecordFileV2(const struct FString& InFileID, bool InPermanent);
	int DownloadRecordedFile(const struct FString& InFileID, const struct FString& InDownloadInFilePath, int InTimeout, bool InPermanent);
	void CommonTestMic();
	int CloseVoiceSpeaker();
	int CloseVoiceMic();
	void CloseSpeaker();
	void CloseMic();
	void CloseIngameSpeaker();
	void CloseIngameMicphone();
	void CloseAllSpeaker(bool ShowTips);
	void CloseAllMicphone(bool ShowTips);
	int CheckDeviceMuteState();
	void CheckAndEnableRoomSpeaker();
	void ChatShowAgeRestrictionMsgInLobby();
	void ChatShowAgeRestrictionMsgInFighting();
	void ChatShowAgeRestrictionMsgInChat();
	void ChatRequestPrivacyInSetting();
	void ChatRequestPrivacyInGame();
	int ApplyMessageKey();
	void AlwaysDisableRoomMic(const struct FString& InRoomName, bool WithClear);
};




class AWeaponDIYCaptureActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.WeaponDIYCaptureActor");
		return pStaticClass;
	}


	void ResizeRT(class UTextureRenderTarget2D* RenderTarget, int Width, int Height);
};




class UWINSDKFBWebLogin : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnUrlChanged;                                             
	struct FScriptMulticastDelegate                    OnHttpResponed;                                           
	struct FString                                     InitialURL;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.WINSDKFBWebLogin");
		return pStaticClass;
	}


	void OnWINSDKHttpResponed__DelegateSignature(bool requestSucc, const struct FString& txtContent);
	void OnUrlChanged__DelegateSignature(const struct FText& Text);
	void LoadUrl(const struct FString& NewURL);
	void DoHttpRequest(const struct FString& URL);
};




class UWINWebSocketServer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnWebSocketConnectEvent;                                  
	struct FScriptMulticastDelegate                    OnWebSocketErrorEvent;                                    
	struct FScriptMulticastDelegate                    OnWebSocketMessageEvent;                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.WINWebSocketServer");
		return pStaticClass;
	}


	void Tick(int DeltaTime);
	void Stop();
	void Start(int InPort);
	void Send(const struct FString& InMsg);
	static class UWINWebSocketServer* GetInstance();
};


}

