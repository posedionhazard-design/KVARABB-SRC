#pragma once


 
namespace SDK
{






class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FScriptMulticastDelegate                    OnInstanceTakeRadialDamage;                               
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return pStaticClass;
	}

};




class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.FoliageStatistics");
		return pStaticClass;
	}


	static int FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	static int FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);
};




class UFoliageType : public UObject
{
public:
	struct FGuid                                       UpdateGuid;                                               
	float                                              Density;                                                  
	float                                              DensityAdjustmentFactor;                                  
	float                                              Radius;                                                   
	EFoliageScaling                                    Scaling;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
	struct FFloatInterval                              ScaleX;                                                   
	struct FFloatInterval                              ScaleY;                                                   
	struct FFloatInterval                              ScaleZ;                                                   
	struct FFoliageVertexColorChannelMask              VertexColorMaskByChannel[0x4];                            
	TEnumAsByte<EFoliageVertexColorMask>               VertexColorMask;                                          
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              VertexColorMaskThreshold;                                 
	unsigned char                                      VertexColorMaskInvert : 1;                                
	unsigned char                                      UnknownData02[0x3];                                       
	struct FFloatInterval                              ZOffset;                                                  
	unsigned char                                      AlignToNormal : 1;                                        
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              AlignMaxAngle;                                            
	unsigned char                                      RandomYaw : 1;                                            
	unsigned char                                      UnknownData04[0x3];                                       
	float                                              RandomPitchAngle;                                         
	struct FFloatInterval                              GroundSlopeAngle;                                         
	struct FFloatInterval                              Height;                                                   
	unsigned char                                      UnknownData05[0x4];                                       
	TArray<struct FName>                               LandscapeLayers;                                          
	struct FName                                       LandscapeLayer;                                           
	unsigned char                                      CollisionWithWorld : 1;                                   
	unsigned char                                      UnknownData06[0x3];                                       
	struct FVector                                     CollisionScale;                                           
	float                                              MinimumLayerWeight;                                       
	struct FBoxSphereBounds                            MeshBounds;                                               
	struct FVector                                     LowBoundOriginRadius;                                     
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 
	unsigned char                                      UnknownData07[0x3];                                       
	struct FInt32Interval                              CullDistance;                                             
	int                                                LowDeviceForcedLodModel;                                  
	unsigned char                                      bEnableStaticLighting : 1;                                
	unsigned char                                      CastShadow : 1;                                           
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                       
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         
	unsigned char                                      bCastDynamicShadow : 1;                                   
	unsigned char                                      bCastStaticShadow : 1;                                    
	unsigned char                                      bCastShadowAsTwoSided : 1;                                
	unsigned char                                      bReceivesDecals : 1;                                      
	unsigned char                                      bOverrideLightMapRes : 1;                                 
	unsigned char                                      UnknownData08[0x2];                                       
	int                                                OverriddenLightMapRes;                                    
	ELightmapType                                      LightmapType;                                             
	unsigned char                                      bUseAsOccluder : 1;                                       
	unsigned char                                      UnknownData09[0xA];                                       
	struct FBodyInstance                               BodyInstance;                                             
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                  
	struct FLightingChannels                           LightingChannels;                                         
	unsigned char                                      bRenderCustomDepth : 1;                                   
	unsigned char                                      UnknownData10[0x1];                                       
	int                                                CustomDepthStencilValue;                                  
	float                                              CollisionRadius;                                          
	float                                              ShadeRadius;                                              
	int                                                NumSteps;                                                 
	float                                              InitialSeedDensity;                                       
	float                                              AverageSpreadDistance;                                    
	float                                              SpreadVariance;                                           
	int                                                SeedsPerStep;                                             
	int                                                DistributionSeed;                                         
	float                                              MaxInitialSeedOffset;                                     
	bool                                               bCanGrowInShade;                                          
	bool                                               bSpawnsInShade;                                           
	unsigned char                                      UnknownData11[0x2];                                       
	float                                              MaxInitialAge;                                            
	float                                              MaxAge;                                                   
	float                                              OverlapPriority;                                          
	struct FFloatInterval                              ProceduralScale;                                          
	unsigned char                                      UnknownData12[0x4];                                       
	struct FRuntimeFloatCurve                          ScaleCurve;                                               
	int                                                ChangeCount;                                              
	unsigned char                                      ReapplyDensity : 1;                                       
	unsigned char                                      ReapplyRadius : 1;                                        
	unsigned char                                      ReapplyAlignToNormal : 1;                                 
	unsigned char                                      ReapplyRandomYaw : 1;                                     
	unsigned char                                      ReapplyScaling : 1;                                       
	unsigned char                                      ReapplyScaleX : 1;                                        
	unsigned char                                      ReapplyScaleY : 1;                                        
	unsigned char                                      ReapplyScaleZ : 1;                                        
	unsigned char                                      ReapplyRandomPitchAngle : 1;                              
	unsigned char                                      ReapplyGroundSlope : 1;                                   
	unsigned char                                      ReapplyHeight : 1;                                        
	unsigned char                                      ReapplyLandscapeLayers : 1;                               
	unsigned char                                      ReapplyZOffset : 1;                                       
	unsigned char                                      ReapplyCollisionWithWorld : 1;                            
	unsigned char                                      ReapplyVertexColorMask : 1;                               
	unsigned char                                      bEnableDensityScaling : 1;                                
	unsigned char                                      UnknownData13[0xA];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.FoliageType");
		return pStaticClass;
	}

};




