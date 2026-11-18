#pragma once


 
namespace SDK
{






class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	unsigned char                                      bDeprecatedSpringOffsetMode : 1;                          
	unsigned char                                      bRestorePhysicsState : 1;                                 
	unsigned char                                      UnknownData01[0x7];                                       
	TArray<struct FWheelSetup>                         WheelSetups;                                              
	float                                              Mass;                                                     
	float                                              DragCoefficient;                                          
	float                                              ChassisWidth;                                             
	float                                              ChassisHeight;                                            
	bool                                               bReverseAsBrake;                                          
	bool                                               bClientSuspensionSweep;                                   
	bool                                               bServerSuspensionSweep;                                   
	unsigned char                                      UnknownData02[0x1];                                       
	float                                              DragArea;                                                 
	float                                              EstimatedMaxEngineSpeed;                                  
	float                                              MaxEngineRPM;                                             
	float                                              DebugDragMagnitude;                                       
	struct FVector                                     InertiaTensorScale;                                       
	float                                              MinNormalizedTireLoad;                                    
	float                                              MinNormalizedTireLoadFiltered;                            
	float                                              MaxNormalizedTireLoad;                                    
	float                                              MaxNormalizedTireLoadFiltered;                            
	float                                              ThresholdLongitudinalSpeed;                               
	int                                                LowForwardSpeedSubStepCount;                              
	int                                                HighForwardSpeedSubStepCount;                             
	unsigned char                                      UnknownData03[0x4];                                       
	TArray<class UVehicleWheel*>                       Wheels;                                                   
	unsigned char                                      UnknownData04[0x18];                                      
	unsigned char                                      bUseRVOAvoidance : 1;                                     
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              RVOAvoidanceRadius;                                       
	float                                              RVOAvoidanceHeight;                                       
	float                                              AvoidanceConsiderationRadius;                             
	float                                              RVOSteeringStep;                                          
	float                                              RVOThrottleStep;                                          
	int                                                AvoidanceUID;                                             
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           
	float                                              AvoidanceWeight;                                          
	struct FVector                                     PendingLaunchVelocity;                                    
	unsigned char                                      UnknownData06[0x10];                                      
	struct FReplicatedVehicleState                     ReplicatedState;                                          
	unsigned char                                      UnknownData07[0x4];                                       
	float                                              RawSteeringInput;                                         
	float                                              RawThrottleInput;                                         
	float                                              RawBrakeInput;                                            
	unsigned char                                      bRawHandbrakeInput : 1;                                   
	unsigned char                                      bRawGearUpInput : 1;                                      
	unsigned char                                      bRawGearDownInput : 1;                                    
	unsigned char                                      UnknownData08[0x3];                                       
	float                                              SteeringInput;                                            
	float                                              ThrottleInput;                                            
	float                                              BrakeInput;                                               
	float                                              HandBrakeInput;                                           
	float                                              IdleBrakeInput;                                           
	float                                              StopThreshold;                                            
	float                                              WrongDirectionThreshold;                                  
	struct FVehicleInputRate                           ThrottleInputRate;                                        
	struct FVehicleInputRate                           BrakeInputRate;                                           
	struct FVehicleInputRate                           HandbrakeInputRate;                                       
	struct FVehicleInputRate                           SteeringInputRate;                                        
	unsigned char                                      bWasAvoidanceUpdated : 1;                                 
	unsigned char                                      UnknownData09[0x2B];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent");
		return pStaticClass;
	}


	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetPhysActive(bool bActive);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandBrakeInput, int CurrentGear);
	bool IsSuspensionSweep();
	void GetWheelShapeIndices(TArray<int>* OutWheelShapeIndices);
	bool GetUseAutoGears();
	float GetThrottleInput();
	int GetTargetGear();
	float GetSteeringInput();
	bool GetHandbrakeInput();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int GetCurrentGear();
	float GetBrakeInput();
	void EnableVehicleWheel(int WheelIndex, bool InEnable);
	void EnableVehicleSimulation(bool InEnable);
	void ClearAllInput();
};




