#pragma once


 
namespace SDK
{






class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return pStaticClass;
	}

};




class ALandscapeProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      
	class ULandscapeSplinesComponent*                  SplineComponent;                                          
	struct FGuid                                       LandscapeGuid;                                            
	struct FGuid                                       BoundingGuid;                                             
	struct FIntPoint                                   LandscapeSectionOffset;                                   
	int                                                MaxLODLevel;                                              
	float                                              LODDistanceFactor;                                        
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               
	bool                                               bUseScreenSizeLOD;                                        
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              LOD0DistributionSetting;                                  
	float                                              LODDistributionSetting;                                   
	unsigned char                                      NearMaxLOD_Baked;                                         
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              NearFactor_Baked;                                         
	float                                              NearExtent_Baked;                                         
	float                                              FarFactor_Baked;                                          
	float                                              LandscapeRoughness;                                       
	bool                                               EnableImproveLOD;                                         
	unsigned char                                      UnknownData03[0x7];                                       
	TArray<float>                                      ImproveLODValues;                                         
	unsigned char                                      NearMaxLOD;                                               
	unsigned char                                      UnknownData04[0x3];                                       
	float                                              NearFactor;                                               
	float                                              NearExtent;                                               
	float                                              FarFactor;                                                
	int                                                StaticLightingLOD;                                        
	unsigned char                                      UnknownData05[0x4];                                       
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      
	float                                              StreamingDistanceMultiplier;                              
	unsigned char                                      bCacheHeightData : 1;                                     
	unsigned char                                      UnknownData06[0x3];                                       
	class UMaterialInterface*                          LandscapeMaterial;                                        
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    
	TMap<struct FName, class UMaterialInterface*>      OtherMaterials;                                           
	unsigned char                                      bOverrideGrassTypes : 1;                                  
	unsigned char                                      UnknownData07[0x7];                                       
	TArray<class ULandscapeGrassType*>                 GrassTypes;                                               
	float                                              MinGrassWeightThreshold;                                  
	float                                              NegativeZBoundsExtension;                                 
	float                                              PositiveZBoundsExtension;                                 
	unsigned char                                      UnknownData08[0x4];                                       
	class UTexture2D*                                  GrassColor_WorldMaskNoiseTexture;                         
	struct FVector2D                                   GrassColor_UVScale_WorldMaskNoise;                        
	struct FVector2D                                   GrassColor_Center_WorldMaskNoise;                         
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      
	class ULandscapeAOTextureDataAsset*                LandscapeAOTextureDataAsset;                              
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        
	unsigned char                                      UnknownData09[0xB0];                                      
	bool                                               bHasLandscapeGrass;                                       
	unsigned char                                      UnknownData10[0x3];                                       
	float                                              StaticLightingResolution;                                 
	unsigned char                                      bCastStaticShadow : 1;                                    
	unsigned char                                      bCastShadowAsTwoSided : 1;                                
	unsigned char                                      bCastFarShadow : 1;                                       
	struct FLightingChannels                           LightingChannels;                                         
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           
	unsigned char                                      bRenderCustomDepth : 1;                                   
	unsigned char                                      UnknownData11[0x1];                                       
	int                                                CustomDepthStencilValue;                                  
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        
	int                                                CollisionMipLevel;                                        
	int                                                SimpleCollisionMipLevel;                                  
	float                                              CollisionThickness;                                       
	unsigned char                                      UnknownData12[0xC];                                       
	struct FBodyInstance                               BodyInstance;                                             
	unsigned char                                      bGenerateOverlapEvents : 1;                               
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             
	unsigned char                                      bUseHoleConsistent : 1;                                   
	unsigned char                                      UnknownData13[0x3];                                       
	int                                                ComponentSizeQuads;                                       
	int                                                SubsectionSizeQuads;                                      
	int                                                NumSubsections;                                           
	unsigned char                                      bUsedForNavigation : 1;                                   
	unsigned char                                      bMobileMultiLayers : 1;                                   
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                          
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;             
	bool                                               bUseLandscapeVT;                                          
	unsigned char                                      UnknownData14[0x4];                                       
	class UTexture2D*                                  MaskTextureUsedByGrassClear;                              
	unsigned char                                      UnknownData15[0x170];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeProxy");
		return pStaticClass;
	}


	void SetLandScapeRenderMask(int Index, bool bUseRenderMask, unsigned char RenderMask);
	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistributionSettingConsoleVariable();
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
	void ChangeLOD0DistributionSettingConsoleVariable();
	void ChangebUseScreenSizeLOD(bool InbUseScreenSizeLOD);
};




class ALandscape : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.Landscape");
		return pStaticClass;
	}

};




class USimpleMeshComponent : public UMeshComponent
{
public:
	TArray<struct FSimpleMeshSection>                  MeshSections;                                             
	struct FBoxSphereBounds                            LocalBounds;                                              
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.SimpleMeshComponent");
		return pStaticClass;
	}

};




