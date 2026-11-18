#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ULobbyCameraFunctionLibrary_C_OnViewportSizeChanged_Params
{
	struct FVector2D                                   OldViewport;                                              
	struct FVector2D                                   NewViewport;                                              
	class UObject*                                     __WorldContext;                                           
};


struct ULobbyCameraFunctionLibrary_C_LevelSequence_ExecuteStartCallback_Params
{
	class UObject*                                     __WorldContext;                                           
};


struct ULobbyCameraFunctionLibrary_C_GetCurrentCameraActor_Params
{
	class UObject*                                     __WorldContext;                                           
	class ACameraActor*                                CameraActor;                                              
};


struct ULobbyCameraFunctionLibrary_C_LevelSequence_ExecuteEndCallback_Params
{
	class UObject*                                     __WorldContext;                                           
};


struct ULobbyCameraFunctionLibrary_C_SwitchCamera_Only_Params
{
	int                                                CameraID;                                                 
	float                                              BlendTime;                                                
	class UObject*                                     __WorldContext;                                           
};


struct ULobbyCameraFunctionLibrary_C_CreateLevelSequencePlayerAndActor_Params
{
	class ULevelSequence*                              level_sequence;                                           
	class UObject*                                     __WorldContext;                                           
	class ALevelSequenceActor*                         OutActor;                                                 
	class ULevelSequencePlayer*                        ReturnValue;                                              
};


struct ULobbyCameraFunctionLibrary_C_SwitchCamera_Params
{
	int                                                NewCameraID;                                              
	float                                              BlendTime;                                                
	bool                                               IgnoreLight;                                              
	class UObject*                                     __WorldContext;                                           
};

}

