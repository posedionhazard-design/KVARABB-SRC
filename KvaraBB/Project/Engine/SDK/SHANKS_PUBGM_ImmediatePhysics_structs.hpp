#pragma once


 
namespace SDK
{





enum class ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace = 0,
	ESimulationSpace__WorldSpace   = 1,
	ESimulationSpace__RootBoneSpace = 2,
	ESimulationSpace__ESimulationSpace_MAX = 3
};









struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     
	struct FVector                                     OverrideWorldGravity;                                     
	struct FVector                                     ExternalForce;                                            
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           
	bool                                               bEnableWorldGeometry;                                     
	unsigned char                                      UnknownData00[0x2];                                       
	ESimulationSpace                                   SimulationSpace;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	bool                                               bOverrideWorldGravity;                                    
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              CachedBoundsScale;                                        
	bool                                               bComponentSpaceSimulation;                                
	unsigned char                                      UnknownData03[0x22F];                                     
};

}

