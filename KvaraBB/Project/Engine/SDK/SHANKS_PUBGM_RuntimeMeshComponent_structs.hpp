#pragma once


 
namespace SDK
{





enum class EUpdateFrequency : uint8_t
{
	EUpdateFrequency__Average      = 0,
	EUpdateFrequency__Frequent     = 1,
	EUpdateFrequency__Infrequent   = 2,
	EUpdateFrequency__VertexBufferFrequent = 3,
	EUpdateFrequency__IndexBufferFrequent = 4,
	EUpdateFrequency__EUpdateFrequency_MAX = 5
};



enum class ERuntimeMeshCollisionCookingMode : uint8_t
{
	ERuntimeMeshCollisionCookingMode__CollisionPerformance = 0,
	ERuntimeMeshCollisionCookingMode__CookingPerformance = 1,
	ERuntimeMeshCollisionCookingMode__ERuntimeMeshCollisionCookingMode_MAX = 2
};









struct FRuntimeMeshCollisionSection
{
	TArray<struct FVector>                             VertexBuffer;                                             
	TArray<int>                                        IndexBuffer;                                              
};



struct FRuntimeConvexCollisionSection
{
	TArray<struct FVector>                             VertexBuffer;                                             
	struct FBox                                        BoundingBox;                                              
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FRuntimeMeshComponentPrePhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FRuntimeMeshTangent
{
	struct FVector                                     TangentX;                                                 
	bool                                               bFlipTangentY;                                            
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FRunTimeMeshFrustumCullNode
{
	struct FBox                                        Bounds;                                                   
	uint16_t                                           InfoIndex;                                                
	unsigned char                                      UnknownData00[0x2];                                       
	struct FString                                     LandScapeName;                                            
	unsigned char                                      UnknownData01[0x8];                                       
};

}

