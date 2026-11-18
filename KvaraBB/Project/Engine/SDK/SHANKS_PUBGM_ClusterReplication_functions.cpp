
 
#include "../SDK.hpp"

namespace SDK
{









void UClusterReplicationSubsystem::SetAutoClearCache(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClusterReplication.ClusterReplicationSubsystem.SetAutoClearCache");

	UClusterReplicationSubsystem_SetAutoClearCache_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UClusterReplicationSubsystem::SetAutoCache(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClusterReplication.ClusterReplicationSubsystem.SetAutoCache");

	UClusterReplicationSubsystem_SetAutoCache_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UClusterReplicationSubsystem::RemoveAllCachedObjectData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClusterReplication.ClusterReplicationSubsystem.RemoveAllCachedObjectData");

	UClusterReplicationSubsystem_RemoveAllCachedObjectData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

