#pragma once


 
namespace SDK
{





enum class EClothStuckRecoveryMode : uint8_t
{
	EClothStuckRecoveryMode__PullToSkin = 0,
	EClothStuckRecoveryMode__TeleportAndReset = 1,
	EClothStuckRecoveryMode__EClothStuckRecoveryMode_MAX = 2
};



enum class EClothingWindMethod : uint8_t
{
	EClothingWindMethod__Legacy    = 0,
	EClothingWindMethod__Accurate  = 1,
	EClothingWindMethod__EClothingWindMethod_MAX = 2
};



enum class EClothTetherMode : uint8_t
{
	EClothTetherMode__Geodesic     = 0,
	EClothTetherMode__Simple       = 1,
	EClothTetherMode__EClothTetherMode_MAX = 2
};



enum class EClothSolverMode : uint8_t
{
	EClothSolverMode__GaussSeidel  = 0,
	EClothSolverMode__Jacobi       = 1,
	EClothSolverMode__EClothSolverMode_MAX = 2
};



enum class EMaskTarget_PhysMesh : uint8_t
{
	MaskTarget_PhysMesh__None      = 0,
	MaskTarget_PhysMesh__MaxDistance = 1,
	MaskTarget_PhysMesh__BackstopDistance = 2,
	MaskTarget_PhysMesh__BackstopRadius = 3,
	MaskTarget_PhysMesh__AnimDriveMultiplier = 4,
	MaskTarget_PhysMesh__SelfCollisionMask = 5,
	MaskTarget_PhysMesh__PhysicsStiffness = 6,
	MaskTarget_PhysMesh__ShapeMatchingMask = 7,
	MaskTarget_PhysMesh__ClothLayerMask = 8,
	MaskTarget_PhysMesh__AnimDriveStiffnessWeightMap = 9,
	MaskTarget_PhysMesh__AnimDriveDampingWeightMap = 10,
	MaskTarget_PhysMesh__MaskTarget_MAX = 11
};









struct FClothVertBoneData
{
	int                                                NumInfluences;                                            
	uint16_t                                           BoneIndices[0x8];                                         
	float                                              BoneWeights[0x8];                                         
};



struct FClothConstraintSetup
{
	float                                              Stiffness;                                                
	float                                              StiffnessMultiplier;                                      
	float                                              StretchLimit;                                             
	float                                              CompressionLimit;                                         
};



struct FClothWindConfig
{
	EClothingWindMethod                                WindMethod;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              WindDragCoefficient;                                      
	float                                              WindLiftCoefficient;                                      
};



struct FClothSelfCollisionConfig
{
	float                                              SelfCollisionRadius;                                      
	float                                              SelfCollisionStiffness;                                   
	float                                              SelfCollisionCullScale;                                   
};



struct FClothDampingConfig
{
	struct FVector                                     Damping;                                                  
	struct FVector                                     LinearDrag;                                               
	struct FVector                                     AngularDrag;                                              
	float                                              Friction;                                                 
	float                                              AnimDriveDamping;                                         
};



struct FClothInertiaConfig
{
	struct FVector                                     LinearInertiaScale;                                       
	struct FVector                                     AngularInertiaScale;                                      
	struct FVector                                     CentrifugalInertiaScale;                                  
};



struct FClothSolverConfig
{
	EClothSolverMode                                   SolverMode;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              JacobiSOR;                                                
	bool                                               bUseGPU;                                                  
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              SolverFrequency;                                          
	float                                              StiffnessFrequency;                                       
	float                                              GravityScale;                                             
	bool                                               bUseXPBD;                                                 
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                XpbdIterations;                                           
	float                                              MaxStiffness;                                             
	float                                              MaxParticleDisplacement;                                  
	bool                                               bEnableAdaptiveFrequency;                                 
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              AdaptiveFrequencyMin;                                     
	float                                              AdaptiveFrequencyMax;                                     
};



struct FClothTeleportConfig
{
	bool                                               bEnableAutoTeleportDetection;                             
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              TeleportThreshold;                                        
	float                                              ResetThreshold;                                           
	float                                              RotationThreshold;                                        
	bool                                               bEnableStuckRecovery;                                     
	bool                                               bStuckRecoveryDebugDraw;                                  
	EClothStuckRecoveryMode                            StuckRecoveryMode;                                        
	unsigned char                                      UnknownData01[0x1];                                       
	float                                              StuckRecoveryDetectionSeconds;                            
	float                                              StuckRecoveryPullDurationSeconds;                         
	float                                              StuckRecoveryPenetrationDepth;                            
	float                                              StuckRecoveryMinPullStiffness;                            
	float                                              StuckRecoveryMaxPullStiffness;                            
	float                                              StuckRecoveryCheckIntervalSeconds;                        
	int                                                StuckRecoveryPullDilationRings;                           
	float                                              StuckRecoveryPullFalloff;                                 
};



struct FClothTetherConfig
{
	bool                                               bEnableTether;                                            
	EClothTetherMode                                   TetherMode;                                               
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              TetherStiffness;                                          
	float                                              TetherLimit;                                              
};



struct FClothCollisionConfig
{
	float                                              CollisionThickness;                                       
	bool                                               bEnableContinuousCollision;                               
	bool                                               bEnableEnvironmentalCollision;                            
	bool                                               bEnableGroundCollision;                                   
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FClothVolumeConfig
{
	bool                                               bEnableVolumeConstraints;                                 
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              VolumeConstraintStiffness;                                
	float                                              VolumeConstraintScaleMultiplier;                          
	int                                                VolumeConstraintSampleStride;                             
};



struct FClothBendingElementConfig
{
	bool                                               bEnableBendingElement;                                    
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              BendingElementStiffness;                                  
	float                                              BendingElementDamping;                                    
	float                                              BendingElementBucklingRatio;                              
	float                                              BendingElementBucklingStiffness;                          
	float                                              FlatnessRatio;                                            
};



struct FClothAnimDriveConfig
{
	bool                                               bAnimDriveEnabled;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              AnimDriveStiffnessLow;                                    
	float                                              AnimDriveStiffnessHigh;                                   
	float                                              AnimDriveDampingLow;                                      
	float                                              AnimDriveDampingHigh;                                     
	float                                              AnimDriveMaxRelativeVelocity;                             
	float                                              AnimDriveMultiplier;                                      
};



struct FClothConfig
{
	struct FClothConstraintSetup                       VerticalConstraintConfig;                                 
	struct FClothConstraintSetup                       HorizontalConstraintConfig;                               
	struct FClothConstraintSetup                       BendConstraintConfig;                                     
	struct FClothConstraintSetup                       ShearConstraintConfig;                                    
	struct FClothWindConfig                            WindConfig;                                               
	struct FClothSelfCollisionConfig                   SelfCollisionConfig;                                      
	struct FClothDampingConfig                         DampingConfig;                                            
	struct FClothInertiaConfig                         InertiaConfig;                                            
	struct FClothSolverConfig                          SolverConfig;                                             
	struct FClothTeleportConfig                        TeleportConfig;                                           
	struct FClothTetherConfig                          TetherConfig;                                             
	struct FClothCollisionConfig                       CollisionConfig;                                          
	struct FClothVolumeConfig                          VolumeConfig;                                             
	struct FClothBendingElementConfig                  BendingElementConfig;                                     
	struct FClothAnimDriveConfig                       AnimDriveConfig;                                          
	struct FSoftObjectPath                             ImportedConfigAssetPath;                                  
};



struct FVolumeConstraint
{
	uint32_t                                           Particle;                                                 
	uint32_t                                           Triangle[0x3];                                            
	float                                              RestVolume;                                               
	float                                              Scale;                                                    
};



struct FClothPhysicalMeshData
{
	TArray<struct FVector>                             Vertices;                                                 
	TArray<struct FVector>                             Normals;                                                  
	TArray<uint32_t>                                   Indices;                                                  
	TArray<float>                                      MaxDistances;                                             
	TArray<float>                                      BackstopDistances;                                        
	TArray<float>                                      BackstopRadiuses;                                         
	TArray<float>                                      AnimDriveMultipliers;                                     
	TArray<float>                                      SelfCollisionMask;                                        
	TArray<float>                                      PhysicsStiffness;                                         
	TArray<float>                                      ShapeMatchingMask;                                        
	TArray<struct FVector2D>                           UVs;                                                      
	TArray<float>                                      InverseMasses;                                            
	TArray<struct FClothVertBoneData>                  BoneData;                                                 
	int                                                MaxBoneWeights;                                           
	int                                                NumFixedVerts;                                            
	int                                                OriginalSectionVertexCount;                               
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<uint32_t>                                   SelfCollisionIndices;                                     
	TArray<uint32_t>                                   ShapeMatchingIndices;                                     
	int                                                NumShapeMatchingRigidBodies;                              
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<uint32_t>                                   ShapeMatchingRigidBodyOffsets;                            
	TArray<uint32_t>                                   ShapeMatchingRigidBodyIds;                                
	TArray<float>                                      ShapeMatchingRestPositions;                               
	TArray<float>                                      ShapeMatchingInitialCenters;                              
	TArray<struct FIntPoint>                           VirtualEdges;                                             
	TArray<float>                                      ClothLayerMask;                                           
	TArray<float>                                      AnimDriveStiffnessWeightMap;                              
	TArray<float>                                      AnimDriveDampingWeightMap;                                
	TArray<struct FVolumeConstraint>                   VolumeConstraints;                                        
	TArray<int>                                        ParticleToTetrahedronMap;                                 
	int                                                NumVolumeConstraints;                                     
	float                                              VolumeConstraintScale;                                    
	int                                                VolumeConstraintSampleStride;                             
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<uint32_t>                                   ClothLayerOffsets;                                        
	int                                                NumClothLayers;                                           
	unsigned char                                      UnknownData03[0x4];                                       
	TArray<uint32_t>                                   ParticleVolumeConstraintOffsets;                          
	TArray<uint32_t>                                   ParticleVolumeConstraintData;                             
	int                                                NumBendingElements;                                       
	unsigned char                                      UnknownData04[0x4];                                       
	TArray<int>                                        BendingElementIndices;                                    
	TArray<float>                                      BendingElementRestAngles;                                 
};



struct FClothLODData
{
	struct FClothPhysicalMeshData                      PhysicalMeshData;                                         
	struct FClothCollisionData                         CollisionData;                                            
	unsigned char                                      UnknownData00[0x20];                                      
};



struct FClothParameterMask_PhysMesh
{
	struct FName                                       MaskName;                                                 
	EMaskTarget_PhysMesh                               CurrentTarget;                                            
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MaxValue;                                                 
	float                                              MinValue;                                                 
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<float>                                      Values;                                                   
	bool                                               bEnabled;                                                 
	unsigned char                                      UnknownData02[0x7];                                       
};

}

