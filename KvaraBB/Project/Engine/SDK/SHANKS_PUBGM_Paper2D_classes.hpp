#pragma once


 
namespace SDK
{






class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
	bool                                               bSampleAdditionalTextures;                                
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                AdditionalSlotIndex;                                      
	struct FText                                       SlotDisplayName;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.MaterialExpressionSpriteTextureSampler");
		return pStaticClass;
	}

};




class APaperCharacter : public ACharacter
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperCharacter");
		return pStaticClass;
	}

};




class UPaperFlipbook : public UObject
{
public:
	float                                              FramesPerSecond;                                          
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FPaperFlipbookKeyFrame>              KeyFrames;                                                
	class UMaterialInterface*                          DefaultMaterial;                                          
	TEnumAsByte<EFlipbookCollisionMode>                CollisionSource;                                          
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperFlipbook");
		return pStaticClass;
	}


	bool IsValidKeyFrameIndex(int Index);
	float GetTotalDuration();
	class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
	class UPaperSprite* GetSpriteAtFrame(int FrameIndex);
	int GetNumKeyFrames();
	int GetNumFrames();
	int GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
};




class APaperFlipbookActor : public AActor
{
public:
	class UPaperFlipbookComponent*                     RenderComponent;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperFlipbookActor");
		return pStaticClass;
	}

};




class UPaperFlipbookComponent : public UMeshComponent
{
public:
	class UPaperFlipbook*                              SourceFlipbook;                                           
	class UMaterialInterface*                          Material;                                                 
	float                                              PlayRate;                                                 
	unsigned char                                      bLooping : 1;                                             
	unsigned char                                      bReversePlayback : 1;                                     
	unsigned char                                      bPlayIng : 1;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              AccumulatedTime;                                          
	int                                                CachedFrameIndex;                                         
	struct FLinearColor                                SpriteColor;                                              
	class UBodySetup*                                  CachedBodySetup;                                          
	struct FScriptMulticastDelegate                    OnFinishedPlaying;                                        
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperFlipbookComponent");
		return pStaticClass;
	}


	void Stop();
	void SetSpriteColor(const struct FLinearColor& NewColor);
	void SetPlayRate(float NewRate);
	void SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);
	void SetNewTime(float NewTime);
	void SetLooping(bool bNewLooping);
	bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	float GetPlayRate();
	int GetPlaybackPositionInFrames();
	float GetPlaybackPosition();
	int GetFlipbookLengthInFrames();
	float GetFlipbookLength();
	float GetFlipbookFramerate();
	class UPaperFlipbook* GetFlipbook();
};




class APaperGroupedSpriteActor : public AActor
{
public:
	class UPaperGroupedSpriteComponent*                RenderComponent;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperGroupedSpriteActor");
		return pStaticClass;
	}

};




class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:
	TArray<class UMaterialInterface*>                  InstanceMaterials;                                        
	TArray<struct FSpriteInstanceData>                 PerInstanceSpriteData;                                    
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperGroupedSpriteComponent");
		return pStaticClass;
	}


	bool UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	bool UpdateInstanceColor(int InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty);
	void SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis);
	bool RemoveInstance(int InstanceIndex);
	bool GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform);
	int GetInstanceCount();
	void ClearInstances();
	int AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color);
};




class UPaperRuntimeSettings : public UObject
{
public:
	bool                                               bEnableSpriteAtlasGroups;                                 
	bool                                               bEnableTerrainSplineEditing;                              
	bool                                               bResizeSpriteDataToMatchTextures;                         
	unsigned char                                      UnknownData00[0x5];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperRuntimeSettings");
		return pStaticClass;
	}

};




