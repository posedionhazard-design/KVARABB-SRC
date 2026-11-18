#pragma once


 
namespace SDK
{






class UAdvancedBuoyancyComponent : public USceneComponent
{
public:
	class AOceanManager*                               TheOcean;                                                 
	float                                              WaterDensity;                                             
	float                                              Gravity;                                                  
	float                                              MeshDensity;                                              
	unsigned char                                      UnknownData00[0x14];                                      
	class UStaticMeshComponent*                        BuoyantMesh;                                              
	struct FTransform                                  MeshTransform;                                            
	float                                              FalseVolume;                                              
	float                                              BuoyancyReductionCoefficient;                             
	float                                              BuoyancyPitchReductionCoefficient;                        
	float                                              DensityCorrection;                                        
	float                                              DensityCorrectionModifier;                                
	float                                              SubmergedVolume;                                          
	float                                              ImpactCoefficient;                                        
	struct FVector                                     DragCoefficient;                                          
	struct FVector                                     SuctionCoefficient;                                       
	float                                              ViscousDragCoefficient;                                   
	float                                              MaxSlamAcceleration;                                      
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FVector>                             AdvancedGridHeight;                                       
	TArray<struct FForceTriangle>                      SubmergedTris;                                            
	TArray<float>                                      TriSizes;                                                 
	TArray<float>                                      TriSubmergedArea;                                         
	unsigned char                                      UnknownData02[0x30];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.AdvancedBuoyancyComponent");
		return pStaticClass;
	}


	float TriangleArea(const struct FVector& A, const struct FVector& B, const struct FVector& C);
	TArray<struct FForceTriangle> SplitTriangle(const struct FBuoyancyVertex& H, const struct FBuoyancyVertex& M, const struct FBuoyancyVertex& L, const struct FVector& InArrow);
	void SetMeshDensity(float NewDensity, float NewWaterDensity);
	float GetOceanDepthFromGrid(const struct FVector& Position, bool bJustGetHeightAtLocation);
	void GetOcean();
	void DrawDebugStuff(const struct FForceTriangle& TriForce, const struct FColor& DebugColor);
	void ApplySlamForce(const struct FVector& SlamForce, const struct FVector& TriCenter);
	void ApplyForce(const struct FForceTriangle& TriForce);
};




class UBuoyancyComponent : public UMovementComponent
{
public:
	class AOceanManager*                               OceanManager;                                             
	float                                              MeshDensity;                                              
	float                                              FluidDensity;                                             
	float                                              FluidLinearDamping;                                       
	float                                              FluidAngularDamping;                                      
	struct FVector                                     VelocityDamper;                                           
	bool                                               ClampMaxVelocity;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              MaxUnderwaterVelocity;                                    
	float                                              TestPointRadius;                                          
	TArray<struct FVector>                             TestPoints;                                               
	TArray<float>                                      PointDensityOverride;                                     
	bool                                               DrawDebugPoints;                                          
	bool                                               EnableStayUprightConstraint;                              
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              StayUprightStiffness;                                     
	float                                              StayUprightDamping;                                       
	struct FRotator                                    StayUprightDesiredRotation;                               
	bool                                               EnableWaveForces;                                         
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              WaveForceMultiplier;                                      
	unsigned char                                      UnknownData03[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.BuoyancyComponent");
		return pStaticClass;
	}

};




class UBuoyancyForceComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnContactWater;                                           
	struct FScriptMulticastDelegate                    OnEnterWater;                                             
	bool                                               bUseBuoyancyEvent;                                        
	unsigned char                                      UnknownData00[0x7];                                       
	class AOceanManager*                               OceanManager;                                             
	float                                              MeshDensity;                                              
	float                                              FluidDensity;                                             
	float                                              FluidLinearDamping;                                       
	float                                              FluidAngularDamping;                                      
	struct FVector                                     VelocityDamper;                                           
	bool                                               ClampMaxVelocity;                                         
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              MaxUnderwaterVelocity;                                    
	float                                              TestPointRadius;                                          
	TArray<struct FVector>                             TestPoints;                                               
	bool                                               ApplyForceToBones;                                        
	bool                                               SnapToSurfaceIfNoPhysics;                                 
	bool                                               SnapToSeaLevel;                                           
	bool                                               bEnableGerstnerWaves;                                     
	bool                                               TwoGerstnerIterations;                                    
	unsigned char                                      UnknownData02[0x3];                                       
	TArray<float>                                      PointDensityOverride;                                     
	TArray<struct FStructBoneOverride>                 BoneOverride;                                             
	bool                                               bEnableZOptimize;                                         
	bool                                               DrawDebugPoints;                                          
	bool                                               DrawDebugSeaLevel;                                        
	bool                                               EnableStayUprightConstraint;                              
	float                                              StayUprightStiffness;                                     
	float                                              StayUprightDamping;                                       
	struct FRotator                                    StayUprightDesiredRotation;                               
	bool                                               EnableWaveForces;                                         
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              WaveForceMultiplier;                                      
	class USceneComponent*                             UpdatedComponent;                                         
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                
	bool                                               EnableCustomWaveForce;                                    
	unsigned char                                      UnknownData04[0x2];                                       
	struct FVector                                     CustomWaveForceTestPointOffset;                           
	TArray<class UWaterBoxComponent*>                  CandidateWaterBoxes;                                      
	unsigned char                                      UnknownData05[0x1B8];                                     
	class UPhysicsConstraintComponent*                 UprightConstraintComp;                                    
	unsigned char                                      UnknownData06[0x10];                                      
	class UWorld*                                      World;                                                    
	unsigned char                                      UnknownData07[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.BuoyancyForceComponent");
		return pStaticClass;
	}


	void SetUpdatedComponent(class USceneComponent* NewUpdatedComponent);
	void OnEnterWaterDelegate__DelegateSignature(bool IsUnderWater);
	void OnContactWaterDelegate__DelegateSignature(bool IsContactingWater);
	void NativeSetEnableCustomWaveForce(bool bEnable);
	bool IsGerstnerWaveEnabled();
	bool IsFloatingOnWater();
	bool IsEntirelyUnderWater();
	bool IsContactedWater();
	float GetSeaLevel();
	class AOceanManager* GetOceanManager();
	void EndableUprightConstraint(bool bEnable);
	bool CheckPointInWater(const struct FVector& Point, bool isWorldPosition);
	void CacheDampingProperties();
};




class UBuoyantMeshComponent : public UStaticMeshComponent
{
public:
	bool                                               bVerticalForcesOnly;                                      
	bool                                               bUseWaterPatch;                                           
	bool                                               bUseStaticForces;                                         
	bool                                               bUseDynamicForces;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	class AOceanManager*                               OceanManager;                                             
	bool                                               bDrawForceArrows;                                         
	bool                                               bDrawWaterline;                                           
	bool                                               bDrawVertices;                                            
	bool                                               bDrawTriangles;                                           
	bool                                               bDrawSubtriangles;                                        
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              ForceArrowSize;                                           
	bool                                               bOverrideMeshDensity;                                     
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              MeshDensity;                                              
	bool                                               bOverrideMass;                                            
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              Mass;                                                     
	float                                              WaterDensity;                                             
	unsigned char                                      UnknownData04[0x28];                                      
	class UWaterHeightmapComponent*                    WaterHeightmap;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.BuoyantMeshComponent");
		return pStaticClass;
	}

};




class AFishManager : public AActor
{
public:
	TArray<class UClass*>                              flockTypes;                                               
	TArray<float>                                      numInFlock;                                               
	float                                              minZ;                                                     
	float                                              maxZ;                                                     
	float                                              underwaterBoxLength;                                      
	bool                                               attachToPlayer;                                           
	bool                                               DebugMode;                                                
	unsigned char                                      UnknownData00[0x2];                                       
	class UClass*                                      PlayerType;                                               
	class AActor*                                      Player;                                                   
	unsigned char                                      UnknownData01[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.FishManager");
		return pStaticClass;
	}

};




