#pragma once


 
namespace SDK
{





enum class EFlipbookCollisionMode : uint8_t
{
	EFlipbookCollisionMode__NoCollision = 0,
	EFlipbookCollisionMode__FirstFrameCollision = 1,
	EFlipbookCollisionMode__EachFrameCollision = 2,
	EFlipbookCollisionMode__EFlipbookCollisionMode_MAX = 3
};



enum class EPaperSpriteAtlasPadding : uint8_t
{
	EPaperSpriteAtlasPadding__DilateBorder = 0,
	EPaperSpriteAtlasPadding__PadWithZero = 1,
	EPaperSpriteAtlasPadding__EPaperSpriteAtlasPadding_MAX = 2
};



enum class ETileMapProjectionMode : uint8_t
{
	ETileMapProjectionMode__Orthogonal = 0,
	ETileMapProjectionMode__IsometricDiamond = 1,
	ETileMapProjectionMode__IsometricStaggered = 2,
	ETileMapProjectionMode__HexagonalStaggered = 3,
	ETileMapProjectionMode__ETileMapProjectionMode_MAX = 4
};



enum class ESpritePivotMode : uint8_t
{
	ESpritePivotMode__Top_Left     = 0,
	ESpritePivotMode__Top_Center   = 1,
	ESpritePivotMode__Top_Right    = 2,
	ESpritePivotMode__Center_Left  = 3,
	ESpritePivotMode__Center_Center = 4,
	ESpritePivotMode__Center_Right = 5,
	ESpritePivotMode__Bottom_Left  = 6,
	ESpritePivotMode__Bottom_Center = 7,
	ESpritePivotMode__Bottom_Right = 8,
	ESpritePivotMode__Custom       = 9,
	ESpritePivotMode__ESpritePivotMode_MAX = 10
};



enum class ESpritePolygonMode : uint8_t
{
	ESpritePolygonMode__SourceBoundingBox = 0,
	ESpritePolygonMode__TightBoundingBox = 1,
	ESpritePolygonMode__ShrinkWrapped = 2,
	ESpritePolygonMode__FullyCustom = 3,
	ESpritePolygonMode__Diced      = 4,
	ESpritePolygonMode__ESpritePolygonMode_MAX = 5
};



enum class ESpriteShapeType : uint8_t
{
	ESpriteShapeType__Box          = 0,
	ESpriteShapeType__Circle       = 1,
	ESpriteShapeType__Polygon      = 2,
	ESpriteShapeType__ESpriteShapeType_MAX = 3
};



enum class ESpriteCollisionMode : uint8_t
{
	ESpriteCollisionMode__None     = 0,
	ESpriteCollisionMode__Use2DPhysics = 1,
	ESpriteCollisionMode__Use3DPhysics = 2,
	ESpriteCollisionMode__ESpriteCollisionMode_MAX = 3
};









struct FPaperFlipbookKeyFrame
{
	class UPaperSprite*                                Sprite;                                                   
	int                                                FrameRun;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FSpriteInstanceData
{
	struct FMatrix                                     Transform;                                                
	class UPaperSprite*                                SourceSprite;                                             
	struct FColor                                      VertexColor;                                              
	int                                                MaterialIndex;                                            
};



struct FPaperSpriteSocket
{
	struct FTransform                                  LocalTransform;                                           
	struct FName                                       SocketName;                                               
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FPaperTerrainMaterialRule
{
	class UPaperSprite*                                StartCap;                                                 
	TArray<class UPaperSprite*>                        Body;                                                     
	class UPaperSprite*                                EndCap;                                                   
	float                                              MinimumAngle;                                             
	float                                              MaximumAngle;                                             
	bool                                               bEnableCollision;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              CollisionOffset;                                          
	int                                                DrawOrder;                                                
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FPaperTileInfo
{
	class UPaperTileSet*                               TileSet;                                                  
	int                                                PackedTileIndex;                                          
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FIntMargin
{
	int                                                Left;                                                     
	int                                                Top;                                                      
	int                                                Right;                                                    
	int                                                Bottom;                                                   
};



struct FSpriteGeometryShape
{
	ESpriteShapeType                                   ShapeType;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FVector2D>                           Vertices;                                                 
	struct FVector2D                                   BoxSize;                                                  
	struct FVector2D                                   BoxPosition;                                              
	float                                              Rotation;                                                 
	bool                                               bNegativeWinding;                                         
	unsigned char                                      UnknownData01[0x3];                                       
};



struct FSpriteGeometryCollection
{
	TArray<struct FSpriteGeometryShape>                Shapes;                                                   
	TEnumAsByte<ESpritePolygonMode>                    GeometryType;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                PixelsPerSubdivisionX;                                    
	int                                                PixelsPerSubdivisionY;                                    
	bool                                               bAvoidVertexMerging;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              AlphaThreshold;                                           
	float                                              DetailAmount;                                             
	float                                              SimplifyEpsilon;                                          
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FPaperTileMetadata
{
	struct FName                                       UserDataName;                                             
	struct FSpriteGeometryCollection                   CollisionData;                                            
	unsigned char                                      TerrainMembership[0x4];                                   
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FPaperTileSetTerrain
{
	struct FString                                     TerrainName;                                              
	int                                                CenterTileIndex;                                          
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FPaperSpriteAtlasSlot
{
	unsigned char                                      UnknownData00[0x28];                                      
	int                                                AtlasIndex;                                               
	int                                                X;                                                        
	int                                                Y;                                                        
	int                                                Width;                                                    
	int                                                Height;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FSpriteDrawCallRecord
{
	struct FVector                                     Destination;                                              
	unsigned char                                      UnknownData00[0x4];                                       
	class UTexture*                                    BaseTexture;                                              
	unsigned char                                      UnknownData01[0x30];                                      
	struct FColor                                      Color;                                                    
	unsigned char                                      UnknownData02[0x84];                                      
};



struct FSpriteAssetInitParameters
{
	unsigned char                                      UnknownData00[0x40];                                      
};

}

