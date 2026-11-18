#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ALevelSequenceActor_SetSequence_Params
{
	class ULevelSequence*                              InSequence;                                               
};


struct ALevelSequenceActor_SetEventReceivers_Params
{
	TArray<class AActor*>                              AdditionalReceivers;                                      
};


struct ALevelSequenceActor_SetBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                  
	TArray<class AActor*>                              Actors;                                                   
	bool                                               bAllowBindingsFromAsset;                                  
};


struct ALevelSequenceActor_SetAllMovieSceneSectionsToKeepState_Params
{
};


struct ALevelSequenceActor_ResetBindings_Params
{
};


struct ALevelSequenceActor_ResetBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                  
};


struct ALevelSequenceActor_RemoveBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                  
	class AActor*                                      Actor;                                                    
};


struct ALevelSequenceActor_ReceiveInitailizePlayer_Params
{
};


struct ALevelSequenceActor_GetSequence_Params
{
	bool                                               bLoad;                                                    
	bool                                               bInitializePlayer;                                        
	class ULevelSequence*                              ReturnValue;                                              
};


struct ALevelSequenceActor_GetPossessableByName_Params
{
	struct FString                                     NameKeyString;                                            
	struct FMovieSceneObjectBindingID                  ReturnValue;                                              
};


struct ALevelSequenceActor_AddBinding_Params
{
	struct FMovieSceneObjectBindingID                  Binding;                                                  
	class AActor*                                      Actor;                                                    
	bool                                               bAllowBindingsFromAsset;                                  
};


struct ULevelSequencePlayer_SetCanUpdateCameraCut_Params
{
	bool                                               bEnable;                                                  
};


struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       
	class ULevelSequence*                              LevelSequence;                                            
	struct FMovieSceneSequencePlaybackSettings         Settings;                                                 
	class ALevelSequenceActor*                         OutActor;                                                 
	class ULevelSequencePlayer*                        ReturnValue;                                              
};


struct ULevelSequenceBurnIn_SetSettings_Params
{
	class UObject*                                     InSettings;                                               
};


struct ULevelSequenceBurnIn_GetSettingsClass_Params
{
	class UClass*                                      ReturnValue;                                              
};

}

