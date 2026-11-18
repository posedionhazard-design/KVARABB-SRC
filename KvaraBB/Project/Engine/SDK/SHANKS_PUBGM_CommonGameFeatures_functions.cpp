
 
#include "../SDK.hpp"

namespace SDK
{











void UActorRepControlComponent::ToggleGroupedRepControlByUID(int64_t UID, int ControlMark, int RepControlGroup)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonGameFeatures.ActorRepControlComponent.ToggleGroupedRepControlByUID");

	UActorRepControlComponent_ToggleGroupedRepControlByUID_Params params;
	params.UID = UID;
	params.ControlMark = ControlMark;
	params.RepControlGroup = RepControlGroup;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UActorRepControlComponent::ShouldBlockRepByUID(int64_t UID, int RepControlGroup)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonGameFeatures.ActorRepControlComponent.ShouldBlockRepByUID");

	UActorRepControlComponent_ShouldBlockRepByUID_Params params;
	params.UID = UID;
	params.RepControlGroup = RepControlGroup;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UActorRepControlComponent::GetControlGroupData(int RepControlGroup, struct FRepControlGroupData* OutData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonGameFeatures.ActorRepControlComponent.GetControlGroupData");

	UActorRepControlComponent_GetControlGroupData_Params params;
	params.RepControlGroup = RepControlGroup;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;

	return params.ReturnValue;
}










bool ARepControlActorBase::IsNetRelevantForCustomCheck(class AActor* RealViewer, class AActor* ViewTarget, const struct FVector& SrcLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CommonGameFeatures.RepControlActorBase.IsNetRelevantForCustomCheck");

	ARepControlActorBase_IsNetRelevantForCustomCheck_Params params;
	params.RealViewer = RealViewer;
	params.ViewTarget = ViewTarget;
	params.SrcLocation = SrcLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

