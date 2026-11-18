#pragma once


 
namespace SDK
{






class UAutomaticCommonHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ReAutomatic.AutomaticCommonHelper");
		return pStaticClass;
	}


	static bool IsClassOf(class UObject* Object, class UClass* Class);
};




class UAutomaticPlatformHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ReAutomatic.AutomaticPlatformHelper");
		return pStaticClass;
	}


	static struct FString GetDeviceName();
};




class UAutomaticUIHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ReAutomatic.AutomaticUIHelper");
		return pStaticClass;
	}


	static bool IsWidgetVisibleWithUICondition(const struct FFindUICondition& Condition, int Index);
	static bool IsWidgetVisible(class UWidget* Widget);
	static bool IsWidgetTextMatchRegex(class UWidget* Widget, const struct FString& Text);
	static bool IsWidgetMatchType(class UWidget* Widget, EUIType Type);
	static class UWidget* FindWidgetObjectWithUICondition(const struct FFindUICondition& Condition, int Index);
	static class UWidget* FindUWidgetObject(const struct FString& Name, int Index);
};


}

