#pragma once


 
namespace SDK
{






class UCosBase : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosBase");
		return pStaticClass;
	}


	TArray<unsigned char> GetContent();
};




class UCosHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosHelper");
		return pStaticClass;
	}

};




class UCosHelperBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosHelperBlueprintLibrary");
		return pStaticClass;
	}


	static class UCosRequest* UploadFileMemory(class UCosHelper* CosHelper, TArray<unsigned char> FileMemoryBuffer, const struct FString& URIPathName, const struct FString& URLParameters, const struct FScriptDelegate& OnCosRequestCompleted);
	static class UCosRequest* UploadFile(class UCosHelper* CosHelper, const struct FString& FilePathName, const struct FString& URIPathName, const struct FString& URLParameters, const struct FScriptDelegate& OnCosRequestCompleted);
	static struct FCosHelperInitializeInfo InitCosInfo(const struct FString& Section);
	static class UCosRequest* GetFileInfo(class UCosHelper* CosHelper, const struct FString& URIPathName, const struct FString& URLParameters, int FileInfoType, const struct FScriptDelegate& OnCosRequestCompleted);
	static class UCosRequest* DownloadFile(class UCosHelper* CosHelper, const struct FString& URIPathName, const struct FString& URLParameters, const struct FString& SavedPathName, const struct FScriptDelegate& OnCosRequestCompleted);
	static void DestroyCosHelper(class UCosHelper* CosHelper);
	static class UCosHelper* ConstructCosHelper(const struct FCosHelperInitializeInfo& InitializeInfo);
};




class UCosRequest : public UCosBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosRequest");
		return pStaticClass;
	}

};




class UCosResponse : public UCosBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CosHelper.CosResponse");
		return pStaticClass;
	}


	bool IsOK();
	int GetResponseCode();
	struct FString GetRequestURL();
	struct FString GetFileInfo(ECosHelperFileInfoType InFileInfoType);
	struct FString GetContentAsString();
};


}

