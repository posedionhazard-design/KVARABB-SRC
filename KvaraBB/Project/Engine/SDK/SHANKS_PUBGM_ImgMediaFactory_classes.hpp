#pragma once


 
namespace SDK
{






class UImgMediaSettings : public UObject
{
public:
	float                                              DefaultFps;                                               
	float                                              CacheBehindPercentage;                                    
	float                                              CacheSizeGB;                                              
	uint32_t                                           ExrDecoderThreads;                                        
	struct FString                                     DefaultProxy;                                             
	bool                                               UseDefaultProxy;                                          
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ImgMediaFactory.ImgMediaSettings");
		return pStaticClass;
	}

};


}

