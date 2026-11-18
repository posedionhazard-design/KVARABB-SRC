#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UActorClickPickerWidget_SetPickerEnabled_Params
{
	bool                                               bEnable;                                                  
};


struct UActorClickPickerWidget_SetOwnerTab_Params
{
	class UActorInspectorTab*                          InOwnerTab;                                               
};


struct UActorClickPickerWidget_IsPickerEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UActorPropertyMonitorWidget_SetTargetObject_Params
{
	class UObject*                                     InObject;                                                 
};


struct UActorPropertyMonitorWidget_SetTargetActor_Params
{
	class AActor*                                      InActor;                                                  
};


struct UActorPropertyMonitorWidget_SetPropertyNames_Params
{
	TArray<struct FString>                             PropertyNames;                                            
};


struct UActorPropertyMonitorWidget_SearchProperties_Params
{
	struct FString                                     SearchKeyword;                                            
};


struct UActorPropertyMonitorWidget_RefreshPropertyValues_Params
{
};


struct UActorPropertyMonitorWidget_OnSearchTextChanged_Params
{
	struct FText                                       Text;                                                     
};


struct UActorPropertyMonitorWidget_OnScaleChanged_Params
{
	float                                              Value;                                                    
};


struct UActorPropertyMonitorWidget_OnPropertyValueCommittedInternal_Params
{
	struct FText                                       Text;                                                     
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             
};


struct UActorPropertyMonitorWidget_OnPropertyValueCommitted_Params
{
	struct FText                                       Text;                                                     
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             
	struct FString                                     PropertyName;                                             
};


struct UActorPropertyMonitorWidget_OnPropertyNameButtonClicked_Params
{
};


struct UActorPropertyMonitorWidget_OnOpacityChanged_Params
{
	float                                              Value;                                                    
};


struct UActorPropertyMonitorWidget_OnDragButtonReleased_Params
{
};


struct UActorPropertyMonitorWidget_OnDragButtonPressed_Params
{
};


struct UActorPropertyMonitorWidget_OnComponentSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            
};


struct UActorPropertyMonitorWidget_OnClickListenerButtonClicked_Params
{
};


struct UActorPropertyMonitorWidget_OnAttachedActorSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            
};


struct UCloudGMHandle_InitCloudGM_Params
{
};


struct UCloudGMHandle_DestroyCloudGM_Params
{
};


struct UImGuiFeatureWidget_SetFeatureVisible_Params
{
	bool                                               bVisible;                                                 
};


struct UImGuiFeatureWidget_SetFeatureEnabled_Params
{
	bool                                               bEnabled;                                                 
};


struct UImGuiFeatureWidget_IsFeatureVisible_Params
{
	bool                                               ReturnValue;                                              
};


struct UImGuiFeatureWidget_IsFeatureEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UImGuiFeatureWidget_GetOwnerWindow_Params
{
	class AImGuiWindowBase*                            ReturnValue;                                              
};


struct UImGuiFeatureWidget_GetOwnerTab_Params
{
	class UImGuiTabBase*                               ReturnValue;                                              
};


struct UImGuiFeatureWidget_GetOwner_Params
{
	class UObject*                                     ReturnValue;                                              
};


struct UImGuiFeatureWidget_GetFeatureName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UImGuiFeatureWidget_GetFeatureID_Params
{
	struct FName                                       ReturnValue;                                              
};


struct UDebugNameDisplayFeature_AddExcludedActorClass_Params
{
	class UClass*                                      ActorClass;                                               
};


struct UGMCheatAI_TeleportAIToLoc_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UGMCheatAI_SpawnAITeam_Params
{
	int                                                Num;                                                      
	int                                                AITeamID;                                                 
	unsigned char                                      Difficulty;                                               
};


struct UGMCheatAI_SpawnAIPosi_Params
{
	int                                                ID;                                                       
	int                                                AITeamID;                                                 
	float                                              PosiX;                                                    
	float                                              PosiY;                                                    
	float                                              PosiZ;                                                    
};


struct UGMCheatAI_SpawnAI_Params
{
	int                                                Num;                                                      
	bool                                               bSpawnAll;                                                
};


struct UGMCheatAI_RecordReviveTowerInDSReplay_Params
{
};


struct UGMCheatAI_OpenAIDebugInspector_Params
{
};


struct UGMCheatAI_MoveToAIWithClassName_Params
{
	struct FString                                     AIClassName;                                              
	float                                              XOffset;                                                  
	float                                              YOffset;                                                  
	float                                              ZOffset;                                                  
};


struct UGMCheatAI_MoveToAIByDropItem_Params
{
	int                                                ItemId;                                                   
};


struct UGMCheatAI_MoveToAI_Params
{
};


struct UGMCheatAI_MobAIIgnorePlayers_Params
{
};


struct UGMCheatAI_LogAIItemCount_Params
{
	int                                                ItemId;                                                   
	float                                              Distance;                                                 
};


struct UGMCheatAI_FindAIDropItem_Params
{
	int                                                ItemId;                                                   
};


struct UGMCheatAI_ChangeAIBehaviorTree_Params
{
	int                                                TreeIndex;                                                
};


struct UGMCheatAI_AddAIItem_Params
{
	int                                                ID;                                                       
	int                                                Count;                                                    
	float                                              Distance;                                                 
};


struct UGMCheatAnimation_TestAnimation_Params
{
	int                                                Param1;                                                   
	bool                                               Param2;                                                   
};


struct UGMCheatAnimation_DumpCharacterAnimBPVars_Params
{
};


struct UGMCheatAvatar_UseLocalWeaponDIYData_Params
{
	bool                                               bFlag;                                                    
};


struct UGMCheatAvatar_UseLocalVehicleAvatar_Params
{
};


struct UGMCheatAvatar_SetWeaponPendantShow_Params
{
	bool                                               bShow;                                                    
};


struct UGMCheatAvatar_SetVehicleAvatar_Params
{
	int                                                VehicleShapeType;                                         
	int                                                VehicleSkin;                                              
};


struct UGMCheatAvatar_SetPlayerTeamBodyInstMask_Params
{
	int                                                Mask;                                                     
};


struct UGMCheatAvatar_SetPlayerBodyInstMask_Params
{
	int                                                Mask;                                                     
};


struct UGMCheatAvatar_SetGrenadeAvatar_Params
{
	int                                                SubType;                                                  
	int                                                EquipmentSkin;                                            
};


struct UGMCheatAvatar_SetEquipmentAvatar_Params
{
	int                                                EquipmentAvatarType;                                      
	int                                                EquipmentSkin;                                            
};


struct UGMCheatAvatar_SetEnableWingAvatar_Params
{
	bool                                               Val;                                                      
};


struct UGMCheatAvatar_SetDownloadInBattle_Params
{
	bool                                               bEnable;                                                  
};


struct UGMCheatAvatar_SetAvatarDownloadInBattle_Params
{
	bool                                               bEnableDownload;                                          
};


struct UGMCheatAvatar_PrintMainCharAllAvatar_Params
{
};


struct UGMCheatAvatar_PrintAllStaticBufferSize_Params
{
};


struct UGMCheatAvatar_DeleteVehicleAdvanceAvatar_Style_Params
{
	int                                                VehicleSkin;                                              
	int                                                VehicleStyle;                                             
};


struct UGMCheatAvatar_DeleteVehicleAdvanceAvatar_Params
{
	int                                                VehicleSkin;                                              
	int                                                ModelID;                                                  
};


struct UGMCheatAvatar_DebugWorldPlayerAvatarInfo_Params
{
};


struct UGMCheatAvatar_DebugChangeWearIndex_Params
{
	int                                                Index;                                                    
};


struct UGMCheatAvatar_ClearItemPathNotExistlist_Params
{
};


struct UGMCheatAvatar_ClearItemHandleNotExistlist_Params
{
};


struct UGMCheatAvatar_ClearCharacterAvatarHandlePool_Params
{
	bool                                               bSelf;                                                    
};


struct UGMCheatAvatar_ChangeBattleAvatar_Params
{
	int                                                HeadAvatarID;                                             
	int                                                HairAvatarID;                                             
	int                                                InGender;                                                 
	int                                                PutOffAvatar;                                             
};


struct UGMCheatAvatar_AddWeaponPendantItem_Params
{
	int                                                WeaponId;                                                 
	int                                                pendantID;                                                
};


struct UGMCheatAvatar_AddWeaponDIYPlan_Params
{
	int                                                AvatarID;                                                 
	int                                                DIYPlanID;                                                
};


struct UGMCheatAvatar_AddWeaponAvatar_Params
{
	int                                                WeaponSkin;                                               
};


struct UGMCheatAvatar_AddWeaponAttachmentAvatarSimple_Params
{
	int                                                WeaponId;                                                 
	int                                                WeaponAttachmentSkin;                                     
};


struct UGMCheatAvatar_AddWeaponAttachmentAvatar_Params
{
	int                                                WeaponId;                                                 
	int                                                WeaponAttachmentSkin;                                     
};


struct UGMCheatAvatar_AddVehicleAvatar_Params
{
	int                                                VehicleSkin;                                              
};


struct UGMCheatAvatar_AddVehicleAdvanceAvatar_Style_Params
{
	int                                                VehicleSkin;                                              
	int                                                VehicleStyle;                                             
};


struct UGMCheatAvatar_AddVehicleAdvanceAvatar_Params
{
	int                                                VehicleSkin;                                              
	int                                                ModelID;                                                  
	int                                                ColorID;                                                  
	int                                                PatternID;                                                
	int                                                ParticleID;                                               
};


struct UGMCheatAvatar_AddItemPathNotExistlist_Params
{
	int                                                ItemId;                                                   
};


struct UGMCheatAvatar_AddItemHandleNotExistlist_Params
{
	int                                                ItemId;                                                   
};


struct UGMCheatBackpack_UseItem_Params
{
	int                                                ID;                                                       
};


struct UGMCheatBackpack_FlushItem_Params
{
	int                                                onlyStatic;                                               
};


struct UGMCheatBackpack_DropItemsWithType_Params
{
	int                                                TypeItem;                                                 
};


