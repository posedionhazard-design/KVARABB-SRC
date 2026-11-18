#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UHDmpveNet_SetTickNetMsgMaxTime_Params
{
	float                                              MaxTime;                                                  
};


struct UHDmpveNet_OnWebviewNotify_Params
{
	struct FWebviewInfoWrapper                         webviewinfo;                                              
};


struct UHDmpveNet_OnUAAssistantNotify_Params
{
	struct FUAAssistantInfoWrapper                     uaAssistantInfo;                                          
};


struct UHDmpveNet_OnTraceCallBack_Params
{
	int                                                code;                                                     
	struct FString                                     dataJson;                                                 
};


struct UHDmpveNet_OnTConndAuthFailDelegate_Params
{
};


struct UHDmpveNet_OnShareNotify_Params
{
	int                                                Result;                                                   
	int                                                Platform;                                                 
};


struct UHDmpveNet_OnRequestPermissionsResult_Params
{
	int                                                code;                                                     
	struct FString                                     permission;                                               
	struct FString                                     grantResult;                                              
};


struct UHDmpveNet_OnReceiveDataNotify_Params
{
	int                                                Result;                                                   
	TArray<unsigned char>                              Msg;                                                      
};


struct UHDmpveNet_OnQuickLoginNotify_Params
{
	struct FWakeupInfoWrapper                          wakeupinfo;                                               
};


struct UHDmpveNet_OnQRCodeGenQRImg_Params
{
	int                                                Tag;                                                      
	int                                                Ret;                                                      
	struct FString                                     imgPath;                                                  
};


struct UHDmpveNet_OnMigrateNotify_Params
{
	int                                                Result;                                                   
};


struct UHDmpveNet_OnLaunchInfo_Params
{
	struct FString                                     roominfo;                                                 
};


struct UHDmpveNet_OnIGShareUploadFinished_Params
{
	int                                                Result;                                                   
	struct FString                                     Platform;                                                 
};


struct UHDmpveNet_OnGroupNotify_Params
{
	struct FGroupInfoWrapper                           groupInfo;                                                
};


struct UHDmpveNet_OnGetWebviewActionNotify_Params
{
	struct FString                                     webviewinfo;                                              
};


struct UHDmpveNet_OnGetTicketNotify_Params
{
	struct FString                                     TicketInfo;                                               
};


struct UHDmpveNet_OnGetShortUrlNotify_Params
{
	struct FShortURLInfoWrapper                        shorturlinfo;                                             
};


struct UHDmpveNet_OnGetPlatformFriendsNotify_Params
{
	struct FPlatformFriendInfoMap                      platformFriends;                                          
};


struct UHDmpveNet_OnGetCountryNoByIMSDK_Params
{
	int                                                Country;                                                  
};


struct UHDmpveNet_OnGameMasterEvent_Params
{
	struct FString                                     EvenName;                                                 
	int                                                Result;                                                   
};


struct UHDmpveNet_OnConnectorStateChangeNotify_Params
{
	int                                                State;                                                    
	int                                                Param1;                                                   
	int                                                Param2;                                                   
	int                                                Param3;                                                   
};


struct UHDmpveNet_OnConnectorDisconnectedNotify_Params
{
	int                                                Result;                                                   
};


struct UHDmpveNet_OnConnectorConnectedNotify_Params
{
	int                                                IsConnected;                                              
	int                                                nResult;                                                  
};


struct UHDmpveNet_OnBindIntlNotify_Params
{
	int                                                bindEventID;                                              
};


struct UHDmpveNet_OnAccountLogoutNotify_Params
{
	int                                                Result;                                                   
};


struct UHDmpveNet_OnAccountLoginNotify_Params
{
	int                                                Result;                                                   
	struct FString                                     OpenID;                                                   
	int                                                Channel;                                                  
	struct FString                                     resultMsg;                                                
	int                                                thirdRetCode;                                             
};


struct UHDmpveNet_OnAccountInitializeNotify_Params
{
	int                                                Result;                                                   
};


struct UHDmpveNet_OnAccessTokenRefreshedNotify_Params
{
	int                                                Result;                                                   
};


struct UHDmpveSDK_UploadFile_Params
{
	struct FString                                     _imgPath;                                                 
	int                                                shareFileType;                                            
	struct FString                                     InDestKey;                                                
};