class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhysXVehicles.SimpleWheeledVehicleMovementComponent");
		return pStaticClass;
	}


	void SetSteerAngle(float SteerAngle, int WheelIndex);
	void SetDriveTorque(float DriveTorque, int WheelIndex);
	void SetBrakeTorque(float BrakeTorque, int WheelIndex);
};




class UTireConfig : public UDataAsset
{
public:
	float                                              FrictionScale;                                            
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FTireConfigMaterialFriction>         TireFrictionScales;                                       
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhysXVehicles.TireConfig");
		return pStaticClass;
	}

};




class UVehicleAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	float                                              fWheelRotationSpeedPitch;                                 
	float                                              fWheelRotationSpeedYaw;                                   
	unsigned char                                      UnknownData01[0x5E0];                                     
	class UWheeledVehicleMovementComponent*            WheeledVehicleMovementComponent;                          
	unsigned char                                      UnknownData02[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhysXVehicles.VehicleAnimInstance");
		return pStaticClass;
	}


	class AWheeledVehicle* GetVehicle();
};




class UVehicleWheel : public UObject
{
public:
	class UStaticMesh*                                 CollisionMesh;                                            
	bool                                               bDontCreateShape;                                         
	bool                                               bAutoAdjustCollisionSize;                                 
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector                                     Offset;                                                   
	float                                              ShapeRadius;                                              
	float                                              ShapeWidth;                                               
	float                                              Mass;                                                     
	float                                              DampingRate;                                              
	float                                              SteerAngle;                                               
	bool                                               bAffectedByHandbrake;                                     
	unsigned char                                      UnknownData01[0x3];                                       
	class UTireType*                                   TireType;                                                 
	class UTireConfig*                                 TireConfig;                                               
	float                                              LatStiffMaxLoad;                                          
	float                                              LatStiffValue;                                            
	float                                              LongStiffValue;                                           
	float                                              SuspensionForceOffset;                                    
	float                                              SuspensionMaxRaise;                                       
	float                                              SuspensionMaxDrop;                                        
	float                                              SuspensionNaturalFrequency;                               
	float                                              SuspensionDampingRatio;                                   
	TEnumAsByte<EWheelSweepType>                       SweepType;                                                
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              MaxBrakeTorque;                                           
	float                                              MaxHandBrakeTorque;                                       
	unsigned char                                      UnknownData03[0x4];                                       
	class UWheeledVehicleMovementComponent*            VehicleSim;                                               
	int                                                WheelIndex;                                               
	float                                              DebugLongSlip;                                            
	float                                              DebugLatSlip;                                             
	float                                              DebugNormalizedTireLoad;                                  
	unsigned char                                      UnknownData04[0x4];                                       
	float                                              DebugWheelTorque;                                         
	float                                              DebugLongForce;                                           
	float                                              DebugLatForce;                                            
	struct FVector                                     Location;                                                 
	struct FVector                                     OldLocation;                                              
	struct FVector                                     Velocity;                                                 
	unsigned char                                      UnknownData05[0xC];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhysXVehicles.VehicleWheel");
		return pStaticClass;
	}


	bool IsInAir();
	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
	struct FVector GetContactNormal();
};




class AWheeledVehicle : public APawn
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     
	class UWheeledVehicleMovementComponent*            VehicleMovement;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhysXVehicles.WheeledVehicle");
		return pStaticClass;
	}

};




class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	struct FVehicleEngineData                          EngineSetup;                                              
	struct FVehicleDifferential4WData                  DifferentialSetup;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	struct FVehicleTransmissionData                    TransmissionSetup;                                        
	struct FRuntimeFloatCurve                          SteeringCurve;                                            
	float                                              AckermannAccuracy;                                        
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent4W");
		return pStaticClass;
	}

};


}