struct UGMCheatBackpack_DropItem_Params
{
	int                                                ID;                                                       
};


struct UGMCheatBackpack_DropAllItem_Params
{
};


struct UGMCheatBackpack_DestroyPickUpActors_Params
{
};


struct UGMCheatBackpack_ClearBackpack_Params
{
};


struct UGMCheatBackpack_BatchAddItemsString_Params
{
	TArray<struct FString>                             ItemDetailArray;                                          
	bool                                               bClearBackpack;                                           
};


struct UGMCheatBackpack_BatchAddItemsFromFile_Params
{
	struct FString                                     Filename;                                                 
	bool                                               bClearBackpack;                                           
};


struct UGMCheatBackpack_AddItemString_Params
{
	struct FString                                     ItemDetail;                                               
};


struct UGMCheatBackpack_AddItemNew_Params
{
	struct FString                                     ID;                                                       
	int                                                Count;                                                    
	int                                                PickupType;                                               
};


struct UGMCheatBackpack_AddItem_Params
{
	int                                                ID;                                                       
	int                                                Count;                                                    
	int                                                PickupType;                                               
};


struct UGMCheatBackpack_AddAvatarItem_Params
{
	int                                                ID;                                                       
	int                                                Color;                                                    
	int                                                Pattern;                                                  
	int                                                Num;                                                      
};


struct UGMCheatCharacter_ToggleUserCmdDeltaSendAck_Params
{
	bool                                               Val;                                                      
};


struct UGMCheatCharacter_ToggleUserCmdDeltaFlag_Params
{
	bool                                               Val;                                                      
};


struct UGMCheatCharacter_ToggleUserCmdDeltaCheckSum_Params
{
	bool                                               Val;                                                      
};


struct UGMCheatCharacter_ToggleUserCmdDelta_Params
{
	bool                                               Val;                                                      
};


struct UGMCheatCharacter_ToggleServerAcknowledgePossession_Params
{
	bool                                               Val;                                                      
};


struct UGMCheatCharacter_ToggleCheatLocation_Params
{
	bool                                               Val;                                                      
};


struct UGMCheatCharacter_TestLowProbCircle_Params
{
	bool                                               UseLowProb;                                               
	int                                                LoopCount;                                                
};


struct UGMCheatCharacter_TestLaunchFly_Params
{
	float                                              Speed;                                                    
};


struct UGMCheatCharacter_TestAutoMoveToShootingMachine_Params
{
};


struct UGMCheatCharacter_TestAutoMoveToLocation_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UGMCheatCharacter_TestAutoMoveToCharacter_Params
{
	struct FString                                     TargetPlayerUID;                                          
};


struct UGMCheatCharacter_TeamNoAlwaysRelevant_Params
{
};


struct UGMCheatCharacter_SwitchViewTarget_Params
{
};


struct UGMCheatCharacter_StartAirDropSpecified_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
};


struct UGMCheatCharacter_StartAirDropBackupEnter_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	int                                                MaxPlaneNum;                                              
};


struct UGMCheatCharacter_StartAirDrop_Params
{
	int                                                Index;                                                    
};


struct UGMCheatCharacter_StartAirAttackSpecified_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Radius;                                                   
};


struct UGMCheatCharacter_StartAirAttack_Params
{
	int                                                Index;                                                    
};


struct UGMCheatCharacter_ShowWeaponRecordInfo_Params
{
};


struct UGMCheatCharacter_ShowVaultEnable_Params
{
};


struct UGMCheatCharacter_ShowResultWeaponRecordInfo_Params
{
};


struct UGMCheatCharacter_ShowAllRoles_Params
{
};


struct UGMCheatCharacter_SetTimeSpeedFactor_Params
{
	float                                              Val;                                                      
};


struct UGMCheatCharacter_SetTimeSpeedCheck_Params
{
	bool                                               Val;                                                      
};


struct UGMCheatCharacter_SetSpeed_Params
{
	float                                              Modifier;                                                 
};


struct UGMCheatCharacter_SetMaxHealth_Params
{
	float                                              Hp;                                                       
};


struct UGMCheatCharacter_SetLowProbCircle_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              R;                                                        
	float                                              Prob;                                                     
};


struct UGMCheatCharacter_SetCustomJumpPoint_Params
{
	float                                              JmpX;                                                     
	float                                              JmpY;                                                     
	float                                              JmpRadius;                                                
};


struct UGMCheatCharacter_SetCircleCenter_Params
{
	struct FString                                     PointString;                                              
};


struct UGMCheatCharacter_SetCirCenterFixed_Params
{
	bool                                               Enable;                                                   
	float                                              X;                                                        
	float                                              Y;                                                        
};


struct UGMCheatCharacter_SetAirDropEnable_Params
{
	bool                                               Enable;                                                   
};


struct UGMCheatCharacter_SetAirAttackEnable_Params
{
	bool                                               Enable;                                                   
};


struct UGMCheatCharacter_Set2x2ForceCircleLastR_Params
{
	float                                              R;                                                        
};


struct UGMCheatCharacter_Set2x2ForceCircle_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              R;                                                        
};


struct UGMCheatCharacter_Set2x2CircleCenter_Params
{
	int                                                Index;                                                    
	float                                              X;                                                        
	float                                              Y;                                                        
};


struct UGMCheatCharacter_Set2x2Circle3Center_Params
{
	float                                              X1;                                                       
	float                                              Y1;                                                       
	float                                              X2;                                                       
	float                                              Y2;                                                       
	float                                              x3;                                                       
	float                                              y3;                                                       
};


struct UGMCheatCharacter_PrintMovementLog_Params
{
	int                                                PrintLog;                                                 
};


struct UGMCheatCharacter_PrintDownCollision_Params
{
};


struct UGMCheatCharacter_MoveToXY_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
};


struct UGMCheatCharacter_MoveToVehicle_Params
{
	int                                                ItemId;                                                   
};


struct UGMCheatCharacter_MoveToS_Params
{
	struct FString                                     VectorString;                                             
};


struct UGMCheatCharacter_MoveToNearestVehicle_Params
{
	float                                              IgnoreDistance;                                           
};


struct UGMCheatCharacter_MoveToItem_Params
{
	int                                                ItemId;                                                   
};


struct UGMCheatCharacter_MoveTo_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UGMCheatCharacter_ModifyStreamingDistance_Params
{
	int                                                Distance;                                                 
};


struct UGMCheatCharacter_KillSomeOne_Params
{
	struct FString                                     InPlayerName;                                             
};


struct UGMCheatCharacter_KillAll_Params
{
};


struct UGMCheatCharacter_Kill_Params
{
	int                                                GivenNumber;                                              
};


struct UGMCheatCharacter_GMSetPlayerLocationInvalid_Params
{
	uint32_t                                           InPlayerKey;                                              
	int                                                errorType;                                                
	int                                                Side;                                                     
};


struct UGMCheatCharacter_GMSetCampId_Params
{
	int                                                CamID;                                                    
};


struct UGMCheatCharacter_GetGameScreenSize_Params
{
};


struct UGMCheatCharacter_ExecFollowTeammate_Params
{
	struct FString                                     Name;                                                     
};


struct UGMCheatCharacter_DumpCharacterMove_Params
{
	uint32_t                                           PlayerKey;                                                
};


struct UGMCheatCharacter_DebugSprint_Params
{
};


struct UGMCheatCharacter_DebugPhysicsAsset_Params
{
};


struct UGMCheatDump_DumpWeaponsToFile_Params
{
	struct FString                                     Filename;                                                 
};


struct UGMCheatDump_DumpVehicleToFile_Params
{
	struct FString                                     Filename;                                                 
};


struct UGMCheatDump_DumpVehicleAnimInstanceToFile_Params
{
	struct FString                                     Filename;                                                 
};


struct UGMCheatDump_DumpVehicleAnimInstance_Params
{
};


struct UGMCheatDump_DumpVehicle_Params
{
};


struct UGMCheatDump_DumpSimulatedCharacterAnimInstanceToFile_Params
{
	struct FString                                     Filename;                                                 
};


struct UGMCheatDump_DumpSimulatedCharacterAnimInstance_Params
{
};


struct UGMCheatDump_DumpReticleTargetActorToFile_Params
{
	struct FString                                     Filename;                                                 
	bool                                               bPrintFunc;                                               
};


struct UGMCheatDump_DumpReticleTargetActor_Params
{
	bool                                               bPrintFunc;                                               
};


struct UGMCheatDump_DumpPlayerSkillInfo_Params
{
};


struct UGMCheatDump_DumpPlayerInfoToFile_Params
{
	struct FString                                     Filename;                                                 
};


struct UGMCheatDump_DumpPlayerControllerToFile_Params
{
	struct FString                                     Filename;                                                 
};


struct UGMCheatDump_DumpPlayerController_Params
{
};


struct UGMCheatDump_DumpPlayerCameraManagerToFile_Params
{
	struct FString                                     Filename;                                                 
};


struct UGMCheatDump_DumpObservingCharacterToFile_Params
{
	struct FString                                     Filename;                                                 
};


struct UGMCheatDump_DumpObservingCharacter_Params
{
};


struct UGMCheatDump_DumpObjectPropertiesRecursive_Params
{
	struct FString                                     ObjectName;                                               
	int                                                Depth;                                                    
	bool                                               bPrintFunc;                                               
};


struct UGMCheatDump_DumpObjectProperties_Params
{
	struct FString                                     ObjectName;                                               
};


struct UGMCheatDump_DumpCharacterToFile_Params
{
	struct FString                                     Filename;                                                 
};


struct UGMCheatDump_DumpCharacterAnimInstanceToFile_Params
{
	struct FString                                     Filename;                                                 
};


struct UGMCheatDump_DumpCharacterAnimInstance_Params
{
};


struct UGMCheatDump_DumpCharacter_Params
{
};


struct UGMCheatDump_DumpBatchManager_Params
{
};


struct UGMCheatDump_DumpAllVehiclesToFile_Params
{
	struct FString                                     Filename;                                                 
};


