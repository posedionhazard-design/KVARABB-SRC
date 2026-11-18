#pragma once


 
namespace SDK
{






class UBattleItemHandle_WeapAttachment_Pendant_C : public UBattleItemHandle_WeapAttachment_C
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BattleItemHandle_WeapAttachment_Pendant.BattleItemHandle_WeapAttachment_Pendant_C");
		return pStaticClass;
	}

};


}

