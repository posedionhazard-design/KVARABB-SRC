#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UPaperFlipbook_IsValidKeyFrameIndex_Params
{
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UPaperFlipbook_GetTotalDuration_Params
{
	float                                              ReturnValue;                                              
};


struct UPaperFlipbook_GetSpriteAtTime_Params
{
	float                                              Time;                                                     
	bool                                               bClampToEnds;                                             
	class UPaperSprite*                                ReturnValue;                                              
};


struct UPaperFlipbook_GetSpriteAtFrame_Params
{
	int                                                FrameIndex;                                               
	class UPaperSprite*                                ReturnValue;                                              
};


struct UPaperFlipbook_GetNumKeyFrames_Params
{
	int                                                ReturnValue;                                              
};


struct UPaperFlipbook_GetNumFrames_Params
{
	int                                                ReturnValue;                                              
};


struct UPaperFlipbook_GetKeyFrameIndexAtTime_Params
{
	float                                              Time;                                                     
	bool                                               bClampToEnds;                                             
	int                                                ReturnValue;                                              
};


struct UPaperFlipbookComponent_Stop_Params
{
};


struct UPaperFlipbookComponent_SetSpriteColor_Params
{
	struct FLinearColor                                NewColor;                                                 
};


struct UPaperFlipbookComponent_SetPlayRate_Params
{
	float                                              NewRate;                                                  
};


struct UPaperFlipbookComponent_SetPlaybackPositionInFrames_Params
{
	int                                                NewFramePosition;                                         
	bool                                               bFireEvents;                                              
};


struct UPaperFlipbookComponent_SetPlaybackPosition_Params
{
	float                                              NewPosition;                                              
	bool                                               bFireEvents;                                              
};


struct UPaperFlipbookComponent_SetNewTime_Params
{
	float                                              NewTime;                                                  
};


struct UPaperFlipbookComponent_SetLooping_Params
{
	bool                                               bNewLooping;                                              
};


struct UPaperFlipbookComponent_SetFlipbook_Params
{
	class UPaperFlipbook*                              NewFlipbook;                                              
	bool                                               ReturnValue;                                              
};


struct UPaperFlipbookComponent_ReverseFromEnd_Params
{
};


struct UPaperFlipbookComponent_Reverse_Params
{
};


struct UPaperFlipbookComponent_PlayFromStart_Params
{
};


struct UPaperFlipbookComponent_Play_Params
{
};


struct UPaperFlipbookComponent_OnRep_SourceFlipbook_Params
{
	class UPaperFlipbook*                              OldFlipbook;                                              
};


struct UPaperFlipbookComponent_IsReversing_Params
{
	bool                                               ReturnValue;                                              
};


struct UPaperFlipbookComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              
};


struct UPaperFlipbookComponent_IsLooping_Params
{
	bool                                               ReturnValue;                                              
};


struct UPaperFlipbookComponent_GetPlayRate_Params
{
	float                                              ReturnValue;                                              
};


struct UPaperFlipbookComponent_GetPlaybackPositionInFrames_Params
{
	int                                                ReturnValue;                                              
};


struct UPaperFlipbookComponent_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                              
};


struct UPaperFlipbookComponent_GetFlipbookLengthInFrames_Params
{
	int                                                ReturnValue;                                              
};


struct UPaperFlipbookComponent_GetFlipbookLength_Params
{
	float                                              ReturnValue;                                              
};


struct UPaperFlipbookComponent_GetFlipbookFramerate_Params
{
	float                                              ReturnValue;                                              
};


struct UPaperFlipbookComponent_GetFlipbook_Params
{
	class UPaperFlipbook*                              ReturnValue;                                              
};


struct UPaperGroupedSpriteComponent_UpdateInstanceTransform_Params
{
	int                                                InstanceIndex;                                            
	struct FTransform                                  NewInstanceTransform;                                     
	bool                                               bWorldSpace;                                              
	bool                                               bMarkRenderStateDirty;                                    
	bool                                               bTeleport;                                                
	bool                                               ReturnValue;                                              
};


struct UPaperGroupedSpriteComponent_UpdateInstanceColor_Params
{
	int                                                InstanceIndex;                                            
	struct FLinearColor                                NewInstanceColor;                                         
	bool                                               bMarkRenderStateDirty;                                    
	bool                                               ReturnValue;                                              
};


struct UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Params
{
	struct FVector                                     WorldSpaceSortAxis;                                       
};


struct UPaperGroupedSpriteComponent_RemoveInstance_Params
{
	int                                                InstanceIndex;                                            
	bool                                               ReturnValue;                                              
};


struct UPaperGroupedSpriteComponent_GetInstanceTransform_Params
{
	int                                                InstanceIndex;                                            
	struct FTransform                                  OutInstanceTransform;                                     
	bool                                               bWorldSpace;                                              
	bool                                               ReturnValue;                                              
};


struct UPaperGroupedSpriteComponent_GetInstanceCount_Params
{
	int                                                ReturnValue;                                              
};


struct UPaperGroupedSpriteComponent_ClearInstances_Params
{
};


struct UPaperGroupedSpriteComponent_AddInstance_Params
{
	struct FTransform                                  Transform;                                                
	class UPaperSprite*                                Sprite;                                                   
	bool                                               bWorldSpace;                                              
	struct FLinearColor                                Color;                                                    
	int                                                ReturnValue;                                              
};


