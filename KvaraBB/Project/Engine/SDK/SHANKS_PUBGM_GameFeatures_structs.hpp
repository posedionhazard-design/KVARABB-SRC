#pragma once


 
namespace SDK
{






struct FGameFeatureComponentEntry
{
	unsigned char                                      UnknownData00[0x28];                                      
	unsigned char                                      UnknownData01[0x28];                                      
	unsigned char                                      bClientComponent : 1;                                     
	unsigned char                                      bServerComponent : 1;                                     
	unsigned char                                      UnknownData02[0x7];                                       
};



struct FGameFeaturePluginStateMachineProperties
{
	unsigned char                                      UnknownData00[0x68];                                      
	class UGameFeatureData*                            GameFeatureData;                                          
};

}

