#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBinFileHelper_Init_Params
{
	int                                                z4BufferSize;                                             
	int                                                zeroListSize;                                             
	int                                                ReturnValue;                                              
};


struct UMapBarrierWidget_SetMapStructureData_Params
{
	TArray<struct FStructureData>                      InMapStructureData;                                       
};


struct UMapBarrierWidget_SetMapMidPoint_Params
{
	struct FVector2D                                   InMapMidPoint;                                            
};


struct UMapBarrierWidget_SetLevelBoundExtent_Params
{
	int                                                InLevelBoundExtent;                                       
};


struct UMapBarrierWidget_SetGridSize_Params
{
	float                                              InGridSize;                                               
};


struct APlanPH_GameMode_HandleNavigationInfo_Params
{
	class AController*                                 Controller;                                               
};


struct APlanPH_GameMode_GetPlayerStart_Params
{
	int                                                LandId;                                                   
	class ASTExtraPlayerStart*                         ReturnValue;                                              
};


struct APlanPH_GameMode_DSPlayerKickOut_Params
{
	uint64_t                                           UID;                                                      
	struct FName                                       PlayerType;                                               
	struct FString                                     ExitReason;                                               
};


struct APlanPH_GameState_OnRep_PartyDanceLeadInfo_5_Params
{
};


struct APlanPH_GameState_OnRep_PartyDanceLeadInfo_4_Params
{
};


struct APlanPH_GameState_OnRep_PartyDanceLeadInfo_3_Params
{
};


struct APlanPH_GameState_OnRep_PartyDanceLeadInfo_2_Params
{
};


struct APlanPH_GameState_LuaOnRep_PartyDanceLeadInfo_Params
{
	int                                                LandId;                                                   
};


struct APlanPH_GameState_ChangePartyLeadInfo_Params
{
	int                                                LandId;                                                   
	bool                                               bOccupied;                                                
	int                                                BeginTime;                                                
	int                                                EndTime;                                                  
	struct FString                                     PlayerUID;                                                
	bool                                               bIsWedding;                                               
};


struct APlanPH_PlayerState_RequestPaintDecal_Params
{
	int                                                DecalId;                                                  
	struct FTransform                                  TargetTransform;                                          
};


struct APlanPH_PlayerState_OnRep_LandId_Params
{
};


struct APlanPH_PlayerState_InitLandId_Params
{
};


struct APlanPH_PlayerState_CanPaintDecal_Params
{
	int                                                DecalId;                                                  
	bool                                               ReturnValue;                                              
};


struct UPlanPHCustomStaticMeshComponent_BPPreSetStaticMesh_Params
{
	class UStaticMesh*                                 NewMesh;                                                  
};


struct UPlanPHCustomStaticMeshComponent_BPPostSetStaticMesh_Params
{
	class UStaticMesh*                                 NewMesh;                                                  
};


struct APlanPHDoor_Refresh_DoorCollisionChanel_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      
	bool                                               bEnableCollision;                                         
};


struct APlanPHDoor_DoorAniFinish_Params
{
	class UStaticMeshComponent*                        InDoorCheckBox;                                           
	bool                                               Bright;                                                   
};


struct UPlanPHGameplayStatics_SpinEvaluate_Params
{
	float                                              S;                                                        
	float                                              T;                                                        
	float                                              ReturnValue;                                              
};


struct UPlanPHGameplayStatics_SetPlayerMovementBlendTime_Params
{
	class ASTExtraPlayerCharacter*                     PlayerChar;                                               
	int                                                nType;                                                    
	float                                              BlendTime;                                                
	bool                                               ReturnValue;                                              
};


struct UPlanPHGameplayStatics_GetActorBound_Params
{
	class AActor*                                      Actor;                                                    
	struct FVector                                     Size;                                                     
};


struct UPlanPHGameplayStatics_ChangeLightChannel_Params
{
	class UPrimitiveComponent*                         InComponent;                                              
	int                                                InChannelBitMask;                                         
};


struct APlanPHHomeArea_UpdateEditableArea_Params
{
	struct FIntVector                                  InMinGridIndexXYZ;                                        
	struct FIntVector                                  InMaxGridIndexXYZ;                                        
};


struct UPlanPHHomeAreaVisualizationComponent_ShowGrids_Params
{
	bool                                               InBShow;                                                  
};


struct UPlanPHMapData_RemovePlayerItem_Params
{
	class ASTExtraPlayerCharacter*                     PlayerCharacterItem;                                      
	bool                                               ReturnValue;                                              
};


struct UPlanPHMapData_AddPlayerItem_Params
{
	class ASTExtraPlayerCharacter*                     PlayerCharacterItem;                                      
	class UWidget*                                     PlayerInfoBPItem;                                         
	class UWidget*                                     PlayerInfoRotWidgetItem;                                  
	struct FVector                                     OffsetLocation;                                           
	bool                                               ReturnValue;                                              
};


struct UPlanPHProjectionComponent_SubmitProjection_Params
{
};


struct UPlanPHProjectionComponent_SetReceiverMeshExcluded_Params
{
	class UStaticMesh*                                 Mesh;                                                     
	bool                                               bExcluded;                                                
	bool                                               ReturnValue;                                              
};


struct UPlanPHProjectionComponent_SetReceiverActorExcluded_Params
{
	class AActor*                                      Actor;                                                    
	bool                                               bExcluded;                                                
	bool                                               ReturnValue;                                              
};


struct UPlanPHProjectionComponent_SetProjectionIntensity_Params
{
	float                                              Intensity;                                                
};


struct UPlanPHProjectionComponent_SetProjectionEnabled_Params
{
	bool                                               bEnabled;                                                 
};


struct UPlanPHProjectionComponent_ResumeProjectionWorld_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               ReturnValue;                                              
};


struct UPlanPHProjectionComponent_ReleaseProjection_Params
{
};


struct UPlanPHProjectionComponent_CleanupProjectionWorld_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               ReturnValue;                                              
};


struct UPlanPHProjectionComponent_BeginProjection_Params
{
	class UObject*                                     BatchHelper;                                              
	bool                                               ReturnValue;                                              
};


struct UPlanPHProjectionComponent_AddReceiverActor_Params
{
	class AActor*                                      Actor;                                                    
};


struct UPlanPHProjectionComponent_AddDecorationActor_Params
{
	class AActor*                                      Actor;                                                    
};


struct APlanPHSpectatorPawn_OnSpectatorRestart_Params
{
};


struct APlanPHSpectatorPawn_MoveRight_Params
{
	float                                              Val;                                                      
};


struct APlanPHSpectatorPawn_MoveForward_Params
{
	float                                              Val;                                                      
};


struct UPlanPHVisualGridComponent_ShowGrids_Params
{
	bool                                               InBShow;                                                  
};


struct UPlanPHVisualGridComponent_RefreshGrids_Params
{
};

}

