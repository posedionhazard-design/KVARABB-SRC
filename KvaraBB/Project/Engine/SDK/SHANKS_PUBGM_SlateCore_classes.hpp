#pragma once


 
namespace SDK
{






class USlateWidgetStyleContainerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerBase");
		return pStaticClass;
	}

};




class UFontBulkData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SlateCore.FontBulkData");
		return pStaticClass;
	}

};




class UFontFaceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SlateCore.FontFaceInterface");
		return pStaticClass;
	}

};




class UFontProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SlateCore.FontProviderInterface");
		return pStaticClass;
	}

};




class USlateTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SlateCore.SlateTypes");
		return pStaticClass;
	}

};




class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase*              CustomStyle;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		return pStaticClass;
	}

};




class USlateWidgetStyleContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerInterface");
		return pStaticClass;
	}

};


}

