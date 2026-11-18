#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ABP_LobbyRefitVehicle_C_SetPostProcessSettingsWrap_Params
{
	float                                              Length;                                                   
	bool                                               bIsReverse;                                               
	bool                                               bIsClosing;                                               
};


struct ABP_LobbyRefitVehicle_C_HideAllRefitTipsByTipState_Params
{
};


struct ABP_LobbyRefitVehicle_C_HideAllRefitTips_Params
{
};


struct ABP_LobbyRefitVehicle_C_CanAutoPlayLua_Params
{
	bool                                               Param;                                                    
};


struct ABP_LobbyRefitVehicle_C_CheckRefitTipsFadeLua_Params
{
	float                                              Yaw;                                                      
	bool                                               showAllTips;                                              
};


struct ABP_LobbyRefitVehicle_C_ShowLoading_Params
{
	bool                                               Show;                                                     
};


struct ABP_LobbyRefitVehicle_C_ResetCameraRotation_Params
{
};


struct ABP_LobbyRefitVehicle_C_CreateDefaultRefitVehicleMesh_Params
{
};


struct ABP_LobbyRefitVehicle_C_HasRefitVehicleDownloaded_Params
{
	bool                                               HasDownloaded;                                            
};


struct ABP_LobbyRefitVehicle_C_GetRefitVehicleHandle_Params
{
	int                                                VehicleID;                                                
};


struct ABP_LobbyRefitVehicle_C_InitSlotSocket_Params
{
	TMap<int, struct FString>                          slotSocket;                                               
};


struct ABP_LobbyRefitVehicle_C_TryResetCloseUp_Params
{
};


struct ABP_LobbyRefitVehicle_C_SetCastShadow_Params
{
	bool                                               CastShadow;                                               
};


struct ABP_LobbyRefitVehicle_C_EnableCameraRotationLag_Params
{
	bool                                               Enable;                                                   
};


struct ABP_LobbyRefitVehicle_C_UpdateLastAutoPlayTime_Params
{
};


struct ABP_LobbyRefitVehicle_C_CheckAutoPlay_Params
{
};


struct ABP_LobbyRefitVehicle_C_TryRotateSceneByTouch_Params
{
	bool                                               rotated;                                                  
};


struct ABP_LobbyRefitVehicle_C_TryStopAutoPlay_Params
{
};


struct ABP_LobbyRefitVehicle_C_GetSlotSocketTransform_Params
{
	int                                                inInt;                                                    
	struct FTransform                                  ReturnValue;                                              
};


struct ABP_LobbyRefitVehicle_C_GetVectorAngle_Params
{
	float                                              Degree;                                                   
};


struct ABP_LobbyRefitVehicle_C_DestroyFreeCamera_Params
{
};


struct ABP_LobbyRefitVehicle_C_GetYawToMesh_Params
{
	struct FVector                                     Location;                                                 
	float                                              ReturnValue;                                              
};


struct ABP_LobbyRefitVehicle_C_CheckRefitTipsFade_Params
{
	bool                                               forceShowAll;                                             
};


struct ABP_LobbyRefitVehicle_C_InterpVelocity_Params
{
	float                                              New;                                                      
	float                                              Old;                                                      
	float                                              Velocity;                                                 
};


struct ABP_LobbyRefitVehicle_C_UserConstructionScript_Params
{
};


struct ABP_LobbyRefitVehicle_C_TimeLine_LerpRotator__FinishedFunc_Params
{
};


struct ABP_LobbyRefitVehicle_C_TimeLine_LerpRotator__UpdateFunc_Params
{
};


struct ABP_LobbyRefitVehicle_C_TimeLine_LerpPosition__FinishedFunc_Params
{
};


struct ABP_LobbyRefitVehicle_C_TimeLine_LerpPosition__UpdateFunc_Params
{
};


struct ABP_LobbyRefitVehicle_C_Timeline_AutoPlay__FinishedFunc_Params
{
};


struct ABP_LobbyRefitVehicle_C_Timeline_AutoPlay__UpdateFunc_Params
{
};


struct ABP_LobbyRefitVehicle_C_TimeLine_BlendCamera__FinishedFunc_Params
{
};


struct ABP_LobbyRefitVehicle_C_TimeLine_BlendCamera__UpdateFunc_Params
{
};


struct ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_out__FinishedFunc_Params
{
};


struct ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_out__UpdateFunc_Params
{
};


struct ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_in__FinishedFunc_Params
{
};


struct ABP_LobbyRefitVehicle_C_Timeline_Vehicle_Update_Zoom_in__UpdateFunc_Params
{
};


struct ABP_LobbyRefitVehicle_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             
};


struct ABP_LobbyRefitVehicle_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            
};


struct ABP_LobbyRefitVehicle_C_SwitchCloseupCameraEllipse_Params
{
	int                                                SlotID;                                                   
};


struct ABP_LobbyRefitVehicle_C_AutoPlay_Params
{
};


struct ABP_LobbyRefitVehicle_C_BlendCameraActor_Params
{
	class USceneComponent*                             CameraActor;                                              
	struct FTransform                                  toTransform;                                              
};


struct ABP_LobbyRefitVehicle_C_SwitchCloseUpCameraLinear_Params
{
	int                                                SlotID;                                                   
};


struct ABP_LobbyRefitVehicle_C_OnVehicleUpgradeSuccess_Params
{
};


struct ABP_LobbyRefitVehicle_C_ResetCloseUpCamera_Params
{
};


struct ABP_LobbyRefitVehicle_C_EventOnAllMeshLoad_Params
{
};


struct ABP_LobbyRefitVehicle_C_ShowLoadingForTime_Params
{
	float                                              Time;                                                     
};


struct ABP_LobbyRefitVehicle_C_SetHighLight_Params
{
	float*                                             invincible;                                               
	float*                                             FreExp;                                                   
	float*                                             Speed;                                                    
};


struct ABP_LobbyRefitVehicle_C_TrySetHilight_Params
{
	float                                              invincible;                                               
	float                                              Freq;                                                     
	float                                              Speed;                                                    
};


struct ABP_LobbyRefitVehicle_C_LuaBeginPlay_Params
{
};


struct ABP_LobbyRefitVehicle_C_ExecuteUbergraph_BP_LobbyRefitVehicle_Params
{
	int                                                EntryPoint;                                               
};

}

