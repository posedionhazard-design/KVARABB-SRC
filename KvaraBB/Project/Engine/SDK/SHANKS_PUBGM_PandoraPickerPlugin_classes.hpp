#pragma once


 
namespace SDK
{






class UBP_PandoraPickerLibraryLibrary : public UBlueprintFunctionLibrary
{
public:
	struct FScriptMulticastDelegate                    m_PickerEventDelegate;                                    
	struct FScriptMulticastDelegate                    m_PickerVideoEventDelegate;                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PandoraPickerPlugin.BP_PandoraPickerLibraryLibrary");
		return pStaticClass;
	}


	static class UBP_PandoraPickerLibraryLibrary* GetInstance();
	static void BP_SetVideoExportQuality(int Quality);
	static class UTexture2D* BP_PandoraPickerLoadImageTest(const struct FString& fImagePath, const struct FString& fOrgImagePath, class UTexture2D** orgTex2D);
	static int BP_PandoraPickerInit();
	static void BP_PandoraPickerGetSavedPath(struct FString* strSavePath);
	static void BP_OpenImageLibraryWithOrg(int Width, int Height, const struct FString& SecretKey, const struct FString& savedPath);
	static void BP_OpenImageLibraryVideo(const struct FString& SecretKey);
	static void BP_OpenImageLibraryNoCut(int Width, int Height, const struct FString& SecretKey, const struct FString& savedPath);
	static void BP_OpenImageLibrary(int Width, int Height, const struct FString& SecretKey, const struct FString& savedPath);
};


}

