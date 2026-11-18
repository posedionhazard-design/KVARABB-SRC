#pragma once


 
namespace SDK
{






struct FTApmSceneInfo
{
	int                                                PerfPriority;                                             
	int                                                ReportPriority;                                           
	int                                                ID;                                                       
	bool                                               IsFinished;                                               
	unsigned char                                      UnknownData00[0x13];                                      
};

}

