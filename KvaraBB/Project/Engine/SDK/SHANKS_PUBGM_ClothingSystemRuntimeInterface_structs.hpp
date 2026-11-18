#pragma once


 
namespace SDK
{





enum class EClothSkinningMode : uint8_t
{
	EClothSkinningMode__Default    = 0,
	EClothSkinningMode__Alternate  = 1,
	EClothSkinningMode__EClothSkinningMode_MAX = 2
};









struct FClothCollisionPrim_Sphere
{
	int                                                BoneIndex;                                                
	float                                              Radius;                                                   
	struct FVector                                     LocalPosition;                                            
};



struct FClothCollisionPrim_SphereConnection
{
	int                                                SphereIndices[0x2];                                       
};



struct FClothCollisionPrim_Convex
{
	TArray<struct FPlane>                              Planes;                                                   
	int                                                BoneIndex;                                                
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FClothCollisionData
{
	TArray<struct FClothCollisionPrim_Sphere>          Spheres;                                                  
	TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;                                        
	TArray<struct FClothCollisionPrim_Convex>          Convexes;                                                 
};

}

