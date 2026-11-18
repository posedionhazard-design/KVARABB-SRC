#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct AGeometryCacheActor_GetGeometryCacheComponent_Params
{
	class UGeometryCacheComponent*                     ReturnValue;                                              
};


struct UGeometryCacheComponent_Stop_Params
{
};


struct UGeometryCacheComponent_SetStartTimeOffset_Params
{
	float                                              NewStartTimeOffset;                                       
};


struct UGeometryCacheComponent_SetPlaybackSpeed_Params
{
	float                                              NewPlaybackSpeed;                                         
};


struct UGeometryCacheComponent_SetLooping_Params
{
	bool                                               bNewLooping;                                              
};


struct UGeometryCacheComponent_SetGeometryCache_Params
{
	class UGeometryCache*                              NewGeomCache;                                             
	bool                                               ReturnValue;                                              
};


struct UGeometryCacheComponent_PlayReversedFromEnd_Params
{
};


struct UGeometryCacheComponent_PlayReversed_Params
{
};


struct UGeometryCacheComponent_PlayFromStart_Params
{
};


struct UGeometryCacheComponent_Play_Params
{
};


struct UGeometryCacheComponent_Pause_Params
{
};


struct UGeometryCacheComponent_IsPlayingReversed_Params
{
	bool                                               ReturnValue;                                              
};


struct UGeometryCacheComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              
};


struct UGeometryCacheComponent_IsLooping_Params
{
	bool                                               ReturnValue;                                              
};


struct UGeometryCacheComponent_GetStartTimeOffset_Params
{
	float                                              ReturnValue;                                              
};


struct UGeometryCacheComponent_GetPlaybackSpeed_Params
{
	float                                              ReturnValue;                                              
};


struct UGeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params
{
	struct FGeometryCacheMeshData                      MeshData;                                                 
	float                                              SampleTime;                                               
};


struct UGeometryCacheTrack_TransformAnimation_SetMesh_Params
{
	struct FGeometryCacheMeshData                      NewMeshData;                                              
};


struct UGeometryCacheTrack_TransformGroupAnimation_SetMesh_Params
{
	struct FGeometryCacheMeshData                      NewMeshData;                                              
};

}

