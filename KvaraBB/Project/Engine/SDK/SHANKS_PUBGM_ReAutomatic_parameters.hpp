#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UAutomaticCommonHelper_IsClassOf_Params
{
	class UObject*                                     Object;                                                   
	class UClass*                                      Class;                                                    
	bool                                               ReturnValue;                                              
};


struct UAutomaticPlatformHelper_GetDeviceName_Params
{
	struct FString                                     ReturnValue;                                              
};


struct UAutomaticUIHelper_IsWidgetVisibleWithUICondition_Params
{
	struct FFindUICondition                            Condition;                                                
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UAutomaticUIHelper_IsWidgetVisible_Params
{
	class UWidget*                                     Widget;                                                   
	bool                                               ReturnValue;                                              
};


struct UAutomaticUIHelper_IsWidgetTextMatchRegex_Params
{
	class UWidget*                                     Widget;                                                   
	struct FString                                     Text;                                                     
	bool                                               ReturnValue;                                              
};


struct UAutomaticUIHelper_IsWidgetMatchType_Params
{
	class UWidget*                                     Widget;                                                   
	EUIType                                            Type;                                                     
	bool                                               ReturnValue;                                              
};


struct UAutomaticUIHelper_FindWidgetObjectWithUICondition_Params
{
	struct FFindUICondition                            Condition;                                                
	int                                                Index;                                                    
	class UWidget*                                     ReturnValue;                                              
};


struct UAutomaticUIHelper_FindUWidgetObject_Params
{
	struct FString                                     Name;                                                     
	int                                                Index;                                                    
	class UWidget*                                     ReturnValue;                                              
};

}

