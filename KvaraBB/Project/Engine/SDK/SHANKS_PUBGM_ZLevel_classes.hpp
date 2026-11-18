#pragma once


 
namespace SDK
{






class AZLevelData : public AActor
{
public:
	struct FGameLevelDesc                              LevelDesc;                                                
	TArray<struct FString>                             TargetClassPaths;                                         
	struct FString                                     LeveDirectorFilePath;                                     
	TEnumAsByte<ELevelEndCondType>                     EndCondType;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     EndCondPar;                                               
	bool                                               IsLastLevel;                                              
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                DiffcultPerc;                                             
	TArray<class UZPVECircle*>                         PVECircleConfigs;                                         
	TArray<class UZPVERelifePoint*>                    PVERelifePoints;                                          
	TArray<class UZMonsterSpotGroup*>                  MonsterSpotGroups;                                        
	TArray<struct FVector>                             TaskPointLocations;                                       
	TArray<struct FRelifePoint>                        PVERelifePointsInfo;                                      
	TArray<struct FPVECircle>                          PVECircleInfo;                                            
	TArray<struct FMonsterWave>                        MonsterWaveCfg;                                           
	TArray<struct FLevelData>                          CfgList;                                                  
	TArray<struct FLevelObjets>                        LevelAddObjs;                                             
	int                                                CurComponentNameIndex;                                    
	unsigned char                                      UnknownData02[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZLevelData");
		return pStaticClass;
	}


	void ReBindLevelDataComponent();
	void CheckMonsterSpotIsOnLand(class UZMonsterSpot* MonsterSpot, class UZMonsterSpotGroup* SpotGroup);
};




class UZSpotSceneComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZSpotSceneComponent");
		return pStaticClass;
	}

};




class UZMonsterRoadPoint : public UZSpotSceneComponent
{
public:
	int                                                Radius;                                                   
	unsigned char                                      UnknownData00[0xC];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterRoadPoint");
		return pStaticClass;
	}

};




class UZMonsterSpot : public UZSpotSceneComponent
{
public:
	struct FString                                     Desc;                                                     
	unsigned char                                      MonsterSpotType;                                          
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<class UZMonsterRoadPoint*>                  RoadPointList;                                            
	unsigned char                                      SpotRadius;                                               
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterSpot");
		return pStaticClass;
	}

};




class UZMonsterSpotGroup : public USceneComponent
{
public:
	struct FString                                     Desc;                                                     
	TArray<class UZMonsterSpot*>                       SpotList;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZMonsterSpotGroup");
		return pStaticClass;
	}

};




class UZPVECircle : public UZSpotSceneComponent
{
public:
	struct FVector2D                                   targetPos;                                                
	float                                              Radius;                                                   
	float                                              MoveTime;                                                 
	float                                              Pain;                                                     
	unsigned char                                      UnknownData00[0xC];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZPVECircle");
		return pStaticClass;
	}

};




class UZPVERelifePoint : public UZSpotSceneComponent
{
public:
	bool                                               IsActivePoint;                                            
	unsigned char                                      UnknownData00[0xF];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ZLevel.ZPVERelifePoint");
		return pStaticClass;
	}

};


}

