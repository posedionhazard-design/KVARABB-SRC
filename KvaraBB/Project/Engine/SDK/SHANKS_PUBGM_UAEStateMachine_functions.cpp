
 
#include "../SDK.hpp"

namespace SDK
{







void UUAEStateMachineComponent::Start()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.Start");

	UUAEStateMachineComponent_Start_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUAEStateMachineComponent::SetTag(const struct FString& InTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.SetTag");

	UUAEStateMachineComponent_SetTag_Params params;
	params.InTag = InTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UUAEStateMachineComponent::OnTransientEvent__DelegateSignature(const struct FString& TransientEvent, const struct FString& CurrentState, const struct FString& TransientToState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction UAEStateMachine.UAEStateMachineComponent.OnTransientEvent__DelegateSignature");

	UUAEStateMachineComponent_OnTransientEvent__DelegateSignature_Params params;
	params.TransientEvent = TransientEvent;
	params.CurrentState = CurrentState;
	params.TransientToState = TransientToState;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UUAEStateMachineComponent::IsInState(const struct FString& StateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.IsInState");

	UUAEStateMachineComponent_IsInState_Params params;
	params.StateName = StateName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UUAEState* UUAEStateMachineComponent::GetCurrentState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.GetCurrentState");

	UUAEStateMachineComponent_GetCurrentState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UUAEStateMachineComponent::ForceDoEvent(const struct FString& EventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.ForceDoEvent");

	UUAEStateMachineComponent_ForceDoEvent_Params params;
	params.EventName = EventName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UUAEStateMachineComponent::Finish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.Finish");

	UUAEStateMachineComponent_Finish_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUAEStateMachineComponent::DoEvent(const struct FString& EventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.DoEvent");

	UUAEStateMachineComponent_DoEvent_Params params;
	params.EventName = EventName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UUAEStateMachineComponent::CanDoEvent(const struct FString& EventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEStateMachineComponent.CanDoEvent");

	UUAEStateMachineComponent_CanDoEvent_Params params;
	params.EventName = EventName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UUAEState::Update(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEState.Update");

	UUAEState_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUAEState::OnLeave(class UUAEState* TranitToState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEState.OnLeave");

	UUAEState_OnLeave_Params params;
	params.TranitToState = TranitToState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UUAEState::OnEnter(class UUAEState* PrevState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAEStateMachine.UAEState.OnEnter");

	UUAEState_OnEnter_Params params;
	params.PrevState = PrevState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

