#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UTemBPLibrary_TempUIMsgInvokeRef_Params
{
	class UObject*                                     ObjContext;                                               
	struct FString                                     MsgName;                                                  
	struct FString                                     ModuleName;                                               
	TArray<struct FTemBPDataAddr>                      ParamArray;                                               
};


struct UTemBPLibrary_TempBridgeEventInvokeRef_Params
{
	class UObject*                                     ObjContext;                                               
	struct FString                                     EventType;                                                
	struct FString                                     EventID;                                                  
	TArray<struct FTemBPDataAddr>                      ParamArray;                                               
};


struct UTemBPLibrary_AddrFromWild_Params
{
	struct FString                                     DataType;                                                 
	struct FTemBPDataAddr                              InAny;                                                    
	struct FTemBPDataAddr                              ReturnValue;                                              
};


struct UTemBPLibrary_AddrFromSet_Params
{
	struct FString                                     DataType;                                                 
	struct FTemBPDataAddr                              ReturnValue;                                              
};


struct UTemBPLibrary_AddrFromMap_Params
{
	struct FString                                     DataType;                                                 
	TMap<int, int>                                     InAny;                                                    
	struct FTemBPDataAddr                              ReturnValue;                                              
};


struct UTemBPLibrary_AddrFromArray_Params
{
	struct FString                                     DataType;                                                 
	TArray<int>                                        InAny;                                                    
	struct FTemBPDataAddr                              ReturnValue;                                              
};

}