struct UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Params
{
	class UPaperSprite*                                Sprite;                                                   
	int                                                Width;                                                    
	int                                                Height;                                                   
	struct FSlateBrush                                 ReturnValue;                                              
};


struct UPaperSpriteComponent_SetSpriteColor_Params
{
	struct FLinearColor                                NewColor;                                                 
};


struct UPaperSpriteComponent_SetSprite_Params
{
	class UPaperSprite*                                NewSprite;                                                
	bool                                               ReturnValue;                                              
};


struct UPaperSpriteComponent_GetSprite_Params
{
	class UPaperSprite*                                ReturnValue;                                              
};


struct UPaperTerrainComponent_SetTerrainColor_Params
{
	struct FLinearColor                                NewColor;                                                 
};


struct UPaperTileMapComponent_SetTileMapColor_Params
{
	struct FLinearColor                                NewColor;                                                 
};


struct UPaperTileMapComponent_SetTileMap_Params
{
	class UPaperTileMap*                               NewTileMap;                                               
	bool                                               ReturnValue;                                              
};


struct UPaperTileMapComponent_SetTile_Params
{
	int                                                X;                                                        
	int                                                Y;                                                        
	int                                                Layer;                                                    
	struct FPaperTileInfo                              NewValue;                                                 
};


struct UPaperTileMapComponent_SetLayerColor_Params
{
	struct FLinearColor                                NewColor;                                                 
	int                                                Layer;                                                    
};


struct UPaperTileMapComponent_SetLayerCollision_Params
{
	int                                                Layer;                                                    
	bool                                               bHasCollision;                                            
	bool                                               bOverrideThickness;                                       
	float                                              CustomThickness;                                          
	bool                                               bOverrideOffset;                                          
	float                                              CustomOffset;                                             
	bool                                               bRebuildCollision;                                        
};


struct UPaperTileMapComponent_SetDefaultCollisionThickness_Params
{
	float                                              Thickness;                                                
	bool                                               bRebuildCollision;                                        
};


struct UPaperTileMapComponent_ResizeMap_Params
{
	int                                                NewWidthInTiles;                                          
	int                                                NewHeightInTiles;                                         
};


struct UPaperTileMapComponent_RebuildCollision_Params
{
};


struct UPaperTileMapComponent_OwnsTileMap_Params
{
	bool                                               ReturnValue;                                              
};


struct UPaperTileMapComponent_MakeTileMapEditable_Params
{
};


struct UPaperTileMapComponent_GetTilePolygon_Params
{
	int                                                TileX;                                                    
	int                                                TileY;                                                    
	TArray<struct FVector>                             Points;                                                   
	int                                                LayerIndex;                                               
	bool                                               bWorldSpace;                                              
};


struct UPaperTileMapComponent_GetTileMapColor_Params
{
	struct FLinearColor                                ReturnValue;                                              
};


struct UPaperTileMapComponent_GetTileCornerPosition_Params
{
	int                                                TileX;                                                    
	int                                                TileY;                                                    
	int                                                LayerIndex;                                               
	bool                                               bWorldSpace;                                              
	struct FVector                                     ReturnValue;                                              
};


struct UPaperTileMapComponent_GetTileCenterPosition_Params
{
	int                                                TileX;                                                    
	int                                                TileY;                                                    
	int                                                LayerIndex;                                               
	bool                                               bWorldSpace;                                              
	struct FVector                                     ReturnValue;                                              
};


struct UPaperTileMapComponent_GetTile_Params
{
	int                                                X;                                                        
	int                                                Y;                                                        
	int                                                Layer;                                                    
	struct FPaperTileInfo                              ReturnValue;                                              
};


struct UPaperTileMapComponent_GetMapSize_Params
{
	int                                                MapWidth;                                                 
	int                                                MapHeight;                                                
	int                                                NumLayers;                                                
};


struct UPaperTileMapComponent_GetLayerColor_Params
{
	int                                                Layer;                                                    
	struct FLinearColor                                ReturnValue;                                              
};


struct UPaperTileMapComponent_CreateNewTileMap_Params
{
	int                                                MapWidth;                                                 
	int                                                MapHeight;                                                
	int                                                TileWidth;                                                
	int                                                TileHeight;                                               
	float                                              PixelsPerUnrealUnit;                                      
	bool                                               bCreateLayer;                                             
};


struct UPaperTileMapComponent_AddNewLayer_Params
{
	class UPaperTileLayer*                             ReturnValue;                                              
};


struct UTileMapBlueprintLibrary_MakeTile_Params
{
	int                                                TileIndex;                                                
	class UPaperTileSet*                               TileSet;                                                  
	bool                                               bFlipH;                                                   
	bool                                               bFlipV;                                                   
	bool                                               bFlipD;                                                   
	struct FPaperTileInfo                              ReturnValue;                                              
};


struct UTileMapBlueprintLibrary_GetTileUserData_Params
{
	struct FPaperTileInfo                              Tile;                                                     
	struct FName                                       ReturnValue;                                              
};


struct UTileMapBlueprintLibrary_GetTileTransform_Params
{
	struct FPaperTileInfo                              Tile;                                                     
	struct FTransform                                  ReturnValue;                                              
};


struct UTileMapBlueprintLibrary_BreakTile_Params
{
	struct FPaperTileInfo                              Tile;                                                     
	int                                                TileIndex;                                                
	class UPaperTileSet*                               TileSet;                                                  
	bool                                               bFlipH;                                                   
	bool                                               bFlipV;                                                   
	bool                                               bFlipD;                                                   
};

}

