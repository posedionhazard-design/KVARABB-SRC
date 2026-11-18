#pragma once


 
namespace SDK
{






class UGameletDynamicDelegateProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletDynamicDelegateProxy");
		return pStaticClass;
	}


	void Fire();
};




class UGameletExtensionMethods : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletExtensionMethods");
		return pStaticClass;
	}

};




class UGameletJSGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x60];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletJSGeneratedClass");
		return pStaticClass;
	}

};




class UGameletJSGeneratedFunction : public UFunction
{
public:
	unsigned char                                      UnknownData00[0x68];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletJSGeneratedFunction");
		return pStaticClass;
	}

};




class UGameletJSWidgetGeneratedClass : public UWidgetBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x60];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletJSWidgetGeneratedClass");
		return pStaticClass;
	}

};




class UGameletTypeScriptBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletTypeScriptBlueprint");
		return pStaticClass;
	}

};




class UGameletTypeScriptGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0xB1];                                      
	bool                                               HasConstructor;                                           
	unsigned char                                      UnknownData01[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletTypeScriptGeneratedClass");
		return pStaticClass;
	}

};




class UGameletTypeScriptObject : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class GameletJsEnv.GameletTypeScriptObject");
		return pStaticClass;
	}

};


}

