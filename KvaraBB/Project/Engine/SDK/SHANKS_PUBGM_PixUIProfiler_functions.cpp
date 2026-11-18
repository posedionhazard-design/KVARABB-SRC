
 
#include "../SDK.hpp"

namespace SDK
{







void UPxProfilerMgr::StartProfiler()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUIProfiler.PxProfilerMgr.StartProfiler");

	UPxProfilerMgr_StartProfiler_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UPxProfilerMgr::PxProfilerCapabilitySwitch(EPxProfilerCapability EPxProfilerCapability, bool bOpen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUIProfiler.PxProfilerMgr.PxProfilerCapabilitySwitch");

	UPxProfilerMgr_PxProfilerCapabilitySwitch_Params params;
	params.EPxProfilerCapability = EPxProfilerCapability;
	params.bOpen = bOpen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPxProfilerMgr::Print()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUIProfiler.PxProfilerMgr.Print");

	UPxProfilerMgr_Print_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool UPxProfilerMgr::GetPxProfilerCapability(EPxProfilerCapability EPxProfilerCapability)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUIProfiler.PxProfilerMgr.GetPxProfilerCapability");

	UPxProfilerMgr_GetPxProfilerCapability_Params params;
	params.EPxProfilerCapability = EPxProfilerCapability;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UPxProfilerMgr::EndProfiler()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUIProfiler.PxProfilerMgr.EndProfiler");

	UPxProfilerMgr_EndProfiler_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UPxProfilerMgr::Check()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUIProfiler.PxProfilerMgr.Check");

	UPxProfilerMgr_Check_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

