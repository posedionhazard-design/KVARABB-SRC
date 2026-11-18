#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ULatentDelegate_OnLatentCallback_Params
{
	int                                                threadRef;                                                
};


struct ALuaActor_UnRegistLuaTick_Params
{
};


struct ALuaActor_RegistLuaTick_Params
{
	float                                              TickInterval;                                             
};


struct ULuaActorComponent_UnRegistLuaTick_Params
{
};


struct ULuaActorComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             
};


struct ULuaDelegate_EventTrigger_Params
{
};


struct ULuaInstancedActorComponent_UnRegistLuaTick_Params
{
};


struct ULuaInstancedActorComponent_RegistLuaTick_Params
{
	float                                              TickInterval;                                             
};


struct ALuaLevelScriptActor_UnRegistLuaTick_Params
{
};


struct ALuaLevelScriptActor_RegistLuaTick_Params
{
	float                                              TickInterval;                                             
};


struct ULuaOverrider_TriggerAnimNotify_Params
{
};


struct ULuaOverrider_InputVectorAxis_Params
{
	struct FVector                                     AxisValue;                                                
};


struct ULuaOverrider_InputTouch_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              
	struct FVector                                     Location;                                                 
};


struct ULuaOverrider_InputGesture_Params
{
	float                                              Value;                                                    
};


struct ULuaOverrider_InputAxis_Params
{
	float                                              AxisValue;                                                
};


struct ULuaOverrider_InputAction_Params
{
	struct FKey                                        Key;                                                      
};


struct ULuaOverriderInterface_GetLuaFilePath_Params
{
	struct FString                                     ReturnValue;                                              
};


struct ULuaPatchRPCComponent_ServerUnreliable_LuaPatchRPC_Params
{
	struct FLuaPatchRPCFrame                           Frame;                                                    
};


struct ULuaPatchRPCComponent_Server_LuaPatchRPC_Params
{
	struct FLuaPatchRPCFrame                           Frame;                                                    
};


struct ULuaPatchRPCComponent_MulticastUnreliable_LuaPatchRPC_Params
{
	struct FLuaPatchRPCFrame                           Frame;                                                    
};


struct ULuaPatchRPCComponent_MulticastPerConnectionUnreliable_LuaPatchRPC_Params
{
	struct FLuaPatchRPCFrame                           Frame;                                                    
};


struct ULuaPatchRPCComponent_MulticastPerConnection_LuaPatchRPC_Params
{
	struct FLuaPatchRPCFrame                           Frame;                                                    
};


struct ULuaPatchRPCComponent_Multicast_LuaPatchRPC_Params
{
	struct FLuaPatchRPCFrame                           Frame;                                                    
};


struct ULuaPatchRPCComponent_ClientUnreliable_LuaPatchRPC_Params
{
	struct FLuaPatchRPCFrame                           Frame;                                                    
};


struct ULuaPatchRPCComponent_Client_LuaPatchRPC_Params
{
	struct FLuaPatchRPCFrame                           Frame;                                                    
};


struct USluaBlueprintLibrary_GetStringFromVar_Params
{
	struct FSluaBPVar                                  Value;                                                    
	int                                                Index;                                                    
	struct FString                                     ReturnValue;                                              
};


struct USluaBlueprintLibrary_GetObjectFromVar_Params
{
	struct FSluaBPVar                                  Value;                                                    
	int                                                Index;                                                    
	class UObject*                                     ReturnValue;                                              
};


struct USluaBlueprintLibrary_GetNumberFromVar_Params
{
	struct FSluaBPVar                                  Value;                                                    
	int                                                Index;                                                    
	float                                              ReturnValue;                                              
};


struct USluaBlueprintLibrary_GetIntFromVar_Params
{
	struct FSluaBPVar                                  Value;                                                    
	int                                                Index;                                                    
	int                                                ReturnValue;                                              
};


struct USluaBlueprintLibrary_GetBoolFromVar_Params
{
	struct FSluaBPVar                                  Value;                                                    
	int                                                Index;                                                    
	bool                                               ReturnValue;                                              
};


struct USluaBlueprintLibrary_CreateVarFromString_Params
{
	struct FString                                     Value;                                                    
	struct FSluaBPVar                                  ReturnValue;                                              
};


struct USluaBlueprintLibrary_CreateVarFromObject_Params
{
	class UObject*                                     WorldContextObject;                                       
	class UObject*                                     Value;                                                    
	struct FSluaBPVar                                  ReturnValue;                                              
};


struct USluaBlueprintLibrary_CreateVarFromNumber_Params
{
	float                                              Value;                                                    
	struct FSluaBPVar                                  ReturnValue;                                              
};


struct USluaBlueprintLibrary_CreateVarFromInt_Params
{
	int                                                Value;                                                    
	struct FSluaBPVar                                  ReturnValue;                                              
};


struct USluaBlueprintLibrary_CreateVarFromBool_Params
{
	bool                                               Value;                                                    
	struct FSluaBPVar                                  ReturnValue;                                              
};


struct USluaBlueprintLibrary_CallToLuaWithArgs_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     FunctionName;                                             
	TArray<struct FSluaBPVar>                          Args;                                                     
	struct FString                                     StateName;                                                
	struct FSluaBPVar                                  ReturnValue;                                              
};


struct USluaBlueprintLibrary_CallToLua_Params
{
	class UObject*                                     WorldContextObject;                                       
	struct FString                                     FunctionName;                                             
	struct FString                                     StateName;                                                
	struct FSluaBPVar                                  ReturnValue;                                              
};

}

