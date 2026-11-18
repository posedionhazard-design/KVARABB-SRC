#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FAnimationBudgetAllocatorParameters         InParameters;                                             
};


struct UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Params
{
	class UObject*                                     WorldContextObject;                                       
	bool                                               bEnabled;                                                 
};


struct USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Params
{
	bool                                               bInAutoRegisterWithBudgetAllocator;                       
};

}

