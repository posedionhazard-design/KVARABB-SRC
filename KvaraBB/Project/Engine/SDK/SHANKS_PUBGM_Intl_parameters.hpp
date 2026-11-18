#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UStatManager_ReportUAStatsEvent_Params
{
	TArray<struct FString>                             InReportChannels;                                         
	struct FString                                     InEventName;                                              
	TMap<struct FString, struct FString>               InParams;                                                 
	bool                                               InIsRealTime;                                             
};


struct UStatManager_ReportRevenueWithChannel_Params
{
	int                                                InPurchaseEventType;                                      
	struct FString                                     InCurrencyCode;                                           
	struct FString                                     InExpense;                                                
	TMap<struct FString, struct FString>               InParams;                                                 
	struct FString                                     InExtraJson;                                              
	struct FString                                     InChannel;                                                
};


struct UStatManager_ReportRevenue_Params
{
	int                                                InPurchaseEventType;                                      
	struct FString                                     InCurrencyCode;                                           
	struct FString                                     InExpense;                                                
	TMap<struct FString, struct FString>               InParams;                                                 
	struct FString                                     InExtraJson;                                              
};


struct UStatManager_ReportPurchase_Params
{
	int                                                InPurchaseEventType;                                      
	struct FString                                     InCurrencyCode;                                           
	struct FString                                     InExpense;                                                
	bool                                               isRealTime;                                               
};


struct UStatManager_ReportEventWithString_Params
{
	int                                                EventType;                                                
	struct FString                                     _eventBody;                                               
	bool                                               isRealTime;                                               
};


struct UStatManager_ReportEventWithParam_Params
{
	int                                                EventType;                                                
	TMap<struct FString, struct FString>               _params;                                                  
	bool                                               isRealTime;                                               
};


struct UStatManager_ReportEventWithNoParam_Params
{
	int                                                EventType;                                                
	bool                                               isRealTime;                                               
};


struct UStatManager_GetInstance_Params
{
	class UStatManager*                                ReturnValue;                                              
};

}

