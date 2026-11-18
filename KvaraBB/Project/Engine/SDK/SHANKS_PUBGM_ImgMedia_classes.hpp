#pragma once


 
namespace SDK
{






class UImgMediaSource : public UBaseMediaSource
{
public:
	float                                              FramesPerSecondOverride;                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     ProxyOverride;                                            
	struct FDirectoryPath                              SequencePath;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ImgMedia.ImgMediaSource");
		return pStaticClass;
	}


	void SetSequencePath(const struct FString& Path);
	struct FString GetSequencePath();
	void GetProxies(TArray<struct FString>* OutProxies);
};


}

