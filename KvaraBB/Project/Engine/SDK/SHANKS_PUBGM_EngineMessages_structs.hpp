#pragma once


 
namespace SDK
{






struct FEngineServiceNotification
{
	struct FString                                     Text;                                                     
	double                                             TimeSeconds;                                              
};



struct FEngineServiceTerminate
{
	struct FString                                     UserName;                                                 
};



struct FEngineServiceExecuteCommand
{
	struct FString                                     Command;                                                  
	struct FString                                     UserName;                                                 
};



struct FEngineServiceAuthGrant
{
	struct FString                                     UserName;                                                 
	struct FString                                     UserToGrant;                                              
};



struct FEngineServiceAuthDeny
{
	struct FString                                     UserName;                                                 
	struct FString                                     UserToDeny;                                               
};



struct FEngineServicePong
{
	struct FString                                     CurrentLevel;                                             
	int                                                EngineVersion;                                            
	bool                                               HasBegunPlay;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	struct FGuid                                       InstanceID;                                               
	struct FString                                     InstanceType;                                             
	struct FGuid                                       SessionID;                                                
	float                                              WorldTimeSeconds;                                         
	unsigned char                                      UnknownData01[0x4];                                       
};



struct FEngineServicePing
{
	unsigned char                                      UnknownData00[0x1];                                       
};

}

