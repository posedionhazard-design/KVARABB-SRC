#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Params
{
	class UObject*                                     WorldContext;                                             
	float                                              NewScale;                                                 
};


struct UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Params
{
	TEnumAsByte<EHMDTrackingOrigin>                    Origin;                                                   
};


struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Params
{
	class UTexture*                                    InTexture;                                                
};


struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Params
{
	struct FVector2D                                   EyeRectMin;                                               
	struct FVector2D                                   EyeRectMax;                                               
	struct FVector2D                                   TextureRectMin;                                           
	struct FVector2D                                   TextureRectMax;                                           
	bool                                               bDrawEyeFirst;                                            
	bool                                               bClearBlack;                                              
};


struct UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Params
{
	ESpectatorScreenMode                               Mode;                                                     
};


struct UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Params
{
	float                                              Near;                                                     
	float                                              Far;                                                      
};


struct UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Params
{
	float                                              Yaw;                                                      
	TEnumAsByte<EOrientPositionSelector>               Options;                                                  
};


struct UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Params
{
	bool                                               ReturnValue;                                              
};


struct UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Params
{
	bool                                               ReturnValue;                                              
};


struct UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Params
{
	bool                                               ReturnValue;                                              
};


struct UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Params
{
	bool                                               ReturnValue;                                              
};


struct UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Params
{
	bool                                               ReturnValue;                                              
};


struct UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Params
{
	class UObject*                                     WorldContext;                                             
	float                                              ReturnValue;                                              
};


struct UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Params
{
	bool                                               bUseFocus;                                                
	bool                                               bHasFocus;                                                
};


struct UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Params
{
	struct FVector                                     Origin;                                                   
	struct FRotator                                    Rotation;                                                 
	float                                              LeftFOV;                                                  
	float                                              RightFOV;                                                 
	float                                              TopFOV;                                                   
	float                                              BottomFOV;                                                
	float                                              Distance;                                                 
	float                                              NearPlane;                                                
	float                                              FarPlane;                                                 
	bool                                               IsActive;                                                 
	int                                                Index;                                                    
};


struct UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Params
{
	TEnumAsByte<EHMDTrackingOrigin>                    ReturnValue;                                              
};


struct UHeadMountedDisplayFunctionLibrary_GetScreenPercentage_Params
{
	float                                              ReturnValue;                                              
};


struct UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Params
{
	struct FVector                                     CameraOrigin;                                             
	struct FRotator                                    CameraRotation;                                           
	float                                              HFOV;                                                     
	float                                              VFOV;                                                     
	float                                              CameraDistance;                                           
	float                                              NearPlane;                                                
	float                                              FarPlane;                                                 
};


struct UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Params
{
	struct FRotator                                    DeviceRotation;                                           
	struct FVector                                     DevicePosition;                                           
};


struct UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Params
{
	int                                                ReturnValue;                                              
};


struct UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Params
{
	TEnumAsByte<EHMDWornState>                         ReturnValue;                                              
};


struct UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Params
{
	struct FName                                       ReturnValue;                                              
};


struct UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Params
{
	bool                                               bEnable;                                                  
};


struct UHeadMountedDisplayFunctionLibrary_EnableHMD_Params
{
	bool                                               bEnable;                                                  
	bool                                               ReturnValue;                                              
};


struct UMotionControllerComponent_IsTracked_Params
{
	bool                                               ReturnValue;                                              
};


struct UMotionTrackedDeviceFunctionLibrary_SetIsControllerMotionTrackingEnabledByDefault_Params
{
	bool                                               Enable;                                                   
};


struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForDevice_Params
{
	int                                                playerIndex;                                              
	EControllerHand                                    Hand;                                                     
	bool                                               ReturnValue;                                              
};


struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackingEnabledForComponent_Params
{
	class UMotionControllerComponent*                  MotionControllerComponent;                                
	bool                                               ReturnValue;                                              
};


struct UMotionTrackedDeviceFunctionLibrary_IsMotionTrackedDeviceCountManagementNecessary_Params
{
	bool                                               ReturnValue;                                              
};


struct UMotionTrackedDeviceFunctionLibrary_GetMotionTrackingEnabledControllerCount_Params
{
	int                                                ReturnValue;                                              
};


struct UMotionTrackedDeviceFunctionLibrary_GetMaximumMotionTrackedControllerCount_Params
{
	int                                                ReturnValue;                                              
};


struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingOfDevice_Params
{
	int                                                playerIndex;                                              
	EControllerHand                                    Hand;                                                     
	bool                                               ReturnValue;                                              
};


struct UMotionTrackedDeviceFunctionLibrary_EnableMotionTrackingForComponent_Params
{
	class UMotionControllerComponent*                  MotionControllerComponent;                                
	bool                                               ReturnValue;                                              
};


struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfDevice_Params
{
	int                                                playerIndex;                                              
	EControllerHand                                    Hand;                                                     
};


struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfControllersForPlayer_Params
{
	int                                                playerIndex;                                              
};


struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingOfAllControllers_Params
{
};


struct UMotionTrackedDeviceFunctionLibrary_DisableMotionTrackingForComponent_Params
{
	class UMotionControllerComponent*                  MotionControllerComponent;                                
};

}

