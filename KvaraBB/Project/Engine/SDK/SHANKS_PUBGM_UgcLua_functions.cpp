
 
#include "../SDK.hpp"

namespace SDK
{







void UCreativeLuaVM::Step()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.Step");

	UCreativeLuaVM_Step_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaVM::SetUGCLuaMemoryProfile(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetUGCLuaMemoryProfile");

	UCreativeLuaVM_SetUGCLuaMemoryProfile_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaVM::SetUGCLuaMemoryAllocDebugPrint(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetUGCLuaMemoryAllocDebugPrint");

	UCreativeLuaVM_SetUGCLuaMemoryAllocDebugPrint_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaVM::SetPerformanceLog(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetPerformanceLog");

	UCreativeLuaVM_SetPerformanceLog_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaVM::SetNowRC(int idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetNowRC");

	UCreativeLuaVM_SetNowRC_Params params;
	params.idx = idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaVM::SetCodeOutputDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetCodeOutputDelegate");

	UCreativeLuaVM_SetCodeOutputDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaVM::SetCodeFinishDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.SetCodeFinishDelegate");

	UCreativeLuaVM_SetCodeFinishDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaVM::ResetUGCLuaMemoryProfile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.ResetUGCLuaMemoryProfile");

	UCreativeLuaVM_ResetUGCLuaMemoryProfile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaVM::Reset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.Reset");

	UCreativeLuaVM_Reset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaVM::RequireMain()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RequireMain");

	UCreativeLuaVM_RequireMain_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaVM::RegisterLuaFunctions(const struct FString& ModuleName, TArray<struct FString> OpenFunctions)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RegisterLuaFunctions");

	UCreativeLuaVM_RegisterLuaFunctions_Params params;
	params.ModuleName = ModuleName;
	params.OpenFunctions = OpenFunctions;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeLuaVM::RegisterLuaAPIStringValue(const struct FString& ModuleName, const struct FString& Name, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RegisterLuaAPIStringValue");

	UCreativeLuaVM_RegisterLuaAPIStringValue_Params params;
	params.ModuleName = ModuleName;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeLuaVM::RegisterLuaAPINumberValue(const struct FString& ModuleName, const struct FString& Name, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RegisterLuaAPINumberValue");

	UCreativeLuaVM_RegisterLuaAPINumberValue_Params params;
	params.ModuleName = ModuleName;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void UCreativeLuaVM::RegisterLuaAPIBoolValue(const struct FString& ModuleName, const struct FString& Name, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RegisterLuaAPIBoolValue");

	UCreativeLuaVM_RegisterLuaAPIBoolValue_Params params;
	params.ModuleName = ModuleName;
	params.Name = Name;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaVM::RefreshLastCommentInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.RefreshLastCommentInfo");

	UCreativeLuaVM_RefreshLastCommentInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void UCreativeLuaVM::PostInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.PostInit");

	UCreativeLuaVM_PostInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaVM::LogBlockExecuteTime(const struct FString& blockId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.LogBlockExecuteTime");

	UCreativeLuaVM_LogBlockExecuteTime_Params params;
	params.blockId = blockId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaVM::KillJob(int JobId, bool bReset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.KillJob");

	UCreativeLuaVM_KillJob_Params params;
	params.JobId = JobId;
	params.bReset = bReset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaVM::InitEditMods(TArray<struct FString>* mods)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.InitEditMods");

	UCreativeLuaVM_InitEditMods_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (mods != nullptr)
		*mods = params.mods;
}







void UCreativeLuaVM::Init(int MemLimit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.Init");

	UCreativeLuaVM_Init_Params params;
	params.MemLimit = MemLimit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








int UCreativeLuaVM::GetUGCLuaBlockMemoryLiveBytes(const struct FString& blockId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.GetUGCLuaBlockMemoryLiveBytes");

	UCreativeLuaVM_GetUGCLuaBlockMemoryLiveBytes_Params params;
	params.blockId = blockId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UCreativeLuaVM::GetNowRC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.GetNowRC");

	UCreativeLuaVM_GetNowRC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int UCreativeLuaVM::GetMemoryUsed()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.GetMemoryUsed");

	UCreativeLuaVM_GetMemoryUsed_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCreativeLuaVM::GetLastCommentInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.GetLastCommentInfo");

	UCreativeLuaVM_GetLastCommentInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







void UCreativeLuaVM::FreezeGameTime(bool bCond)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.FreezeGameTime");

	UCreativeLuaVM_FreezeGameTime_Params params;
	params.bCond = bCond;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCreativeLuaVM::ExtractCurrentCode(int* CodeIdx, struct FString* code)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.ExtractCurrentCode");

	UCreativeLuaVM_ExtractCurrentCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CodeIdx != nullptr)
		*CodeIdx = params.CodeIdx;
	if (code != nullptr)
		*code = params.code;
}









bool UCreativeLuaVM::ExportUGCLuaMemoryProfileAsSluaStat(const struct FString& FilePath, struct FString* outFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.ExportUGCLuaMemoryProfileAsSluaStat");

	UCreativeLuaVM_ExportUGCLuaMemoryProfileAsSluaStat_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (outFilePath != nullptr)
		*outFilePath = params.outFilePath;

	return params.ReturnValue;
}





void UCreativeLuaVM::ExeCodeUntilSuspended()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.ExeCodeUntilSuspended");

	UCreativeLuaVM_ExeCodeUntilSuspended_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









int UCreativeLuaVM::EnqueueCode(struct FString* RuntimeCode, int* CodeUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.EnqueueCode");

	UCreativeLuaVM_EnqueueCode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RuntimeCode != nullptr)
		*RuntimeCode = params.RuntimeCode;
	if (CodeUID != nullptr)
		*CodeUID = params.CodeUID;

	return params.ReturnValue;
}








struct FString UCreativeLuaVM::DumpUGCLuaBlockMemoryProfile(int TopN)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.DumpUGCLuaBlockMemoryProfile");

	UCreativeLuaVM_DumpUGCLuaBlockMemoryProfile_Params params;
	params.TopN = TopN;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







struct FString UCreativeLuaVM::DescribeLuaThread()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.DescribeLuaThread");

	UCreativeLuaVM_DescribeLuaThread_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void UCreativeLuaVM::Close()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.Close");

	UCreativeLuaVM_Close_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCreativeLuaVM::AllowRequire(bool bAllow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeLuaVM.AllowRequire");

	UCreativeLuaVM_AllowRequire_Params params;
	params.bAllow = bAllow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








class UObject* UCreativeEntityInterface::UUID2UObject(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.UUID2UObject");

	UCreativeEntityInterface_UUID2UObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}










bool UCreativeEntityInterface::UUID2Type(int64_t* UUID, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.UUID2Type");

	UCreativeEntityInterface_UUID2Type_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}








uint32_t UCreativeEntityInterface::UUID2Key(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.UUID2Key");

	UCreativeEntityInterface_UUID2Key_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}







void UCreativeEntityInterface::RemoveUUID(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.RemoveUUID");

	UCreativeEntityInterface_RemoveUUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;
}








int64_t UCreativeEntityInterface::GetInstanceObjectUUID(int64_t* UUID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.GetInstanceObjectUUID");

	UCreativeEntityInterface_GetInstanceObjectUUID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (UUID != nullptr)
		*UUID = params.UUID;

	return params.ReturnValue;
}










int64_t UCreativeEntityInterface::CreateEntityIfNotExistsFromUObject(class UObject* Object, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.CreateEntityIfNotExistsFromUObject");

	UCreativeEntityInterface_CreateEntityIfNotExistsFromUObject_Params params;
	params.Object = Object;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}










int64_t UCreativeEntityInterface::CreateEntityIfNotExistsFromKey(uint32_t* Key, EEntityType* Type, unsigned char* SubType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UgcLua.CreativeEntityInterface.CreateEntityIfNotExistsFromKey");

	UCreativeEntityInterface_CreateEntityIfNotExistsFromKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
	if (Type != nullptr)
		*Type = params.Type;
	if (SubType != nullptr)
		*SubType = params.SubType;

	return params.ReturnValue;
}


}