class UPaperSprite : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	struct FVector2D                                   SourceUV;                                                 
	struct FVector2D                                   SourceDimension;                                          
	class UTexture2D*                                  SourceTexture;                                            
	TArray<class UTexture*>                            AdditionalSourceTextures;                                 
	struct FVector2D                                   BakedSourceUV;                                            
	struct FVector2D                                   BakedSourceDimension;                                     
	class UTexture2D*                                  BakedSourceTexture;                                       
	class UMaterialInterface*                          DefaultMaterial;                                          
	class UMaterialInterface*                          AlternateMaterial;                                        
	TArray<struct FPaperSpriteSocket>                  Sockets;                                                  
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              PixelsPerUnrealUnit;                                      
	class UBodySetup*                                  BodySetup;                                                
	int                                                AlternateMaterialSplitIndex;                              
	unsigned char                                      UnknownData02[0x4];                                       
	TArray<struct FVector4>                            BakedRenderData;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperSprite");
		return pStaticClass;
	}

};




class APaperSpriteActor : public AActor
{
public:
	class UPaperSpriteComponent*                       RenderComponent;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperSpriteActor");
		return pStaticClass;
	}

};




class UPaperSpriteAtlas : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperSpriteAtlas");
		return pStaticClass;
	}

};




class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperSpriteBlueprintLibrary");
		return pStaticClass;
	}


	static struct FSlateBrush MakeBrushFromSprite(class UPaperSprite* Sprite, int Width, int Height);
};




class UPaperSpriteComponent : public UMeshComponent
{
public:
	class UPaperSprite*                                SourceSprite;                                             
	class UMaterialInterface*                          MaterialOverride;                                         
	struct FLinearColor                                SpriteColor;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperSpriteComponent");
		return pStaticClass;
	}


	void SetSpriteColor(const struct FLinearColor& NewColor);
	bool SetSprite(class UPaperSprite* NewSprite);
	class UPaperSprite* GetSprite();
};




class APaperTerrainActor : public AActor
{
public:
	class USceneComponent*                             DummyRoot;                                                
	class UPaperTerrainSplineComponent*                SplineComponent;                                          
	class UPaperTerrainComponent*                      RenderComponent;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperTerrainActor");
		return pStaticClass;
	}

};




class UPaperTerrainComponent : public UPrimitiveComponent
{
public:
	bool                                               bClosedSpline;                                            
	bool                                               bFilledSpline;                                            
	unsigned char                                      UnknownData00[0x6];                                       
	class UPaperTerrainSplineComponent*                AssociatedSpline;                                         
	int                                                RandomSeed;                                               
	float                                              SegmentOverlapAmount;                                     
	struct FLinearColor                                TerrainColor;                                             
	int                                                ReparamStepsPerSegment;                                   
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              CollisionThickness;                                       
	unsigned char                                      UnknownData02[0x4];                                       
	class UBodySetup*                                  CachedBodySetup;                                          
	unsigned char                                      UnknownData03[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperTerrainComponent");
		return pStaticClass;
	}


	void SetTerrainColor(const struct FLinearColor& NewColor);
};




class UPaperTerrainMaterial : public UDataAsset
{
public:
	TArray<struct FPaperTerrainMaterialRule>           Rules;                                                    
	class UPaperSprite*                                InteriorFill;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperTerrainMaterial");
		return pStaticClass;
	}

};




class UPaperTerrainSplineComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperTerrainSplineComponent");
		return pStaticClass;
	}

};




class UPaperTileLayer : public UObject
{
public:
	struct FText                                       LayerName;                                                
	int                                                LayerWidth;                                               
	int                                                LayerHeight;                                              
	unsigned char                                      bHiddenInGame : 1;                                        
	unsigned char                                      bLayerCollides : 1;                                       
	unsigned char                                      bOverrideCollisionThickness : 1;                          
	unsigned char                                      bOverrideCollisionOffset : 1;                             
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              CollisionThicknessOverride;                               
	float                                              CollisionOffsetOverride;                                  
	struct FLinearColor                                LayerColor;                                               
	int                                                AllocatedWidth;                                           
	int                                                AllocatedHeight;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FPaperTileInfo>                      AllocatedCells;                                           
	class UPaperTileSet*                               TileSet;                                                  
	TArray<int>                                        AllocatedGrid;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperTileLayer");
		return pStaticClass;
	}

};




