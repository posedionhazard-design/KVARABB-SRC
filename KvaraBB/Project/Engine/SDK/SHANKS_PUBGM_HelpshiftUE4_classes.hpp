#pragma once


 
namespace SDK
{






class UHelpshiftUE4Settings : public UObject
{
public:
	struct FString                                     APIKey;                                                   
	struct FString                                     DomainName;                                               
	struct FString                                     AppID_iOS;                                                
	struct FString                                     AppID_Android;                                            
	bool                                               FirebaseIntegration;                                      
	bool                                               EnableLogging;                                            
	unsigned char                                      UnknownData00[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HelpshiftUE4.HelpshiftUE4Settings");
		return pStaticClass;
	}

};


}

