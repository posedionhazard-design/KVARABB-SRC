#pragma once


 
namespace SDK
{






class UHDmpveNet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x230];                                     
	class UHDmpveSDK*                                  _ConnectorInst;                                           
	struct FScriptMulticastDelegate                    StartTickNetPackageDelegate;                              
	unsigned char                                      UnknownData01[0x140];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.HDmpveNet");
		return pStaticClass;
	}


	void SetTickNetMsgMaxTime(float MaxTime);
	void OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo);
	void OnUAAssistantNotify(const struct FUAAssistantInfoWrapper& uaAssistantInfo);
	void OnTraceCallBack(int code, const struct FString& dataJson);
	void OnTConndAuthFailDelegate();
	void OnShareNotify(int Result, int Platform);
	void OnRequestPermissionsResult(int code, const struct FString& permission, const struct FString& grantResult);
	void OnReceiveDataNotify(int Result, TArray<unsigned char> Msg);
	void OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo);
	void OnQRCodeGenQRImg(int Tag, int Ret, const struct FString& imgPath);
	void OnMigrateNotify(int Result);
	void OnLaunchInfo(const struct FString& roominfo);
	void OnIGShareUploadFinished(int Result, const struct FString& Platform);
	void OnGroupNotify(const struct FGroupInfoWrapper& groupInfo);
	void OnGetWebviewActionNotify(const struct FString& webviewinfo);
	void OnGetTicketNotify(const struct FString& TicketInfo);
	void OnGetShortUrlNotify(const struct FShortURLInfoWrapper& shorturlinfo);
	void OnGetPlatformFriendsNotify(const struct FPlatformFriendInfoMap& platformFriends);
	void OnGetCountryNoByIMSDK(int Country);
	void OnGameMasterEvent(const struct FString& EvenName, int Result);
	void OnConnectorStateChangeNotify(int State, int Param1, int Param2, int Param3);
	void OnConnectorDisconnectedNotify(int Result);
	void OnConnectorConnectedNotify(int IsConnected, int nResult);
	void OnBindIntlNotify(int bindEventID);
	void OnAccountLogoutNotify(int Result);
	void OnAccountLoginNotify(int Result, const struct FString& OpenID, int Channel, const struct FString& resultMsg, int thirdRetCode);
	void OnAccountInitializeNotify(int Result);
	void OnAccessTokenRefreshedNotify(int Result);
};




class UHDmpveSDK : public UObject
{
public:
	unsigned char                                      UnknownData00[0x100];                                     
	int                                                MaxBufferSize;                                            
	unsigned char                                      UnknownData01[0xC];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.HDmpveSDK");
		return pStaticClass;
	}


	static void UploadFile(const struct FString& _imgPath, int shareFileType, const struct FString& InDestKey);
	void ShareWithUploadPhotoByChannel(const struct FString& _imgPath, int _channel, const struct FString& _url, const struct FString& _destKey);
	void ShareWithPhotoByChannel_Simple(const struct FString& _imgPath, const struct FString& _title, const struct FString& _content, int _channel);
	static void ShareFacebookLink(const struct FString& ftitle, const struct FString& fdesc, const struct FString& fsharelink);
	void SetTestLogin(const struct FString& OpenID, int Channel);
	void InviteSystemOfflineFriendsExt2(const struct FString& _title, const struct FString& _content, const struct FString& _link);
	void InviteSystemOfflineFriendsExt(const struct FString& _title, const struct FString& _content, const struct FString& _link);
	void InviteFBFriendsUnregistered_Link(const struct FString& _title, const struct FString& _content, const struct FString& _link, const struct FString& _extend);
	static void HttpDnsSetOpenid(const struct FString& InOpenid);
	static void HttpDnsInit(const struct FString& InAppId, bool InIsDebug, int InTimeout);
	static void HttpDnsDestroy();
	static int GRomePingDuallink(const struct FString& InHost);
	static int GRomeGetDuallinkStatus();
	static struct FString GetUploadUrlByFile(const struct FString& file);
	static struct FString GetUploadUrl();
	static int GetUploadStatusByFile(const struct FString& file);
	static int GetUploadStatus();
	static void ClearFileUpload(const struct FString& file);
};




