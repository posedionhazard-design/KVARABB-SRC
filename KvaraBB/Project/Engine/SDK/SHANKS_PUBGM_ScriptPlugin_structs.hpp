#pragma once


 
namespace SDK
{






struct FSonInfo
{
	int                                                xlevel;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     xname;                                                    
};



struct FPlayerInfo
{
	int                                                Level;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Name;                                                     
	int                                                LocalPosition;                                            
	unsigned char                                      UnknownData01[0x4];                                       
	struct FSonInfo                                    mySon;                                                    
};



struct FLuaStateGuard
{
	unsigned char                                      UnknownData00[0x8];                                       
};



struct FLuaStateWrapperInitParams
{
	unsigned char                                      UnknownData00[0xC0];                                      
};

}