class UFoliageType_Actor : public UFoliageType
{
public:
	bool                                               bShouldAttachToBaseComponent;                             
	unsigned char                                      UnknownData00[0xF];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.FoliageType_Actor");
		return pStaticClass;
	}

};




class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        
	class UClass*                                      ComponentClass;                                           
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return pStaticClass;
	}

};




class AInstancedFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return pStaticClass;
	}

};




class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                           CapsuleComponent;                                         
	struct FVector                                     TouchingActorEntryPosition;                               
	struct FVector                                     FoliageVelocity;                                          
	struct FVector                                     FoliageForce;                                             
	struct FVector                                     FoliagePosition;                                          
	float                                              FoliageDamageImpulseScale;                                
	float                                              FoliageTouchImpulseScale;                                 
	float                                              FoliageStiffness;                                         
	float                                              FoliageStiffnessQuadratic;                                
	float                                              FoliageDamping;                                           
	float                                              MaxDamageImpulse;                                         
	float                                              MaxTouchImpulse;                                          
	float                                              MaxForce;                                                 
	float                                              Mass;                                                     
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return pStaticClass;
	}


	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};




class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return pStaticClass;
	}

};




class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return pStaticClass;
	}

};




class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           
	float                                              TileOverlap;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	class AVolume*                                     SpawningVolume;                                           
	struct FGuid                                       ProceduralGuid;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return pStaticClass;
	}

};




class UProceduralFoliageSpawner : public UObject
{
public:
	int                                                RandomSeed;                                               
	float                                              TileSize;                                                 
	int                                                NumUniqueTiles;                                           
	float                                              MinimumQuadTreeSize;                                      
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<struct FFoliageTypeObject>                  FoliageTypes;                                             
	bool                                               bNeedsSimulation;                                         
	unsigned char                                      UnknownData01[0x1F];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return pStaticClass;
	}


	void Simulate(int NumSteps);
};




class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           
	unsigned char                                      UnknownData00[0xA0];                                      
	TArray<struct FProceduralFoliageInstance>          InstancesArray;                                           
	unsigned char                                      UnknownData01[0x78];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return pStaticClass;
	}

};




class AProceduralFoliageVolume : public AVolume
{
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return pStaticClass;
	}

};


}

