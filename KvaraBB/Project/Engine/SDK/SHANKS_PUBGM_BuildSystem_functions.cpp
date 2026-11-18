
 
#include "../SDK.hpp"

namespace SDK
{












void ABuildingActorBase::SpawnDestroyParticle(bool bSpawnParticle, const struct FTransform& Loc, const struct FSoftObjectPath& DestroyBuildingEffectPath, class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.SpawnDestroyParticle");

	ABuildingActorBase_SpawnDestroyParticle_Params params;
	params.bSpawnParticle = bSpawnParticle;
	params.Loc = Loc;
	params.DestroyBuildingEffectPath = DestroyBuildingEffectPath;
	params.World = World;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABuildingActorBase::SetLastQuadTraceDeviation(float InDeviation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.SetLastQuadTraceDeviation");

	ABuildingActorBase_SetLastQuadTraceDeviation_Params params;
	params.InDeviation = InDeviation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABuildingActorBase::PlayDestroyAnimation(bool bUseParticle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.PlayDestroyAnimation");

	ABuildingActorBase_PlayDestroyAnimation_Params params;
	params.bUseParticle = bUseParticle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void ABuildingActorBase::OnTakeDamageFromVehicle(class UPrimitiveComponent* MyPrimitiveComp, float ForwardSpeed, float DamageAmount, class AActor* DamageCauser, class AController* EventInstigator)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.OnTakeDamageFromVehicle");

	ABuildingActorBase_OnTakeDamageFromVehicle_Params params;
	params.MyPrimitiveComp = MyPrimitiveComp;
	params.ForwardSpeed = ForwardSpeed;
	params.DamageAmount = DamageAmount;
	params.DamageCauser = DamageCauser;
	params.EventInstigator = EventInstigator;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABuildingActorBase::OnRep_Health()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.OnRep_Health");

	ABuildingActorBase_OnRep_Health_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABuildingActorBase::OnPlayDestroyAnimation(bool bUseParticle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.OnPlayDestroyAnimation");

	ABuildingActorBase_OnPlayDestroyAnimation_Params params;
	params.bUseParticle = bUseParticle;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABuildingActorBase::OnBuildingActorDamaged(float Health)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.OnBuildingActorDamaged");

	ABuildingActorBase_OnBuildingActorDamaged_Params params;
	params.Health = Health;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ABuildingActorBase::OnBornAnimationPlayEndInClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.OnBornAnimationPlayEndInClient");

	ABuildingActorBase_OnBornAnimationPlayEndInClient_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







float ABuildingActorBase::GetLastQuadTraceDeviation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.GetLastQuadTraceDeviation");

	ABuildingActorBase_GetLastQuadTraceDeviation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int ABuildingActorBase::GetBuildID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.GetBuildID");

	ABuildingActorBase_GetBuildID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void ABuildingActorBase::BPOnOwnerChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorBase.BPOnOwnerChanged");

	ABuildingActorBase_BPOnOwnerChanged_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UBuildingActorInterface::UseQuadTraceDeviationForSpawnOffset(const struct FVector& BuildLocation, float QuadTraceDeviation, struct FVector* OutLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.UseQuadTraceDeviationForSpawnOffset");

	UBuildingActorInterface_UseQuadTraceDeviationForSpawnOffset_Params params;
	params.BuildLocation = BuildLocation;
	params.QuadTraceDeviation = QuadTraceDeviation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;

	return params.ReturnValue;
}







bool UBuildingActorInterface::UseFixedLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.UseFixedLocation");

	UBuildingActorInterface_UseFixedLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::UseCachedBuildLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.UseCachedBuildLocation");

	UBuildingActorInterface_UseCachedBuildLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::ShouldUseExtraRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.ShouldUseExtraRotation");

	UBuildingActorInterface_ShouldUseExtraRotation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::ShouldUseExtraOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.ShouldUseExtraOffset");

	UBuildingActorInterface_ShouldUseExtraOffset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::ShouldSnapToGrid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.ShouldSnapToGrid");

	UBuildingActorInterface_ShouldSnapToGrid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::ShouldSkipCheckOwnerCollision()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.ShouldSkipCheckOwnerCollision");

	UBuildingActorInterface_ShouldSkipCheckOwnerCollision_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::ShouldCustomBlockingChannels()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.ShouldCustomBlockingChannels");

	UBuildingActorInterface_ShouldCustomBlockingChannels_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::ShouldCheckVisibilityTypes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.ShouldCheckVisibilityTypes");

	UBuildingActorInterface_ShouldCheckVisibilityTypes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::ShouldAttachToMovementPlatform()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.ShouldAttachToMovementPlatform");

	UBuildingActorInterface_ShouldAttachToMovementPlatform_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBuildingActorInterface::SetBuildingActorID(int BuildID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.SetBuildingActorID");

	UBuildingActorInterface_SetBuildingActorID_Params params;
	params.BuildID = BuildID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBuildingActorInterface::PrebuildCDOBodyInstance(class UWorld* World, const struct FTransform& tranx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.PrebuildCDOBodyInstance");

	UBuildingActorInterface_PrebuildCDOBodyInstance_Params params;
	params.World = World;
	params.tranx = tranx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBuildingActorInterface::NonCullingBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.NonCullingBeginPlay");

	UBuildingActorInterface_NonCullingBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







float UBuildingActorInterface::MaxUnderWaterBuildDepth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.MaxUnderWaterBuildDepth");

	UBuildingActorInterface_MaxUnderWaterBuildDepth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::IsEnablePitchRotatePlace()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.IsEnablePitchRotatePlace");

	UBuildingActorInterface_IsEnablePitchRotatePlace_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::IsEnableOverlayPlace()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.IsEnableOverlayPlace");

	UBuildingActorInterface_IsEnableOverlayPlace_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::IsBuildOnlyOnLandscape()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.IsBuildOnlyOnLandscape");

	UBuildingActorInterface_IsBuildOnlyOnLandscape_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::IsBuildOnEdge()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.IsBuildOnEdge");

	UBuildingActorInterface_IsBuildOnEdge_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::IsAutoPickValidPlace()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.IsAutoPickValidPlace");

	UBuildingActorInterface_IsAutoPickValidPlace_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBuildingActorInterface::HandleBuildingDestroyed(class AController* InstigatedBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.HandleBuildingDestroyed");

	UBuildingActorInterface_HandleBuildingDestroyed_Params params;
	params.InstigatedBy = InstigatedBy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBuildingActorInterface::HandleBuildingConstructed(class AController* InstigatedBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.HandleBuildingConstructed");

	UBuildingActorInterface_HandleBuildingConstructed_Params params;
	params.InstigatedBy = InstigatedBy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FBuildingActorWorldSnapSetup UBuildingActorInterface::GetWorldSnapSetup()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetWorldSnapSetup");

	UBuildingActorInterface_GetWorldSnapSetup_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UClass*> UBuildingActorInterface::GetVisibilitySkipTypes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetVisibilitySkipTypes");

	UBuildingActorInterface_GetVisibilitySkipTypes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FVector UBuildingActorInterface::GetViewLocationOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetViewLocationOffset");

	UBuildingActorInterface_GetViewLocationOffset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<class UClass*> UBuildingActorInterface::GetProhibitedActorTemplateList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetProhibitedActorTemplateList");

	UBuildingActorInterface_GetProhibitedActorTemplateList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FVector UBuildingActorInterface::GetPreBuildingEffectScale()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetPreBuildingEffectScale");

	UBuildingActorInterface_GetPreBuildingEffectScale_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FRotator UBuildingActorInterface::GetPreBuildingEffectRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetPreBuildingEffectRotation");

	UBuildingActorInterface_GetPreBuildingEffectRotation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FSoftObjectPath UBuildingActorInterface::GetPreBuildingEffectPath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetPreBuildingEffectPath");

	UBuildingActorInterface_GetPreBuildingEffectPath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FVector UBuildingActorInterface::GetPreBuildingEffectOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetPreBuildingEffectOffset");

	UBuildingActorInterface_GetPreBuildingEffectOffset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UBuildingActorInterface::GetOverlayPlaceHeight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetOverlayPlaceHeight");

	UBuildingActorInterface_GetOverlayPlaceHeight_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UBuildingActorInterface::GetOverlayMaxHeightFromGround()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetOverlayMaxHeightFromGround");

	UBuildingActorInterface_GetOverlayMaxHeightFromGround_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UBuildingActorInterface::GetMaxTraceDepth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetMaxTraceDepth");

	UBuildingActorInterface_GetMaxTraceDepth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UBuildingActorInterface::GetMaxOffectHight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetMaxOffectHight");

	UBuildingActorInterface_GetMaxOffectHight_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UBuildingActorInterface::GetMaxDeviation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetMaxDeviation");

	UBuildingActorInterface_GetMaxDeviation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FBuildingActorDSBuildCheck UBuildingActorInterface::GetDSBuildCheckConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetDSBuildCheckConfig");

	UBuildingActorInterface_GetDSBuildCheckConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UBuildingActorInterface::GetDetectDeath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetDetectDeath");

	UBuildingActorInterface_GetDetectDeath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FTransform UBuildingActorInterface::GetDestroyedParticleTransformOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetDestroyedParticleTransformOffset");

	UBuildingActorInterface_GetDestroyedParticleTransformOffset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FBuildingActorDensityCheck UBuildingActorInterface::GetDensityParams(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetDensityParams");

	UBuildingActorInterface_GetDensityParams_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<TEnumAsByte<ECollisionChannel>> UBuildingActorInterface::GetCustomBlockingChannels()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetCustomBlockingChannels");

	UBuildingActorInterface_GetCustomBlockingChannels_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TEnumAsByte<EBuildingActorConstructingMode> UBuildingActorInterface::GetConstructingMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetConstructingMode");

	UBuildingActorInterface_GetConstructingMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UBuildingActorInterface::GetBuildOnEdgeUpLength()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetBuildOnEdgeUpLength");

	UBuildingActorInterface_GetBuildOnEdgeUpLength_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UBuildingActorInterface::GetBuildOnEdgeFrontLength()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetBuildOnEdgeFrontLength");

	UBuildingActorInterface_GetBuildOnEdgeFrontLength_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBuildingActorInterface::GetBuildingActorID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetBuildingActorID");

	UBuildingActorInterface_GetBuildingActorID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FRotator UBuildingActorInterface::GetActorCollisionBoxRotator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxRotator");

	UBuildingActorInterface_GetActorCollisionBoxRotator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FVector UBuildingActorInterface::GetActorCollisionBoxExtern()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxExtern");

	UBuildingActorInterface_GetActorCollisionBoxExtern_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FVector UBuildingActorInterface::GetActorCollisionBoxCenter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.GetActorCollisionBoxCenter");

	UBuildingActorInterface_GetActorCollisionBoxCenter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void UBuildingActorInterface::CustomizeLocationAndRotation(class AActor* Builder, const struct FVector& InLocation, const struct FRotator& InRotation, struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.CustomizeLocationAndRotation");

	UBuildingActorInterface_CustomizeLocationAndRotation_Params params;
	params.Builder = Builder;
	params.InLocation = InLocation;
	params.InRotation = InRotation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}







bool UBuildingActorInterface::CanDoQuadTrace()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.CanDoQuadTrace");

	UBuildingActorInterface_CanDoQuadTrace_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::CanCustomizeLocationAndRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.CanCustomizeLocationAndRotation");

	UBuildingActorInterface_CanCustomizeLocationAndRotation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildingActorInterface::CanBuildUnderWater()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.CanBuildUnderWater");

	UBuildingActorInterface_CanBuildUnderWater_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












bool UBuildingActorInterface::BPCheckPlacement(class UWorld* World, const struct FTransform& tranx, int checkType, int CurrentAvatarID, class AActor* Builder)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.BPCheckPlacement");

	UBuildingActorInterface_BPCheckPlacement_Params params;
	params.World = World;
	params.tranx = tranx;
	params.checkType = checkType;
	params.CurrentAvatarID = CurrentAvatarID;
	params.Builder = Builder;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBuildingActorInterface::BP_DSFinalCheckPlacement(const struct FTransform& Transform, class AActor* Builder)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorInterface.BP_DSFinalCheckPlacement");

	UBuildingActorInterface_BP_DSFinalCheckPlacement_Params params;
	params.Transform = Transform;
	params.Builder = Builder;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void ABuildingActorMgr::OnBuildingActorSpawned(class AActor* InOwnerActor, class ABuildingActorBase* InBuildingActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorMgr.OnBuildingActorSpawned");

	ABuildingActorMgr_OnBuildingActorSpawned_Params params;
	params.InOwnerActor = InOwnerActor;
	params.InBuildingActor = InBuildingActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ABuildingActorMgr::OnBuildingActorDestroyed(class ABuildingActorBase* InBuildingActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorMgr.OnBuildingActorDestroyed");

	ABuildingActorMgr_OnBuildingActorDestroyed_Params params;
	params.InBuildingActor = InBuildingActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class ABuildingActorMgr* ABuildingActorMgr::GetInstance(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildingActorMgr.GetInstance");

	ABuildingActorMgr_GetInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBuildSystemComponent::TryAttachToMoveablePlatform(class AActor* SpawnedBuilding, const struct FVector& BuildLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.TryAttachToMoveablePlatform");

	UBuildSystemComponent_TryAttachToMoveablePlatform_Params params;
	params.SpawnedBuilding = SpawnedBuilding;
	params.BuildLocation = BuildLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBuildSystemComponent::ToggleDebugDraw()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.ToggleDebugDraw");

	UBuildSystemComponent_ToggleDebugDraw_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBuildSystemComponent::StopPlaceBuilding()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.StopPlaceBuilding");

	UBuildSystemComponent_StopPlaceBuilding_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBuildSystemComponent::StartPrePlaceBuilding(int InBuildID, int AvatarID, EBuildingViewType viewType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.StartPrePlaceBuilding");

	UBuildSystemComponent_StartPrePlaceBuilding_Params params;
	params.InBuildID = InBuildID;
	params.AvatarID = AvatarID;
	params.viewType = viewType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBuildSystemComponent::SkipCDTimeByBuildID(int InBuildID, float IncreaseRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.SkipCDTimeByBuildID");

	UBuildSystemComponent_SkipCDTimeByBuildID_Params params;
	params.InBuildID = InBuildID;
	params.IncreaseRate = IncreaseRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UBuildSystemComponent::ShouldEnableDoubleTouchMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.ShouldEnableDoubleTouchMode");

	UBuildSystemComponent_ShouldEnableDoubleTouchMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBuildSystemComponent::SetPrebuildEnabled(bool CanBePlaced, bool IsVisible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.SetPrebuildEnabled");

	UBuildSystemComponent_SetPrebuildEnabled_Params params;
	params.CanBePlaced = CanBePlaced;
	params.IsVisible = IsVisible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBuildSystemComponent::SetBuildingDataModeID(int ModeID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.SetBuildingDataModeID");

	UBuildSystemComponent_SetBuildingDataModeID_Params params;
	params.ModeID = ModeID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBuildSystemComponent::SetBuildingData(int Index, const struct FBuildingData& InData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.SetBuildingData");

	UBuildSystemComponent_SetBuildingData_Params params;
	params.Index = Index;
	params.InData = InData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UBuildSystemComponent::ServerLineTraceCheck(class UClass* BuildingClass, const struct FVector& CheckLocation, const struct FRotator& CheckRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.ServerLineTraceCheck");

	UBuildSystemComponent_ServerLineTraceCheck_Params params;
	params.BuildingClass = BuildingClass;
	params.CheckLocation = CheckLocation;
	params.CheckRotation = CheckRotation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBuildSystemComponent::ResetBuildngCDByBuildID(int InBuildID, float InNewCDTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.ResetBuildngCDByBuildID");

	UBuildSystemComponent_ResetBuildngCDByBuildID_Params params;
	params.InBuildID = InBuildID;
	params.InNewCDTime = InNewCDTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UBuildSystemComponent::ResetBuildList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.ResetBuildList");

	UBuildSystemComponent_ResetBuildList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}













bool UBuildSystemComponent::ProccessNothingHitTraceOverlap(const struct FVector& DestLocation, const struct FRotator& DestRotation, float MaxBuildDist, int buildIndex, const struct FVector& ViewLocation, struct FVector* OutLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.ProccessNothingHitTraceOverlap");

	UBuildSystemComponent_ProccessNothingHitTraceOverlap_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;
	params.MaxBuildDist = MaxBuildDist;
	params.buildIndex = buildIndex;
	params.ViewLocation = ViewLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;

	return params.ReturnValue;
}









void UBuildSystemComponent::PlaceBuildingWithIndex(int buildIndex, int AvatarID, bool bRelative)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.PlaceBuildingWithIndex");

	UBuildSystemComponent_PlaceBuildingWithIndex_Params params;
	params.buildIndex = buildIndex;
	params.AvatarID = AvatarID;
	params.bRelative = bRelative;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UBuildSystemComponent::PlaceBuildingAtLocation(int buildIndex, const struct FVector& Loc, const struct FRotator& Rot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.PlaceBuildingAtLocation");

	UBuildSystemComponent_PlaceBuildingAtLocation_Params params;
	params.buildIndex = buildIndex;
	params.Loc = Loc;
	params.Rot = Rot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBuildSystemComponent::PlaceBuilding(int AvatarID, bool bRelative)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.PlaceBuilding");

	UBuildSystemComponent_PlaceBuilding_Params params;
	params.AvatarID = AvatarID;
	params.bRelative = bRelative;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UBuildSystemComponent::PickLocationByBuildID(int InBuildID, struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.PickLocationByBuildID");

	UBuildSystemComponent_PickLocationByBuildID_Params params;
	params.InBuildID = InBuildID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;

	return params.ReturnValue;
}










void UBuildSystemComponent::OverriveDeploymentTransform(const struct FRotator& rotIn, const struct FVector& locIn, struct FRotator* rotOut, struct FVector* locOut)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OverriveDeploymentTransform");

	UBuildSystemComponent_OverriveDeploymentTransform_Params params;
	params.rotIn = rotIn;
	params.locIn = locIn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (rotOut != nullptr)
		*rotOut = params.rotOut;
	if (locOut != nullptr)
		*locOut = params.locOut;
}









void UBuildSystemComponent::OverrideBuildingMaxBuildDistance(float BuildingMaxDistance, bool SetAll, int BuildingID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OverrideBuildingMaxBuildDistance");

	UBuildSystemComponent_OverrideBuildingMaxBuildDistance_Params params;
	params.BuildingMaxDistance = BuildingMaxDistance;
	params.SetAll = SetAll;
	params.BuildingID = BuildingID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBuildSystemComponent::OnTouchedConstructableBoxEnded(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OnTouchedConstructableBoxEnded");

	UBuildSystemComponent_OnTouchedConstructableBoxEnded_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBuildSystemComponent::OnTouchedConstructableBox(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OnTouchedConstructableBox");

	UBuildSystemComponent_OnTouchedConstructableBox_Params params;
	params.FingerIndex = FingerIndex;
	params.TouchedComponent = TouchedComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBuildSystemComponent::OnTouchActorBuild(const struct FVector2D& ScreenPosition, class APlayerController* Controller)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OnTouchActorBuild");

	UBuildSystemComponent_OnTouchActorBuild_Params params;
	params.ScreenPosition = ScreenPosition;
	params.Controller = Controller;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBuildSystemComponent::OnAsyncLoadingMeshFinished(int buildIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OnAsyncLoadingMeshFinished");

	UBuildSystemComponent_OnAsyncLoadingMeshFinished_Params params;
	params.buildIndex = buildIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBuildSystemComponent::OnAsyncLoadingEffectFinished(int buildIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OnAsyncLoadingEffectFinished");

	UBuildSystemComponent_OnAsyncLoadingEffectFinished_Params params;
	params.buildIndex = buildIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBuildSystemComponent::OnAsyncLoadingBuildingFinished(int buildIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.OnAsyncLoadingBuildingFinished");

	UBuildSystemComponent_OnAsyncLoadingBuildingFinished_Params params;
	params.buildIndex = buildIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBuildSystemComponent::IsValidAvatar(int AvatarID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.IsValidAvatar");

	UBuildSystemComponent_IsValidAvatar_Params params;
	params.AvatarID = AvatarID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBuildSystemComponent::IsParticlePreBuildingEffect(int InBuildID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.IsParticlePreBuildingEffect");

	UBuildSystemComponent_IsParticlePreBuildingEffect_Params params;
	params.InBuildID = InBuildID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBuildSystemComponent::IsOverlayBuildHeightValid(const struct FVector& BuildLocation, float OverlayMaxHeightFromGround)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.IsOverlayBuildHeightValid");

	UBuildSystemComponent_IsOverlayBuildHeightValid_Params params;
	params.BuildLocation = BuildLocation;
	params.OverlayMaxHeightFromGround = OverlayMaxHeightFromGround;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildSystemComponent::IsInPreBuildingMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.IsInPreBuildingMode");

	UBuildSystemComponent_IsInPreBuildingMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBuildSystemComponent::IsCanPlaceBuildingBP(int InBuildID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.IsCanPlaceBuildingBP");

	UBuildSystemComponent_IsCanPlaceBuildingBP_Params params;
	params.InBuildID = InBuildID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBuildSystemComponent::IsCanPlaceBuilding(int InBuildID, TEnumAsByte<EBuildingActionType> _TYPE)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.IsCanPlaceBuilding");

	UBuildSystemComponent_IsCanPlaceBuilding_Params params;
	params.InBuildID = InBuildID;
	params._TYPE = _TYPE;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBuildSystemComponent::IsActorProhibited(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.IsActorProhibited");

	UBuildSystemComponent_IsActorProhibited_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FRotator UBuildSystemComponent::GetPreBuildingEffectRotation(int InBuildID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetPreBuildingEffectRotation");

	UBuildSystemComponent_GetPreBuildingEffectRotation_Params params;
	params.InBuildID = InBuildID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FSoftObjectPath UBuildSystemComponent::GetPreBuildingEffectPath(int InBuildID, int AvatarID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetPreBuildingEffectPath");

	UBuildSystemComponent_GetPreBuildingEffectPath_Params params;
	params.InBuildID = InBuildID;
	params.AvatarID = AvatarID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVector UBuildSystemComponent::GetPreBuildingEffectOffset(int InBuildID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetPreBuildingEffectOffset");

	UBuildSystemComponent_GetPreBuildingEffectOffset_Params params;
	params.InBuildID = InBuildID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class APlayerController* UBuildSystemComponent::GetOwnerPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetOwnerPlayerController");

	UBuildSystemComponent_GetOwnerPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UBuildSystemComponent::GetMaxDistance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetMaxDistance");

	UBuildSystemComponent_GetMaxDistance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float UBuildSystemComponent::GetLastQuadTraceDeviation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetLastQuadTraceDeviation");

	UBuildSystemComponent_GetLastQuadTraceDeviation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UBuildSystemComponent::GetIsHasInitData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetIsHasInitData");

	UBuildSystemComponent_GetIsHasInitData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UBuildSystemComponent::GetIndexByBuildingID(int BuildID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetIndexByBuildingID");

	UBuildSystemComponent_GetIndexByBuildingID_Params params;
	params.BuildID = BuildID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TEnumAsByte<EBuildingType> UBuildSystemComponent::GetCurrentBuildType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetCurrentBuildType");

	UBuildSystemComponent_GetCurrentBuildType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class AActor* UBuildSystemComponent::GetCDOByIndex(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetCDOByIndex");

	UBuildSystemComponent_GetCDOByIndex_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FBuildingData> UBuildSystemComponent::GetBuildingList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetBuildingList");

	UBuildSystemComponent_GetBuildingList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UBuildSystemComponent::GetBuildingDataModeID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.GetBuildingDataModeID");

	UBuildSystemComponent_GetBuildingDataModeID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UBuildSystemComponent::EnableBuildingByID(int BuildID, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.EnableBuildingByID");

	UBuildSystemComponent_EnableBuildingByID_Params params;
	params.BuildID = BuildID;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void UBuildSystemComponent::DoSceenTouchBuild(int buildIndex, const struct FVector2D& ScreenPostion, int PointerIndex, TEnumAsByte<EBuildingActionType> _TYPE, bool IsBegin, TEnumAsByte<EBuildingActionType> CustomBuildEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.DoSceenTouchBuild");

	UBuildSystemComponent_DoSceenTouchBuild_Params params;
	params.buildIndex = buildIndex;
	params.ScreenPostion = ScreenPostion;
	params.PointerIndex = PointerIndex;
	params._TYPE = _TYPE;
	params.IsBegin = IsBegin;
	params.CustomBuildEvent = CustomBuildEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UBuildSystemComponent::DensityCheck(const struct FBuildingActorDensityCheck& DensityCheckParmas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.DensityCheck");

	UBuildSystemComponent_DensityCheck_Params params;
	params.DensityCheckParmas = DensityCheckParmas;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBuildSystemComponent::CheckShouldSkipByVisibility(class UPrimitiveComponent* _comp, int buildIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.CheckShouldSkipByVisibility");

	UBuildSystemComponent_CheckShouldSkipByVisibility_Params params;
	params._comp = _comp;
	params.buildIndex = buildIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












bool UBuildSystemComponent::CheckPlacementWithPitch(const struct FHitResult& Hit, const struct FVector& BoxExtent, const struct FBuildingData& CurBuildData, struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.CheckPlacementWithPitch");

	UBuildSystemComponent_CheckPlacementWithPitch_Params params;
	params.Hit = Hit;
	params.BoxExtent = BoxExtent;
	params.CurBuildData = CurBuildData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;

	return params.ReturnValue;
}















bool UBuildSystemComponent::CheckPlacementOverlap(TArray<struct FHitResult> HitArray, const struct FVector& ViewLocation, const struct FVector& BoxExtent, const struct FBuildingData& CurBuildData, const struct FRotator& BuildRotation, const struct FRotator& ControlRot, struct FVector* OutLocation, bool* HasForbiddenObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.CheckPlacementOverlap");

	UBuildSystemComponent_CheckPlacementOverlap_Params params;
	params.HitArray = HitArray;
	params.BoxExtent = BoxExtent;
	params.CurBuildData = CurBuildData;
	params.BuildRotation = BuildRotation;
	params.ControlRot = ControlRot;
	params.ViewLocation = ViewLocation;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (HasForbiddenObject != nullptr)
		*HasForbiddenObject = params.HasForbiddenObject;

	return params.ReturnValue;
}








bool UBuildSystemComponent::CheckPlaceBuildingWithIndex(int buildIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.CheckPlaceBuildingWithIndex");

	UBuildSystemComponent_CheckPlaceBuildingWithIndex_Params params;
	params.buildIndex = buildIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









bool UBuildSystemComponent::CheckObjectIsOneOfTheTemplate(class UObject* Obj, TArray<class UClass*> _ActorFilterTemplates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.CheckObjectIsOneOfTheTemplate");

	UBuildSystemComponent_CheckObjectIsOneOfTheTemplate_Params params;
	params.Obj = Obj;
	params._ActorFilterTemplates = _ActorFilterTemplates;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UBuildSystemComponent::CheckCollisionNeedSkipOwner(int buildIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.CheckCollisionNeedSkipOwner");

	UBuildSystemComponent_CheckCollisionNeedSkipOwner_Params params;
	params.buildIndex = buildIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}












bool UBuildSystemComponent::BuildAtWorldLoc(int buildIndex, const struct FTransform& tranx, const struct FVector& EndLocation, bool bUseTrace, TEnumAsByte<EBuildingActionType> BuildType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.BuildAtWorldLoc");

	UBuildSystemComponent_BuildAtWorldLoc_Params params;
	params.buildIndex = buildIndex;
	params.tranx = tranx;
	params.EndLocation = EndLocation;
	params.bUseTrace = bUseTrace;
	params.BuildType = BuildType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBuildSystemComponent::AddBuildingData(const struct FBuildingData& InData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.BuildSystemComponent.AddBuildingData");

	UBuildSystemComponent_AddBuildingData_Params params;
	params.InData = InData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ASelectBuildActor::SetSelectActorTemplateScale(const struct FVector& InScale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.SetSelectActorTemplateScale");

	ASelectBuildActor_SetSelectActorTemplateScale_Params params;
	params.InScale = InScale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ASelectBuildActor::SetSelectActorTemplateOffsetAndRotation(const struct FVector& InOffset, const struct FRotator& InRotation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.SetSelectActorTemplateOffsetAndRotation");

	ASelectBuildActor_SetSelectActorTemplateOffsetAndRotation_Params params;
	params.InOffset = InOffset;
	params.InRotation = InRotation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ASelectBuildActor::SetSelectActorTemplate(class UParticleSystem* Template)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.SetSelectActorTemplate");

	ASelectBuildActor_SetSelectActorTemplate_Params params;
	params.Template = Template;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void ASelectBuildActor::SetSelectActorPlacementEnable(bool PlacementEnable, bool IsVisible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.SetSelectActorPlacementEnable");

	ASelectBuildActor_SetSelectActorPlacementEnable_Params params;
	params.PlacementEnable = PlacementEnable;
	params.IsVisible = IsVisible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ASelectBuildActor::SetSelectActorMesh(class UStaticMesh* InMesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.SetSelectActorMesh");

	ASelectBuildActor_SetSelectActorMesh_Params params;
	params.InMesh = InMesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ASelectBuildActor::SetIsPlacementEnable(bool Val)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.SetIsPlacementEnable");

	ASelectBuildActor_SetIsPlacementEnable_Params params;
	params.Val = Val;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void ASelectBuildActor::OnParticleLoaded()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.OnParticleLoaded");

	ASelectBuildActor_OnParticleLoaded_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool ASelectBuildActor::IsCurrentPlacementEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.IsCurrentPlacementEnable");

	ASelectBuildActor_IsCurrentPlacementEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool ASelectBuildActor::GetIsPlacementEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.GetIsPlacementEnable");

	ASelectBuildActor_GetIsPlacementEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool ASelectBuildActor::GetIsParticleEffect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function BuildSystem.SelectBuildActor.GetIsParticleEffect");

	ASelectBuildActor_GetIsParticleEffect_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