struct UGMCheatDump_DumpAllVehicles_Params
{
};


struct UGMCheatDump_DumpAllSkillActorsInfoToFile_Params
{
	struct FString                                     Filename;                                                 
	int                                                Depth;                                                    
};


struct UGMCheatDump_DumpAllSkillActorsInfo_Params
{
	int                                                Depth;                                                    
};


struct UGMCheatDump_DumpAllPlayerControllerToFile_Params
{
	struct FString                                     Filename;                                                 
};


struct UGMCheatDump_DumpAllPlayerController_Params
{
};


struct UGMCheatDump_DumpAllCustomActorsInfoToFile_Params
{
	class UClass*                                      DesiredClass;                                             
	struct FString                                     Filename;                                                 
};


struct UGMCheatDump_DumpAllCustomActorsInfo_Params
{
	class UClass*                                      DesiredClass;                                             
};


struct UGMCheatDump_DumpAllCharactersToFile_Params
{
	struct FString                                     Filename;                                                 
};


struct UGMCheatDump_DumpAllCharacters_Params
{
};


struct UGMCheatGameFlow_StartReadyCountDown_Params
{
};


struct UGMCheatGameFlow_SetStateLeftTime_Params
{
	int                                                LeftTime;                                                 
};


struct UGMCheatGameFlow_GotoFlying_Params
{
};


struct UGMCheatGameFlow_GameModeGotoNextState_Params
{
};


struct UGMCheatGameFlow_GameModeGotoFightingState_Params
{
};


struct UGMCheatGameFlow_DsLuaGM_Params
{
	struct FString                                     CmdString;                                                
};


struct UGMCheatGameFlow_DsLuaDoString_Params
{
	struct FString                                     LuaString;                                                
};


struct UGMCheatHiggs_TriggerActorChannelErrorDelegate_Params
{
};


struct UGMCheatHiggs_TestSpawnStaticmesh_Params
{
	int                                                Count;                                                    
};


struct UGMCheatHiggs_TestGMCheatHiggs_Params
{
	int                                                Param1;                                                   
	bool                                               Param2;                                                   
};


struct UGMCheatHiggs_TestGlueHia_Params
{
	int                                                GlueType;                                                 
	int                                                GlueValue;                                                
};


struct UGMCheatHiggs_StatCPU_Params
{
	int                                                Enable;                                                   
};


struct UGMCheatHiggs_SetOpenSecurityAlert_Params
{
	bool                                               bOpen;                                                    
};


struct UGMCheatHiggs_OnFinishAsyncLoadResource_Params
{
	struct FSoftObjectPath                             SoftObjectPath;                                           
};


struct UGMCheatHiggs_HiggsTestSyncLoad_Params
{
	struct FString                                     Path;                                                     
};


struct UGMCheatHiggs_HiggsTestForbitMove_Params
{
};


struct UGMCheatHiggs_HiggsTestAsyncLoad_Params
{
	struct FString                                     Path;                                                     
};


struct UGMCheatHiggs_DebugReplaySampleLocAndRot_Params
{
};


struct UGMCheatHUD_ResetHUDDebugFunction_Params
{
};


struct UGMCheatHUD_RemoveHUDDebugFunction_Params
{
	struct FString                                     FuncName;                                                 
};


struct UGMCheatHUD_EnableHUDDebug_Params
{
	bool                                               bEnable;                                                  
	struct FString                                     FuncName;                                                 
};


struct UGMCheatHUD_AddHUDDebugFunction_Params
{
	struct FString                                     FuncName;                                                 
	bool                                               bReset;                                                   
};


struct UGMCheatLevel_SpawnActorWithPath_Params
{
	struct FString                                     Path;                                                     
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UGMCheatLevel_ShutDownVehicleGenerate_Params
{
	bool                                               IsOpen;                                                   
};


struct UGMCheatLevel_ShutDownPickUpGenerate_Params
{
	bool                                               IsOpen;                                                   
};


struct UGMCheatLevel_ShutDownItemGenerate_Params
{
	bool                                               IsOpen;                                                   
};


struct UGMCheatLevel_ShowNavOperator_Params
{
};


struct UGMCheatLevel_SetServerLevelLoadingMode_Params
{
	bool                                               bNewLoadAll;                                              
};


struct UGMCheatLevel_SetPlaneEnabled_Params
{
	bool                                               InEnable;                                                 
};


struct UGMCheatLevel_SetCustomFlightRoute_Params
{
	float                                              StartX;                                                   
	float                                              StartY;                                                   
	float                                              EndX;                                                     
	float                                              EndY;                                                     
};


struct UGMCheatLevel_RemoveAllDoors_Params
{
};


struct UGMCheatLevel_PrintAllPickupWarpper_Params
{
};


struct UGMCheatLevel_LocalProfileFootprint_Params
{
};


struct UGMCheatLevel_LoadAllLand_Params
{
	bool                                               bLoadAll;                                                 
};


struct UGMCheatLevel_GotoDoubleCircleEdge_Params
{
	float                                              Z;                                                        
};


struct UGMCheatLevel_GMSetBoolPoisonCircle_Params
{
};


struct UGMCheatLevel_GMSetBoolAirDrop_Params
{
};


struct UGMCheatLevel_GMSetBoolAirAttack_Params
{
};


struct UGMCheatLevel_GMSetBoolAI_Params
{
};


struct UGMCheatLevel_GMEnableRandom_Params
{
};


struct UGMCheatLevel_GMEnableAllComponent_Params
{
};


struct UGMCheatLevel_GMDisableRandom_Params
{
};


struct UGMCheatLevel_GMDisableAllComponent_Params
{
};


struct UGMCheatLevel_GMBeginCircle_Params
{
	int                                                CurIndex;                                                 
	float                                              PosX;                                                     
	float                                              PosY;                                                     
};


struct UGMCheatLevel_GetCurrentLevelOffset_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UGMCheatLevel_EnableMyLandscapeDraw_Params
{
};


struct UGMCheatLevel_DisableMyLandscapeDraw_Params
{
};


struct UGMCheatLevel_DebugAirDropPickInfo_Params
{
	float                                              DrawTime;                                                 
	float                                              BoxDrawSize;                                              
	float                                              BoxDrawLineLength;                                        
	float                                              ListWrapperDrawSize;                                      
	float                                              ListWrapperDrawLineLength;                                
};


struct UGMCheatManager_WatchReport_Params
{
};


struct UGMCheatManager_VehicleTowardTo_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UGMCheatManager_VehicleSpotLog_Params
{
};


struct UGMCheatManager_VehicleMoveTo_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UGMCheatManager_VehicleMoveAndTowardTo_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	float                                              X1;                                                       
	float                                              Y1;                                                       
	float                                              Z1;                                                       
};


struct UGMCheatManager_UpdateTrainingRank_Params
{
	int                                                TrainingType;                                             
	int                                                Level;                                                    
	int                                                Top1wScore;                                               
	int                                                Score;                                                    
};


struct UGMCheatManager_ToggleSpringMode_Params
{
};


struct UGMCheatManager_ToggleSpringDebug_Params
{
};


struct UGMCheatManager_TogglePawnInfo_Params
{
};


struct UGMCheatManager_TestStringSHA1_Params
{
	struct FString                                     InStr;                                                    
};


struct UGMCheatManager_TestReplayStreamerLastError_Params
{
};


struct UGMCheatManager_TestPlayerLostEvent_Params
{
	int                                                LostEvent;                                                
};


struct UGMCheatManager_TestPlayerBattleResult_Params
{
};


struct UGMCheatManager_TestNetworkLost_Params
{
};


struct UGMCheatManager_TestLineTrace_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UGMCheatManager_TestKillInfoPanel_Params
{
	int                                                WeaponId;                                                 
	int                                                Relationship;                                             
	int                                                WeaponAvatarID;                                           
	int                                                ClothID;                                                  
};


struct UGMCheatManager_TestGameplayDataRecord_Params
{
	int                                                UID;                                                      
	int                                                RecordType;                                               
};


struct UGMCheatManager_TestEnableRegionsLongDistanceSleep_Params
{
	bool                                               bEnable;                                                  
};


struct UGMCheatManager_TestDeactivate_Params
{
};


struct UGMCheatManager_TestCrash_Params
{
};


struct UGMCheatManager_TeleportToVehicleAI_Params
{
	int                                                InIndex;                                                  
};


struct UGMCheatManager_TeleportToPVEMonster_Params
{
	int                                                ChapterID;                                                
	int                                                LevelID;                                                  
	int                                                WaveID;                                                   
};


struct UGMCheatManager_TeleportTo_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UGMCheatManager_TeleportNearestVehicleAIToPercentOfPath_Params
{
	float                                              InPercent;                                                
};


struct UGMCheatManager_SwitchSocialIsland_Params
{
	int                                                LandId;                                                   
	float                                              Delay;                                                    
};


struct UGMCheatManager_SwitchShowUI_Params
{
};


struct UGMCheatManager_SuperGMKillDS_Params
{
};


struct UGMCheatManager_StopAllMonsterDSAnim_Params
{
	bool                                               bStop;                                                    
};


struct UGMCheatManager_StatVehicle_Params
{
};


struct UGMCheatManager_StarTPerforPlatTag_Params
{
	struct FString                                     TagName;                                                  
};


struct UGMCheatManager_SpawnVehicleWithPathAtPoint_Params
{
	struct FString                                     Path;                                                     
	bool                                               AroundMe;                                                 
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	int                                                Num;                                                      
};


struct UGMCheatManager_SpawnTrainingAIAroundMe_Params
{
	int                                                Num;                                                      
	int                                                Range;                                                    
};


struct UGMCheatManager_SpawnMonsterAround_Params
{
	int                                                MonsterID;                                                
	float                                              Radius;                                                   
	int                                                Num;                                                      
	bool                                               bStopAI;                                                  
};


struct UGMCheatManager_SpawnItemBySpotDefaultTag_Params
{
	struct FString                                     DefaultTag;                                               
};


struct UGMCheatManager_SpawnGameFeatureActor_Params
{
	struct FString                                     Path;                                                     
};


