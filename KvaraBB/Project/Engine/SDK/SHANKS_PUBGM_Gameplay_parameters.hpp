#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ABackpackRepActor_OnRep_ItemListNet_Params
{
};


struct ABackpackRepActor_NotifyItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemData                             ItemData;                                                 
};


struct ABackpackRepActor_NotifyItemRemoved_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemData                             ItemData;                                                 
};


struct ABackpackRepActor_NotifyItemEmpty_Params
{
	int                                                Slack;                                                    
};


struct ABackpackRepActor_NotifyItemAdded_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemData                             ItemData;                                                 
};


struct AUAEGameMode_WriteStatistics_Params
{
};


struct AUAEGameMode_SyncPlayerNames_Params
{
};


struct AUAEGameMode_SyncNewCorpsData_Params
{
	TArray<struct FDSCorpsInfo>                        OutCorpsData;                                             
};


struct AUAEGameMode_SpawnUAEPawnFor_Params
{
	class AController*                                 NewPlayer;                                                
	struct FTransform                                  Trans;                                                    
	class APawn*                                       ReturnValue;                                              
};


struct AUAEGameMode_SetVehicleReportEntry_Params
{
	uint32_t                                           InUniqueID;                                               
	struct FVehicleReportEntry                         InEntry;                                                  
};


struct AUAEGameMode_SetPlayerOpenId_Params
{
	uint32_t                                           InPlayerKey;                                              
	struct FString                                     InPlayerOpenID;                                           
};


struct AUAEGameMode_SetMaxWeaponReportNum_Params
{
	int                                                Num;                                                      
};


struct AUAEGameMode_SetKillerPlayerKey_Params
{
	class AController*                                 VictimPlayer;                                             
	uint32_t                                           KillerPlayerKey;                                          
};


struct AUAEGameMode_SetGameEndReportData_Params
{
};


struct AUAEGameMode_RetrieveTeamBattleResultData_Params
{
	int                                                TeamID;                                                   
	struct FGameModeTeamBattleResultData               ReturnValue;                                              
};


struct AUAEGameMode_RetrieveBattleData_Params
{
	struct FBattleData                                 OutBattleData;                                            
};


struct AUAEGameMode_RestartPlayerAtPlayerStart_Params
{
	class AController*                                 NewPlayer;                                                
	class AActor*                                      StartSpot;                                                
};


struct AUAEGameMode_ResetGameParamsFromGameMode_Params
{
};


struct AUAEGameMode_Rescue_Params
{
	class APawn*                                       RescueWho;                                                
	class APawn*                                       Hero;                                                     
};


struct AUAEGameMode_RegisterItemGroupSpotsByTag_Params
{
	struct FName                                       Tag;                                                      
	class UGroupSpotSceneComponent*                    GroupSpotComponent;                                       
};


struct AUAEGameMode_RegisterItemGroupSpots_Params
{
	class UGroupSpotSceneComponent*                    GroupSpotComponent;                                       
};


struct AUAEGameMode_RefreshWorldActiveRange_Params
{
};


struct AUAEGameMode_RefreshWatchTeammates_Params
{
	class AUAEPlayerController*                        InController;                                             
	int                                                InTeamID;                                                 
};


struct AUAEGameMode_RefreshPlayerNames_Params
{
	uint32_t                                           InPlayerKey;                                              
	struct FString                                     InPlayerName;                                             
	int                                                TeamID;                                                   
	bool                                               IsLogin;                                                  
	uint64_t                                           UID;                                                      
	int                                                IdxInTeam;                                                
};


struct AUAEGameMode_RecoardAlivePlayerNum_Params
{
	int                                                ReturnValue;                                              
};


struct AUAEGameMode_PreCreatePlayerController_Params
{
	uint32_t                                           PlayerKey;                                                
	class APlayerController*                           ReturnValue;                                              
};


struct AUAEGameMode_OnStandAloneGameEnd_Params
{
};


struct AUAEGameMode_OnReportNetworkData_Params
{
};


struct AUAEGameMode_OnPlayerFiring_Params
{
	uint32_t                                           InPlayerKey;                                              
};


struct AUAEGameMode_OnPlayerControlDestroyEnd_Params
{
	uint32_t                                           PlayerKey;                                                
};


struct AUAEGameMode_OnPlayerBreathChange_Params
{
	uint32_t                                           InPlayerKey;                                              
	float                                              InBreath;                                                 
};


struct AUAEGameMode_OnObserverLogout_Params
{
	class AUAEPlayerController*                        InController;                                             
};


struct AUAEGameMode_OnObserverLogin_Params
{
	class AUAEPlayerController*                        InController;                                             
};


struct AUAEGameMode_OnMsg_Params
{
	struct FString                                     Msg;                                                      
};


struct AUAEGameMode_OnAirDropBoxLanded_Params
{
	int                                                boxId;                                                    
	struct FVector                                     pos;                                                      
};


struct AUAEGameMode_OnAirDropBoxEmpty_Params
{
	int                                                boxId;                                                    
};


struct AUAEGameMode_NotifyPlayerExitWhenNotStarted_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FName                                       PlayerType;                                               
	struct FString                                     Reason;                                                   
};


struct AUAEGameMode_NotifyPlayerExit_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FName                                       PlayerType;                                               
	bool                                               bDestroyPlayerController;                                 
	bool                                               bDestroyCharacter;                                        
	bool                                               bSendFailure;                                             
	struct FString                                     FailureMessage;                                           
	struct FName                                       ParamState;                                               
	struct FString                                     ParamReason;                                              
};


struct AUAEGameMode_NotifyPlayerAbleToExitSafely_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FName                                       PlayerType;                                               
};


struct AUAEGameMode_NotifyGameModeParamsChanged_Params
{
	struct FGameModeParams                             GameModeParams;                                           
};


struct AUAEGameMode_NotifyGameModeLuckmate_Params
{
	int64_t                                            MyUID;                                                    
	int64_t                                            LuckmateUID;                                              
};


struct AUAEGameMode_NotifyGameModeInit_Params
{
};


struct AUAEGameMode_NotifyExistPlayerReEnter_Params
{
	uint32_t                                           PlayerKey;                                                
};


struct AUAEGameMode_NotifyAIPlayerEnter_Params
{
	uint32_t                                           PlayerKey;                                                
	bool                                               IsMLAI;                                                   
	bool                                               bTeammateAI;                                              
};


struct AUAEGameMode_NotifyAIDropInfo_Params
{
	int                                                NewAI;                                                    
	struct FDSAIDropInfo                               Info;                                                     
};


struct AUAEGameMode_ModifyVehicleDamage_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AController*                                 EventInstigator;                                          
	class AActor*                                      VictimVehicle;                                            
	class AActor*                                      DamageCauser;                                             
	float                                              ReturnValue;                                              
};


struct AUAEGameMode_ModifyDamage_Params
{
	float                                              Damage;                                                   
	struct FDamageEvent                                DamageEvent;                                              
	class AController*                                 EventInstigator;                                          
	class AController*                                 VictimController;                                         
	class AActor*                                      DamageCauser;                                             
	float                                              ReturnValue;                                              
};


struct AUAEGameMode_Killed_Params
{
	class AController*                                 Killer;                                                   
	class AController*                                 VictimPlayer;                                             
	class AActor*                                      DamageCauser;                                             
	class APawn*                                       VictimPawn;                                               
	struct FDamageEvent                                DamageEvent;                                              
};


struct AUAEGameMode_IsStandAloneGameMode_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEGameMode_IsSatisfyGeneratorArea_Params
{
	struct FVector                                     Location;                                                 
	bool                                               ReturnValue;                                              
};


struct AUAEGameMode_IsCollectingOBData_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEGameMode_InitWorldActiveRange_Params
{
};


struct AUAEGameMode_InitSeasonStatue_Params
{
};


struct AUAEGameMode_InitMissionBoard_Params
{
};


struct AUAEGameMode_InitGenerator_Params
{
};


struct AUAEGameMode_InitGameParamsFromGameMode_Params
{
};


struct AUAEGameMode_InitDynamicTriggers_Params
{
};


struct AUAEGameMode_InitDynamicBuildingGroups_Params
{
};


struct AUAEGameMode_InitBornWithApple_Params
{
};


struct AUAEGameMode_Heartbeat_Params
{
};


struct AUAEGameMode_HasVehicleReportEntry_Params
{
	uint32_t                                           InUniqueID;                                               
	bool                                               ReturnValue;                                              
};


struct AUAEGameMode_HasDynamicBuildingGroup_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEGameMode_HandlePlayerPaintDecalResponse_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FName                                       PlayerType;                                               
	int                                                Result;                                                   
	int                                                DecalId;                                                  
	int                                                Count;                                                    
};


struct AUAEGameMode_GotoNearDeath_Params
{
	class AController*                                 DamageInstigator;                                         
	class APawn*                                       VictimPawn;                                               
};


struct AUAEGameMode_GetWeaponReportByWeaponRecord_Params
{
	struct FString                                     PlayerKey;                                                
	struct FOnePlayerWeapon                            ReturnValue;                                              
};


struct AUAEGameMode_GetWeaponDamageFromRecord_Params
{
	struct FString                                     PlayerKey;                                                
	int                                                TargetWeaponType;                                         
	float                                              ReturnValue;                                              
};


struct AUAEGameMode_GetVehicleReportEntry_Params
{
	uint32_t                                           InUniqueID;                                               
	struct FVehicleReportEntry                         ReturnValue;                                              
};


struct AUAEGameMode_GetSurvivingTeamCount_Params
{
	int                                                ReturnValue;                                              
};


struct AUAEGameMode_GetSurvivingCharacterCount_Params
{
	int                                                ReturnValue;                                              
};


struct AUAEGameMode_GetRescueDuration_Params
{
	class AActor*                                      WhoRescue;                                                
	class AActor*                                      RescueWho;                                                
	float                                              ReturnValue;                                              
};


struct AUAEGameMode_GetPlayerTotalShootNum_Params
{
	struct FString                                     PlayerKey;                                                
	int                                                ReturnValue;                                              
};


struct AUAEGameMode_GetPlayerStateListWithTeamID_Params
{
	int                                                TeamID;                                                   
	struct FName                                       PlayerType;                                               
	TArray<class AUAEPlayerState*>                     ReturnValue;                                              
};


struct AUAEGameMode_GetPlayerRealtimeVerifyInfo_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FRealtimeVerifyInfo                         RealtimeVerifyInfo;                                       
};


struct AUAEGameMode_GetPlayerControllerWithUID_Params
{
	uint64_t                                           UID;                                                      
	class AUAEPlayerController*                        ReturnValue;                                              
};


struct AUAEGameMode_GetPlayerControllerListWithTeamID_Params
{
	int                                                TeamID;                                                   
	struct FName                                       PlayerType;                                               
	TArray<class AUAEPlayerController*>                ReturnValue;                                              
};


struct AUAEGameMode_GetPlayerAndRealAiNum_Params
{
	struct FHeartBeatData                              Data;                                                     
};


struct AUAEGameMode_GetObserverControllerList_Params
{
	TArray<class AUAEPlayerController*>                ReturnValue;                                              
};


struct AUAEGameMode_GetMonsterNum_Params
{
	struct FHeartBeatData                              Data;                                                     
};


struct AUAEGameMode_GetMaxWeaponReportNum_Params
{
	int                                                ReturnValue;                                              
};


struct AUAEGameMode_GetClassicPlaneDirection_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct AUAEGameMode_FindPlayerStateWithPlayerKey_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FName                                       PlayerType;                                               
	class AUAEPlayerState*                             ReturnValue;                                              
};


struct AUAEGameMode_FindPlayerControllerWithPlayerKey_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FName                                       PlayerType;                                               
	class AUAEPlayerController*                        ReturnValue;                                              
};


struct AUAEGameMode_FindPlayerControllerByUId_Params
{
	uint64_t                                           UID;                                                      
	class APlayerController*                           ReturnValue;                                              
};


struct AUAEGameMode_FindControllerWithPlayerKey_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FName                                       PlayerType;                                               
	class AController*                                 ReturnValue;                                              
};


struct AUAEGameMode_DestroyNoActiveWorldActor_Params
{
	struct FVector                                     Location;                                                 
	float                                              Radius;                                                   
};


struct AUAEGameMode_DestroyCharacterForPlayerController_Params
{
	class APlayerController*                           PC;                                                       
};


struct AUAEGameMode_DestroyAllPickUpObjs_Params
{
};


struct AUAEGameMode_DeleteSeasonStatue_Params
{
};


struct AUAEGameMode_DeleteDynamicLoadItem_Params
{
};


struct AUAEGameMode_DebugEnterFriendObserver_Params
{
	class AUAEPlayerController*                        InController;                                             
};


struct AUAEGameMode_CreateDynamicBuildingGroups_Params
{
	struct FVector                                     Offset;                                                   
};


struct AUAEGameMode_ChangeName_Params
{
	class AController*                                 Controller;                                               
	struct FString                                     NewName;                                                  
	bool                                               bNameChange;                                              
};


struct AUAEGameMode_AddAirDropBox_Params
{
	int                                                boxId;                                                    
	struct FVector                                     pos;                                                      
};


