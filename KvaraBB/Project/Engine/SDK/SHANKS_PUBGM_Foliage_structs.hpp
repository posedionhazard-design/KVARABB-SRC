#pragma once


 
namespace SDK
{





enum class EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform       = 0,
	EFoliageScaling__Free          = 1,
	EFoliageScaling__LockXY        = 2,
	EFoliageScaling__LockXZ        = 3,
	EFoliageScaling__LockYZ        = 4,
	EFoliageScaling__EFoliageScaling_MAX = 5
};



enum class EVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel__Red   = 0,
	EVertexColorMaskChannel__Green = 1,
	EVertexColorMaskChannel__Blue  = 2,
	EVertexColorMaskChannel__Alpha = 3,
	EVertexColorMaskChannel__MAX_None = 4,
	EVertexColorMaskChannel__EVertexColorMaskChannel_MAX = 5
};



enum class EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5
};



enum class ESimulationQuery : uint8_t
{
	ESimulationQuery__CollisionOverlap = 0,
	ESimulationQuery__ShadeOverlap = 1,
	ESimulationQuery__AnyOverlap   = 2,
	ESimulationQuery__ESimulationQuery_MAX = 3
};



enum class ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap = 0,
	ESimulationOverlap__ShadeOverlap = 1,
	ESimulationOverlap__None       = 2,
	ESimulationOverlap__ESimulationOverlap_MAX = 3
};









struct FFoliageVertexColorChannelMask
{
	unsigned char                                      UseMask : 1;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MaskThreshold;                                            
	unsigned char                                      InvertMask : 1;                                           
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FFoliageTypeObject
{
	class UObject*                                     FoliageTypeObject;                                        
	class UFoliageType*                                TypeInstance;                                             
	bool                                               bIsAsset;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	class UClass*                                      Type;                                                     
};



struct FProceduralFoliageInstance
{
	struct FVector                                     Location;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FQuat                                       Rotation;                                                 
	struct FVector                                     Normal;                                                   
	float                                              Age;                                                      
	float                                              Scale;                                                    
	unsigned char                                      UnknownData01[0x4];                                       
	class UFoliageType*                                Type;                                                     
	unsigned char                                      UnknownData02[0x20];                                      
};

}

