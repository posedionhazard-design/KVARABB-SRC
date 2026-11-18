#pragma once


 
namespace SDK
{





enum class EFCDNDownloaderStateEnum : uint8_t
{
	FCDNDownloaderStateEnum__CDNDownloaderEnum_LoadSuccess = 0,
	FCDNDownloaderStateEnum__CDNDownloaderEnum_LoadProgress = 1,
	FCDNDownloaderStateEnum__CDNDownloaderEnum_MAX = 2
};



enum class EFDownloaderStateEnum : uint8_t
{
	FDownloaderStateEnum__CDNDownloaderEnum_LoadSuccess = 0,
	FDownloaderStateEnum__CDNDownloaderEnum_LoadProgress = 1,
	FDownloaderStateEnum__CDNDownloaderEnum_MAX = 2
};



enum class EReuseFallOverscrollState : uint8_t
{
	EReuseFallOverscrollState__RFOS_None = 0,
	EReuseFallOverscrollState__RFOS_Top = 1,
	EReuseFallOverscrollState__RFOS_Bottom = 2,
	EReuseFallOverscrollState__RFOS_MAX = 3
};



enum class EReuseListJumpStyle : uint8_t
{
	EReuseListJumpStyle__Middle    = 0,
	EReuseListJumpStyle__Begin     = 1,
	EReuseListJumpStyle__End       = 2,
	EReuseListJumpStyle__EReuseListJumpStyle_MAX = 3
};



enum class EReuseListStyle : uint8_t
{
	EReuseListStyle__Vertical      = 0,
	EReuseListStyle__Horizontal    = 1,
	EReuseListStyle__VerticalGrid  = 2,
	EReuseListStyle__HorizontalGrid = 3,
	EReuseListStyle__EReuseListStyle_MAX = 4
};



enum class EReuseListNotFullAlignStyle : uint8_t
{
	EReuseListNotFullAlignStyle__Start = 0,
	EReuseListNotFullAlignStyle__Middle = 1,
	EReuseListNotFullAlignStyle__End = 2,
	EReuseListNotFullAlignStyle__EReuseListNotFullAlignStyle_MAX = 3
};



enum class EFCDNDownloaderTypeEnum : uint8_t
{
	FCDNDownloaderTypeEnum__FCDNDownloaderTypeEnum_Config = 0,
	FCDNDownloaderTypeEnum__FCDNDownloaderTypeEnum_Patch = 1,
	FCDNDownloaderTypeEnum__FCDNDownloaderTypeEnum_WhiteList = 2,
	FCDNDownloaderTypeEnum__FCDNDownloaderTypeEnum_MAX = 3
};



enum class EFDownloaderTypeEnum : uint8_t
{
	FDownloaderTypeEnum__FDownloaderTypeEnum_Config = 0,
	FDownloaderTypeEnum__FDownloaderTypeEnum_Patch = 1,
	FDownloaderTypeEnum__FDownloaderTypeEnum_WhiteList = 2,
	FDownloaderTypeEnum__FDownloaderTypeEnum_ConfigInMemory = 3,
	FDownloaderTypeEnum__FDownloaderTypeEnum_MAX = 4
};



enum class ESubsideFeatureLevel : uint8_t
{
	ELevel_Dafault                 = 0,
	ELevel_OfficialB               = 1,
	ELevel_Jaguar                  = 2,
	ELevel_OfficialA               = 3,
	ELevel_MAX                     = 4
};



enum class ECentauriPackType : uint8_t
{
	ECentauriPackType__kCentauriPackNone = 0,
	ECentauriPackType__kCentauriPackInit = 1,
	ECentauriPackType__kCentauriPackPayNeedLogin = 2,
	ECentauriPackType__kCentauriPackPay = 3,
	ECentauriPackType__kCentauriPackGetMP = 4,
	ECentauriPackType__kCentauriPackGetProductInfo = 5,
	ECentauriPackType__kCentauriPackReprovide = 6,
	ECentauriPackType__kCentauriPackGetIntroPrice = 7,
	ECentauriPackType__ECentauriPackType_MAX = 8
};



enum class ECentauriMultiPayChannelSwitch : uint8_t
{
	ECentauriMultiPayChannelSwitch__kCentauriPayChannelMain = 0,
	ECentauriMultiPayChannelSwitch__kCentauriPayChannelH5 = 1,
	ECentauriMultiPayChannelSwitch__ECentauriMultiPayChannelSwitch_MAX = 2
};



enum class ESDKCallbackType : uint8_t
{
	ESDKCallbackType__SDK_CB_None  = 0,
	ESDKCallbackType__SDK_CB_VLINK_OPEN = 1,
	ESDKCallbackType__SDK_CB_VLINK_CLOSE = 2,
	ESDKCallbackType__SDK_CB_NET_TRACE = 3,
	ESDKCallbackType__SDK_CB_MAX   = 4
};



enum class EUnifiedAccountType : uint8_t
{
	EUnifiedAccountType__UA_None   = 0,
	EUnifiedAccountType__UA_RequestVerifyCode = 1,
	EUnifiedAccountType__UA_ChangePassword = 2,
	EUnifiedAccountType__UA_ModifyAccount = 3,
	EUnifiedAccountType__UA_CheckIsRegisted = 4,
	EUnifiedAccountType__UA_CheckVerifyCodeValid = 5,
	EUnifiedAccountType__UA_MAX    = 6
};



enum class EIMSDKScreenDir : uint8_t
{
	EIMSDKScreenDir__kScreenDirSensor = 0,
	EIMSDKScreenDir__kScreenDirPortrait = 1,
	EIMSDKScreenDir__kScreenDirLandscape = 2,
	EIMSDKScreenDir__EIMSDKScreenDir_MAX = 3
};



enum class EIMSDKContentType : uint8_t
{
	EIMSDKContentType__kContentTypeText = 0,
	EIMSDKContentType__kContentTypeImage = 1,
	EIMSDKContentType__kContentTypeWeb = 2,
	EIMSDKContentType__EIMSDKContentType_MAX = 3
};



enum class EIMSDKNoticeType : uint8_t
{
	EIMSDKNoticeType__kNoticeTypeAlert = 0,
	EIMSDKNoticeType__kNoticeTypeScroll = 1,
	EIMSDKNoticeType__kNoticeTypeAll = 2,
	EIMSDKNoticeType__EIMSDKNoticeType_MAX = 3
};



enum class EScreenDir : uint8_t
{
	EScreenDir__kScreenDirSensor   = 0,
	EScreenDir__kScreenDirPortrait = 1,
	EScreenDir__kScreenDirLandscape = 2,
	EScreenDir__EScreenDir_MAX     = 3
};



enum class EContentType : uint8_t
{
	EContentType__kContentTypeText = 0,
	EContentType__kContentTypeImage = 1,
	EContentType__kContentTypeWeb  = 2,
	EContentType__EContentType_MAX = 3
};



enum class ENoticeType : uint8_t
{
	ENoticeType__kNoticeTypeAlert  = 0,
	ENoticeType__kNoticeTypeScroll = 1,
	ENoticeType__kNoticeTypeAll    = 2,
	ENoticeType__ENoticeType_MAX   = 3
};



enum class ELobbyBgMatType : uint8_t
{
	ELBS                           = 0,
	EMarketAppearance              = 1,
	EMarketParachute               = 2,
	EMarketWeapon                  = 3,
	ESeasonPass                    = 4,
	ELobbyBgMat_Max                = 5,
	ELobbyBgMatType_MAX            = 6
};



enum class ESDKCallbackMethodId : uint8_t
{
	ESDKCallbackMethodId__SDK_CB_None = 0,
	ESDKCallbackMethodId__SDK_CB_SNS_NOTIFY = 1,
	ESDKCallbackMethodId__SDK_CB_COMPLIANCE_NOTIFY = 2,
	ESDKCallbackMethodId__SDK_CB_MAX = 3
};



enum class EUserSettingsDataType : uint8_t
{
	Bool                           = 0,
	Enum                           = 1,
	Int                            = 2,
	Float                          = 3,
	String                         = 4,
	UserSettingsDataType_MAX       = 5
};



enum class EVibrateStrengthLevel : uint8_t
{
	EVibrateStrengthLevel__None    = 0,
	EVibrateStrengthLevel__Low     = 1,
	EVibrateStrengthLevel__Mid     = 2,
	EVibrateStrengthLevel__High    = 3,
	EVibrateStrengthLevel__EVibrateStrengthLevel_MAX = 4
};



enum class EVibrateTriggerActionType : uint8_t
{
	EVibrateTriggerActionType__None = 0,
	EVibrateTriggerActionType__Onece = 1,
	EVibrateTriggerActionType__Start = 2,
	EVibrateTriggerActionType__Stop = 3,
	EVibrateTriggerActionType__EVibrateTriggerActionType_MAX = 4
};



enum class EVibrateTriggerEventType : uint8_t
{
	EVibrateTriggerEventType__None = 0,
	EVibrateTriggerEventType__EquipWeapon = 1,
	EVibrateTriggerEventType__UnEquipWeapon = 2,
	EVibrateTriggerEventType__EquipWeaponAttachment = 3,
	EVibrateTriggerEventType__UnEquipWeaponAttachment = 4,
	EVibrateTriggerEventType__FireShot = 5,
	EVibrateTriggerEventType__ReloadStart = 6,
	EVibrateTriggerEventType__LoadBulletOnReload = 7,
	EVibrateTriggerEventType__ReloadEnd = 8,
	EVibrateTriggerEventType__BoltStart = 9,
	EVibrateTriggerEventType__PullBolt = 10,
	EVibrateTriggerEventType__BoltEnd = 11,
	EVibrateTriggerEventType__ChangeMagazine = 12,
	EVibrateTriggerEventType__MagIn = 13,
	EVibrateTriggerEventType__MagOut = 14,
	EVibrateTriggerEventType__LocalShellDrop = 15,
	EVibrateTriggerEventType__ChangeShootType = 16,
	EVibrateTriggerEventType__ShootLastBullet = 17,
	EVibrateTriggerEventType__NoneShoot = 18,
	EVibrateTriggerEventType__PrepareThrowGrenade = 19,
	EVibrateTriggerEventType__ReleaseThrowGrenade = 20,
	EVibrateTriggerEventType__WeaponCustom = 21,
	EVibrateTriggerEventType__VehicleGetOn = 22,
	EVibrateTriggerEventType__VehicleGetOff = 23,
	EVibrateTriggerEventType__VehicleBoostSpeed = 24,
	EVibrateTriggerEventType__VehicleHitByBullet = 25,
	EVibrateTriggerEventType__VehicleWheelsBroken = 26,
	EVibrateTriggerEventType__VehicleHitObstacal = 27,
	EVibrateTriggerEventType__VehicleChangeGear = 28,
	EVibrateTriggerEventType__VehicleBreaking = 29,
	EVibrateTriggerEventType__VehicleContactSpesificGround = 30,
	EVibrateTriggerEventType__VehicleSlipping = 31,
	EVibrateTriggerEventType__VehicleRaisePushSuspension = 32,
	EVibrateTriggerEventType__HitByBullet = 33,
	EVibrateTriggerEventType__FallDamage = 34,
	EVibrateTriggerEventType__VehicleImpactDamage = 35,
	EVibrateTriggerEventType__VehicleImpactDamageInVehicle = 36,
	EVibrateTriggerEventType__ExplosionDamage = 37,
	EVibrateTriggerEventType__BurningDamage = 38,
	EVibrateTriggerEventType__LoseSignalHP = 39,
	EVibrateTriggerEventType__FallOnGround = 40,
	EVibrateTriggerEventType__Dead = 41,
	EVibrateTriggerEventType__JumpFromPlane = 42,
	EVibrateTriggerEventType__StartSprint = 43,
	EVibrateTriggerEventType__Shoveling = 44,
	EVibrateTriggerEventType__Climb = 45,
	EVibrateTriggerEventType__StartSwim = 46,
	EVibrateTriggerEventType__MeleeDamage = 47,
	EVibrateTriggerEventType__AirAttackDamage = 48,
	EVibrateTriggerEventType__HitByBulletOnHead = 49,
	EVibrateTriggerEventType__HitByBulletOnBody = 50,
	EVibrateTriggerEventType__ShowVoiceMove = 51,
	EVibrateTriggerEventType__ShowVoiceShoot = 52,
	EVibrateTriggerEventType__ShowVoiceSilenceShoot = 53,
	EVibrateTriggerEventType__ShowVoiceBreakGlass = 54,
	EVibrateTriggerEventType__ShowVoiceExplosion = 55,
	EVibrateTriggerEventType__ShowVoiceVehicle = 56,
	EVibrateTriggerEventType__TriggerByAssetID = 57,
	EVibrateTriggerEventType__EVibrateTriggerEventType_MAX = 58
};



enum class EVibrateTriggerSubItemType : uint8_t
{
	EVibrateTriggerSubItemType__None = 0,
	EVibrateTriggerSubItemType__WeaponAttachment = 1,
	EVibrateTriggerSubItemType__VehicleGear = 2,
	EVibrateTriggerSubItemType__HitHead = 3,
	EVibrateTriggerSubItemType__HitBody = 4,
	EVibrateTriggerSubItemType__HitLimbs = 5,
	EVibrateTriggerSubItemType__EVibrateTriggerSubItemType_MAX = 6
};



enum class EVibrateTriggerMainItemType : uint8_t
{
	EVibrateTriggerMainItemType__None = 0,
	EVibrateTriggerMainItemType__Weapon = 1,
	EVibrateTriggerMainItemType__Vehicle = 2,
	EVibrateTriggerMainItemType__Character = 3,
	EVibrateTriggerMainItemType__ShowVoiceUI = 4,
	EVibrateTriggerMainItemType__Custom = 5,
	EVibrateTriggerMainItemType__EVibrateTriggerMainItemType_MAX = 6
};



enum class EWeaponSpecialSoundType : uint8_t
{
	EWeaponSpecialSoundType__LoadBullet = 0,
	EWeaponSpecialSoundType__ChangeMagazine = 1,
	EWeaponSpecialSoundType__MagIn = 2,
	EWeaponSpecialSoundType__MagOut = 3,
	EWeaponSpecialSoundType__PullBolt = 4,
	EWeaponSpecialSoundType__LocalShellDrop = 5,
	EWeaponSpecialSoundType__EWeaponSpecialSoundType_MAX = 6
};



enum class EButtonClickSoundTypes : uint8_t
{
	EButtonClickSoundTypes__None   = 0,
	EButtonClickSoundTypes__Play_UI_Bnt_Confirm = 1,
	EButtonClickSoundTypes__Play_UI_Bnt_Click = 2,
	EButtonClickSoundTypes__Play_UI_Bnt_Tab = 3,
	EButtonClickSoundTypes__Play_UI_Bnt_Select = 4,
	EButtonClickSoundTypes__Play_UI_Bnt_Close = 5,
	EButtonClickSoundTypes__Play_UI_Bnt_MainMenu = 6,
	EButtonClickSoundTypes__Play_UI_Bnt_MenuOpen = 7,
	EButtonClickSoundTypes__Play_UI_Bnt_MenuClose = 8,
	EButtonClickSoundTypes__Play_UI_Bnt_StartGame = 9,
	EButtonClickSoundTypes__Play_UI_Bnt_Turn = 10,
	EButtonClickSoundTypes__Play_UI_Bnt_Set = 11,
	EButtonClickSoundTypes__EButtonClickSoundTypes_MAX = 12
};









struct FBattleGameInfo
{
	uint64_t                                           GameID;                                                   
	struct FString                                     GameModeID;                                               
	int                                                GameMapID;                                                
	int                                                WeatherID;                                                
	struct FString                                     WeatherName;                                              
	bool                                               bUsedSimulation;                                          
	bool                                               bEnableClimbing;                                          
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FCDNDownloaderInfo
{
	EFCDNDownloaderStateEnum                           State;                                                    
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     FileSavePath;                                             
	bool                                               Result;                                                   
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                BytesSent;                                                
	int                                                BytesReceived;                                            
	int                                                ContentType;                                              
	int                                                ResponseCode;                                             
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FGameWidgetConfig
{
	struct FString                                     Path;                                                     
	struct FString                                     Container;                                                
	int                                                ZOrder;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	class UClass*                                      WidgetClass;                                              
};



struct FNativeHUDTickContainer
{
	int                                                WidgetIndex;                                              
	TWeakObjectPtr<class UUAEUserWidget>               pWidget;                                                  
};



struct FWebviewInfoWrapper
{
	int                                                ErrorCode;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Reason;                                                   
	int                                                extend;                                                   
	int                                                Extend2;                                                  
	struct FString                                     MsgData;                                                  
};



struct FUAAssistantInfoWrapper
{
	EUnifiedAccountType                                UAType;                                                   
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                Result;                                                   
	struct FString                                     ExtraJson;                                                
	struct FString                                     RetsultMsg;                                               
};



struct FSDKCallbackInfoWrapper
{
	ESDKCallbackType                                   CallbackType;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     CallbackParameter;                                        
	struct FString                                     ExtraJson;                                                
};



struct FWakeupInfoWrapper
{
	TMap<struct FString, struct FString>               FWakeupInfoMap;                                           
};



struct FPlatformFriendInfoMap
{
	int                                                page;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
	TMap<struct FString, struct FString>               friendsInfo;                                              
};



struct FNoschatGroupInfomation
{
	struct FString                                     OpenIdList;                                               
	struct FString                                     MemberNum;                                                
	struct FString                                     ChatRoomURL;                                              
};



struct FGroupInfoWrapper
{
	int                                                SnsAction;                                                
	int                                                flag;                                                     
	int                                                ErrorCode;                                                
	int                                                Platform;                                                 
	struct FString                                     Desc;                                                     
	struct FNoschatGroupInfomation                     noschatGroupInfo;                                         
};



struct FDownloaderInfo
{
	EFDownloaderStateEnum                              State;                                                    
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     FileSavePath;                                             
	bool                                               Result;                                                   
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                BytesSent;                                                
	int                                                BytesReceived;                                            
	int                                                ContentType;                                              
	int                                                ResponseCode;                                             
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     StringContent;                                            
};



struct FIMSDKPictureInfomation
{
	EIMSDKScreenDir                                    PicScreenDir;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     PicPath;                                                  
	struct FString                                     HashValue;                                                
	struct FString                                     picTitle;                                                 
};



struct FIMSDKNoticeInfo
{
	struct FString                                     MsgID;                                                    
	struct FString                                     OpenID;                                                   
	struct FString                                     MsgUrl;                                                   
	EIMSDKNoticeType                                   MsgType;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     MsgScene;                                                 
	struct FString                                     StartTime;                                                
	struct FString                                     EndTime;                                                  
	EIMSDKContentType                                  MsgContentType;                                           
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     MsgOrder;                                                 
	struct FString                                     ContentUrl;                                               
	TArray<struct FIMSDKPictureInfomation>             PicArray;                                                 
	struct FString                                     MsgTitle;                                                 
	struct FString                                     msgContent;                                               
	struct FString                                     MsgEditCond;                                              
	struct FString                                     LoginTimes;                                               
};



struct FWidgetMountData
{
	struct FMargin                                     MarginData;                                               
	struct FAnchors                                    AnchorsData;                                              
	struct FVector2D                                   Position;                                                 
	struct FString                                     MountName;                                                
	struct FString                                     MountOuterName;                                           
};



struct FInGameWidgetData
{
	int                                                bAutoShow;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FGameWidgetConfig                           GameWidgetConfig;                                         
	struct FWidgetMountData                            WidgetMountData;                                          
};



struct FDynamicWidgetData
{
	bool                                               bAutoDestory;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     MountModule;                                              
	struct FInGameWidgetData                           InGameWidgetData;                                         
};



struct FDynamicWidgetAsyncLoadData
{
	struct FString                                     WidgetKey;                                                
	struct FDynamicWidgetData                          DynamicWidgetData;                                        
	struct FScriptDelegate                             Callback;                                                 
};



struct FLobbyBgMatData
{
	TEnumAsByte<ELobbyBgMatType>                       matType;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
	class UMaterialInstance*                           matPtr;                                                   
};



struct FAABBBox
{
	struct FVector                                     Min;                                                      
	struct FVector                                     Max;                                                      
};



struct FLuaBPVar
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FScatterPlotPoint
{
	struct FVector2D                                   Position;                                                 
	float                                              Weight;                                                   
};



struct FTouchInputRecord
{
	TArray<float>                                      Times;                                                    
	TArray<struct FVector2D>                           Positions;                                                
	TArray<int>                                        Types;                                                    
};



struct FFightFriendChat
{
	struct FString                                     UID;                                                      
	struct FString                                     Name;                                                     
	struct FString                                     Msg;                                                      
	bool                                               selfMsg;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FPlayerFinishedGuide
{
	int                                                GuideID;                                                  
	int                                                FinishedCounts;                                           
};



struct FSavFileData
{
	int                                                CompressedSize;                                           
	int                                                UncompressedSize;                                         
	TArray<unsigned char>                              ByteArray;                                                
};



struct FAssetAsyncRequest
{
	struct FString                                     Path;                                                     
	struct FScriptDelegate                             Callback;                                                 
};



struct FMetaDataHolder
{
	TMap<struct FString, struct FString>               MetaData;                                                 
};



struct FPingServerInfo
{
	unsigned char                                      UnknownData00[0x30];                                      
};



struct FVibrateEntity
{
	int                                                AssetId;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     AssetAbsPath;                                             
	int                                                PlayAmplitude;                                            
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     PlayKeyParam;                                             
	int                                                PlayPriority;                                             
	float                                              PlayDuration;                                             
	bool                                               bIsLoop;                                                  
	bool                                               bIsValid;                                                 
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              PushTime;                                                 
	EVibrateTriggerEventType                           EventType;                                                
	unsigned char                                      UnknownData03[0x7];                                       
};



struct FVibrateTriggerMainItem
{
	EVibrateTriggerMainItemType                        MainItemType;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     Data;                                                     
};



struct FVibrateTriggerSubItem
{
	EVibrateTriggerSubItemType                         SubItemType;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     Data;                                                     
};



struct FVibrateTriggerAction
{
	int                                                VibrateAmplitude;                                         
	unsigned char                                      UnknownData00[0x4];                                       
	struct FVibrateTriggerMainItem                     TriggerMainItem;                                          
	TArray<struct FVibrateTriggerSubItem>              TriggerSubItemList;                                       
	EVibrateTriggerEventType                           TriggerEventType;                                         
	EVibrateTriggerActionType                          TriggerActionType;                                        
	unsigned char                                      UnknownData01[0x6];                                       
};



struct FVoiceRoomSnapshot
{
	bool                                               bValid;                                                   
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                RoomStatus;                                               
	int                                                memberID;                                                 
	bool                                               bMicEnabled;                                              
	bool                                               bSpeakerEnabled;                                          
	bool                                               bAlwaysDisableMic;                                        
	unsigned char                                      UnknownData01[0x1];                                       
	struct FString                                     RoomName;                                                 
	struct FString                                     VoiceSvrUrl;                                              
};



struct FVerInfoWrapper
{
	TMap<struct FString, struct FString>               VerData;                                                  
};



struct FLoadTaskCfg
{
	struct FString                                     ObjectPath;                                               
	int                                                LoadPriority;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FVersionConfig
{
	unsigned char                                      UnknownData00[0x100];                                     
};



struct FVersion
{
	unsigned char                                      UnknownData00[0x90];                                      
};



struct FPatchConfig
{
	unsigned char                                      UnknownData00[0x80];                                      
};



struct FPatchURL
{
	unsigned char                                      UnknownData00[0x28];                                      
};



struct FCentauriPack
{
	unsigned char                                      UnknownData00[0x58];                                      
};



struct FUploadFinishCallbackInfoWrapper
{
	int                                                Result;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     URL;                                                      
};



struct FOnRequestPermissionResultWrapper
{
	int                                                code;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     permission;                                               
	struct FString                                     grantResult;                                              
};



struct FGameMasterInfoWrapper
{
	struct FString                                     EventName;                                                
	int                                                Result;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FGetTicketInfoWrapper
{
	struct FString                                     Ticket;                                                   
};



struct FShortURLInfoWrapper
{
	int                                                ErrorCode;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Reason;                                                   
	struct FString                                     shortUrl;                                                 
};



struct FWebviewActionInfo
{
	struct FString                                     URL;                                                      
};



struct FPlatformFriendInfo
{
	struct FString                                     UserId;                                                   
	struct FString                                     UserName;                                                 
	struct FString                                     headportraitURL;                                          
	struct FString                                     OpenID;                                                   
};



struct FDelayLoadInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                    
	int16_t                                            Baseline;                                                 
	unsigned char                                      UnknownData00[0x2E];                                      
};



struct FTimeStamp
{
	struct FString                                     Title;                                                    
	int                                                Priority;                                                 
	int                                                StartTime;                                                
	int                                                EndTime;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FBatchDownloadPackHashes
{
	TArray<struct FString>                             Hashes;                                                   
};



struct FBatchDownloadPack
{
	TArray<uint32_t>                                   ItemIDs;                                                  
	TArray<uint32_t>                                   ErrorCodes;                                               
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FPendingFakeReturn
{
	unsigned char                                      UnknownData00[0x10];                                      
	struct FString                                     Filename;                                                 
};



struct FPufferDownloadLastTaskStatus
{
	struct FDateTime                                   Time;                                                     
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FPufferObj
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FPufferDownloadStates
{
	TArray<double>                                     speeds;                                                   
	struct FString                                     Filename;                                                 
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FIMSDKNoticeInfos
{
	TArray<struct FIMSDKNoticeInfo>                    Infos;                                                    
};



struct FPictureInfomation
{
	EScreenDir                                         PicScreenDir;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     PicPath;                                                  
	struct FString                                     HashValue;                                                
};



struct FNoticeInfo
{
	struct FString                                     MsgID;                                                    
	struct FString                                     OpenID;                                                   
	struct FString                                     MsgUrl;                                                   
	ENoticeType                                        MsgType;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     MsgScene;                                                 
	struct FString                                     StartTime;                                                
	struct FString                                     EndTime;                                                  
	EContentType                                       MsgContentType;                                           
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     MsgOrder;                                                 
	struct FString                                     ContentUrl;                                               
	TArray<struct FPictureInfomation>                  PicArray;                                                 
	struct FString                                     MsgTitle;                                                 
	struct FString                                     msgContent;                                               
	struct FString                                     MsgEditCond;                                              
};



struct FNoticeInfos
{
	TArray<struct FNoticeInfo>                         Infos;                                                    
};



struct FUEComplianceResult
{
	int                                                AdultStatus;                                              
	int                                                ParentCertificateStatus;                                  
	int                                                EUUserAgreeStatus;                                        
	int                                                AdultAge;                                                 
	int                                                GameGrade;                                                
	int                                                CertificateType;                                          
	bool                                               IsEEA;                                                    
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                MethodId;                                                 
	int                                                RetCode;                                                  
	int                                                ThirdCode;                                                
	struct FString                                     ThirdMsg;                                                 
	struct FString                                     ParentCertificateStatusExpiration;                        
	struct FString                                     CountryCode;                                              
	struct FString                                     AdultStatusExpiration;                                    
	struct FString                                     TS;                                                       
	struct FString                                     Region;                                                   
	struct FString                                     retMsg;                                                   
	struct FString                                     ExtraJson;                                                
	struct FString                                     AdultAgeMap;                                              
	struct FString                                     GameGradeMap;                                             
	bool                                               IsDMA;                                                    
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     email;                                                    
	int                                                RealnameAuthStatus;                                       
	int                                                NeedRealnameAuth;                                         
	int                                                NeedRealnameVerification;                                 
	int                                                RealnameAuthType;                                         
	bool                                               IsNeedLICert;                                             
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                NeedVoiceControl;                                         
	int                                                VoiceControlStatus;                                       
	int                                                NeedVoiceControlInGame;                                   
	int                                                NeedVoiceControlParentCert;                               
	int                                                NeedLBSControl;                                           
	int                                                NeedLBSControlInGame;                                     
	int                                                NeedLBSControlParentCert;                                 
	int                                                LBSControlStatus;                                         
	bool                                               TimeLimitEnable;                                          
	unsigned char                                      UnknownData03[0x3];                                       
	int                                                NeedTimeLimit;                                            
	int                                                WeekendTimeLimit;                                         
	struct FString                                     WeekendTimeStart;                                         
	struct FString                                     WeekendTimeEnd;                                           
	int                                                WeekdayTimeLimit;                                         
	unsigned char                                      UnknownData04[0x4];                                       
	struct FString                                     WeekdayTimeStart;                                         
	struct FString                                     WeekdayTimeEnd;                                           
	struct FString                                     TimeLimitTimeZone;                                        
	int                                                ShareUserDataStatus;                                      
	int                                                UseSocialFunctionStatus;                                  
	int                                                ParticipateSurveyStatus;                                  
	int                                                UserDataUsedForAIStatus;                                  
	int                                                ReceiveMarketingEmailStatus;                              
	int                                                UserPaymentStatus;                                        
	int                                                PersonalRecoStatus;                                       
	int                                                NeedShareUserData;                                        
	int                                                NeedUseSocialFunction;                                    
	int                                                NeedParticipateSurvey;                                    
	int                                                NeedUserDataUsedForAI;                                    
	int                                                NeedReceiveMarketingEmail;                                
	int                                                NeedUserPayment;                                          
	int                                                NeedPersonalReco;                                         
	int                                                NeedAdultVerification;                                    
	int                                                AdultVerificationStatus;                                  
	int                                                AdultVerificationType;                                    
	int                                                NeedParentAdultVerification;                              
	int                                                ParentAdultVerificationStatus;                            
	int                                                ParentAdultVerificationType;                              
	int                                                RealnameAuthCompleteType;                                 
	unsigned char                                      UnknownData05[0x4];                                       
	struct FString                                     RealnameAuthCompleteTS;                                   
	int                                                AdultVerificationCompleteType;                            
	unsigned char                                      UnknownData06[0x4];                                       
	struct FString                                     AdultVerificationCompleteTS;                              
	int                                                ParentAdultVerificationCompleteType;                      
	unsigned char                                      UnknownData07[0x4];                                       
	struct FString                                     ParentAdultVerificationCompleteTS;                        
	int                                                ParentCertificateCompleteType;                            
	unsigned char                                      UnknownData08[0x4];                                       
	struct FString                                     ParentCertificateCompleteTS;                              
	struct FString                                     AdultCheckStatusTS;                                       
};



struct FArrayLuaBPVar
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FMapLuaBPVar
{
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FLobbyTeamState
{
	int                                                UID;                                                      
	int                                                team_state;                                               
};



struct FSDKCallbackWrapper
{
	ESDKCallbackMethodId                               MethodId;                                                 
	unsigned char                                      UnknownData00[0x1];                                       
	unsigned char                                      UnknownData01[0x6];                                       
	struct FString                                     RetJson;                                                  
	struct FString                                     ExtraJson;                                                
};



struct FVibrateTriggerCondition
{
	bool                                               bOnlyMatchMainItemType;                                   
	unsigned char                                      UnknownData00[0x7];                                       
	struct FVibrateTriggerMainItem                     TriggerMainItem;                                          
	TArray<struct FVibrateTriggerSubItem>              TriggerSubItemList;                                       
	EVibrateTriggerEventType                           TriggerEventType;                                         
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FVibrateAssetItemConfig
{
	int                                                AssetId;                                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FVibrateTriggerCondition                    TriggerCondition;                                         
	struct FString                                     AssetPath;                                                
	struct FString                                     PlayKeyParam;                                             
	float                                              AutoStopTime;                                             
	int                                                PlayPriority;                                             
	float                                              PlayDuration;                                             
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     AbsPath;                                                  
};

}