class AFlockFish : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	class USphereComponent*                            FishInteractionSphere;                                    
	bool                                               IsLeader;                                                 
	unsigned char                                      UnknownData01[0x7];                                       
	TArray<class UClass*>                              enemyTypes;                                               
	TArray<class UClass*>                              preyTypes;                                                
	class UClass*                                      neighborType;                                             
	float                                              followDist;                                               
	float                                              Speed;                                                    
	float                                              MaxSpeed;                                                 
	float                                              turnSpeed;                                                
	float                                              turnFrequency;                                            
	float                                              hungerResetTime;                                          
	float                                              distBehindSpeedUpRange;                                   
	float                                              SeperationDistanceMultiplier;                             
	float                                              FleeDistanceMultiplier;                                   
	float                                              FleeAccelerationMultiplier;                               
	float                                              ChaseAccelerationMultiplier;                              
	float                                              SeekDecelerationMultiplier;                               
	float                                              AvoidForceMultiplier;                                     
	float                                              AvoidanceForce;                                           
	class UClass*                                      PlayerType;                                               
	struct FVector                                     underwaterMin;                                            
	struct FVector                                     underwaterMax;                                            
	float                                              CustomZSeekMin;                                           
	float                                              CustomZSeekMax;                                           
	float                                              NumNeighborsToEvaluate;                                   
	float                                              UpdateEveryTick;                                          
	unsigned char                                      UnknownData02[0x10];                                      
	bool                                               DebugMode;                                                
	unsigned char                                      UnknownData03[0xF];                                       
	class AActor*                                      Leader;                                                   
	TArray<class AActor*>                              neighbors;                                                
	TArray<class AActor*>                              nearbyEnemies;                                            
	TArray<class AActor*>                              nearbyPrey;                                               
	TArray<class AActor*>                              nearbyFriends;                                            
	class AActor*                                      fleeTarget;                                               
	class AActor*                                      preyTarget;                                               
	unsigned char                                      UnknownData04[0x50];                                      
	class AActor*                                      FishManager;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.FlockFish");
		return pStaticClass;
	}


	void OnEndOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};




class UInfiniteSystemComponent : public USceneComponent
{
public:
	float                                              MaxLookAtDistance;                                        
	bool                                               ScaleByDistance;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ScaleDistanceFactor;                                      
	float                                              ScaleStartDistance;                                       
	float                                              ScaleMin;                                                 
	float                                              ScaleMax;                                                 
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.InfiniteSystemComponent");
		return pStaticClass;
	}

};




class AOceanManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	float                                              GlobalWaveSpeed;                                          
	float                                              GlobalWaveAmplitude;                                      
	float                                              DistanceCheckAbove;                                       
	float                                              DistanceCheckBelow;                                       
	TArray<struct FWaveParameter>                      WaveClusters;                                             
	TArray<struct FWaveSetParameters>                  WaveSetOffsetsOverride;                                   
	float                                              NetWorkTimeOffset;                                        
	bool                                               bEnableLandscapeModulation;                               
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              ModulationStartHeight;                                    
	float                                              ModulationMaxHeight;                                      
	float                                              ModulationPower;                                          
	unsigned char                                      UnknownData02[0x4];                                       
	class ALandscape*                                  Landscape;                                                
	class UTexture2D*                                  HeightmapTexture;                                         
	unsigned char                                      UnknownData03[0x28];                                      
	bool                                               bShouldCorrectTime;                                       
	bool                                               bEnableWaterBoxModulation;                                
	unsigned char                                      UnknownData04[0x6];                                       
	TArray<struct FBox>                                WaterBoxes;                                               
	unsigned char                                      UnknownData05[0x4];                                       
	bool                                               bEnableWaterTransformModulation;                          
	unsigned char                                      UnknownData06[0x3];                                       
	TArray<struct FTransform>                          WaterTransforms;                                          
	TArray<struct FVector>                             WaterBoxExtends;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.OceanManager");
		return pStaticClass;
	}


	void LoadLandscapeHeightmap(class UTexture2D* Tex2D);
	struct FLinearColor GetHeightmapPixel(float U, float V);
};




