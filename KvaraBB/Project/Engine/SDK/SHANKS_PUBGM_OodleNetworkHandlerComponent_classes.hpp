#pragma once


 
namespace SDK
{






class UOodleNetworkTrainerCommandlet : public UCommandlet
{
public:
	int                                                DictionarySize;                                           
	int                                                DictionaryTrials;                                         
	int                                                TrialRandomness;                                          
	int                                                TrialGenerations;                                         
	bool                                               bNoTrials;                                                
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet");
		return pStaticClass;
	}

};


}

