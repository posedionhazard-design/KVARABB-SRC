
 
#include "../SDK.hpp"

namespace SDK
{










class ACharacter* UAnimNotifyState_TimedNiagaraEffect::GetParentCharacter(class USkeletalMeshComponent* MeshComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetParentCharacter");

	UAnimNotifyState_TimedNiagaraEffect_GetParentCharacter_Params params;
	params.MeshComp = MeshComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

