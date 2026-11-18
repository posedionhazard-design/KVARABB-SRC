#pragma once


 
namespace SDK
{






struct FSessionServiceLogUnsubscribe
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FSessionServiceLogSubscribe
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FSessionServiceLog
{
	struct FName                                       Category;                                                 
	struct FString                                     Data;                                                     
	struct FGuid                                       InstanceID;                                               
	double                                             TimeSeconds;                                              
	unsigned char                                      Verbosity;                                                
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FSessionServicePong
{
	bool                                               Authorized;                                               
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     BuildDate;                                                
	struct FString                                     DeviceName;                                               
	struct FGuid                                       InstanceID;                                               
	struct FString                                     InstanceName;                                             
	bool                                               IsConsoleBuild;                                           
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     PlatformName;                                             
	struct FGuid                                       SessionID;                                                
	struct FString                                     SessionName;                                              
	struct FString                                     SessionOwner;                                             
	bool                                               Standalone;                                               
	unsigned char                                      UnknownData02[0x7];                                       
};



struct FSessionServicePing
{
	struct FString                                     UserName;                                                 
};

}

