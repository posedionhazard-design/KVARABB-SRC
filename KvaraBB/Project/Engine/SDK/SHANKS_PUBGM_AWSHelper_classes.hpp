#pragma once


 
namespace SDK
{






class UAWSHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      
	TMap<struct FString, struct FString>               DownloadFilePaths;                                        
	float                                              Timeout;                                                  
	unsigned char                                      UnknownData01[0x54];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AWSHelper.AWSHelper");
		return pStaticClass;
	}

};




class UAWSHelperBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AWSHelper.AWSHelperBlueprintLibrary");
		return pStaticClass;
	}


	static void UploadFile(class UAWSHelper* CosHelper, const struct FString& FromFilePath, const struct FString& ToURL, const struct FString& NoneMatchHeader, const struct FScriptDelegate& OnComplete, const struct FScriptDelegate& OnProgress);
	static void UploadBinary(class UAWSHelper* CosHelper, TArray<unsigned char> FromBinaries, const struct FString& ToURL, const struct FString& NoneMatchHeader, const struct FScriptDelegate& OnComplete, const struct FScriptDelegate& OnProgress);
	static void DownloadFile(class UAWSHelper* CosHelper, const struct FString& FromURL, const struct FString& ToFilePath, const struct FScriptDelegate& OnComplete, const struct FScriptDelegate& OnProgress);
	static void DownloadBinary(class UAWSHelper* CosHelper, const struct FString& FromURL, const struct FScriptDelegate& OnComplete, const struct FScriptDelegate& OnProgress);
	static void DestroyAWSHelper(class UAWSHelper* AWSHelper);
	static class UAWSHelper* ConstructAWSHelper();
};




class UAWSResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AWSHelper.AWSResponse");
		return pStaticClass;
	}


	bool IsOK();
	int GetResponseCode();
	struct FString GetRequestURL();
	struct FString GetErrorMessage();
	struct FString GetErrorCode();
	struct FString GetContentAsString();
	TArray<unsigned char> GetContent();
};


}

