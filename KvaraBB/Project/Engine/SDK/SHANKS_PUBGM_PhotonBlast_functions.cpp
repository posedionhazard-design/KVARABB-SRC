
 
#include "../SDK.hpp"

namespace SDK
{







void UPhotonReplicationStaticMeshComponent::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegistLuaTick");

	UPhotonReplicationStaticMeshComponent_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotonReplicationStaticMeshComponent::UnRegisterFromCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.UnRegisterFromCluster");

	UPhotonReplicationStaticMeshComponent_UnRegisterFromCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationStaticMeshComponent::SetMoveable(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetMoveable");

	UPhotonReplicationStaticMeshComponent_SetMoveable_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationStaticMeshComponent::SetClusterUniqueID(int InClusterID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterUniqueID");

	UPhotonReplicationStaticMeshComponent_SetClusterUniqueID_Params params;
	params.InClusterID = InClusterID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationStaticMeshComponent::SetClusterEntityState(EClusterEntityState EntityState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.SetClusterEntityState");

	UPhotonReplicationStaticMeshComponent_SetClusterEntityState_Params params;
	params.EntityState = EntityState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationStaticMeshComponent::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegistLuaTick");

	UPhotonReplicationStaticMeshComponent_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotonReplicationStaticMeshComponent::RegisterToCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.RegisterToCluster");

	UPhotonReplicationStaticMeshComponent_RegisterToCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationStaticMeshComponent::MarkPropDirty(int PropIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationStaticMeshComponent.MarkPropDirty");

	UPhotonReplicationStaticMeshComponent_MarkPropDirty_Params params;
	params.PropIndex = PropIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonDestructibleMeshComponent::SetupFragmentsMaxHp(float Hp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.SetupFragmentsMaxHp");

	UPhotonDestructibleMeshComponent_SetupFragmentsMaxHp_Params params;
	params.Hp = Hp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonDestructibleMeshComponent::SetServerDamagedDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.SetServerDamagedDelegate");

	UPhotonDestructibleMeshComponent_SetServerDamagedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPhotonDestructibleMeshComponent::SetFracturedMesh(class UPhotonDestructibleMesh* InFracturedMesh, bool Force)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.SetFracturedMesh");

	UPhotonDestructibleMeshComponent_SetFracturedMesh_Params params;
	params.InFracturedMesh = InFracturedMesh;
	params.Force = Force;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UPhotonDestructibleMeshComponent::Server_OnComponentHitAction(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.Server_OnComponentHitAction");

	UPhotonDestructibleMeshComponent_Server_OnComponentHitAction_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












bool UPhotonDestructibleMeshComponent::Server_DamageFragmentsByRadius(const struct FVector4& WorldImpactVelocityAndRotateStrength, const struct FVector4& WorldImpactPointAndSpreadStrength, float Hp, float Radius, bool Attenuation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByRadius");

	UPhotonDestructibleMeshComponent_Server_DamageFragmentsByRadius_Params params;
	params.WorldImpactVelocityAndRotateStrength = WorldImpactVelocityAndRotateStrength;
	params.WorldImpactPointAndSpreadStrength = WorldImpactPointAndSpreadStrength;
	params.Hp = Hp;
	params.Radius = Radius;
	params.Attenuation = Attenuation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











bool UPhotonDestructibleMeshComponent::Server_DamageFragmentsByHp(TArray<int> FragmentsIndex, TArray<float> Hp, const struct FVector4& WorldImpactPointAndSpreadStrength, const struct FVector4& WorldImpactVelocityAndRotateSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.Server_DamageFragmentsByHp");

	UPhotonDestructibleMeshComponent_Server_DamageFragmentsByHp_Params params;
	params.FragmentsIndex = FragmentsIndex;
	params.Hp = Hp;
	params.WorldImpactPointAndSpreadStrength = WorldImpactPointAndSpreadStrength;
	params.WorldImpactVelocityAndRotateSpeed = WorldImpactVelocityAndRotateSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UPhotonDestructibleMeshComponent::OnRep_SlideData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_SlideData");

	UPhotonDestructibleMeshComponent_OnRep_SlideData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotonDestructibleMeshComponent::OnRep_ImpactData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_ImpactData");

	UPhotonDestructibleMeshComponent_OnRep_ImpactData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotonDestructibleMeshComponent::OnRep_FragmentsState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.OnRep_FragmentsState");

	UPhotonDestructibleMeshComponent_OnRep_FragmentsState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UPhotonDestructibleMeshComponent::IsFragmentCanDestroy(int FragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanDestroy");

	UPhotonDestructibleMeshComponent_IsFragmentCanDestroy_Params params;
	params.FragmentItemIndex = FragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UPhotonDestructibleMeshComponent::IsFragmentCanBeDamaged(int FragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.IsFragmentCanBeDamaged");

	UPhotonDestructibleMeshComponent_IsFragmentCanBeDamaged_Params params;
	params.FragmentItemIndex = FragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UPhotonDestructibleMesh* UPhotonDestructibleMeshComponent::GetPhotonDestructibleMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetPhotonDestructibleMesh");

	UPhotonDestructibleMeshComponent_GetPhotonDestructibleMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UPhotonDestructibleMeshComponent::GetFragmentTransform(int FragmentIndex, bool WorldSpace, struct FTransform* OutTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentTransform");

	UPhotonDestructibleMeshComponent_GetFragmentTransform_Params params;
	params.FragmentIndex = FragmentIndex;
	params.WorldSpace = WorldSpace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}









bool UPhotonDestructibleMeshComponent::GetFragmentsWorldPosition(int FragmentIndex, struct FVector* FragmentPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsWorldPosition");

	UPhotonDestructibleMeshComponent_GetFragmentsWorldPosition_Params params;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FragmentPosition != nullptr)
		*FragmentPosition = params.FragmentPosition;

	return params.ReturnValue;
}









bool UPhotonDestructibleMeshComponent::GetFragmentsNotDamaged(bool IsReturnNotDestroyedFragments, TArray<int>* Fragments)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsNotDamaged");

	UPhotonDestructibleMeshComponent_GetFragmentsNotDamaged_Params params;
	params.IsReturnNotDestroyedFragments = IsReturnNotDestroyedFragments;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Fragments != nullptr)
		*Fragments = params.Fragments;

	return params.ReturnValue;
}








bool UPhotonDestructibleMeshComponent::GetFragmentsDamaged(TArray<int>* Fragments)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsDamaged");

	UPhotonDestructibleMeshComponent_GetFragmentsDamaged_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Fragments != nullptr)
		*Fragments = params.Fragments;

	return params.ReturnValue;
}












bool UPhotonDestructibleMeshComponent::GetFragmentsByRadius(const struct FVector& HitPoint, float Radius, int DamageType, TArray<int>* FragmentsIndex, TArray<float>* ImpactDistance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentsByRadius");

	UPhotonDestructibleMeshComponent_GetFragmentsByRadius_Params params;
	params.HitPoint = HitPoint;
	params.Radius = Radius;
	params.DamageType = DamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FragmentsIndex != nullptr)
		*FragmentsIndex = params.FragmentsIndex;
	if (ImpactDistance != nullptr)
		*ImpactDistance = params.ImpactDistance;

	return params.ReturnValue;
}







int UPhotonDestructibleMeshComponent::GetFragmentItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentItemCount");

	UPhotonDestructibleMeshComponent_GetFragmentItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










bool UPhotonDestructibleMeshComponent::GetFragmentBounds(int FragmentIndex, bool WorldSpace, struct FBox* OutBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFragmentBounds");

	UPhotonDestructibleMeshComponent_GetFragmentBounds_Params params;
	params.FragmentIndex = FragmentIndex;
	params.WorldSpace = WorldSpace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBox != nullptr)
		*OutBox = params.OutBox;

	return params.ReturnValue;
}







class UPhotonFracturedMesh* UPhotonDestructibleMeshComponent::GetFracturedMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.GetFracturedMesh");

	UPhotonDestructibleMeshComponent_GetFracturedMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UPhotonDestructibleMeshComponent::ClientGetFragmentsNotDamaged(bool IsReturnNotDestroyedFragments, TArray<int>* Fragments)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.ClientGetFragmentsNotDamaged");

	UPhotonDestructibleMeshComponent_ClientGetFragmentsNotDamaged_Params params;
	params.IsReturnNotDestroyedFragments = IsReturnNotDestroyedFragments;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Fragments != nullptr)
		*Fragments = params.Fragments;

	return params.ReturnValue;
}








bool UPhotonDestructibleMeshComponent::ClientGetFragmentsDamaged(TArray<int>* Fragments)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.ClientGetFragmentsDamaged");

	UPhotonDestructibleMeshComponent_ClientGetFragmentsDamaged_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Fragments != nullptr)
		*Fragments = params.Fragments;