class UHDmpveSDKDelegates : public UObject
{
public:
	struct FScriptMulticastDelegate                    ConnectNotifyDelegate;                                    
	struct FScriptMulticastDelegate                    ConnectStateChangedNotifyDelegate;                        
	struct FScriptMulticastDelegate                    DisconnectNotifyDelegate;                                 
	struct FScriptMulticastDelegate                    ReceiveDataNotifyDelegate;                                
	struct FScriptMulticastDelegate                    AccountInitializeNotifyDelegate;                          
	struct FScriptMulticastDelegate                    AccountLoginNotifyDelegate;                               
	struct FScriptMulticastDelegate                    AccessTokenRefreshedNotifyDelegate;                       
	struct FScriptMulticastDelegate                    AccountLogoutNotifyDelegate;                              
	struct FScriptMulticastDelegate                    ShareNotifyDelegate;                                      
	struct FScriptMulticastDelegate                    GroupNotifyDelegate;                                      
	struct FScriptMulticastDelegate                    QuickLoginNotifyDelegate;                                 
	struct FScriptMulticastDelegate                    QRCodeGenQRImgDelegate;                                   
	struct FScriptMulticastDelegate                    QRCodeLaunchDelegate;                                     
	struct FScriptMulticastDelegate                    WebviewNotifyDelegate;                                    
	struct FScriptMulticastDelegate                    ShortUrlNotifyDelegate;                                   
	struct FScriptMulticastDelegate                    OnGetTicketNotifyDelegate;                                
	struct FScriptMulticastDelegate                    GameMasterEventDelegate;                                  
	struct FScriptMulticastDelegate                    OnRequestPermissionResultDelegate;                        
	struct FScriptMulticastDelegate                    TConndAuthFailDelegate;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.HDmpveSDKDelegates");
		return pStaticClass;
	}

};




class UIMSDKConfig : public UObject
{
public:
	struct FString                                     IMSDK_GAME_ID;                                            
	struct FString                                     IMSDK_SERVER_SDKAPI_RELEASE;                              
	struct FString                                     IMSDK_SERVER_SDKAPI_BACKUP_RELEASE;                       
	struct FString                                     IMSDK_SERVER_NOTICE_RELEASE;                              
	struct FString                                     IMSDK_SERVER_HELP_RELEASE;                                
	struct FString                                     IMSDK_SERVER_HELP_SCHEME_RELEASE;                         
	struct FString                                     IMSDK_SERVER_CONFIG_RELEASE;                              
	struct FString                                     IMSDK_LOG_LEVEL_RELEASE;                                  
	struct FString                                     IMSDK_DEBUG_RELEASE;                                      
	struct FString                                     IMSDK_INNER_VOLLEY_DEBUG_RELEASE;                         
	struct FString                                     IMSDK_SERVER_SDKAPI_TEST;                                 
	struct FString                                     IMSDK_SERVER_SDKAPI_BACKUP_TEST;                          
	struct FString                                     IMSDK_SERVER_NOTICE_TEST;                                 
	struct FString                                     IMSDK_SERVER_HELP_TEST;                                   
	struct FString                                     IMSDK_SERVER_HELP_SCHEME_TEST;                            
	struct FString                                     IMSDK_SERVER_CONFIG_TEST;                                 
	struct FString                                     IMSDK_LOG_LEVEL_TEST;                                     
	struct FString                                     IMSDK_DEBUG_TEST;                                         
	struct FString                                     IMSDK_INNER_VOLLEY_DEBUG_TEST;                            
	struct FString                                     IMSDK_SERVER_UNIFIED_ACCOUNT_RELEASE;                     
	struct FString                                     IMSDK_SERVER_UNIFIED_ACCOUNT_BACKUP_RELEASE;              
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_APP_ID_RELEASE;                     
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_SDK_KEY_RELEASE;                    
	struct FString                                     IMSDK_TWITTER_WEB_LOGIN_URL_RELEASE;                      
	struct FString                                     MIGRATE_WEB_URL_RELEASE;                                  
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_CHECK_PASSWORD;                     
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_PLATFORM_TYPE;                      
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_CHANNEL_ID;                         
	struct FString                                     IMSDK_SERVER_UNIFIED_ACCOUNT_TEST;                        
	struct FString                                     IMSDK_SERVER_UNIFIED_ACCOUNT_BACKUP_TEST;                 
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_APP_ID_TEST;                        
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_SDK_KEY_TEST;                       
	struct FString                                     IMSDK_TWITTER_WEB_LOGIN_URL_TEST;                         
	struct FString                                     MIGRATE_WEB_URL_TEST;                                     
	struct FString                                     MIGRATE_WEB_USER_AGENT_STRING;                            
	struct FString                                     IMSDK_ACCOUNT_CHECK_POPUP_STATUS_ENABLE;                  
	struct FString                                     IMSDK_ACCOUNT_VERIFY_OPT_SID_ENABLE;                      
	struct FString                                     IMSDK_ACCOUNT_SEND_CODE_WEB_VERIFY;                       
	struct FString                                     IMSDK_ADMOB_TEST_DEVICE;                                  
	struct FString                                     IMSDK_ACCOUNT_CAPTCHA_APP_ID_FOR_VERIFY_CODE;             
	struct FString                                     IMSDK_SERVER_QR_CODE_RELEASE;                             
	struct FString                                     IMSDK_SERVER_QR_CODE_TEST;                                
	struct FString                                     IMSDK_QR_CODE_SDK_KEY;                                    
	struct FString                                     IMSDK_NEW_API_ENABLE_LEVEL_RELEASE;                       
	struct FString                                     IMSDK_NEW_API_ENABLE_LEVEL_TEST;                          
	struct FString                                     IMSDK_LOCAL_LOG_ENABLE;                                   
	struct FString                                     IMSDK_WEB_LOGIN_BASE_URL_RELEASE;                         
	struct FString                                     IMSDK_WEB_LOGIN_BASE_URL_TEST;                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.IMSDKConfig");
		return pStaticClass;
	}


	void PatchMSDKConfigWithAreaConfig();
	struct FString GetIMSDKLogLevel(int InEnv);
};




class UIMSDKHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    WebviewVerifyCallbackDelegate;                            
	struct FScriptMulticastDelegate                    OnLoadAdvertiseResult;                                    
	struct FScriptMulticastDelegate                    OnShowAdvertiseResult;                                    
	struct FScriptMulticastDelegate                    OnGenerateQRCodeNotify;                                   
	struct FScriptMulticastDelegate                    OnQRCodeStatusNotify;                                     
	struct FScriptMulticastDelegate                    OnInvalidateQRCodeNotify;                                 
	struct FScriptMulticastDelegate                    OnLoginCommandDelegate;                                   
	struct FScriptMulticastDelegate                    OnOpenAppByUrlDelegate;                                   
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.IMSDKHelper");
		return pStaticClass;
	}


	void UpdateIMSDKBindResult(const struct FString& InBindResult);
	bool SwitchQRCodeLoginResult(const struct FString& InOpenid);
	void StartWebVerify(const struct FString& InExtraInfo, const struct FString& InVerifyAppId, const struct FString& InAccount);
	void SetWindowEditorLoginTokenIndex(int Index);
	void SetupLoginCacheInfo(int InChannelId, bool InIsQuickLogin);
	void SetupAdjustDMA(int InEEA, int InAdPersonalization, int InAdUserData);
	void SetUgId(const struct FString& InUgId);
	void SetNoAuthOpenid(const struct FString& OpenID);
	void SetMSDKConfig(bool InClearLoginData, TMap<struct FString, struct FString>* InConfigMaps);
	void SetLoginType(const struct FString& InIMSDKChannelName);
	struct FString SetLoginResult(const struct FString& InLoginRetJson);
	void SetIMSDKEnv(int iEnv);
	bool SetGameDeviceId(const struct FString& InGameDeviceId);
	void SetChannel(const struct FString& InIMSDKChannelName);
	void SetAdvertiseUserID(const struct FString& UserId);
	void SetAdvertiseCustomData(const struct FString& InCustomData);
	void SaveLastIMSDKChannelID(int channelId);
	void RequestVerifyCode(const struct FString& InPhoneOrEmail, int InAccountType, int InUseForType, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InExtraJson);
	void RefreshLogin();
	bool RecoverGuest(const struct FString& channelUserId);
	void QuickLogin();
	void QueryQRCodeStatus(const struct FString& InCodeId, const struct FString& InRandStr, const struct FString& InExtraJson);
	void PlayAdvertise();
	void OriginalShare(int InShareType, const struct FString& InMSDKChannelName, const struct FString& InTitle, const struct FString& InContent, const struct FString& InLink, const struct FString& InThumbPath, const struct FString& InImagePath, const struct FString& InExtraJson, const struct FString& InUser);
	void OriginalLogin(const struct FString& InExtraJson, TArray<struct FString> InPermissions, bool InNeedGuid);
	void OriginalBind(const struct FString& InChannel, const struct FString& InSubChannel, const struct FString& InExtra);
	void OnCommandLogin(const struct FString& InCmd, const struct FString& InExtra);
	void ModifyAccountInfo(const struct FString& InAccount, int InAccountType, int InVerifyType, const struct FString& InVerifyData, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InMondifyToAccount, int InModifyAccountType, const struct FString& InModifyVerifyCode, const struct FString& InModifyPhoneAreaCode, const struct FString& InExtraJson);
	void LogoutWith(int InMSDKChannelId);
	void LogoutQRCode(const struct FString& InOpenid);
	void LoadAdvertise(const struct FString& InAdvertiseUnitId, const struct FString& InExtraJson);
	bool IsEqualCurLoginPlatform(const struct FString& strChannel);
	bool IsChannelInstalled(const struct FString& InChannelId);
	bool IsChannelBound(int InMSDKChannelId);
	bool IsAlreadyBindWhatsApp();
	bool IsAlreadyBindVK();
	bool IsAlreadyBindUnifiedAccount();
	bool IsAlreadyBindTwitter();
	bool IsAlreadyBindTikTok();
	bool IsAlreadyBindNosChat();
	bool IsAlreadyBindLine();
	bool IsAlreadyBindHMS();
	bool IsAlreadyBindGooglePlay();
	bool IsAlreadyBindGameCenter();
	bool IsAlreadyBindFB();
	bool IsAlreadyBindDiscord();
	bool IsAlreadyBindBgBg();
	bool IsAlreadyBindApple();
	void InvalidateQRCode(const struct FString& InCodeId, const struct FString& InRandStr, const struct FString& InExtraJson);
	void InitAdvertiseSDK_iOS();
	void InitAdvertiseSDK();
	struct FString GetVerifyAppId4SendCode();
	void GetShortUrl(const struct FString& URL, const struct FString& Mask, const struct FString& Extra);
	struct FString GetSessionId();
	struct FString GetOpenId();
	struct FIMSDKLoginResult GetLoginResult();
	struct FString GetLastLoginResultJson();
	int GetLastIMSDKChannelID();
	static class UIMSDKHelper* GetInstance();
	struct FString GetIMSDKWebLoginParamsLaunchFromWeb(const struct FString& InState, const struct FString& InChallenge);
	struct FString GetIMSDKWebLoginParams(const struct FString& InURL, const struct FString& InAppId, const struct FString& InVerifier);
	struct FString GetIMSDKLoginTokenExpireTime();
	struct FString GetIMSDKLoginToken();
	struct FString GetIMSDKClientApiParams();
	int GetHDmpveChannelID();
	struct FString GetDisplayLoginErrorCode();
	struct FString GetCurLoginPlatform();
	struct FString GetChannelNickname();
	struct FString GetBindRet();
	void GetBindInfo();
	int GetBindCount();
	struct FString GetAllQRCodeLoginResults();
	struct FString GetAdjustID();
	struct FString GetAdjustAttr();
	void GenerateQRCode(const struct FString& InExtraJson);
	int ConvertTConndChannel2IMSDKChannel(int InTConndChannelId);
	int ConvertStrToIMSDKChannel(const struct FString& strChannel);
	struct FString ConvertIMSDKChannelToStr(int imsdkChannel, bool caseSensitive);
	int ConvertIMSDKChannel2TConndChannel(int InIMSDKChannelId);
	void ContinueLoginWithLocalResult();
	void ClearLoginResult();
	void CheckVerifyCodeValid(const struct FString& InAccount, int InAccountType, const struct FString& InPhoneAreaCode, const struct FString& InVerifyCode, int InCodeType, const struct FString& InLanuageCode, const struct FString& InExtraJson);
	bool CheckLocalForceLoginFlag(int InChannel);
	void CheckIsRegisted(const struct FString& InAccount, int InAccountType, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InExtraJson);
	void ChangePassword(const struct FString& InAccount, int InAccountType, const struct FString& InVerifyCode, const struct FString& InNewPassword, const struct FString& InAreaCode, const struct FString& InLangType, const struct FString& InExtraJson);
	void BindWhatsApp(const struct FString& InExtraJson);
	void BindVK();
	void BindUnifiedAccount(const struct FString& InExtraJson);
	void BindTwitter();
	void BindTikTok(const struct FString& InExtraJson);
	void BindNosChat();
	void BindLine();
	void BindHMS();
	void BindGooglePlay();
	void BindGameCenter();
	void BindFB();
	void BindDiscord();
	void BindChannel(int InMSDKChannelId, const struct FString& InExtraJson);
	void BindBgBg();
	void BindApple();
};