struct UGMCheatManager_SpawnFakePlayer_Params
{
	int                                                Num;                                                      
	bool                                               bWithPet;                                                 
	bool                                               bStopAI;                                                  
};


struct UGMCheatManager_SpawnDecal_Params
{
};


struct UGMCheatManager_SpawnBotForTest_Params
{
	int                                                Num;                                                      
};


struct UGMCheatManager_SpawnAIAroundMe_Params
{
	int                                                Num;                                                      
	float                                              Range;                                                    
	bool                                               HasWeapon;                                                
	bool                                               HasAvator;                                                
	bool                                               HasBackpack;                                              
};


struct UGMCheatManager_ShowScrollMsg_Params
{
	uint32_t                                           MsgID;                                                    
	struct FString                                     Param1;                                                   
	struct FString                                     Param2;                                                   
};


struct UGMCheatManager_ShowPet_Params
{
	bool                                               Enable;                                                   
};


struct UGMCheatManager_ShowOBMultiKillTips_Params
{
	struct FString                                     PlayerName;                                               
	int                                                TeamID;                                                   
	int                                                PlayerKillNum;                                            
	int                                                TeamKillNum;                                              
};


struct UGMCheatManager_ShowHideGuide_Params
{
	int                                                GuideID;                                                  
	bool                                               bShow;                                                    
};


struct UGMCheatManager_ShowAllPlayersMarkIncludeAI_Params
{
	float                                              VisDistance;                                              
};


struct UGMCheatManager_ShowAKComponentPosition_Params
{
	bool                                               _IsShow;                                                  
};


struct UGMCheatManager_SetWeatherPlaySpeed_Params
{
	float                                              FSpeed;                                                   
};


struct UGMCheatManager_SetViewFPP_Params
{
	bool                                               IsFPP;                                                    
};


struct UGMCheatManager_SetTouchMoveLog_Params
{
	bool                                               Enable;                                                   
};


struct UGMCheatManager_SetTouchMoveDelay_Params
{
	int                                                DelayFrame;                                               
};


struct UGMCheatManager_SetSpringArm_Params
{
	unsigned char                                      armFlag;                                                  
};


struct UGMCheatManager_SetSkillDup_Params
{
	int                                                Count;                                                    
};


struct UGMCheatManager_SetRateScore_Params
{
	float                                              RankScore;                                                
};


struct UGMCheatManager_SetNetSpeed_Params
{
	int                                                NewSpeed;                                                 
};


struct UGMCheatManager_SetNeckUp_Params
{
	float                                              UpAngle;                                                  
};


struct UGMCheatManager_SetNeckSpeed_Params
{
	float                                              Speed;                                                    
};


struct UGMCheatManager_SetNeckRight_Params
{
	float                                              RightAngle;                                               
};


struct UGMCheatManager_SetNeckMax_Params
{
	float                                              MaxAngle;                                                 
};


struct UGMCheatManager_SetNeckLeft_Params
{
	float                                              LeftAngle;                                                
};


struct UGMCheatManager_SetMonsterNumMultiple_Params
{
	int                                                ChapterID;                                                
	int                                                LevelID;                                                  
	int                                                DiffcultPerc;                                             
};


struct UGMCheatManager_SetMonsterNB_Params
{
	bool                                               MonsterNB;                                                
};


struct UGMCheatManager_SetMonsterHatred_Params
{
	float                                              Hatred;                                                   
};


struct UGMCheatManager_SetMaxFpsFromDevice_Params
{
};


struct UGMCheatManager_SetIsRender_Params
{
	bool                                               IsRender;                                                 
};


struct UGMCheatManager_SetInactiveClearEnable_Params
{
	bool                                               bNewActive;                                               
};


struct UGMCheatManager_SetHignPerformance_Params
{
	bool                                               SetOpen;                                                  
};


struct UGMCheatManager_SetGVMemberID_Params
{
	int                                                memberID;                                                 
};


struct UGMCheatManager_SetFestivalAirDrop_Params
{
	bool                                               bFestival;                                                
	struct FString                                     BoxMesh;                                                  
};


struct UGMCheatManager_SetFestivaGrenade_Params
{
	bool                                               bFestival;                                                
};


struct UGMCheatManager_SetDynamicWeather_Params
{
	int                                                WeatherType;                                              
	int                                                EventType;                                                
};


struct UGMCheatManager_SetDsSwitch_Params
{
	int                                                InKey;                                                    
	struct FString                                     InValue;                                                  
};


struct UGMCheatManager_SetDeliver_Params
{
};


struct UGMCheatManager_SetDearDeathReduce_Params
{
	int                                                Index;                                                    
	float                                              ReduceFactor;                                             
};


struct UGMCheatManager_SetClearIslandEnable_Params
{
	bool                                               bNewActive;                                               
};


struct UGMCheatManager_SetCameraLagEnable_Params
{
	bool                                               Enable;                                                   
};


struct UGMCheatManager_SetCacheInputNum_Params
{
	int                                                CacheNum;                                                 
};


struct UGMCheatManager_SetAnimEnable_Params
{
	bool                                               Enable;                                                   
};


struct UGMCheatManager_SetAnimDebugInfo_Params
{
	bool                                               debugAnimInfo;                                            
};


struct UGMCheatManager_SetAnimDebugGroup_Params
{
	bool                                               debugAnimGroup;                                           
};


struct UGMCheatManager_SetAllMonsterHp_Params
{
	int                                                Hp;                                                       
};


struct UGMCheatManager_ServerCMD_Params
{
	struct FString                                     Cmd;                                                      
};


struct UGMCheatManager_ResumeAllLevelSequenceActors_Params
{
};


struct UGMCheatManager_ReplayRecoverReconnect_Params
{
	struct FString                                     IP;                                                       
	struct FString                                     Port;                                                     
};


struct UGMCheatManager_ReplayRecoverGenerateDSCheckpoint_Params
{
	struct FString                                     InReplayName;                                             
};


struct UGMCheatManager_RenderTargetCompressTest_Params
{
	class UTexture*                                    pTexture;                                                 
	struct FVector                                     Posoffset;                                                
};


struct UGMCheatManager_RemoveTimeSwitch_Params
{
	int                                                TimeID;                                                   
};


struct UGMCheatManager_RefreshReconnectUI_Params
{
};


struct UGMCheatManager_PVESpawnMonsterByPos_Params
{
	int                                                MonsterID;                                                
	int                                                Num;                                                      
	float                                              Radius;                                                   
	float                                              PosX;                                                     
	float                                              PosY;                                                     
	float                                              PosZ;                                                     
};


struct UGMCheatManager_PVESpawnMonsterByDistance_Params
{
	int                                                MonsterID;                                                
	int                                                Num;                                                      
	float                                              Radius;                                                   
	float                                              FrontDist;                                                
};


struct UGMCheatManager_PVESpawnMonster_Params
{
	int                                                MonsterID;                                                
	bool                                               StopAI;                                                   
};


struct UGMCheatManager_PVESetTestMonster_Params
{
	class AActor*                                      InMonster;                                                
};


struct UGMCheatManager_PVEResetMonsterTable_Params
{
};


struct UGMCheatManager_PVEPrintMonsterCount_Params
{
};


struct UGMCheatManager_PVEPrintAllAnim_Params
{
	bool                                               bPrintAll;                                                
};


struct UGMCheatManager_PVEPlayerTriggerSkill_Params
{
	int                                                SkillID;                                                  
	int                                                EventType;                                                
};


struct UGMCheatManager_PVEPlayerStopSkill_Params
{
	int                                                SkillID;                                                  
	int                                                StopReason;                                               
};


struct UGMCheatManager_PVEMonsterTriggerSkill_Params
{
	int                                                SkillID;                                                  
	int                                                EventType;                                                
};


struct UGMCheatManager_PVEMonsterStopSkill_Params
{
	int                                                SkillID;                                                  
	int                                                StopReason;                                               
};


struct UGMCheatManager_PVEMonsterRemoveBuffByID_Params
{
	int                                                BuffID;                                                   
	int                                                LayerCount;                                               
	int                                                CauserSkillID;                                            
	bool                                               CauseByPlayer;                                            
};


struct UGMCheatManager_PVEMonsterAddBuffByID_Params
{
	int                                                BuffID;                                                   
	int                                                LayerCount;                                               
	int                                                CauserSkillID;                                            
	bool                                               CauseByPlayer;                                            
};


struct UGMCheatManager_PVECloseMonsterLimit_Params
{
	bool                                               bCloseMonsterLimit;                                       
};


struct UGMCheatManager_PVEClearTestMonster_Params
{
};


struct UGMCheatManager_PrintScreenDebug_Params
{
	int                                                Key;                                                      
	float                                              TimeToDisplay;                                            
	struct FString                                     DebugMessage;                                             
};


struct UGMCheatManager_PrintRegionObjectList_Params
{
};


struct UGMCheatManager_PrintPool_Params
{
};


struct UGMCheatManager_PrintHP_Params
{
};


struct UGMCheatManager_PrintAllAnim_Params
{
};


struct UGMCheatManager_PrintAllActorLocationByClassName_Params
{
	struct FString                                     InClassName;                                              
};


struct UGMCheatManager_PlayBornIslandSequence_Params
{
	bool                                               bPlay;                                                    
};


struct UGMCheatManager_PauseAnim_Params
{
	bool                                               bPause;                                                   
};


struct UGMCheatManager_PauseAllLevelSequenceActors_Params
{
};


struct UGMCheatManager_PacketSimulationLag_Params
{
	int                                                InSimulationLag;                                          
};


struct UGMCheatManager_OpenHitTest_Params
{
};


struct UGMCheatManager_OpenFixationFreeFallVelocity_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UGMCheatManager_OpenAllCharacterHitBodyCollison_Params
{
	float                                              Time;                                                     
};


struct UGMCheatManager_NotifyGameModeParamsChanged_Params
{
	int                                                NewDuration;                                              
};


struct UGMCheatManager_NativeSimulateAction_Params
{
	int                                                SimActionType;                                            
};


