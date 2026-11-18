#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UYGamePipelineHelper_SendDataWithKey_Params
{
	struct FString                                     MsgKey;                                                   
	TArray<unsigned char>                              Data;                                                     
	bool                                               ReturnValue;                                              
};


struct UYGamePipelineHelper_SendData_Params
{
	struct FString                                     MsgInfo;                                                  
	bool                                               ReturnValue;                                              
};


struct UYGamePipelineHelper_Release_Params
{
};


struct UYGamePipelineHelper_RecvdDataWithKeyTest_Params
{
	struct FString                                     MsgKey;                                                   
	bool                                               ReturnValue;                                              
};


struct UYGamePipelineHelper_RecvDataTest_Params
{
	struct FString                                     MsgInfo;                                                  
	bool                                               ReturnValue;                                              
};


struct UYGamePipelineHelper_Log_Params
{
	struct FString                                     LogInfo;                                                  
};


struct UYGamePipelineHelper_IsConnected_Params
{
	bool                                               ReturnValue;                                              
};


struct UYGamePipelineHelper_Init_Params
{
	bool                                               ReturnValue;                                              
};


struct UYGamePipelineHelper_Get_Params
{
	class UYGamePipelineHelper*                        ReturnValue;                                              
};

}

