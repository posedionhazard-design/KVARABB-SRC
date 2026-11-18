#pragma once


 
namespace SDK
{






class UBaseTableResMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	class UScriptStruct*                               DataStruct;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TableResInclude.BaseTableResMap");
		return pStaticClass;
	}

};




class UEvoBaseMapUIMarkTableMap : public UBaseTableResMap
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TableResInclude.EvoBaseMapUIMarkTableMap");
		return pStaticClass;
	}


	void TraversTable(class UUAEDataTable* TableData, const struct FName& Key);
};




class UEvoBaseModTableTestTableMap : public UBaseTableResMap
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TableResInclude.EvoBaseModTableTestTableMap");
		return pStaticClass;
	}


	void TraversTable(class UUAEDataTable* TableData, const struct FName& Key);
};


}

