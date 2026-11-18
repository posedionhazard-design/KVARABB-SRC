#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UAutoTestInterface_StarJumpPlane_Params
{
};


struct UAutoTestSubsystem_Swipe_Params
{
	struct FString                                     InPath;                                                   
	float                                              Duringtime;                                               
	int                                                StartX;                                                   
	int                                                StartY;                                                   
	int                                                EndX;                                                     
	int                                                EndY;                                                     
	int                                                TouchIndex;                                               
	int                                                ControllerId;                                             
	int                                                ScreensizeX;                                              
	int                                                ScreensizeY;                                              
};


struct UAutoTestSubsystem_StopRecordInput_Params
{
};


struct UAutoTestSubsystem_StopPlayInput_Params
{
};


struct UAutoTestSubsystem_StartRemoteControl_Params
{
	struct FString                                     Name;                                                     
	struct FString                                     Host;                                                     
	int                                                Port;                                                     
};


struct UAutoTestSubsystem_StartRecordInput_Params
{
	struct FString                                     Command;                                                  
};


struct UAutoTestSubsystem_StartPlayInput_Params
{
	struct FString                                     Filename;                                                 
};


struct UAutoTestSubsystem_SetCustomRouteLine_Params
{
};


struct UAutoTestSubsystem_RegisterInputProcessor_Params
{
};


struct UAutoTestSubsystem_PVEAutoTestGetEnemyLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_PubgmSimulateActionClientEx_Params
{
	int                                                SimulateType;                                             
};