class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                ComponentSizeQuads;                                       
	int                                                SubsectionSizeQuads;                                      
	int                                                NumSubsections;                                           
	unsigned char                                      bSubSectionRenderMaskComp : 1;                            
	unsigned char                                      SubSectionRenderMaskComp;                                 
	unsigned char                                      UnknownData00[0x2];                                       
	class UMaterialInterface*                          OverrideMaterial;                                         
	class UMaterialInterface*                          OverrideHoleMaterial;                                     
	TMap<struct FName, class UMaterialInterface*>      OverrideOtherMaterials;                                   
	struct FOverridePhyxMaterial                       OverridePhyxMaterial;                                     
	unsigned char                                      bOverrideGrassTypes : 1;                                  
	unsigned char                                      UnknownData01[0x7];                                       
	TArray<class ULandscapeGrassType*>                 GrassTypes;                                               
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        
	TMap<struct FName, class UMaterialInstanceConstant*> OtherMaterialInstances;                                   
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                
	TArray<class UTexture2D*>                          WeightmapTextures;                                        
	int                                                VisibilityLayerChannel;                                   
	unsigned char                                      UnknownData02[0x4];                                       
	class UTexture2D*                                  XYOffsetmapTexture;                                       
	unsigned char                                      UnknownData03[0x8];                                       
	struct FVector4                                    WeightmapScaleBias;                                       
	float                                              WeightmapSubsectionOffset;                                
	unsigned char                                      UnknownData04[0xC];                                       
	struct FVector4                                    HeightmapScaleBias;                                       
	class UTexture2D*                                  HeightmapTexture;                                         
	TMap<struct FString, struct FVisibilityData>       MultiVisibilityTextureData;                               
	struct FString                                     VisibleVisibilityLayer;                                   
	struct FBox                                        CachedLocalBox;                                           
	unsigned char                                      bUseCachedSectionLocalBoxs : 1;                           
	unsigned char                                      UnknownData05[0x3];                                       
	TArray<float>                                      CachedSectionLocalBoxsHeight;                             
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       
	struct FGuid                                       MapBuildDataId;                                           
	unsigned char                                      UnknownData06[0x4];                                       
	TArray<struct FGuid>                               IrrelevantLights;                                         
	int                                                CollisionMipLevel;                                        
	int                                                SimpleCollisionMipLevel;                                  
	float                                              NegativeZBoundsExtension;                                 
	float                                              PositiveZBoundsExtension;                                 
	float                                              StaticLightingResolution;                                 
	int                                                ForcedLOD;                                                
	int                                                LODBias;                                                  
	int                                                MobileVertexHoleMaxLOD;                                   
	unsigned char                                      UnknownData07[0x10];                                      
	TArray<float>                                      LODDeltaVertex;                                           
	float                                              MaxDeltaVertex;                                           
	struct FGuid                                       stateID;                                                  
	struct FGuid                                       BakedTextureMaterialGuid;                                 
	unsigned char                                      UnknownData08[0x4];                                       
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  
	struct FString                                     OccluderMeshDataPath;                                     
	unsigned char                                      MobileBlendableLayerMask;                                 
	unsigned char                                      UnknownData09[0x7];                                       
	class UMaterialInterface*                          MobileMaterialInterface;                                  
	TMap<struct FName, class UMaterialInterface*>      OtherMobileMaterialInterfaces;                            
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                  
	class UTexture2D*                                  MobileWeightNormalmapTexture;                             
	unsigned char                                      bMobileMultiLayers : 1;                                   
	unsigned char                                      UnknownData10[0x7];                                       
	TArray<uint16_t>                                   CachedHeightData;                                         
	bool                                               bUseLandscapeVT;                                          
	bool                                               bLandscapeVTNeedHeightmap;                                
	unsigned char                                      UnknownData11[0x76];                                      
	bool                                               bHasROCData;                                              
	unsigned char                                      UnknownData12[0x1F];                                      
	struct FName                                       UsedOtherMaterialName;                                    
	unsigned char                                      UnknownData13[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeComponent");
		return pStaticClass;
	}

};




class ULandscapeGeometryAsset : public UDataAsset
{
public:
	TArray<struct FVector>                             Vertex;                                                   
	TArray<struct FVector>                             Normals;                                                  
	TArray<struct FVector2D>                           UV;                                                       
	TArray<int>                                        Indices;                                                  
	TMap<struct FIntPoint, int>                        ComponentIndexOffset;                                     
	int                                                ComponentIndexCount;                                      
	int                                                ComponentVertexCount;                                     
	TMap<struct FString, struct FLevelComponentMapValue> SubLevelComponentMap;                                     
	unsigned char                                      UnknownData00[0x28];                                      
	float                                              HighQualityMeshDestroyHight;                              
	unsigned char                                      UnknownData01[0x4];                                       
	TMap<struct FIntPoint, int>                        ComponentVertexIndexOffset;                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGeometryAsset");
		return pStaticClass;
	}

};




class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return pStaticClass;
	}

};




class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return pStaticClass;
	}

};




class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return pStaticClass;
	}

};




