#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UUAEStateMachineComponent_Start_Params
{
};


struct UUAEStateMachineComponent_SetTag_Params
{
	struct FString                                     InTag;                                                    
};


struct UUAEStateMachineComponent_OnTransientEvent__DelegateSignature_Params
{
	struct FString                                     TransientEvent;                                           
	struct FString                                     CurrentState;                                             
	struct FString                                     TransientToState;                                         
};


struct UUAEStateMachineComponent_IsInState_Params
{
	struct FString                                     StateName;                                                
	bool                                               ReturnValue;                                              
};


struct UUAEStateMachineComponent_GetCurrentState_Params
{
	class UUAEState*                                   ReturnValue;                                              
};


struct UUAEStateMachineComponent_ForceDoEvent_Params
{
	struct FString                                     EventName;                                                
};


struct UUAEStateMachineComponent_Finish_Params
{
};


struct UUAEStateMachineComponent_DoEvent_Params
{
	struct FString                                     EventName;                                                
};


struct UUAEStateMachineComponent_CanDoEvent_Params
{
	struct FString                                     EventName;                                                
	bool                                               ReturnValue;                                              
};


struct UUAEState_Update_Params
{
	float                                              DeltaTime;                                                
};


struct UUAEState_OnLeave_Params
{
	class UUAEState*                                   TranitToState;                                            
};


struct UUAEState_OnEnter_Params
{
	class UUAEState*                                   PrevState;                                                
};

}

