#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UCommon_RankIntegralLevel_Style_Small_UIBP_C_ConstructPreviewSubItem_Params
{
};


struct UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInteral_Params
{
	int                                                rankIntegral;                                             
	class UTextBlock*                                  textIntegralName;                                         
};


struct UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetArenaRankInteral_Params
{
	int                                                rankIntegral;                                             
	class UTextBlock*                                  textIntegralName;                                         
};


struct UCommon_RankIntegralLevel_Style_Small_UIBP_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             
};


struct UCommon_RankIntegralLevel_Style_Small_UIBP_C_ExecuteUbergraph_Common_RankIntegralLevel_Style_Small_UIBP_Params
{
	int                                                EntryPoint;                                               
};

}