class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           
	class UStaticMesh*                                 GrassMesh;                                                
	float                                              GrassDensity;                                             
	float                                              PlacementJitter;                                          
	int                                                StartCullDistance;                                        
	int                                                EndCullDistance;                                          
	bool                                               RandomRotation;                                           
	bool                                               AlignToSurface;                                           
	unsigned char                                      UnknownData00[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return pStaticClass;
	}

};




class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	int                                                SectionBaseX;                                             
	int                                                SectionBaseY;                                             
	int                                                CollisionSizeQuads;                                       
	float                                              CollisionScale;                                           
	int                                                SimpleCollisionSizeQuads;                                 
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<unsigned char>                              CollisionQuadFlags;                                       
	struct FGuid                                       HeightfieldGuid;                                          
	struct FBox                                        CachedLocalBox;                                           
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          
	unsigned char                                      UnknownData02[0x10];                                      
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  
	unsigned char                                      UnknownData03[0x48];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return pStaticClass;
	}

};




class UIdeaGrassFieldFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.IdeaGrassFieldFunctionLibrary");
		return pStaticClass;
	}


	static void IdeaGrassRenderForceTextureTrample(const struct FIdeaGrassFieldData& GrassFieldData);
	static void IdeaGrassRenderForceTextureSkill(const struct FIdeaGrassFieldData& GrassFieldData);
	static void IdeaGrassRenderForceTextureFade(const struct FIdeaGrassFieldData& GrassFieldData);
	static void IdeaGrassRenderForceTexture(const struct FIdeaGrassFieldData& GrassFieldData);
};




class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           
	struct FGuid                                       LandscapeGuid;                                            
	int                                                ComponentSizeQuads;                                       
	int                                                SubsectionSizeQuads;                                      
	int                                                ComponentNumSubsections;                                  
	struct FVector                                     DrawScale;                                                
	unsigned char                                      UnknownData00[0x244];                                     
	unsigned char                                      UnknownData01[0x50];                                      
	unsigned char                                      UnknownData02[0xF0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeInfo");
		return pStaticClass;
	}

};




class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return pStaticClass;
	}

};




class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                
	class UPhysicalMaterial*                           PhysMaterial;                                             
	float                                              Hardness;                                                 
	struct FLinearColor                                LayerUsageDebugColor;                                     
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return pStaticClass;
	}

};




class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return pStaticClass;
	}

};




class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return pStaticClass;
	}

};




class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return pStaticClass;
	}

};




class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      
	int8_t                                             ProxyLOD;                                                 
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return pStaticClass;
	}

};




class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return pStaticClass;
	}

};




class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 
	struct FRotator                                    Rotation;                                                 
	float                                              Width;                                                    
	float                                              SideFalloff;                                              
	float                                              EndFalloff;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   
	struct FBox                                        Bounds;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return pStaticClass;
	}

};




class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         
	struct FInterpCurveVector                          SplineInfo;                                               
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   
	struct FBox                                        Bounds;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return pStaticClass;
	}

};




class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0x14];                                      
	bool                                               bLandscapeProxyUseSceenSizeLOD;                           
	unsigned char                                      UnknownData01[0xB];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return pStaticClass;
	}

};




class UMaterialExpressionLandscapeFlattenCoords : public UMaterialExpression
{
public:
	struct FExpressionInput                            UVScaleBias;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenCoords");
		return pStaticClass;
	}

};




class UMaterialExpressionLandscapeFlattenTexture : public UMaterialExpression
{
public:
	struct FExpressionInput                            Coordinates;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenTexture");
		return pStaticClass;
	}

};




class UMaterialExpressionLandscapeFlattenBaseColor : public UMaterialExpressionLandscapeFlattenTexture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenBaseColor");
		return pStaticClass;
	}

};




class UMaterialExpressionLandscapeFlattenNormal : public UMaterialExpressionLandscapeFlattenTexture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenNormal");
		return pStaticClass;
	}

};




class UMaterialExpressionLandscapeFlattenRSM : public UMaterialExpressionLandscapeFlattenTexture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeFlattenRSM");
		return pStaticClass;
	}

};




class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return pStaticClass;
	}

};




class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   
	struct FGuid                                       ExpressionGUID;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return pStaticClass;
	}

};




class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             
	unsigned char                                      UnknownData00[0x6];                                       
	struct FExpressionInput                            MappingScaleOverride;                                     
	float                                              MappingScale;                                             
	float                                              MappingRotation;                                          
	float                                              MappingPanU;                                              
	float                                              MappingPanV;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return pStaticClass;
	}

};




class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            
	float                                              PreviewWeight;                                            
	struct FGuid                                       ExpressionGUID;                                           
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return pStaticClass;
	}

};




class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                
	struct FExpressionInput                            LayerNotUsed;                                             
	struct FName                                       ParameterName;                                            
	unsigned char                                      PreviewUsed : 1;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	struct FGuid                                       ExpressionGUID;                                           
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return pStaticClass;
	}

};




class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     
	struct FExpressionInput                            Layer;                                                    
	struct FName                                       ParameterName;                                            
	float                                              PreviewWeight;                                            
	struct FVector                                     ConstBase;                                                
	struct FGuid                                       ExpressionGUID;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return pStaticClass;
	}

};




class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return pStaticClass;
	}

};


}

