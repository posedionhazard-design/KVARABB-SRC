#pragma once


 
namespace SDK
{





enum class EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Unknown   = 0,
	EInAppPurchaseState__Success   = 1,
	EInAppPurchaseState__Failed    = 2,
	EInAppPurchaseState__Cancelled = 3,
	EInAppPurchaseState__Invalid   = 4,
	EInAppPurchaseState__NotAllowed = 5,
	EInAppPurchaseState__Restored  = 6,
	EInAppPurchaseState__AlreadyOwned = 7,
	EInAppPurchaseState__EInAppPurchaseState_MAX = 8
};



enum class EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None          = 0,
	EMPMatchOutcome__Quit          = 1,
	EMPMatchOutcome__Won           = 2,
	EMPMatchOutcome__Lost          = 3,
	EMPMatchOutcome__Tied          = 4,
	EMPMatchOutcome__TimeExpired   = 5,
	EMPMatchOutcome__First         = 6,
	EMPMatchOutcome__Second        = 7,
	EMPMatchOutcome__Third         = 8,
	EMPMatchOutcome__Fourth        = 9,
	EMPMatchOutcome__EMPMatchOutcome_MAX = 10
};









struct FNamedInterface
{
	struct FName                                       InterfaceName;                                            
	class UObject*                                     InterfaceObject;                                          
};



struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                            
	struct FString                                     InterfaceClassName;                                       
};



struct FInAppPurchaseProductInfo
{
	struct FString                                     Identifier;                                               
	struct FString                                     TransactionIdentifier;                                    
	struct FString                                     DisplayName;                                              
	struct FString                                     DisplayDescription;                                       
	struct FString                                     DisplayPrice;                                             
	float                                              RawPrice;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     CurrencyCode;                                             
	struct FString                                     CurrencySymbol;                                           
	struct FString                                     DecimalSeparator;                                         
	struct FString                                     GroupingSeparator;                                        
	struct FString                                     ReceiptData;                                              
};



struct FInAppPurchaseRestoreInfo
{
	struct FString                                     Identifier;                                               
	struct FString                                     ReceiptData;                                              
	struct FString                                     TransactionIdentifier;                                    
};



struct FInAppPurchaseProductRequest
{
	struct FString                                     ProductIdentifier;                                        
	bool                                               bIsConsumable;                                            
	unsigned char                                      UnknownData00[0x7];                                       
};

}

