#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct URuntimeMeshComponent_UpdateMeshSection_Blueprint_Params
{
	int                                                SectionIndex;                                             
	TArray<struct FVector>                             Vertices;                                                 
	TArray<int>                                        Triangles;                                                
	TArray<struct FVector>                             Normals;                                                  
	TArray<struct FRuntimeMeshTangent>                 Tangents;                                                 
	TArray<struct FVector2D>                           UV0;                                                      
	TArray<struct FVector2D>                           UV1;                                                      
	TArray<struct FLinearColor>                        Colors;                                                   
	bool                                               bCalculateNormalTangent;                                  
	bool                                               bGenerateTessellationTriangles;                           
};


struct URuntimeMeshComponent_SetSectionTessellationTriangles_Params
{
	int                                                SectionIndex;                                             
	TArray<int>                                        TessellationTriangles;                                    
	bool                                               bShouldMoveArray;                                         
};


struct URuntimeMeshComponent_SetMeshSectionVisible_Params
{
	int                                                SectionIndex;                                             
	bool                                               bNewVisibility;                                           
};


struct URuntimeMeshComponent_SetMeshSectionCollisionEnabled_Params
{
	int                                                SectionIndex;                                             
	bool                                               bNewCollisionEnabled;                                     
};


struct URuntimeMeshComponent_SetMeshSectionCastsShadow_Params
{
	int                                                SectionIndex;                                             
	bool                                               bNewCastsShadow;                                          
};


struct URuntimeMeshComponent_SetMeshCollisionSection_Params
{
	int                                                CollisionSectionIndex;                                    
	TArray<struct FVector>                             Vertices;                                                 
	TArray<int>                                        Triangles;                                                
};


struct URuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Params
{
};


struct URuntimeMeshComponent_IsMeshSectionVisible_Params
{
	int                                                SectionIndex;                                             
	bool                                               ReturnValue;                                              
};


struct URuntimeMeshComponent_IsMeshSectionCollisionEnabled_Params
{
	int                                                SectionIndex;                                             
	bool                                               ReturnValue;                                              
};


struct URuntimeMeshComponent_IsMeshSectionCastingShadows_Params
{
	int                                                SectionIndex;                                             
	bool                                               ReturnValue;                                              
};


struct URuntimeMeshComponent_GetNumSections_Params
{
	int                                                ReturnValue;                                              
};


struct URuntimeMeshComponent_GetLastSectionIndex_Params
{
	int                                                ReturnValue;                                              
};


struct URuntimeMeshComponent_FirstAvailableMeshSectionIndex_Params
{
	int                                                ReturnValue;                                              
};


struct URuntimeMeshComponent_EndBatchUpdates_Params
{
};


struct URuntimeMeshComponent_DoesSectionExist_Params
{
	int                                                SectionIndex;                                             
	bool                                               ReturnValue;                                              
};


struct URuntimeMeshComponent_CreateMeshSection_Blueprint_Params
{
	int                                                SectionIndex;                                             
	TArray<struct FVector>                             Vertices;                                                 
	TArray<int>                                        Triangles;                                                
	TArray<struct FVector>                             Normals;                                                  
	TArray<struct FRuntimeMeshTangent>                 Tangents;                                                 
	TArray<struct FVector2D>                           UV0;                                                      
	TArray<struct FVector2D>                           UV1;                                                      
	TArray<struct FLinearColor>                        Colors;                                                   
	bool                                               bCreateCollision;                                         
	bool                                               bCalculateNormalTangent;                                  
	bool                                               bGenerateTessellationTriangles;                           
	EUpdateFrequency                                   UpdateFrequency;                                          
};


struct URuntimeMeshComponent_CookCollisionNow_Params
{
};


struct URuntimeMeshComponent_ClearMeshSection_Params
{
	int                                                SectionIndex;                                             
};


