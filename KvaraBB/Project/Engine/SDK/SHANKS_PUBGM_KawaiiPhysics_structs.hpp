#pragma once


 
namespace SDK
{





enum class EPlanarConstraint : uint8_t
{
	EPlanarConstraint__None        = 0,
	EPlanarConstraint__X           = 1,
	EPlanarConstraint__Y           = 2,
	EPlanarConstraint__Z           = 3,
	EPlanarConstraint__EPlanarConstraint_MAX = 4
};



enum class EComplianceType : uint8_t
{
	EComplianceType__Leather       = 0,
	EComplianceType__Rubber        = 1,
	EComplianceType__Silk          = 2,
	EComplianceType__Custom        = 3,
	EComplianceType__EComplianceType_MAX = 4
};



enum class ELateralConstraintMode : uint8_t
{
	ELateralConstraintMode__PBD    = 0,
	ELateralConstraintMode__XPBD   = 1,
	ELateralConstraintMode__ELateralConstraintMode_MAX = 2
};



enum class EKawaiiPhysicsSimulationSpace : uint8_t
{
	EKawaiiPhysicsSimulationSpace__ComponentSpace = 0,
	EKawaiiPhysicsSimulationSpace__WorldSpace = 1,
	EKawaiiPhysicsSimulationSpace__EKawaiiPhysicsSimulationSpace_MAX = 2
};









struct FKawaiiPhysicsSettings
{
	float                                              Damping;                                                  
	float                                              WorldDampingLocation;                                     
	float                                              WorldDampingRotation;                                     
	float                                              Stiffness;                                                
	float                                              Radius;                                                   
	float                                              LimitAngle;                                               
};



struct FCollisionLimitBase
{
	struct FBoneReference                              DrivingBone;                                              
	struct FVector                                     OffsetLocation;                                           
	struct FRotator                                    OffsetRotation;                                           
	struct FVector                                     Location;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FQuat                                       Rotation;                                                 
};



struct FSphericalLimit : public FCollisionLimitBase
{
	float                                              Radius;                                                   
	ESphericalLimitType                                LimitType;                                                
	unsigned char                                      UnknownData00[0xB];                                       
};



struct FCapsuleLimit : public FCollisionLimitBase
{
	float                                              Radius;                                                   
	float                                              Length;                                                   
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FPlanarLimit : public FCollisionLimitBase
{
	struct FPlane                                      Plane;                                                    
};



struct FKawaiiPhysicsModifyBone
{
	struct FBoneReference                              BoneRef;                                                  
	int                                                ParentIndex;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        ChildIndexs;                                              
	struct FKawaiiPhysicsSettings                      PhysicsSettings;                                          
	struct FVector                                     Location;                                                 
	struct FVector                                     PrevLocation;                                             
	struct FQuat                                       PrevRotation;                                             
	struct FVector                                     PoseLocation;                                             
	unsigned char                                      UnknownData01[0x4];                                       
	struct FQuat                                       PoseRotation;                                             
	struct FVector                                     PoseScale;                                                
	float                                              LengthFromRoot;                                           
	bool                                               bDummy;                                                   
	bool                                               bExcluded;                                                
	unsigned char                                      UnknownData02[0xE];                                       
};



struct FAnimNode_KawaiiPhysics : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RootBone;                                                 
	TArray<struct FBoneReference>                      ExcludeBones;                                             
	int                                                TargetFramerate;                                          
	bool                                               OverrideTargetFramerate;                                  
	unsigned char                                      UnknownData00[0x3];                                       
	struct FKawaiiPhysicsSettings                      PhysicsSettings;                                          
	class UCurveFloat*                                 DampingCurve;                                             
	class UCurveFloat*                                 WorldDampingLocationCurve;                                
	class UCurveFloat*                                 WorldDampingRotationCurve;                                
	class UCurveFloat*                                 StiffnessCurve;                                           
	class UCurveFloat*                                 RadiusCurve;                                              
	class UCurveFloat*                                 LimitAngleCurve;                                          
	bool                                               bUpdatePhysicsSettingsInGame;                             
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              DummyBoneLength;                                          
	EPlanarConstraint                                  PlanarConstraint;                                         
	unsigned char                                      UnknownData02[0x7];                                       
	TArray<struct FSphericalLimit>                     SphericalLimits;                                          
	TArray<struct FCapsuleLimit>                       CapsuleLimits;                                            
	TArray<struct FPlanarLimit>                        PlanarLimits;                                             
	float                                              TeleportDistanceThreshold;                                
	float                                              TeleportRotationThreshold;                                
	struct FVector                                     Gravity;                                                  
	bool                                               bEnableWind;                                              
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              WindScale;                                                
	unsigned char                                      UnknownData04[0x4];                                       
	TArray<struct FKawaiiPhysicsModifyBone>            ModifyBones;                                              
	float                                              TotalBoneLength;                                          
	unsigned char                                      UnknownData05[0xC];                                       
	struct FTransform                                  PreSkelCompTransform;                                     
	bool                                               bInitPhysicsSettings;                                     
	unsigned char                                      UnknownData06[0x4F];                                      
};



struct FKawaiiPhysicsEdgeCollisionSettings
{
	bool                                               bEnableEdgeCollision;                                     
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                StripIndex;                                               
	int                                                StripGroup;                                               
	bool                                               bLoopStripGroup;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                TotalStripCount;                                          
	float                                              CollisionTolerance;                                       
	bool                                               bDebugDrawInGame;                                         
	bool                                               bActiveLateralConstraint;                                 
	unsigned char                                      UnknownData02[0x2];                                       
	int                                                LateralConstraintIterationCount;                          
	float                                              LateralConstraintWeight;                                  
	bool                                               bUseDiagonalEdgesForLateralConstraint;                    
	ELateralConstraintMode                             LateralConstraintMode;                                    
	EComplianceType                                    ComplianceType;                                           
	unsigned char                                      UnknownData03[0x1];                                       
	float                                              ComplianceValueOverride;                                  
};



struct FNewKawaiiPhysicsModifyBone
{
	struct FBoneReference                              BoneRef;                                                  
	int                                                ParentIndex;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<int>                                        ChildIndexs;                                              
	struct FKawaiiPhysicsSettings                      PhysicsSettings;                                          
	struct FVector                                     Location;                                                 
	struct FVector                                     PrevLocation;                                             
	struct FQuat                                       PrevRotation;                                             
	struct FVector                                     PoseLocation;                                             
	unsigned char                                      UnknownData01[0x4];                                       
	struct FQuat                                       PoseRotation;                                             
	struct FVector                                     PoseScale;                                                
	float                                              LengthFromRoot;                                           
	bool                                               bDummy;                                                   
	bool                                               bExcluded;                                                
	unsigned char                                      UnknownData02[0x2];                                       
	struct FVector                                     ForwardPos;                                               
	struct FVector                                     BackwardPos;                                              
	bool                                               bIsEndBone;                                               
	unsigned char                                      UnknownData03[0x3];                                       
	struct FVector                                     WorldPoseLocation;                                        
	unsigned char                                      UnknownData04[0xA4];                                      
};



struct FNewAnimNode_KawaiiPhysics : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RootBone;                                                 
	TArray<struct FBoneReference>                      ExcludeBones;                                             
	TArray<struct FBoneReference>                      FixedBones;                                               
	EKawaiiPhysicsSimulationSpace                      SimulationSpace;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                TargetFramerate;                                          
	bool                                               OverrideTargetFramerate;                                  
	unsigned char                                      UnknownData01[0x3];                                       
	struct FKawaiiPhysicsSettings                      PhysicsSettings;                                          
	unsigned char                                      UnknownData02[0x4];                                       
	class UCurveFloat*                                 DampingCurve;                                             
	class UCurveFloat*                                 WorldDampingLocationCurve;                                
	class UCurveFloat*                                 WorldDampingRotationCurve;                                
	class UCurveFloat*                                 StiffnessCurve;                                           
	class UCurveFloat*                                 RadiusCurve;                                              
	class UCurveFloat*                                 LimitAngleCurve;                                          
	bool                                               bUpdatePhysicsSettingsInGame;                             
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              DummyBoneLength;                                          
	EPlanarConstraint                                  PlanarConstraint;                                         
	unsigned char                                      UnknownData04[0x7];                                       
	TArray<struct FSphericalLimit>                     SphericalLimits;                                          
	TArray<struct FCapsuleLimit>                       CapsuleLimits;                                            
	TArray<struct FPlanarLimit>                        PlanarLimits;                                             
	float                                              TeleportDistanceThreshold;                                
	float                                              TeleportRotationThreshold;                                
	struct FVector                                     Gravity;                                                  
	struct FVector                                     MaxDistance;                                              
	struct FVector                                     MinDistance;                                              
	bool                                               bEnableWind;                                              
	unsigned char                                      UnknownData05[0x3];                                       
	float                                              WindScale;                                                
	struct FKawaiiPhysicsEdgeCollisionSettings         EdgeCollisionSettings;                                    
	bool                                               bEnableEndBoneControl;                                    
	unsigned char                                      UnknownData06[0x3];                                       
	struct FVector                                     EndBoneControlOffset;                                     
	struct FRotator                                    EndBoneControlRotation;                                   
	struct FVector                                     RootBoneControlOffset;                                    
	TArray<struct FNewKawaiiPhysicsModifyBone>         ModifyBones;                                              
	float                                              TotalBoneLength;                                          
	unsigned char                                      UnknownData07[0xC];                                       
	struct FTransform                                  PreSkelCompTransform;                                     
	bool                                               bInitPhysicsSettings;                                     
	unsigned char                                      UnknownData08[0x12F];                                     
};



struct FSimulationSpaceCache
{
	struct FTransform                                  ComponentToTargetSpace;                                   
	struct FTransform                                  TargetSpaceToComponent;                                   
};

}

