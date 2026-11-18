
 
#include "../SDK.hpp"

namespace SDK
{









void ULatentDelegate::OnLatentCallback(int threadRef)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LatentDelegate.OnLatentCallback");

	ULatentDelegate_OnLatentCallback_Params params;
	params.threadRef = threadRef;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ALuaActor::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaActor.UnRegistLuaTick");

	ALuaActor_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ALuaActor::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaActor.RegistLuaTick");

	ALuaActor_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ULuaActorComponent::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaActorComponent.UnRegistLuaTick");

	ULuaActorComponent_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaActorComponent::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaActorComponent.RegistLuaTick");

	ULuaActorComponent_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ULuaDelegate::EventTrigger()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaDelegate.EventTrigger");

	ULuaDelegate_EventTrigger_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ULuaInstancedActorComponent::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaInstancedActorComponent.UnRegistLuaTick");

	ULuaInstancedActorComponent_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaInstancedActorComponent::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaInstancedActorComponent.RegistLuaTick");

	ULuaInstancedActorComponent_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ALuaLevelScriptActor::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaLevelScriptActor.UnRegistLuaTick");

	ALuaLevelScriptActor_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ALuaLevelScriptActor::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaLevelScriptActor.RegistLuaTick");

	ALuaLevelScriptActor_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ULuaOverrider::TriggerAnimNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverrider.TriggerAnimNotify");

	ULuaOverrider_TriggerAnimNotify_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaOverrider::InputVectorAxis(const struct FVector& AxisValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverrider.InputVectorAxis");

	ULuaOverrider_InputVectorAxis_Params params;
	params.AxisValue = AxisValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ULuaOverrider::InputTouch(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverrider.InputTouch");

	ULuaOverrider_InputTouch_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaOverrider::InputGesture(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverrider.InputGesture");

	ULuaOverrider_InputGesture_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaOverrider::InputAxis(float AxisValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverrider.InputAxis");

	ULuaOverrider_InputAxis_Params params;
	params.AxisValue = AxisValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaOverrider::InputAction(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverrider.InputAction");

	ULuaOverrider_InputAction_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString ULuaOverriderInterface::GetLuaFilePath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverriderInterface.GetLuaFilePath");

	ULuaOverriderInterface_GetLuaFilePath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ULuaPatchRPCComponent::ServerUnreliable_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaPatchRPCComponent.ServerUnreliable_LuaPatchRPC");

	ULuaPatchRPCComponent_ServerUnreliable_LuaPatchRPC_Params params;
	params.Frame = Frame;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaPatchRPCComponent::Server_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaPatchRPCComponent.Server_LuaPatchRPC");

	ULuaPatchRPCComponent_Server_LuaPatchRPC_Params params;
	params.Frame = Frame;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaPatchRPCComponent::MulticastUnreliable_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaPatchRPCComponent.MulticastUnreliable_LuaPatchRPC");

	ULuaPatchRPCComponent_MulticastUnreliable_LuaPatchRPC_Params params;
	params.Frame = Frame;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaPatchRPCComponent::MulticastPerConnectionUnreliable_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaPatchRPCComponent.MulticastPerConnectionUnreliable_LuaPatchRPC");

	ULuaPatchRPCComponent_MulticastPerConnectionUnreliable_LuaPatchRPC_Params params;
	params.Frame = Frame;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaPatchRPCComponent::MulticastPerConnection_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaPatchRPCComponent.MulticastPerConnection_LuaPatchRPC");

	ULuaPatchRPCComponent_MulticastPerConnection_LuaPatchRPC_Params params;
	params.Frame = Frame;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaPatchRPCComponent::Multicast_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaPatchRPCComponent.Multicast_LuaPatchRPC");

	ULuaPatchRPCComponent_Multicast_LuaPatchRPC_Params params;
	params.Frame = Frame;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaPatchRPCComponent::ClientUnreliable_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaPatchRPCComponent.ClientUnreliable_LuaPatchRPC");

	ULuaPatchRPCComponent_ClientUnreliable_LuaPatchRPC_Params params;
	params.Frame = Frame;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ULuaPatchRPCComponent::Client_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaPatchRPCComponent.Client_LuaPatchRPC");

	ULuaPatchRPCComponent_Client_LuaPatchRPC_Params params;
	params.Frame = Frame;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









struct FString USluaBlueprintLibrary::GetStringFromVar(const struct FSluaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.GetStringFromVar");

	USluaBlueprintLibrary_GetStringFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UObject* USluaBlueprintLibrary::GetObjectFromVar(const struct FSluaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.GetObjectFromVar");

	USluaBlueprintLibrary_GetObjectFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









float USluaBlueprintLibrary::GetNumberFromVar(const struct FSluaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.GetNumberFromVar");

	USluaBlueprintLibrary_GetNumberFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









int USluaBlueprintLibrary::GetIntFromVar(const struct FSluaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.GetIntFromVar");

	USluaBlueprintLibrary_GetIntFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool USluaBlueprintLibrary::GetBoolFromVar(const struct FSluaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.GetBoolFromVar");

	USluaBlueprintLibrary_GetBoolFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FSluaBPVar USluaBlueprintLibrary::CreateVarFromString(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.CreateVarFromString");

	USluaBlueprintLibrary_CreateVarFromString_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FSluaBPVar USluaBlueprintLibrary::CreateVarFromObject(class UObject* WorldContextObject, class UObject* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.CreateVarFromObject");

	USluaBlueprintLibrary_CreateVarFromObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FSluaBPVar USluaBlueprintLibrary::CreateVarFromNumber(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.CreateVarFromNumber");

	USluaBlueprintLibrary_CreateVarFromNumber_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FSluaBPVar USluaBlueprintLibrary::CreateVarFromInt(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.CreateVarFromInt");

	USluaBlueprintLibrary_CreateVarFromInt_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FSluaBPVar USluaBlueprintLibrary::CreateVarFromBool(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.CreateVarFromBool");

	USluaBlueprintLibrary_CreateVarFromBool_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











struct FSluaBPVar USluaBlueprintLibrary::CallToLuaWithArgs(class UObject* WorldContextObject, const struct FString& FunctionName, TArray<struct FSluaBPVar> Args, const struct FString& StateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.CallToLuaWithArgs");

	USluaBlueprintLibrary_CallToLuaWithArgs_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FunctionName = FunctionName;
	params.Args = Args;
	params.StateName = StateName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FSluaBPVar USluaBlueprintLibrary::CallToLua(class UObject* WorldContextObject, const struct FString& FunctionName, const struct FString& StateName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.SluaBlueprintLibrary.CallToLua");

	USluaBlueprintLibrary_CallToLua_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FunctionName = FunctionName;
	params.StateName = StateName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

