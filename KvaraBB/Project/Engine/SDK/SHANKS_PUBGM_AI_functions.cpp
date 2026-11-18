
 
#include "../SDK.hpp"

namespace SDK
{









void AAESpawner::SwitchTeamAI(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.SwitchTeamAI");

	AAESpawner_SwitchTeamAI_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void AAESpawner::OnUnitTakeDamageEvent(float Damage, const struct FDamageEvent& DamageEvent, class AActor* Victim, class AActor* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnUnitTakeDamageEvent");

	AAESpawner_OnUnitTakeDamageEvent_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.Victim = Victim;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AAESpawner::OnUnitSpawned(class AActor* NewUnit, const struct FSTSpawnParam& SpawnParam, class ASTSpawnerBase* Spawner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnUnitSpawned");

	AAESpawner_OnUnitSpawned_Params params;
	params.NewUnit = NewUnit;
	params.SpawnParam = SpawnParam;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void AAESpawner::OnSpawnTimingRipe(bool IsRipe)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnSpawnTimingRipe");

	AAESpawner_OnSpawnTimingRipe_Params params;
	params.IsRipe = IsRipe;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void AAESpawner::OnOwnedMobDead(class ASTExtraSimpleCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnOwnedMobDead");

	AAESpawner_OnOwnedMobDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void AAESpawner::OnOwnedFakePlayerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnOwnedFakePlayerDead");

	AAESpawner_OnOwnedFakePlayerDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool AAESpawner::IsWakeDormantOnNightEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.IsWakeDormantOnNightEnabled");

	AAESpawner_IsWakeDormantOnNightEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool AAESpawner::IsDormantEnabled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.IsDormantEnabled");

	AAESpawner_IsDormantEnabled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TEnumAsByte<EBotCategray> AAESpawner::GetSpeciesCategory()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GetSpeciesCategory");

	AAESpawner_GetSpeciesCategory_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float AAESpawner::GetSpawnerTeamID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GetSpawnerTeamID");

	AAESpawner_GetSpawnerTeamID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







float AAESpawner::GetSpawnerGroupID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GetSpawnerGroupID");

	AAESpawner_GetSpawnerGroupID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










int AAESpawner::GenerateParamID(int ConfigID, int BaseParamID, const struct FSTSpawnParam& SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GenerateParamID");

	AAESpawner_GenerateParamID_Params params;
	params.ConfigID = ConfigID;
	params.BaseParamID = BaseParamID;
	params.SpawnParam = SpawnParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void AAESpawner::DeactivateSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.DeactivateSpawner");

	AAESpawner_DeactivateSpawner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void AAESpawner::BPOnUnitSpawned(class APawn* AIPawn, int ConfigID, const struct FSTSpawnParam& SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.BPOnUnitSpawned");

	AAESpawner_BPOnUnitSpawned_Params params;
	params.AIPawn = AIPawn;
	params.ConfigID = ConfigID;
	params.SpawnParam = SpawnParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AAESpawner::ActivateSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.ActivateSpawner");

	AAESpawner_ActivateSpawner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class AActor* UAESpawnSubsystem::SpawnUnit(const struct FSTSpawnParam& SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.SpawnUnit");

	UAESpawnSubsystem_SpawnUnit_Params params;
	params.SpawnParam = SpawnParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UAESpawnSubsystem::RegisterSpawner(class ASTSpawnerBase* Spawner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.RegisterSpawner");

	UAESpawnSubsystem_RegisterSpawner_Params params;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UAESpawnSubsystem::PreCheck()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.PreCheck");

	UAESpawnSubsystem_PreCheck_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UAESpawnSubsystem::ModifyThreshold(TEnumAsByte<EBotCategray> Category, int Threshold)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.ModifyThreshold");

	UAESpawnSubsystem_ModifyThreshold_Params params;
	params.Category = Category;
	params.Threshold = Threshold;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UAESpawnSubsystem::GetUnitsNumByCategory(TEnumAsByte<EBotCategray> Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.GetUnitsNumByCategory");

	UAESpawnSubsystem_GetUnitsNumByCategory_Params params;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UAESpawnSubsystem::GetUnitConfigID(class AActor* Unit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.GetUnitConfigID");

	UAESpawnSubsystem_GetUnitConfigID_Params params;
	params.Unit = Unit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<class ASTSpawnerBase*> UAESpawnSubsystem::GetGroupedSpawners(int InGroupID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.GetGroupedSpawners");

	UAESpawnSubsystem_GetGroupedSpawners_Params params;
	params.InGroupID = InGroupID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UAESpawnSubsystem::EnQueue(class ASTSpawnerBase* Spawner, struct FSTSpawnParam* SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.EnQueue");

	UAESpawnSubsystem_EnQueue_Params params;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpawnParam != nullptr)
		*SpawnParam = params.SpawnParam;
}





void UAESpawnSubsystem::CleanQueue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.CleanQueue");

	UAESpawnSubsystem_CleanQueue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UAESpawnSubsystem::CheckCategoryLimit(class ASTSpawnerBase* Spawner, int* AvailableBalance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.CheckCategoryLimit");

	UAESpawnSubsystem_CheckCategoryLimit_Params params;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AvailableBalance != nullptr)
		*AvailableBalance = params.AvailableBalance;

	return params.ReturnValue;
}








void UAIActionExecutionComponent::UseItem(int ItemId, int WeaponSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.UseItem");

	UAIActionExecutionComponent_UseItem_Params params;
	params.ItemId = ItemId;
	params.WeaponSlot = WeaponSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UAIActionExecutionComponent::SwapAttachmentItem(int ItemId, int SourceWeaponSlot, int TargetWeaponSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SwapAttachmentItem");

	UAIActionExecutionComponent_SwapAttachmentItem_Params params;
	params.ItemId = ItemId;
	params.SourceWeaponSlot = SourceWeaponSlot;
	params.TargetWeaponSlot = TargetWeaponSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAIActionExecutionComponent::SetGrenadeLastSelectID(int WeaponId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SetGrenadeLastSelectID");

	UAIActionExecutionComponent_SetGrenadeLastSelectID_Params params;
	params.WeaponId = WeaponId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UAIActionExecutionComponent::SetFocusRotation(float InPitch, float InYaw, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SetFocusRotation");

	UAIActionExecutionComponent_SetFocusRotation_Params params;
	params.InPitch = InPitch;
	params.InYaw = InYaw;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UAIActionExecutionComponent::SetCurShootingPose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SetCurShootingPose");

	UAIActionExecutionComponent_SetCurShootingPose_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAIActionExecutionComponent::RescueTarget(class ASTExtraBaseCharacter* RescueCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.RescueTarget");

	UAIActionExecutionComponent_RescueTarget_Params params;
	params.RescueCharacter = RescueCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UAIActionExecutionComponent::OpenFixedRateOfDoors(float fCheckRealPlayerDistance, float fOpenDoorDistance, float fOpenDoorRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.OpenFixedRateOfDoors");

	UAIActionExecutionComponent_OpenFixedRateOfDoors_Params params;
	params.fCheckRealPlayerDistance = fCheckRealPlayerDistance;
	params.fOpenDoorDistance = fOpenDoorDistance;
	params.fOpenDoorRate = fOpenDoorRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UAIActionExecutionComponent::OpenDoor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.OpenDoor");

	UAIActionExecutionComponent_OpenDoor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAIActionExecutionComponent::OnPlayerRespawn(class AUAEPlayerController* PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.OnPlayerRespawn");

	UAIActionExecutionComponent_OnPlayerRespawn_Params params;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UAIActionExecutionComponent::OnFakePlayerRespawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.OnFakePlayerRespawn");

	UAIActionExecutionComponent_OnFakePlayerRespawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UAIActionExecutionComponent::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.IsValid");

	UAIActionExecutionComponent_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UAIActionExecutionComponent::IsFreeCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.IsFreeCamera");

	UAIActionExecutionComponent_IsFreeCamera_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class APickUpWrapperActor* UAIActionExecutionComponent::GetPickActorWithID(int UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.GetPickActorWithID");

	UAIActionExecutionComponent_GetPickActorWithID_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class ASTExtraBaseCharacter* UAIActionExecutionComponent::GetOwnerBaseCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.GetOwnerBaseCharacter");

	UAIActionExecutionComponent_GetOwnerBaseCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UBackpackComponent* UAIActionExecutionComponent::GetBackpackComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.GetBackpackComponent");

	UAIActionExecutionComponent_GetBackpackComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UAIActionExecutionComponent::DropItem(int ItemId, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DropItem");

	UAIActionExecutionComponent_DropItem_Params params;
	params.ItemId = ItemId;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UAIActionExecutionComponent::DoActionQuickMark(int actorUID, int ItemId, int CheckRange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DoActionQuickMark");

	UAIActionExecutionComponent_DoActionQuickMark_Params params;
	params.actorUID = actorUID;
	params.ItemId = ItemId;
	params.CheckRange = CheckRange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}












void UAIActionExecutionComponent::DoActionMoveNew(bool IsStop, bool IsRun, float DirectionX, float DirectionY, float DirectionZ, int SwimUpRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DoActionMoveNew");

	UAIActionExecutionComponent_DoActionMoveNew_Params params;
	params.IsStop = IsStop;
	params.IsRun = IsRun;
	params.DirectionX = DirectionX;
	params.DirectionY = DirectionY;
	params.DirectionZ = DirectionZ;
	params.SwimUpRate = SwimUpRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UAIActionExecutionComponent::DoActionMove(bool IsRun, float DirectionX, float DirectionY, float DirectionZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DoActionMove");

	UAIActionExecutionComponent_DoActionMove_Params params;
	params.IsRun = IsRun;
	params.DirectionX = DirectionX;
	params.DirectionY = DirectionY;
	params.DirectionZ = DirectionZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UAIActionExecutionComponent::DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DoActionFreeCamera");

	UAIActionExecutionComponent_DoActionFreeCamera_Params params;
	params.IsEnter = IsEnter;
	params.InPitch = InPitch;
	params.InYaw = InYaw;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UAIActionExecutionComponent::DisuseItem(int ItemId, int WeaponSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DisuseItem");

	UAIActionExecutionComponent_DisuseItem_Params params;
	params.ItemId = ItemId;
	params.WeaponSlot = WeaponSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UAIActionExecutionComponent::CloseDoor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.CloseDoor");

	UAIActionExecutionComponent_CloseDoor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAIBasicStateInfoComponent::OnItemStateChanged(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBasicStateInfoComponent.OnItemStateChanged");

	UAIBasicStateInfoComponent_OnItemStateChanged_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class APickUpWrapperActor* UAIBasicStateInfoComponent::GetPickActorWithID(int UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBasicStateInfoComponent.GetPickActorWithID");

	UAIBasicStateInfoComponent_GetPickActorWithID_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UAIBehaviorAdapter_VehicleBase::Suicide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.Suicide");

	UAIBehaviorAdapter_VehicleBase_Suicide_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAIBehaviorAdapter_VehicleBase::RPC_Client_SetServiceDebugInfo(const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.RPC_Client_SetServiceDebugInfo");

	UAIBehaviorAdapter_VehicleBase_RPC_Client_SetServiceDebugInfo_Params params;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UAIBehaviorAdapter_VehicleBase::OnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.OnInit");

	UAIBehaviorAdapter_VehicleBase_OnInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAIBehaviorAdapter_VehicleBase::OnDeath(class AController* InstigatedBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.OnDeath");

	UAIBehaviorAdapter_VehicleBase_OnDeath_Params params;
	params.InstigatedBy = InstigatedBy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAIBehaviorAdapter_VehicleBase::OnAICPossessed(class AController* InController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.OnAICPossessed");

	UAIBehaviorAdapter_VehicleBase_OnAICPossessed_Params params;
	params.InController = InController;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









float UAIBehaviorAdapter_VehicleBase::LuaCalculateHitRate(float Distance, float BaseHitRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.LuaCalculateHitRate");

	UAIBehaviorAdapter_VehicleBase_LuaCalculateHitRate_Params params;
	params.Distance = Distance;
	params.BaseHitRate = BaseHitRate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UAIBehaviorAdapter_VehicleBase::IsAlive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.IsAlive");

	UAIBehaviorAdapter_VehicleBase_IsAlive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











void UAIBehaviorAdapter_VehicleBase::HandleOnVehicleUnderAttack(class AController* EventInstigator, const struct FDamageEvent& DamageEvent, class AActor* DamageCauser, float Damage, float OriginDamage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.HandleOnVehicleUnderAttack");

	UAIBehaviorAdapter_VehicleBase_HandleOnVehicleUnderAttack_Params params;
	params.EventInstigator = EventInstigator;
	params.DamageEvent = DamageEvent;
	params.DamageCauser = DamageCauser;
	params.Damage = Damage;
	params.OriginDamage = OriginDamage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAIBehaviorAdapter_VehicleBase::HandleOnVehicleHealthStateChanged(ESTExtraVehicleHealthState InVehicleHealthState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.HandleOnVehicleHealthStateChanged");

	UAIBehaviorAdapter_VehicleBase_HandleOnVehicleHealthStateChanged_Params params;
	params.InVehicleHealthState = InVehicleHealthState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UAIBehaviorAdapter_VehicleBase::HandleOnMeshHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.HandleOnMeshHit");

	UAIBehaviorAdapter_VehicleBase_HandleOnMeshHit_Params params;
	params.HitComponent = HitComponent;
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





void UAIBehaviorAdapter_VehicleBase::BroadcastServiceDebugInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.BroadcastServiceDebugInfo");

	UAIBehaviorAdapter_VehicleBase_BroadcastServiceDebugInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UAIBehaviorAdapter_VehicleBase::BPReceiveDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, TEnumAsByte<EDamageType> DamageEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.BPReceiveDamage");

	UAIBehaviorAdapter_VehicleBase_BPReceiveDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.DamageEventType = DamageEventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool UAIBehaviorAdapter_Tank::UpdateTurretAimingTarget(const struct FVector& TargetLocation, float DeltaSeconds, bool FailedWhenCollided)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.UpdateTurretAimingTarget");

	UAIBehaviorAdapter_Tank_UpdateTurretAimingTarget_Params params;
	params.TargetLocation = TargetLocation;
	params.DeltaSeconds = DeltaSeconds;
	params.FailedWhenCollided = FailedWhenCollided;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UAIBehaviorAdapter_Tank::ShootTurret()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.ShootTurret");

	UAIBehaviorAdapter_Tank_ShootTurret_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UAIBehaviorAdapter_Tank::ShootMachineGun()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.ShootMachineGun");

	UAIBehaviorAdapter_Tank_ShootMachineGun_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UAIBehaviorAdapter_Tank::OnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.OnInit");

	UAIBehaviorAdapter_Tank_OnInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAIBehaviorAdapter_Tank::OnDeath(class AController* InstigatedBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.OnDeath");

	UAIBehaviorAdapter_Tank_OnDeath_Params params;
	params.InstigatedBy = InstigatedBy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UAIBehaviorAdapter_Tank::IsTurretLockTarget(const struct FVector& TargetLocation, float LockRadius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.IsTurretLockTarget");

	UAIBehaviorAdapter_Tank_IsTurretLockTarget_Params params;
	params.TargetLocation = TargetLocation;
	params.LockRadius = LockRadius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UAIBehaviorAdapter_Tank::IsAlive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.IsAlive");

	UAIBehaviorAdapter_Tank_IsAlive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UAIBehaviorAdapter_Tank::HandleOnVehicleHealthStateChanged(ESTExtraVehicleHealthState InVehicleHealthState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.HandleOnVehicleHealthStateChanged");

	UAIBehaviorAdapter_Tank_HandleOnVehicleHealthStateChanged_Params params;
	params.InVehicleHealthState = InVehicleHealthState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAIBehaviorAdapter_Tank::BroadcastTankShootWeapon(bool IsTurret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.BroadcastTankShootWeapon");

	UAIBehaviorAdapter_Tank_BroadcastTankShootWeapon_Params params;
	params.IsTurret = IsTurret;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UAIPerceptionChildPickUpComponent::OnPickUpWrapperHideStateChange(class APickUpWrapperActor* PickUpActor, bool bHide)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIPerceptionChildPickUpComponent.OnPickUpWrapperHideStateChange");

	UAIPerceptionChildPickUpComponent_OnPickUpWrapperHideStateChange_Params params;
	params.PickUpActor = PickUpActor;
	params.bHide = bHide;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UAIPerceptionDynamicItemComponent::UpdateIntCustomAttributeValue(uint32_t InCustomAttributeID, uint64_t InValue, bool bRemove)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIPerceptionDynamicItemComponent.UpdateIntCustomAttributeValue");

	UAIPerceptionDynamicItemComponent_UpdateIntCustomAttributeValue_Params params;
	params.InCustomAttributeID = InCustomAttributeID;
	params.InValue = InValue;
	params.bRemove = bRemove;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAIPerceptionDynamicItemComponent::UpdateInAICell(bool bForceUpdate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIPerceptionDynamicItemComponent.UpdateInAICell");

	UAIPerceptionDynamicItemComponent_UpdateInAICell_Params params;
	params.bForceUpdate = bForceUpdate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UAIPerceptionDynamicItemComponent::UpdateCustomAttributeValue(uint32_t InCustomAttributeID, float InValue, bool bRemove)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIPerceptionDynamicItemComponent.UpdateCustomAttributeValue");

	UAIPerceptionDynamicItemComponent_UpdateCustomAttributeValue_Params params;
	params.InCustomAttributeID = InCustomAttributeID;
	params.InValue = InValue;
	params.bRemove = bRemove;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAIPerceptionDynamicItemComponent::SetEnableState(bool bInEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIPerceptionDynamicItemComponent.SetEnableState");

	UAIPerceptionDynamicItemComponent_SetEnableState_Params params;
	params.bInEnable = bInEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UAIPerceptionDynamicItemComponent::RemoveInAICell()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIPerceptionDynamicItemComponent.RemoveInAICell");

	UAIPerceptionDynamicItemComponent_RemoveInAICell_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UAIPerceptionDynamicItemComponent::RemoveFromCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIPerceptionDynamicItemComponent.RemoveFromCache");

	UAIPerceptionDynamicItemComponent_RemoveFromCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UAIPerceptionDynamicItemComponent::OnMeshAssetSet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIPerceptionDynamicItemComponent.OnMeshAssetSet");

	UAIPerceptionDynamicItemComponent_OnMeshAssetSet_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








uint32_t UAIPerceptionDynamicItemComponent::GetUniqueID(class AActor* DynamicItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIPerceptionDynamicItemComponent.GetUniqueID");

	UAIPerceptionDynamicItemComponent_GetUniqueID_Params params;
	params.DynamicItem = DynamicItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UAIPerceptionDynamicItemComponent::GetIntCustomAttributeList(TArray<struct FIntAIAttribute>* OutIntCustomAttributeList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIPerceptionDynamicItemComponent.GetIntCustomAttributeList");

	UAIPerceptionDynamicItemComponent_GetIntCustomAttributeList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutIntCustomAttributeList != nullptr)
		*OutIntCustomAttributeList = params.OutIntCustomAttributeList;
}







void UAIPerceptionDynamicItemComponent::GetCustomAttributeList(TArray<struct FAIAttribute>* OutCustomAttributeList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIPerceptionDynamicItemComponent.GetCustomAttributeList");

	UAIPerceptionDynamicItemComponent_GetCustomAttributeList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutCustomAttributeList != nullptr)
		*OutCustomAttributeList = params.OutCustomAttributeList;
}









void UAISoundCollectionComponent::OnCollectionHearSound(ESoundType SoundType, const struct FVector& InPos, class AActor* InSourceActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AISoundCollectionComponent.OnCollectionHearSound");

	UAISoundCollectionComponent_OnCollectionHearSound_Params params;
	params.SoundType = SoundType;
	params.InPos = InPos;
	params.InSourceActor = InSourceActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UAISoundCollectionComponent::OnAISoundManagerHear(class AActor* InTargetActor, ESoundType SoundType, const struct FVector& InPos, class AActor* InSourceActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AISoundCollectionComponent.OnAISoundManagerHear");

	UAISoundCollectionComponent_OnAISoundManagerHear_Params params;
	params.InTargetActor = InTargetActor;
	params.SoundType = SoundType;
	params.InPos = InPos;
	params.InSourceActor = InSourceActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







TArray<struct FSoundState> UAISoundCollectionComponent::GetCollectSoundInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AISoundCollectionComponent.GetCollectSoundInfo");

	UAISoundCollectionComponent_GetCollectSoundInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}




















void UAIStateInfoComponentBase::QueryItemStates(int MaxBoxNum, int MaxItemNum, float AirDropBoxRangeInner, float AirDropBoxRangeOuter, float DeathBoxRange, float PickUpWrapperRange, float FindBuildingMaxRange, float FindBuildingMinRange, bool InIsUseItemSpotLoc, int MaxTreasureChestNum, float TreasureChestRange, int MaxWeedNum, float WeedRange, TArray<struct FItemStateData>* ItemStateDatas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.QueryItemStates");

	UAIStateInfoComponentBase_QueryItemStates_Params params;
	params.MaxBoxNum = MaxBoxNum;
	params.MaxItemNum = MaxItemNum;
	params.AirDropBoxRangeInner = AirDropBoxRangeInner;
	params.AirDropBoxRangeOuter = AirDropBoxRangeOuter;
	params.DeathBoxRange = DeathBoxRange;
	params.PickUpWrapperRange = PickUpWrapperRange;
	params.FindBuildingMaxRange = FindBuildingMaxRange;
	params.FindBuildingMinRange = FindBuildingMinRange;
	params.InIsUseItemSpotLoc = InIsUseItemSpotLoc;
	params.MaxTreasureChestNum = MaxTreasureChestNum;
	params.TreasureChestRange = TreasureChestRange;
	params.MaxWeedNum = MaxWeedNum;
	params.WeedRange = WeedRange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemStateDatas != nullptr)
		*ItemStateDatas = params.ItemStateDatas;
}





void UAIStateInfoComponentBase::PrintCacheAINearbyItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.PrintCacheAINearbyItem");

	UAIStateInfoComponentBase_PrintCacheAINearbyItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UAIStateInfoComponentBase::OnPlayerRespawn(class AUAEPlayerController* PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.OnPlayerRespawn");

	UAIStateInfoComponentBase_OnPlayerRespawn_Params params;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UAIStateInfoComponentBase::OnFakePlayerRespawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.OnFakePlayerRespawn");

	UAIStateInfoComponentBase_OnFakePlayerRespawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UAIStateInfoComponentBase::OnAIStateRequestEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.OnAIStateRequestEnd");

	UAIStateInfoComponentBase_OnAIStateRequestEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UAIStateInfoComponentBase::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.IsValid");

	UAIStateInfoComponentBase_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UAIStateInfoComponentBase::IsAvailableNearbyItemType(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.IsAvailableNearbyItemType");

	UAIStateInfoComponentBase_IsAvailableNearbyItemType_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UAIStateInfoComponentBase::IsAvailableBackpackItemType(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.IsAvailableBackpackItemType");

	UAIStateInfoComponentBase_IsAvailableBackpackItemType_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UAIStateInfoComponentBase::HasPlayerAround()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.HasPlayerAround");

	UAIStateInfoComponentBase_HasPlayerAround_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








struct FVector UAIStateInfoComponentBase::GetViewForwardVector(class ACharacter* InCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetViewForwardVector");

	UAIStateInfoComponentBase_GetViewForwardVector_Params params;
	params.InCharacter = InCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FSoundState> UAIStateInfoComponentBase::GetSoundInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetSoundInfo");

	UAIStateInfoComponentBase_GetSoundInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FAIPlayerInteractInfo UAIStateInfoComponentBase::GetPlayerInteractInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetPlayerInteractInfo");

	UAIStateInfoComponentBase_GetPlayerInteractInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class ASTExtraBaseCharacter* UAIStateInfoComponentBase::GetOwnerBaseCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetOwnerBaseCharacter");

	UAIStateInfoComponentBase_GetOwnerBaseCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UAIStateInfoComponentBase::GetNearbyItemState(class ASTExtraBaseCharacter* InPawn, bool* OutIsUseCacheItem, TArray<struct FItemStateData>* NearbyItems)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetNearbyItemState");

	UAIStateInfoComponentBase_GetNearbyItemState_Params params;
	params.InPawn = InPawn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutIsUseCacheItem != nullptr)
		*OutIsUseCacheItem = params.OutIsUseCacheItem;
	if (NearbyItems != nullptr)
		*NearbyItems = params.NearbyItems;
}







uint32_t UAIStateInfoComponentBase::GetFrameNo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetFrameNo");

	UAIStateInfoComponentBase_GetFrameNo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







TArray<struct FDamageSource> UAIStateInfoComponentBase::GetDamageSourcesNew()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetDamageSourcesNew");

	UAIStateInfoComponentBase_GetDamageSourcesNew_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UAIStateInfoComponentBase::GetAIDestroyBulletProbInfo(TArray<struct FAIDestroyBulletProbInfo>* AIDestroyBulletProbInfoList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetAIDestroyBulletProbInfo");

	UAIStateInfoComponentBase_GetAIDestroyBulletProbInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AIDestroyBulletProbInfoList != nullptr)
		*AIDestroyBulletProbInfoList = params.AIDestroyBulletProbInfoList;
}





void UAIStateInfoComponentBase::ClearDamageSources()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.ClearDamageSources");

	UAIStateInfoComponentBase_ClearDamageSources_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBaseStateInfoCollector::RemoveBackpackItemUpdatedMap(uint32_t PlayerKey, bool AllRemove)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BaseStateInfoCollector.RemoveBackpackItemUpdatedMap");

	UBaseStateInfoCollector_RemoveBackpackItemUpdatedMap_Params params;
	params.PlayerKey = PlayerKey;
	params.AllRemove = AllRemove;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UBaseStateInfoCollector::OnBackpackItemListUpdated(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BaseStateInfoCollector.OnBackpackItemListUpdated");

	UBaseStateInfoCollector_OnBackpackItemListUpdated_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UBaseStateInfoCollector::AddBackpackItemListUpdatedDelegate(class UBackpackComponent* InBackpackComp, uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BaseStateInfoCollector.AddBackpackItemListUpdatedDelegate");

	UBaseStateInfoCollector_AddBackpackItemListUpdatedDelegate_Params params;
	params.InBackpackComp = InBackpackComp;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FString UBTService_DebugInfo::GetInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BTService_DebugInfo.GetInfo");

	UBTService_DebugInfo_GetInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








TArray<struct FVector> UBTTask_SummonActor::GetSummonLocations(class AActor* Invoker)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BTTask_SummonActor.GetSummonLocations");

	UBTTask_SummonActor_GetSummonLocations_Params params;
	params.Invoker = Invoker;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UBTTaskNode_NewParachuteJumpBase::DelayClearParachute(class ASTExtraPlayerCharacter* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BTTaskNode_NewParachuteJumpBase.DelayClearParachute");

	UBTTaskNode_NewParachuteJumpBase_DelayClearParachute_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCustomDamageEventComponent::OnRep_ClientEvents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.CustomDamageEventComponent.OnRep_ClientEvents");

	UCustomDamageEventComponent_OnRep_ClientEvents_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UCharacterCustomDamageEventComponent::OnTakeDamageEvent(float Damage, const struct FDamageEvent& DamageEvent, class AActor* Victim, class AActor* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.CharacterCustomDamageEventComponent.OnTakeDamageEvent");

	UCharacterCustomDamageEventComponent_OnTakeDamageEvent_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.Victim = Victim;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIControllerComponent::UnBindDelegates(bool IsEndPlay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.UnBindDelegates");

	UMLAIControllerComponent_UnBindDelegates_Params params;
	params.IsEndPlay = IsEndPlay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIControllerComponent::SetShowDebugAILevelTime(float InSetShowDebugAILevelTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetShowDebugAILevelTime");

	UMLAIControllerComponent_SetShowDebugAILevelTime_Params params;
	params.InSetShowDebugAILevelTime = InSetShowDebugAILevelTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIControllerComponent::SetMLAIStyle(uint32_t NewAIStyle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetMLAIStyle");

	UMLAIControllerComponent_SetMLAIStyle_Params params;
	params.NewAIStyle = NewAIStyle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UMLAIControllerComponent::SetLuaAIParamConfigString(const struct FString& InAIParamConfigString, int InLuaAIParamType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetLuaAIParamConfigString");

	UMLAIControllerComponent_SetLuaAIParamConfigString_Params params;
	params.InAIParamConfigString = InAIParamConfigString;
	params.InLuaAIParamType = InLuaAIParamType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIControllerComponent::SetIsMLAI(bool InIsMLAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetIsMLAI");

	UMLAIControllerComponent_SetIsMLAI_Params params;
	params.InIsMLAI = InIsMLAI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIControllerComponent::SetCurShootingPose(EAIShootingPose InCurAIShootingPose)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetCurShootingPose");

	UMLAIControllerComponent_SetCurShootingPose_Params params;
	params.InCurAIShootingPose = InCurAIShootingPose;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIControllerComponent::SetAllyMasterID(uint32_t InAllyMasterID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetAllyMasterID");

	UMLAIControllerComponent_SetAllyMasterID_Params params;
	params.InAllyMasterID = InAllyMasterID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIControllerComponent::SetAIProvider(uint32_t AIProvider)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetAIProvider");

	UMLAIControllerComponent_SetAIProvider_Params params;
	params.AIProvider = AIProvider;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIControllerComponent::SetAIParams(struct FGameModeAIPlayerParams* InAIParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetAIParams");

	UMLAIControllerComponent_SetAIParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InAIParams != nullptr)
		*InAIParams = params.InAIParams;
}







void UMLAIControllerComponent::SetAILevel(uint32_t NewAILevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetAILevel");

	UMLAIControllerComponent_SetAILevel_Params params;
	params.NewAILevel = NewAILevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UMLAIControllerComponent::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.IsValid");

	UMLAIControllerComponent_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UMLAIControllerComponent::IsTeammateMLAI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.IsTeammateMLAI");

	UMLAIControllerComponent_IsTeammateMLAI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UMLAIControllerComponent::IsFreeCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.IsFreeCamera");

	UMLAIControllerComponent_IsFreeCamera_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UMLAIControllerComponent::InitAIStateInfoComponent(class UAIBasicStateInfoComponent* AIStateInfoComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.InitAIStateInfoComponent");

	UMLAIControllerComponent_InitAIStateInfoComponent_Params params;
	params.AIStateInfoComponent = AIStateInfoComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIControllerComponent::InitAIActionExecutionComponent(class UAIActionExecutionComponent* InAIActionExecutionComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.InitAIActionExecutionComponent");

	UMLAIControllerComponent_InitAIActionExecutionComponent_Params params;
	params.InAIActionExecutionComponent = InAIActionExecutionComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FRotator UMLAIControllerComponent::GetViewRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetViewRotation");

	UMLAIControllerComponent_GetViewRotation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FVector UMLAIControllerComponent::GetViewForwardVector()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetViewForwardVector");

	UMLAIControllerComponent_GetViewForwardVector_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class ASTExtraBaseCharacter* UMLAIControllerComponent::GetOwnerBaseCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetOwnerBaseCharacter");

	UMLAIControllerComponent_GetOwnerBaseCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







uint32_t UMLAIControllerComponent::GetMLAIStyle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetMLAIStyle");

	UMLAIControllerComponent_GetMLAIStyle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UMLAIParachuteJumpComponent* UMLAIControllerComponent::GetMLAIParachuteJumpComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetMLAIParachuteJumpComp");

	UMLAIControllerComponent_GetMLAIParachuteJumpComp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UMLAIControllerComponent::GetIsMLAI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetIsMLAI");

	UMLAIControllerComponent_GetIsMLAI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UBackpackComponent* UMLAIControllerComponent::GetBackpackComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetBackpackComponent");

	UMLAIControllerComponent_GetBackpackComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







uint32_t UMLAIControllerComponent::GetAllyMasterID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAllyMasterID");

	UMLAIControllerComponent_GetAllyMasterID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UAIBasicStateInfoComponent* UMLAIControllerComponent::GetAIStateInfoComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAIStateInfoComp");

	UMLAIControllerComponent_GetAIStateInfoComp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







uint32_t UMLAIControllerComponent::GetAIProvider()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAIProvider");

	UMLAIControllerComponent_GetAIProvider_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FGameModeAIPlayerParams UMLAIControllerComponent::GetAIParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAIParams");

	UMLAIControllerComponent_GetAIParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







uint32_t UMLAIControllerComponent::GetAILevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAILevel");

	UMLAIControllerComponent_GetAILevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UAIActionExecutionComponent* UMLAIControllerComponent::GetAIActionExecutionComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAIActionExecutionComp");

	UMLAIControllerComponent_GetAIActionExecutionComp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UMLAIControllerComponent::FreshShootingPose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.FreshShootingPose");

	UMLAIControllerComponent_FreshShootingPose_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UMLAIControllerComponent::DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.DoActionFreeCamera");

	UMLAIControllerComponent_DoActionFreeCamera_Params params;
	params.IsEnter = IsEnter;
	params.InPitch = InPitch;
	params.InYaw = InYaw;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UMLAIControllerComponent::CheckCameraViewPitchLimit(struct FRotator* InOutTargetRot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.CheckCameraViewPitchLimit");

	UMLAIControllerComponent_CheckCameraViewPitchLimit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InOutTargetRot != nullptr)
		*InOutTargetRot = params.InOutTargetRot;

	return params.ReturnValue;
}





void UMLAIControllerComponent::BindDelegates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.BindDelegates");

	UMLAIControllerComponent_BindDelegates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UMLAIParachuteJumpComponent::ParachuteMove(float ForwardRate, float RightRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.ParachuteMove");

	UMLAIParachuteJumpComponent_ParachuteMove_Params params;
	params.ForwardRate = ForwardRate;
	params.RightRate = RightRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAIParachuteJumpComponent::OpenParachute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.OpenParachute");

	UMLAIParachuteJumpComponent_OpenParachute_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAIParachuteJumpComponent::OnFollowOpenParachute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.OnFollowOpenParachute");

	UMLAIParachuteJumpComponent_OnFollowOpenParachute_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAIParachuteJumpComponent::OnFollowJumpFromPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.OnFollowJumpFromPlane");

	UMLAIParachuteJumpComponent_OnFollowJumpFromPlane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAIParachuteJumpComponent::OnAIEnterFighting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.OnAIEnterFighting");

	UMLAIParachuteJumpComponent_OnAIEnterFighting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAIParachuteJumpComponent::JumpFromPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.JumpFromPoint");

	UMLAIParachuteJumpComponent_JumpFromPoint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAIParachuteJumpComponent::JumpFromPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.JumpFromPlane");

	UMLAIParachuteJumpComponent_JumpFromPlane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UMLAIParachuteJumpComponent::EnterParachuteJumpPhase(const struct FVector& StartLoc, const struct FRotator& StartRot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.EnterParachuteJumpPhase");

	UMLAIParachuteJumpComponent_EnterParachuteJumpPhase_Params params;
	params.StartLoc = StartLoc;
	params.StartRot = StartRot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIParachuteJumpComponent::EndJump(bool bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.EndJump");

	UMLAIParachuteJumpComponent_EndJump_Params params;
	params.bSuccess = bSuccess;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAIParachuteJumpComponent::CloseParachute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.CloseParachute");

	UMLAIParachuteJumpComponent_CloseParachute_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAIStateInfoManager::StartRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.StartRequestCache");

	UMLAIStateInfoManager_StartRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIStateInfoManager::SetUseNewDiffCmds(bool InUseNewDiffCmds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.SetUseNewDiffCmds");

	UMLAIStateInfoManager_SetUseNewDiffCmds_Params params;
	params.InUseNewDiffCmds = InUseNewDiffCmds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIStateInfoManager::SetOpenHeadAndMuzzleInfo(bool InOpenHeadAndMuzzleInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.SetOpenHeadAndMuzzleInfo");

	UMLAIStateInfoManager_SetOpenHeadAndMuzzleInfo_Params params;
	params.InOpenHeadAndMuzzleInfo = InOpenHeadAndMuzzleInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAIStateInfoManager::ResetWhiteList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.ResetWhiteList");

	UMLAIStateInfoManager_ResetWhiteList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAIStateInfoManager::MakeRuntimeDataAssetCopy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.MakeRuntimeDataAssetCopy");

	UMLAIStateInfoManager_MakeRuntimeDataAssetCopy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIStateInfoManager::InitCollectorList(TArray<struct FCollectorInitInfo> CollectorInitInfoList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.InitCollectorList");

	UMLAIStateInfoManager_InitCollectorList_Params params;
	params.CollectorInitInfoList = CollectorInitInfoList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAIStateInfoManager::InitCollector()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.InitCollector");

	UMLAIStateInfoManager_InitCollector_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIStateInfoManager::Init(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.Init");

	UMLAIStateInfoManager_Init_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UMLAIStateInfoManager::GetSinglePlayerStateInfoToCache(class UWorld* InWorld, class ASTExtraPlayerCharacter* Player)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.GetSinglePlayerStateInfoToCache");

	UMLAIStateInfoManager_GetSinglePlayerStateInfoToCache_Params params;
	params.InWorld = InWorld;
	params.Player = Player;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIStateInfoManager::GetGlobalGameStateToCache(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.GetGlobalGameStateToCache");

	UMLAIStateInfoManager_GetGlobalGameStateToCache_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIStateInfoManager::GetDiffGlobalGameStateToCacheGeneral(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.GetDiffGlobalGameStateToCacheGeneral");

	UMLAIStateInfoManager_GetDiffGlobalGameStateToCacheGeneral_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIStateInfoManager::GetDiffAllPlayerAIStateInfoToCacheGeneral(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.GetDiffAllPlayerAIStateInfoToCacheGeneral");

	UMLAIStateInfoManager_GetDiffAllPlayerAIStateInfoToCacheGeneral_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAIStateInfoManager::GetAllPlayerStateInfoToCache(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.GetAllPlayerStateInfoToCache");

	UMLAIStateInfoManager_GetAllPlayerStateInfoToCache_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAIStateInfoManager::EndRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.EndRequestCache");

	UMLAIStateInfoManager_EndRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UMLAIStateInfoManager::CollectCandidateAIStateInfoToCache(class UWorld* InWorld, EStatePlayerType CollectPlayerType, struct FAIActingCandidateData* CandidateData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.CollectCandidateAIStateInfoToCache");

	UMLAIStateInfoManager_CollectCandidateAIStateInfoToCache_Params params;
	params.InWorld = InWorld;
	params.CollectPlayerType = CollectPlayerType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CandidateData != nullptr)
		*CandidateData = params.CandidateData;
}









void UMLAIStateInfoManager::CollectAIStateInfoToCache(class UWorld* InWorld, EStatePlayerType CollectPlayerType, class ASTExtraBaseCharacter* PlayerPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.CollectAIStateInfoToCache");

	UMLAIStateInfoManager_CollectAIStateInfoToCache_Params params;
	params.InWorld = InWorld;
	params.CollectPlayerType = CollectPlayerType;
	params.PlayerPawn = PlayerPawn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::UpdateSpecialZoneStateChanged(class ASpecialZoneActor* InSpecialZone)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.UpdateSpecialZoneStateChanged");

	UMLAISubSystem_UpdateSpecialZoneStateChanged_Params params;
	params.InSpecialZone = InSpecialZone;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::UpdateSpecialZoneInfo(struct FSpecialZoneState* NewZoneInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.UpdateSpecialZoneInfo");

	UMLAISubSystem_UpdateSpecialZoneInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewZoneInfo != nullptr)
		*NewZoneInfo = params.NewZoneInfo;
}







void UMLAISubSystem::UpdateRedZoneState(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.UpdateRedZoneState");

	UMLAISubSystem_UpdateRedZoneState_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAISubSystem::UpdateMercenaryPlayerWhite()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.UpdateMercenaryPlayerWhite");

	UMLAISubSystem_UpdateMercenaryPlayerWhite_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAISubSystem::UpdateAirDropBoxStates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.UpdateAirDropBoxStates");

	UMLAISubSystem_UpdateAirDropBoxStates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::UnregisterSpecialMapping(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.UnregisterSpecialMapping");

	UMLAISubSystem_UnregisterSpecialMapping_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::UnregisterDynamicItemComponent(class UAIPerceptionDynamicItemComponent* InDynamicItemComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.UnregisterDynamicItemComponent");

	UMLAISubSystem_UnregisterDynamicItemComponent_Params params;
	params.InDynamicItemComp = InDynamicItemComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::UnregisterDestructibleItemComponent(class UAIPerceptionDynamicItemComponent* InComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.UnregisterDestructibleItemComponent");

	UMLAISubSystem_UnregisterDestructibleItemComponent_Params params;
	params.InComp = InComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAISubSystem::StartRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.StartRequestCache");

	UMLAISubSystem_StartRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UMLAISubSystem::SetWhitelistPlayerStatesSwitch(bool InSwitch, bool InReset, bool InCheckGlobalState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetWhitelistPlayerStatesSwitch");

	UMLAISubSystem_SetWhitelistPlayerStatesSwitch_Params params;
	params.InSwitch = InSwitch;
	params.InReset = InReset;
	params.InCheckGlobalState = InCheckGlobalState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetVehicleWeekPointConfig(TMap<uint32_t, struct FString> InVehicleWeekPointConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetVehicleWeekPointConfig");

	UMLAISubSystem_SetVehicleWeekPointConfig_Params params;
	params.InVehicleWeekPointConfig = InVehicleWeekPointConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetUseTablePool(int InUseTablePool)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetUseTablePool");

	UMLAISubSystem_SetUseTablePool_Params params;
	params.InUseTablePool = InUseTablePool;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UMLAISubSystem::SetStrAIAttribute(uint32_t InPlayerKey, uint32_t InAttributeID, const struct FString& InAttributeValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetStrAIAttribute");

	UMLAISubSystem_SetStrAIAttribute_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InAttributeID = InAttributeID;
	params.InAttributeValue = InAttributeValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetReportAllDynamicItems(bool bInEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetReportAllDynamicItems");

	UMLAISubSystem_SetReportAllDynamicItems_Params params;
	params.bInEnable = bInEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UMLAISubSystem::SetPlayerRevivalType(uint32_t InPlayerKey, int InRevivalType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetPlayerRevivalType");

	UMLAISubSystem_SetPlayerRevivalType_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InRevivalType = InRevivalType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetPlayerAttributeModifyCompConfig(TMap<uint32_t, struct FString> InAttributeModifyCompConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetPlayerAttributeModifyCompConfig");

	UMLAISubSystem_SetPlayerAttributeModifyCompConfig_Params params;
	params.InAttributeModifyCompConfig = InAttributeModifyCompConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetPawnStateConfig(TMap<int, uint32_t> InPawnStateConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetPawnStateConfig");

	UMLAISubSystem_SetPawnStateConfig_Params params;
	params.InPawnStateConfig = InPawnStateConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetOverrideMapID(int InOverrideMapID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetOverrideMapID");

	UMLAISubSystem_SetOverrideMapID_Params params;
	params.InOverrideMapID = InOverrideMapID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetOpenBTCameraInfo(bool InOpenBTCameraInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetOpenBTCameraInfo");

	UMLAISubSystem_SetOpenBTCameraInfo_Params params;
	params.InOpenBTCameraInfo = InOpenBTCameraInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetNonMLAIBuffConfig(TMap<int, uint32_t> InBuffIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetNonMLAIBuffConfig");

	UMLAISubSystem_SetNonMLAIBuffConfig_Params params;
	params.InBuffIDs = InBuffIDs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetNewbieRealHiddenScore(int InNewbieRealHiddenScore)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetNewbieRealHiddenScore");

	UMLAISubSystem_SetNewbieRealHiddenScore_Params params;
	params.InNewbieRealHiddenScore = InNewbieRealHiddenScore;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetNewbieMatchCount(int InNewbieMatchCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetNewbieMatchCount");

	UMLAISubSystem_SetNewbieMatchCount_Params params;
	params.InNewbieMatchCount = InNewbieMatchCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetNeedAllInfo(bool bInNeedAllInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetNeedAllInfo");

	UMLAISubSystem_SetNeedAllInfo_Params params;
	params.bInNeedAllInfo = bInNeedAllInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetModGameType(int InModGameType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetModGameType");

	UMLAISubSystem_SetModGameType_Params params;
	params.InModGameType = InModGameType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetMLAIStateInfoManager(class UMLAIStateInfoManager* InMLAIStateInfoManager)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetMLAIStateInfoManager");

	UMLAISubSystem_SetMLAIStateInfoManager_Params params;
	params.InMLAIStateInfoManager = InMLAIStateInfoManager;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetMLAIBuffConfig(TMap<int, uint32_t> InBuffIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetMLAIBuffConfig");

	UMLAISubSystem_SetMLAIBuffConfig_Params params;
	params.InBuffIDs = InBuffIDs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UMLAISubSystem::SetIntAIAttribute(uint32_t InPlayerKey, uint32_t InAttributeID, uint64_t InAttributeValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetIntAIAttribute");

	UMLAISubSystem_SetIntAIAttribute_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InAttributeID = InAttributeID;
	params.InAttributeValue = InAttributeValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UMLAISubSystem::SetGameAttribute(uint32_t InAttributeID, float InAttributeValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetGameAttribute");

	UMLAISubSystem_SetGameAttribute_Params params;
	params.InAttributeID = InAttributeID;
	params.InAttributeValue = InAttributeValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetCDSkillConfig(TMap<int, uint32_t> InAttributeCDSkillConfigs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetCDSkillConfig");

	UMLAISubSystem_SetCDSkillConfig_Params params;
	params.InAttributeCDSkillConfigs = InAttributeCDSkillConfigs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetBackpackItemUpdatedMapSwitch(bool bInSwitch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetBackpackItemUpdatedMapSwitch");

	UMLAISubSystem_SetBackpackItemUpdatedMapSwitch_Params params;
	params.bInSwitch = bInSwitch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UMLAISubSystem::SetAirDropLocation(int InAirDropTag, const struct FVector& AirDropLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetAirDropLocation");

	UMLAISubSystem_SetAirDropLocation_Params params;
	params.InAirDropTag = InAirDropTag;
	params.AirDropLocation = AirDropLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::SetAIAttributeModifyCompConfig(TMap<uint32_t, struct FString> InAttributeModifyCompConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetAIAttributeModifyCompConfig");

	UMLAISubSystem_SetAIAttributeModifyCompConfig_Params params;
	params.InAttributeModifyCompConfig = InAttributeModifyCompConfig;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














void UMLAISubSystem::SetAIAttribute_CastEnergyWithCount(uint32_t InPlayerKey, uint32_t InAttributeID, int InCurCount, float InCurEnergy, float InLastActiveTime, int InMaxCount, float InMaxEnergy, float InDeltaEnergy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetAIAttribute_CastEnergyWithCount");

	UMLAISubSystem_SetAIAttribute_CastEnergyWithCount_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InAttributeID = InAttributeID;
	params.InCurCount = InCurCount;
	params.InCurEnergy = InCurEnergy;
	params.InLastActiveTime = InLastActiveTime;
	params.InMaxCount = InMaxCount;
	params.InMaxEnergy = InMaxEnergy;
	params.InDeltaEnergy = InDeltaEnergy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UMLAISubSystem::SetAIAttribute(uint32_t InPlayerKey, uint32_t InAttributeID, float InAttributeValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetAIAttribute");

	UMLAISubSystem_SetAIAttribute_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InAttributeID = InAttributeID;
	params.InAttributeValue = InAttributeValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UMLAISubSystem::ResetAttributeIDToPlayerKeysMap(uint32_t InAttributeID, TArray<uint32_t> InPlayerKeys)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.ResetAttributeIDToPlayerKeysMap");

	UMLAISubSystem_ResetAttributeIDToPlayerKeysMap_Params params;
	params.InAttributeID = InAttributeID;
	params.InPlayerKeys = InPlayerKeys;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UMLAISubSystem::RemoveSpecialZoneInfo(uint32_t ZoneID, uint32_t Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.RemoveSpecialZoneInfo");

	UMLAISubSystem_RemoveSpecialZoneInfo_Params params;
	params.ZoneID = ZoneID;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UMLAISubSystem::RemoveMercenary2MasterMap(class APawn* MercenaryAI, class APawn* Master)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.RemoveMercenary2MasterMap");

	UMLAISubSystem_RemoveMercenary2MasterMap_Params params;
	params.MercenaryAI = MercenaryAI;
	params.Master = Master;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::RemoveFromSilentMLAIList(uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.RemoveFromSilentMLAIList");

	UMLAISubSystem_RemoveFromSilentMLAIList_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::RemoveFromPlayerWhitelist(uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.RemoveFromPlayerWhitelist");

	UMLAISubSystem_RemoveFromPlayerWhitelist_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::RemoveAICheckVisibilityFilteredActor(uint32_t ActorId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.RemoveAICheckVisibilityFilteredActor");

	UMLAISubSystem_RemoveAICheckVisibilityFilteredActor_Params params;
	params.ActorId = ActorId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UMLAISubSystem::RegisterSpecialMapping(const struct FString& Key, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.RegisterSpecialMapping");

	UMLAISubSystem_RegisterSpecialMapping_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::RegisterDynamicItemComponent(class UAIPerceptionDynamicItemComponent* InDynamicItemComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.RegisterDynamicItemComponent");

	UMLAISubSystem_RegisterDynamicItemComponent_Params params;
	params.InDynamicItemComp = InDynamicItemComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::RegisterDestructibleItemComponent(class UAIPerceptionDynamicItemComponent* InComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.RegisterDestructibleItemComponent");

	UMLAISubSystem_RegisterDestructibleItemComponent_Params params;
	params.InComp = InComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}













void UMLAISubSystem::OnVehicleDamageInfo(class AController* InstigatorController, class AController* VictimController, int DamageTypeId, float Damage, bool bIsFatalHealthCost, class AActor* DamageCauser, class AActor* VictimVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnVehicleDamageInfo");

	UMLAISubSystem_OnVehicleDamageInfo_Params params;
	params.InstigatorController = InstigatorController;
	params.VictimController = VictimController;
	params.DamageTypeId = DamageTypeId;
	params.Damage = Damage;
	params.bIsFatalHealthCost = bIsFatalHealthCost;
	params.DamageCauser = DamageCauser;
	params.VictimVehicle = VictimVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UMLAISubSystem::OnPlayerStartFire(uint32_t PlayerKey, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnPlayerStartFire");

	UMLAISubSystem_OnPlayerStartFire_Params params;
	params.PlayerKey = PlayerKey;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::OnPlayerPickUpItem(uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnPlayerPickUpItem");

	UMLAISubSystem_OnPlayerPickUpItem_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














void UMLAISubSystem::OnPlayerDamageInfo(class ASTExtraPlayerState* InstigatorPlayerState, class ASTExtraPlayerState* VictimPlayerState, float Damage, const struct FDamageEvent& DamageEvent, float DamageBeforeCalArmor, bool bIsFatalHealthCost, class AActor* DamageCauser, bool bIsNearDeathHealthCost)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnPlayerDamageInfo");

	UMLAISubSystem_OnPlayerDamageInfo_Params params;
	params.InstigatorPlayerState = InstigatorPlayerState;
	params.VictimPlayerState = VictimPlayerState;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.DamageBeforeCalArmor = DamageBeforeCalArmor;
	params.bIsFatalHealthCost = bIsFatalHealthCost;
	params.DamageCauser = DamageCauser;
	params.bIsNearDeathHealthCost = bIsNearDeathHealthCost;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::OnItemStateChanged(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnItemStateChanged");

	UMLAISubSystem_OnItemStateChanged_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::OnAirDropBoxSpawn(class AAirDropBoxActor* AirDropBoxActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnAirDropBoxSpawn");

	UMLAISubSystem_OnAirDropBoxSpawn_Params params;
	params.AirDropBoxActor = AirDropBoxActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UMLAISubSystem::OnAirAttackInfo(EAirAttackInfo airattacktype, int waveIndex, const struct FAirAttackOrder& InAirAttackOrder, const struct FVector& InAirAttackArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnAirAttackInfo");

	UMLAISubSystem_OnAirAttackInfo_Params params;
	params.airattacktype = airattacktype;
	params.waveIndex = waveIndex;
	params.InAirAttackOrder = InAirAttackOrder;
	params.InAirAttackArea = InAirAttackArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UMLAISubSystem::IsAvailableBackpackItemType(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.IsAvailableBackpackItemType");

	UMLAISubSystem_IsAvailableBackpackItemType_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







bool UMLAISubSystem::IsAIBotGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.IsAIBotGame");

	UMLAISubSystem_IsAIBotGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UMLAISubSystem::InsertPlayerWhitelist(uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.InsertPlayerWhitelist");

	UMLAISubSystem_InsertPlayerWhitelist_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::InsertIntoSilentMLAIList(uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.InsertIntoSilentMLAIList");

	UMLAISubSystem_InsertIntoSilentMLAIList_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::GetVoiceRoomInfo(TArray<struct FBattleVoiceRoomInfo>* BattleVoiceRoomInfos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetVoiceRoomInfo");

	UMLAISubSystem_GetVoiceRoomInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BattleVoiceRoomInfos != nullptr)
		*BattleVoiceRoomInfos = params.BattleVoiceRoomInfos;
}







struct FString UMLAISubSystem::GetServerIPAddress()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetServerIPAddress");

	UMLAISubSystem_GetServerIPAddress_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float UMLAISubSystem::GetLossTime(class ASTExtraPlayerController* PlayerController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetLossTime");

	UMLAISubSystem_GetLossTime_Params params;
	params.PlayerController = PlayerController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








int UMLAISubSystem::GetItemDurability(int InTypeSpecificID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetItemDurability");

	UMLAISubSystem_GetItemDurability_Params params;
	params.InTypeSpecificID = InTypeSpecificID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UMLAISubSystem::GetCacheStrAIAttributes(uint32_t InPlayerKey, TArray<struct FStrAIAttribute>* StrAttributes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetCacheStrAIAttributes");

	UMLAISubSystem_GetCacheStrAIAttributes_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (StrAttributes != nullptr)
		*StrAttributes = params.StrAttributes;
}








void UMLAISubSystem::GetCacheIntAIAttributes(uint32_t InPlayerKey, TArray<struct FIntAIAttribute>* IntAttributes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetCacheIntAIAttributes");

	UMLAISubSystem_GetCacheIntAIAttributes_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IntAttributes != nullptr)
		*IntAttributes = params.IntAttributes;
}








void UMLAISubSystem::GetCacheAIAttributes(uint32_t InPlayerKey, TArray<struct FAIAttribute>* Attributes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetCacheAIAttributes");

	UMLAISubSystem_GetCacheAIAttributes_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Attributes != nullptr)
		*Attributes = params.Attributes;
}







int UMLAISubSystem::GetAndCheckAirDopTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetAndCheckAirDopTag");

	UMLAISubSystem_GetAndCheckAirDopTag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UMLAISubSystem::FindPlayerWhiteRange(const struct FVector& InLocation, float InRange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.FindPlayerWhiteRange");

	UMLAISubSystem_FindPlayerWhiteRange_Params params;
	params.InLocation = InLocation;
	params.InRange = InRange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::FindMasterTeamMateList(class APawn* Master)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.FindMasterTeamMateList");

	UMLAISubSystem_FindMasterTeamMateList_Params params;
	params.Master = Master;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAISubSystem::EndRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.EndRequestCache");

	UMLAISubSystem_EndRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAISubSystem::ClearSpecialMappings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.ClearSpecialMappings");

	UMLAISubSystem_ClearSpecialMappings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::ClearAttributeIDToPlayerKeysMap(uint32_t InAttributeID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.ClearAttributeIDToPlayerKeysMap");

	UMLAISubSystem_ClearAttributeIDToPlayerKeysMap_Params params;
	params.InAttributeID = InAttributeID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void UMLAISubSystem::ChangeMLAIInfo(class AFakePlayerAIController* AIController, const struct FString& Name, uint64_t DisplayUID, struct FPlayerOBInfo* OBInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.ChangeMLAIInfo");

	UMLAISubSystem_ChangeMLAIInfo_Params params;
	params.AIController = AIController;
	params.Name = Name;
	params.DisplayUID = DisplayUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OBInfo != nullptr)
		*OBInfo = params.OBInfo;
}








bool UMLAISubSystem::CanGetState(uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.CanGetState");

	UMLAISubSystem_CanGetState_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UMLAISubSystem::CanFindInSilentMLAIList(uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.CanFindInSilentMLAIList");

	UMLAISubSystem_CanFindInSilentMLAIList_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








void UMLAISubSystem::AddVoiceServerURLInfo(uint32_t PlayerKey, const struct FString& BattleVoiceServerURL)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.AddVoiceServerURLInfo");

	UMLAISubSystem_AddVoiceServerURLInfo_Params params;
	params.PlayerKey = PlayerKey;
	params.BattleVoiceServerURL = BattleVoiceServerURL;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UMLAISubSystem::AddVoiceRoomInfo(uint32_t TeamID, const struct FString& BattleVoiceRoomID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.AddVoiceRoomInfo");

	UMLAISubSystem_AddVoiceRoomInfo_Params params;
	params.TeamID = TeamID;
	params.BattleVoiceRoomID = BattleVoiceRoomID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::AddTeammateMLAITeamID(uint32_t TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.AddTeammateMLAITeamID");

	UMLAISubSystem_AddTeammateMLAITeamID_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::AddPendingUpdateSpecialZone(class ASpecialZoneActor* InSpecialZone)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.AddPendingUpdateSpecialZone");

	UMLAISubSystem_AddPendingUpdateSpecialZone_Params params;
	params.InSpecialZone = InSpecialZone;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UMLAISubSystem::AddMercenary2MasterMap(class APawn* MercenaryAI, class APawn* Master, bool bIncludesTeammates)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.AddMercenary2MasterMap");

	UMLAISubSystem_AddMercenary2MasterMap_Params params;
	params.MercenaryAI = MercenaryAI;
	params.Master = Master;
	params.bIncludesTeammates = bIncludesTeammates;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAISubSystem::AddAICheckVisibilityFilteredActor(uint32_t ActorId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.AddAICheckVisibilityFilteredActor");

	UMLAISubSystem_AddAICheckVisibilityFilteredActor_Params params;
	params.ActorId = ActorId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAITrainingComponent::StopRunnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.StopRunnable");

	UMLAITrainingComponent_StopRunnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UMLAITrainingComponent::SetPauseGamePlayerState(class APlayerState* InPlayerState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.SetPauseGamePlayerState");

	UMLAITrainingComponent_SetPauseGamePlayerState_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









bool UMLAITrainingComponent::SetPause(bool bInPause, float InPauseTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.SetPause");

	UMLAITrainingComponent_SetPause_Params params;
	params.bInPause = bInPause;
	params.InPauseTime = InPauseTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UMLAITrainingComponent::SendAIStateRequest(TArray<unsigned char> Packet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.SendAIStateRequest");

	UMLAITrainingComponent_SendAIStateRequest_Params params;
	params.Packet = Packet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UMLAITrainingComponent::IsRequestAIState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.IsRequestAIState");

	UMLAITrainingComponent_IsRequestAIState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UMLAITrainingComponent::InitRunnable(float InStartCollectingInterval, float InSendInterval, float InTimeOutInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.InitRunnable");

	UMLAITrainingComponent_InitRunnable_Params params;
	params.InStartCollectingInterval = InStartCollectingInterval;
	params.InSendInterval = InSendInterval;
	params.InTimeOutInterval = InTimeOutInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UMLAITrainingComponent::EndRequestAIState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.EndRequestAIState");

	UMLAITrainingComponent_EndRequestAIState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ASpecialZoneActor::UpdateType(int InType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.UpdateType");

	ASpecialZoneActor_UpdateType_Params params;
	params.InType = InType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ASpecialZoneActor::UpdateIntCustomAttributeValue(uint32_t InCustomAttributeID, uint64_t InValue, bool bRemove)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.UpdateIntCustomAttributeValue");

	ASpecialZoneActor_UpdateIntCustomAttributeValue_Params params;
	params.InCustomAttributeID = InCustomAttributeID;
	params.InValue = InValue;
	params.bRemove = bRemove;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ASpecialZoneActor::UpdateHealth(float InHealth)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.UpdateHealth");

	ASpecialZoneActor_UpdateHealth_Params params;
	params.InHealth = InHealth;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ASpecialZoneActor::UpdateExtraState(uint32_t InExtraState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.UpdateExtraState");

	ASpecialZoneActor_UpdateExtraState_Params params;
	params.InExtraState = InExtraState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ASpecialZoneActor::UpdateCustomState(int InCustomState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.UpdateCustomState");

	ASpecialZoneActor_UpdateCustomState_Params params;
	params.InCustomState = InCustomState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ASpecialZoneActor::UpdateCustomAttributeValue(uint32_t InCustomAttributeID, float InValue, bool bRemove)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.UpdateCustomAttributeValue");

	ASpecialZoneActor_UpdateCustomAttributeValue_Params params;
	params.InCustomAttributeID = InCustomAttributeID;
	params.InValue = InValue;
	params.bRemove = bRemove;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void ASpecialZoneActor::SetIsReport(bool bInReport)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.SetIsReport");

	ASpecialZoneActor_SetIsReport_Params params;
	params.bInReport = bInReport;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void ASpecialZoneActor::HandleFragmentsStateChanged(int FragmentItemIndex, EPhotonFracturedMeshFragmentState State, TArray<EPhotonFracturedMeshFragmentState> FragmentState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.HandleFragmentsStateChanged");

	ASpecialZoneActor_HandleFragmentsStateChanged_Params params;
	params.FragmentItemIndex = FragmentItemIndex;
	params.State = State;
	params.FragmentState = FragmentState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







struct FSpecialZoneState ASpecialZoneActor::GetSpecialZoneState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.GetSpecialZoneState");

	ASpecialZoneActor_GetSpecialZoneState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void ASpecialZoneActor::GetIntCustomAttributeList(TArray<struct FIntAIAttribute>* OutIntCustomAttributeList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.GetIntCustomAttributeList");

	ASpecialZoneActor_GetIntCustomAttributeList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutIntCustomAttributeList != nullptr)
		*OutIntCustomAttributeList = params.OutIntCustomAttributeList;
}







void ASpecialZoneActor::GetCustomAttributeList(TArray<struct FAIAttribute>* OutCustomAttributeList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.GetCustomAttributeList");

	ASpecialZoneActor_GetCustomAttributeList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutCustomAttributeList != nullptr)
		*OutCustomAttributeList = params.OutCustomAttributeList;
}





void ASpecialZoneActor::ClearCustomAttributeMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.ClearCustomAttributeMap");

	ASpecialZoneActor_ClearCustomAttributeMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USTStrategyLocation_Range::ModifyBaseLocation(const struct FVector& InLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.ModifyBaseLocation");

	USTStrategyLocation_Range_ModifyBaseLocation_Params params;
	params.InLocation = InLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool USTStrategyLocation_Range::GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.GetSpawnLocation");

	USTStrategyLocation_Range_GetSpawnLocation_Params params;
	params.Requester = Requester;
	params.ReferenceCount = ReferenceCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutArr != nullptr)
		*OutArr = params.OutArr;

	return params.ReturnValue;
}








void USTStrategyLocation_Range::AddSpawnArea(const struct FSpawnArea& NewArea, bool ForceAdd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.AddSpawnArea");

	USTStrategyLocation_Range_AddSpawnArea_Params params;
	params.NewArea = NewArea;
	params.ForceAdd = ForceAdd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USTStrategyLocation_Range::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.ActivateStrategy");

	USTStrategyLocation_Range_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









TArray<struct FUnitConfig> USTStrategySpecies_Candidate::Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Candidate.Supply");

	USTStrategySpecies_Candidate_Supply_Params params;
	params.ReferencedCount = ReferencedCount;
	params.SpotSpecies = SpotSpecies;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void USTStrategySpecies_Candidate::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Candidate.ActivateStrategy");

	USTStrategySpecies_Candidate_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









TArray<struct FUnitConfig> USTStrategySpecies_Lua::Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Lua.Supply");

	USTStrategySpecies_Lua_Supply_Params params;
	params.ReferencedCount = ReferencedCount;
	params.SpotSpecies = SpotSpecies;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void USTStrategySpecies_Lua::LuaSupply(int ReferencedCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Lua.LuaSupply");

	USTStrategySpecies_Lua_LuaSupply_Params params;
	params.ReferencedCount = ReferencedCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USTStrategyTiming_Event::TickStrategy(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyTiming_Event.TickStrategy");

	USTStrategyTiming_Event_TickStrategy_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USTStrategyTiming_Event::OnSpawnEventBroadcast(uint32_t SpawnerID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyTiming_Event.OnSpawnEventBroadcast");

	USTStrategyTiming_Event_OnSpawnEventBroadcast_Params params;
	params.SpawnerID = SpawnerID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void USTStrategyTiming_Event::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyTiming_Event.ActivateStrategy");

	USTStrategyTiming_Event_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UTeammateMLAIControllerComponent::SetMLAIStyle(uint32_t NewAIStyle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.SetMLAIStyle");

	UTeammateMLAIControllerComponent_SetMLAIStyle_Params params;
	params.NewAIStyle = NewAIStyle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UTeammateMLAIControllerComponent::SetIsMLAI(bool InIsMLAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.SetIsMLAI");

	UTeammateMLAIControllerComponent_SetIsMLAI_Params params;
	params.InIsMLAI = InIsMLAI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UTeammateMLAIControllerComponent::SetAIParams(struct FGameModeAIPlayerParams* InAIParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.SetAIParams");

	UTeammateMLAIControllerComponent_SetAIParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InAIParams != nullptr)
		*InAIParams = params.InAIParams;
}







void UTeammateMLAIControllerComponent::SetAILevel(uint32_t NewAILevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.SetAILevel");

	UTeammateMLAIControllerComponent_SetAILevel_Params params;
	params.NewAILevel = NewAILevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UTeammateMLAIControllerComponent::OnTeammateMLAILost()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.OnTeammateMLAILost");

	UTeammateMLAIControllerComponent_OnTeammateMLAILost_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UTeammateMLAIControllerComponent::OnTeammateMLAIExit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.OnTeammateMLAIExit");

	UTeammateMLAIControllerComponent_OnTeammateMLAIExit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UTeammateMLAIControllerComponent::OnControllerStateChanged(EStateType StateType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.OnControllerStateChanged");

	UTeammateMLAIControllerComponent_OnControllerStateChanged_Params params;
	params.StateType = StateType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







bool UTeammateMLAIControllerComponent::IsTakeOverTeammate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.IsTakeOverTeammate");

	UTeammateMLAIControllerComponent_IsTakeOverTeammate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







uint32_t UTeammateMLAIControllerComponent::GetMLAIStyle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.GetMLAIStyle");

	UTeammateMLAIControllerComponent_GetMLAIStyle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FGameModeAIPlayerParams UTeammateMLAIControllerComponent::GetAIParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.GetAIParams");

	UTeammateMLAIControllerComponent_GetAIParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







uint32_t UTeammateMLAIControllerComponent::GetAILevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.GetAILevel");

	UTeammateMLAIControllerComponent_GetAILevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void AVehicleAIController::SetCurEnemy(class APawn* NewEnemy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.SetCurEnemy");

	AVehicleAIController_SetCurEnemy_Params params;
	params.NewEnemy = NewEnemy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UVehiclePathFollowingComponent* AVehicleAIController::GetVehiclePathFollow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.GetVehiclePathFollow");

	AVehicleAIController_GetVehiclePathFollow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class APawn* AVehicleAIController::GetCurEnemy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.GetCurEnemy");

	AVehicleAIController_GetCurEnemy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








float AVehicleAIController::GetAIHitRate(float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.GetAIHitRate");

	AVehicleAIController_GetAIHitRate_Params params;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void AVehicleAIController::ExplodeAndDeath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.ExplodeAndDeath");

	AVehicleAIController_ExplodeAndDeath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void AVehicleAIController::DelayInitVehicleWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.DelayInitVehicleWeapon");

	AVehicleAIController_DelayInitVehicleWeapon_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleAIUserComponent::ServerVehicleLeanOut(bool bLeanOut)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerVehicleLeanOut");

	UVehicleAIUserComponent_ServerVehicleLeanOut_Params params;
	params.bLeanOut = bLeanOut;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleAIUserComponent::ServerExitVehicleEx(bool bMustExit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerExitVehicleEx");

	UVehicleAIUserComponent_ServerExitVehicleEx_Params params;
	params.bMustExit = bMustExit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAIUserComponent::ServerExitVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerExitVehicle");

	UVehicleAIUserComponent_ServerExitVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UVehicleAIUserComponent::ServerEnterVehicle(class ASTExtraVehicleBase* InVehicle, unsigned char SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerEnterVehicle");

	UVehicleAIUserComponent_ServerEnterVehicle_Params params;
	params.InVehicle = InVehicle;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleAIUserComponent::ServerChangeVehicleSeat(int InSeatIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerChangeVehicleSeat");

	UVehicleAIUserComponent_ServerChangeVehicleSeat_Params params;
	params.InSeatIndex = InSeatIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UVehicleAIUserComponent::MulticastExitVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.MulticastExitVehicle");

	UVehicleAIUserComponent_MulticastExitVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void UVehicleAIUserComponent::MulticastEnterVehicle(class ASTExtraVehicleBase* InVehicle, class ASTExtraPlayerCharacter* Pawn, bool bSuccess, unsigned char SeatType, int SeatIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.MulticastEnterVehicle");

	UVehicleAIUserComponent_MulticastEnterVehicle_Params params;
	params.InVehicle = InVehicle;
	params.Pawn = Pawn;
	params.bSuccess = bSuccess;
	params.SeatType = SeatType;
	params.SeatIndex = SeatIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleAIUserComponent::MulticastChangeVehicleSeat(int InSeatIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.MulticastChangeVehicleSeat");

	UVehicleAIUserComponent_MulticastChangeVehicleSeat_Params params;
	params.InSeatIndex = InSeatIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UVehicleCustomDamageEventComponent::OnVehicleHPFuelChanged(float Hp, float Fuel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleCustomDamageEventComponent.OnVehicleHPFuelChanged");

	UVehicleCustomDamageEventComponent_OnVehicleHPFuelChanged_Params params;
	params.Hp = Hp;
	params.Fuel = Fuel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UVehicleStateInfoCollector::HandleGameModeStateChanged(const struct FGameModeStateChangedParams& Params)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleStateInfoCollector.HandleGameModeStateChanged");

	UVehicleStateInfoCollector_HandleGameModeStateChanged_Params params;
	params.Params = Params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

