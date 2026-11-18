#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct AZLevelData_ReBindLevelDataComponent_Params
{
};


struct AZLevelData_CheckMonsterSpotIsOnLand_Params
{
	class UZMonsterSpot*                               MonsterSpot;                                              
	class UZMonsterSpotGroup*                          SpotGroup;                                                
};

}

