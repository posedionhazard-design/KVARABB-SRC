#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UCarryBackMCAnimInstance_HandlePlayerPoseChange_Params
{
	TEnumAsByte<ESTEPoseState>                         LastPose;                                                 
	TEnumAsByte<ESTEPoseState>                         NewPose;                                                  
};


struct UCharLocomotionMCAnimInstance_SwitchingPoseFinishCallback_Params
{
};


struct UCharLocomotionMCAnimInstance_SetViewPointLimitByPoseStatus_Params
{
	ECharacterAnimBlendPoseType                        InPoseType;                                               
	bool                                               bEnter;                                                   
};


struct UCharLocomotionMCAnimInstance_SetInterruptPose_Params
{
	bool                                               bUseInterruptPose;                                        
	TEnumAsByte<ECharacterPoseType>                    InterruptPose;                                            
};


struct UCharLocomotionMCAnimInstance_LeaveStateCallback_Params
{
};


struct UCharLocomotionMCAnimInstance_HandleStateLeave_Params
{
	EPawnState                                         LeaveState;                                               
};


struct UCharLocomotionMCAnimInstance_HandlePlayerPoseChange_Params
{
	TEnumAsByte<ESTEPoseState>                         LastPose;                                                 
	TEnumAsByte<ESTEPoseState>                         NewPose;                                                  
};


struct UCharMainMCAnimInstance_SetClimbAnimation_Params
{
	class UAnimSequence*                               AnimSequence;                                             
	bool                                               bFlag;                                                    
};


struct UCharMainMCAnimInstance_HandlePlayerAnimMontagePlayExtraDelegate_Params
{
	class UAnimMontage*                                MontageToPlay;                                            
	bool                                               bWantsPlay;                                               
	float                                              PlayRate;                                                 
	struct FName                                       StartSection;                                             
	float                                              StartPos;                                                 
	bool                                               bOnlyJumpToSectionWhilePlaying;                           
	struct FName                                       IgnoreStopSection;                                        
};


struct UCharMainMCAnimInstance_HandlePlayerAnimMontagePlayDelegate_Params
{
	class UAnimMontage*                                MontageToPlay;                                            
	bool                                               bWantsPlay;                                               
	float                                              PlayRate;                                                 
	struct FName                                       StartSection;                                             
	float                                              StartPos;                                                 
};


struct UCharMainMCAnimInstance_HandleAnimPlaySlotAnimDelegate_Params
{
	class UAnimSequenceBase*                           AnimSequence;                                             
	bool                                               bWantsPlay;                                               
	struct FName                                       SlotName;                                                 
	float                                              PlayRate;                                                 
	float                                              BlendTime;                                                
	unsigned char                                      InLoopCount;                                              
	float                                              InStartPos;                                               
	float                                              LoopStartPos;                                             
};


struct AMainCityGameMode_ReplayRecoverGenerateDSCheckpoint_Params
{
	struct FString                                     InReplayName;                                             
};


struct AMainCityGameMode_PreInitGameState_Params
{
};


struct AMainCityGameMode_InternalNotifyPlayerExit_Params
{
	class ASTExtraPlayerController*                    PlayerController;                                         
};


struct AMainCityGameMode_InitConsoleVar_Params
{
	struct FString                                     Command;                                                  
};


struct AMainCityGameMode_GenReplayDone_Params
{
	struct FString                                     ErrorMsg;                                                 
};


struct AMainCityGameMode_DSPlayerKickOut_Params
{
	uint64_t                                           UID;                                                      
	struct FName                                       PlayerType;                                               
	struct FString                                     ExitReason;                                               
};


struct UMainCityGameplayStatics_GetProjectSavedDir_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UMainCityHelper_SetSwapRolesForReplay_Params
{
	class AActor*                                      InActor;                                                  
	int                                                ReturnValue;                                              
};


struct AMainCityPlayerState_RefreshAliasInfo_Params
{
	struct FGameModePlayerAliasInfo                    PlayerAliasInfo;                                          
};


struct UMainCitySeesawAnimInstance_SyncAttachedActorAnimation_Params
{
};


struct UMainCitySubsystem_SetHasInitLobbyAvatar_Params
{
	class ASTExtraPlayerController*                    InController;                                             
	bool                                               bInValue;                                                 
};


