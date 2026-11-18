#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UScriptContext_CallScriptFunction_Params
{
	struct FString                                     FunctionName;                                             
};


struct UScriptContextComponent_PushScriptArrayIndexData_Params
{
	struct FString                                     ParamName;                                                
	int                                                Index;                                                    
};


struct UScriptContextComponent_PushOneScriptPropertyValues_Params
{
	struct FString                                     ParamName;                                                
};


struct UScriptContextComponent_PushAllScriptPropertyValues_Params
{
};


struct UScriptContextComponent_FetchScriptArrayIndexData_Params
{
	struct FString                                     ParamName;                                                
	int                                                Index;                                                    
};


struct UScriptContextComponent_FetchOneScriptPropertyValues_Params
{
	struct FString                                     ParamName;                                                
};


struct UScriptContextComponent_FetchAllScriptPropertyValues_Params
{
};


struct UScriptContextComponent_CallScriptFunctionWithoutFetch_Params
{
	struct FString                                     FunctionName;                                             
};


struct UScriptContextComponent_CallScriptFunction_Params
{
	struct FString                                     FunctionName;                                             
};


struct UScriptHelperNetInterface_SendPacket_LuaState_Params
{
	int                                                ReturnValue;                                              
};


struct UScriptHelperNetInterface_Disconnect_Params
{
	TScriptInterface<class UNetInterface>              NetInterface;                                             
};


struct UScriptHelperNetInterface_Connect_Params
{
	TScriptInterface<class UNetInterface>              NetInterface;                                             
	int                                                Timeout;                                                  
};


struct UScriptPluginComponent_CallScriptFunction_Params
{
	struct FString                                     FunctionName;                                             
	bool                                               ReturnValue;                                              
};


struct AScriptTestActor_TestFunction_Params
{
	float                                              InValue;                                                  
	float                                              InFactor;                                                 
	bool                                               bMultiply;                                                
	float                                              ReturnValue;                                              
};


struct ALuaClassBaseObj_ItsATest_Params
{
	struct FPlayerInfo                                 Player1;                                                  
	TArray<int>                                        nums;                                                     
	int                                                X;                                                        
	struct FString                                     Q;                                                        
	TArray<struct FPlayerInfo>                         Player2;                                                  
	struct FString                                     ReturnValue;                                              
};


struct ALuaClassBaseObj_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                
};


struct ALuaClassBaseObj_GetGameStatus_Params
{
	struct FString                                     ReturnValue;                                              
};

}

