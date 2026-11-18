
 
#include "../SDK.hpp"

namespace SDK
{







void UCommon_RankIntegralLevel_Style_Small_UIBP_C::ConstructPreviewSubItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.ConstructPreviewSubItem");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_ConstructPreviewSubItem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCommon_RankIntegralLevel_Style_Small_UIBP_C::SetRankInteral(int rankIntegral, class UTextBlock* textIntegralName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteral");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInteral_Params params;
	params.rankIntegral = rankIntegral;
	params.textIntegralName = textIntegralName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UCommon_RankIntegralLevel_Style_Small_UIBP_C::SetArenaRankInteral(int rankIntegral, class UTextBlock* textIntegralName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetArenaRankInteral");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetArenaRankInteral_Params params;
	params.rankIntegral = rankIntegral;
	params.textIntegralName = textIntegralName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCommon_RankIntegralLevel_Style_Small_UIBP_C::PreConstruct(bool* IsDesignTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.PreConstruct");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void UCommon_RankIntegralLevel_Style_Small_UIBP_C::ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

