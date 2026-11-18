
 
#include "../SDK.hpp"

namespace SDK
{









void UParticleSystemWidget2::SetParticleSystem(class UParticleSystem* ParticleSystem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticleSystem2.ParticleSystemWidget2.SetParticleSystem");

	UParticleSystemWidget2_SetParticleSystem_Params params;
	params.ParticleSystem = ParticleSystem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UParticleSystemWidget2::SetNiagaraSystem(class UNiagaraSystem* ParticleSystem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticleSystem2.ParticleSystemWidget2.SetNiagaraSystem");

	UParticleSystemWidget2_SetNiagaraSystem_Params params;
	params.ParticleSystem = ParticleSystem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UParticleSystemWidget2::SetActivate(bool bIsActivate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticleSystem2.ParticleSystemWidget2.SetActivate");

	UParticleSystemWidget2_SetActivate_Params params;
	params.bIsActivate = bIsActivate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







class UParticleSystemComponent* UParticleSystemWidget2::GetParticleComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticleSystem2.ParticleSystemWidget2.GetParticleComponent");

	UParticleSystemWidget2_GetParticleComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UNiagaraComponent* UParticleSystemWidget2::GetNiagaraComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UIParticleSystem2.ParticleSystemWidget2.GetNiagaraComponent");

	UParticleSystemWidget2_GetNiagaraComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

