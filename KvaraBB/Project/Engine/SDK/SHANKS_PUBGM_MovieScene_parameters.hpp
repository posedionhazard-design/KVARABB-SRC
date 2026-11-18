#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UMovieSceneSequencePlayer_Stop_Params
{
};


struct UMovieSceneSequencePlayer_StartPlayingNextTick_Params
{
};


struct UMovieSceneSequencePlayer_SetPlayRate_Params
{
	float                                              PlayRate;                                                 
};


struct UMovieSceneSequencePlayer_SetPlayLoopCount_Params
{
	int                                                NumLoops;                                                 
};


struct UMovieSceneSequencePlayer_SetPlaybackRange_Params
{
	float                                              NewStartTime;                                             
	float                                              NewEndTime;                                               
};


struct UMovieSceneSequencePlayer_SetPlaybackPosition_Params
{
	float                                              NewPlaybackPosition;                                      
};


struct UMovieSceneSequencePlayer_Scrub_Params
{
};


struct UMovieSceneSequencePlayer_PlayReverse_Params
{
};


struct UMovieSceneSequencePlayer_PlayLooping_Params
{
	int                                                NumLoops;                                                 
};


struct UMovieSceneSequencePlayer_Play_Params
{
};


struct UMovieSceneSequencePlayer_Pause_Params
{
};


struct UMovieSceneSequencePlayer_JumpToPositionEx_Params
{
	float                                              NewPlaybackPosition;                                      
};


struct UMovieSceneSequencePlayer_JumpToPosition_Params
{
	float                                              NewPlaybackPosition;                                      
};


struct UMovieSceneSequencePlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                              
};


struct UMovieSceneSequencePlayer_IsPaused_Params
{
	bool                                               ReturnValue;                                              
};


struct UMovieSceneSequencePlayer_GoToEndAndStop_Params
{
};


struct UMovieSceneSequencePlayer_GetPlayRate_Params
{
	float                                              ReturnValue;                                              
};


struct UMovieSceneSequencePlayer_GetPlaybackStart_Params
{
	float                                              ReturnValue;                                              
};


struct UMovieSceneSequencePlayer_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                              
};


struct UMovieSceneSequencePlayer_GetPlaybackEnd_Params
{
	float                                              ReturnValue;                                              
};


struct UMovieSceneSequencePlayer_GetLength_Params
{
	float                                              ReturnValue;                                              
};


struct UMovieSceneSequencePlayer_GetBoundObjects_Params
{
	struct FMovieSceneObjectBindingID                  ObjectBinding;                                            
	TArray<class UObject*>                             ReturnValue;                                              
};


struct UMovieSceneSequencePlayer_ChangePlaybackDirection_Params
{
};


struct UMovieSceneEasingFunction_OnEvaluate_Params
{
	float                                              Interp;                                                   
	float                                              ReturnValue;                                              
};

}

