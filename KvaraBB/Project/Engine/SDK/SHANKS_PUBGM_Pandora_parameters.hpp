#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBulletScreen_Stop_Params
{
};


struct UBulletScreen_Start_Params
{
};


struct UBulletScreen_Resume_Params
{
};


struct UBulletScreen_Pause_Params
{
};


struct UBulletScreen_AddBullets_Params
{
	TArray<struct FString>                             Content;                                                  
};


struct UBulletScreen_AddBullet_Params
{
	struct FString                                     Content;                                                  
};


struct UGameletSDKDelegateHandler_ExecOnViewCreated_Params
{
	class UUserWidget*                                 Widget;                                                   
	struct FString                                     WinInfo;                                                  
};


struct UGameletSDKDelegateHandler_ExecOnViewAboutToDestroy_Params
{
	class UUserWidget*                                 Widget;                                                   
	struct FString                                     WinInfo;                                                  
};


struct UGameletSDKDelegateHandler_ExecOnSDKMessage_Params
{
	struct FString                                     Msg;                                                      
	int                                                ReturnValue;                                              
};


struct UGameletSDKDelegateHandler_ExecOnRefreshUserdata_Params
{
	int                                                ReturnValue;                                              
};


struct UPLatentDelegate_OnLatentCallback_Params
{
	int                                                threadRef;                                                
};


struct APLuaActor_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             
	TArray<struct FPLuaBPVar>                          Args;                                                     
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct APLuaPawn_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             
	TArray<struct FPLuaBPVar>                          Args;                                                     
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct APLuaCharacter_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             
	TArray<struct FPLuaBPVar>                          Args;                                                     
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct APLuaController_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             
	TArray<struct FPLuaBPVar>                          Args;                                                     
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct APLuaPlayerController_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             
	TArray<struct FPLuaBPVar>                          Args;                                                     
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct UPLuaActorComponent_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             
	TArray<struct FPLuaBPVar>                          Args;                                                     
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct APLuaGameModeBase_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             
	TArray<struct FPLuaBPVar>                          Args;                                                     
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct APLuaHUD_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             
	TArray<struct FPLuaBPVar>                          Args;                                                     
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct UPLuaBlueprintLibrary_GetStringFromVar_Params
{
	struct FPLuaBPVar                                  Value;                                                    
	int                                                Index;                                                    
	struct FString                                     ReturnValue;                                              
};


struct UPLuaBlueprintLibrary_GetObjectFromVar_Params
{
	struct FPLuaBPVar                                  Value;                                                    
	int                                                Index;                                                    
	class UObject*                                     ReturnValue;                                              
};


struct UPLuaBlueprintLibrary_GetNumberFromVar_Params
{
	struct FPLuaBPVar                                  Value;                                                    
	int                                                Index;                                                    
	float                                              ReturnValue;                                              
};


struct UPLuaBlueprintLibrary_GetIntFromVar_Params
{
	struct FPLuaBPVar                                  Value;                                                    
	int                                                Index;                                                    
	int                                                ReturnValue;                                              
};


struct UPLuaBlueprintLibrary_GetBoolFromVar_Params
{
	struct FPLuaBPVar                                  Value;                                                    
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct UPLuaBlueprintLibrary_CreateVarFromString_Params
{
	struct FString                                     Value;                                                    
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct UPLuaBlueprintLibrary_CreateVarFromObject_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UObject*                                     Value;                                                    
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct UPLuaBlueprintLibrary_CreateVarFromNumber_Params
{
	float                                              Value;                                                    
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct UPLuaBlueprintLibrary_CreateVarFromInt_Params
{
	int                                                Value;                                                    
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct UPLuaBlueprintLibrary_CreateVarFromBool_Params
{
	bool                                               Value;                                                    
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct UPLuaBlueprintLibrary_CallToLuaWithArgs_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     FunctionName;                                             
	TArray<struct FPLuaBPVar>                          Args;                                                     
	struct FString                                     StateName;                                                
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct UPLuaBlueprintLibrary_CallToLua_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     FunctionName;                                             
	struct FString                                     StateName;                                                
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct UPLuaDelegate_EventTrigger_Params
{
};


struct UPLuaUserWidget_CallLuaMember_Params
{
	struct FString                                     FunctionName;                                             
	TArray<struct FPLuaBPVar>                          Args;                                                     
	struct FPLuaBPVar                                  ReturnValue;                                              
};


struct UPPixUILogAdapter_OnPixUILog_Params
{
	int                                                InLogType;                                                
	int                                                InLogLevel;                                               
	struct FString                                     InLogContent;                                             
};


struct UPRichText_SetText_Params
{
	struct FText                                       InText;                                                   
};


struct UPRichText_GetText_Params
{
	struct FText                                       ReturnValue;                                              
};


struct UWaterfallScrollView_ScrollToStart_Params
{
};


struct UWaterfallScrollView_RefreshLayout_Params
{
	int                                                Index;                                                    
};


struct UWaterfallScrollView_Fill_Params
{
};


struct UWaterfallScrollView_Clear_Params
{
};

}

