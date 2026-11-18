#pragma once


 
namespace SDK
{






class UGlobalUIContainer_BP_C : public UUAEWidgetContainer
{
public:
	class UCanvasPanel*                                CanvasContainer;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass GlobalUIContainer_BP.GlobalUIContainer_BP_C");
		return pStaticClass;
	}

};


}

