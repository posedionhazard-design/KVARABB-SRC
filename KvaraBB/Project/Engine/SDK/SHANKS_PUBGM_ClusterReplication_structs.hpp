#pragma once


 
namespace SDK
{





enum class EClusterEntityState : uint8_t
{
	EClusterEntityState__STATE_Original = 0,
	EClusterEntityState__STATE_WithData = 1,
	EClusterEntityState__STATE_WithNoData = 2,
	EClusterEntityState__STATE_MAX = 3
};



enum class EAOIEntityType : uint8_t
{
	EAOIEntityType__Static         = 0,
	EAOIEntityType__Static_UGC     = 1,
	EAOIEntityType__Dynamic        = 2,
	EAOIEntityType__Dynamic_Custom = 3,
	EAOIEntityType__EAOIEntityType_MAX = 4
};









struct FClusterAOIConfig
{
	float                                              AOIClusterSize;                                           
	float                                              AOIClusterTolerantSize;                                   
	int                                                AOIClusterRelativeIterator;                               
	int16_t                                            SelectedGroup;                                            
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector                                     AOIMinPoint;                                              
	struct FVector                                     AOIMaxPoint;                                              
	TArray<int16_t>                                    AOIEntityCounts;                                          
};

}

