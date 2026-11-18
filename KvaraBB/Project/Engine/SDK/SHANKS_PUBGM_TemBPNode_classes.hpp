#pragma once


 
namespace SDK
{






class UTemBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TemBPNode.TemBPLibrary");
		return pStaticClass;
	}


	static void TempUIMsgInvokeRef(class UObject* ObjContext, const struct FString& MsgName, const struct FString& ModuleName, TArray<struct FTemBPDataAddr> ParamArray);
	static void TempBridgeEventInvokeRef(class UObject* ObjContext, const struct FString& EventType, const struct FString& EventID, TArray<struct FTemBPDataAddr> ParamArray);
	static struct FTemBPDataAddr AddrFromWild(const struct FString& DataType, const struct FTemBPDataAddr& InAny);
	static struct FTemBPDataAddr AddrFromSet(const struct FString& DataType);
	static struct FTemBPDataAddr AddrFromMap(const struct FString& DataType, TMap<int, int> InAny);
	static struct FTemBPDataAddr AddrFromArray(const struct FString& DataType, TArray<int> InAny);
};




class ULuaTemBPData : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData");
		return pStaticClass;
	}

};




class ULuaTemBPData_bool : public ULuaTemBPData
{
public:
	bool                                               Data;                                                     
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_bool");
		return pStaticClass;
	}

};




class ULuaTemBPData_int : public ULuaTemBPData
{
public:
	int                                                Data;                                                     
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_int");
		return pStaticClass;
	}

};




class ULuaTemBPData_float : public ULuaTemBPData
{
public:
	float                                              Data;                                                     
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_float");
		return pStaticClass;
	}

};




class ULuaTemBPData_string : public ULuaTemBPData
{
public:
	struct FString                                     Data;                                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_string");
		return pStaticClass;
	}

};




class ULuaTemBPData_object : public ULuaTemBPData
{
public:
	class UObject*                                     Data;                                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TemBPNode.LuaTemBPData_object");
		return pStaticClass;
	}

};


}