struct UHDmpveSDK_ShareWithUploadPhotoByChannel_Params
{
	struct FString                                     _imgPath;                                                 
	int                                                _channel;                                                 
	struct FString                                     _url;                                                     
	struct FString                                     _destKey;                                                 
};


struct UHDmpveSDK_ShareWithPhotoByChannel_Simple_Params
{
	struct FString                                     _imgPath;                                                 
	struct FString                                     _title;                                                   
	struct FString                                     _content;                                                 
	int                                                _channel;                                                 
};


struct UHDmpveSDK_ShareFacebookLink_Params
{
	struct FString                                     ftitle;                                                   
	struct FString                                     fdesc;                                                    
	struct FString                                     fsharelink;                                               
};


struct UHDmpveSDK_SetTestLogin_Params
{
	struct FString                                     OpenID;                                                   
	int                                                Channel;                                                  
};


struct UHDmpveSDK_InviteSystemOfflineFriendsExt2_Params
{
	struct FString                                     _title;                                                   
	struct FString                                     _content;                                                 
	struct FString                                     _link;                                                    
};


struct UHDmpveSDK_InviteSystemOfflineFriendsExt_Params
{
	struct FString                                     _title;                                                   
	struct FString                                     _content;                                                 
	struct FString                                     _link;                                                    
};


struct UHDmpveSDK_InviteFBFriendsUnregistered_Link_Params
{
	struct FString                                     _title;                                                   
	struct FString                                     _content;                                                 
	struct FString                                     _link;                                                    
	struct FString                                     _extend;                                                  
};


struct UHDmpveSDK_HttpDnsSetOpenid_Params
{
	struct FString                                     InOpenid;                                                 
};


struct UHDmpveSDK_HttpDnsInit_Params
{
	struct FString                                     InAppId;                                                  
	bool                                               InIsDebug;                                                
	int                                                InTimeout;                                                
};


struct UHDmpveSDK_HttpDnsDestroy_Params
{
};


struct UHDmpveSDK_GRomePingDuallink_Params
{
	struct FString                                     InHost;                                                   
	int                                                ReturnValue;                                              
};


struct UHDmpveSDK_GRomeGetDuallinkStatus_Params
{
	int                                                ReturnValue;                                              
};


struct UHDmpveSDK_GetUploadUrlByFile_Params
{
	struct FString                                     file;                                                     
	struct FString                                     ReturnValue;                                              
};


struct UHDmpveSDK_GetUploadUrl_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UHDmpveSDK_GetUploadStatusByFile_Params
{
	struct FString                                     file;                                                     
	int                                                ReturnValue;                                              
};


struct UHDmpveSDK_GetUploadStatus_Params
{
	int                                                ReturnValue;                                              
};


struct UHDmpveSDK_ClearFileUpload_Params
{
	struct FString                                     file;                                                     
};


struct UIMSDKConfig_PatchMSDKConfigWithAreaConfig_Params
{
};


