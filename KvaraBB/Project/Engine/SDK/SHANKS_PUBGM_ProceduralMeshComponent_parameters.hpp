#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UProceduralMeshComponent_UpdateMeshSectionUV0_Params
{
	int                                                SectionIndex;                                             
	TArray<struct FVector2D>                           UV0;                                                      
};


struct UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params
{
	int                                                SectionIndex;                                             
	TArray<struct FVector>                             Vertices;                                                 
	TArray<struct FVector>                             Normals;                                                  
	TArray<struct FVector2D>                           UV0;                                                      
	TArray<struct FLinearColor>                        VertexColors;                                             
	TArray<struct FProcMeshTangent>                    Tangents;                                                 
};


struct UProceduralMeshComponent_UpdateMeshSection_Params
{
	int                                                SectionIndex;                                             
	TArray<struct FVector>                             Vertices;                                                 
	TArray<struct FVector>                             Normals;                                                  
	TArray<struct FVector2D>                           UV0;                                                      
	TArray<struct FColor>                              VertexColors;                                             
	TArray<struct FProcMeshTangent>                    Tangents;                                                 
};


struct UProceduralMeshComponent_SetMeshSectionVisible_Params
{
	int                                                SectionIndex;                                             
	bool                                               bNewVisibility;                                           
};


struct UProceduralMeshComponent_IsMeshSectionVisible_Params
{
	int                                                SectionIndex;                                             
	bool                                               ReturnValue;                                              
};


struct UProceduralMeshComponent_GetNumSections_Params
{
	int                                                ReturnValue;                                              
};


struct UProceduralMeshComponent_CreateMeshSection_LinearColor_Params
{
	int                                                SectionIndex;                                             
	TArray<struct FVector>                             Vertices;                                                 
	TArray<int>                                        Triangles;                                                
	TArray<struct FVector>                             Normals;                                                  
	TArray<struct FVector2D>                           UV0;                                                      
	TArray<struct FLinearColor>                        VertexColors;                                             
	TArray<struct FProcMeshTangent>                    Tangents;                                                 
	bool                                               bCreateCollision;                                         
};


struct UProceduralMeshComponent_CreateMeshSection_Params
{
	int                                                SectionIndex;                                             
	TArray<struct FVector>                             Vertices;                                                 
	TArray<int>                                        Triangles;                                                
	TArray<struct FVector>                             Normals;                                                  
	TArray<struct FVector2D>                           UV0;                                                      
	TArray<struct FColor>                              VertexColors;                                             
	TArray<struct FProcMeshTangent>                    Tangents;                                                 
	bool                                               bCreateCollision;                                         
};


struct UProceduralMeshComponent_ClearMeshSection_Params
{
	int                                                SectionIndex;                                             
};


struct UProceduralMeshComponent_ClearCollisionConvexMeshes_Params
{
};


struct UProceduralMeshComponent_ClearAllMeshSections_Params
{
};


struct UProceduralMeshComponent_AddCollisionConvexMesh_Params
{
	TArray<struct FVector>                             ConvexVerts;                                              
};


struct UKismetProceduralMeshLibrary_SliceProceduralMesh_Params
{
	class UProceduralMeshComponent*                    InProcMesh;                                               
	struct FVector                                     PlanePosition;                                            
	struct FVector                                     PlaneNormal;                                              
	bool                                               bCreateOtherHalf;                                         
	class UProceduralMeshComponent*                    OutOtherHalfProcMesh;                                     
	EProcMeshSliceCapOption                            CapOption;                                                
	class UMaterialInterface*                          CapMaterial;                                              
};


struct UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params
{
	class UStaticMesh*                                 InMesh;                                                   
	int                                                LODIndex;                                                 
	int                                                SectionIndex;                                             
	TArray<struct FVector>                             Vertices;                                                 
	TArray<int>                                        Triangles;                                                
	TArray<struct FVector>                             Normals;                                                  
	TArray<struct FVector2D>                           UVs;                                                      
	TArray<struct FProcMeshTangent>                    Tangents;                                                 
};


struct UKismetProceduralMeshLibrary_GenerateBoxMesh_Params
{
	struct FVector                                     BoxRadius;                                                
	TArray<struct FVector>                             Vertices;                                                 
	TArray<int>                                        Triangles;                                                
	TArray<struct FVector>                             Normals;                                                  
	TArray<struct FVector2D>                           UVs;                                                      
	TArray<struct FProcMeshTangent>                    Tangents;                                                 
};


struct UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params
{
	int                                                NumX;                                                     
	int                                                NumY;                                                     
	bool                                               bWinding;                                                 
	TArray<int>                                        Triangles;                                                
};


struct UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      
	int                                                LODIndex;                                                 
	class UProceduralMeshComponent*                    ProcMeshComponent;                                        
	bool                                               bCreateCollision;                                         
};


struct UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params
{
	TArray<int>                                        Triangles;                                                
	int                                                Vert0;                                                    
	int                                                Vert1;                                                    
	int                                                Vert2;                                                    
	int                                                Vert3;                                                    
};


struct UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params
{
	TArray<struct FVector>                             Vertices;                                                 
	TArray<int>                                        Triangles;                                                
	TArray<struct FVector2D>                           UVs;                                                      
	TArray<struct FVector>                             Normals;                                                  
	TArray<struct FProcMeshTangent>                    Tangents;                                                 
};

}

