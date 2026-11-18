#pragma once


 
namespace SDK
{






class ALuaContext : public AActor
{
public:
	class ULuaStateWrapper*                            OwningLuaStateWrapper;                                    
	class UObject*                                     OwningObject;                                             
	class UScriptContextComponent*                     ScriptContextComponent;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.LuaContext");
		return pStaticClass;
	}

};




class UScriptProfiler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptProfiler");
		return pStaticClass;
	}

};




class ULuaStateWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.LuaStateWrapper");
		return pStaticClass;
	}

};




class UNetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.NetInterface");
		return pStaticClass;
	}

};




class UScriptBlueprint : public UBlueprint
{
public:
	TArray<unsigned char>                              ByteCode;                                                 
	struct FString                                     SourceCode;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptBlueprint");
		return pStaticClass;
	}

};




class UScriptBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	TArray<unsigned char>                              ByteCode;                                                 
	struct FString                                     SourceCode;                                               
	TArray<class UProperty*>                           ScriptProperties;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptBlueprintGeneratedClass");
		return pStaticClass;
	}

};




class UScriptContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptContext");
		return pStaticClass;
	}


	void CallScriptFunction(const struct FString& FunctionName);
};




class UScriptContextComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	class ULuaStateWrapper*                            OwningLuaStateWrapper;                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptContextComponent");
		return pStaticClass;
	}


	void PushScriptArrayIndexData(const struct FString& ParamName, int Index);
	void PushOneScriptPropertyValues(const struct FString& ParamName);
	void PushAllScriptPropertyValues();
	void FetchScriptArrayIndexData(const struct FString& ParamName, int Index);
	void FetchOneScriptPropertyValues(const struct FString& ParamName);
	void FetchAllScriptPropertyValues();
	void CallScriptFunctionWithoutFetch(const struct FString& FunctionName);
	void CallScriptFunction(const struct FString& FunctionName);
};




class UScriptHelperNetInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptHelperNetInterface");
		return pStaticClass;
	}


	static int SendPacket_LuaState();
	static void Disconnect(TScriptInterface<class UNetInterface>* NetInterface);
	static void Connect(int Timeout, TScriptInterface<class UNetInterface>* NetInterface);
};




class UScriptPluginComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptPluginComponent");
		return pStaticClass;
	}


	bool CallScriptFunction(const struct FString& FunctionName);
};




class AScriptTestActor : public AActor
{
public:
	struct FString                                     TestString;                                               
	float                                              TestValue;                                                
	bool                                               TestBool;                                                 
	unsigned char                                      UnknownData00[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptTestActor");
		return pStaticClass;
	}


	float TestFunction(float InValue, float InFactor, bool bMultiply);
};




class ALuaClassBaseObj : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.LuaClassBaseObj");
		return pStaticClass;
	}


	struct FString ItsATest(const struct FPlayerInfo& Player1, TArray<int> nums, int X, const struct FString& Q, TArray<struct FPlayerInfo> Player2);
	void HandleUIMessage(const struct FString& UIMessage);
	struct FString GetGameStatus();
};


}