struct UIMSDKConfig_GetIMSDKLogLevel_Params
{
	int                                                InEnv;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_UpdateIMSDKBindResult_Params
{
	struct FString                                     InBindResult;                                             
};


struct UIMSDKHelper_SwitchQRCodeLoginResult_Params
{
	struct FString                                     InOpenid;                                                 
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_StartWebVerify_Params
{
	struct FString                                     InExtraInfo;                                              
	struct FString                                     InVerifyAppId;                                            
	struct FString                                     InAccount;                                                
};


struct UIMSDKHelper_SetWindowEditorLoginTokenIndex_Params
{
	int                                                Index;                                                    
};


struct UIMSDKHelper_SetupLoginCacheInfo_Params
{
	int                                                InChannelId;                                              
	bool                                               InIsQuickLogin;                                           
};


struct UIMSDKHelper_SetupAdjustDMA_Params
{
	int                                                InEEA;                                                    
	int                                                InAdPersonalization;                                      
	int                                                InAdUserData;                                             
};


struct UIMSDKHelper_SetUgId_Params
{
	struct FString                                     InUgId;                                                   
};


struct UIMSDKHelper_SetNoAuthOpenid_Params
{
	struct FString                                     OpenID;                                                   
};


struct UIMSDKHelper_SetMSDKConfig_Params
{
	TMap<struct FString, struct FString>               InConfigMaps;                                             
	bool                                               InClearLoginData;                                         
};


struct UIMSDKHelper_SetLoginType_Params
{
	struct FString                                     InIMSDKChannelName;                                       
};


struct UIMSDKHelper_SetLoginResult_Params
{
	struct FString                                     InLoginRetJson;                                           
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_SetIMSDKEnv_Params
{
	int                                                iEnv;                                                     
};


struct UIMSDKHelper_SetGameDeviceId_Params
{
	struct FString                                     InGameDeviceId;                                           
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_SetChannel_Params
{
	struct FString                                     InIMSDKChannelName;                                       
};


struct UIMSDKHelper_SetAdvertiseUserID_Params
{
	struct FString                                     UserId;                                                   
};


struct UIMSDKHelper_SetAdvertiseCustomData_Params
{
	struct FString                                     InCustomData;                                             
};


struct UIMSDKHelper_SaveLastIMSDKChannelID_Params
{
	int                                                channelId;                                                
};


struct UIMSDKHelper_RequestVerifyCode_Params
{
	struct FString                                     InPhoneOrEmail;                                           
	int                                                InAccountType;                                            
	int                                                InUseForType;                                             
	struct FString                                     InPhoneAreaCode;                                          
	struct FString                                     InLanuageCode;                                            
	struct FString                                     InExtraJson;                                              
};


struct UIMSDKHelper_RefreshLogin_Params
{
};


struct UIMSDKHelper_RecoverGuest_Params
{
	struct FString                                     channelUserId;                                            
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_QuickLogin_Params
{
};


struct UIMSDKHelper_QueryQRCodeStatus_Params
{
	struct FString                                     InCodeId;                                                 
	struct FString                                     InRandStr;                                                
	struct FString                                     InExtraJson;                                              
};


struct UIMSDKHelper_PlayAdvertise_Params
{
};


struct UIMSDKHelper_OriginalShare_Params
{
	int                                                InShareType;                                              
	struct FString                                     InMSDKChannelName;                                        
	struct FString                                     InTitle;                                                  
	struct FString                                     InContent;                                                
	struct FString                                     InLink;                                                   
	struct FString                                     InThumbPath;                                              
	struct FString                                     InImagePath;                                              
	struct FString                                     InExtraJson;                                              
	struct FString                                     InUser;                                                   
};


struct UIMSDKHelper_OriginalLogin_Params
{
	struct FString                                     InExtraJson;                                              
	TArray<struct FString>                             InPermissions;                                            
	bool                                               InNeedGuid;                                               
};


struct UIMSDKHelper_OriginalBind_Params
{
	struct FString                                     InChannel;                                                
	struct FString                                     InSubChannel;                                             
	struct FString                                     InExtra;                                                  
};


struct UIMSDKHelper_OnCommandLogin_Params
{
	struct FString                                     InCmd;                                                    
	struct FString                                     InExtra;                                                  
};


struct UIMSDKHelper_ModifyAccountInfo_Params
{
	struct FString                                     InAccount;                                                
	int                                                InAccountType;                                            
	int                                                InVerifyType;                                             
	struct FString                                     InVerifyData;                                             
	struct FString                                     InPhoneAreaCode;                                          
	struct FString                                     InLanuageCode;                                            
	struct FString                                     InMondifyToAccount;                                       
	int                                                InModifyAccountType;                                      
	struct FString                                     InModifyVerifyCode;                                       
	struct FString                                     InModifyPhoneAreaCode;                                    
	struct FString                                     InExtraJson;                                              
};


struct UIMSDKHelper_LogoutWith_Params
{
	int                                                InMSDKChannelId;                                          
};


struct UIMSDKHelper_LogoutQRCode_Params
{
	struct FString                                     InOpenid;                                                 
};


struct UIMSDKHelper_LoadAdvertise_Params
{
	struct FString                                     InAdvertiseUnitId;                                        
	struct FString                                     InExtraJson;                                              
};


struct UIMSDKHelper_IsEqualCurLoginPlatform_Params
{
	struct FString                                     strChannel;                                               
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsChannelInstalled_Params
{
	struct FString                                     InChannelId;                                              
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsChannelBound_Params
{
	int                                                InMSDKChannelId;                                          
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsAlreadyBindWhatsApp_Params
{
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsAlreadyBindVK_Params
{
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsAlreadyBindUnifiedAccount_Params
{
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsAlreadyBindTwitter_Params
{
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsAlreadyBindTikTok_Params
{
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsAlreadyBindNosChat_Params
{
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsAlreadyBindLine_Params
{
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsAlreadyBindHMS_Params
{
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsAlreadyBindGooglePlay_Params
{
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsAlreadyBindGameCenter_Params
{
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsAlreadyBindFB_Params
{
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsAlreadyBindDiscord_Params
{
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsAlreadyBindBgBg_Params
{
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_IsAlreadyBindApple_Params
{
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_InvalidateQRCode_Params
{
	struct FString                                     InCodeId;                                                 
	struct FString                                     InRandStr;                                                
	struct FString                                     InExtraJson;                                              
};


struct UIMSDKHelper_InitAdvertiseSDK_iOS_Params
{
};


struct UIMSDKHelper_InitAdvertiseSDK_Params
{
};


struct UIMSDKHelper_GetVerifyAppId4SendCode_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetShortUrl_Params
{
	struct FString                                     URL;                                                      
	struct FString                                     Mask;                                                     
	struct FString                                     Extra;                                                    
};


struct UIMSDKHelper_GetSessionId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetOpenId_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetLoginResult_Params
{
	struct FIMSDKLoginResult                           ReturnValue;                                              
};


struct UIMSDKHelper_GetLastLoginResultJson_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetLastIMSDKChannelID_Params
{
	int                                                ReturnValue;                                              
};


struct UIMSDKHelper_GetInstance_Params
{
	class UIMSDKHelper*                                ReturnValue;                                              
};


struct UIMSDKHelper_GetIMSDKWebLoginParamsLaunchFromWeb_Params
{
	struct FString                                     InState;                                                  
	struct FString                                     InChallenge;                                              
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetIMSDKWebLoginParams_Params
{
	struct FString                                     InURL;                                                    
	struct FString                                     InAppId;                                                  
	struct FString                                     InVerifier;                                               
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetIMSDKLoginTokenExpireTime_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetIMSDKLoginToken_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetIMSDKClientApiParams_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetHDmpveChannelID_Params
{
	int                                                ReturnValue;                                              
};


struct UIMSDKHelper_GetDisplayLoginErrorCode_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetCurLoginPlatform_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetChannelNickname_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetBindRet_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetBindInfo_Params
{
};


struct UIMSDKHelper_GetBindCount_Params
{
	int                                                ReturnValue;                                              
};


struct UIMSDKHelper_GetAllQRCodeLoginResults_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetAdjustID_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GetAdjustAttr_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_GenerateQRCode_Params
{
	struct FString                                     InExtraJson;                                              
};


struct UIMSDKHelper_ConvertTConndChannel2IMSDKChannel_Params
{
	int                                                InTConndChannelId;                                        
	int                                                ReturnValue;                                              
};


struct UIMSDKHelper_ConvertStrToIMSDKChannel_Params
{
	struct FString                                     strChannel;                                               
	int                                                ReturnValue;                                              
};


struct UIMSDKHelper_ConvertIMSDKChannelToStr_Params
{
	int                                                imsdkChannel;                                             
	bool                                               caseSensitive;                                            
	struct FString                                     ReturnValue;                                              
};


struct UIMSDKHelper_ConvertIMSDKChannel2TConndChannel_Params
{
	int                                                InIMSDKChannelId;                                         
	int                                                ReturnValue;                                              
};


struct UIMSDKHelper_ContinueLoginWithLocalResult_Params
{
};


struct UIMSDKHelper_ClearLoginResult_Params
{
};


struct UIMSDKHelper_CheckVerifyCodeValid_Params
{
	struct FString                                     InAccount;                                                
	int                                                InAccountType;                                            
	struct FString                                     InPhoneAreaCode;                                          
	struct FString                                     InVerifyCode;                                             
	int                                                InCodeType;                                               
	struct FString                                     InLanuageCode;                                            
	struct FString                                     InExtraJson;                                              
};


struct UIMSDKHelper_CheckLocalForceLoginFlag_Params
{
	int                                                InChannel;                                                
	bool                                               ReturnValue;                                              
};


struct UIMSDKHelper_CheckIsRegisted_Params
{
	struct FString                                     InAccount;                                                
	int                                                InAccountType;                                            
	struct FString                                     InPhoneAreaCode;                                          
	struct FString                                     InLanuageCode;                                            
	struct FString                                     InExtraJson;                                              
};


struct UIMSDKHelper_ChangePassword_Params
{
	struct FString                                     InAccount;                                                
	int                                                InAccountType;                                            
	struct FString                                     InVerifyCode;                                             
	struct FString                                     InNewPassword;                                            
	struct FString                                     InAreaCode;                                               
	struct FString                                     InLangType;                                               
	struct FString                                     InExtraJson;                                              
};


struct UIMSDKHelper_BindWhatsApp_Params
{
	struct FString                                     InExtraJson;                                              
};


struct UIMSDKHelper_BindVK_Params
{
};


struct UIMSDKHelper_BindUnifiedAccount_Params
{
	struct FString                                     InExtraJson;                                              
};


struct UIMSDKHelper_BindTwitter_Params
{
};


struct UIMSDKHelper_BindTikTok_Params
{
	struct FString                                     InExtraJson;                                              
};


struct UIMSDKHelper_BindNosChat_Params
{
};


struct UIMSDKHelper_BindLine_Params
{
};


struct UIMSDKHelper_BindHMS_Params
{
};


struct UIMSDKHelper_BindGooglePlay_Params
{
};


struct UIMSDKHelper_BindGameCenter_Params
{
};


struct UIMSDKHelper_BindFB_Params
{
};


struct UIMSDKHelper_BindDiscord_Params
{
};


struct UIMSDKHelper_BindChannel_Params
{
	int                                                InMSDKChannelId;                                          
	struct FString                                     InExtraJson;                                              
};


struct UIMSDKHelper_BindBgBg_Params
{
};


struct UIMSDKHelper_BindApple_Params
{
};


struct UMockGameSvrClientNet_LoginMockGameSvr_Params
{
	struct FString                                     UID;                                                      
	struct FString                                     PlayerName;                                               
	int                                                ModeID;                                                   
};


struct UStoreGameHelper_UnlockGPAchievement_Params
{
	struct FString                                     InAchievement;                                            
};


struct UStoreGameHelper_UnInitialize_Params
{
};


struct UStoreGameHelper_ShowLeaderboard_Params
{
	struct FString                                     InIdentifier;                                             
	int                                                InTimeScope;                                              
};


struct UStoreGameHelper_ShowAchievements_Params
{
};


struct UStoreGameHelper_RequestServerAuthCode_Params
{
};


struct UStoreGameHelper_ReportScore_Params
{
	int64_t                                            InScore;                                                  
	struct FString                                     InIdentifier;                                             
};


struct UStoreGameHelper_ReportAchievement1_Params
{
	struct FString                                     InIdentifier;                                             
	double                                             percent;                                                  
};


struct UStoreGameHelper_ReportAchievement_Params
{
	struct FString                                     InIdentifier;                                             
	double                                             percent;                                                  
};


struct UStoreGameHelper_LoginGPManual_Params
{
};


struct UStoreGameHelper_LoadReceivedChallenges_Params
{
};


struct UStoreGameHelper_LoadLeaderboardScores_Params
{
	struct FString                                     InIdentifier;                                             
	int                                                InRangeLocation;                                          
	int                                                InRangeLength;                                            
	int                                                InPlayScope;                                              
	int                                                InTimeScope;                                              
};


struct UStoreGameHelper_LoadFriends_Params
{
};


struct UStoreGameHelper_LoadAchievements_Params
{
};


struct UStoreGameHelper_IssueChallengeWithScore_Params
{
	TMap<struct FString, struct FString>               InScoreInfo;                                              
	TMap<struct FString, struct FString>               InPlayerInfo;                                             
	TArray<struct FString>                             InPlayerIDs;                                              
	struct FString                                     InMessage;                                                
};


struct UStoreGameHelper_IssueChallengeWithArchivement_Params
{
	TMap<struct FString, struct FString>               InAchievementInfo;                                        
	TArray<struct FString>                             InPlayerIDs;                                              
	struct FString                                     InMessage;                                                
};


struct UStoreGameHelper_Initialize_Params
{
};


struct UStoreGameHelper_InitGP_Params
{
};


struct UStoreGameHelper_IncreaseGPAchievement_Params
{
	struct FString                                     InAchievement;                                            
	int                                                InStep;                                                   
};


struct UStoreGameHelper_Get_Params
{
	class UStoreGameHelper*                            ReturnValue;                                              
};


struct UStoreGameHelper_Destroy_Params
{
};


struct UStoreGameHelper_AuthenticateLocalPlayer_Params
{
};

}

