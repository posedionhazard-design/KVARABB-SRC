#pragma once


 
namespace SDK
{





enum class ESpeciesOrganization : uint8_t
{
	ESpeciesOrganization__Org_Group = 0,
	ESpeciesOrganization__Org_Squad = 1,
	ESpeciesOrganization__Org_Unit = 2,
	ESpeciesOrganization__Org_MAX  = 3
};



enum class ESTSpawnerVolume : uint8_t
{
	ESTSpawnerVolume__ESTSpawnerVolume_None = 0,
	ESTSpawnerVolume__ESTSpawnerVolume_Box = 1,
	ESTSpawnerVolume__ESTSpawnerVolume_Sphere = 2,
	ESTSpawnerVolume__ESTSpawnerVolume_MAX = 3
};



enum class ESpawnSpotType : uint8_t
{
	ESpawnSpotType__Ground         = 0,
	ESpawnSpotType__Wall           = 1,
	ESpawnSpotType__Air            = 2,
	ESpawnSpotType__ESpawnSpotType_MAX = 3
};



enum class EReadSpeciesData : uint8_t
{
	EReadSpeciesData__WeightedRandom = 0,
	EReadSpeciesData__Ordered      = 1,
	EReadSpeciesData__ManuallyIndex = 2,
	EReadSpeciesData__EReadSpeciesData_MAX = 3
};



enum class EWaveState : uint8_t
{
	EWaveState__None               = 0,
	EWaveState__WaveSpawning       = 1,
	EWaveState__WaveSpawned        = 2,
	EWaveState__WaveCD             = 3,
	EWaveState__WaveReadyForNext   = 4,
	EWaveState__EWaveState_MAX     = 5
};









struct FUnitInitConfig
{
	struct FName                                       BlackboardKey;                                            
	struct FString                                     Value;                                                    
};



struct FUnitConfig
{
	struct FString                                     Desc;                                                     
	int                                                ConfigID;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FUnitInitConfig>                     UnitInitConfig;                                           
	int                                                AttrID;                                                   
	int                                                DropID;                                                   
	struct FSoftClassPath                              BPPath;                                                   
	struct FString                                     StrBPPath;                                                
	bool                                               bTraceGround;                                             
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     PreferSpotID;                                             
	int                                                UnitIndex;                                                
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FSTSpawnParam
{
	struct FUnitConfig                                 UnitConfig;                                               
	unsigned char                                      UnknownData00[0x8];                                       
	struct FTransform                                  Transform;                                                
	int                                                AttributeID;                                              
	uint32_t                                           SpawnerID;                                                
	struct FString                                     SpotID;                                                   
	unsigned char                                      UnknownData01[0x8];                                       
};



struct FWeightedUnit
{
	int                                                Index;                                                    
	int                                                Weight;                                                   
};



struct FSquadConfig
{
	struct FString                                     Desc;                                                     
	TArray<struct FWeightedUnit>                       Units;                                                    
	TArray<struct FUnitInitConfig>                     SquadInitConfig;                                          
	struct FString                                     SuggestNumber;                                            
};



struct FWeightedSquad
{
	int                                                Index;                                                    
	int                                                Weight;                                                   
};



struct FGroupConfig
{
	struct FString                                     Desc;                                                     
	TArray<struct FWeightedSquad>                      Squads;                                                   
	int                                                Weight;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FUnitRatio
{
	struct FUnitConfig                                 Unit;                                                     
	float                                              Ratio;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FSpeciesRatioStruct
{
	TArray<struct FUnitRatio>                          UnitRatios;                                               
};



struct FSpawnSpotInfo
{
	struct FTransform                                  Transform;                                                
	int                                                SpecieSquadIndex;                                         
	int                                                SpecieUnitIndex;                                          
	struct FString                                     SpotID;                                                   
	TArray<struct FUnitInitConfig>                     SpotInitConfig;                                           
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FSpawnArea
{
	struct FVector                                     CenterLocation;                                           
	ESTSpawnerVolume                                   Shape;                                                    
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     ShapeSize;                                                
	bool                                               bInsideArea;                                              
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FSTSpawnerDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       
};

}

