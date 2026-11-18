
 
#include "../SDK.hpp"

namespace SDK
{









int UAIGCAnimInstance::GetCurrentFrameIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AIGCKit.AIGCAnimInstance.GetCurrentFrameIndex");

	UAIGCAnimInstance_GetCurrentFrameIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











class UAIGCAnimData* UAIGCKitFunctionLibrary::GetAnimData(int FrameRate, int FrameNum, const struct FSkeletonNodeInfo& SkeletonNodeInfo, TArray<unsigned char>* CompressData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AIGCKit.AIGCKitFunctionLibrary.GetAnimData");

	UAIGCKitFunctionLibrary_GetAnimData_Params params;
	params.FrameRate = FrameRate;
	params.FrameNum = FrameNum;
	params.SkeletonNodeInfo = SkeletonNodeInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CompressData != nullptr)
		*CompressData = params.CompressData;

	return params.ReturnValue;
}












bool UAIGCKitFunctionLibrary::DecompressBone(int TrackIndex, float Time, float RelativePos, struct FTransform* OutAtom, TArray<unsigned char>* RawAnimData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AIGCKit.AIGCKitFunctionLibrary.DecompressBone");

	UAIGCKitFunctionLibrary_DecompressBone_Params params;
	params.TrackIndex = TrackIndex;
	params.Time = Time;
	params.RelativePos = RelativePos;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutAtom != nullptr)
		*OutAtom = params.OutAtom;
	if (RawAnimData != nullptr)
		*RawAnimData = params.RawAnimData;

	return params.ReturnValue;
}












bool UAIGCKitFunctionLibrary::DecompressAnimData(class UAIGCAnimData* OutAnimData, int FrameNum, float TargetFramerate, const struct FSkeletonNodeInfo& SkeletonNodeInfo, TArray<unsigned char>* RawAnimData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AIGCKit.AIGCKitFunctionLibrary.DecompressAnimData");

	UAIGCKitFunctionLibrary_DecompressAnimData_Params params;
	params.OutAnimData = OutAnimData;
	params.FrameNum = FrameNum;
	params.TargetFramerate = TargetFramerate;
	params.SkeletonNodeInfo = SkeletonNodeInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RawAnimData != nullptr)
		*RawAnimData = params.RawAnimData;

	return params.ReturnValue;
}


}

