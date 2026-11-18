
 
#include "../SDK.hpp"

namespace SDK
{









void AActorEditorActor::SetLargeDataContent(TArray<unsigned char> NewContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorActor.SetLargeDataContent");

	AActorEditorActor_SetLargeDataContent_Params params;
	params.NewContent = NewContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AActorEditorActor::OnRep_LargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorActor.OnRep_LargeDataContent");

	AActorEditorActor_OnRep_LargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<unsigned char> AActorEditorActor::GetLargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorActor.GetLargeDataContent");

	AActorEditorActor_GetLargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}













float AActorEditorActor::BPTakeDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, const struct FHitResult& HitResult, class ULuaDamageInfo* LuaDamageInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorActor.BPTakeDamage");

	AActorEditorActor_BPTakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.HitResult = HitResult;
	params.LuaDamageInfo = LuaDamageInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UAIPerceptionComponent* AActorEditorAIController::SetupAIPerception(const struct FActorEditorAIPerceptionSetup& Setup)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.SetupAIPerception");

	AActorEditorAIController_SetupAIPerception_Params params;
	params.Setup = Setup;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool AActorEditorAIController::SetPerceptionEnabled(bool bEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.SetPerceptionEnabled");

	AActorEditorAIController_SetPerceptionEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool AActorEditorAIController::SetPerceptionConfig(const struct FActorEditorAISightConfig& InConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.SetPerceptionConfig");

	AActorEditorAIController_SetPerceptionConfig_Params params;
	params.InConfig = InConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void AActorEditorAIController::SetLargeDataContent(TArray<unsigned char> NewContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.SetLargeDataContent");

	AActorEditorAIController_SetLargeDataContent_Params params;
	params.NewContent = NewContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AActorEditorAIController::OnRep_LargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.OnRep_LargeDataContent");

	AActorEditorAIController_OnRep_LargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void AActorEditorAIController::OnReceiveHandleAITargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.OnReceiveHandleAITargetPerceptionUpdated");

	AActorEditorAIController_OnReceiveHandleAITargetPerceptionUpdated_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AActorEditorAIController::OnReceiveHandleAIPerceptionUpdated(TArray<class AActor*> UpdatedActors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.OnReceiveHandleAIPerceptionUpdated");

	AActorEditorAIController_OnReceiveHandleAIPerceptionUpdated_Params params;
	params.UpdatedActors = UpdatedActors;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool AActorEditorAIController::HasReachedLocation(const struct FVector& Location, float Radius, bool IsNavigationDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.HasReachedLocation");

	AActorEditorAIController_HasReachedLocation_Params params;
	params.Location = Location;
	params.Radius = Radius;
	params.IsNavigationDistance = IsNavigationDistance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool AActorEditorAIController::HasReachedActor(class AActor* Target, float Radius, bool IsNavigationDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.HasReachedActor");

	AActorEditorAIController_HasReachedActor_Params params;
	params.Target = Target;
	params.Radius = Radius;
	params.IsNavigationDistance = IsNavigationDistance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool AActorEditorAIController::HasActiveStimulus(class AActor* Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.HasActiveStimulus");

	AActorEditorAIController_HasActiveStimulus_Params params;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void AActorEditorAIController::HandleAITargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.HandleAITargetPerceptionUpdated");

	AActorEditorAIController_HandleAITargetPerceptionUpdated_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AActorEditorAIController::HandleAIPerceptionUpdated(TArray<class AActor*> UpdatedActors)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.HandleAIPerceptionUpdated");

	AActorEditorAIController_HandleAIPerceptionUpdated_Params params;
	params.UpdatedActors = UpdatedActors;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool AActorEditorAIController::GetPerceptionConfig(struct FActorEditorAISightConfig* OutConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.GetPerceptionConfig");

	AActorEditorAIController_GetPerceptionConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutConfig != nullptr)
		*OutConfig = params.OutConfig;

	return params.ReturnValue;
}







TArray<unsigned char> AActorEditorAIController::GetLargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.GetLargeDataContent");

	AActorEditorAIController_GetLargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AActorEditorAIController::GetIsMoving()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.GetIsMoving");

	AActorEditorAIController_GetIsMoving_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<class AActor*> AActorEditorAIController::GetCurrentlyPerceivedActors(class UClass* SenseClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAIController.GetCurrentlyPerceivedActors");

	AActorEditorAIController_GetCurrentlyPerceivedActors_Params params;
	params.SenseClass = SenseClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UActorEditorAnimInstanceBase::ClearAnimReferences()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorAnimInstanceBase.ClearAnimReferences");

	UActorEditorAnimInstanceBase_ClearAnimReferences_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AActorEditorCharacter::SetLargeDataContent(TArray<unsigned char> NewContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorCharacter.SetLargeDataContent");

	AActorEditorCharacter_SetLargeDataContent_Params params;
	params.NewContent = NewContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AActorEditorCharacter::OnRep_LargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorCharacter.OnRep_LargeDataContent");

	AActorEditorCharacter_OnRep_LargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<unsigned char> AActorEditorCharacter::GetLargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorCharacter.GetLargeDataContent");

	AActorEditorCharacter_GetLargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}













float AActorEditorCharacter::BPTakeDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, const struct FHitResult& HitResult, class ULuaDamageInfo* LuaDamageInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorCharacter.BPTakeDamage");

	AActorEditorCharacter_BPTakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.HitResult = HitResult;
	params.LuaDamageInfo = LuaDamageInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UActorEditorCharacterMovementComponent::OnRep_CharacterMovementSyncData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorCharacterMovementComponent.OnRep_CharacterMovementSyncData");

	UActorEditorCharacterMovementComponent_OnRep_CharacterMovementSyncData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UActorEditorComponentBlueprintLibrary::UnregisterComponent(class UActorComponent* InComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.UnregisterComponent");

	UActorEditorComponentBlueprintLibrary_UnregisterComponent_Params params;
	params.InComponent = InComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UActorEditorComponentBlueprintLibrary::UnRegisterActorPerceivable(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.UnRegisterActorPerceivable");

	UActorEditorComponentBlueprintLibrary_UnRegisterActorPerceivable_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UActorEditorComponentBlueprintLibrary::SetWidgetOpacityFromTexture(class UWidgetComponent* InComp, float Opacity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetWidgetOpacityFromTexture");

	UActorEditorComponentBlueprintLibrary_SetWidgetOpacityFromTexture_Params params;
	params.InComp = InComp;
	params.Opacity = Opacity;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UActorEditorComponentBlueprintLibrary::SetWidgetDrawAtDesiredSize(class UWidgetComponent* InComp, bool bDrawAtDesiredSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetWidgetDrawAtDesiredSize");

	UActorEditorComponentBlueprintLibrary_SetWidgetDrawAtDesiredSize_Params params;
	params.InComp = InComp;
	params.bDrawAtDesiredSize = bDrawAtDesiredSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UActorEditorComponentBlueprintLibrary::SetParticleSystemAutoDestroy(class UParticleSystemComponent* InComp, bool bAutoDestroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetParticleSystemAutoDestroy");

	UActorEditorComponentBlueprintLibrary_SetParticleSystemAutoDestroy_Params params;
	params.InComp = InComp;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UActorEditorComponentBlueprintLibrary::SetNetAddressable(class UActorComponent* InComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetNetAddressable");

	UActorEditorComponentBlueprintLibrary_SetNetAddressable_Params params;
	params.InComponent = InComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UActorEditorComponentBlueprintLibrary::SetMobility(class USceneComponent* InSceneComp, TEnumAsByte<EComponentMobility> NewMobility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetMobility");

	UActorEditorComponentBlueprintLibrary_SetMobility_Params params;
	params.InSceneComp = InSceneComp;
	params.NewMobility = NewMobility;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UActorEditorComponentBlueprintLibrary::SetComponentAutoActivate(class UActorComponent* InComponent, bool bAutoActivate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetComponentAutoActivate");

	UActorEditorComponentBlueprintLibrary_SetComponentAutoActivate_Params params;
	params.InComponent = InComponent;
	params.bAutoActivate = bAutoActivate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UActorEditorComponentBlueprintLibrary::SetActorRootComponent(class AActor* InActor, class USceneComponent* NewRootComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.SetActorRootComponent");

	UActorEditorComponentBlueprintLibrary_SetActorRootComponent_Params params;
	params.InActor = InActor;
	params.NewRootComponent = NewRootComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UActorEditorComponentBlueprintLibrary::ReregisterComponent(class UActorComponent* InComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.ReregisterComponent");

	UActorEditorComponentBlueprintLibrary_ReregisterComponent_Params params;
	params.InComponent = InComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UActorEditorComponentBlueprintLibrary::RegisterComponent(class UActorComponent* InComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.RegisterComponent");

	UActorEditorComponentBlueprintLibrary_RegisterComponent_Params params;
	params.InComponent = InComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UActorEditorComponentBlueprintLibrary::RegisterActorPerceivable(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.RegisterActorPerceivable");

	UActorEditorComponentBlueprintLibrary_RegisterActorPerceivable_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UActorEditorComponentBlueprintLibrary::IsSimulatingPhysics(class UPrimitiveComponent* InComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.IsSimulatingPhysics");

	UActorEditorComponentBlueprintLibrary_IsSimulatingPhysics_Params params;
	params.InComp = InComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UActorEditorComponentBlueprintLibrary::IsComponentRegistered(class UActorComponent* InComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.IsComponentRegistered");

	UActorEditorComponentBlueprintLibrary_IsComponentRegistered_Params params;
	params.InComponent = InComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UActorEditorComponentBlueprintLibrary::GetParticleSystemAutoDestroy(class UParticleSystemComponent* InComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetParticleSystemAutoDestroy");

	UActorEditorComponentBlueprintLibrary_GetParticleSystemAutoDestroy_Params params;
	params.InComp = InComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









float UActorEditorComponentBlueprintLibrary::GetFloatParameter(class UParticleSystemComponent* InComp, const struct FName& InName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetFloatParameter");

	UActorEditorComponentBlueprintLibrary_GetFloatParameter_Params params;
	params.InComp = InComp;
	params.InName = InName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










void UActorEditorComponentBlueprintLibrary::GetComponentBounds(class USceneComponent* InSceneComp, struct FVector* Origin, struct FVector* BoxExtent, float* SphereRadius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetComponentBounds");

	UActorEditorComponentBlueprintLibrary_GetComponentBounds_Params params;
	params.InSceneComp = InSceneComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
	if (SphereRadius != nullptr)
		*SphereRadius = params.SphereRadius;
}








TEnumAsByte<ECollisionTraceFlag> UActorEditorComponentBlueprintLibrary::GetCollisionTraceFlag(class UPrimitiveComponent* InComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetCollisionTraceFlag");

	UActorEditorComponentBlueprintLibrary_GetCollisionTraceFlag_Params params;
	params.InComp = InComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FTransform UActorEditorComponentBlueprintLibrary::GetBoneTransform(class USkinnedMeshComponent* InComp, int BoneIdx, const struct FTransform& LocalToWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetBoneTransform");

	UActorEditorComponentBlueprintLibrary_GetBoneTransform_Params params;
	params.InComp = InComp;
	params.BoneIdx = BoneIdx;
	params.LocalToWorld = LocalToWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










struct FVector UActorEditorComponentBlueprintLibrary::GetBoneLocation(class USkinnedMeshComponent* InComp, const struct FName& BoneName, TEnumAsByte<EBoneSpaces> Space)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetBoneLocation");

	UActorEditorComponentBlueprintLibrary_GetBoneLocation_Params params;
	params.InComp = InComp;
	params.BoneName = BoneName;
	params.Space = Space;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class USceneComponent* UActorEditorComponentBlueprintLibrary::GetActorRootComponent(class AActor* InActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.GetActorRootComponent");

	UActorEditorComponentBlueprintLibrary_GetActorRootComponent_Params params;
	params.InActor = InActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UActorEditorComponentBlueprintLibrary::ChangeRootComponent(class AActor* InActor, class USceneComponent* NewRootComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorComponentBlueprintLibrary.ChangeRootComponent");

	UActorEditorComponentBlueprintLibrary_ChangeRootComponent_Params params;
	params.InActor = InActor;
	params.NewRootComponent = NewRootComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void AActorEditorDecoratorActor::SetLargeDataContent(TArray<unsigned char> NewContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorDecoratorActor.SetLargeDataContent");

	AActorEditorDecoratorActor_SetLargeDataContent_Params params;
	params.NewContent = NewContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AActorEditorDecoratorActor::OnRep_LargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorDecoratorActor.OnRep_LargeDataContent");

	AActorEditorDecoratorActor_OnRep_LargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<unsigned char> AActorEditorDecoratorActor::GetLargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorDecoratorActor.GetLargeDataContent");

	AActorEditorDecoratorActor_GetLargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UActorEditorDisableTransformReplicationInterface::SetDisableTransformReplication(bool bInDisable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorDisableTransformReplicationInterface.SetDisableTransformReplication");

	UActorEditorDisableTransformReplicationInterface_SetDisableTransformReplication_Params params;
	params.bInDisable = bInDisable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







int UActorEditorParticleSystemComponent::GetEmitterInstanceNum()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorParticleSystemComponent.GetEmitterInstanceNum");

	UActorEditorParticleSystemComponent_GetEmitterInstanceNum_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void AActorEditorPawn::SetLargeDataContent(TArray<unsigned char> NewContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorPawn.SetLargeDataContent");

	AActorEditorPawn_SetLargeDataContent_Params params;
	params.NewContent = NewContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AActorEditorPawn::OnRep_LargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorPawn.OnRep_LargeDataContent");

	AActorEditorPawn_OnRep_LargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<unsigned char> AActorEditorPawn::GetLargeDataContent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorPawn.GetLargeDataContent");

	AActorEditorPawn_GetLargeDataContent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}













float AActorEditorPawn::BPTakeDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, const struct FHitResult& HitResult, class ULuaDamageInfo* LuaDamageInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorPawn.BPTakeDamage");

	AActorEditorPawn_BPTakeDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.HitResult = HitResult;
	params.LuaDamageInfo = LuaDamageInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UActorEditorSimpleCharacterMovementComponent::OnRep_CharacterMovementSyncData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorSimpleCharacterMovementComponent.OnRep_CharacterMovementSyncData");

	UActorEditorSimpleCharacterMovementComponent_OnRep_CharacterMovementSyncData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UActorEditorSkeletalMeshComponent::SetSkeletalModelPreset(const struct FString& ModePresetIDStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorSkeletalMeshComponent.SetSkeletalModelPreset");

	UActorEditorSkeletalMeshComponent_SetSkeletalModelPreset_Params params;
	params.ModePresetIDStr = ModePresetIDStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UActorEditorSkeletalMeshComponent::PlaySkeletalAnimationPreset(const struct FString& AnimationPresetIDStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorSkeletalMeshComponent.PlaySkeletalAnimationPreset");

	UActorEditorSkeletalMeshComponent_PlaySkeletalAnimationPreset_Params params;
	params.AnimationPresetIDStr = AnimationPresetIDStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UActorEditorStaticMeshComponent::SetStaticMeshPath(const struct FString& InMeshPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorStaticMeshComponent.SetStaticMeshPath");

	UActorEditorStaticMeshComponent_SetStaticMeshPath_Params params;
	params.InMeshPath = InMeshPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UActorEditorStaticMeshComponent::OnRep_StaticMeshPath(const struct FString& OldPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GenericActorEditor.ActorEditorStaticMeshComponent.OnRep_StaticMeshPath");

	UActorEditorStaticMeshComponent_OnRep_StaticMeshPath_Params params;
	params.OldPath = OldPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