class ASegmentOceanManager : public AOceanManager
{
public:
	TArray<class UWaterBoxComponent*>                  CandidateWaterBoxes;                                      
	TMap<class UWaterBoxComponent*, struct FSegmentWaterBox> SegmentdWaterBoxes;                                       
	unsigned char                                      UnknownData00[0x7C];                                      
	float                                              FrequencyScale;                                           
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.SegmentOceanManager");
		return pStaticClass;
	}


	void RemoveBoxComponent(class UWaterBoxComponent* InBoxComponent);
	void AddBoxComponent(class UWaterBoxComponent* InBoxComponent, class USplineComponent* InDirectionSpline);
};




class ATimeManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      
	float                                              latitude;                                                 
	float                                              longitude;                                                
	int                                                OffsetUTC;                                                
	int                                                OffsetDST;                                                
	bool                                               bAllowDaylightSavings;                                    
	bool                                               bDaylightSavingsActive;                                   
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              TimeScaleMultiplier;                                      
	float                                              SolarTime;                                                
	float                                              LocalClockTime;                                           
	float                                              TimeCorrection;                                           
	int                                                LSTM;                                                     
	int                                                DayOfYear;                                                
	float                                              EoT;                                                      
	float                                              SolarAltAngle;                                            
	float                                              SolarDeclination;                                         
	float                                              SolarAzimuth;                                             
	float                                              SolarHRA;                                                 
	float                                              SiderealTime;                                             
	float                                              LunarAltAngle;                                            
	float                                              LunarHRA;                                                 
	float                                              LunarDeclination;                                         
	float                                              LunarAzimuth;                                             
	float                                              LunarRightAsc;                                            
	float                                              LunarElapsedDays;                                         
	float                                              EcLongitude;                                              
	float                                              EcLatitude;                                               
	float                                              EcDistance;                                               
	float                                              PartL;                                                    
	float                                              PartM;                                                    
	float                                              PartF;                                                    
	unsigned char                                      UnknownData02[0x34];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.TimeManager");
		return pStaticClass;
	}


	void SetCurrentLocalTime(float Time);
	bool IsLeapYear(int Year);
	void InitializeCalendar(const struct FTimeDate& Time);
	void IncrementTime(float DeltaSeconds);
	float GetYearPhase();
	float GetElapsedDayInMinutes();
	int GetDaysInYear(int Year);
	int GetDaysInMonth(int Year, int Month);
	float GetDayPhase();
	int GetDayOfYear(const struct FTimeDate& Time);
	struct FRotator CalculateSunAngle();
	float CalculateMoonPhase();
	struct FRotator CalculateMoonAngle();
};




class UWaterBoxComponent : public UBoxComponent
{
public:
	struct FVector                                     Direction;                                                
	float                                              SpeedValue;                                               
	float                                              WaveForceMultiplier;                                      
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FTrippleWaveParameter>               TrippleWaveClusters;                                      
	float                                              TimeScaleOffset;                                          
	float                                              Offset;                                                   
	bool                                               UseSplineDirection;                                       
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              SpeedAttenuationFromSpline;                               
	bool                                               UseSplineZ;                                               
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              ZOffset;                                                  
	float                                              CellSizeX;                                                
	float                                              CellSizeY;                                                
	TMap<float, struct FWaterBoxCell>                  Cells;                                                    
	int                                                KeyFactor;                                                
	unsigned char                                      UnknownData03[0x24];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.WaterBoxComponent");
		return pStaticClass;
	}

};




class UWaterHeightmapComponent : public UActorComponent
{
public:
	float                                              DesiredCellSize;                                          
	bool                                               bOnlyCollidingComponents;                                 
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              GridSizeMultiplier;                                       
	bool                                               bDrawUsedTriangles;                                       
	bool                                               bDrawHeightmap;                                           
	unsigned char                                      UnknownData01[0x62];                                      
	class AOceanManager*                               OceanManager;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OceanPlugin.WaterHeightmapComponent");
		return pStaticClass;
	}

};


}

