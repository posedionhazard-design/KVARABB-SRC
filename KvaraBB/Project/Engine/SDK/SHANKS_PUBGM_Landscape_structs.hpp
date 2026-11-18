#pragma once


 
namespace SDK
{





enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4
};



enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3
};



enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform         = 0,
	EGrassScaling__Free            = 1,
	EGrassScaling__LockXY          = 2,
	EGrassScaling__EGrassScaling_MAX = 3
};



enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2
};



enum class ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default = 0,
	ELandscapeLayerDisplayMode__Alphabetical = 1,
	ELandscapeLayerDisplayMode__UserSpecific = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX = 3
};



enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4
};



enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive = 0,
	ELandscapeImportAlphamapType__Layered = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX = 2
};



enum class ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2
};



enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3
};



enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5
};



enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4
};









struct FSimpleMeshTangent
{
	struct FVector                                     TangentX;                                                 
	bool                                               bFlipTangentY;                                            
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FSimpleMeshVertex
{
	struct FVector                                     Position;                                                 
	struct FVector                                     Normal;                                                   
	struct FSimpleMeshTangent                          Tangent;                                                  
	struct FColor                                      Color;                                                    
	struct FVector2D                                   UV0;                                                      
};



struct FSimpleMeshSection
{
	TArray<struct FSimpleMeshVertex>                   VertexBuffer;                                             
	TArray<int>                                        IndexBuffer;                                              
	struct FBox                                        BoundingBox;                                              
	bool                                               Visible;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FOverridePhyxMaterial
{
	TArray<class UPhysicalMaterial*>                   OriginalPhysxMaterial;                                    
	TArray<class UPhysicalMaterial*>                   OverridePhysxMaterial;                                    
};



struct FWeightmapLayerAllocationInfo
{
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                
	unsigned char                                      WeightmapTextureIndex;                                    
	unsigned char                                      WeightmapTextureChannel;                                  
	unsigned char                                      UnknownData00[0x6];                                       
};



struct FVisibilityData
{
	TArray<unsigned char>                              VisibilityData;                                           
};



struct FLevelComponentMapValue
{
	struct FString                                     Name;                                                     
	TArray<int>                                        IndexOffsetArray;                                         
	TArray<int>                                        IndexCountArray;                                          
	TArray<int>                                        VertexOffsetIndex;                                        
	TArray<int>                                        BorderIndex1;                                             
	TArray<int>                                        BorderIndex2;                                             
	TArray<int>                                        BorderIndex3;                                             
	TArray<int>                                        BorderIndex4;                                             
	TArray<int>                                        UnderBorderIndex1;                                        
	TArray<int>                                        UnderBorderIndex2;                                        
	TArray<int>                                        UnderBorderIndex3;                                        
	TArray<int>                                        UnderBorderIndex4;                                        
	TArray<int>                                        BorderIndicesBuffer1;                                     
	TArray<int>                                        BorderIndicesBuffer2;                                     
	TArray<int>                                        BorderIndicesBuffer3;                                     
	TArray<int>                                        BorderIndicesBuffer4;                                     
	struct FString                                     Sibling1Name;                                             
	struct FString                                     Sibling2Name;                                             
	struct FString                                     Sibling3Name;                                             
	struct FString                                     Sibling4Name;                                             
	int                                                Sibling1Idx;                                              
	int                                                Sibling2Idx;                                              
	int                                                Sibling3Idx;                                              
	int                                                Sibling4Idx;                                              
};



struct FGrassVariety
{
	class UStaticMesh*                                 GrassMesh;                                                
	float                                              GrassDensity;                                             
	bool                                               bUseGrid;                                                 
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              PlacementJitter;                                          
	int                                                StartCullDistance;                                        
	int                                                EndCullDistance;                                          
	int                                                MinLOD;                                                   
	EGrassScaling                                      Scaling;                                                  
	unsigned char                                      UnknownData01[0x3];                                       
	struct FFloatInterval                              ScaleX;                                                   
	struct FFloatInterval                              ScaleY;                                                   
	struct FFloatInterval                              ScaleZ;                                                   
	bool                                               RandomRotation;                                           
	bool                                               AlignToSurface;                                           
	bool                                               bUseLandscapeLightmap;                                    
	struct FLightingChannels                           LightingChannels;                                         
	bool                                               bReceivesDecals;                                          
	unsigned char                                      UnknownData02[0x7];                                       
};



struct FIdeaGrassFieldData
{
	class UTextureRenderTarget2D*                      ForceTextureRT;                                           
	TArray<struct FVector>                             TramplerPositionList;                                     
	TArray<struct FRotator>                            TramplerDirectionList;                                    
	TArray<float>                                      TramplerCutoff;                                           
	class UTexture*                                    TrampleTexture;                                           
	float                                              TrampleScale;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	class UTexture*                                    SkillTexture;                                             
	TArray<float>                                      CleanTextureScale;                                        
	float                                              GrassSpringness;                                          
	unsigned char                                      UnknownData01[0xC];                                       
	struct FVector4                                    GrassFieldRect;                                           
	unsigned char                                      FeatureLevel;                                             
	unsigned char                                      UnknownData02[0xF];                                       
};



struct FLandscapeSplineConnection
{
	class ULandscapeSplineSegment*                     Segment;                                                  
	unsigned char                                      End : 1;                                                  
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FLandscapeSplineInterpPoint
{
	struct FVector                                     Center;                                                   
	struct FVector                                     Left;                                                     
	struct FVector                                     Right;                                                    
	struct FVector                                     FalloffLeft;                                              
	struct FVector                                     FalloffRight;                                             
	float                                              StartEndFalloff;                                          
};



struct FLandscapeSplineSegmentConnection
{
	class ULandscapeSplineControlPoint*                ControlPoint;                                             
	float                                              TangentLen;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	struct FName                                       SocketName;                                               
};



struct FGrassInput
{
	struct FName                                       Name;                                                     
	class ULandscapeGrassType*                         GrassType;                                                
	struct FExpressionInput                            Input;                                                    
};



struct FLayerBlendInput
{
	struct FName                                       LayerName;                                                
	TEnumAsByte<ELandscapeLayerBlendType>              BlendType;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	struct FExpressionInput                            LayerInput;                                               
	struct FExpressionInput                            HeightInput;                                              
	float                                              PreviewWeight;                                            
	struct FVector                                     ConstLayerInput;                                          
	float                                              ConstHeightInput;                                         
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FLandscapeColorMask
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FLandscapeColorMaskLayer
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FLandscapeEditToolRenderData
{
	class UMaterialInterface*                          ToolMaterial;                                             
	class UMaterialInterface*                          GizmoMaterial;                                            
	int                                                SelectedType;                                             
	int                                                DebugChannelR;                                            
	int                                                DebugChannelG;                                            
	int                                                DebugChannelB;                                            
	int                                                DebugChannelA;                                            
	unsigned char                                      UnknownData00[0x4];                                       
	class UTexture2D*                                  DataTexture;                                              
};



struct FGizmoSelectData
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FLandscapeInfoLayerSettings
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             
	struct FName                                       LayerName;                                                
};



struct FLandscapeImportLayerInfo
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             
};



struct FLandscapeEditorLayerSettings
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[0x4];                                        
};



struct FForeignWorldSplineData
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FForeignSplineSegmentData
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FForeignControlPointData
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FLandscapeSplineMeshEntry
{
	class UStaticMesh*                                 Mesh;                                                     
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                        
	unsigned char                                      bCenterH : 1;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector2D                                   CenterAdjust;                                             
	unsigned char                                      bScaleToWidth : 1;                                        
	unsigned char                                      UnknownData01[0x3];                                       
	struct FVector                                     Scale;                                                    
	TEnumAsByte<ELandscapeSplineMeshOrientation>       Orientation;                                              
	TEnumAsByte<ESplineMeshAxis>                       ForwardAxis;                                              
	TEnumAsByte<ESplineMeshAxis>                       UpAxis;                                                   
	unsigned char                                      UnknownData02[0x1];                                       
};

}

