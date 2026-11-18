#pragma once


 
namespace SDK
{





enum class EMonsterSpawnSourceType : uint8_t
{
	Default                        = 0,
	LevelData                      = 1,
	EventTrigger                   = 2,
	BossCall                       = 3,
	GMTest                         = 4,
	AirDrop                        = 5,
	MonsterSpawnAction             = 6,
	ItemCall                       = 7,
	UserTrigger                    = 8,
	EMonsterSpawnSourceType_MAX    = 9
};



enum class ELevelEndCondType : uint8_t
{
	MonsterWaveEnd                 = 0,
	ELevelEndCondType_MAX          = 1
};



enum class EGenerateType : uint8_t
{
	Random                         = 0,
	Nearest                        = 1,
	EGenerateType_MAX              = 2
};



enum class EMonsterWaveEndCondType : uint8_t
{
	AllMonsterDead                 = 0,
	SpecialMonsterDead             = 1,
	MonsterNumLimit                = 2,
	DurTimeLimit                   = 3,
	EMonsterWaveEndCondType_MAX    = 4
};









struct FGameLevelDesc
{
	int                                                ChapterID;                                                
	int                                                LevelID;                                                  
	struct FString                                     Desc;                                                     
};



struct FRelifePoint
{
	int                                                ID;                                                       
	bool                                               IsActivePoint;                                            
	unsigned char                                      UnknownData00[0xB];                                       
	struct FTransform                                  Trans;                                                    
};



struct FPVECircle
{
	int                                                CircleID;                                                 
	struct FVector2D                                   targetPos;                                                
	float                                              Radius;                                                   
	float                                              MoveTime;                                                 
	float                                              Pain;                                                     
};



struct FRoadPointInfo
{
	int                                                ID;                                                       
	int                                                Radius;                                                   
	struct FVector                                     pos;                                                      
};



struct FMonsterSpot
{
	struct FString                                     Desc;                                                     
	unsigned char                                      MonsterSpotType;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector                                     pos;                                                      
	TArray<struct FRoadPointInfo>                      RoadPointList;                                            
	unsigned char                                      SpotRadius;                                               
	unsigned char                                      UnknownData01[0x7];                                       
};



struct FMonsterSpotGroup
{
	struct FString                                     Desc;                                                     
	struct FVector                                     pos;                                                      
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FMonsterSpot>                        SpotList;                                                 
};



struct FMonsterGenerateCfg
{
	int                                                MonsterID;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Desc;                                                     
	unsigned char                                      SpotType;                                                 
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                MonsterNum;                                               
	float                                              RandomGenerateDelayTime;                                  
	int                                                ReBornTimes;                                              
	int                                                RebornDelay;                                              
	float                                              GenerateDelayTime;                                        
	int                                                ID;                                                       
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FMonsterGeneratePlan
{
	struct FString                                     Desc;                                                     
	int                                                PlanWeight;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FMonsterGenerateCfg>                 PlanDetail;                                               
	int                                                ID;                                                       
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FMonsterGroup
{
	struct FString                                     Desc;                                                     
	TEnumAsByte<EGenerateType>                         ChooseGroupSpotType;                                      
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                NearPlayTeamIdx;                                          
	TArray<class UZMonsterSpotGroup*>                  SpotGroupChooseList;                                      
	TArray<struct FMonsterSpotGroup>                   MonsterSpotGroupChooseList;                               
	TArray<struct FMonsterGeneratePlan>                PlanList;                                                 
	int                                                ID;                                                       
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FMonsterWave
{
	float                                              WaveDelayTime;                                            
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FMonsterGroup>                       MonsterGroupList;                                         
	struct FString                                     Desc;                                                     
	TEnumAsByte<EMonsterWaveEndCondType>               EndCondType;                                              
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                EndCondPar;                                               
	int                                                ID;                                                       
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FLevelObjets
{
	class UClass*                                      Objects;                                                  
	unsigned char                                      UnknownData00[0x8];                                       
	struct FTransform                                  Trans;                                                    
};



struct FLevelData
{
	struct FGameLevelDesc                              LevelDesc;                                                
	TArray<struct FString>                             TargetClassPaths;                                         
	struct FString                                     LeveDirectorFilePath;                                     
	TEnumAsByte<ELevelEndCondType>                     EndCondType;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     EndCondPar;                                               
	bool                                               IsLastLevel;                                              
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                DiffcultPerc;                                             
	TArray<struct FVector>                             TaskPointLocations;                                       
	TArray<struct FRelifePoint>                        PVERelifePointsInfo;                                      
	TArray<struct FPVECircle>                          PVECircleInfo;                                            
	TArray<struct FMonsterWave>                        MonsterWaveCfg;                                           
	struct FVector                                     pos;                                                      
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<struct FLevelObjets>                        LevelAddObjs;                                             
};



struct FMonsterGenerateInfo
{
	int                                                MonsterID;                                                
	int                                                MonsterNum;                                               
	int                                                MonsterWaveID;                                            
	struct FVector                                     pos;                                                      
	int                                                PosRadius;                                                
	int                                                ReBornTimes;                                              
	int                                                RebornDelay;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FRoadPointInfo>                      RoadPointList;                                            
};

}

