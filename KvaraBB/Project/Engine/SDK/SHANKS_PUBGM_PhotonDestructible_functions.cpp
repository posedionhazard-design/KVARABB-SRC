
 
#include "../SDK.hpp"

namespace SDK
{









void UPhotonDestructiblePuppet::TriggerPuppetEvent(int EventID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructiblePuppet.TriggerPuppetEvent");

	UPhotonDestructiblePuppet_TriggerPuppetEvent_Params params;
	params.EventID = EventID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPhotonDestructiblePuppetContainer::TriggerPuppetEvent(const struct FString& ObjectName, int EventID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructiblePuppetContainer.TriggerPuppetEvent");

	UPhotonDestructiblePuppetContainer_TriggerPuppetEvent_Params params;
	params.ObjectName = ObjectName;
	params.EventID = EventID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPhotonDestructiblePuppetMgr::Client_TriggerPuppetEvent(const struct FGuid& PuppetGUID, int EventID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructiblePuppetMgr.Client_TriggerPuppetEvent");

	UPhotonDestructiblePuppetMgr_Client_TriggerPuppetEvent_Params params;
	params.PuppetGUID = PuppetGUID;
	params.EventID = EventID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonDestructibleSurfaceComponent::Server_ProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Server_ProcessHit");

	UPhotonDestructibleSurfaceComponent_Server_ProcessHit_Params params;
	params.HitData = HitData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotonDestructibleSurfaceComponent::OnRep_SurfaceNetData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleSurfaceComponent.OnRep_SurfaceNetData");

	UPhotonDestructibleSurfaceComponent_OnRep_SurfaceNetData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonDestructibleSurfaceComponent::Client_OnProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleSurfaceComponent.Client_OnProcessHit");

	UPhotonDestructibleSurfaceComponent_Client_OnProcessHit_Params params;
	params.HitData = HitData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonDestructibleInstancedSurfaceComponent::Server_ProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Server_ProcessHit");

	UPhotonDestructibleInstancedSurfaceComponent_Server_ProcessHit_Params params;
	params.HitData = HitData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotonDestructibleInstancedSurfaceComponent::OnRep_SurfaceNetData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.OnRep_SurfaceNetData");

	UPhotonDestructibleInstancedSurfaceComponent_OnRep_SurfaceNetData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonDestructibleInstancedSurfaceComponent::Client_OnProcessHit(const struct FPhotonDestructibleSurfaceHitData& HitData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonDestructible.PhotonDestructibleInstancedSurfaceComponent.Client_OnProcessHit");

	UPhotonDestructibleInstancedSurfaceComponent_Client_OnProcessHit_Params params;
	params.HitData = HitData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