struct AUAEGameState_SendLuaDSToClient_Params
{
	int                                                ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct AUAEGameState_RPC_LuaDSToClient_Params
{
	int                                                ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct AUAEGameState_HasTimeIDSwitch_Params
{
	int                                                TimeID;                                                   
	bool                                               ReturnValue;                                              
};


struct AUAEGameState_CheckDSSwitchOpen_Params
{
	int                                                SwitchId;                                                 
	bool                                               ReturnValue;                                              
};


struct UBaseGeneratorComponent_RegisterWorldTileSpot_Params
{
	class USpotSceneComponent*                         Spot;                                                     
};


struct UBaseGeneratorComponent_RegisterSpotComponentToTick_Params
{
	class USpotSceneComponent*                         SpotComponent;                                            
};


struct UBaseGeneratorComponent_RegisterGroupSpotComponent_Params
{
	class UGroupSpotSceneComponent*                    GroupSpotComponent;                                       
};


struct UBaseGeneratorComponent_GetRandomCategory_Params
{
	TArray<struct FSpotWeight>                         SpotWeights;                                              
	struct FString                                     ReturnValue;                                              
};


struct UBaseGeneratorComponent_GeneratorWorldTileSpots_Params
{
	struct FWorldTileSpotArray                         SpotArray;                                                
};


struct UBaseGeneratorComponent_GenerateSpots_Params
{
};


struct UBaseGeneratorComponent_GenerateSpotOnTick_Params
{
	float                                              DeltaTime;                                                
};


struct UBaseGeneratorComponent_GeneratePickupActor_Params
{
	class UClass*                                      ActorClass;                                               
	struct FVector                                     ActorLocation;                                            
	struct FRotator                                    ActorRotator;                                             
	ESpawnActorCollisionHandlingMethod                 SpawnActorCollisionHandlingMethod;                        
	struct FItemGenerateSpawnClass                     ItemData;                                                 
	class AActor*                                      ReturnValue;                                              
};


struct UBaseGeneratorComponent_CheckTileLevelsVisible_Params
{
};


struct UItemGeneratorComponent_WriteItemSpotStatisticsDatas_Params
{
};


struct UItemGeneratorComponent_WriteItemClassStatisticsDatas_V15_Params
{
};


struct UItemGeneratorComponent_WriteItemClassStatisticsDatas_Params
{
};


struct UItemGeneratorComponent_WriteGroupStatisticsDatas_Params
{
};


struct UItemGeneratorComponent_WriteBuildingStatisticsDatas_Params
{
};


struct UItemGeneratorComponent_WriteAreaItemStatisticsDatas_Params
{
};


struct UItemGeneratorComponent_WriteAllStatisticsDatasToLog_Params
{
};


struct UItemGeneratorComponent_WriteAllStatisticsDatas_Params
{
};


struct UItemGeneratorComponent_TryLoadItemSpawnTableByTableMgr_Params
{
	struct FString                                     tableName;                                                
	bool                                               ReturnValue;                                              
};


struct UItemGeneratorComponent_SetRandomSeed_Params
{
	int                                                Seed;                                                     
};


struct UItemGeneratorComponent_SetCatetoryRate_Params
{
	TMap<struct FString, float>                        Rates;                                                    
};


struct UItemGeneratorComponent_RemoveSpotInfo_Params
{
	bool                                               bFirstEnterState;                                         
	bool                                               ReturnValue;                                              
};


struct UItemGeneratorComponent_RemoveItemOnTick_Params
{
};


struct UItemGeneratorComponent_RemoveDropGround_Params
{
	bool                                               bFirstEnterState;                                         
	bool                                               ReturnValue;                                              
};


struct UItemGeneratorComponent_RegisterItemGenerateSpawnData_Params
{
	struct FItemGenerateSpawnData                      Data;                                                     
};


struct UItemGeneratorComponent_RegisterBornIslandItem_Params
{
	class AActor*                                      Item;                                                     
};


struct UItemGeneratorComponent_ReadItemGenerateTable_Params
{
	struct FString                                     TablePath;                                                
	class UUAEDataTable*                               ReturnValue;                                              
};


struct UItemGeneratorComponent_ReAddAllSpot_Params
{
};


struct UItemGeneratorComponent_RandomSingleGroup_Params
{
	TArray<class UGroupSpotSceneComponent*>            Groups;                                                   
	struct FSpotGroupProperty                          GroupProperty;                                            
	class UItemGroupSpotSceneComponent*                ReturnValue;                                              
};


struct UItemGeneratorComponent_RandomGroupsByType_Params
{
	struct FSpotGroupProperty                          GroupProperty;                                            
};


struct UItemGeneratorComponent_RandomBornIslandGroups_Params
{
};


struct UItemGeneratorComponent_OnAsyncLoadItemClassFinish_Params
{
	struct FItemGenerateSpawnClass                     SpawnClass;                                               
};


struct UItemGeneratorComponent_LuaCustomFunctionAfterGenerate_Params
{
	struct FItemGenerateSpawnClass                     SpawnClass;                                               
	class AActor*                                      ItemActor;                                                
};


struct UItemGeneratorComponent_LuaAddRandomItemClassArray_Params
{
	struct FItemGenerateSpawnClass                     SpawnClass;                                               
	bool                                               ReturnValue;                                              
};


struct UItemGeneratorComponent_LoadItemGenerateTable_Params
{
};


struct UItemGeneratorComponent_IsCatetoryEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UItemGeneratorComponent_InitCatetorys_Params
{
};


struct UItemGeneratorComponent_InitCategoryEx_Params
{
};


struct UItemGeneratorComponent_GMTrackGroundCheck_Params
{
	class UClass*                                      CheckClass;                                               
	float                                              FloatUp;                                                  
	float                                              FloatDown;                                                
	float                                              SinkUp;                                                   
	float                                              SinkTop;                                                  
	bool                                               bCheckBounds;                                             
	TArray<struct FVector>                             ReturnValue;                                              
};


struct UItemGeneratorComponent_GMGenerateAllSpot_Params
{
	struct FString                                     ItemPath;                                                 
	bool                                               ReturnValue;                                              
};


struct UItemGeneratorComponent_GMEnableRefreshAllSpotWithSeed_Params
{
	int                                                Seed;                                                     
};


struct UItemGeneratorComponent_GetSpotTags_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UItemGeneratorComponent_GetSpotLocsByTag_Params
{
	struct FString                                     ExTag;                                                    
	TArray<struct FVector>                             ReturnValue;                                              
};


struct UItemGeneratorComponent_GetSpotLocInPolygon_Params
{
	TArray<struct FVector>                             Anchors;                                                  
	TArray<struct FVector>                             OutLocs;                                                  
	int                                                RandomNum;                                                
	int                                                ReturnValue;                                              
};


struct UItemGeneratorComponent_GetSpotLocInCircle_Params
{
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
	TArray<struct FVector>                             OutLocs;                                                  
	int                                                RandomNum;                                                
	int                                                ReturnValue;                                              
};


struct UItemGeneratorComponent_GetSpotGroupPropertyByGroupType_Params
{
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            
	struct FSpotGroupProperty                          ReturnValue;                                              
};


struct UItemGeneratorComponent_GetRandomItemClassArray_Params
{
	struct FString                                     Value;                                                    
	struct FString                                     Category;                                                 
	TArray<struct FItemGenerateSpawnClass>             Results;                                                  
	bool                                               RepeatGenerateItem;                                       
	class UItemSpotSceneComponent*                     SpotComponent;                                            
	bool                                               ReturnValue;                                              
};


struct UItemGeneratorComponent_GetRandomCategory_Params
{
	TArray<struct FSpotWeight>                         SpotWeights;                                              
	struct FString                                     ReturnValue;                                              
};


struct UItemGeneratorComponent_GetItemDefineID_Params
{
	class UClass*                                      PickUpClass;                                              
	int                                                ReturnValue;                                              
};


struct UItemGeneratorComponent_GetCatetoryRate_Params
{
	struct FString                                     Catetory;                                                 
	float                                              ReturnValue;                                              
};


struct UItemGeneratorComponent_GenerateSpotOnTick_Params
{
	float                                              DeltaTime;                                                
};


struct UItemGeneratorComponent_GenerateNewRandomSeed_Params
{
};


struct UItemGeneratorComponent_FindASpawnLoc_Params
{
	class UWorld*                                      InWorld;                                                  
	struct FVector                                     TraceStart;                                               
	struct FVector                                     ReturnValue;                                              
};


struct UItemGeneratorComponent_EnableRemoveItem_Params
{
};


struct UItemGeneratorComponent_EnableRefreshAllSpot_Params
{
};


struct UItemGeneratorComponent_EnablePrimeItemPolygon_Params
{
	TArray<struct FVector>                             Anchors;                                                  
	int                                                PrimeConfigIndex;                                         
};


struct UItemGeneratorComponent_EnablePrimeItemCircle_Params
{
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
	int                                                PrimeConfigIndex;                                         
};


struct UItemGeneratorComponent_EnableDynamicSpotConfigByIndex_Params
{
	int                                                DynamicIndex;                                             
};


struct UItemGeneratorComponent_DoPickUp_Params
{
	int                                                ItemSpotDataIndex;                                        
	struct FString                                     Value;                                                    
	struct FString                                     Category;                                                 
};


struct UItemGeneratorComponent_DeleteBornIslandItems_Params
{
};


struct UItemGeneratorComponent_CheckShouldGenerateItem_Params
{
	int                                                ItemId;                                                   
	bool                                               ReturnValue;                                              
};


struct UItemGeneratorComponent_CheckRecoverItems_Params
{
};


struct UItemGeneratorComponent_CheckInPolygon_Params
{
	struct FVector                                     pos;                                                      
	TArray<struct FVector>                             Anchors;                                                  
	bool                                               ReturnValue;                                              
};


struct UItemGeneratorComponent_CheckInCircle_Params
{
	struct FVector                                     pos;                                                      
	struct FVector                                     Center;                                                   
	float                                              Radius;                                                   
	bool                                               ReturnValue;                                              
};


struct UItemGeneratorComponent_AddIgnoreItemClassPath_Params
{
	TArray<struct FString>                             IgnoreItemClassList;                                      
};


struct UItemGeneratorComponent_AddDropGround_Params
{
	class AActor*                                      InActor;                                                  
};


struct AUAEPlayerState_SetRankAndPersonalRank_Params
{
	int                                                TempRank;                                                 
	int                                                TempPersonalRank;                                         
};


struct AUAEPlayerState_SetGVMemberIDServerCall_Params
{
	int                                                memberID;                                                 
};


struct AUAEPlayerState_SetGVMemberID_Params
{
	int                                                memberID;                                                 
};


struct AUAEPlayerState_SetDeliveryResult_Params
{
	uint32_t                                           InDeliverPlayerKey;                                       
	bool                                               bInSuccess;                                               
	int                                                EventTypeId;                                              
};


struct AUAEPlayerState_SendLuaDSToClient_Params
{
	int                                                ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct AUAEPlayerState_RPC_ServerAddGeneralCount_Params
{
	int                                                ID;                                                       
	int                                                InCount;                                                  
	bool                                               bReset;                                                   
};


struct AUAEPlayerState_RPC_LuaDSToClient_Params
{
	int                                                ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct AUAEPlayerState_RPC_ChangeOnlyTeamChat_Params
{
	int                                                NewPreTeamChatState;                                      
};


struct AUAEPlayerState_ReportTaskExtInfo_Params
{
	int                                                TaskID;                                                   
	struct FString                                     ExtInfo;                                                  
};


struct AUAEPlayerState_ReportTaskData_Params
{
	int                                                TaskID;                                                   
	int                                                process;                                                  
};


struct AUAEPlayerState_ReportSpecialCollection_Params
{
	int                                                ItemId;                                                   
	int                                                Count;                                                    
};


struct AUAEPlayerState_ReportSecretAreaID_Params
{
	int                                                SecretAreaID;                                             
};


struct AUAEPlayerState_ReportLikeTeammate_Params
{
	int64_t                                            BeLikeUID;                                                
	int                                                LikeType;                                                 
};


struct AUAEPlayerState_ReportLikeSwitch_Params
{
	int                                                SwitchSetting;                                            
};


struct AUAEPlayerState_ReportLikeSelf_Params
{
	int                                                LikeType;                                                 
};


struct AUAEPlayerState_ReportLandLocType_Params
{
	int                                                TouchDownLocType;                                         
};


struct AUAEPlayerState_ReportLandAreaList_Params
{
	TArray<int>                                        TouchDownAreaIDs;                                         
};


struct AUAEPlayerState_ReportLandArea_Params
{
	int                                                TouchDownArea;                                            
};


struct AUAEPlayerState_ReportLabelCheck_Params
{
	int                                                TeammateUID;                                              
	int                                                Result;                                                   
};


struct AUAEPlayerState_RecordUseHelicoper_Params
{
	uint32_t                                           UseHelicoperId;                                           
};


struct AUAEPlayerState_OnRepCampIDBP_Params
{
};


struct AUAEPlayerState_OnRep_VeteranRecruitIndex_Params
{
};


struct AUAEPlayerState_OnRep_UpdateKillMonsterNum_Params
{
};


struct AUAEPlayerState_OnRep_UID_Params
{
};


struct AUAEPlayerState_OnRep_TeamID_Params
{
};


struct AUAEPlayerState_OnRep_RescueTimesChange_Params
{
};


struct AUAEPlayerState_OnRep_PreTeamID_Params
{
};


struct AUAEPlayerState_OnRep_PlayerKillsChange_Params
{
};


struct AUAEPlayerState_OnRep_PlayerKey_Params
{
};


struct AUAEPlayerState_OnRep_MLAIDisplayUID_Params
{
};


struct AUAEPlayerState_OnRep_MatchLabel_Params
{
};


struct AUAEPlayerState_OnRep_CollectItemRecord_Params
{
};


struct AUAEPlayerState_OnRep_CampID_Params
{
};


struct AUAEPlayerState_OnRep_bOnlyPreTeamChat_Params
{
};


struct AUAEPlayerState_OnRep_AliasInfo_Params
{
};


struct AUAEPlayerState_OnClientVeteranRecruitIndexUpdated_Params
{
};


struct AUAEPlayerState_IsSpecialPickItemCollectionCompleted_Params
{
	int                                                ItemId;                                                   
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerState_IsSpecialPickItem_Params
{
	int                                                ItemId;                                                   
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerState_IsNearDeathDamageInfoValid_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerState_IsItemForbidMerge_Params
{
	int                                                ItemResId;                                                
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerState_IsDeathDamageInfoValid_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerState_GetWeaponReportByWeaponRecord_Params
{
	struct FOnePlayerWeapon                            ReturnValue;                                              
};


struct AUAEPlayerState_GetWeaponRecordData_Params
{
	struct FOnePlayerWeapon                            OutWeaponInfo;                                            
};


struct AUAEPlayerState_GetVeteranPlayerLevel_Params
{
	int                                                ReturnValue;                                              
};


struct AUAEPlayerState_GetUserIDByMemberID_Params
{
	int                                                memberID;                                                 
	uint32_t                                           ReturnValue;                                              
};


struct AUAEPlayerState_GetUIDString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct AUAEPlayerState_GetTeammateBattleResultData_Params
{
	struct FGameModeTeammateBattleResultData           ReturnValue;                                              
};


struct AUAEPlayerState_GetTeamID_Params
{
	int                                                ReturnValue;                                              
};


struct AUAEPlayerState_GetRank_Params
{
	int                                                ReturnValue;                                              
};


struct AUAEPlayerState_GetPlayerTotalShootNum_Params
{
	int                                                ReturnValue;                                              
};


struct AUAEPlayerState_GetPlayerKey_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct AUAEPlayerState_GetPlayerBattleResultData_SuperCold_Params
{
	struct FGameModePlayerBattleResultData_SuperCold   ReturnValue;                                              
};


struct AUAEPlayerState_GetPlayerBattleResultData_Params
{
	struct FGameModePlayerBattleResultData             ReturnValue;                                              
};


struct AUAEPlayerState_GetMentorPlayerType_Params
{
	EMentorPlayerType                                  ReturnValue;                                              
};


struct AUAEPlayerState_ForceUpdateCampCharacterList_Params
{
};


struct AUAEPlayerState_CopyNearDeathDamageInfo_Params
{
};


struct AUAEPlayerState_CopyDeathDamageInfo_Params
{
};


struct AUAEPlayerState_ClearTlogData_Params
{
};


struct AUAEPlayerState_ClearKillNum_Params
{
};


struct AUAEPlayerState_ChangeCollectItemRecord_Params
{
	int                                                InItemID;                                                 
	bool                                               InNewState;                                               
};


struct AUAEPlayerState_AddGeneralTLogJustForDelegate_Params
{
	int                                                ID;                                                       
	int                                                DeltaCnt;                                                 
	int                                                CurrValue;                                                
};


struct AUAEPlayerState_AddGeneralCount_Params
{
	int                                                ID;                                                       
	int                                                InCount;                                                  
	bool                                               bReset;                                                   
};


struct AUAEPlayerState_AddEventCount_Params
{
	unsigned char                                      EventID;                                                  
	int                                                InCount;                                                  
	bool                                               bReset;                                                   
};


struct UBackpackComponent_UseItem_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemUseTarget                        Target;                                                   
	EBattleItemUseReason                               Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_UpdateStoreAreaOccupiedCapacity_Params
{
	float                                              StoreAreaOccupiedCapacity;                                
	EItemStoreArea                                     InItemStoreArea;                                          
	float                                              ReturnValue;                                              
};


struct UBackpackComponent_UpdateOccupiedCapacity_Params
{
};


struct UBackpackComponent_UpdateCapacity_Params
{
	float                                              ReturnValue;                                              
};


struct UBackpackComponent_UnlockUpdateItemListReceive_Params
{
};


struct UBackpackComponent_TryMergeItemHandles_Params
{
	struct FItemDefineID                               DefineID;                                                 
	EItemStoreArea                                     InItemStoreArea;                                          
};


struct UBackpackComponent_TakeItem_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                Count;                                                    
	bool                                               bCallHandleDrop;                                          
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_SwapItem_Params
{
	struct FItemDefineID                               DefineID1;                                                
	struct FItemDefineID                               DefineID2;                                                
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_SetSpecialCountLimitFromLua_Params
{
	TArray<struct FSpecialPickInfo>                    InSpecialCountLimit;                                      
};


struct UBackpackComponent_SetItemSourceContext_Params
{
	int                                                Source;                                                   
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_SetItemSource_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                Source;                                                   
	bool                                               bAmmoSource;                                              
};


struct UBackpackComponent_SetForceAutoEquipAim_Params
{
	bool                                               bInAutoEquipAim;                                          
};


struct UBackpackComponent_SetDisableItemsArray_Params
{
	TArray<int>                                        InDisableItems;                                           
};


struct UBackpackComponent_SetChangeWeaponSchemeState_Params
{
	bool                                               bInIsChangeWeaponScheme;                                  
};


struct UBackpackComponent_ServerSetShowBounty_Params
{
	bool                                               bInShowBounty;                                            
};


struct UBackpackComponent_ServerSetDropMeelWeapon_Params
{
	bool                                               NewValue;                                                 
};


struct UBackpackComponent_ServerSetCustomAccessories_Params
{
	int                                                WeaponItemId;                                             
	int                                                Index;                                                    
	int                                                ItemId;                                                   
	bool                                               bIsSetOrRemove;                                           
};


struct UBackpackComponent_ServerEnableItem_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               bUse;                                                     
};


struct UBackpackComponent_RPC_Multicast_AllItem_Params
{
	struct FIncNetArray                                Items;                                                    
};


struct UBackpackComponent_ReturnItem_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                Count;                                                    
	bool                                               bCallHandlePickup;                                        
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_RemoveItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_ReceiveItemList_Params
{
};


struct UBackpackComponent_ReceiveCapacity_Params
{
};


struct UBackpackComponent_PreCheckCanPickupBagAvatar_Params
{
	class UBattleItemHandleBase*                       NewHandle;                                                
	class UBattleItemHandleBase*                       OldHandle;                                                
	EBattleItemUseReason                               reson;                                                    
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_PostItemHandleEquippingState_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               bEquipping;                                               
};


struct UBackpackComponent_PickupItemFromWrapperDetail_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemPickupInfo                       PickupInfo;                                               
	EBattleItemPickupReason                            Reason;                                                   
	EBattleItemClientPickupType                        BattleItemClientPickupType;                               
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_PickUpItem_Default_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemPickupInfo                       PickupInfo;                                               
	EBattleItemPickupReason                            Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_PickupItem_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemPickupInfo                       PickupInfo;                                               
	EBattleItemPickupReason                            Reason;                                                   
	EBattleItemClientPickupType                        BattleItemClientPickupType;                               
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_PickupBattleItemOnPlane_Params
{
};


struct UBackpackComponent_PickItem_IntoSafetyBox_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemPickupInfo                       PickupInfo;                                               
	EBattleItemPickupReason                            Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_PickItem_IntoBackpack_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemPickupInfo                       PickupInfo;                                               
	EBattleItemPickupReason                            Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_OnRep_specialCountLimit_Params
{
};


struct UBackpackComponent_OnRep_ItemListNet_Params
{
};


struct UBackpackComponent_OnRep_CoinsNum_Params
{
};


struct UBackpackComponent_OnRep_Capacity_Params
{
};


struct UBackpackComponent_NotifyItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 
};


struct UBackpackComponent_NotifyItemRemoved_Params
{
	struct FItemDefineID                               DefineID;                                                 
};


struct UBackpackComponent_NotifyItemListUpdated_Params
{
};


struct UBackpackComponent_NotifyCapacityUpdated_Params
{
};


struct UBackpackComponent_NewItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 
	class UBattleItemHandleBase*                       ReturnValue;                                              
};


struct UBackpackComponent_NewItemDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FItemDefineID                               ReturnValue;                                              
};


struct UBackpackComponent_ModifyItemHandleEquippingState_Params
{
	class UItemHandleBase*                             ItemHandle;                                               
	bool                                               bEquipping;                                               
};


struct UBackpackComponent_ModifyItemHandleCount_Params
{
	class UItemHandleBase*                             ItemHandle;                                               
	int                                                Count;                                                    
};


struct UBackpackComponent_ModifyAutoPickClipType_Params
{
	int                                                InAutoPickClipType;                                       
};


struct UBackpackComponent_ModifyAimNotAutoUse_Params
{
	bool                                               bAdd;                                                     
};


struct UBackpackComponent_LockUpdateItemListReceive_Params
{
};


struct UBackpackComponent_ItemNet2Data_Params
{
	struct FNetArrayUnit                               NetItem;                                                  
	struct FBattleItemData                             ReturnValue;                                              
};


struct UBackpackComponent_IsNeedToShowInBackpack_Params
{
	int                                                TypeDefineID;                                             
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsItemSourceTrackingEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsItemListUpdatedHasSomeItemTypes_Params
{
	TArray<int>                                        ItemTypes;                                                
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsItemListUpdatedHasSomeItemSubTypes_Params
{
	TArray<int>                                        ItemSubTypes;                                             
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsItemListUpdatedHasSomeItems_Params
{
	TArray<int>                                        ItemTypeSpecificIDs;                                      
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsItemListUpdatedHasOneItemType_Params
{
	int                                                itemType;                                                 
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsItemListUpdatedHasOneItemSubType_Params
{
	int                                                ItemSubType;                                              
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsItemListUpdatedHasOneItem_Params
{
	int                                                ItemTypeSpecificID;                                       
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsItemExist_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsItemDisabled_Params
{
	int                                                ItemId;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsEnableWeaponAttachmentBindToWeapon_Params
{
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsEnableBackpackRepActor_Params
{
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsCustomIgnoreAccessories_Params
{
	int                                                WeaponId;                                                 
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsCustomAccessories_Params
{
	int                                                WeaponId;                                                 
	int                                                ItemId;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsChangeWeaponScheme_Params
{
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsBackPackContainItemId_Params
{
	int                                                ItemId;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_IsAutoUse_Params
{
	int                                                ItemId;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_HasUnEquipItemByDefindIdRange_Params
{
	int                                                LowValue;                                                 
	int                                                HighValue;                                                
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_HasTagSub_Params
{
	int                                                ItemId;                                                   
	struct FName                                       TagName;                                                  
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_HasItemBySubType_Params
{
	int                                                SubType;                                                  
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_HasItemBySpecificID_Params
{
	int                                                SpecificID;                                               
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_HasItemByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_HasItemByDefindIdRange_Params
{
	int                                                LowValue;                                                 
	int                                                HighValue;                                                
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_HasAllItem_Params
{
	TArray<struct FBattleItemData>                     ItemDataArray;                                            
	bool                                               bExcludeEquippingItem;                                    
	TArray<int>                                        ReturnValue;                                              
};


struct UBackpackComponent_HandleDropInDisuse_Params
{
	struct FItemDefineID                               DefineID;                                                 
	class UBattleItemHandleBase*                       ItemHandle;                                               
	EBattleItemDisuseReason                            Reason;                                                   
	float                                              OccupiedCapacityBeforeDisuse;                             
};


struct UBackpackComponent_GetWorld_BP_Params
{
	class UWorld*                                      ReturnValue;                                              
};


struct UBackpackComponent_GetUnEquipItemNumByItemId_Params
{
	int                                                ItemId;                                                   
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_GetSpecialItemNow_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FSpecialPickInfo                            ReturnValue;                                              
};


struct UBackpackComponent_GetSpecialItemBefore_Params
{
	int                                                ItemResId;                                                
	struct FSpecialPickInfo                            ReturnValue;                                              
};


struct UBackpackComponent_GetSafetyBoxCapacity_Params
{
	float                                              ReturnValue;                                              
};


struct UBackpackComponent_GetLeastElectrictyBattleItemData_Params
{
	struct FItemDefineID                               DefineID;                                                 
	EBattleItemAdditionalDataType                      AdditionalDataNameType;                                   
	struct FBattleItemData                             ReturnValue;                                              
};


struct UBackpackComponent_GetLastTakenItemSource_Params
{
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_GetItemSubType_Params
{
	int                                                ItemId;                                                   
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_GetItemSourceContext_Params
{
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_GetItemSource_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               bAmmoSource;                                              
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_GetItemListBySpecialID_Params
{
	TArray<int>                                        SpecialIDArray;                                           
	bool                                               bIgnoreEquipping;                                         
	EItemStoreArea                                     InItemStoreArea;                                          
	TArray<struct FBattleItemData>                     ReturnValue;                                              
};


struct UBackpackComponent_GetItemListByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 
	TArray<struct FBattleItemData>                     ReturnValue;                                              
};


struct UBackpackComponent_GetItemHandleMap_Params
{
	TMap<struct FItemDefineID, class UItemHandleBase*> ReturnValue;                                              
};


struct UBackpackComponent_GetItemHandleList_Params
{
	TArray<class UItemHandleBase*>                     ReturnValue;                                              
};


struct UBackpackComponent_GetItemCountByType_Params
{
	int                                                InItemType;                                               
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_GetItemCountByItemSpecialID_Params
{
	int                                                InItemSpecialID;                                          
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_GetItemCountByDefineIDUnEquip_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               bOnlyInstance;                                            
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_GetItemCountByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               bOnlyInstance;                                            
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_GetItemByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemData                             ReturnValue;                                              
};


struct UBackpackComponent_GetItemAttrsFlag_Params
{
	int                                                ItemId;                                                   
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_GetItemAssociateWeights_Params
{
	struct FBattleItemData                             InItemData;                                               
	float                                              ReturnValue;                                              
};


struct UBackpackComponent_GetFirstItemBySubType_Params
{
	int                                                SubType;                                                  
	struct FBattleItemData                             ReturnValue;                                              
};


struct UBackpackComponent_GetFirstItemByDefineIDIgnoreInstance_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemData                             ReturnValue;                                              
};


struct UBackpackComponent_GetCurrentPickupItemDefineID_Params
{
	struct FItemDefineID                               ReturnValue;                                              
};


struct UBackpackComponent_GetBattleItemFeatureDataByDefineID_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemFeatureData                      ReturnValue;                                              
};


struct UBackpackComponent_GetAllItemList_Params
{
	EItemStoreArea                                     InItemStoreArea;                                          
	TArray<struct FBattleItemData>                     ReturnValue;                                              
};


struct UBackpackComponent_GetAIPickupType_Params
{
	int                                                ItemId;                                                   
	EBattleItemClientPickupType                        ReturnValue;                                              
};


struct UBackpackComponent_ForceNetUpdate_Params
{
};


struct UBackpackComponent_DropItem_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                Count;                                                    
	EBattleItemDropReason                              Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_DisuseItem_Params
{
	struct FItemDefineID                               DefineID;                                                 
	EBattleItemDisuseReason                            Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_CreateItemHandleInternal_Params
{
	struct FItemDefineID                               DefineID;                                                 
	class UBattleItemHandleBase*                       ReturnValue;                                              
};


struct UBackpackComponent_CreateItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 
	class UItemHandleBase*                             ReturnValue;                                              
};


struct UBackpackComponent_ConsumeItem_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                Count;                                                    
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_ClientBroadcastItemOperationFailedDelegate_Params
{
	struct FItemDefineID                               DefineID;                                                 
	EBattleItemOperationType                           OperationType;                                            
	EBattleItemOperationFailedReason                   FailedReason;                                             
};


struct UBackpackComponent_ClientBroadcastItemOperationDelegate_Params
{
	struct FItemDefineID                               DefineID;                                                 
	EBattleItemOperationType                           OperationType;                                            
	unsigned char                                      Reason;                                                   
};


struct UBackpackComponent_ClientBroadcastItemChangeAreaDelegate_Params
{
	int                                                TypeSpecificID;                                           
	EBattleItemChangeAreaType                          OperationType;                                            
	int                                                Num;                                                      
	bool                                               bToSafeBox;                                               
};


struct UBackpackComponent_CheckSpecialMaxCountForItem_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                Count;                                                    
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_CheckSkillPropItemCanBePickup_Params
{
	class UBackpackComponent*                          BackpackComp;                                             
	struct FItemDefineID                               DefineID;                                                 
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_CheckPickUpItemDefaultSuccess_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               bPickupSucc;                                              
	bool                                               bAutoEquip;                                               
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_CheckLeftLimitCountForItem_Params
{
	int                                                InItemID;                                                 
	int                                                InCount;                                                  
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_CheckItemEmptyInBackpack_Params
{
	int                                                InItemID;                                                 
};


struct UBackpackComponent_CheckItemAttrsFlag_Params
{
	int                                                ItemId;                                                   
	EItemAttrs                                         ItemAttrEnum;                                             
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_CheckCapacityForItem_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                Count;                                                    
	EItemStoreArea                                     InItemStoreArea;                                          
	int                                                ReturnValue;                                              
};


struct UBackpackComponent_ChangeItemStoreAreaNew_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                InItemNum;                                                
	EItemStoreArea                                     InItemStoreArea;                                          
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_ChangeItemStoreArea_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                InItemNum;                                                
	EItemStoreArea                                     InItemStoreArea;                                          
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_CantDrop_Params
{
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_CanDisuseToBackpack_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_CacheItemAssociationBeforeDisuse_Params
{
	struct FItemDefineID                               DefineID;                                                 
	EBattleItemDisuseReason                            Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_BroadcastItemOperCountDelegate_Params
{
	struct FItemDefineID                               DefineID;                                                 
	EBattleItemOperationType                           OperationType;                                            
	int                                                Count;                                                    
};


struct UBackpackComponent_BroadcastItemOperationInfoDelegate_Params
{
	struct FItemOperationInfo                          ItemOperationInfo;                                        
};


struct UBackpackComponent_BroadcastItemOperationFailedDelegate_Params
{
	struct FItemDefineID                               DefineID;                                                 
	EBattleItemOperationType                           OperationType;                                            
	EBattleItemOperationFailedReason                   FailedReason;                                             
};


struct UBackpackComponent_BroadcastItemOperationDelegate_Params
{
	struct FItemDefineID                               DefineID;                                                 
	EBattleItemOperationType                           OperationType;                                            
	unsigned char                                      Reason;                                                   
};


struct UBackpackComponent_BroadcastItemChangeAreaDelegate_Params
{
	int                                                TypeSpecificID;                                           
	EBattleItemChangeAreaType                          OperationType;                                            
	int                                                Num;                                                      
	bool                                               bToSafeBox;                                               
};


struct UBackpackComponent_AlternativePickupItem_Params
{
	struct FItemDefineID                               DefineID;                                                 
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_AddItemHandle_Params
{
	struct FItemDefineID                               DefineID;                                                 
	class UItemHandleBase*                             ItemHandle;                                               
	bool                                               ReturnValue;                                              
};


struct UBackpackComponent_AddBattleItemPickupOnPlane_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemPickupInfo                       PickupInfo;                                               
	EBattleItemPickupReason                            Reason;                                                   
	EBattleItemClientPickupType                        BattleItemClientPickupType;                               
};


struct AUAECharacter_SetNetCullDistanceSquared_Params
{
	float                                              fNetCullDistanceSquared;                                  
};


struct AUAECharacter_SetMEnsure_Params
{
	bool                                               bMValue;                                                  
};


struct AUAECharacter_SetEnsure_Params
{
	bool                                               bValue;                                                   
};


struct AUAECharacter_SendLuaDSToClient_Params
{
	int                                                ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct AUAECharacter_RPC_LuaDSToClient_Params
{
	int                                                ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct AUAECharacter_PostRep_PlayerUID_Params
{
};


struct AUAECharacter_OnRep_UseWholeModel_Params
{
};


struct AUAECharacter_OnRep_TeamID_Params
{
};


struct AUAECharacter_OnRep_ResId_Params
{
};


struct AUAECharacter_OnRep_PlayerUID_Params
{
};


struct AUAECharacter_OnRep_PlayerKey_Params
{
};


struct AUAECharacter_OnRep_CampID_Params
{
};


struct AUAECharacter_IsDefaultCharType_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAECharacter_GetTeamID_Params
{
	int                                                ReturnValue;                                              
};


struct AUAECharacter_GetRepMEnsure_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAECharacter_GetRepEnsure_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAECharacter_GetPlayerKey_Params
{
	struct FString                                     ReturnValue;                                              
};


struct AUAECharacter_GetPhysicsType_Params
{
	int                                                ReturnValue;                                              
};


struct AUAECharacter_GetNonSimulatedComponents_OnFighting_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              
};


struct AUAECharacter_GetNonSimulatedComponents_NonTeammates_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              
};


struct AUAECharacter_GetNonSimulatedComponents_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              
};


struct AUAECharacter_GetNonDedicatedComponents_Params
{
	TArray<class UActorComponent*>                     ReturnValue;                                              
};


struct AUAECharacter_GetMovementBaseComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              
};


struct AUAECharacter_GetMEnsure_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAECharacter_GetEnsure_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAECharacter_GetCampID_Params
{
	int                                                ReturnValue;                                              
};


struct AUAECharacter_ClientAcknowledgeReconnection_3_Params
{
	uint32_t                                           Token;                                                    
};


struct UGroupSpotSceneComponent_SetGroupValid_Params
{
	bool                                               Valid;                                                    
};


struct UGroupSpotSceneComponent_IsValidGroup_Params
{
	bool                                               ReturnValue;                                              
};


struct UGroupSpotSceneComponent_FindWorldCompositionID_Params
{
	int                                                ReturnValue;                                              
};


struct UGroupSpotSceneComponent_DoPickUp_Params
{
};


struct UItemGroupSpotSceneComponent_SetGroupProperty_Params
{
	class UItemGeneratorComponent*                     Generator;                                                
	struct FSpotGroupProperty                          Property;                                                 
};


struct UItemGroupSpotSceneComponent_RepeatSpots_Params
{
};


struct UItemGroupSpotSceneComponent_RepeatSingleSpot_Params
{
	class UItemSpotSceneComponent*                     Spot;                                                     
};


struct UItemGroupSpotSceneComponent_RandomSpotByType_Params
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	TArray<class UItemSpotSceneComponent*>             AllSpots;                                                 
	struct FSpotTypeProperty                           Property;                                                 
};


struct UItemGroupSpotSceneComponent_RandomSingleSpot_Params
{
	TArray<class UItemSpotSceneComponent*>             Spots;                                                    
	struct FSpotTypeProperty                           Property;                                                 
};


struct UItemGroupSpotSceneComponent_RandomRepeatGenerateItemCD_Params
{
	struct FSpotGroupProperty                          GroupProperty;                                            
	float                                              ReturnValue;                                              
};


struct USpotSceneComponent_SetSpotValid_Params
{
	bool                                               Valid;                                                    
};


struct USpotSceneComponent_LineTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
	bool                                               bTraceComplex;                                            
	TArray<class AActor*>                              ActorsToIgnore;                                           
	struct FHitResult                                  OutHit;                                                   
	bool                                               bIgnoreSelf;                                              
	bool                                               ReturnValue;                                              
};


struct USpotSceneComponent_IsSpotValid_Params
{
	bool                                               ReturnValue;                                              
};


struct USpotSceneComponent_GetRandomCategory_Params
{
	TArray<struct FSpotWeight>                         SpotWeights;                                              
	struct FString                                     ReturnValue;                                              
};


struct USpotSceneComponent_GenerateSpot_Params
{
	bool                                               ReturnValue;                                              
};


struct USpotSceneComponent_GenerateActor_Params
{
	class UClass*                                      ActorClass;                                               
	struct FVector                                     ActorLocation;                                            
	struct FRotator                                    ActorRotator;                                             
	ESpawnActorCollisionHandlingMethod                 SpawnActorCollisionHandlingMethod;                        
	class AActor*                                      ReturnValue;                                              
};


struct UItemSpotSceneComponent_SetSpotProperty_Params
{
	int                                                CompositionID;                                            
	TEnumAsByte<ESpotGroupType>                        GroupType;                                                
	class UItemGeneratorComponent*                     Generator;                                                
	struct FSpotTypeProperty                           Property;                                                 
	class UGroupSpotSceneComponent*                    Component;                                                
	bool                                               RepeatGenerateItem;                                       
};


struct UItemSpotSceneComponent_RepeatSpotProperty_Params
{
	struct FSpotTypeProperty                           Property;                                                 
};


struct UItemSpotSceneComponent_GenerateSpot_Params
{
	bool                                               ReturnValue;                                              
};


struct UItemSpotSceneComponent_GenerateItems_Params
{
	TArray<struct FItemGenerateSpawnClass>             AllItemClass;                                             
};


struct UItemSpotSceneComponent_DoPickUp_Params
{
	struct FString                                     ItemValue;                                                
	struct FString                                     ItemCategory;                                             
};


struct UItemSpotSceneComponent_CountCacheItemValeCategory_Params
{
	int                                                ReturnValue;                                              
};


struct UItemSpotSceneComponent_ClearCacheItems_Params
{
};


struct AUAEHouseActor_RecordBreakWindowTlog_Params
{
	class APlayerController*                           EventInstigator;                                          
};


struct AUAEHouseActor_ProcessWindowCreateList_Params
{
};


struct AUAEHouseActor_OnRep_WindowList_Params
{
};


struct AUAEHouseActor_ClearWindowList_Params
{
};


struct AUAEHouseActor_BroadcastWindowRepDataUpdated_Params
{
	struct FUAEWindowRepData                           InRepData;                                                
};


struct UUAEGameplayStatics_GetGameBridge_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UGameplayDelegates*                          ReturnValue;                                              
};


struct AUAEProjectile_WorkAsBuffApplierEvent_Params
{
	struct FString                                     BuffName;                                                 
	class APawn*                                       BuffTarget;                                               
};


struct AUAEProjectile_TimeoutExplodeMulticast_CPP_Params
{
};


struct AUAEProjectile_TimeoutExplodeMulticast_BPEvent_Params
{
};


struct AUAEProjectile_SetActorInitialRelativeOffset_Params
{
	struct FVector                                     Offset;                                                   
	struct FVector                                     StandOffset;                                              
	struct FVector                                     CrouchOffset;                                             
	struct FVector                                     ProneOffset;                                              
	TEnumAsByte<ECharacterPoseType>                    PrevoisOwnerPose;                                         
};


struct AUAEProjectile_ServerNotifyGroundEventOnClient_Params
{
};


struct AUAEProjectile_OnRep_IsServerAlreadyExplodedCpp_Params
{
};


struct AUAEProjectile_OnRep_IsGroundedOnServerCpp_Params
{
};


struct AUAEProjectile_OnProjectileStopOnServer_Params
{
};


struct AUAEProjectile_OnProjectileStopOnClient_Params
{
};


struct AUAEProjectile_IsServerAlreadyExplodedCppNotify_Params
{
};


struct AUAEProjectile_IsOwnerAutomous_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEProjectile_GlassDetect_Params
{
	struct FVector                                     Start;                                                    
	struct FVector                                     End;                                                      
};


struct AUAEProjectile_GetRemainingEffectTime_Params
{
	float                                              ReturnValue;                                              
};


struct AUAEProjectile_ChangeGrenadeMarkerState_Params
{
	bool                                               bNewState;                                                
};


struct AUAEProjectile_CallExplode_Params
{
};


struct AUAEProjectile_BroadcastClientExplode_Params
{
};


struct AUAEPlayerController_UseingWeaponScheme_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_TestShowLongTimeNoOperation_Params
{
};


struct AUAEPlayerController_TestCastUIMsgWithPara_Params
{
	struct FString                                     strMsg;                                                   
	struct FString                                     module;                                                   
	int                                                TestID;                                                   
};


struct AUAEPlayerController_SyncDailyTaskStoreInfo_Params
{
	TArray<struct FDailyTaskStoreInfo>                 NewDailyTaskStoreList;                                    
};


struct AUAEPlayerController_SetUsedSimulationCVar_Params
{
	bool                                               Value;                                                    
};


struct AUAEPlayerController_SetTargetMsgReceiveDelegate_Params
{
	class UGameInstance*                               InGameInstance;                                           
	struct FScriptDelegate                             InDelegate;                                               
};


struct AUAEPlayerController_SetPanels_Params
{
	TArray<class UUAEUserWidget*>                      panels;                                                   
};


struct AUAEPlayerController_SetIsInPetSpectator_Params
{
	bool                                               inIsInPetSpectator;                                       
};


struct AUAEPlayerController_SetDSMsgReceiveDelegate_Params
{
	struct FScriptDelegate                             InDelegate;                                               
};


struct AUAEPlayerController_SetClientMsgReceiveDelegate_Params
{
	class UGameInstance*                               InGameInstance;                                           
	struct FScriptDelegate                             InDelegate;                                               
};


struct AUAEPlayerController_ServerUpdateLevelVisibility_Params
{
	struct FName                                       PackageName;                                              
	bool                                               bIsVisible;                                               
};


struct AUAEPlayerController_ServerSetVoiceId_Params
{
	int                                                VoiceID;                                                  
};


struct AUAEPlayerController_ServerRepListDispatch_Params
{
	class UObject*                                     InObject;                                                 
};


struct AUAEPlayerController_ServerRepComponentsDispatch_Params
{
	class UObject*                                     InObject;                                                 
};


struct AUAEPlayerController_ServerKickSelf_Params
{
};


struct AUAEPlayerController_ServerExitGame_Params
{
};


struct AUAEPlayerController_ServerAcknowledgeReconnection_2_Params
{
	uint32_t                                           Token;                                                    
};


struct AUAEPlayerController_SendNetRPCIndexMappingHashToServer_Params
{
	uint32_t                                           VersionHash;                                              
};


struct AUAEPlayerController_SendNetObjectPathNameMappingHashToServer_Params
{
	uint32_t                                           VersionHash;                                              
};


struct AUAEPlayerController_SendLuaDSToClient_Params
{
	int                                                ID;                                                       
	TArray<unsigned char>                              Content;                                                  
	bool                                               IsUnreliable;                                             
};


struct AUAEPlayerController_SendLuaClientToDS_Params
{
	int                                                ID;                                                       
	TArray<unsigned char>                              Content;                                                  
	bool                                               IsUnreliable;                                             
};


struct AUAEPlayerController_RPC_Server_SyncClientNetInfo_Params
{
	int                                                InLoss;                                                   
	int                                                OutLoss;                                                  
	int                                                InNetworkType;                                            
};


struct AUAEPlayerController_RPC_Server_ReportClientNetInfo_Params
{
	int                                                AvgPing;                                                  
	int                                                MaxPing;                                                  
	int                                                MinPing;                                                  
	int                                                LostPackRate;                                             
	int                                                AvgNoOutlier;                                             
	int                                                StdNoOutlier;                                             
	int                                                NumNoOutlier;                                             
	int                                                InLoss;                                                   
	int                                                OutLoss;                                                  
};


struct AUAEPlayerController_RPC_LuaDSToClient_NR_Params
{
	int                                                ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct AUAEPlayerController_RPC_LuaDSToClient_Params
{
	int                                                ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct AUAEPlayerController_RPC_LuaClientToDS_NR_Params
{
	int                                                ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct AUAEPlayerController_RPC_LuaClientToDS_Params
{
	int                                                ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct AUAEPlayerController_Respawn_Params
{
};


struct AUAEPlayerController_ResetUsedSimulationCVar_Params
{
};


struct AUAEPlayerController_ReleaseInGameUI_Params
{
};


struct AUAEPlayerController_ReceivePostLoginInit_Params
{
};


struct AUAEPlayerController_PrintStatistics_Params
{
};


struct AUAEPlayerController_PlayerStartIDReceived_Params
{
};


struct AUAEPlayerController_OnRep_WeaponAvatarDataList_Params
{
};


struct AUAEPlayerController_OnRep_UsingOodleNetworkDicPath_Params
{
};


struct AUAEPlayerController_OnRep_UsingNetObjectPathNameMappingCSV_Params
{
};


struct AUAEPlayerController_OnRep_UsedSimulation_Params
{
};


struct AUAEPlayerController_OnRep_PveLevel_Params
{
};


struct AUAEPlayerController_OnRep_PlayerOBInfoList_Params
{
};


struct AUAEPlayerController_OnRep_PlayerKey_Params
{
};


struct AUAEPlayerController_OnRep_LobbyWatchInfo_Params
{
};


struct AUAEPlayerController_OnRep_LastGameResultTime_Params
{
};


struct AUAEPlayerController_OnRep_IsSpectatingEnemy_Params
{
};


struct AUAEPlayerController_OnRep_IsSpectating_Params
{
};


struct AUAEPlayerController_OnRep_IsObserver_Params
{
};


struct AUAEPlayerController_OnRep_InitialWeaponSchemeInfo_Params
{
};


struct AUAEPlayerController_OnRep_InitialEquipmentAvatar_Params
{
};


struct AUAEPlayerController_OnRep_InitialEffectItemInfo_Params
{
};


struct AUAEPlayerController_OnRep_InitialConsumableAvatar_Params
{
};


struct AUAEPlayerController_OnRep_FriendObservers_Params
{
};


struct AUAEPlayerController_OnRep_CurWeaponSchemeIndex_Params
{
};


struct AUAEPlayerController_OnRep_bRoomOwner_Params
{
};


struct AUAEPlayerController_OnPlayerKeyRepDelegate__DelegateSignature_Params
{
};


struct AUAEPlayerController_OnNetRPCIndexMappingTableAsyncLoad_Params
{
};


struct AUAEPlayerController_OnNetObjectPathNameMappingTableAsyncLoad_Params
{
};


struct AUAEPlayerController_OnMemberVoice_Params
{
	int                                                Member;                                                   
	int                                                status;                                                   
	struct FString                                     UserInfo;                                                 
};


struct AUAEPlayerController_NotifyEnterBattle_Params
{
};


struct AUAEPlayerController_LuaDSToClient_Implementation_Params
{
	int                                                ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct AUAEPlayerController_LuaClientToDS_Implementation_Params
{
	int                                                ID;                                                       
	TArray<unsigned char>                              Content;                                                  
};


struct AUAEPlayerController_KickSelf_Params
{
};


struct AUAEPlayerController_IsTeammateSpectator_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsSpectatorOrDemoPlayer_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsSpectator_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsRoomMode_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsPureSpectator_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsObserver_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsInSpectatingEnemy_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsInSpectating_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsInPetSpectator_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsHawkEyeSpectator_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsFriendOrEnemySpectator_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsFriendObserver_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsFriendNotHawkEyeObserver_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsExited_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsDemoRecSpectator_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsDemoPlaySpectator_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsDemoPlayGlobalObserver_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_IsDeathSpectator_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_InitWithPlayerParams_Params
{
	struct FGameModePlayerParams                       Params;                                                   
};


struct AUAEPlayerController_InitWeaponAvatarItems_Params
{
};


struct AUAEPlayerController_InitVehicleMusicList_Params
{
};


struct AUAEPlayerController_InitVehicleAvatarSkinList_Params
{
};


struct AUAEPlayerController_InitVehicleAvatarList_Params
{
};


struct AUAEPlayerController_InitVehicleAdvanceAvatarList_Params
{
};


struct AUAEPlayerController_InitIngameUI_Params
{
};


struct AUAEPlayerController_InitGrenadeAvatarList_Params
{
	bool                                               ReInitial;                                                
};


struct AUAEPlayerController_HasAnySpectatorReplayFlag_Params
{
	uint32_t                                           InFlag;                                                   
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_GotoSpectating_Params
{
	int                                                PlayerID;                                                 
	int                                                ReturnValue;                                              
};


struct AUAEPlayerController_GetWeaponPandentReflect_Params
{
	int                                                wraponID;                                                 
	int                                                pendantID;                                                
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_GetWeaponAvatarItemId_Params
{
	int                                                ID;                                                       
	int                                                ReturnValue;                                              
};


struct AUAEPlayerController_GetVisibleLevelsLoadedName_Params
{
	TArray<struct FString>                             VisibleLevels;                                            
};


struct AUAEPlayerController_GetLobbyWatchedPlayerKeyAsString_Params
{
	struct FString                                     ReturnValue;                                              
};


struct AUAEPlayerController_GetEffectItemBySlot_Params
{
	unsigned char                                      SlotIndex;                                                
	struct FPlayerEffectItemInfo                       ReturnValue;                                              
};


struct AUAEPlayerController_GetDailyTaskStoreInfoByTaskId_Params
{
	int                                                TaskID;                                                   
	struct FDailyTaskStoreInfo                         ReturnValue;                                              
};


struct AUAEPlayerController_GetCurrentWeaponSchemeMainSlotItemId_Params
{
	int                                                ReturnValue;                                              
};


struct AUAEPlayerController_GetCurrentPetInfo_Params
{
	struct FGameModePlayerPetInfo                      ReturnValue;                                              
};


struct AUAEPlayerController_GetCurrentOBPlayerKey_Params
{
	uint32_t                                           ReturnValue;                                              
};


struct AUAEPlayerController_GetCurrentOBPlayerInfoIndex_Params
{
	int                                                ReturnValue;                                              
};


struct AUAEPlayerController_GenerateKillBroadcastItemID_Params
{
	int                                                ClothAvatarID;                                            
	int                                                PlayerUID;                                                
	int                                                ReturnValue;                                              
};


struct AUAEPlayerController_ForceNetReady_Params
{
};


struct AUAEPlayerController_ExitGame_Params
{
};


struct AUAEPlayerController_ExhaustCPU_Params
{
};


struct AUAEPlayerController_ExecDSCommand_Params
{
	struct FString                                     DSCommand;                                                
};


struct AUAEPlayerController_ExcuteIntRecord_Params
{
	struct FString                                     Key;                                                      
	int                                                Count;                                                    
};


struct AUAEPlayerController_ExcuteIntCounterRecord_Params
{
	struct FString                                     Key;                                                      
	int                                                Count;                                                    
};


struct AUAEPlayerController_EnableInGameUI_Params
{
};


struct AUAEPlayerController_DumpUAENetActors_Params
{
};


struct AUAEPlayerController_DumpRegions_Params
{
};


struct AUAEPlayerController_DumpNetActors_Params
{
};


struct AUAEPlayerController_DumpCharacters_Params
{
};


struct AUAEPlayerController_DumpAllUI_Params
{
};


struct AUAEPlayerController_DumpAllObjects_Params
{
};


struct AUAEPlayerController_DumpAllActors_Params
{
};


struct AUAEPlayerController_DoCrash_Params
{
};


struct AUAEPlayerController_DisableInGameUI_Params
{
};


struct AUAEPlayerController_DelayEnterBattleCheck_Params
{
};


struct AUAEPlayerController_DealWithPickUpFailed_Params
{
	struct FItemDefineID                               DefineID;                                                 
};


struct AUAEPlayerController_ClientShowTeammateEscapeNotice_Params
{
};


struct AUAEPlayerController_ClientSendOodleNetworkAckToServer_Params
{
};


struct AUAEPlayerController_ClientRPC_CastUIMsgWithStrings_Params
{
	struct FString                                     strMsg;                                                   
	struct FString                                     module;                                                   
	int                                                TipsID;                                                   
	struct FString                                     Param1;                                                   
	struct FString                                     Param2;                                                   
};


struct AUAEPlayerController_ClientRPC_CastUIMsgParams_Params
{
	struct FString                                     strMsg;                                                   
	struct FString                                     module;                                                   
	int                                                Type;                                                     
};


struct AUAEPlayerController_ClientRPC_CastUIMsg_Params
{
	struct FString                                     strMsg;                                                   
	struct FString                                     module;                                                   
};


struct AUAEPlayerController_ClientRepListReq_Params
{
	class UObject*                                     InObject;                                                 
};


struct AUAEPlayerController_ClientRepComponentsReq_Params
{
	class UObject*                                     InObject;                                                 
};


struct AUAEPlayerController_ClientInitPlayerOBInfoButton_Params
{
};


struct AUAEPlayerController_ClientBroadcastRespawnComplete_Params
{
};


struct AUAEPlayerController_ClientBroadcastReconnectionSuccessful_Params
{
};


struct AUAEPlayerController_ClientAcknowledgeReconnection_4_Params
{
	uint32_t                                           Token;                                                    
};


struct AUAEPlayerController_CheckPlayerOBInfoButtonInit_Params
{
};


struct AUAEPlayerController_CheckAcknowledgedPawn_Params
{
	class APawn*                                       InPawn;                                                   
	bool                                               ReturnValue;                                              
};


struct AUAEPlayerController_CastUIMsg_Params
{
	struct FString                                     strMsg;                                                   
	struct FString                                     module;                                                   
};


struct AUAEPlayerController_CanPickUpItem_Params
{
	struct FItemDefineID                               DefineID;                                                 
	EPickUpCheckResult                                 ReturnValue;                                              
};


struct AUAEPlayerController_BroadcastUIMessage_Params
{
	struct FString                                     MessageName;                                              
	int                                                TipsIDOrType;                                             
	struct FString                                     Param1;                                                   
	struct FString                                     Param2;                                                   
};


struct AUAEPlayerController_BroadcastRespawnComplete_Params
{
};


struct UCameraRecordSequenceHelper_WriteRotation_Params
{
	float                                              Time;                                                     
	struct FRotator                                    Rotation;                                                 
};


struct UCameraRecordSequenceHelper_WriteLocation_Params
{
	float                                              Time;                                                     
	struct FVector                                     Location;                                                 
};


struct UCameraRecordSequenceHelper_WriteFOV_Params
{
	float                                              Time;                                                     
	float                                              FOV;                                                      
};


struct UCameraRecordSequenceHelper_WriteFocalLength_Params
{
	float                                              Time;                                                     
	float                                              FocalLength;                                              
};


struct UCameraRecordSequenceHelper_SetDuration_Params
{
	float                                              Duration;                                                 
};


struct UCameraRecordSequenceHelper_MarkSequenceChanged_Params
{
};


struct UCameraRecordSequenceHelper_ForceTemplateRefresh_Params
{
};


struct UCameraRecordSequenceHelper_FixSpawnTrack_Params
{
};


struct UCameraRecordSequenceHelper_ExtendCameraCutToPlaybackRange_Params
{
};


struct UCameraRecordSequenceHelper_DumpSequenceStructure_Params
{
	struct FString                                     SequencePath;                                             
};


struct UCameraRecordSequenceHelper_DumpBlueprintSCS_Params
{
	struct FString                                     BlueprintPath;                                            
};


struct UCameraRecordSequenceHelper_CreateCameraRecordSessionFromSequence_Params
{
	class ULevelSequence*                              Sequence;                                                 
	class UCameraRecordSequenceHelper*                 ReturnValue;                                              
};


struct UCameraRecordSequenceHelper_CreateCameraRecordSession_Params
{
	struct FString                                     SequencePath;                                             
	class UCameraRecordSequenceHelper*                 ReturnValue;                                              
};


struct UCameraRecordSequenceHelper_ClearFrames_Params
{
};


struct UDynamicSpotContainerComponent_UseSerializeData_Params
{
};


struct UGeneratorActorAIInterface_RegisterAIPickupPoint_Params
{
	struct FVector                                     BuildingLoc;                                              
	struct FVector                                     SpotLoc;                                                  
	class AActor*                                      PickUpActor;                                              
};


struct UGeneratorActorInterface_SetExtendData_Params
{
	struct FString                                     Key;                                                      
	int                                                Value;                                                    
};


struct UGeneratorActorInterface_SetAttachedActor_Params
{
	class AActor*                                      AttachedActor;                                            
};


struct UGeneratorActorInterface_InitDataNew_Params
{
	int                                                ItemCount;                                                
	struct FString                                     Value;                                                    
	struct FString                                     Category;                                                 
	bool                                               RepeatGenerateItem;                                       
	int                                                SpotDataIndex;                                            
};


struct UGeneratorActorInterface_InitData_Params
{
	class UItemSpotSceneComponent*                     ItemSpotSceneComponent;                                   
	int                                                ItemCount;                                                
	struct FString                                     Value;                                                    
	struct FString                                     Category;                                                 
	bool                                               RepeatGenerateItem;                                       
};


struct UGeneratorActorInterface_GetItemId_Params
{
	int                                                ReturnValue;                                              
};


struct UGeneratorVehicleInterface_SetSafeSpawn_Params
{
	bool                                               ab_IsSafeSpawn;                                           
};


struct UGeneratorVehicleInterface_ServerDetachAllPlayerFromSeatByGenerator_Params
{
	bool                                               bMustExit;                                                
	bool                                               bApplyVehicleVelocity;                                    
};


struct UGeneratorVehicleInterface_InitVehicle_Params
{
	int                                                FuelPercent;                                              
	bool                                               bEngineOn;                                                
	bool                                               bInHouse;                                                 
};


struct UGeneratorVehicleInterface_CheckSpawnLocation_Params
{
	struct FVector                                     SpawnLocation;                                            
	float                                              MaxSpawnDistance;                                         
};


struct AGlobalConfigActor_Init_Params
{
};


struct UImplItemRegionInterface_GetRegion_Params
{
	struct FString                                     Tag;                                                      
	struct FItemRegionCircle                           ReturnValue;                                              
};


struct UItemConfigActorComponent_RegisterGroupSceneComponent_Params
{
	int                                                GroupType;                                                
	class USceneComponent*                             GroupSceneComponent;                                      
};


struct UItemConfigActorComponent_RandomItemSpawnClass_Params
{
	struct FString                                     ItemValue;                                                
	struct FString                                     ItemCategory;                                             
	TArray<struct FItemSpawnClass>                     ReturnValue;                                              
};


struct UItemConfigActorComponent_RandomGroupSceneComponents_Params
{
	int                                                GroupType;                                                
	int                                                Persent;                                                  
	TArray<class USceneComponent*>                     ReturnValue;                                              
};


struct UItemConfigActorComponent_RandomGroupSceneComponent_Params
{
	TArray<class USceneComponent*>                     AllGroups;                                                
	class USceneComponent*                             ReturnValue;                                              
};


struct UItemConfigActorComponent_LoadActorClass_Params
{
	struct FString                                     Path;                                                     
	class UClass*                                      ReturnValue;                                              
};


struct UItemConfigActorComponent_GetItemSpawnClass_Params
{
	struct FItemSpawnData                              Data;                                                     
	TArray<struct FItemSpawnClass>                     ReturnValue;                                              
};


struct AItemCountArea_IsInArea_Params
{
	struct FVector                                     Position;                                                 
	bool                                               ReturnValue;                                              
};


struct UItemGroupRepeatSpotComponent_Stop_Params
{
};


struct UItemGroupRepeatSpotComponent_SetPropertySpotAll_Params
{
};


struct UItemGroupRepeatSpotComponent_GetGameMode_Params
{
	class AUAEGameMode*                                ReturnValue;                                              
};


struct UItemGroupRepeatSpotComponent_GenerateSpotAll_Params
{
};


struct UItemGroupRepeatSpotComponent_ClearAllSpotItems_Params
{
};


struct ULuaBTDecoratorBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
	float                                              DeltaSeconds;                                             
};


struct ULuaBTDecoratorBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               
	float                                              DeltaSeconds;                                             
};


struct ULuaBTDecoratorBase_ReceiveObserverDeactivatedAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct ULuaBTDecoratorBase_ReceiveObserverDeactivated_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct ULuaBTDecoratorBase_ReceiveObserverActivatedAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct ULuaBTDecoratorBase_ReceiveObserverActivated_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct ULuaBTDecoratorBase_ReceiveExecutionStartAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct ULuaBTDecoratorBase_ReceiveExecutionStart_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct ULuaBTDecoratorBase_ReceiveExecutionFinishAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
	TEnumAsByte<EBTNodeResult>                         NodeResult;                                               
};


struct ULuaBTDecoratorBase_ReceiveExecutionFinish_Params
{
	class AActor*                                      OwnerActor;                                               
	TEnumAsByte<EBTNodeResult>                         NodeResult;                                               
};


struct ULuaBTDecoratorBase_PerformConditionCheckAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
	bool                                               ReturnValue;                                              
};


struct ULuaBTDecoratorBase_PerformConditionCheck_Params
{
	class AActor*                                      OwnerActor;                                               
	bool                                               ReturnValue;                                              
};


struct ULuaBTDecoratorBase_IsDecoratorObserverActive_Params
{
	bool                                               ReturnValue;                                              
};


struct ULuaBTDecoratorBase_IsDecoratorExecutionActive_Params
{
	bool                                               ReturnValue;                                              
};


struct ULuaBTNodeInterface_SetValueAsVector_Params
{
	struct FName                                       KeyName;                                                  
	struct FVector                                     VectorValue;                                              
};


struct ULuaBTNodeInterface_SetValueAsString_Params
{
	struct FName                                       KeyName;                                                  
	struct FString                                     StringValue;                                              
};


struct ULuaBTNodeInterface_SetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  
	struct FRotator                                    RotatorValue;                                             
};


struct ULuaBTNodeInterface_SetValueAsObject_Params
{
	struct FName                                       KeyName;                                                  
	class UObject*                                     ObjectValue;                                              
};


struct ULuaBTNodeInterface_SetValueAsName_Params
{
	struct FName                                       KeyName;                                                  
	struct FName                                       NameValue;                                                
};


struct ULuaBTNodeInterface_SetValueAsInt_Params
{
	struct FName                                       KeyName;                                                  
	int                                                IntValue;                                                 
};


struct ULuaBTNodeInterface_SetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                  
	float                                              FloatValue;                                               
};


struct ULuaBTNodeInterface_SetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                  
	unsigned char                                      EnumValue;                                                
};


struct ULuaBTNodeInterface_SetValueAsClass_Params
{
	struct FName                                       KeyName;                                                  
	class UClass*                                      ClassValue;                                               
};


struct ULuaBTNodeInterface_SetValueAsBool_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               BoolValue;                                                
};


struct ULuaBTNodeInterface_IsVectorValueSet_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct ULuaBTNodeInterface_GetValueAsVector_Params
{
	struct FName                                       KeyName;                                                  
	struct FVector                                     ReturnValue;                                              
};


struct ULuaBTNodeInterface_GetValueAsString_Params
{
	struct FName                                       KeyName;                                                  
	struct FString                                     ReturnValue;                                              
};


struct ULuaBTNodeInterface_GetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  
	struct FRotator                                    ReturnValue;                                              
};


struct ULuaBTNodeInterface_GetValueAsObject_Params
{
	struct FName                                       KeyName;                                                  
	class UObject*                                     ReturnValue;                                              
};


struct ULuaBTNodeInterface_GetValueAsName_Params
{
	struct FName                                       KeyName;                                                  
	struct FName                                       ReturnValue;                                              
};


struct ULuaBTNodeInterface_GetValueAsInt_Params
{
	struct FName                                       KeyName;                                                  
	int                                                ReturnValue;                                              
};


struct ULuaBTNodeInterface_GetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                  
	float                                              ReturnValue;                                              
};


struct ULuaBTNodeInterface_GetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                  
	unsigned char                                      ReturnValue;                                              
};


struct ULuaBTNodeInterface_GetValueAsClass_Params
{
	struct FName                                       KeyName;                                                  
	class UClass*                                      ReturnValue;                                              
};


struct ULuaBTNodeInterface_GetValueAsBool_Params
{
	struct FName                                       KeyName;                                                  
	bool                                               ReturnValue;                                              
};


struct ULuaBTNodeInterface_ClearValue_Params
{
	struct FName                                       KeyName;                                                  
};


struct ULuaBTServiceBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
	float                                              DeltaSeconds;                                             
};


struct ULuaBTServiceBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               
	float                                              DeltaSeconds;                                             
};


struct ULuaBTServiceBase_ReceiveSearchStartAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct ULuaBTServiceBase_ReceiveSearchStart_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct ULuaBTServiceBase_ReceiveDeactivationAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct ULuaBTServiceBase_ReceiveDeactivation_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct ULuaBTServiceBase_ReceiveActivationAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct ULuaBTServiceBase_ReceiveActivation_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct ULuaBTServiceBase_IsServiceActive_Params
{
	bool                                               ReturnValue;                                              
};


struct ULuaBTTaskBase_SetFinishOnMessageWithId_Params
{
	struct FName                                       MessageName;                                              
	int                                                RequestID;                                                
};


struct ULuaBTTaskBase_SetFinishOnMessage_Params
{
	struct FName                                       MessageName;                                              
};


struct ULuaBTTaskBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
	float                                              DeltaSeconds;                                             
};


struct ULuaBTTaskBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               
	float                                              DeltaSeconds;                                             
};


struct ULuaBTTaskBase_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct ULuaBTTaskBase_ReceiveExecute_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct ULuaBTTaskBase_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                          
	class APawn*                                       ControlledPawn;                                           
};


struct ULuaBTTaskBase_ReceiveAbort_Params
{
	class AActor*                                      OwnerActor;                                               
};


struct ULuaBTTaskBase_IsTaskExecuting_Params
{
	bool                                               ReturnValue;                                              
};


struct ULuaBTTaskBase_IsTaskAborting_Params
{
	bool                                               ReturnValue;                                              
};


struct ULuaBTTaskBase_FinishExecute_Params
{
	bool                                               bSuccess;                                                 
};


struct ULuaBTTaskBase_FinishAbort_Params
{
};


struct UMissionBoardComponent_OnRep_Config_Params
{
};


struct UMissionBoardComponent_GetUtcLeftSecondsByConfig_Params
{
	int                                                ReturnValue;                                              
};


struct ANetworkReportActor_RPC_Server_SyncClientPkgLossArrayInfo_Params
{
	TArray<unsigned char>                              InLoss;                                                   
	TArray<unsigned char>                              OutLoss;                                                  
};


struct ANetworkReportActor_ResetAllNetworkData_Params
{
};


struct UNewWeatherComponent_LuaInit_Params
{
};


struct AUAEAdvertisementActor_SetStaticMeshPath_Params
{
	struct FString                                     InMeshPath;                                               
};


struct AUAEAdvertisementActor_SetStaticMesh_Params
{
	class UStaticMesh*                                 InStaticMesh;                                             
};


struct AUAEAdvertisementActor_SetScale_Params
{
	struct FVector                                     InScale;                                                  
};


struct AUAEAdvertisementActor_SetId_Params
{
	int                                                InputID;                                                  
};


struct AUAEAdvertisementActor_SetCulDistance_Params
{
	float                                              CulDistance;                                              
};


struct AUAEAdvertisementActor_RequestHttpImageByUrl_Params
{
	struct FString                                     PicUrl;                                                   
};


struct AUAEAdvertisementActor_ReplaceTexture_Params
{
	class UTexture2D*                                  Texture;                                                  
};


struct AUAEAdvertisementActor_OnRequestImgSuccess_Params
{
	class UTexture2D*                                  Texture;                                                  
	struct FString                                     RequestedURL;                                             
};


struct AUAEAdvertisementActor_OnRep_MeshPath_Params
{
};


struct AUAEAdvertisementActor_OnRep_Id_Params
{
};


struct AUAEAdvertisementActor_OnClientLoadMesh_Params
{
};


struct AUAEAdvertisementActor_InitImageDownloadUtil_Params
{
};


struct ARegionableAdvertisementActor_ReceivedPlayerActiveRegionsChanged_Params
{
	bool                                               bEnter;                                                   
};


struct AUAEBuffApplierActor_GetTheInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              
};


struct UUAEChaCustomAnimListComponent_SetCharacterAnimOverrideType_Params
{
	int                                                AnimOverrideType;                                         
};


struct UUAEChaCustomAnimListComponent_ReleaseCustomAnimAssets_Params
{
};


struct UUAEChaCustomAnimListComponent_HasAnimAsyncLoadingFinished_Params
{
	bool                                               ReturnValue;                                              
};


struct UUAEChaCustomAnimListComponent_GetOwnerName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UUAEChaCustomAnimListComponent_GetCharacterCustomAnimInstance_Params
{
	struct FString                                     AnimName;                                                 
	class UClass*                                      ReturnValue;                                              
};


struct UUAEChaCustomAnimListComponent_GetCharacterCustomAnim_Params
{
	struct FString                                     AnimName;                                                 
	class UAnimationAsset*                             ReturnValue;                                              
};


struct UUAEChaCustomAnimListComponent_GetBlendSpace1D_Params
{
	struct FString                                     AnimAssetName;                                            
	class UBlendSpace1D*                               ReturnValue;                                              
};


struct UUAEChaCustomAnimListComponent_GetBlendSpace_Params
{
	struct FString                                     AnimAssetName;                                            
	class UBlendSpace*                                 ReturnValue;                                              
};


struct UUAEChaCustomAnimListComponent_GetAnimSequence_Params
{
	struct FString                                     AnimAssetName;                                            
	class UAnimSequence*                               ReturnValue;                                              
};


struct UUAEChaCustomAnimListComponent_GetAnimMontage_Params
{
	struct FString                                     AnimAssetName;                                            
	class UAnimMontage*                                ReturnValue;                                              
};


struct UUAEChaCustomAnimListComponent_GetAimOffsetBlendSpace_Params
{
	struct FString                                     AnimAssetName;                                            
	class UAimOffsetBlendSpace*                        ReturnValue;                                              
};


struct UUAEChaCustomAnimListComponent_CallRequestLoadAnimAssets_Params
{
};


struct UUAEChaParachuteAnimListComponent_ReleaseParachuteAnimAssets_Params
{
};


struct UUAEChaParachuteAnimListComponent_OnParachuteAnimAsyncLoadingFinished_Params
{
	struct FString                                     AnimLoaded;                                               
};


struct UUAEChaParachuteAnimListComponent_OnAnimListAsyncLoadingFinished_Params
{
};


struct UUAEChaParachuteAnimListComponent_HasAnimAsyncLoadingFinished_Params
{
	bool                                               ReturnValue;                                              
};


struct UUAEChaParachuteAnimListComponent_HandleAsyncLoadingFinishedEvent_Params
{
};


struct UUAEChaParachuteAnimListComponent_GetOwnerName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UUAEChaParachuteAnimListComponent_GetCharacterParachuteAnim_Params
{
	TEnumAsByte<ECharacterParachuteAnimType>           AnimType;                                                 
	int                                                AnimOverrideType;                                         
	class UAnimationAsset*                             ReturnValue;                                              
};


struct UUAECharacterAnimListComponent_SetAnimListMapValueData_Params
{
	struct FAnimListMapValueData                       AnimListValue;                                            
};


struct UUAECharacterAnimListComponent_OnPreLoadingFinished_Params
{
	struct FAsyncLoadCharAnimParams                    LoadingParam;                                             
	bool                                               ReturnValue;                                              
};


struct UUAECharacterAnimListComponent_OnAsyncLoadingFinishedNew2_Params
{
	struct FAsyncLoadCharAnimParams                    LoadingParam;                                             
};


struct UUAECharacterAnimListComponent_OnAsyncLoadingFinishedNew_Params
{
	struct FAsyncLoadCharAnimParams                    LoadingParam;                                             
};


struct UUAECharacterAnimListComponent_InitAnimListMap_Params
{
	bool                                               IsFPP;                                                    
};


struct UUAECharacterAnimListComponent_GetCharacterShovelAnim_Params
{
	TArray<struct FPlayerAnimData>                     ReturnValue;                                              
};


struct UUAECharacterAnimListComponent_GetCharacterJumpAnim_Params
{
	TEnumAsByte<ECharacterJumpType>                    JumpType;                                                 
	TArray<struct FPlayerAnimData>                     ReturnValue;                                              
};


struct UUAECharacterAnimListComponent_GetAnimationAsset_Params
{
	class UAnimationAsset*                             ReturnValue;                                              
};


struct UUAEChaVehAnimListComponent_SetVehCharAnimDataList_Params
{
	TArray<struct FVehCharAnimData>                    InVehCharAnimDataList;                                    
};


struct UUAEChaVehAnimListComponent_OnIdleAnimListAsyncLoadingFinished_Params
{
};


struct UUAEChaVehAnimListComponent_OnAnimListAsyncLoadingFinished_Params
{
	struct FAsyncLoadCharVehAnimParams                 LoadingParam;                                             
};


struct UUAEChaVehAnimListComponent_ChangeAnimData_Params
{
	TArray<struct FVehCharAnimData>                    InAnimData;                                               
};


struct AUAELevelSequenceActor_UpdateTrackBindingData_Params
{
};


struct AUAELevelSequenceActor_UpdateSequence_Params
{
	struct FString                                     LevelSequencePath;                                        
};


struct AUAELevelSequenceActor_UpdatePlayback_Params
{
	bool                                               bRestoreState;                                            
	bool                                               bDisableMovementInput;                                    
	bool                                               bDisableLookAtInput;                                      
	bool                                               bHidePlayer;                                              
};


struct AUAELevelSequenceActor_UpdateInstanceData_Params
{
	struct FVector                                     OffsetVector;                                             
	struct FRotator                                    OffsetRotation;                                           
};


struct AUAELevelSequenceActor_StopMontageParticle_Params
{
	struct FName                                       SlotName;                                                 
};


struct AUAELevelSequenceActor_Stop_Params
{
};


struct AUAELevelSequenceActor_SetUseSelfTransformOrigin_Params
{
	bool                                               bInUse;                                                   
};


struct AUAELevelSequenceActor_SetTrackBindingInfo_Params
{
	TMap<struct FString, struct FString>               TrackBindingInfo;                                         
};


struct AUAELevelSequenceActor_SetTrackBindingData_Params
{
	TArray<struct FSeqActorBindingData>                InTrackBindingData;                                       
};


struct AUAELevelSequenceActor_SetNetSyncBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                  
	TArray<class AActor*>                              Actors;                                                   
	bool                                               bAllowBindingsFromAsset;                                  
};


struct AUAELevelSequenceActor_SetLevelSequenceAssetPath_Params
{
	struct FString                                     InLevelSequenceAssetPath;                                 
};


struct AUAELevelSequenceActor_SetDisabledTrackNames_Params
{
	TArray<struct FString>                             InDisabledTrackNames;                                     
};


struct AUAELevelSequenceActor_ResetNetSyncBindings_Params
{
};


struct AUAELevelSequenceActor_ResetNetSyncBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                  
};


struct AUAELevelSequenceActor_RemoveNetSyncBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                  
	class AActor*                                      Actor;                                                    
};


struct AUAELevelSequenceActor_ReleaseCameraCutTrack_Params
{
};


struct AUAELevelSequenceActor_ReceiveOnStop_Params
{
};


struct AUAELevelSequenceActor_ReceiveOnPreStop_Params
{
};


struct AUAELevelSequenceActor_ReceiveOnPlayReverse_Params
{
};


struct AUAELevelSequenceActor_ReceiveOnPlay_Params
{
};


struct AUAELevelSequenceActor_ReceiveOnPause_Params
{
};


struct AUAELevelSequenceActor_ReceiveOnObjectSpawned_Params
{
	class UObject*                                     InObject;                                                 
	struct FGuid                                       InBindingID;                                              
};


struct AUAELevelSequenceActor_ReceiveOnFinished_Params
{
};


struct AUAELevelSequenceActor_Play_Params
{
	float                                              InPlaytime;                                               
};


struct AUAELevelSequenceActor_OnSequencePreStop_Params
{
};


struct AUAELevelSequenceActor_OnSequenceFinished_Params
{
};


struct AUAELevelSequenceActor_OnRep_NetSyncBindingData_Params
{
};


struct AUAELevelSequenceActor_OnRep_LevelSequenceAssetPath_Params
{
};


struct AUAELevelSequenceActor_OnRep_DisabledTrackNames_Params
{
};


struct AUAELevelSequenceActor_OnRep_bUseSelfTransformOrigin_Params
{
};


struct AUAELevelSequenceActor_OnRep_AuthorityStartPlayTime_Params
{
};


struct AUAELevelSequenceActor_OnObjectSpawnedEvent_Params
{
	class UObject*                                     InObject;                                                 
	struct FGuid                                       InBindingID;                                              
	struct FMovieSceneSequenceID                       InSequenceID;                                             
};


struct AUAELevelSequenceActor_HasActiveSequenceActor_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAELevelSequenceActor_HandleOwnerReady_Params
{
};


struct AUAELevelSequenceActor_GoToEndAndStop_Params
{
};


struct AUAELevelSequenceActor_GetPossessableOrSpawnableByName_Params
{
	struct FString                                     NameKeyString;                                            
	struct FMovieSceneObjectBindingID                  ReturnValue;                                              
};


struct AUAELevelSequenceActor_GetFirstPossessableTrack_Params
{
	struct FMovieSceneObjectBindingID                  ReturnValue;                                              
};


struct AUAELevelSequenceActor_CreateLevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       
	class ULevelSequence*                              InLevelSequence;                                          
	struct FMovieSceneSequencePlaybackSettings         Settings;                                                 
	class AUAELevelSequenceActor*                      OutActor;                                                 
	class ULevelSequencePlayer*                        ReturnValue;                                              
};


struct AUAELevelSequenceActor_CheckStartPlayValid_Params
{
	bool                                               ReturnValue;                                              
};


struct AUAELevelSequenceActor_AddNetSyncBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                  
	class AActor*                                      Actor;                                                    
	bool                                               bAllowBindingsFromAsset;                                  
};


struct UUAELevelSequencePlayer_EnablePrimitiveComponentTracking_Params
{
};


struct UUAELevelSequencePlayer_DisablePrimitiveComponentTracking_Params
{
};


struct UAELobbyCharAnimListComp_OnAsyncLoadingFinished_Params
{
	struct FLobbyAsyncLoadCharAnimParams               LoadingParam;                                             
};


struct UAELobbyCharAnimListComp_InitPendingList_Params
{
	TArray<struct FLobbyCharacterWeaponAnimData>       animEditList;                                             
	TArray<struct FSoftObjectPath>                     PendingList;                                              
};


struct UAELobbyCharAnimListComp_GetCharacterAnim_Params
{
	TEnumAsByte<ELobbyCharacterPosIndex>               PosIdx;                                                   
	TEnumAsByte<ELobbyCharacterAnimType>               GenderType;                                               
	int                                                WeaponAnimType;                                           
	TEnumAsByte<ECharacterShowSceneType>               sceneType;                                                
	class UAnimationAsset*                             ReturnValue;                                              
};


struct UAELobbyCharAnimListComp_BuildAnimMap_Params
{
	TArray<struct FLobbyCharacterWeaponAnimData>       AnimList;                                                 
	TEnumAsByte<ECharacterShowSceneType>               sceneType;                                                
};


struct UUAESpawnActorComponent_UAESpawnActor_Params
{
	struct FUAESpawnActorParam                         Param;                                                    
	class AActor*                                      ReturnValue;                                              
};


struct UUAESpawnActorComponent_PrepareSpawnData_Params
{
	int                                                TemplateID;                                               
	class UClass*                                      ReturnValue;                                              
};


struct UUAESpawnActorComponent_InitializeActor_Params
{
	class AActor*                                      InActor;                                                  
	int                                                TemplateID;                                               
};


struct UUAEWindowComponent_NotifyServerBroken_Params
{
	class APlayerController*                           Instigator;                                               
};


struct UUAEWindowComponent_NotifyRepDataUpdated_Params
{
	bool                                               bInitial;                                                 
	bool                                               bLocal;                                                   
};


struct UUAEWindowComponent_LocalHandleWindowBrokenBP_Params
{
	bool                                               bInitial;                                                 
	bool                                               bLocal;                                                   
};


struct UUAEWindowComponent_LocalHandleWindowBroken_Params
{
	bool                                               bInitial;                                                 
	bool                                               bLocal;                                                   
};


struct UUAEWindowComponent_HandleBroken_Params
{
	class APlayerController*                           Instigator;                                               
	bool                                               bLocal;                                                   
};


struct UUAEWindowComponent_GetRepData_Params
{
	struct FUAEWindowRepData                           ReturnValue;                                              
};


struct UVehicleConfigActorComponent_LoadActorClass_Params
{
	struct FString                                     Path;                                                     
	class UClass*                                      ReturnValue;                                              
};


struct UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleSpotStatisticsFromSpotFile_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleSpotStatisticsDatas_V15_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleSpotStatisticsDatas_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleClassStatisticsDatas_V15_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_WriteVehicleClassStatisticsDatas_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatasToLog_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatas_V15_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_WriteAllVehicleStatisticsDatas_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_SetAllVehicleNumRate_Params
{
	TMap<struct FString, float>                        Rates;                                                    
};


struct UVehicleAndTreasureBoxGeneratorComponent_ResumeGenerate_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_RegisterVehicleGenerateSpawnData_Params
{
	struct FVehicleGenerateSpawnData                   Data;                                                     
};


struct UVehicleAndTreasureBoxGeneratorComponent_RegisterSpotFromSingleFile_Params
{
	struct FString                                     SpotFilePath;                                             
};


struct UVehicleAndTreasureBoxGeneratorComponent_RegisterGroupSpotComponent_Params
{
	class UGroupSpotSceneComponent*                    GroupSpotComponent;                                       
};


struct UVehicleAndTreasureBoxGeneratorComponent_RandomTreasureBoxSpotsByType_Params
{
	struct FTreasureBoxSpotProperty                    Property;                                                 
	struct FVehicleSpotComponentArray                  Spots;                                                    
};


struct UVehicleAndTreasureBoxGeneratorComponent_RandomTreasureBoxSingleSpots_Params
{
	TArray<class UVehicleSpotSceneComponent*>          AllSpots;                                                 
	struct FTreasureBoxSpotProperty                    Property;                                                 
};


struct UVehicleAndTreasureBoxGeneratorComponent_RandomSpotsByType_Params
{
	struct FVehicleSpotProperty                        Property;                                                 
	struct FVehicleSpotComponentArray                  Spots;                                                    
};


struct UVehicleAndTreasureBoxGeneratorComponent_RandomSingleSpots_Params
{
	TArray<class UVehicleSpotSceneComponent*>          AllSpots;                                                 
	struct FVehicleSpotProperty                        Property;                                                 
};


struct UVehicleAndTreasureBoxGeneratorComponent_RandomGroups_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_PauseGenerate_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_LoadVehicleGenerateTable_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_GMGenerateAllVehicleSpot_Params
{
	struct FString                                     VehiclePath;                                              
	bool                                               ReturnValue;                                              
};


struct UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfoWithCategory_Params
{
	struct FVehicleSpotProperty                        SpotProperty;                                             
	struct FString                                     Category;                                                 
	struct FVehicleGenerateRandomInfo                  ReturnValue;                                              
};


struct UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfoBySpotType_Params
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	struct FString                                     InCategory;                                               
	struct FVehicleGenerateRandomInfo                  ReturnValue;                                              
};


struct UVehicleAndTreasureBoxGeneratorComponent_GetVehicleSpotRandomInfo_Params
{
	struct FVehicleSpotProperty                        SpotProperty;                                             
	struct FString                                     InCategory;                                               
	struct FVehicleGenerateRandomInfo                  ReturnValue;                                              
};


struct UVehicleAndTreasureBoxGeneratorComponent_GetTreasureBoxSpotRandomInfo_Params
{
	struct FTreasureBoxSpotProperty                    SpotProperty;                                             
	struct FVehicleGenerateRandomInfo                  ReturnValue;                                              
};


struct UVehicleAndTreasureBoxGeneratorComponent_GetTraceLevelName_Params
{
	struct FString                                     SpotFileName;                                             
	int16_t                                            LevelIndex;                                               
	struct FString                                     ReturnValue;                                              
};


struct UVehicleAndTreasureBoxGeneratorComponent_GetRandomVehicleClass_Params
{
	struct FString                                     Category;                                                 
	struct FVehicleGenerateSpawnData                   ReturnValue;                                              
};


struct UVehicleAndTreasureBoxGeneratorComponent_GetRandomCategory_Params
{
	TArray<struct FSpotWeight>                         SpotWeights;                                              
	struct FString                                     ReturnValue;                                              
};


struct UVehicleAndTreasureBoxGeneratorComponent_GetAlreadyGeneratedVehicleNum_Params
{
	int                                                ReturnValue;                                              
};


struct UVehicleAndTreasureBoxGeneratorComponent_GenerateSpotOnTick_Params
{
	float                                              DeltaTime;                                                
};


struct UVehicleAndTreasureBoxGeneratorComponent_EndGenerate_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_EnableRemovableMode_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_DynamicSpawnVehicleBySpotId_Params
{
	int                                                ID;                                                       
	struct FString                                     Category;                                                 
	bool                                               ReturnValue;                                              
};


struct UVehicleAndTreasureBoxGeneratorComponent_DeleteGroups_Params
{
};


struct UVehicleAndTreasureBoxGeneratorComponent_CanDynamicSpawnVehicle_Params
{
	struct FVector                                     SpawnLocation;                                            
	struct FVector                                     TestLocationOffset;                                       
	struct FVector                                     TestBoxSize;                                              
	bool                                               ReturnValue;                                              
};


struct UVehicleAndTreasureBoxGeneratorComponent_AddVehicleSpotCount_Params
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	struct FString                                     Path;                                                     
	float                                              LocationX;                                                
	float                                              LocationY;                                                
	float                                              LocationZ;                                                
};


struct UVehicleAndTreasureBoxGeneratorComponent_AddVehicleClassCount_Params
{
	struct FString                                     Path;                                                     
	bool                                               IsValid;                                                  
	int                                                Count;                                                    
};


struct UVehicleAndTreasureBoxGeneratorComponent_AddIgnoreClassPath_Params
{
	TArray<struct FString>                             IgnoreItemClassList;                                      
};


struct UVehicleGeneratorComponent_WriteVehicleSpotStatisticsDatas_Params
{
};


struct UVehicleGeneratorComponent_WriteVehicleClassStatisticsDatas_Params
{
};


struct UVehicleGeneratorComponent_WriteAllVehicleStatisticsDatas_Params
{
};


struct UVehicleGeneratorComponent_RegisterVehicleGenerateSpawnData_Params
{
	struct FVehicleGenerateSpawnData                   Data;                                                     
};


struct UVehicleGeneratorComponent_RegisterGroupSpotComponent_Params
{
	class UGroupSpotSceneComponent*                    GroupSpotComponent;                                       
};


struct UVehicleGeneratorComponent_RandomSpotsByType_Params
{
	struct FVehicleSpotProperty                        Property;                                                 
	struct FVehicleSpotComponentArray                  Spots;                                                    
};


struct UVehicleGeneratorComponent_RandomSingleSpots_Params
{
	TArray<class UVehicleSpotSceneComponent*>          AllSpots;                                                 
	struct FVehicleSpotProperty                        Property;                                                 
};


struct UVehicleGeneratorComponent_RandomGroups_Params
{
};


struct UVehicleGeneratorComponent_LoadVehicleGenerateTable_Params
{
};


struct UVehicleGeneratorComponent_GetVehicleSpotRandomInfoBySpotType_Params
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	struct FVehicleGenerateRandomInfo                  ReturnValue;                                              
};


struct UVehicleGeneratorComponent_GetVehicleSpotRandomInfo_Params
{
	struct FVehicleSpotProperty                        SpotProperty;                                             
	struct FVehicleGenerateRandomInfo                  ReturnValue;                                              
};


struct UVehicleGeneratorComponent_GetRandomVehicleClass_Params
{
	struct FString                                     Category;                                                 
	struct FVehicleGenerateSpawnData                   ReturnValue;                                              
};


struct UVehicleGeneratorComponent_GetRandomCategory_Params
{
	TArray<struct FSpotWeight>                         SpotWeights;                                              
	struct FString                                     ReturnValue;                                              
};


struct UVehicleGeneratorComponent_GenerateSpotOnTick_Params
{
	float                                              DeltaTime;                                                
};


struct UVehicleGeneratorComponent_DeleteGroups_Params
{
};


struct UVehicleGeneratorComponent_AddVehicleSpotCount_Params
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 
	struct FString                                     Path;                                                     
	float                                              LocationX;                                                
	float                                              LocationY;                                                
	float                                              LocationZ;                                                
};


struct UVehicleGeneratorComponent_AddVehicleClassCount_Params
{
	struct FString                                     Path;                                                     
	bool                                               IsValid;                                                  
	int                                                Count;                                                    
};


struct UVehicleSpotObject_OnVehicleGenerateEnd_Params
{
};


struct UVehicleSpotObject_OnTraceLevelShown_Params
{
};


struct UVehicleSpotSceneComponent_SetSpotRandomInfo_Params
{
	struct FVehicleGenerateRandomInfo                  RandomInfo;                                               
};


struct UVehicleSpotSceneComponent_GenerateSpot_Params
{
	bool                                               ReturnValue;                                              
};

}

