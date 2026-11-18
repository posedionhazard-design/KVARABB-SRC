#pragma once


 
namespace SDK
{






struct FSyncRelevantPlayerTask
{
	int                                                TaskID;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<class AActor*>                              TaskTargets;                                              
};



struct FXTBetrayInfo
{
	bool                                               IsInBetray;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                BetrayTime;                                               
};



struct FPreciousItem
{
	int                                                TypeSpecificID;                                           
	int                                                Count;                                                    
	int                                                SellPrice;                                                
};

}