struct UAutoTestSubsystem_ParsePoint_Params
{
	struct FString                                     SrcStr;                                                   
	struct FVector                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_OpenDebugg_Params
{
};


struct UAutoTestSubsystem_OnStopAutoTest_Params
{
};


struct UAutoTestSubsystem_OnStartAutoTest_Params
{
};


struct UAutoTestSubsystem_OnGameStart_Params
{
};


struct UAutoTestSubsystem_OnGameEnd_Params
{
};


struct UAutoTestSubsystem_IsUIAutoTest_Params
{
	bool                                               ReturnValue;                                              
};


struct UAutoTestSubsystem_IsSecAutoRunTest_Params
{
	bool                                               ReturnValue;                                              
};


struct UAutoTestSubsystem_IsGAutomatorTest_Params
{
	bool                                               ReturnValue;                                              
};


struct UAutoTestSubsystem_IsAutoRunTestGamePVEProfile_Params
{
	bool                                               ReturnValue;                                              
};


struct UAutoTestSubsystem_IsAutoRunTestGamePVE_Params
{
	bool                                               ReturnValue;                                              
};


struct UAutoTestSubsystem_IsAutoRunTestGameBindComponent_Params
{
	bool                                               ReturnValue;                                              
};


struct UAutoTestSubsystem_IsAutoRunTestGame_Params
{
	bool                                               ReturnValue;                                              
};


struct UAutoTestSubsystem_GetWidgetPathByPos_Params
{
	int                                                StartX;                                                   
	int                                                StartY;                                                   
	int                                                ScreensizeX;                                              
	int                                                ScreensizeY;                                              
};


struct UAutoTestSubsystem_GetRuntimeProfileData_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_GetAutoTestInterface_Params
{
	class UAutoTestInterface*                          ReturnValue;                                              
};


struct UAutoTestSubsystem_GetAutoRunTestServerIdx_Params
{
	int                                                ReturnValue;                                              
};


struct UAutoTestSubsystem_GetAutoRunPassWD_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_GetAutoRunLuaTest_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_GetAutoRunAccount_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_CloseDebugg_Params
{
};


struct UAutoTestSubsystem_ClickButton_Params
{
	struct FString                                     InPath;                                                   
	float                                              Duringtime;                                               
	int                                                StartX;                                                   
	int                                                StartY;                                                   
	int                                                EndX;                                                     
	int                                                EndY;                                                     
	int                                                TouchIndex;                                               
	int                                                ControllerId;                                             
	int                                                ScreensizeX;                                              
	int                                                ScreensizeY;                                              
	struct FString                                     UsePos;                                                   
};


struct UAutoTestSubsystem_CheckStaticMesh_Params
{
	float                                              Radius;                                                   
	float                                              DeformationDistance;                                      
	bool                                               CheckComplexCollisionQuery;                               
	struct FString                                     MapName;                                                  
};


struct UAutoTestSubsystem_AutoTestWaitForUIWithName_Params
{
	struct FString                                     UIName;                                                   
};


struct UAutoTestSubsystem_AutoTestWaitForSecond_Params
{
	int                                                sec;                                                      
};


struct UAutoTestSubsystem_AutoTestWaitForJumpPlane_Params
{
	bool                                               ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestVehicleDriverShoot_Params
{
};


struct UAutoTestSubsystem_AutoTestVaultWall_Params
{
};


struct UAutoTestSubsystem_AutoTestUsePropSkillClientEx_Params
{
};


struct UAutoTestSubsystem_AutoTestUseItemClientEx_Params
{
	int                                                ItemId;                                                   
};


struct UAutoTestSubsystem_AutoTestUseItem_Params
{
	int                                                ItemId;                                                   
};


struct UAutoTestSubsystem_AutoTestUpgradePropSkillClientEx_Params
{
	int                                                ItemId;                                                   
};


struct UAutoTestSubsystem_AutoTestToggleVehicleSync_Params
{
	bool                                               Val;                                                      
};


struct UAutoTestSubsystem_AutoTestThrowBoomOnlyClientEx_Params
{
	int                                                SkillID;                                                  
};


struct UAutoTestSubsystem_AutoTestThrowBoom_Params
{
	int                                                SkillID;                                                  
};


struct UAutoTestSubsystem_AutoTestSwitchWeapon_Params
{
	int                                                WeaponType;                                               
};


struct UAutoTestSubsystem_AutoTestSwitchMode_Params
{
	struct FString                                     FunName;                                                  
};


struct UAutoTestSubsystem_AutoTestStopRecordStats_Params
{
};


struct UAutoTestSubsystem_AutoTestStatsCommand_Params
{
	struct FString                                     Command;                                                  
};


struct UAutoTestSubsystem_AutoTestStartRecordStats_Params
{
	struct FString                                     FileStr;                                                  
};


struct UAutoTestSubsystem_AutoTestStartFireOnlyClientEx_Params
{
	int                                                InX;                                                      
	int                                                InY;                                                      
	int                                                InZ;                                                      
	int                                                sec;                                                      
};


struct UAutoTestSubsystem_AutoTestStartFire_Params
{
	int                                                InX;                                                      
	int                                                InY;                                                      
	int                                                InZ;                                                      
	int                                                sec;                                                      
};


struct UAutoTestSubsystem_AutoTestSpecating_Params
{
	int                                                LeftTeamCnt;                                              
};


struct UAutoTestSubsystem_AutoTestSpawnVehicle_Params
{
	struct FString                                     ResPath;                                                  
};


struct UAutoTestSubsystem_AutoTestSpawnAI_Params
{
	int                                                ID;                                                       
	float                                              PosiX;                                                    
	float                                              PosiY;                                                    
	float                                              PosiZ;                                                    
};


struct UAutoTestSubsystem_AutoTestSetVehicleRotation_Params
{
	int                                                InX;                                                      
	int                                                InY;                                                      
	int                                                InZ;                                                      
};


struct UAutoTestSubsystem_AutoTestSetRecordFrequency_Params
{
	int                                                Frequency;                                                
};


struct UAutoTestSubsystem_AutoTestSetGamePaused_Params
{
	bool                                               IsPause;                                                  
};


struct UAutoTestSubsystem_AutoTestSetActorYaw_Params
{
	float                                              InRate;                                                   
};


struct UAutoTestSubsystem_AutoTestSetActorRotation_Params
{
	float                                              InRate;                                                   
	float                                              InSpeed;                                                  
};


struct UAutoTestSubsystem_AutoTestSetActorPitch_Params
{
	float                                              InRate;                                                   
};


struct UAutoTestSubsystem_AutoTestSetActorFacePointWithZ_Params
{
	int                                                InX;                                                      
	int                                                InY;                                                      
	int                                                InZ;                                                      
};


struct UAutoTestSubsystem_AutoTestSetActorFacePoint_Params
{
	int                                                InX;                                                      
	int                                                InY;                                                      
	int                                                InZ;                                                      
};


struct UAutoTestSubsystem_AutoTestSendBuffertoSvr_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       
};


struct UAutoTestSubsystem_AutoTestReplaceMatByActorName_Params
{
	struct FString                                     actorName;                                                
	struct FString                                     NewMatName;                                               
	int                                                RComp;                                                    
	int                                                GComp;                                                    
	int                                                BComp;                                                    
};


struct UAutoTestSubsystem_AutoTestReloadOnlyClientEx_Params
{
};


struct UAutoTestSubsystem_AutoTestPickupItemOnlyClientEx_Params
{
	struct FVector2D                                   ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestPickupItem_Params
{
	int                                                ItemId;                                                   
	struct FVector2D                                   ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestOpenTraceRPC_Params
{
};


struct UAutoTestSubsystem_AutoTestOpenScope_Params
{
	bool                                               bOpenScope;                                               
};


struct UAutoTestSubsystem_AutoTestOpenDoorOnlyClientEx_Params
{
	int                                                bOpen;                                                    
};


struct UAutoTestSubsystem_AutoTestMustDie_Params
{
	int                                                LeftTeamCnt;                                              
};


struct UAutoTestSubsystem_AutoTestMoveVehicleForward_Params
{
	float                                              Speed;                                                    
	float                                              Rate;                                                     
	float                                              sec;                                                      
};


struct UAutoTestSubsystem_AutoTestMoveToPoint_Params
{
	int                                                InX;                                                      
	int                                                InY;                                                      
	int                                                InZ;                                                      
};


struct UAutoTestSubsystem_AutoTestJumpPlane_Params
{
	int                                                sec;                                                      
};


struct UAutoTestSubsystem_AutoTestJump_Params
{
};


struct UAutoTestSubsystem_AutoTestIsOnVehicle_Params
{
	bool                                               ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestIsDriver_Params
{
	bool                                               ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestIsCurrentCommandFinished_Params
{
	bool                                               ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestInputMovement_Params
{
	float                                              InRate;                                                   
};


struct UAutoTestSubsystem_AutoTestInputKey_Params
{
	struct FString                                     Key;                                                      
	TEnumAsByte<EInputEvent>                           EventType;                                                
	float                                              AmountDepressed;                                          
	bool                                               bGamepad;                                                 
};


struct UAutoTestSubsystem_AutoTestGMVehicleMoveAndTowardClientEx_Params
{
	float                                              InX;                                                      
	float                                              InY;                                                      
	float                                              InZ;                                                      
	float                                              InX1;                                                     
	float                                              InY1;                                                     
	float                                              InZ1;                                                     
};


struct UAutoTestSubsystem_AutoTestGMGotoClientEx_Params
{
	int                                                InX;                                                      
	int                                                InY;                                                      
	int                                                InZ;                                                      
};


struct UAutoTestSubsystem_AutoTestGMGoto_Params
{
	int                                                InX;                                                      
	int                                                InY;                                                      
	int                                                InZ;                                                      
};


struct UAutoTestSubsystem_AutoTestGMCommand_Params
{
	struct FString                                     Command;                                                  
};


struct UAutoTestSubsystem_AutoTestGetVehicleLocationClientEx_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestGetVehicleLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestGetRuntimeStats_Params
{
};


struct UAutoTestSubsystem_AutoTestGetRenderTimeDetail_Params
{
};


struct UAutoTestSubsystem_AutoTestGetPrimitivesDetail_Params
{
};


struct UAutoTestSubsystem_AutoTestGetOnVehicle_Params
{
	int                                                SeatType;                                                 
};


struct UAutoTestSubsystem_AutoTestGetOffVehicle_Params
{
};


struct UAutoTestSubsystem_AutoTestGetNearVehiclePos_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestGetMemoryDetail_Params
{
};


struct UAutoTestSubsystem_AutoTestGetMapName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestGetLuaReturnValue_Params
{
	struct FString                                     retval;                                                   
};


struct UAutoTestSubsystem_AutoTestGetGameModeState_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestGetFrameInfo_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestGetDrawCallDetail_Params
{
};


struct UAutoTestSubsystem_AutoTestGetDis2D_Params
{
	int                                                InX1;                                                     
	int                                                InY1;                                                     
	int                                                InZ1;                                                     
	int                                                InX2;                                                     
	int                                                InY2;                                                     
	int                                                InZ2;                                                     
	int                                                ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestGetCircleLocationClientEx_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestGetAvailableDeadBoxItem_Params
{
	TArray<int>                                        ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestGetAllActorNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestGetActorName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestGetActorLocationListClientEx_Params
{
	int                                                ActorType;                                                
	float                                              RangeRadius;                                              
	TArray<struct FVector>                             ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestGetActorLocation_Params
{
	struct FString                                     PlayerName;                                               
	struct FVector                                     ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestForceVehiclePosPullClientEx_Params
{
	bool                                               bNext;                                                    
	float                                              ReturnValue;                                              
};


struct UAutoTestSubsystem_AutoTestForceDeleteCmdAnim_Params
{
};


struct UAutoTestSubsystem_AutoTestEnableUITest_Params
{
};


struct UAutoTestSubsystem_AutoTestEnableTickOrVisibilityByActorName_Params
{
	struct FString                                     actorName;                                                
	bool                                               bEnableTick;                                              
	bool                                               bShow;                                                    
};


struct UAutoTestSubsystem_AutoTestEnableActorPrimitiveHighlight_Params
{
	struct FString                                     actorName;                                                
	bool                                               bEnable;                                                  
	bool                                               bInCanBeOccluded;                                         
	bool                                               bOverrideColor;                                           
	struct FLinearColor                                Color;                                                    
};


struct UAutoTestSubsystem_AutoTestDropItemClientEx_Params
{
	int                                                ItemId;                                                   
	int                                                nCount;                                                   
};


struct UAutoTestSubsystem_AutoTestDrawBox_Params
{
	float                                              LocationX;                                                
	float                                              LocationY;                                                
	float                                              LocationZ;                                                
	float                                              ExtentX;                                                  
	float                                              ExtentY;                                                  
	float                                              ExtentZ;                                                  
};


struct UAutoTestSubsystem_AutoTestContinuousMoveTo_Params
{
	float                                              InX;                                                      
	float                                              InY;                                                      
	float                                              InZ;                                                      
};


struct UAutoTestSubsystem_AutoTestConsoleCommand_Params
{
	struct FString                                     Command;                                                  
};


struct UAutoTestSubsystem_AutoTestCloseTraceRPC_Params
{
};


struct UAutoTestSubsystem_AutoTestAutoMoveForward_Params
{
	bool                                               StartAutoMoveForward;                                     
};


struct UAutoTestSubsystem_AutoTestAddItem_Params
{
	int                                                ItemId;                                                   
	int                                                nCount;                                                   
};


struct UAutoTestSubsystem_AutoMoveToTargetPosClientEx_Params
{
	struct FVector                                     targetPos;                                                
};


struct UAutoTestSubsystem_AutoMovePawnToTargetPosClientEx_Params
{
	struct FVector                                     targetPos;                                                
};


struct UPubgmAutoRun_VehicleTowardTo_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UPubgmAutoRun_VehicleMoveTo_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct UPubgmAutoRun_VehicleMoveAndTowardTo_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
	float                                              X1;                                                       
	float                                              Y1;                                                       
	float                                              Z1;                                                       
};


struct UPubgmAutoRun_OnPubgmAutoRunSimulateAction__DelegateSignature_Params
{
	int                                                SimActionType;                                            
};


struct UPubgmAutoRun_NeedCmdAutoRun_Params
{
	bool                                               ReturnValue;                                              
};


struct UPubgmAutoRun_NativeSimulateAction_Params
{
	int                                                SimActionType;                                            
};


struct UPubgmAutoRun_InitRoutePoint_Params
{
};


struct UPubgmAutoRun_GMGotoPosition_Params
{
	int                                                X;                                                        
	int                                                Y;                                                        
	int                                                Z;                                                        
};


struct UPubgmAutoRun_GetRangeActorsPostions_Params
{
	int                                                ActorType;                                                
	struct FVector                                     OriginPos;                                                
	float                                              RangeRadius;                                              
	TArray<struct FVector>                             ReturnValue;                                              
};


struct UPubgmAutoRun_GetPoisonCircleLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UPubgmAutoRun_GetPlayerSpeed_Params
{
	int                                                SpeedIdx;                                                 
	float                                              ReturnValue;                                              
};


struct UPubgmAutoRun_GetNearestXTPointToVehicle_Params
{
	struct FTransform                                  FirstPoint;                                               
	struct FTransform                                  SecendPoint;                                              
	bool                                               bNext;                                                    
	bool                                               ReturnValue;                                              
};


struct UPubgmAutoRun_ForceVehiclePosPull_Params
{
	bool                                               bNext;                                                    
	float                                              ReturnValue;                                              
};


struct URemoteControlHelper_GetRuntimeStats_Params
{
	struct FString                                     ReturnValue;                                              
};


struct URemoteControlHelper_GetDeviceName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct URemoteControlHelper_AutoPickup_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   
};


struct URemoteControlManager_Tick_Params
{
	float                                              DeltaTime;                                                
	bool                                               ReturnValue;                                              
};


struct URemoteControlManager_Stop_Params
{
};


struct URemoteControlManager_BeginWithFile_Params
{
	bool                                               ReturnValue;                                              
};


struct URemoteControlManager_Begin_Params
{
	struct FString                                     Name;                                                     
	struct FString                                     Host;                                                     
	int                                                Port;                                                     
	bool                                               ReturnValue;                                              
};


struct UShootWeaponAutoTestHandle_OnWeaponShootBullet_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              
	class ASTExtraShootWeaponBulletBase*               Bullet;                                                   
};


struct UShootWeaponAutoTestHandle_OnBulletImpact_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              
	class ASTExtraShootWeaponBulletBase*               Bullet;                                                   
	struct FHitResult                                  HitRet;                                                   
};


struct UShootWeaponAutoTestHandle_OnBulletDamage_Params
{
	int                                                ShootID;                                                  
	float                                              Damage;                                                   
};


struct UShootWeaponAutoTestHandle_GenerateBulletsImpactJsonStringAndClearData_Params
{
	struct FString                                     ReturnValue;                                              
};

}

