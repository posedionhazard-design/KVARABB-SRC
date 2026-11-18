#pragma once


 
namespace SDK
{






class ATestStatemachine : public AActor
{
public:
	class UUAEStateMachineComponent*                   UAEStateMachineComponent;                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAEStateMachine.TestStatemachine");
		return pStaticClass;
	}

};




class UUAEStateMachineComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBeforeTransientEvent;                                   
	struct FScriptMulticastDelegate                    OnAfterTransientEvent;                                    
	struct FString                                     Tag;                                                      
	TArray<class UUAEState*>                           States;                                                   
	TMap<struct FString, struct FUAEStateMachineTransition> Transitions;                                              
	struct FUAETransitionState                         StartState;                                               
	struct FUAETransitionState                         EndState;                                                 
	class UUAEState*                                   CurrentState;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAEStateMachine.UAEStateMachineComponent");
		return pStaticClass;
	}


	void Start();
	void SetTag(const struct FString& InTag);
	void OnTransientEvent__DelegateSignature(const struct FString& TransientEvent, const struct FString& CurrentState, const struct FString& TransientToState);
	bool IsInState(const struct FString& StateName);
	class UUAEState* GetCurrentState();
	void ForceDoEvent(const struct FString& EventName);
	void Finish();
	void DoEvent(const struct FString& EventName);
	bool CanDoEvent(const struct FString& EventName);
};




class UUAEState : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAEStateMachine.UAEState");
		return pStaticClass;
	}


	void Update(float DeltaTime);
	void OnLeave(class UUAEState* TranitToState);
	void OnEnter(class UUAEState* PrevState);
};


}

