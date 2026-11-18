#pragma once


 
namespace SDK
{





enum class EDestructionDamageType : uint8_t
{
	EDestructionDamageType__EDestructionDamage_ShootWeapon = 0,
	EDestructionDamageType__EDestructionDamage_Projectile = 1,
	EDestructionDamageType__EDestructionDamage_Melee = 2,
	EDestructionDamageType__EDestructionDamage_Grenade = 3,
	EDestructionDamageType__EDestructionDamage_Vehicle = 4,
	EDestructionDamageType__EDestructionDamage_VehicleTrigger = 5,
	EDestructionDamageType__EDestructionDamage_VehicleExplosion = 6,
	EDestructionDamageType__EDestructionDamage_DropActor = 7,
	EDestructionDamageType__EDestructionDamage_GasLineExplosion = 8,
	EDestructionDamageType__EDestructionDamage_Other = 9,
	EDestructionDamageType__EDestructionDamage_Max = 10
};



enum class EEffectType : uint8_t
{
	None_Type                      = 0,
	BrokenEffect                   = 1,
	SimulationEffect               = 2,
	AnimationEffect                = 3,
	EEffectType_MAX                = 4
};



enum class EPhotonFracturedMeshFragmentState : uint8_t
{
	EPhotonFracturedMeshFragmentState__PhotonFracturedMesh_Initial = 0,
	EPhotonFracturedMeshFragmentState__PhotonFracturedMesh_UnderDestruction = 1,
	EPhotonFracturedMeshFragmentState__PhotonFracturedMesh_Damaged = 2,
	EPhotonFracturedMeshFragmentState__PhotonFractureMesh_DamagedByCollapse = 3,
	EPhotonFracturedMeshFragmentState__EPhotonFracturedMeshFragmentState_MAX = 4
};



enum class EPhotonDestructibleKey : uint8_t
{
	EPhotonDestructibleKey__Reset  = 0,
	EPhotonDestructibleKey__Trigger = 1,
	EPhotonDestructibleKey__EPhotonDestructibleKey_MAX = 2
};



enum class ESlicedAxis : uint8_t
{
	SlicedAxis_X                   = 0,
	SlicedAxis_Y                   = 1,
	SlicedAxis_Z                   = 2,
	SlicedAxis_NX                  = 3,
	SlicedAxis_NY                  = 4,
	SlicedAxis_NZ                  = 5,
	SlicedAxis_MAX                 = 6
};



enum class EPhotonCollisionType : uint8_t
{
	PhotonCollisionType_Simple     = 0,
	PhotonCollisionType_Complex    = 1,
	PhotonCollisionType_MAX        = 2
};



enum class EPhotonDestructibleAction : uint8_t
{
	PhotonDestructibleAction_Hide  = 0,
	PhotonDestructibleAction_Detach = 1,
	PhotonDestructibleAction_Slide = 2,
	PhotonDestructibleAction_MAX   = 3
};



enum class EPhotonDestructibleState : uint8_t
{
	EPhotonDestructibleState__PhotonPDState_UnBroken = 0,
	EPhotonDestructibleState__PhotonPDState_Broken = 1,
	EPhotonDestructibleState__PhotonPDState_AllHidden = 2,
	EPhotonDestructibleState__PhotonPDState_Collapse = 3,
	EPhotonDestructibleState__PhotonPDState_Recovery = 4,
	EPhotonDestructibleState__PhotonPDState_Invalid = 5,
	EPhotonDestructibleState__PhotonPDState_MAX = 6
};



enum class EPhotonMeshFragmentType : uint8_t
{
	EPhotonMeshFragmentType__Indestructible = 0,
	EPhotonMeshFragmentType__Disappear = 1,
	EPhotonMeshFragmentType__Collapse = 2,
	EPhotonMeshFragmentType__EPhotonMeshFragmentType_MAX = 3
};



enum class EPhotonMeshDestructionTriggerMode : uint8_t
{
	EPhotonMeshDestructionTriggerMode__Disabled = 0,
	EPhotonMeshDestructionTriggerMode__TriggerEveryActivation = 1,
	EPhotonMeshDestructionTriggerMode__EPhotonMeshDestructionTriggerMode_MAX = 2
};









struct FPhotonDestructibleImpactParam
{
	float                                              ImpactDamageHp;                                           
	float                                              ImpactDamageSpreadRadius;                                 
};



struct FPhotonHideReplicationData
{
	struct FVector_NetQuantize10                       LocalImpactPoint;                                         
	struct FVector_NetQuantize10                       LocalImpactVelocity;                                      
	TArray<EPhotonFracturedMeshFragmentState>          TargetFragmentsState;                                     
	float                                              ImpactTime;                                               
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FPhotonDetachReplicationData
{
	struct FVector4                                    LocalImpactPointAndSpreadStrength;                        
	struct FVector4                                    LocalImpactVelocityAndRotateStrength;                     
	EPhotonFracturedMeshFragmentState                  FragmentState;                                            
	unsigned char                                      UnknownData00[0xF];                                       
};



struct FChunkTransformData
{
	struct FVector_NetQuantize100                      LinearVelocity;                                           
	struct FVector_NetQuantize100                      AngularVelocity;                                          
	struct FVector_NetQuantize100                      Location;                                                 
	struct FRotator                                    Rotation;                                                 
	bool                                               ReplicateVelocity;                                        
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FPhotonSlideReplicationData
{
	TArray<struct FChunkTransformData>                 ChunkTransformData;                                       
	EPhotonDestructibleState                           TargetDestructibleState;                                  
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<EPhotonFracturedMeshFragmentState>          TargetFragmentsState;                                     
};



struct FPhotonDestructibleFragmentStateData
{
	struct FVector_NetQuantize10                       LocalImpactPoint;                                         
	struct FVector_NetQuantize10                       LocalImpactVelocity;                                      
	float                                              ImpactTime;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<EPhotonFracturedMeshFragmentState>          TargetFragmentsState;                                     
};



struct FPhotonDestructibleImpactData
{
	struct FVector4                                    LocalImpactPointAndSpreadSpeed;                           
	bool                                               Visible;                                                  
	unsigned char                                      UnknownData00[0xF];                                       
	struct FVector4                                    LocalImpactVelocityAndRotateSpeed;                        
	EPhotonFracturedMeshFragmentState                  TargetFragmentsState;                                     
	unsigned char                                      UnknownData01[0xF];                                       
};



struct FClusterReplicationProxy
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FPhotonDestructibleMeshPhysicsDetachData
{
	float                                              TimeSpeed;                                                
	struct FVector                                     Gravity;                                                  
	float                                              SpreadSpeed;                                              
	float                                              VelocitySpeed;                                            
	float                                              RotationSpeed;                                            
	float                                              VisibleTime;                                              
	int                                                SlideSmallestChunks;                                      
	float                                              SlideRemoveSmallestSize;                                  
	bool                                               bEnableReverse;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MaxReverseTime;                                           
	bool                                               bUseCustomRandomValue;                                    
	unsigned char                                      UnknownData01[0x7];                                       
	struct FRawDistributionVector                      CustomRandomDirection;                                    
	struct FRawDistributionFloat                       CustomRandomW;                                            
};



struct FEdgeNode
{
	TArray<int>                                        Edges;                                                    
	int                                                Size;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FSupportGraph
{
	TArray<struct FEdgeNode>                           EdgeDatas;                                                
	int                                                Size;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FFragmentConvexElem
{
	TArray<struct FKConvexElem>                        ConvexElem;                                               
};



struct FPhotonInstanceImpactData
{
	struct FVector_NetQuantize10                       WorldImpactVelocity;                                      
	EPhotonFracturedMeshFragmentState                  TargetFragmentsState;                                     
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FReplicationEvent
{
	unsigned char                                      UnknownData00[0x18];                                      
};



struct FMovieScenePhotonDestructibleSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FIntegralCurve                              PhotonDestructibleKeys;                                   
	struct FRichCurve                                  TimeSpeedCurve;                                           
	struct FRichCurve                                  SpreadSpeedCurve;                                         
	struct FRichCurve                                  VelocitySpeedCurve;                                       
	struct FRichCurve                                  RotationSpeedCurve;                                       
};

}