struct UGMCheatManager_MoveSnake_Params
{
	bool                                               bEnable;                                                  
	float                                              moveInternal;                                             
	float                                              ForwardRate;                                              
	float                                              RightRate;                                                
};


struct UGMCheatManager_ModifyVehicleSyncServerData_Params
{
	float                                              MinCorrectionInterval;                                    
	float                                              AllowMaxDiatanceSqAtServer;                               
};


struct UGMCheatManager_ModifyVehicleSyncClientData_Params
{
};


struct UGMCheatManager_ModifyVehicleBuoyancy_Params
{
	float                                              MeshDensity;                                              
	int                                                Index;                                                    
};


struct UGMCheatManager_MaxSimulationIterations_Params
{
	int                                                V;                                                        
};


struct UGMCheatManager_MarkAPMLevelFinish_Params
{
};


struct UGMCheatManager_MainCityConnectToDS_Params
{
	struct FString                                     IP;                                                       
	struct FString                                     Port;                                                     
};


struct UGMCheatManager_LogNetWorkParams_Params
{
};


struct UGMCheatManager_LogicAreaTest_Params
{
	int                                                AreaType;                                                 
	struct FString                                     str;                                                      
};


struct UGMCheatManager_LogAllBuffInfo_Params
{
};


struct UGMCheatManager_LogAllActors_Params
{
};


struct UGMCheatManager_LocalConnectToLobbySrv_Params
{
	struct FString                                     URL;                                                      
};


struct UGMCheatManager_KillAllPVEBot_Params
{
};


struct UGMCheatManager_KillAllPlayers_Params
{
};


struct UGMCheatManager_JankOpt_Spawn20AIBlockVolume_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UGMCheatManager_ItemSpotLog_Params
{
};


struct UGMCheatManager_InGameAndroidBack_Params
{
};


struct UGMCheatManager_GotoSpectatingDirectly_Params
{
};


struct UGMCheatManager_GotoSpectating_Params
{
};


struct UGMCheatManager_GotoSpecificWeather_Params
{
	int                                                WeatherIdx;                                               
};


struct UGMCheatManager_GMWayPointEvent_Params
{
	int                                                EventID;                                                  
};


struct UGMCheatManager_GMUseGunCollision_Params
{
	bool                                               bIsUse;                                                   
};


struct UGMCheatManager_GMSuicideCurVehicle_Params
{
};


struct UGMCheatManager_GMSuicide_Params
{
};


struct UGMCheatManager_GMStopAI_Params
{
	bool                                               bStop;                                                    
	uint32_t                                           InPlayerKey;                                              
};


struct UGMCheatManager_GMSpawnSociallandSubVehicle01_Params
{
};


struct UGMCheatManager_GMSpawnSocialLandPlayerAIAroundPointWithAvatarList_Params
{
	uint32_t                                           DataOffset;                                               
	uint32_t                                           AINum;                                                    
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	float                                              fRadius;                                                  
	bool                                               bActiveAI;                                                
	bool                                               IsAIInvincible;                                           
	bool                                               bWithPet;                                                 
	bool                                               bWithEqui;                                                
	struct FString                                     AvatarList;                                               
	bool                                               bWithWeapon;                                              
};


struct UGMCheatManager_GMSpawnSocialLandPlayerAIAroundPoint_Params
{
	uint32_t                                           DataOffset;                                               
	uint32_t                                           AINum;                                                    
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	float                                              fRadius;                                                  
	bool                                               bActiveAI;                                                
	bool                                               IsAIInvincible;                                           
	bool                                               bWithPet;                                                 
	bool                                               bWithEqui;                                                
	bool                                               bWithWeapon;                                              
};


struct UGMCheatManager_GMSpawnSocialLandPlayerAIAroundMeWithAvatar_Params
{
	uint32_t                                           AINum;                                                    
	float                                              fRadius;                                                  
	bool                                               bActiveAI;                                                
	bool                                               IsAIInvincible;                                           
	bool                                               bWithPet;                                                 
	bool                                               bWithEqui;                                                
	struct FString                                     AvatarList;                                               
	bool                                               bWithWeapon;                                              
};


struct UGMCheatManager_GMSpawnSocialLandPlayerAIAroundMe_Params
{
	uint32_t                                           AINum;                                                    
	float                                              fRadius;                                                  
	bool                                               bActiveAI;                                                
	bool                                               IsAIInvincible;                                           
	bool                                               bWithPet;                                                 
	bool                                               bWithEqui;                                                
	bool                                               bWithWeapon;                                              
};


struct UGMCheatManager_GMSpawnSmartBearerTestPlane_Params
{
};


struct UGMCheatManager_GMSpawnSingleSocialLandPlayerAI_Params
{
	uint32_t                                           DataOffset;                                               
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	bool                                               bActiveAI;                                                
	bool                                               IsAIInvincible;                                           
	bool                                               bWithPet;                                                 
	bool                                               bWithEqui;                                                
};


struct UGMCheatManager_GMSpawnPlayerAIAroundPointDownloadable_Params
{
	uint32_t                                           iNum;                                                     
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	float                                              fRadius;                                                  
	bool                                               bActiveAI;                                                
	bool                                               IsAIInvincible;                                           
	bool                                               bWithPet;                                                 
};


struct UGMCheatManager_GMSpawnPlayerAIAroundPoint_Params
{
	uint32_t                                           iNum;                                                     
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	float                                              fRadius;                                                  
	bool                                               bActiveAI;                                                
	bool                                               IsAIInvincible;                                           
	bool                                               bWithPet;                                                 
};


struct UGMCheatManager_GMSpawnPlayerAIAroundMeDownloadable_Params
{
	uint32_t                                           iNum;                                                     
	float                                              fRadius;                                                  
	bool                                               bActiveAI;                                                
	bool                                               IsAIInvincible;                                           
	bool                                               bWithPet;                                                 
};


struct UGMCheatManager_GMSpawnPlayerAIAroundMe_Params
{
	uint32_t                                           iNum;                                                     
	float                                              fRadius;                                                  
	bool                                               bActiveAI;                                                
	bool                                               IsAIInvincible;                                           
	bool                                               bWithPet;                                                 
};


struct UGMCheatManager_GMSpawnPickup_Params
{
	int                                                SpawnNum;                                                 
	int                                                PickupTypes;                                              
	int                                                Direction;                                                
	float                                              SpawnDistance;                                            
};


struct UGMCheatManager_GMSpawnParticle_Params
{
	struct FString                                     AssetPath;                                                
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	float                                              Scale;                                                    
};


struct UGMCheatManager_GMSpawnAutoTestAI_Params
{
	int                                                NameExtraID;                                              
};


struct UGMCheatManager_GMSpawnAIWithIDAndLoc_Params
{
	int                                                AIID;                                                     
	float                                              SpawnLocX;                                                
	float                                              SpawnLocY;                                                
	float                                              SpawnLocZ;                                                
	float                                              Radius;                                                   
	int                                                TeamID;                                                   
	int                                                ItemID1;                                                  
	int                                                ItemNum1;                                                 
	int                                                ItemID2;                                                  
	int                                                ItemNum2;                                                 
	int                                                ItemID3;                                                  
	int                                                ItemNum3;                                                 
	class AActor*                                      ReturnValue;                                              
};


struct UGMCheatManager_GMSpawnAIOnAIPoint3_Params
{
};


struct UGMCheatManager_GMSpawnAIOnAIPoint2_Params
{
};


struct UGMCheatManager_GMSpawnAIOnAIPoint1_Params
{
};


struct UGMCheatManager_GMSocialSetRotation_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UGMCheatManager_GMSociallandPlayerMoveToTestPoint_Params
{
};


struct UGMCheatManager_GMSociallandPlayerMoveToAISpawnPoint1_Params
{
};


struct UGMCheatManager_GMSociallandChangeItemFromStr_Params
{
	struct FString                                     ItemString;                                               
	struct FString                                     EquimentItemString;                                       
};


struct UGMCheatManager_GMShowHitFeedback_Params
{
	bool                                               bCombatHitFeedbackEnable;                                 
};


struct UGMCheatManager_GMSetSpeed_Params
{
	float                                              WalkSpeed;                                                
};


struct UGMCheatManager_GMSetServerLevelLoadingMode_Params
{
	bool                                               bNewLoadAll;                                              
};


struct UGMCheatManager_GMSetPawnNull_Params
{
	bool                                               bIsNull;                                                  
};


struct UGMCheatManager_GMSetMLAIModifyDamage_Params
{
	int                                                InIsModify;                                               
};


struct UGMCheatManager_GMSetMaxAINum_Params
{
	int                                                Num;                                                      
};


struct UGMCheatManager_GMSetJoystickEightDirection_Params
{
	bool                                               IsNeedEightDirection;                                     
};


struct UGMCheatManager_GMSetJoystickActivatedRange_Params
{
	bool                                               IsNeedActivatedRange;                                     
	float                                              ActivatedRange;                                           
};


struct UGMCheatManager_GMSetHealth_Params
{
	float                                              Val;                                                      
};


struct UGMCheatManager_GMSetDeliveryToMLAI_Params
{
	int                                                InIsDeliveryToMLAI;                                       
};


struct UGMCheatManager_GMSetCullDistance_Params
{
	bool                                               bCullDistance;                                            
};


struct UGMCheatManager_GMSetCircleTime_Params
{
	float                                              cdTime;                                                   
	float                                              LastTime;                                                 
};


struct UGMCheatManager_GMSetCharacterNetCullDistance_Params
{
	float                                              DistanceMeters;                                           
	bool                                               bApplyToExistingCharacters;                               
};


struct UGMCheatManager_GMSelectorWayPoint_Params
{
	struct FName                                       NameOfAIWayPointSelector;                                 
	int                                                GMPathIndex;                                              
};


struct UGMCheatManager_GMRevivePlayer_Params
{
};


struct UGMCheatManager_GMRainCount_Params
{
	float                                              Count;                                                    
};


struct UGMCheatManager_GMIOSFrameRateLock_Params
{
	int                                                FrameRateLock;                                            
};


struct UGMCheatManager_GMInvincible_Params
{
	bool                                               bInvincible;                                              
};


