#pragma once


 
namespace SDK
{





enum class EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap = 2,
	EProcMeshSliceCapOption__EProcMeshSliceCapOption_MAX = 3
};









struct FProcMeshTangent
{
	struct FVector                                     TangentX;                                                 
	bool                                               bFlipTangentY;                                            
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FProcMeshVertex
{
	struct FVector                                     Position;                                                 
	struct FVector                                     Normal;                                                   
	struct FProcMeshTangent                            Tangent;                                                  
	struct FColor                                      Color;                                                    
	struct FVector2D                                   UV0;                                                      
};



struct FProcMeshSection
{
	TArray<struct FProcMeshVertex>                     ProcVertexBuffer;                                         
	TArray<int>                                        ProcIndexBuffer;                                          
	struct FBox                                        SectionLocalBox;                                          
	bool                                               bEnableCollision;                                         
	bool                                               bSectionVisible;                                          
	unsigned char                                      UnknownData00[0x2];                                       
};

}

