#pragma once


 
namespace SDK
{






struct FiTOPResult
{
	int                                                imsdkRetCode;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     imsdkRetMsg;                                              
	int                                                thirdRetCode;                                             
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     thirdRetMsg;                                              
	struct FString                                     retExtraJson;                                             
};



struct FIMSDKQRCodeStatusResult : public FiTOPResult
{
	int                                                status;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     Channel;                                                  
};



struct FIMSDKQRCodeResult : public FiTOPResult
{
	struct FString                                     codeId;                                                   
	struct FString                                     randStr;                                                  
	int                                                nextAt;                                                   
	int                                                expireAt;                                                 
	int                                                createAt;                                                 
	int                                                queryInterval;                                            
	struct FString                                     codeData;                                                 
};



struct FIMSDKWebVerifyResult : public FiTOPResult
{
	struct FString                                     captcha;                                                  
};



struct FIMSDKUnifiedAccountResult : public FiTOPResult
{
	int                                                Ret;                                                      
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     retMsg;                                                   
	struct FString                                     accountToken;                                             
	struct FString                                     UID;                                                      
	struct FString                                     expireTime;                                               
	int                                                verifyCodeExpire;                                         
	int                                                isRegister;                                               
	int                                                isSetPwd;                                                 
	int                                                isReceiveEmail;                                           
	struct FString                                     emailAccount;                                             
	struct FString                                     phoneAccount;                                             
	struct FString                                     phoneExtra;                                               
	int                                                accountType;                                              
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     phoneArea;                                                
	int                                                sendType;                                                 
	unsigned char                                      UnknownData02[0x4];                                       
};



struct FIMSDKShortUrlResult : public FiTOPResult
{
	struct FString                                     shortUrl;                                                 
};



struct FiTOPFriendInfo
{
	struct FString                                     OpenID;                                                   
	struct FString                                     channelUserId;                                            
	struct FString                                     channelId;                                                
	struct FString                                     UserName;                                                 
	int                                                Gender;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     pictureUrl;                                               
	struct FString                                     email;                                                    
	struct FString                                     phone;                                                    
};



struct FiTOPFriendResult : public FiTOPResult
{
	TArray<struct FiTOPFriendInfo>                     sameGameFriendList;                                       
};



struct FiTOPLoginResult : public FiTOPResult
{
	struct FString                                     Channel;                                                  
	int                                                channelId;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     channelToken;                                             
	int                                                channelTokenExpire;                                       
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     channelUserId;                                            
	int                                                GameID;                                                   
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     Guid;                                                     
	struct FString                                     guidUserBirthday;                                         
	struct FString                                     guidUserNick;                                             
	struct FString                                     guidUserPortrait;                                         
	int                                                guidUserSex;                                              
	int                                                innerTokenExpire;                                         
	int                                                isFirstLogin;                                             
	unsigned char                                      UnknownData03[0x4];                                       
	struct FString                                     innerToken;                                               
	struct FString                                     OpenID;                                                   
};



struct FiTOPChannelInfo : public FiTOPResult
{
	int                                                channelId;                                                
	int                                                Gender;                                                   
	struct FString                                     pictureUrl;                                               
	struct FString                                     UserName;                                                 
};



struct FiTOPBindResult : public FiTOPLoginResult
{
	TArray<struct FiTOPChannelInfo>                    bindInfoList;                                             
};



struct FiTOPNoticePicInfo
{
	int                                                noticeId;                                                 
	int                                                screenDir;                                                
	struct FString                                     PicUrl;                                                   
	struct FString                                     picHash;                                                  
	struct FString                                     picTitle;                                                 
	struct FString                                     picSize;                                                  
	struct FString                                     ExtraJson;                                                
};



struct FiTOPNoticeInfo
{
	struct FString                                     stateCode;                                                
	int                                                noticeId;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     AppID;                                                    
	struct FString                                     OpenID;                                                   
	struct FString                                     noticeUrl;                                                
	int                                                noticeScene;                                              
	int                                                noticeUpdateTime;                                         
	int                                                noticeEndTime;                                            
	int                                                noticeStartTime;                                          
	struct FString                                     screenName;                                               
	struct FString                                     noticeLanguage;                                           
	int                                                noticeContentType;                                        
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     noticeTitle;                                              
	struct FString                                     noticeContent;                                            
	TArray<struct FiTOPNoticePicInfo>                  noticePics;                                               
	struct FString                                     noticeContentWebUrl;                                      
	struct FString                                     ExtraJson;                                                
};



struct FiTOPNoticeResult : public FiTOPResult
{
	TArray<struct FiTOPNoticeInfo>                     noticesList;                                              
	int                                                noticesNum;                                               
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FiTOPAuthSNSInfo
{
	struct FString                                     OpenID;                                                   
	int                                                channelId;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     UserName;                                                 
	int                                                Gender;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     pictureUrl;                                               
};



struct FiTOPAuthMigrateResult : public FiTOPResult
{
	struct FString                                     migrateCode;                                              
	int                                                validTime;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FiTOPAuthSNSInfo>                    snsInfoList;                                              
};



struct FiTOPGPSInfoResult : public FiTOPResult
{
	double                                             longitude;                                                
	double                                             latitude;                                                 
	double                                             horizontalAccuracyMeters;                                 
	double                                             verticalAccuracyMeters;                                   
	struct FString                                     locationProvider;                                         
};



struct FiTOPLbsResult : public FiTOPResult
{
	int                                                channelId;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     cityName;                                                 
	int                                                cityNumber;                                               
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     countryName;                                              
	int                                                countryNumber;                                            
	int                                                GameID;                                                   
	struct FString                                     Guid;                                                     
	struct FString                                     guidToken;                                                
	int                                                guidTokenExpire;                                          
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     guidUserBirthday;                                         
	struct FString                                     guidUserNick;                                             
	struct FString                                     guidUserPortrait;                                         
	int                                                guidUserSex;                                              
	unsigned char                                      UnknownData03[0x4];                                       
	struct FString                                     provinceName;                                             
	struct FString                                     OpenID;                                                   
	int                                                provinceNumber;                                           
	unsigned char                                      UnknownData04[0x4];                                       
};



struct FiTOPAuthResult : public FiTOPResult
{
	struct FString                                     Channel;                                                  
	int                                                channelId;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     DeviceID;                                                 
	int                                                GameID;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     innerToken;                                               
	int                                                isFirstLogin;                                             
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     OpenID;                                                   
	int                                                tokenExpireTime;                                          
	unsigned char                                      UnknownData03[0x4];                                       
	TArray<struct FiTOPAuthSNSInfo>                    snsInfoList;                                              
};



struct FiTOPAuthConnectResult : public FiTOPResult
{
	struct FString                                     confirmCode;                                              
	int                                                channelId;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     OpenID;                                                   
	int                                                Gender;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	struct FString                                     UserName;                                                 
	struct FString                                     pictureUrl;                                               
};



struct FiTOPWebViewStatusResult : public FiTOPResult
{
	int                                                stateCode;                                                
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FiTOPWebViewTicketResult : public FiTOPResult
{
	struct FString                                     Ticket;                                                   
	struct FString                                     Domain;                                                   
};

}

