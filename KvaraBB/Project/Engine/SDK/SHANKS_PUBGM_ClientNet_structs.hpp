#pragma once


 
namespace SDK
{






struct FIMSDKLoginResult
{
	int                                                imsdkRetCode;                                             
	int                                                thirdRetCode;                                             
	struct FString                                     OpenID;                                                   
	struct FString                                     Token;                                                    
	int64_t                                            tokenExpire;                                              
	struct FString                                     retExtraJson;                                             
};



struct FIMSDKExtraInfo
{
	TMap<struct FString, struct FString>               ExtraInfo;                                                
};

}

