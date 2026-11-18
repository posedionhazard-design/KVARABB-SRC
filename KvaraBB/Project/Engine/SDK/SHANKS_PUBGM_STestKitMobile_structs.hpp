#pragma once


 
namespace SDK
{






struct FSTestMobileTapOptions
{
	bool                                               bTouch;                                                   
};



struct FSTestMobileFillOptions
{
	bool                                               bCommit;                                                  
	bool                                               bClear;                                                   
};



struct FSTestMobileDragOptions
{
	int                                                Steps;                                                    
	bool                                               bTouch;                                                   
	unsigned char                                      UnknownData00[0x3];                                       
};

}

