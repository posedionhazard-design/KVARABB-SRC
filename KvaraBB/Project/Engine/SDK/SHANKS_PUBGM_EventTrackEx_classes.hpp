#pragma once


 
namespace SDK
{






class UMovieSceneXTEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                                  Events;                                                   
	struct FMovieSceneXTEventSectionData               EventData;                                                
	unsigned char                                      UnknownData00[0x88];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EventTrackEx.MovieSceneXTEventSection");
		return pStaticClass;
	}

};




class UMovieSceneXTEventTrack : public UMovieSceneNameableTrack
{
public:
	TArray<struct FMovieSceneObjectBindingID>          EventReceivers;                                           
	TArray<class UMovieSceneSection*>                  Sections;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EventTrackEx.MovieSceneXTEventTrack");
		return pStaticClass;
	}

};




class UMovieSceneXTQTESection : public UMovieSceneSection
{
public:
	struct FString                                     MsgName;                                                  
	TArray<float>                                      Times;                                                    
	EXTQTEOperationArea                                OperationArea;                                            
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EventTrackEx.MovieSceneXTQTESection");
		return pStaticClass;
	}

};




class UMovieSceneXTQTETrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EventTrackEx.MovieSceneXTQTETrack");
		return pStaticClass;
	}

};


}