class UMockGameSvrClientNet : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      
	struct FString                                     Host;                                                     
	int                                                Port;                                                     
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.MockGameSvrClientNet");
		return pStaticClass;
	}


	void LoginMockGameSvr(const struct FString& UID, const struct FString& PlayerName, int ModeID);
};




class UStoreGameHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    StoreGameCallback;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.StoreGameHelper");
		return pStaticClass;
	}


	void UnlockGPAchievement(const struct FString& InAchievement);
	void UnInitialize();
	void ShowLeaderboard(const struct FString& InIdentifier, int InTimeScope);
	void ShowAchievements();
	void RequestServerAuthCode();
	void ReportScore(int64_t InScore, const struct FString& InIdentifier);
	void ReportAchievement1(const struct FString& InIdentifier, double percent);
	void ReportAchievement(const struct FString& InIdentifier, double percent);
	void LoginGPManual();
	void LoadReceivedChallenges();
	void LoadLeaderboardScores(const struct FString& InIdentifier, int InRangeLocation, int InRangeLength, int InPlayScope, int InTimeScope);
	void LoadFriends();
	void LoadAchievements();
	void IssueChallengeWithScore(TMap<struct FString, struct FString> InScoreInfo, TMap<struct FString, struct FString> InPlayerInfo, TArray<struct FString> InPlayerIDs, const struct FString& InMessage);
	void IssueChallengeWithArchivement(TMap<struct FString, struct FString> InAchievementInfo, TArray<struct FString> InPlayerIDs, const struct FString& InMessage);
	void Initialize();
	void InitGP();
	void IncreaseGPAchievement(const struct FString& InAchievement, int InStep);
	static class UStoreGameHelper* Get();
	static void Destroy();
	void AuthenticateLocalPlayer();
};




