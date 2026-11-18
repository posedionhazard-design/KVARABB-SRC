#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UMeshReconstructorBase_StopReconstruction_Params
{
};


struct UMeshReconstructorBase_StartReconstruction_Params
{
};


struct UMeshReconstructorBase_PauseReconstruction_Params
{
};


struct UMeshReconstructorBase_IsReconstructionStarted_Params
{
	bool                                               ReturnValue;                                              
};


struct UMeshReconstructorBase_IsReconstructionPaused_Params
{
	bool                                               ReturnValue;                                              
};


struct UMeshReconstructorBase_DisconnectMRMesh_Params
{
};


struct UMeshReconstructorBase_ConnectMRMesh_Params
{
	class UMRMeshComponent*                            Mesh;                                                     
	struct FMRMeshConfiguration                        ReturnValue;                                              
};


struct UMRMeshComponent_GetReconstructor_Params
{
	class UMeshReconstructorBase*                      ReturnValue;                                              
};


struct UMRMeshComponent_ConnectReconstructor_Params
{
	class UMeshReconstructorBase*                      Reconstructor;                                            
};

}