struct UGMCheatManager_GMIncreaseHealth_Params
{
};


struct UGMCheatManager_GMGatherAllPlayerAIAroundMe_Params
{
	float                                              fRadius;                                                  
	bool                                               bActiveAI;                                                
	bool                                               IsAIInvincible;                                           
	bool                                               bWithPet;                                                 
};


struct UGMCheatManager_GMForceSuicide_Params
{
};


struct UGMCheatManager_GMForceNullNetwork_Params
{
	int                                                bForce;                                                   
};


struct UGMCheatManager_GMDrawLine_Params
{
	float                                              X1;                                                       
	float                                              Y1;                                                       
	float                                              Z1;                                                       
	float                                              X2;                                                       
	float                                              Y2;                                                       
	float                                              Z2;                                                       
	float                                              LifeTime;                                                 
};


struct UGMCheatManager_GMDrawDirLine_Params
{
	float                                              StartX;                                                   
	float                                              StartY;                                                   
	float                                              StartZ;                                                   
	float                                              DirX;                                                     
	float                                              DirY;                                                     
	float                                              DirZ;                                                     
	float                                              Length;                                                   
	float                                              LifeTime;                                                 
};


struct UGMCheatManager_GMDrawDebugSphere2_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	float                                              Radius;                                                   
	int                                                Segments;                                                 
	float                                              LifeTime;                                                 
};


struct UGMCheatManager_GMDrawDebugSphere_Params
{
	float                                              Radius;                                                   
	int                                                Segments;                                                 
	float                                              LifeTime;                                                 
};


struct UGMCheatManager_GMDrawCone_Params
{
	float                                              Degrees;                                                  
	float                                              LifeTime;                                                 
	int                                                LineNum;                                                  
};


struct UGMCheatManager_GMDecreaseHealth_Params
{
};


struct UGMCheatManager_GMChangeAIAype_Params
{
	int                                                Type;                                                     
	uint32_t                                           InPlayerKey;                                              
};


struct UGMCheatManager_GMAutoTestChangeItem_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FString                                     ItemString;                                               
	struct FString                                     EquimentItemString;                                       
};


struct UGMCheatManager_GMAIFire_Params
{
};


struct UGMCheatManager_GMAddItemForAI_Params
{
	int                                                ItemId;                                                   
	int                                                Count;                                                    
	uint32_t                                           InPlayerKey;                                              
};


struct UGMCheatManager_GMActiveRenderDynamicStyle_Params
{
	bool                                               bSet;                                                     
	int                                                Type;                                                     
};


struct UGMCheatManager_GMActiveAI_Params
{
};


struct UGMCheatManager_GetObjectRef_Params
{
	uint64_t                                           ObjectAddr;                                               
};


struct UGMCheatManager_GetGVMemberID_Params
{
	int                                                memberID;                                                 
};


struct UGMCheatManager_GetGold_Params
{
};


struct UGMCheatManager_GenerateMonsterWave_Params
{
	int                                                ChapterID;                                                
	int                                                LevelID;                                                  
	int                                                WaveID;                                                   
};


struct UGMCheatManager_ForceStopDynamicWeatherChange_Params
{
};


struct UGMCheatManager_ForceStartNextDynamicWeatherChange_Params
{
};


struct UGMCheatManager_ForceKickoutAllPlayers_Params
{
	int                                                LandId;                                                   
};


struct UGMCheatManager_ForceGC_Params
{
};


struct UGMCheatManager_ForceEndInputForAppWillDeactivate_Params
{
};


struct UGMCheatManager_FireSpawnAirplane_Params
{
};


struct UGMCheatManager_FireReviveTeammate_Params
{
	int                                                RespawnStartID;                                           
	bool                                               bJump;                                                    
};


struct UGMCheatManager_FallKill_Params
{
	int                                                FallType;                                                 
};


struct UGMCheatManager_EquipHelmetAndBodyArmor_Params
{
	int                                                Lev;                                                      
};


struct UGMCheatManager_EnterPVELevel_Params
{
	int                                                ChapterID;                                                
	int                                                LevelID;                                                  
};


struct UGMCheatManager_EnterPawnState_Params
{
	EPawnState                                         InState;                                                  
	bool                                               IsEnter;                                                  
};


struct UGMCheatManager_EndAPMTag_Params
{
};


struct UGMCheatManager_EnablePool_Params
{
	bool                                               bEnable;                                                  
};


struct UGMCheatManager_EnableHitBox_Params
{
	bool                                               bEnable;                                                  
};


struct UGMCheatManager_EnableFuzzyInformation_Params
{
};


struct UGMCheatManager_EnableDSAnim_Params
{
	struct FString                                     MonsterName;                                              
	bool                                               bEnable;                                                  
};


struct UGMCheatManager_DumpSmartBearerManager_Params
{
};


struct UGMCheatManager_DumpPlayerStart_Params
{
};


struct UGMCheatManager_DumpObjectNetProperties_Params
{
	class UObject*                                     InObj;                                                    
};


struct UGMCheatManager_DumpMoveLog_Params
{
	bool                                               bDump;                                                    
};


struct UGMCheatManager_DumpLevels_Params
{
};


struct UGMCheatManager_DumpLegacyObjectPoolInfo_Params
{
};


struct UGMCheatManager_DumpDSNetConsiderList_Params
{
};


struct UGMCheatManager_DumpCharacterRelevant_Params
{
};


struct UGMCheatManager_DumpAnimLayer_Params
{
};


struct UGMCheatManager_DumpAIOcclusion_Params
{
};


struct UGMCheatManager_DSReconnectEvent_Params
{
};


struct UGMCheatManager_DSConnectLostEvent_Params
{
};


struct UGMCheatManager_DismissIsland_Params
{
};


struct UGMCheatManager_DetectUnderGround_Params
{
	float                                              X1;                                                       
	float                                              Y1;                                                       
	float                                              Z1;                                                       
	float                                              X2;                                                       
	float                                              Y2;                                                       
	float                                              Z2;                                                       
};


struct UGMCheatManager_DestroyVehicleWithPath_Params
{
	struct FString                                     Path;                                                     
};


struct UGMCheatManager_DebugUnderWaterEffect_Params
{
};


struct UGMCheatManager_DebugStopEMote_Params
{
	int                                                Index;                                                    
};


struct UGMCheatManager_DebugStopCapture_Params
{
};


struct UGMCheatManager_DebugStartEMote_Params
{
	int                                                Index;                                                    
};


struct UGMCheatManager_DebugSpringArm_Params
{
	bool                                               bDebug;                                                   
};


struct UGMCheatManager_DebugSpeed_Params
{
};


struct UGMCheatManager_DebugSetChangeWearCoolDownTime_Params
{
	float                                              Time;                                                     
};


struct UGMCheatManager_DebugRoomCustomParams_Params
{
	int                                                FirstCircleDelayTime;                                     
	int                                                FirstCircleAppearTime;                                    
	int                                                FirstWhiteCircleRadiusMultiplicator;                      
	int                                                BlueCircleDamageMultiplicator;                            
};


struct UGMCheatManager_DebugPoseState_Params
{
	bool                                               bEnable;                                                  
};


struct UGMCheatManager_DebugMove_Params
{
};


struct UGMCheatManager_DebugLocation_Params
{
};


struct UGMCheatManager_DebugLevelsInfo_Params
{
};


struct UGMCheatManager_DebugFixedParams_Params
{
};


struct UGMCheatManager_DebugFindFloorResult_Params
{
};


struct UGMCheatManager_DebugCamera_Params
{
};


struct UGMCheatManager_DebugAttach_Params
{
};


struct UGMCheatManager_DebugAnimList_Params
{
};


struct UGMCheatManager_ClientSetSpeed_Params
{
	float                                              Times;                                                    
	bool                                               bGMSetSpeed;                                              
};


struct UGMCheatManager_ClearTestMesh_Params
{
};


struct UGMCheatManager_ClearScreenDebug_Params
{
};


struct UGMCheatManager_ClearNoDriverVehicle_Params
{
};


struct UGMCheatManager_ClearAnimLayer_Params
{
	int                                                AnimLayer;                                                
};


struct UGMCheatManager_ClearAllTlog_Params
{
};


struct UGMCheatManager_CheatBeginPlay_Params
{
};


struct UGMCheatManager_ChatTest_Params
{
	struct FString                                     Content;                                                  
};


struct UGMCheatManager_ChangeViewTarget_Params
{
};


struct UGMCheatManager_ChangeMonsterWalkMode_Params
{
	int                                                Mode;                                                     
};


struct UGMCheatManager_ChangeAllTimeDuration_Params
{
	int                                                NewEndStateTime;                                          
	int                                                NewStartShowLifeTime;                                     
	int                                                NewMinimumAliveTime;                                      
	int                                                NewMinimumPlayerNum;                                      
	int                                                NewSpecialLifeTime;                                       
};


struct UGMCheatManager_ChangeAIDamageRate_Params
{
	float                                              InRate;                                                   
};


struct UGMCheatManager_ChangeAIAttackPlayerDamageRate_Params
{
	float                                              InRate;                                                   
};


struct UGMCheatManager_CastUIMsg_Params
{
	struct FString                                     Msg;                                                      
	struct FString                                     module;                                                   
};


struct UGMCheatManager_CallOnReconnect_Params
{
};


struct UGMCheatManager_CallLuaTableFunction_Params
{
	struct FString                                     tableName;                                                
	struct FString                                     FunctionName;                                             
};


struct UGMCheatManager_CallGMLua_Params
{
	struct FString                                     FunctionName;                                             
};


struct UGMCheatManager_CallGameModeLuaOverrideFunction_Params
{
	struct FString                                     FunctionName;                                             
};


struct UGMCheatManager_CallGameModeLuaFunction_Params
{
	struct FString                                     FunctionName;                                             
};


struct UGMCheatManager_BuildingCollide_Params
{
	bool                                               InCollide;                                                
};


struct UGMCheatManager_AutoShoveling_Params
{
	bool                                               bEnable;                                                  
	float                                              AutoShvelingSeconds;                                      
};


