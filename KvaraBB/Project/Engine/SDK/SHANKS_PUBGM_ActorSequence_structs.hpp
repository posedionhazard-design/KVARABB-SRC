#pragma once


 
namespace SDK
{





enum class EActorSequenceObjectReferenceType : uint8_t
{
	EActorSequenceObjectReferenceType__ContextActor = 0,
	EActorSequenceObjectReferenceType__ExternalActor = 1,
	EActorSequenceObjectReferenceType__Component = 2,
	EActorSequenceObjectReferenceType__EActorSequenceObjectReferenceType_MAX = 3
};









struct FActorSequenceObjectReference
{
	EActorSequenceObjectReferenceType                  Type;                                                     
	unsigned char                                      UnknownData00[0x3];                                       
	struct FGuid                                       ActorId;                                                  
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     PathToComponent;                                          
};



struct FActorSequenceObjectReferences
{
	TArray<struct FActorSequenceObjectReference>       Array;                                                    
};



struct FActorSequenceObjectReferenceMap
{
	TArray<struct FGuid>                               BindingIds;                                               
	TArray<struct FActorSequenceObjectReferences>      References;                                               
};

}

