#pragma once


 
namespace SDK
{






class UBattleItemHandle_VirtualItem_C : public UBattleItemHandleBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_VirtualItem.BattleItemHandle_VirtualItem_C");
		return pStaticClass;
	}

};


}

