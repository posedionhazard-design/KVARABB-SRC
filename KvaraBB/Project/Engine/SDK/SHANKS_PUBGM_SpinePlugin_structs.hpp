#pragma once


 
namespace SDK
{






struct FSpineAnimationStateMixData
{
	struct FString                                     From;                                                     
	struct FString                                     To;                                                       
	float                                              Mix;                                                      
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FSpineEvent
{
	struct FString                                     Name;                                                     
	struct FString                                     StringValue;                                              
	int                                                IntValue;                                                 
	float                                              FloatValue;                                               
	float                                              Time;                                                     
	unsigned char                                      UnknownData00[0x4];                                       
};

}