struct UGMCheatManager_AutoSetPlayerLocation_Params
{
	bool                                               bEnable;                                                  
};


struct UGMCheatManager_AnimDebugUseSkipMapForDistanceFactor_Params
{
	bool                                               bFlag;                                                    
};


struct UGMCheatManager_AnimDebugUseLodMap_Params
{
	bool                                               bUseLodMap;                                               
};


struct UGMCheatManager_AnimDebugUpdateFlag_Params
{
	int                                                Type;                                                     
};


struct UGMCheatManager_AnimDebugNonRenderedRate_Params
{
	int                                                UpdateRate;                                               
};


struct UGMCheatManager_AnimDebugNonRenderedMinDist_Params
{
	float                                              minDist;                                                  
};


struct UGMCheatManager_AnimDebugNonRenderedMaxDist_Params
{
	float                                              MaxDist;                                                  
};


struct UGMCheatManager_AnimDebugLodSkipMap_Params
{
	TMap<int, int>                                     SkipMap;                                                  
};


struct UGMCheatManager_AnimDebugEnable_Params
{
	bool                                               bEnable;                                                  
};


struct UGMCheatManager_AnimDebugBaseDistFactor_Params
{
	TArray<float>                                      BaseDistFactor;                                           
};


struct UGMCheatManager_AirDropByClassPath_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	struct FString                                     ClassPath;                                                
};


struct UGMCheatManager_AILog_Params
{
};


struct UGMCheatManager_AddWonderfulPeriod_Params
{
	int                                                Type;                                                     
	float                                              StartTime;                                                
	float                                              EndTime;                                                  
	int                                                AdditionalData;                                           
	int                                                Index;                                                    
};


struct UGMCheatManager_AddTimeSwitch_Params
{
	int                                                TimeID;                                                   
};


struct UGMCheatManager_AddTestTouchInput_Params
{
	int                                                FingerIndex;                                              
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Force;                                                    
	bool                                               bIsStart;                                                 
};


struct UGMCheatManager_AddScore_Params
{
	int                                                Score;                                                    
};


struct UGMCheatManager_AddAllTestRes_Params
{
};


struct UGMCheatManager_ActiveCurCamera_Params
{
	bool                                               bActive;                                                  
};


struct UGMCheatMod_TriggerHunterRevival_Params
{
};


struct UGMCheatMod_SetUAETriggerEnable_Params
{
	bool                                               IsEnbale;                                                 
};


struct UGMCheatMod_SetInfectResetPlayerInterTime_Params
{
	float                                              InterTime;                                                
};


struct UGMCheatMod_OnBuyRevivalTeammate_Params
{
	int                                                TeammateIndex;                                            
};


struct UGMCheatMod_OnBuyRevivalSign_Params
{
};


struct UGMCheatMod_InfectionEndRound_Params
{
};


struct UGMCheatMod_GetGameResult_Params
{
};


struct UGMCheatMod_DebugEnableFerrisWheelTick_Params
{
	bool                                               bEnable;                                                  
};


struct UGMCheatMod_ClearBossBornPoint_Params
{
};


struct UGMCheatMod_ChangePVELevel_Params
{
	int                                                Lv;                                                       
};


struct UGMCheatMod_CallZombieFlowAirDrop_Params
{
	int                                                ZombieID;                                                 
};


struct UGMCheatMod_CallZombieAirDrop_Params
{
	int                                                ZombieID;                                                 
};


struct UGMCheatMod_AddBossBornPoint_Params
{
	float                                              BornX;                                                    
	float                                              BornY;                                                    
};


struct UGMCheatOther_UnLoadAllCollision_Params
{
	bool                                               Unload;                                                   
};


struct UGMCheatOther_ShutDownBroadcastFatalDamage_Params
{
	bool                                               IsOpen;                                                   
};


struct UGMCheatOther_ShowHideLandscapeComponent_Params
{
	bool                                               bShow;                                                    
};


struct UGMCheatOther_SetSingleThreadUpdateAnim_Params
{
	bool                                               InIsSingleThread;                                         
};


struct UGMCheatOther_SetIsShowBlood_Params
{
	bool                                               InIsShowBlood;                                            
};


struct UGMCheatOther_RetrievePlayerBattleResultData_Params
{
};


struct UGMCheatOther_RemoveDSOptimGrayPublishFlags_Params
{
	int                                                InFlagIndex;                                              
};


struct UGMCheatOther_RecoverStatusAfterReconnecting_Params
{
};


struct UGMCheatOther_ObserveWhoKilledMe_Params
{
};


struct UGMCheatOther_GMTestSpectateRPC_Params
{
};


struct UGMCheatOther_GMTestSpectateException_Params
{
	int                                                Type;                                                     
};


struct UGMCheatOther_GMTestExternalData_Params
{
	TArray<unsigned char>                              InData;                                                   
};


struct UGMCheatOther_GMTeleport_Params
{
	struct FName                                       Teleporter;                                               
};


struct UGMCheatOther_GMSetScalarParam_Params
{
	struct FString                                     Name;                                                     
	struct FString                                     ShaderName;                                               
	float                                              Value;                                                    
};


struct UGMCheatOther_GMSendDailyTaskReport_Params
{
};


struct UGMCheatOther_GMBroastSyncTaskInfo_Params
{
};


struct UGMCheatOther_EmptyLandscapeActor_Params
{
};


struct UGMCheatOther_DumpGUIDCache_Params
{
	int                                                DriverIndex;                                              
};


struct UGMCheatOther_DumpActiveObject_Params
{
};


struct UGMCheatOther_DebugEnableDrawSearchLine_Params
{
	int                                                bEnabled;                                                 
};


struct UGMCheatOther_CanSeeAllUI_Params
{
	bool                                               bUIVisibility;                                            
};


struct UGMCheatOther_AutoSelectTeammateToView_Params
{
};


struct UGMCheatOther_AddDSOptimGrayPublishFlags_Params
{
	int                                                InFlagIndex;                                              
};


struct UGMCheatSkill_TryDeleteOneSkill_Params
{
	int                                                SkillID;                                                  
	bool                                               bImmediately;                                             
};


struct UGMCheatSkill_TryAddOneSkill_Params
{
	int                                                SkillID;                                                  
	bool                                               bActive;                                                  
	int                                                ButtonSlot;                                               
};


struct UGMCheatSkill_TriggerSkillWithID_Params
{
	int                                                SkillID;                                                  
	bool                                               bEnable;                                                  
};


struct UGMCheatSkill_StartSkill_Params
{
	int                                                SkillID;                                                  
};


struct UGMCheatSkill_StartMainSkill_Params
{
};


struct UGMCheatSkill_SetSkillSkinID_Params
{
	int                                                SkillID;                                                  
	int                                                SkillSkinID;                                              
};


struct UGMCheatSkill_SetSkillLevel_Params
{
	int                                                SkillID;                                                  
	int                                                SkillLevel;                                               
};


struct UGMCheatSkill_SetSkillCDTimeScale_Params
{
	int                                                SkillID;                                                  
	float                                              Scale;                                                    
	int                                                ScaleType;                                                
};


struct UGMCheatSkill_SetSkillCDIndexTimeScale_Params
{
	int                                                SkillID;                                                  
	int                                                SkillCDIndex;                                             
	float                                              Scale;                                                    
	int                                                ScaleType;                                                
};


struct UGMCheatSkill_SetAllSkillCDTimeScale_Params
{
	float                                              Scale;                                                    
};


struct UGMCheatSkill_RemoveVehicleBuffBySkill_Params
{
	int                                                SkillID;                                                  
};


struct UGMCheatSkill_RemoveVehicleBuff_Params
{
	int                                                BuffID;                                                   
};


struct UGMCheatSkill_RemoveBuffBySkill_Params
{
	int                                                SkillID;                                                  
	int                                                IsPlayer;                                                 
	int                                                LayerCount;                                               
};


struct UGMCheatSkill_RemoveBuff_Params
{
	int                                                BuffID;                                                   
	int                                                IsPlayer;                                                 
	int                                                BuffLayer;                                                
};


struct UGMCheatSkill_ReloadPVETable_Params
{
};


struct UGMCheatSkill_EnableSkillCD_Params
{
	bool                                               bEnable;                                                  
};


struct UGMCheatSkill_DynamicRemoveSkill_Params
{
	int                                                SkillID;                                                  
};


struct UGMCheatSkill_DynamicAddSkill_Params
{
	int                                                SkillID;                                                  
};


struct UGMCheatSkill_DumpSkills_Params
{
};


struct UGMCheatSkill_AddVehicleBuffBySkill_Params
{
	int                                                SkillID;                                                  
};


struct UGMCheatSkill_AddVehicleBuff_Params
{
	int                                                BuffID;                                                   
};


struct UGMCheatSkill_AddSkillToken_Params
{
	int                                                SkillID;                                                  
	bool                                               bAdd;                                                     
};


struct UGMCheatSkill_AddBuffBySkill_Params
{
	int                                                SkillID;                                                  
	int                                                IsPlayer;                                                 
};


struct UGMCheatSkill_AddBuff_Params
{
	int                                                BuffID;                                                   
	int                                                IsPlayer;                                                 
};


struct UGMCheatVehicle_VW_Seat_Params
{
	int                                                change;                                                   
};


struct UGMCheatVehicle_VehicleResetTo_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UGMCheatVehicle_VehicleMoveTo_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UGMCheatVehicle_ToggleVehicleSync_Params
{
	bool                                               Val;                                                      
};


struct UGMCheatVehicle_TeleportAndEnterVehicleWithPath_Params
{
	struct FString                                     Path;                                                     
	int                                                SeatID;                                                   
};


struct UGMCheatVehicle_SpawnVehicleWithPathAndLoc_Params
{
	struct FString                                     Path;                                                     
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	int                                                Num;                                                      
};


struct UGMCheatVehicle_SpawnVehicleWithPath_Params
{
	struct FString                                     Path;                                                     
	int                                                Num;                                                      
};


struct UGMCheatVehicle_SpawnVehicle_Params
{
};


