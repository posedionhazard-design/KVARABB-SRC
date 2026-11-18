#pragma once


 
namespace SDK
{






struct FUAETransitionState
{
	struct FString                                     StateName;                                                
};



struct FUAEStateMachineTransition
{
	TArray<struct FUAETransitionState>                 TransiteFromStates;                                       
	struct FUAETransitionState                         TransitToState;                                           
	float                                              AutoFiredDelayTime;                                       
	bool                                               AutoFiredForcedTransit;                                   
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FUAEStatesGather
{
	TArray<class UUAEState*>                           States;                                                   
};

}