class UiTOPPrefs : public USaveGame
{
public:
	bool                                               bForceLogin;                                              
	bool                                               bFirstLoginGuestAfterBindFB;                              
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                nHDmpveChannelID;                                         
	int                                                nLastIMSDKChannelID;                                      
	bool                                               bNeedFBForceLoginForRelationChainError;                   
	unsigned char                                      UnknownData01[0x3];                                       
	int64_t                                            lastTimeSetFBForceLoginForRelationChainError;             
	bool                                               bNeedWXForceLoginForRelationChainError;                   
	unsigned char                                      UnknownData02[0x7];                                       
	int64_t                                            lastTimeSetWXForceLoginForRelationChainError;             
	bool                                               bNeedVKForceLoginForRelationChainError;                   
	unsigned char                                      UnknownData03[0x7];                                       
	int64_t                                            lastTimeSetVKForceLoginForRelationChainError;             
	bool                                               bNeedLineForceLoginForRelationChainError;                 
	unsigned char                                      UnknownData04[0x7];                                       
	int64_t                                            lastTimeSetLineForceLoginForRelationChainError;           
	bool                                               bNeedBgBgForceLoginForRelationChainError;                 
	unsigned char                                      UnknownData05[0x7];                                       
	int64_t                                            lastTimeSetBgBgForceLoginForRelationChainError;           
	bool                                               bNeedAppleForceLoginForRelationChainError;                
	unsigned char                                      UnknownData06[0x7];                                       
	int64_t                                            lastTimeSetAppleForceLoginForRelationChainError;          
	bool                                               bNeedUnifiedAccountForceLoginForRelationChainError;       
	unsigned char                                      UnknownData07[0x7];                                       
	int64_t                                            lastTimeSetUnifiedAccountForceLoginForRelationChainError; 
	bool                                               bNeedHMSForceLoginForRelationChainError;                  
	unsigned char                                      UnknownData08[0x7];                                       
	int64_t                                            lastTimeSetHMSForceLoginForRelationChainError;            
	bool                                               bNeedDiscordForceLoginForRelationChainError;              
	unsigned char                                      UnknownData09[0x7];                                       
	int64_t                                            lastTimeSetDiscordForceLoginForRelationChainError;        
	bool                                               bNeedWhatsAppForceLoginForRelationChainError;             
	unsigned char                                      UnknownData10[0x7];                                       
	int64_t                                            lastTimeSetWhatsappForceLoginForRelationChainError;       
	bool                                               bNeedTikTokForceLoginForRelationChainError;               
	unsigned char                                      UnknownData11[0x7];                                       
	int64_t                                            lastTimeSetTikTokForceLoginForRelationChainError;         
	bool                                               bNeedForceLoginForRelationChainError;                     
	unsigned char                                      UnknownData12[0x7];                                       
	int64_t                                            lastTimeSetForceLoginForRelationChainError;               
	struct FString                                     lastLoginArea;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.iTOPPrefs");
		return pStaticClass;
	}

};


}

