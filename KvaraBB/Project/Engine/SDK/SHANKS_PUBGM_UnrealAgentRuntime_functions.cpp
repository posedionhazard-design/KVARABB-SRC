
 
#include "../SDK.hpp"

namespace SDK
{









class USplineComponent* UPCGSplineTubeMeshComponent::ResolveSpline()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealAgentRuntime.PCGSplineTubeMeshComponent.ResolveSpline");

	UPCGSplineTubeMeshComponent_ResolveSpline_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UPCGSplineTubeMeshComponent::RefreshTubePhysicsCollision()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealAgentRuntime.PCGSplineTubeMeshComponent.RefreshTubePhysicsCollision");

	UPCGSplineTubeMeshComponent_RefreshTubePhysicsCollision_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPCGSplineTubeMeshComponent::RebuildTubeMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealAgentRuntime.PCGSplineTubeMeshComponent.RebuildTubeMesh");

	UPCGSplineTubeMeshComponent_RebuildTubeMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

