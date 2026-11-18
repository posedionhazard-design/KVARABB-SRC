#pragma once


 
namespace SDK
{





enum class ECosHelperFileInfoType : uint8_t
{
	ECosHelperFileInfoType__None   = 0,
	ECosHelperFileInfoType__ContentLength = 1,
	ECosHelperFileInfoType__ETag   = 2,
	ECosHelperFileInfoType__LastModifiedUtcTimestamp = 3,
	ECosHelperFileInfoType__ECosHelperFileInfoType_MAX = 4
};









struct FCosHelperInitializeInfo
{
	bool                                               bUseAuthorization;                                        
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                SignExpirationTime;                                       
	struct FString                                     AppID;                                                    
	struct FString                                     BucketName;                                               
	struct FString                                     Region;                                                   
	struct FString                                     SecretId;                                                 
	struct FString                                     SecretKey;                                                
};

}

