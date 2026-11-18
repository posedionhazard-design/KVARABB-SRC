#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UWheeledVehicleMovementComponent_SetUseAutoGears_Params
{
	bool                                               bUseAuto;                                                 
};


struct UWheeledVehicleMovementComponent_SetThrottleInput_Params
{
	float                                              Throttle;                                                 
};


struct UWheeledVehicleMovementComponent_SetTargetGear_Params
{
	int                                                GearNum;                                                  
	bool                                               bImmediate;                                               
};


struct UWheeledVehicleMovementComponent_SetSteeringInput_Params
{
	float                                              Steering;                                                 
};


struct UWheeledVehicleMovementComponent_SetPhysActive_Params
{
	bool                                               bActive;                                                  
};


struct UWheeledVehicleMovementComponent_SetHandbrakeInput_Params
{
	bool                                               bNewHandbrake;                                            
};


struct UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                
};


struct UWheeledVehicleMovementComponent_SetGroupsToIgnore_Params
{
	int                                                GroupFlags;                                               
};


struct UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                
};


struct UWheeledVehicleMovementComponent_SetGroupsToAvoid_Params
{
	int                                                GroupFlags;                                               
};


struct UWheeledVehicleMovementComponent_SetGearUp_Params
{
	bool                                               bNewGearUp;                                               
};


struct UWheeledVehicleMovementComponent_SetGearDown_Params
{
	bool                                               bNewGearDown;                                             
};


struct UWheeledVehicleMovementComponent_SetBrakeInput_Params
{
	float                                              Brake;                                                    
};


struct UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Params
{
	struct FNavAvoidanceMask                           GroupMask;                                                
};


struct UWheeledVehicleMovementComponent_SetAvoidanceGroup_Params
{
	int                                                GroupFlags;                                               
};


struct UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Params
{
	bool                                               bEnable;                                                  
};


struct UWheeledVehicleMovementComponent_ServerUpdateState_Params
{
	float                                              InSteeringInput;                                          
	float                                              InThrottleInput;                                          
	float                                              InBrakeInput;                                             
	float                                              InHandBrakeInput;                                         
	int                                                CurrentGear;                                              
};


struct UWheeledVehicleMovementComponent_IsSuspensionSweep_Params
{
	bool                                               ReturnValue;                                              
};


struct UWheeledVehicleMovementComponent_GetWheelShapeIndices_Params
{
	TArray<int>                                        OutWheelShapeIndices;                                     
};


struct UWheeledVehicleMovementComponent_GetUseAutoGears_Params
{
	bool                                               ReturnValue;                                              
};


struct UWheeledVehicleMovementComponent_GetThrottleInput_Params
{
	float                                              ReturnValue;                                              
};


struct UWheeledVehicleMovementComponent_GetTargetGear_Params
{
	int                                                ReturnValue;                                              
};


struct UWheeledVehicleMovementComponent_GetSteeringInput_Params
{
	float                                              ReturnValue;                                              
};


struct UWheeledVehicleMovementComponent_GetHandbrakeInput_Params
{
	bool                                               ReturnValue;                                              
};


struct UWheeledVehicleMovementComponent_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct UWheeledVehicleMovementComponent_GetCurrentGear_Params
{
	int                                                ReturnValue;                                              
};


struct UWheeledVehicleMovementComponent_GetBrakeInput_Params
{
	float                                              ReturnValue;                                              
};


struct UWheeledVehicleMovementComponent_EnableVehicleWheel_Params
{
	int                                                WheelIndex;                                               
	bool                                               InEnable;                                                 
};


struct UWheeledVehicleMovementComponent_EnableVehicleSimulation_Params
{
	bool                                               InEnable;                                                 
};


struct UWheeledVehicleMovementComponent_ClearAllInput_Params
{
};


struct USimpleWheeledVehicleMovementComponent_SetSteerAngle_Params
{
	float                                              SteerAngle;                                               
	int                                                WheelIndex;                                               
};


struct USimpleWheeledVehicleMovementComponent_SetDriveTorque_Params
{
	float                                              DriveTorque;                                              
	int                                                WheelIndex;                                               
};


struct USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Params
{
	float                                              BrakeTorque;                                              
	int                                                WheelIndex;                                               
};


struct UVehicleAnimInstance_GetVehicle_Params
{
	class AWheeledVehicle*                             ReturnValue;                                              
};


struct UVehicleWheel_IsInAir_Params
{
	bool                                               ReturnValue;                                              
};


struct UVehicleWheel_GetSuspensionOffset_Params
{
	float                                              ReturnValue;                                              
};


struct UVehicleWheel_GetSteerAngle_Params
{
	float                                              ReturnValue;                                              
};


struct UVehicleWheel_GetRotationAngle_Params
{
	float                                              ReturnValue;                                              
};


struct UVehicleWheel_GetContactNormal_Params
{
	struct FVector                                     ReturnValue;                                              
};

}