struct URuntimeMeshComponent_ClearMeshCollisionSection_Params
{
	int                                                CollisionSectionIndex;                                    
};


struct URuntimeMeshComponent_ClearCollisionConvexMeshes_Params
{
};


struct URuntimeMeshComponent_ClearAllMeshSections_Params
{
};


struct URuntimeMeshComponent_ClearAllMeshCollisionSections_Params
{
};


struct URuntimeMeshComponent_ChangeRuntimeMeshSectionUVs_Params
{
	int                                                SectionIndex;                                             
	int                                                Index;                                                    
	TMap<int, struct FVector2D>                        UVs;                                                      
	bool                                               ReturnValue;                                              
};


struct URuntimeMeshComponent_BeginBatchUpdates_Params
{
};


struct URuntimeMeshComponent_AddCollisionConvexMesh_Params
{
	TArray<struct FVector>                             ConvexVerts;                                              
};


struct URuntimeMeshLibrary_GetSectionFromStaticMesh_Params
{
	class UStaticMesh*                                 InMesh;                                                   
	int                                                LODIndex;                                                 
	int                                                SectionIndex;                                             
	TArray<struct FVector>                             Vertices;                                                 
	TArray<int>                                        Triangles;                                                
	TArray<struct FVector>                             Normals;                                                  
	TArray<struct FVector2D>                           UVs;                                                      
	TArray<struct FRuntimeMeshTangent>                 Tangents;                                                 
};


struct URuntimeMeshLibrary_GenerateTessellationIndexBuffer_Params
{
	TArray<struct FVector>                             Vertices;                                                 
	TArray<int>                                        Triangles;                                                
	TArray<struct FVector2D>                           UVs;                                                      
	TArray<struct FVector>                             Normals;                                                  
	TArray<struct FRuntimeMeshTangent>                 Tangents;                                                 
	TArray<int>                                        OutTessTriangles;                                         
};


struct URuntimeMeshLibrary_CreateGridMeshTriangles_Params
{
	int                                                NumX;                                                     
	int                                                NumY;                                                     
	bool                                               bWinding;                                                 
	TArray<int>                                        Triangles;                                                
};


struct URuntimeMeshLibrary_CreateBoxMesh_Params
{
	struct FVector                                     BoxRadius;                                                
	TArray<struct FVector>                             Vertices;                                                 
	TArray<int>                                        Triangles;                                                
	TArray<struct FVector>                             Normals;                                                  
	TArray<struct FVector2D>                           UVs;                                                      
	TArray<struct FRuntimeMeshTangent>                 Tangents;                                                 
};


struct URuntimeMeshLibrary_CopyRuntimeMeshFromStaticMeshComponent_Params
{
	class UStaticMeshComponent*                        StaticMeshComp;                                           
	int                                                LODIndex;                                                 
	class URuntimeMeshComponent*                       RuntimeMeshComp;                                          
	bool                                               bShouldCreateCollision;                                   
};


struct URuntimeMeshLibrary_CopyRuntimeMeshFromStaticMesh_Params
{
	class UStaticMesh*                                 StaticMesh;                                               
	int                                                LODIndex;                                                 
	class URuntimeMeshComponent*                       RuntimeMeshComp;                                          
	bool                                               bShouldCreateCollision;                                   
};


struct URuntimeMeshLibrary_ConvertQuadToTriangles_Params
{
	TArray<int>                                        Triangles;                                                
	int                                                Vert0;                                                    
	int                                                Vert1;                                                    
	int                                                Vert2;                                                    
	int                                                Vert3;                                                    
};


struct URuntimeMeshLibrary_CalculateTangentsForMesh_Params
{
	TArray<struct FVector>                             Vertices;                                                 
	TArray<int>                                        Triangles;                                                
	TArray<struct FVector2D>                           UVs;                                                      
	TArray<struct FVector>                             Normals;                                                  
	TArray<struct FRuntimeMeshTangent>                 Tangents;                                                 
};

}

