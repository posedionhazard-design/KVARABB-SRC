#pragma once


 
namespace SDK
{






class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	bool                                               bAutoPlay;                                                
	unsigned char                                      UnknownData01[0x7];                                       
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         
	class ULevelSequencePlayer*                        SequencePlayer;                                           
	struct FSoftObjectPath                             LevelSequence;                                            
	TArray<class AActor*>                              AdditionalEventReceivers;                                 
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                            
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                         
	bool                                               bReduceFrequency;                                         
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                ReduceFrameCount;                                         
	float                                              IgnoreFrameTolerance;                                     
	unsigned char                                      bOverrideInstanceData : 1;                                
	unsigned char                                      UnknownData03[0x3];                                       
	class UObject*                                     DefaultInstanceData;                                      
	bool                                               bForceAsync;                                              
	unsigned char                                      UnknownData04[0x7];                                       
	class ULevelSequenceBurnIn*                        BurnInInstance;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return pStaticClass;
	}


	void SetSequence(class ULevelSequence* InSequence);
	void SetEventReceivers(TArray<class AActor*> AdditionalReceivers);
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void SetAllMovieSceneSectionsToKeepState();
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	void ReceiveInitailizePlayer();
	class ULevelSequence* GetSequence(bool bLoad, bool bInitializePlayer);
	struct FMovieSceneObjectBindingID GetPossessableByName(const struct FString& NameKeyString);
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};




class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	struct FScriptMulticastDelegate                    OnCameraCut;                                              
	struct FScriptMulticastDelegate                    OnTrackEvent;                                             
	unsigned char                                      UnknownData00[0x30];                                      
	TArray<class UObject*>                             AdditionalEventReceivers;                                 
	unsigned char                                      UnknownData01[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return pStaticClass;
	}


	void SetCanUpdateCameraCut(bool bEnable);
	static class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
};




class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	class AActor*                                      TransformOriginActor;                                     
	unsigned char                                      UnknownData01[0x8];                                       
	struct FTransform                                  TransformOrigin;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return pStaticClass;
	}

};




class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                         
	struct FLevelSequenceBindingReferences             BindingReferences;                                        
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequence");
		return pStaticClass;
	}

};




class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return pStaticClass;
	}

};




class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                               bUseBurnIn;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	struct FSoftClassPath                              BurnInClass;                                              
	class ULevelSequenceBurnInInitSettings*            Settings;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return pStaticClass;
	}

};




class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                         
	class ALevelSequenceActor*                         LevelSequenceActor;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return pStaticClass;
	}


	void SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
};


}

