#pragma once


 
namespace SDK
{





enum class EWheelSweepType : uint8_t
{
	SimpleAndComplex               = 0,
	Simple                         = 1,
	Complex                        = 2,
	EWheelSweepType_MAX            = 3
};



enum class EVehicleDifferential4W : uint8_t
{
	EVehicleDifferential4W__LimitedSlip_4W = 0,
	EVehicleDifferential4W__LimitedSlip_FrontDrive = 1,
	EVehicleDifferential4W__LimitedSlip_RearDrive = 2,
	EVehicleDifferential4W__Open_4W = 3,
	EVehicleDifferential4W__Open_FrontDrive = 4,
	EVehicleDifferential4W__Open_RearDrive = 5,
	EVehicleDifferential4W__EVehicleDifferential4W_MAX = 6
};









struct FWheelSetup
{
	class UClass*                                      WheelClass;                                               
	struct FName                                       BoneName;                                                 
	struct FVector                                     AdditionalOffset;                                         
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FReplicatedVehicleState
{
	float                                              SteeringInput;                                            
	float                                              ThrottleInput;                                            
	float                                              BrakeInput;                                               
	float                                              HandBrakeInput;                                           
	int                                                CurrentGear;                                              
};



struct FVehicleInputRate
{
	float                                              RiseRate;                                                 
	float                                              FallRate;                                                 
};



struct FTireConfigMaterialFriction
{
	class UPhysicalMaterial*                           PhysicalMaterial;                                         
	float                                              FrictionScale;                                            
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FVehicleEngineData
{
	struct FRuntimeFloatCurve                          TorqueCurve;                                              
	float                                              MaxRPM;                                                   
	float                                              MOI;                                                      
	float                                              DampingRateFullThrottle;                                  
	float                                              DampingRateZeroThrottleClutchEngaged;                     
	float                                              DampingRateZeroThrottleClutchDisengaged;                  
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FVehicleDifferential4WData
{
	TEnumAsByte<EVehicleDifferential4W>                DifferentialType;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              FrontRearSplit;                                           
	float                                              FrontLeftRightSplit;                                      
	float                                              RearLeftRightSplit;                                       
	float                                              CentreBias;                                               
	float                                              FrontBias;                                                
	float                                              RearBias;                                                 
};



struct FVehicleGearData
{
	float                                              Ratio;                                                    
	float                                              DownRatio;                                                
	float                                              UpRatio;                                                  
};



struct FVehicleTransmissionData
{
	bool                                               bUseGearAutoBox;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              GearSwitchTime;                                           
	float                                              GearAutoBoxLatency;                                       
	float                                              FinalRatio;                                               
	TArray<struct FVehicleGearData>                    ForwardGears;                                             
	float                                              ReverseGearRatio;                                         
	float                                              NeutralGearUpRatio;                                       
	float                                              ClutchStrength;                                           
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x10];                                      
};

}

