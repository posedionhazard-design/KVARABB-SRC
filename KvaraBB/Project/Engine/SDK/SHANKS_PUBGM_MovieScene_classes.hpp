#pragma once


 
namespace SDK
{






class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return pStaticClass;
	}

};




class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                              
	unsigned char                                      UnknownData00[0x6];                                       
	struct FMovieSceneEasingSettings                   Easing;                                                   
	float                                              StartTime;                                                
	float                                              EndTime;                                                  
	int                                                RowIndex;                                                 
	int                                                OverlapPriority;                                          
	unsigned char                                      bIsActive : 1;                                            
	unsigned char                                      bIsLocked : 1;                                            
	unsigned char                                      bIsInfinite : 1;                                          
	unsigned char                                      bUseTimeToWeight : 1;                                     
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              PrerollTime;                                              
	float                                              PostrollTime;                                             
	struct FOptionalMovieSceneBlendType                BlendType;                                                
	unsigned char                                      UnknownData02[0x2];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return pStaticClass;
	}

};




class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                              
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return pStaticClass;
	}

};




class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return pStaticClass;
	}

};




class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FCachedMovieSceneEvaluationTemplate         EvaluationTemplate;                                       
	struct FMovieSceneTrackCompilationParams           TemplateParameters;                                       
	unsigned char                                      UnknownData00[0x6];                                       
	TMap<class UObject*, struct FCachedMovieSceneEvaluationTemplate> InstancedSubSequenceEvaluationTemplates;                  
	bool                                               bParentContextsAreSignificant;                            
	unsigned char                                      UnknownData01[0x1F];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return pStaticClass;
	}

};




class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x348];                                     
	struct FScriptMulticastDelegate                    OnPlay;                                                   
	struct FScriptMulticastDelegate                    OnPlayReverse;                                            
	struct FScriptMulticastDelegate                    OnStop;                                                   
	struct FScriptMulticastDelegate                    OnPreStop;                                                
	bool                                               FreezeEndFrame;                                           
	unsigned char                                      UnknownData01[0x7];                                       
	struct FScriptMulticastDelegate                    OnPause;                                                  
	struct FScriptMulticastDelegate                    OnFinished;                                               
	struct FScriptMulticastDelegate                    OnObjectSpawnedEvent;                                     
	TEnumAsByte<EMovieScenePlayerStatus>               status;                                                   
	unsigned char                                      bReversePlayback : 1;                                     
	unsigned char                                      bPendingFirstUpdate : 1;                                  
	unsigned char                                      UnknownData02[0x6];                                       
	class UMovieSceneSequence*                         Sequence;                                                 
	float                                              TimeCursorPosition;                                       
	float                                              StartTime;                                                
	float                                              EndTime;                                                  
	int                                                CurrentNumLoops;                                          
	unsigned char                                      UnknownData03[0x10];                                      
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         
	unsigned char                                      UnknownData04[0x378];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return pStaticClass;
	}


	void Stop();
	void StartPlayingNextTick();
	void SetPlayRate(float PlayRate);
	void SetPlayLoopCount(int NumLoops);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void Scrub();
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	void JumpToPositionEx(float NewPlaybackPosition);
	void JumpToPosition(float NewPlaybackPosition);
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	float GetLength();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};




class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                               
	TArray<struct FMovieScenePossessable>              Possessables;                                             
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                           
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                             
	class UMovieSceneTrack*                            CameraCutTrack;                                           
	struct FFloatRange                                 SelectionRange;                                           
	struct FFloatRange                                 PlaybackRange;                                            
	bool                                               bForceFixedFrameIntervalPlayback;                         
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              FixedFrameInterval;                                       
	float                                              InTime;                                                   
	float                                              OutTime;                                                  
	float                                              StartTime;                                                
	float                                              EndTime;                                                  
	bool                                               bLowDeviceFrameRateLimitEnabled;                          
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                LowDeviceFrameLimit;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieScene");
		return pStaticClass;
	}

};




class UMovieSceneBindingOverrides : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                              
	unsigned char                                      UnknownData01[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return pStaticClass;
	}

};




class UMovieSceneBindingOverridesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneBindingOverridesInterface");
		return pStaticClass;
	}

};




class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return pStaticClass;
	}

};




class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	EMovieSceneBuiltInEasing                           Type;                                                     
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		return pStaticClass;
	}

};




class UMovieSceneEasingExternalCurve : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	class UCurveFloat*                                 Curve;                                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		return pStaticClass;
	}

};




class UMovieSceneEasingFunction : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneEasingFunction");
		return pStaticClass;
	}


	float OnEvaluate(float Interp);
};




class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                               
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                             
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                        
	TArray<struct FString>                             ChildObjectBindingStrings;                                
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return pStaticClass;
	}

};




class UMovieSceneSegmentCompilerTestTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  SectionArray;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSegmentCompilerTestTrack");
		return pStaticClass;
	}

};




class UMovieSceneSegmentCompilerTestSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieScene.MovieSceneSegmentCompilerTestSection");
		return pStaticClass;
	}

};


}

