#pragma once


 
namespace SDK
{





enum class EFracturedMeshConnectionType : uint8_t
{
	FracturedMeshConnType_None     = 0,
	FracturedMeshConnType_Indestructible = 1,
	FracturedMeshConnType_Border   = 2,
	FracturedMeshConnType_IndestructibleAndBorder = 3,
	FracturedMeshConnType_MAX      = 4
};



enum class EFracturedImpactEffType : uint8_t
{
	FracturedImpactEffType_Normal  = 0,
	FracturedImpactEffType_SpreadOut = 1,
	FracturedImpactEffType_MAX     = 2
};



enum class EFracturedMeshDestructibleAction : uint8_t
{
	FracturedDAction_Hide          = 0,
	FracturedDAction_Detach        = 1,
	FracturedDAction_MAX           = 2
};



enum class EPhotonDestructibleSurfaceHitType : uint8_t
{
	PDSurfaceHit_Circle            = 0,
	PDSurfaceHit_Texture           = 1,
	PDSurfaceHit_MAX               = 2
};



enum class EFracturedAxis : uint8_t
{
	FracturedAxis_X                = 0,
	FracturedAxis_Y                = 1,
	FracturedAxis_Z                = 2,
	FracturedAxis_NX               = 3,
	FracturedAxis_NY               = 4,
	FracturedAxis_NZ               = 5,
	FracturedAxis_MAX              = 6
};









struct FPhotonDestructibleSurfaceHitData
{
	uint16_t                                           InstanceIndex;                                            
	TEnumAsByte<EPhotonDestructibleSurfaceHitType>     HitType;                                                  
	unsigned char                                      UnknownData00[0x1];                                       
	int                                                HitParam;                                                 
	int                                                HitParam2;                                                
	struct FVector                                     HitPoint;                                                 
};



struct FPDSurfaceNetData
{
	TArray<struct FPhotonDestructibleSurfaceHitData>   SurfaceHitData;                                           
	int                                                HitDataCount;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};

}