struct UGMCheatVehicle_SpawnAllVehicle_Params
{
	struct FString                                     Path;                                                     
};


struct UGMCheatVehicle_SetSnowBoradRotationInAir_Params
{
	float                                              Pitch;                                                    
	float                                              Yaw;                                                      
	float                                              Roll;                                                     
};


struct UGMCheatVehicle_SetFuelByPercent_Params
{
	float                                              percent;                                                  
};


struct UGMCheatVehicle_ResetVehicleEngine_Params
{
};


struct UGMCheatVehicle_ReqLeaveVehicle_Params
{
};


struct UGMCheatVehicle_ReqExchangeVehicleCharacter_Params
{
	int                                                Param;                                                    
};


struct UGMCheatVehicle_ReqEnterVehicle_Params
{
	float                                              dis;                                                      
};


struct UGMCheatVehicle_ReqEnterSnowBoard_Params
{
};


struct UGMCheatVehicle_ReplaceVehicleWithPath_Params
{
	struct FString                                     Path;                                                     
};


struct UGMCheatVehicle_ReplaceVehicle_Params
{
};


struct UGMCheatVehicle_MakeVehicleFly_Params
{
	int                                                IsFly;                                                    
	bool                                               bIsUp;                                                    
};


struct UGMCheatVehicle_KillAllEnermyVehicle_Params
{
};


struct UGMCheatWeapon_ToggleShootVertify_Params
{
};


struct UGMCheatWeapon_ShowWeaponDirection_Params
{
	int                                                Time;                                                     
};


struct UGMCheatWeapon_ShowBulletInfo_Params
{
};


struct UGMCheatWeapon_SetWeaponAttrValue_Params
{
	struct FString                                     AttrName;                                                 
	float                                              Val;                                                      
};


struct UGMCheatWeapon_SetWeaponAttrReloadTable_Params
{
	struct FString                                     tableName;                                                
};


struct UGMCheatWeapon_SetShootPveVertify_Params
{
	bool                                               IsVertify;                                                
};


struct UGMCheatWeapon_SetShootPveDebug_Params
{
	bool                                               DebugShootPve;                                            
};


struct UGMCheatWeapon_SetBaseImpactDamageEntity_Params
{
	float                                              Damage;                                                   
};


struct UGMCheatWeapon_ScopeOut_Params
{
};


struct UGMCheatWeapon_ScopeIn_Params
{
};


struct UGMCheatWeapon_PrintWeaponAllState_Params
{
};


struct UGMCheatWeapon_GMSwitchWeaponSpeedScale_Params
{
	float                                              SwitchScale;                                              
};


struct UGMCheatWeapon_GMSetReportWeaponNum_Params
{
	int                                                Num;                                                      
};


struct UGMCheatWeapon_EnableCurrentWeaponInfiniteBullets_Params
{
	bool                                               bEnable;                                                  
};


struct UGMCheatWeapon_DrawDebugWeaponCrossHair_Params
{
};


struct UGMCheatWeapon_DestroyMyWeapons_Params
{
};


struct UGMCheatWeapon_DebugEnableBulletImpact_Params
{
	int                                                bEnabled;                                                 
};


struct UGMCheatWeapon_CreateAutoShootTimer_Params
{
	float                                              Interval;                                                 
};


struct UGMCheatWeapon_CollectAllPlayerWeaponPosInfo_Params
{
};


struct UGMCheatWeapon_ChangeWeaponFunction_Params
{
	int                                                NewWeaponFunction;                                        
};


struct UGMCheatWeapon_ChangeShootWeaponStrValue_Params
{
	struct FString                                     StrName;                                                  
	struct FString                                     KeyName;                                                  
	float                                              Value;                                                    
};


struct UGMCheatWeapon_AutoShootNearestEnemy_Params
{
	float                                              Interval;                                                 
	float                                              Duration;                                                 
};


struct UGMCheatWeapon_AutoShoot_Params
{
	float                                              Interval;                                                 
};


struct UGMCheatWeapon_AimForAutoShoot_Params
{
};


struct AImGuiWindowBase_ToggleWindow_Params
{
};


struct AImGuiWindowBase_ToggleDisplayMode_Params
{
};


struct AImGuiWindowBase_ShowWindowWithTabs_Params
{
	TArray<class UClass*>                              TabClasses;                                               
};


struct AImGuiWindowBase_ShowWindow_Params
{
};


struct AImGuiWindowBase_SetWindowAlpha_Params
{
	float                                              Alpha;                                                    
};


struct AImGuiWindowBase_SetDisplayMode_Params
{
	EImGuiWindowDisplayMode                            NewMode;                                                  
};


struct AImGuiWindowBase_RemoveTab_Params
{
	struct FName                                       TabID;                                                    
};


struct AImGuiWindowBase_RemoveFeature_Params
{
	struct FName                                       FeatureID;                                                
};


struct AImGuiWindowBase_IsWindowVisible_Params
{
	bool                                               ReturnValue;                                              
};


struct AImGuiWindowBase_HideWindow_Params
{
};


struct AImGuiWindowBase_GetWindowAlpha_Params
{
	float                                              ReturnValue;                                              
};


struct AImGuiWindowBase_GetTabByID_Params
{
	struct FName                                       TabID;                                                    
	class UImGuiTabBase*                               ReturnValue;                                              
};


struct AImGuiWindowBase_GetFeatureByID_Params
{
	struct FName                                       FeatureID;                                                
	class UImGuiFeatureWidget*                         ReturnValue;                                              
};


struct AImGuiWindowBase_GetDisplayMode_Params
{
	EImGuiWindowDisplayMode                            ReturnValue;                                              
};


struct AImGuiWindowBase_GetAllTabs_Params
{
	TArray<class UImGuiTabBase*>                       ReturnValue;                                              
};


struct AImGuiWindowBase_GetAllFeatures_Params
{
	TArray<class UImGuiFeatureWidget*>                 ReturnValue;                                              
};


struct AImGuiWindowBase_GetActiveTab_Params
{
	class UImGuiTabBase*                               ReturnValue;                                              
};


struct AImGuiWindowBase_AddTabWithLuaPath_Params
{
	class UClass*                                      TabClass;                                                 
	struct FString                                     InLuaFilePath;                                            
	class UImGuiTabBase*                               ReturnValue;                                              
};


struct AImGuiWindowBase_AddTabInstance_Params
{
	class UImGuiTabBase*                               Tab;                                                      
	struct FString                                     InLuaFilePath;                                            
};


struct AImGuiWindowBase_AddTab_Params
{
	class UClass*                                      TabClass;                                                 
	class UImGuiTabBase*                               ReturnValue;                                              
};


struct AImGuiWindowBase_AddLuaTab_Params
{
	struct FString                                     InLuaFilePath;                                            
	class UImGuiTabBase*                               ReturnValue;                                              
};


struct AImGuiWindowBase_AddLuaFeature_Params
{
	struct FString                                     InLuaFilePath;                                            
	class UImGuiFeatureWidget*                         ReturnValue;                                              
};


struct AImGuiWindowBase_AddFeatureWithLuaPath_Params
{
	class UClass*                                      FeatureClass;                                             
	struct FString                                     InLuaFilePath;                                            
	class UImGuiFeatureWidget*                         ReturnValue;                                              
};


struct AImGuiWindowBase_AddFeatureInstance_Params
{
	class UImGuiFeatureWidget*                         Feature;                                                  
	struct FString                                     InLuaFilePath;                                            
};


struct AImGuiWindowBase_AddFeature_Params
{
	class UClass*                                      FeatureClass;                                             
	class UImGuiFeatureWidget*                         ReturnValue;                                              
};


struct AImGuiWindowBase_ActivateTab_Params
{
	struct FName                                       TabID;                                                    
};


struct UImGuiWindowManager_ToggleWindow_Params
{
	class UClass*                                      WindowClass;                                              
};


struct UImGuiWindowManager_ShowWindowWithTabs_Params
{
	class UClass*                                      WindowClass;                                              
	TArray<class UClass*>                              TabClasses;                                               
};


struct UImGuiWindowManager_ShowWindow_Params
{
	class UClass*                                      WindowClass;                                              
};


struct UImGuiWindowManager_HideWindow_Params
{
	class UClass*                                      WindowClass;                                              
};


struct UImGuiWindowManager_HideAllWindows_Params
{
};


struct UImGuiWindowManager_HasWindow_Params
{
	class UClass*                                      WindowClass;                                              
	bool                                               ReturnValue;                                              
};


struct UImGuiWindowManager_GetWindow_Params
{
	class UClass*                                      WindowClass;                                              
	class AImGuiWindowBase*                            ReturnValue;                                              
};


struct UImGuiWindowManager_GetOrCreateWindow_Params
{
	class UClass*                                      WindowClass;                                              
	class AImGuiWindowBase*                            ReturnValue;                                              
};


struct UImGuiWindowManager_GetAllWindows_Params
{
	TArray<class AImGuiWindowBase*>                    ReturnValue;                                              
};


struct UImGuiWindowManager_Get_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UImGuiWindowManager*                         ReturnValue;                                              
};


struct UImGuiWindowManager_DestroyAllWindows_Params
{
};


struct AMemLeakTestGameMode_ForceGC_Params
{
};


struct UQPSBPLibrary_SwitchUIWidgetShowFromUserWidget_Params
{
	struct FName                                       ContainName;                                              
	struct FString                                     UserWidgetName;                                           
	struct FString                                     WidgetName;                                               
};


struct UQPSBPLibrary_SwitchUIWidgetShow_Params
{
	struct FName                                       ContainName;                                              
	struct FString                                     WidgetName;                                               
};


struct UQPSBPLibrary_SwitchUIContainsShow_Params
{
	struct FName                                       Name;                                                     
};


struct UQPSBPLibrary_IsPublishVersion_Params
{
	bool                                               ReturnValue;                                              
};


struct UQPSBPLibrary_GetHZBValue_Params
{
	int                                                ReturnValue;                                              
};


struct UQPSBPLibrary_GetDistanceCullingFactor_Params
{
	float                                              ReturnValue;                                              
};

}

