#pragma once


 
namespace SDK
{





enum class EBuildingActionType : uint8_t
{
	EBA_PreBuild                   = 0,
	EBA_BuildAtScreenPos           = 1,
	EBA_DoubleClickBuild           = 2,
	EBA_CustomEventBuild           = 3,
	EBA_INTERNAL_SERVER_CHECK_TYPE = 4,
	EBA_Max                        = 5
};



enum class EBuildingActorConstructingMode : uint8_t
{
	EBCM_SNAP_TO_GROUND            = 0,
	EBCM_SNAP_EVERYWHERE           = 1,
	EBCM_SNAP_MAX                  = 2
};



enum class EBuildingViewType : uint8_t
{
	EBuildingViewType__EBVT_Invalid = 0,
	EBuildingViewType__EBVT_UseController = 1,
	EBuildingViewType__EBVT_UseCamera = 2,
	EBuildingViewType__EBVT_UseCharacter = 3,
	EBuildingViewType__EBVT_Max    = 4
};



enum class EBuildingType : uint8_t
{
	EBuilding_Wall                 = 0,
	EBuilding_Stairs               = 1,
	EBuilding_Prop                 = 2,
	EBuilding_Max                  = 3
};









struct FBuildingActorWorldSnapSetup
{
	struct FVector                                     GridSizeScale;                                            
	struct FVector                                     Pivot;                                                    
	struct FRotator                                    SnapRotation;                                             
};



struct FBuildingActorDSBuildCheckData
{
	struct FVector                                     BuilderOffset;                                            
	struct FVector                                     BuildingActorOffset;                                      
};



struct FBuildingActorDSBuildCheck
{
	TArray<struct FBuildingActorDSBuildCheckData>      DSCheckCfg;                                               
	TEnumAsByte<ECollisionChannel>                     CheckChannel;                                             
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FBuildingActorDensityCheck
{
	bool                                               bDoCheck;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     Location;                                                 
	struct FString                                     LuaModPath;                                               
};



struct FBuildingActorInfo
{
	TWeakObjectPtr<class ABuildingActorBase>           BuildingActor;                                            
	TWeakObjectPtr<class AActor>                       OwnerActor;                                               
	int                                                BuildID;                                                  
	float                                              SpawnedTime;                                              
};



struct FWorldGridData
{
	struct FVector                                     GridSize;                                                 
};



struct FBuildingData
{
	int                                                BuildingID;                                               
	TEnumAsByte<EBuildingType>                         BuildingType;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	struct FSoftObjectPath                             BuildingActorClassPath;                                   
	TArray<TEnumAsByte<ECollisionChannel>>             BlockingChannels;                                         
	float                                              MaxBuildDist;                                             
	float                                              CDInterval;                                               
	int                                                MaxBuildCount;                                            
	bool                                               bAutoRefreshCD;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                GroupBuildingIdForMaxBuild;                               
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FSnapGridData
{
	struct FTransform                                  GridTransform;                                            
	struct FVector                                     Extent;                                                   
	unsigned char                                      UnknownData00[0x14];                                      
};



struct FBSRotatedBox
{
	unsigned char                                      UnknownData00[0xA0];                                      
};



struct FBuildingTouchInfo
{
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FQuadTracingData
{
	unsigned char                                      UnknownData00[0x18];                                      
};

}

