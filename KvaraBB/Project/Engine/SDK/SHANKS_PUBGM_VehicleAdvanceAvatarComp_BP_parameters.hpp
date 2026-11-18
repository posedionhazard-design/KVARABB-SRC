#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UVehicleAdvanceAvatarComp_BP_C_GetReflectionCubeName_Lobby_Params
{
	struct FName                                       ReturnValue;                                              
};


struct UVehicleAdvanceAvatarComp_BP_C_PutOnItemIDInLobby_Params
{
	int                                                InItemID;                                                 
	int                                                ColorID;                                                  
	int                                                PatternID;                                                
	int                                                Particle_ID;                                              
	bool                                               Result;                                                   
};


struct UVehicleAdvanceAvatarComp_BP_C_PutOffSlotInLobby_Params
{
	unsigned char                                      InSlotType;                                               
	bool                                               Result;                                                   
};


struct UVehicleAdvanceAvatarComp_BP_C_BP_ProcessStyleUnequipped_Params
{
	int                                                OldStyleID;                                               
};


struct UVehicleAdvanceAvatarComp_BP_C_Bp_ProcessAvatarLogicUnequipped_Params
{
	int                                                SlotID;                                                   
	struct FItemDefineID                               OldItemID;                                                
};


struct UVehicleAdvanceAvatarComp_BP_C_BP_ProcessStyleEquipped_Params
{
	int                                                NewStyleID;                                               
	int                                                OldStyleID;                                               
};


struct UVehicleAdvanceAvatarComp_BP_C_Bp_ProcessAvatarLogicEquipped_Params
{
	int                                                SlotID;                                                   
	struct FItemDefineID                               NewItemID;                                                
	struct FItemDefineID                               OldItemID;                                                
};


struct UVehicleAdvanceAvatarComp_BP_C_BPCreateAvatarCustomHandle_Params
{
	int*                                               SlotID;                                                   
	int*                                               ItemId;                                                   
	struct FAvatarCustom                               InCostomInfo;                                             
	TArray<class UAvatarCustomBase*>                   OutCustomHandle;                                          
};


struct UVehicleAdvanceAvatarComp_BP_C_MakeVehicleStyleData_Params
{
	int*                                               InStyleID;                                                
	struct FVehicleStyleData                           ReturnValue;                                              
};


struct UVehicleAdvanceAvatarComp_BP_C_GenerateDefaultAvatarConfig_Params
{
	int*                                               InBaseSkinID;                                             
	bool                                               ReturnValue;                                              
};


struct UVehicleAdvanceAvatarComp_BP_C_ReceiveBeginPlay_Params
{
};


struct UVehicleAdvanceAvatarComp_BP_C_Bp_EventAvatarLogicEquipped_Params
{
	int                                                SlotID;                                                   
	struct FItemDefineID                               NewItemID;                                                
	struct FItemDefineID                               OldItemID;                                                
};


struct UVehicleAdvanceAvatarComp_BP_C_Bp_EventAvatarLogicUnequipped_Params
{
	int                                                SlotID;                                                   
	struct FItemDefineID                               OldItemID;                                                
};


struct UVehicleAdvanceAvatarComp_BP_C_BP_EventStyleEquipped_Params
{
	int                                                NewStyleID;                                               
	int                                                OldStyleID;                                               
};


struct UVehicleAdvanceAvatarComp_BP_C_BP_EventStyleUnequipped_Params
{
	int                                                OldStyleID;                                               
};


struct UVehicleAdvanceAvatarComp_BP_C_ExecuteUbergraph_VehicleAdvanceAvatarComp_BP_Params
{
	int                                                EntryPoint;                                               
};

}

