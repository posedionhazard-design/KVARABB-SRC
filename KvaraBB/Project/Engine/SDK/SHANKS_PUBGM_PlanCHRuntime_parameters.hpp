#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct APlanCH_GameMode_HandleNavigationInfo_Params
{
	class AController*                                 Controller;                                               
};


struct APlanCH_GameMode_GetPlayerStart_Params
{
	int                                                LandId;                                                   
	int                                                SkinID;                                                   
	class ASTExtraPlayerStart*                         ReturnValue;                                              
};


struct APlanCH_GameMode_DSPlayerKickOut_Params
{
	uint64_t                                           UID;                                                      
	struct FName                                       PlayerType;                                               
	struct FString                                     ExitReason;                                               
};


struct APlanCH_GameState_OnRep_PartyDanceLeadInfo_5_Params
{
};


struct APlanCH_GameState_OnRep_PartyDanceLeadInfo_4_Params
{
};


struct APlanCH_GameState_OnRep_PartyDanceLeadInfo_3_Params
{
};


struct APlanCH_GameState_OnRep_PartyDanceLeadInfo_2_Params
{
};


struct APlanCH_GameState_LuaOnRep_PartyDanceLeadInfo_Params
{
	int                                                LandId;                                                   
};


struct APlanCH_GameState_ChangePartyLeadInfo_Params
{
	int                                                LandId;                                                   
	bool                                               bOccupied;                                                
	int                                                BeginTime;                                                
	int                                                EndTime;                                                  
	struct FString                                     PlayerUID;                                                
};


struct APlanCH_PlayerState_RequestPaintDecal_Params
{
	int                                                DecalId;                                                  
	struct FTransform                                  TargetTransform;                                          
};


struct APlanCH_PlayerState_OnRep_SkinId_Params
{
};


struct APlanCH_PlayerState_OnRep_LandId_Params
{
};


struct APlanCH_PlayerState_InitLandId_Params
{
};


struct APlanCH_PlayerState_CanPaintDecal_Params
{
	int                                                DecalId;                                                  
	bool                                               ReturnValue;                                              
};


struct UPlanCHBinFileHelper_Init_Params
{
	int                                                z4BufferSize;                                             
	int                                                zeroListSize;                                             
	int                                                ReturnValue;                                              
};


struct UPlanCHGameplayStatics_SpinEvaluate_Params
{
	float                                              S;                                                        
	float                                              T;                                                        
	float                                              ReturnValue;                                              
};


struct UPlanCHGameplayStatics_SetPlayerMovementBlendTime_Params
{
	class ASTExtraPlayerCharacter*                     PlayerChar;                                               
	int                                                nType;                                                    
	float                                              BlendTime;                                                
	bool                                               ReturnValue;                                              
};


struct UPlanCHGameplayStatics_GetActorBound_Params
{
	class AActor*                                      Actor;                                                    
	struct FVector                                     Size;                                                     
};


struct UPlanCHGameplayStatics_ChangeLightChannel_Params
{
	class UPrimitiveComponent*                         InComponent;                                              
	int                                                InChannelBitMask;                                         
};


struct UPlanCHMapData_RemovePlayerItem_Params
{
	class ASTExtraPlayerCharacter*                     PlayerCharacterItem;                                      
	bool                                               ReturnValue;                                              
};


struct UPlanCHMapData_AddPlayerItem_Params
{
	class ASTExtraPlayerCharacter*                     PlayerCharacterItem;                                      
	class UWidget*                                     PlayerInfoBPItem;                                         
	class UWidget*                                     PlayerInfoRotWidgetItem;                                  
	struct FVector                                     OffsetLocation;                                           
	bool                                               ReturnValue;                                              
};


struct APlanCHSpectatorPawn_OnSpectatorRestart_Params
{
};


struct APlanCHSpectatorPawn_MoveRight_Params
{
	float                                              Val;                                                      
};


struct APlanCHSpectatorPawn_MoveForward_Params
{
	float                                              Val;                                                      
};

}

