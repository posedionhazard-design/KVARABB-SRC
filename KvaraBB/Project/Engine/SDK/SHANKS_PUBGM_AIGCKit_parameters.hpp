#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UAIGCAnimInstance_GetCurrentFrameIndex_Params
{
	int                                                ReturnValue;                                              
};


struct UAIGCKitFunctionLibrary_GetAnimData_Params
{
	TArray<unsigned char>                              CompressData;                                             
	int                                                FrameRate;                                                
	int                                                FrameNum;                                                 
	struct FSkeletonNodeInfo                           SkeletonNodeInfo;                                         
	class UAIGCAnimData*                               ReturnValue;                                              
};


struct UAIGCKitFunctionLibrary_DecompressBone_Params
{
	int                                                TrackIndex;                                               
	struct FTransform                                  OutAtom;                                                  
	TArray<unsigned char>                              RawAnimData;                                              
	float                                              Time;                                                     
	float                                              RelativePos;                                              
	bool                                               ReturnValue;                                              
};


struct UAIGCKitFunctionLibrary_DecompressAnimData_Params
{
	class UAIGCAnimData*                               OutAnimData;                                              
	TArray<unsigned char>                              RawAnimData;                                              
	int                                                FrameNum;                                                 
	float                                              TargetFramerate;                                          
	struct FSkeletonNodeInfo                           SkeletonNodeInfo;                                         
	bool                                               ReturnValue;                                              
};

}