	return params.ReturnValue;
}








void UPhotonDestructibleMeshComponent::ClientDamageAndInitalFragments(TArray<int> DamagedFragmentItemIndex, TArray<int> InitialFragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonDestructibleMeshComponent.ClientDamageAndInitalFragments");

	UPhotonDestructibleMeshComponent_ClientDamageAndInitalFragments_Params params;
	params.DamagedFragmentItemIndex = DamagedFragmentItemIndex;
	params.InitialFragmentItemIndex = InitialFragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotonReplicationInstancedStaticMeshComponent::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegistLuaTick");

	UPhotonReplicationInstancedStaticMeshComponent_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotonReplicationInstancedStaticMeshComponent::UnRegisterFromCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.UnRegisterFromCluster");

	UPhotonReplicationInstancedStaticMeshComponent_UnRegisterFromCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationInstancedStaticMeshComponent::SetMoveable(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetMoveable");

	UPhotonReplicationInstancedStaticMeshComponent_SetMoveable_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationInstancedStaticMeshComponent::SetClusterUniqueID(int InClusterID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterUniqueID");

	UPhotonReplicationInstancedStaticMeshComponent_SetClusterUniqueID_Params params;
	params.InClusterID = InClusterID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationInstancedStaticMeshComponent::SetClusterEntityState(EClusterEntityState EntityState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.SetClusterEntityState");

	UPhotonReplicationInstancedStaticMeshComponent_SetClusterEntityState_Params params;
	params.EntityState = EntityState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationInstancedStaticMeshComponent::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegistLuaTick");

	UPhotonReplicationInstancedStaticMeshComponent_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotonReplicationInstancedStaticMeshComponent::RegisterToCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.RegisterToCluster");

	UPhotonReplicationInstancedStaticMeshComponent_RegisterToCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationInstancedStaticMeshComponent::MarkPropDirty(int PropIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationInstancedStaticMeshComponent.MarkPropDirty");

	UPhotonReplicationInstancedStaticMeshComponent_MarkPropDirty_Params params;
	params.PropIndex = PropIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonInstancedDestructibleMeshComponent::SetupFragmentsMaxHp(float Hp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetupFragmentsMaxHp");

	UPhotonInstancedDestructibleMeshComponent_SetupFragmentsMaxHp_Params params;
	params.Hp = Hp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonInstancedDestructibleMeshComponent::SetServerDamagedDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetServerDamagedDelegate");

	UPhotonInstancedDestructibleMeshComponent_SetServerDamagedDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonInstancedDestructibleMeshComponent::SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetPhysMaterialOverride");

	UPhotonInstancedDestructibleMeshComponent_SetPhysMaterialOverride_Params params;
	params.NewPhysMaterial = NewPhysMaterial;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPhotonInstancedDestructibleMeshComponent::SetFracturedMesh(class UPhotonDestructibleMesh* InFracturedMesh, bool Force)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.SetFracturedMesh");

	UPhotonInstancedDestructibleMeshComponent_SetFracturedMesh_Params params;
	params.InFracturedMesh = InFracturedMesh;
	params.Force = Force;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UPhotonInstancedDestructibleMeshComponent::Server_OnComponentHitAction(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_OnComponentHitAction");

	UPhotonInstancedDestructibleMeshComponent_Server_OnComponentHitAction_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












bool UPhotonInstancedDestructibleMeshComponent::Server_DamageFragmentsByRadius(const struct FVector4& WorldImpactVelocity, const struct FVector4& WorldHitPointAndSpreadSpeed, float Hp, float Radius, bool Attenuation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.Server_DamageFragmentsByRadius");

	UPhotonInstancedDestructibleMeshComponent_Server_DamageFragmentsByRadius_Params params;
	params.WorldImpactVelocity = WorldImpactVelocity;
	params.WorldHitPointAndSpreadSpeed = WorldHitPointAndSpreadSpeed;
	params.Hp = Hp;
	params.Radius = Radius;
	params.Attenuation = Attenuation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









TArray<int> UPhotonInstancedDestructibleMeshComponent::ReplaceAllInstances(TArray<struct FTransform> InstanceTransforms, bool bShouldReturnIndices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.ReplaceAllInstances");

	UPhotonInstancedDestructibleMeshComponent_ReplaceAllInstances_Params params;
	params.InstanceTransforms = InstanceTransforms;
	params.bShouldReturnIndices = bShouldReturnIndices;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UPhotonInstancedDestructibleMeshComponent::OnRep_ImpactData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_ImpactData");

	UPhotonInstancedDestructibleMeshComponent_OnRep_ImpactData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotonInstancedDestructibleMeshComponent::OnRep_FragmentsState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.OnRep_FragmentsState");

	UPhotonInstancedDestructibleMeshComponent_OnRep_FragmentsState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UPhotonInstancedDestructibleMeshComponent::IsFragmentCanDestroy(int InstanceIndex, int FragmentItemIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.IsFragmentCanDestroy");

	UPhotonInstancedDestructibleMeshComponent_IsFragmentCanDestroy_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentItemIndex = FragmentItemIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UPhotonDestructibleMesh* UPhotonInstancedDestructibleMeshComponent::GetPhotonDestructibleMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetPhotonDestructibleMesh");

	UPhotonInstancedDestructibleMeshComponent_GetPhotonDestructibleMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










TArray<int> UPhotonInstancedDestructibleMeshComponent::GetInstancesOverlappingSphere(const struct FVector& Center, float Radius, bool bSphereInWorldSpace)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetInstancesOverlappingSphere");

	UPhotonInstancedDestructibleMeshComponent_GetInstancesOverlappingSphere_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.bSphereInWorldSpace = bSphereInWorldSpace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UPhotonInstancedDestructibleMeshComponent::GetInstanceItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetInstanceItemCount");

	UPhotonInstancedDestructibleMeshComponent_GetInstanceItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











bool UPhotonInstancedDestructibleMeshComponent::GetFragmentTransform(int InstanceIndex, int FragmentIndex, bool WorldSpace, struct FTransform* OutTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentTransform");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentIndex = FragmentIndex;
	params.WorldSpace = WorldSpace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;

	return params.ReturnValue;
}










bool UPhotonInstancedDestructibleMeshComponent::GetFragmentsWorldPosition(int InstanceIndex, int FragmentIndex, struct FVector* FragmentPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsWorldPosition");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentsWorldPosition_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentIndex = FragmentIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FragmentPosition != nullptr)
		*FragmentPosition = params.FragmentPosition;

	return params.ReturnValue;
}










bool UPhotonInstancedDestructibleMeshComponent::GetFragmentsNotDamaged(int InstanceIndex, bool IsReturnNotDestroyedFragments, TArray<int>* FragmentsNoDamaged)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsNotDamaged");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentsNotDamaged_Params params;
	params.InstanceIndex = InstanceIndex;
	params.IsReturnNotDestroyedFragments = IsReturnNotDestroyedFragments;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FragmentsNoDamaged != nullptr)
		*FragmentsNoDamaged = params.FragmentsNoDamaged;

	return params.ReturnValue;
}









bool UPhotonInstancedDestructibleMeshComponent::GetFragmentsDamaged(int InstanceIndex, TArray<int>* FragmentsDamaged)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentsDamaged");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentsDamaged_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (FragmentsDamaged != nullptr)
		*FragmentsDamaged = params.FragmentsDamaged;

	return params.ReturnValue;
}







int UPhotonInstancedDestructibleMeshComponent::GetFragmentItemCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentItemCount");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentItemCount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











bool UPhotonInstancedDestructibleMeshComponent::GetFragmentBounds(int InstanceIndex, int FragmentIndex, bool WorldSpace, struct FBox* OutBox)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFragmentBounds");

	UPhotonInstancedDestructibleMeshComponent_GetFragmentBounds_Params params;
	params.InstanceIndex = InstanceIndex;
	params.FragmentIndex = FragmentIndex;
	params.WorldSpace = WorldSpace;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutBox != nullptr)
		*OutBox = params.OutBox;

	return params.ReturnValue;
}







class UPhotonFracturedMesh* UPhotonInstancedDestructibleMeshComponent::GetFracturedMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.GetFracturedMesh");

	UPhotonInstancedDestructibleMeshComponent_GetFracturedMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UPhotonInstancedDestructibleMeshComponent::AddInstanceWorldSpace(const struct FTransform& WorldTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstanceWorldSpace");

	UPhotonInstancedDestructibleMeshComponent_AddInstanceWorldSpace_Params params;
	params.WorldTransform = WorldTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










TArray<int> UPhotonInstancedDestructibleMeshComponent::AddInstances(TArray<struct FTransform> InstanceTransforms, bool bShouldReturnIndices, bool bMarkRenderStateDirty)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstances");

	UPhotonInstancedDestructibleMeshComponent_AddInstances_Params params;
	params.InstanceTransforms = InstanceTransforms;
	params.bShouldReturnIndices = bShouldReturnIndices;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UPhotonInstancedDestructibleMeshComponent::AddInstance(const struct FTransform& InstanceTransform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonInstancedDestructibleMeshComponent.AddInstance");

	UPhotonInstancedDestructibleMeshComponent_AddInstance_Params params;
	params.InstanceTransform = InstanceTransform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UPhotonHierarchicalInstancedDestructibleMeshComponent::ShowInstances(TArray<int> InstanceIndices, TArray<struct FTransform> InstanceTransforms)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedDestructibleMeshComponent.ShowInstances");

	UPhotonHierarchicalInstancedDestructibleMeshComponent_ShowInstances_Params params;
	params.InstanceIndices = InstanceIndices;
	params.InstanceTransforms = InstanceTransforms;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UPhotonHierarchicalInstancedDestructibleMeshComponent::RemoveInstances(TArray<int> InstancesToRemove)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedDestructibleMeshComponent.RemoveInstances");

	UPhotonHierarchicalInstancedDestructibleMeshComponent_RemoveInstances_Params params;
	params.InstancesToRemove = InstancesToRemove;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UPhotonHierarchicalInstancedStaticMeshComponent::UpdatePickupAndDeadBoxInRange(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.UpdatePickupAndDeadBoxInRange");

	UPhotonHierarchicalInstancedStaticMeshComponent_UpdatePickupAndDeadBoxInRange_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonHierarchicalInstancedStaticMeshComponent::SetFracturedMesh(class UPhotonDestructibleMesh* InPhotonDestructibleMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.SetFracturedMesh");

	UPhotonHierarchicalInstancedStaticMeshComponent_SetFracturedMesh_Params params;
	params.InPhotonDestructibleMesh = InPhotonDestructibleMesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UPhotonHierarchicalInstancedStaticMeshComponent::ServerGetInstanceIndexsNotDamaged(TArray<int>* InstancesNoDamaged)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ServerGetInstanceIndexsNotDamaged");

	UPhotonHierarchicalInstancedStaticMeshComponent_ServerGetInstanceIndexsNotDamaged_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstancesNoDamaged != nullptr)
		*InstancesNoDamaged = params.InstancesNoDamaged;

	return params.ReturnValue;
}








bool UPhotonHierarchicalInstancedStaticMeshComponent::ServerGetInstanceIndexsDamaged(TArray<int>* InstancesDamaged)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ServerGetInstanceIndexsDamaged");

	UPhotonHierarchicalInstancedStaticMeshComponent_ServerGetInstanceIndexsDamaged_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstancesDamaged != nullptr)
		*InstancesDamaged = params.InstancesDamaged;

	return params.ReturnValue;
}











bool UPhotonHierarchicalInstancedStaticMeshComponent::Server_InstanceByHp(TArray<int> InstancedIndex, TArray<float> DamagesHp, const struct FVector& WorldImpactVelocity, EDestructionDamageType DamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_InstanceByHp");

	UPhotonHierarchicalInstancedStaticMeshComponent_Server_InstanceByHp_Params params;
	params.InstancedIndex = InstancedIndex;
	params.DamagesHp = DamagesHp;
	params.WorldImpactVelocity = WorldImpactVelocity;
	params.DamageType = DamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












bool UPhotonHierarchicalInstancedStaticMeshComponent::Server_InstanceAndWorldVelocityByHp(TArray<int> InstancedIndex, TArray<float> DamagesHp, const struct FVector& WorldImpactPoint, EDestructionDamageType DamageType, float Strength)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_InstanceAndWorldVelocityByHp");

	UPhotonHierarchicalInstancedStaticMeshComponent_Server_InstanceAndWorldVelocityByHp_Params params;
	params.InstancedIndex = InstancedIndex;
	params.DamagesHp = DamagesHp;
	params.WorldImpactPoint = WorldImpactPoint;
	params.DamageType = DamageType;
	params.Strength = Strength;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











bool UPhotonHierarchicalInstancedStaticMeshComponent::Server_DamageFragmentsByRadius(const struct FVector& WorldImpactVelocity, const struct FVector& WorldHitPointAndSpreadSpeed, float Hp, float Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.Server_DamageFragmentsByRadius");

	UPhotonHierarchicalInstancedStaticMeshComponent_Server_DamageFragmentsByRadius_Params params;
	params.WorldImpactVelocity = WorldImpactVelocity;
	params.WorldHitPointAndSpreadSpeed = WorldHitPointAndSpreadSpeed;
	params.Hp = Hp;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void UPhotonHierarchicalInstancedStaticMeshComponent::OnTriggerServerEvent__DelegateSignature(class ASTExtraVehicleBase* VehicleActor, class UPrimitiveComponent* HitComp, class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent, const struct FVector& DesPos, int TriggerIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggerServerEvent__DelegateSignature");

	UPhotonHierarchicalInstancedStaticMeshComponent_OnTriggerServerEvent__DelegateSignature_Params params;
	params.VehicleActor = VehicleActor;
	params.HitComp = HitComp;
	params.MeshComponent = MeshComponent;
	params.DesPos = DesPos;
	params.TriggerIndex = TriggerIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UPhotonHierarchicalInstancedStaticMeshComponent::OnTriggeredByComp(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FTriggerEvent& TriggerEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggeredByComp");

	UPhotonHierarchicalInstancedStaticMeshComponent_OnTriggeredByComp_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.TriggerEvent = TriggerEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UPhotonHierarchicalInstancedStaticMeshComponent::OnTriggerClientEvent__DelegateSignature(class ASTExtraVehicleBase* VehicleActor, class UPrimitiveComponent* HitComp, class UPhotonHierarchicalInstancedStaticMeshComponent* MeshComponent, const struct FVector& DesPos, int TriggerIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnTriggerClientEvent__DelegateSignature");

	UPhotonHierarchicalInstancedStaticMeshComponent_OnTriggerClientEvent__DelegateSignature_Params params;
	params.VehicleActor = VehicleActor;
	params.HitComp = HitComp;
	params.MeshComponent = MeshComponent;
	params.DesPos = DesPos;
	params.TriggerIndex = TriggerIndex;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotonHierarchicalInstancedStaticMeshComponent::OnRep_ImpactData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnRep_ImpactData");

	UPhotonHierarchicalInstancedStaticMeshComponent_OnRep_ImpactData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UPhotonHierarchicalInstancedStaticMeshComponent::OnLocalVehicleHit(TArray<int> InstanceIndex, const struct FVector4& WorldImpactPointAndSpreadSpeed, const struct FVector4& WorldImpactVelocityAndRotateSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.OnLocalVehicleHit");

	UPhotonHierarchicalInstancedStaticMeshComponent_OnLocalVehicleHit_Params params;
	params.InstanceIndex = InstanceIndex;
	params.WorldImpactPointAndSpreadSpeed = WorldImpactPointAndSpreadSpeed;
	params.WorldImpactVelocityAndRotateSpeed = WorldImpactVelocityAndRotateSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UPhotonDestructibleMesh* UPhotonHierarchicalInstancedStaticMeshComponent::GetPhotonDestructibleMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetPhotonDestructibleMesh");

	UPhotonHierarchicalInstancedStaticMeshComponent_GetPhotonDestructibleMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











bool UPhotonHierarchicalInstancedStaticMeshComponent::GetInstanceByRadius(const struct FVector& HitPoint, float Radius, EDestructionDamageType DamageType, TArray<int>* InstancedIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetInstanceByRadius");

	UPhotonHierarchicalInstancedStaticMeshComponent_GetInstanceByRadius_Params params;
	params.HitPoint = HitPoint;
	params.Radius = Radius;
	params.DamageType = DamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InstancedIndex != nullptr)
		*InstancedIndex = params.InstancedIndex;

	return params.ReturnValue;
}







class UPhotonFracturedMesh* UPhotonHierarchicalInstancedStaticMeshComponent::GetFracturedMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GetFracturedMesh");

	UPhotonHierarchicalInstancedStaticMeshComponent_GetFracturedMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UPhotonHierarchicalInstancedStaticMeshComponent::GenerateEffectInstanceWorldSpace(TArray<int> InstanceIndex, TArray<struct FVector> WorldImpactVelocityAndRotateSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GenerateEffectInstanceWorldSpace");

	UPhotonHierarchicalInstancedStaticMeshComponent_GenerateEffectInstanceWorldSpace_Params params;
	params.InstanceIndex = InstanceIndex;
	params.WorldImpactVelocityAndRotateSpeed = WorldImpactVelocityAndRotateSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPhotonHierarchicalInstancedStaticMeshComponent::GenerateEffectInstanceLocalSpace(TArray<int> InstanceIndex, TArray<struct FVector> LocalImpactVelocityAndRotateSpeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.GenerateEffectInstanceLocalSpace");

	UPhotonHierarchicalInstancedStaticMeshComponent_GenerateEffectInstanceLocalSpace_Params params;
	params.InstanceIndex = InstanceIndex;
	params.LocalImpactVelocityAndRotateSpeed = LocalImpactVelocityAndRotateSpeed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonHierarchicalInstancedStaticMeshComponent::ClientCorrectVehicleHit(TArray<int> InstanceIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonHierarchicalInstancedStaticMeshComponent.ClientCorrectVehicleHit");

	UPhotonHierarchicalInstancedStaticMeshComponent_ClientCorrectVehicleHit_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotonReplicationSkeletalMeshComponent::UnRegistLuaTick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegistLuaTick");

	UPhotonReplicationSkeletalMeshComponent_UnRegistLuaTick_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotonReplicationSkeletalMeshComponent::UnRegisterFromCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.UnRegisterFromCluster");

	UPhotonReplicationSkeletalMeshComponent_UnRegisterFromCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationSkeletalMeshComponent::SetMoveable(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetMoveable");

	UPhotonReplicationSkeletalMeshComponent_SetMoveable_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationSkeletalMeshComponent::SetClusterUniqueID(int InClusterID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterUniqueID");

	UPhotonReplicationSkeletalMeshComponent_SetClusterUniqueID_Params params;
	params.InClusterID = InClusterID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationSkeletalMeshComponent::SetClusterEntityState(EClusterEntityState EntityState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.SetClusterEntityState");

	UPhotonReplicationSkeletalMeshComponent_SetClusterEntityState_Params params;
	params.EntityState = EntityState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationSkeletalMeshComponent::RegistLuaTick(float TickInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegistLuaTick");

	UPhotonReplicationSkeletalMeshComponent_RegistLuaTick_Params params;
	params.TickInterval = TickInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPhotonReplicationSkeletalMeshComponent::RegisterToCluster()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.RegisterToCluster");

	UPhotonReplicationSkeletalMeshComponent_RegisterToCluster_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonReplicationSkeletalMeshComponent::MarkPropDirty(int PropIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonReplicationSkeletalMeshComponent.MarkPropDirty");

	UPhotonReplicationSkeletalMeshComponent_MarkPropDirty_Params params;
	params.PropIndex = PropIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AReusableStaticMeshActor::OnSpawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.ReusableStaticMeshActor.OnSpawn");

	AReusableStaticMeshActor_OnSpawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AReusableStaticMeshActor::OnRecycle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.ReusableStaticMeshActor.OnRecycle");

	AReusableStaticMeshActor_OnRecycle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AReusableSkeletalMeshActor::OnSpawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.ReusableSkeletalMeshActor.OnSpawn");

	AReusableSkeletalMeshActor_OnSpawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AReusableSkeletalMeshActor::OnRecycle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.ReusableSkeletalMeshActor.OnRecycle");

	AReusableSkeletalMeshActor_OnRecycle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AReusableDestructibleMeshActor::OnSpawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.ReusableDestructibleMeshActor.OnSpawn");

	AReusableDestructibleMeshActor_OnSpawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AReusableDestructibleMeshActor::OnRecycle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.ReusableDestructibleMeshActor.OnRecycle");

	AReusableDestructibleMeshActor_OnRecycle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UPhotonStaticMeshComponent::SetFracturedMesh(class UPhotonDestructibleMesh* InPhotonDestructibleMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonStaticMeshComponent.SetFracturedMesh");

	UPhotonStaticMeshComponent_SetFracturedMesh_Params params;
	params.InPhotonDestructibleMesh = InPhotonDestructibleMesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UPhotonDestructibleMesh* UPhotonStaticMeshComponent::GetPhotonDestructibleMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonStaticMeshComponent.GetPhotonDestructibleMesh");

	UPhotonStaticMeshComponent_GetPhotonDestructibleMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UPhotonFracturedMesh* UPhotonStaticMeshComponent::GetFracturedMesh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PhotonBlast.PhotonStaticMeshComponent.GetFracturedMesh");

	UPhotonStaticMeshComponent_GetFracturedMesh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

