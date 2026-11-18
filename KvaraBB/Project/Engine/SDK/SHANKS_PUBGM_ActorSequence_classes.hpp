#pragma once


 
namespace SDK
{






class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               
	struct FActorSequenceObjectReferenceMap            ObjectReferences;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ActorSequence.ActorSequence");
		return pStaticClass;
	}

};




class UActorSequenceComponent : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         
	class UActorSequence*                              Sequence;                                                 
	class UActorSequencePlayer*                        SequencePlayer;                                           
	bool                                               bAutoPlay;                                                
	bool                                               bRunOnServer;                                             
	bool                                               bEnableOptimize;                                          
	unsigned char                                      UnknownData00[0x5];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ActorSequence.ActorSequenceComponent");
		return pStaticClass;
	}


	void StopPlay();
	void StartPlay(float StartTime);
	void OnStopOrFinsh();
	float GetLength();
};




class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ActorSequence.ActorSequencePlayer");
		return pStaticClass;
	}

};


}

