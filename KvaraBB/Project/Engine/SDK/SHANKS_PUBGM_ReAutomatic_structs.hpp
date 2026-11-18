#pragma once


 
namespace SDK
{





enum class EUIType : uint8_t
{
	EUIType__Any                   = 0,
	EUIType__Clickable             = 1,
	EUIType__TextInput             = 2,
	EUIType__Scrollable            = 3,
	EUIType__Text                  = 4,
	EUIType__Checkable             = 5,
	EUIType__EUIType_MAX           = 6
};



enum class ERouteProtoID : uint8_t
{
	ERouteProtoID__Regist          = 0,
	ERouteProtoID__NormalMessage   = 1,
	ERouteProtoID__Close           = 2,
	ERouteProtoID__HeartBeat       = 3,
	ERouteProtoID__Log             = 4,
	ERouteProtoID__ListDevice      = 5,
	ERouteProtoID__Max             = 6
};



enum class ERouteType : uint8_t
{
	ERouteType__RouteServer        = 0,
	ERouteType__LocalController    = 1,
	ERouteType__MobileDevice       = 2,
	ERouteType__UnrealEngine       = 3,
	ERouteType__WebService         = 4,
	ERouteType__Max                = 5
};









struct FFindUICondition
{
	EUIType                                            UIType;                                                   
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     UINameRegex;                                              
	struct FString                                     ContainTextRegex;                                         
};



struct FLuaScriptMessage
{
	int                                                Index;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     LuaScript;                                                
};



struct FCmdTypes
{
	unsigned char                                      UnknownData00[0x1];                                       
};



struct FRemoteControllerInfo
{
	struct FString                                     ControllerName;                                           
	ERouteType                                         ControllerType;                                           
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FRouteSendMessage
{
	ERouteType                                         FromRouteType;                                            
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     FromRouteName;                                            
	ERouteType                                         TargetRouteType;                                          
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     TargetRouteName;                                          
	unsigned char                                      UnknownData02[0x20];                                      
};



struct FRawCommandMessage
{
	struct FString                                     CmdId;                                                    
	unsigned char                                      UnknownData00[0x10];                                      
};



struct FRouteCloseMessage
{
	struct FString                                     RegistName;                                               
	ERouteType                                         RegistType;                                               
	unsigned char                                      UnknownData00[0x7];                                       
};



struct FRouteRegistMessage
{
	struct FString                                     RegistName;                                               
	ERouteType                                         RegistType;                                               
	unsigned char                                      UnknownData00[0x7];                                       
};

}

