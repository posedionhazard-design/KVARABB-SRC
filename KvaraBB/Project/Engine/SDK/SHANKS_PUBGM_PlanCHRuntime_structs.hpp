#pragma once


 
namespace SDK
{






struct FPlanCH_CommonOccupy
{
	int                                                LandId;                                                   
	bool                                               bOccupied;                                                
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                BeginTime;                                                
	int                                                EndTime;                                                  
	struct FString                                     PlayerUID;                                                
};

}

