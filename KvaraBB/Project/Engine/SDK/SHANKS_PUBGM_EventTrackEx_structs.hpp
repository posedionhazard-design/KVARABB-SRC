#pragma once


 
namespace SDK
{





enum class EXTQTEOperationArea : uint8_t
{
	EXTQTEOperationArea__Random    = 0,
	EXTQTEOperationArea__Left      = 1,
	EXTQTEOperationArea__Right     = 2,
	EXTQTEOperationArea__EXTQTEOperationArea_MAX = 3
};









struct FXTEventPayload
{
	struct FName                                       EventName;                                                
	struct FString                                     MsgName;                                                  
	struct FString                                     Param1;                                                   
	struct FString                                     Param2;                                                   
	struct FString                                     Param3;                                                   
	struct FString                                     Param4;                                                   
	struct FString                                     Param5;                                                   
	struct FString                                     Param6;                                                   
};



struct FMovieSceneXTEventSectionData
{
	TArray<float>                                      KeyTimes;                                                 
	TArray<struct FXTEventPayload>                     KeyValues;                                                
};



struct FMovieSceneXTEventSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneXTEventSectionData               EventData;                                                
	TArray<struct FMovieSceneObjectBindingID>          EventReceivers;                                           
	unsigned char                                      bFireEventsWhenForwards : 1;                              
	unsigned char                                      bFireEventsWhenBackwards : 1;                             
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FMovieSceneXTQTETemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneXTQTESection*                     Section;                                                  
};

}