class UPaperTileMap : public UObject
{
public:
	int                                                MapWidth;                                                 
	int                                                MapHeight;                                                
	int                                                TileWidth;                                                
	int                                                TileHeight;                                               
	float                                              PixelsPerUnrealUnit;                                      
	float                                              SeparationPerTileX;                                       
	float                                              SeparationPerTileY;                                       
	float                                              SeparationPerLayer;                                       
	unsigned char                                      UnknownData00[0x28];                                      
	class UMaterialInterface*                          Material;                                                 
	TArray<class UPaperTileLayer*>                     TileLayers;                                               
	float                                              CollisionThickness;                                       
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    
	TEnumAsByte<ETileMapProjectionMode>                ProjectionMode;                                           
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                HexSideLength;                                            
	unsigned char                                      UnknownData02[0x4];                                       
	class UBodySetup*                                  BodySetup;                                                
	int                                                LayerNameIndex;                                           
	unsigned char                                      UnknownData03[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperTileMap");
		return pStaticClass;
	}

};




class APaperTileMapActor : public AActor
{
public:
	class UPaperTileMapComponent*                      RenderComponent;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperTileMapActor");
		return pStaticClass;
	}

};




class UPaperTileMapComponent : public UMeshComponent
{
public:
	int                                                MapWidth;                                                 
	int                                                MapHeight;                                                
	int                                                TileWidth;                                                
	int                                                TileHeight;                                               
	class UPaperTileSet*                               DefaultLayerTileSet;                                      
	class UMaterialInterface*                          Material;                                                 
	TArray<class UPaperTileLayer*>                     TileLayers;                                               
	struct FLinearColor                                TileMapColor;                                             
	int                                                UseSingleLayerIndex;                                      
	bool                                               bUseSingleLayer;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	class UPaperTileMap*                               TileMap;                                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperTileMapComponent");
		return pStaticClass;
	}


	void SetTileMapColor(const struct FLinearColor& NewColor);
	bool SetTileMap(class UPaperTileMap* NewTileMap);
	void SetTile(int X, int Y, int Layer, const struct FPaperTileInfo& NewValue);
	void SetLayerColor(const struct FLinearColor& NewColor, int Layer);
	void SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
	void ResizeMap(int NewWidthInTiles, int NewHeightInTiles);
	void RebuildCollision();
	bool OwnsTileMap();
	void MakeTileMapEditable();
	void GetTilePolygon(int TileX, int TileY, int LayerIndex, bool bWorldSpace, TArray<struct FVector>* Points);
	struct FLinearColor GetTileMapColor();
	struct FVector GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FVector GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FPaperTileInfo GetTile(int X, int Y, int Layer);
	void GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers);
	struct FLinearColor GetLayerColor(int Layer);
	void CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
	class UPaperTileLayer* AddNewLayer();
};




class UPaperTileSet : public UObject
{
public:
	struct FIntPoint                                   TileSize;                                                 
	class UTexture2D*                                  TileSheet;                                                
	TArray<class UTexture*>                            AdditionalSourceTextures;                                 
	struct FIntMargin                                  BorderMargin;                                             
	struct FIntPoint                                   PerTileSpacing;                                           
	struct FIntPoint                                   DrawingOffset;                                            
	int                                                WidthInTiles;                                             
	int                                                HeightInTiles;                                            
	int                                                AllocatedWidth;                                           
	int                                                AllocatedHeight;                                          
	TArray<struct FPaperTileMetadata>                  PerTileData;                                              
	TArray<struct FPaperTileSetTerrain>                Terrains;                                                 
	int                                                TileWidth;                                                
	int                                                TileHeight;                                               
	int                                                Margin;                                                   
	int                                                Spacing;                                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.PaperTileSet");
		return pStaticClass;
	}

};




class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Paper2D.TileMapBlueprintLibrary");
		return pStaticClass;
	}


	static struct FPaperTileInfo MakeTile(int TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
	static struct FName GetTileUserData(const struct FPaperTileInfo& Tile);
	static struct FTransform GetTileTransform(const struct FPaperTileInfo& Tile);
	static void BreakTile(const struct FPaperTileInfo& Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD);
};


}

