#pragma once


 
namespace SDK
{






class UTextWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonLib.TextWidgetInterface");
		return pStaticClass;
	}


	struct FString GetTextContent();
};




class ULuaService : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonLib.LuaService");
		return pStaticClass;
	}

};




class UCommonLuaLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonLib.CommonLuaLibrary");
		return pStaticClass;
	}


	static bool IsMatch(const struct FString& Source, const struct FString& regex);
	static struct FString GetName(class UObject* Obj);
	static TArray<struct FString> GetModNames();
	static class UWorld* GetGWorld();
	static struct FString GetFullName(class UObject* Obj);
};




class URuntimeFilesDownloaderLibrary : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnProgress;                                               
	unsigned char                                      UnknownData00[0x18];                                      
	struct FScriptMulticastDelegate                    OnResult;                                                 
	unsigned char                                      UnknownData01[0x18];                                      
	struct FString                                     FileURL;                                                  
	struct FString                                     FileSavePath;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonLib.RuntimeFilesDownloaderLibrary");
		return pStaticClass;
	}


	class URuntimeFilesDownloaderLibrary* DownloadFile(const struct FString& URL, const struct FString& SavePath);
	static class URuntimeFilesDownloaderLibrary* CreateDownloader();
};




class UServiceManager : public UObject
{
public:
	TMap<struct FName, struct FServiceCollection>      Services;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CommonLib.ServiceManager");
		return pStaticClass;
	}


	void UnregisterService(class UClass* ServiceType, const struct FString& serviceName);
	void RegisterService(class UObject* Service, class UClass* ServiceType, const struct FString& serviceName);
	class UObject* GetService(class UClass* ServiceType, const struct FString& serviceName);
};


}