struct UMainCitySubsystem_ResetMainCityGameState_Params
{
	class ASTExtraGameStateBase*                       InGameState;                                              
};


struct UMainCitySubsystem_PreShutdownUnrealNetwork_Params
{
};


struct UMainCitySubsystem_PreEnterMainCityBattle_Params
{
};


struct UMainCitySubsystem_PreDestroyAutonomousChar_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
};


struct UMainCitySubsystem_PostShutdownUnrealNetwork_Params
{
};


struct UMainCitySubsystem_PostPlayerActorChannelOpen_Params
{
};


struct UMainCitySubsystem_PostInitialize_Params
{
};


struct UMainCitySubsystem_PostEnterMainCityBattle_Params
{
};


struct UMainCitySubsystem_PostDeinitialize_Params
{
};


struct UMainCitySubsystem_PostClearActors_Params
{
};


struct UMainCitySubsystem_KeepActor_Params
{
	class AActor*                                      InActor;                                                  
};


struct UMainCitySubsystem_InitStandalonePawn_Params
{
	class UClass*                                      InClass;                                                  
	struct FVector                                     InLocation;                                               
	struct FRotator                                    InRotation;                                               
	class ASTExtraBaseCharacter*                       ReturnValue;                                              
};


struct UMainCitySubsystem_ClearActors_Params
{
};


struct UReplayRecoverSubsystem_WriteLuaInfo_Params
{
	TArray<unsigned char>                              InData;                                                   
};


struct UReplayRecoverSubsystem_SetReplayName_Params
{
	struct FString                                     InReplayName;                                             
};


struct UReplayRecoverSubsystem_ReadLuaInfo_Params
{
	TArray<unsigned char>                              ReturnValue;                                              
};


struct UReplayRecoverSubsystem_PreInitializeWithParams_Params
{
	class UWorld*                                      InWorld;                                                  
	class UNetDriver*                                  InDriver;                                                 
};


struct UReplayRecoverSubsystem_PreInitializeForWorld_Params
{
	struct FString                                     InURLStr;                                                 
	class UWorld*                                      InWorld;                                                  
	class USTExtraGameInstance*                        InGameInstance;                                           
};


struct UReplayRecoverSubsystem_PreInitializeForGameMode_Params
{
	struct FString                                     InURLStr;                                                 
	class UWorld*                                      InWorld;                                                  
	class AGameStateBase*                              InGameState;                                              
};


struct UReplayRecoverSubsystem_PreDemoPlaybackEnded_Params
{
	class UWorld*                                      InWorld;                                                  
};


struct UReplayRecoverSubsystem_PostInitializeWithParams_Params
{
	class UWorld*                                      InWorld;                                                  
	class UNetDriver*                                  InDriver;                                                 
};


struct UReplayRecoverSubsystem_PostInitializeForWorld_Params
{
	struct FString                                     InURLStr;                                                 
	class UWorld*                                      InWorld;                                                  
	class USTExtraGameInstance*                        InGameInstance;                                           
};


struct UReplayRecoverSubsystem_PostInitializeForGameMode_Params
{
	struct FString                                     InURLStr;                                                 
	class UWorld*                                      InWorld;                                                  
	class AGameStateBase*                              InGameState;                                              
};


struct UReplayRecoverSubsystem_LuaSaveLuaInfo_Params
{
	bool                                               ReturnValue;                                              
};


struct UReplayRecoverSubsystem_LoadReplayDone_Params
{
	struct FString                                     ErrorMsg;                                                 
};


struct UReplayRecoverSubsystem_IsVersionValid_Params
{
	struct FString                                     RecordVersion;                                            
	struct FString                                     PlayerVersion;                                            
	bool                                               ReturnValue;                                              
};


struct UReplayRecoverSubsystem_IsTimeValid_Params
{
	int64_t                                            RecordTime;                                               
	int64_t                                            PlayTime;                                                 
	bool                                               ReturnValue;                                              
};


struct UReplayRecoverSubsystem_GenReplayDone_Params
{
	struct FString                                     ErrorMsg;                                                 
};


struct UReplayRecoverSubsystem_DeleteExpiredFiles_Params
{
	float                                              MaxKeepHours;                                             
};


struct UReplayRecoverSubsystem_ClearRecoverFile_Params
{
};

}

