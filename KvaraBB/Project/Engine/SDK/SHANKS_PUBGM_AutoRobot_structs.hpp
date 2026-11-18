#pragma once


 
namespace SDK
{





enum class EAutoRunTestFlag : uint8_t
{
	Game4Win                       = 0,
	PVEBattleTest                  = 1,
	EAutoRunTestFlag_MAX           = 2
};









struct FBulletImpactAutoTestData
{
	unsigned char                                      UnknownData00[0x1C];                                      
};

}

