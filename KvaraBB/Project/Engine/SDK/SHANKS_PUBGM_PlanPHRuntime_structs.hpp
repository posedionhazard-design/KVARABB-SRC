#pragma once


 
namespace SDK
{





enum class EDirectionType : uint8_t
{
	EDirectionType__Up             = 0,
	EDirectionType__Down           = 1,
	EDirectionType__Left           = 2,
	EDirectionType__Right          = 3,
	EDirectionType__EDirectionType_MAX = 4
};



enum class EHomeAssetType : uint8_t
{
	EHomeAssetType__CompleteEdgeStyle = 0,
	EHomeAssetType__HalfEdgeStyle  = 1,
	EHomeAssetType__ArcStyle       = 2,
	EHomeAssetType__DoorStyle      = 3,
	EHomeAssetType__FilletWall     = 4,
	EHomeAssetType__TwoEdgeWall    = 5,
	EHomeAssetType__ThreeEdgeWall  = 6,
	EHomeAssetType__BigArcStyle    = 7,
	EHomeAssetType__BigArcDoorStyle = 8,
	EHomeAssetType__TwoEdgeDoorStyle = 9,
	EHomeAssetType__PlaneWallStyle = 10,
	EHomeAssetType__PlaneDoorStyle = 11,
	EHomeAssetType__TwoArcWindowStyle = 12,
	EHomeAssetType__EHomeAssetType_MAX = 13
};









struct FStructureData
{
	struct FVector2D                                   Position;                                                 
	float                                              Thickness;                                                
	EHomeAssetType                                     AssetType;                                                
	EDirectionType                                     Direction;                                                
	unsigned char                                      OccupiedX;                                                
	unsigned char                                      OccupiedY;                                                
	unsigned char                                      PaintNum;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FPlanPH_CommonOccupy
{
	int                                                LandId;                                                   
	bool                                               bOccupied;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                BeginTime;                                                
	int                                                EndTime;                                                  
	struct FString                                     PlayerUID;                                                
	bool                                               bIsWedding;                                               
	unsigned char                                      UnknownData01[0x7];                                       
};

}

