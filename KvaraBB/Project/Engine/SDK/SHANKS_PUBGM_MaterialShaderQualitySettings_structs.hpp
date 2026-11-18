#pragma once


 
namespace SDK
{





enum class EMobileCSMQuality : uint8_t
{
	EMobileCSMQuality__NoFiltering = 0,
	EMobileCSMQuality__PCF_1x1     = 1,
	EMobileCSMQuality__PCF_2x2     = 2,
	EMobileCSMQuality__EMobileCSMQuality_MAX = 3
};









struct FMaterialQualityOverrides
{
	bool                                               bEnableOverride;                                          
	bool                                               bForceFullyRough;                                         
	bool                                               bForceNonMetal;                                           
	bool                                               bForceDisableLMDirectionality;                            
	bool                                               bForceLQReflections;                                      
	EMobileCSMQuality                                  MobileCSMQuality;                                         
	EMobileCSMQuality                                  MobilePointLightShadowQuality;                            
	EMobileCSMQuality                                  MobilePhotonShadowQuality;                                
};

}

