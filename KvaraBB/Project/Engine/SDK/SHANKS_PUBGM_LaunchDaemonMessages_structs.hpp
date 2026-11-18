#pragma once


 
namespace SDK
{






struct FIOSLaunchDaemonLaunchApp
{
	struct FString                                     AppID;                                                    
	struct FString                                     Parameters;                                               
};



struct FIOSLaunchDaemonPong
{
	struct FString                                     DeviceID;                                                 
	struct FString                                     DeviceName;                                               
	struct FString                                     DeviceStatus;                                             
	struct FString                                     DeviceType;                                               
	bool                                               bCanPowerOff;                                             
	bool                                               bCanPowerOn;                                              
	bool                                               bCanReboot;                                               
	unsigned char                                      UnknownData00[0x5];                                       
};



struct FIOSLaunchDaemonPing
{
	unsigned char                                      UnknownData00[0x1];                                       
};

}

