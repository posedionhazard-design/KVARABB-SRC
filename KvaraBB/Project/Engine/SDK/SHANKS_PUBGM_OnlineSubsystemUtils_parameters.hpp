#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	struct FName                                       AchievementID;                                            
	bool                                               bFoundID;                                                 
	float                                              Progress;                                                 
};


struct UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	struct FName                                       AchievementID;                                            
	bool                                               bFoundID;                                                 
	struct FText                                       Title;                                                    
	struct FText                                       LockedDescription;                                        
	struct FText                                       UnlockedDescription;                                      
	bool                                               bHidden;                                                  
};


struct UAchievementQueryCallbackProxy_CacheAchievements_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	class UAchievementQueryCallbackProxy*              ReturnValue;                                              
};


struct UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	class UAchievementQueryCallbackProxy*              ReturnValue;                                              
};


struct UAchievementWriteCallbackProxy_WriteAchievementProgress_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	struct FName                                       AchievementName;                                          
	float                                              Progress;                                                 
	int                                                UserTag;                                                  
	class UAchievementWriteCallbackProxy*              ReturnValue;                                              
};


struct UConnectionCallbackProxy_ConnectToService_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	class UConnectionCallbackProxy*                    ReturnValue;                                              
};


struct UCreateSessionCallbackProxy_CreateSession_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	int                                                PublicConnections;                                        
	bool                                               bUseLAN;                                                  
	class UCreateSessionCallbackProxy*                 ReturnValue;                                              
};


struct UDestroySessionCallbackProxy_DestroySession_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	class UDestroySessionCallbackProxy*                ReturnValue;                                              
};


struct UEndMatchCallbackProxy_EndMatch_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	TScriptInterface<class UTurnBasedMatchInterface>   MatchActor;                                               
	struct FString                                     MatchID;                                                  
	TEnumAsByte<EMPMatchOutcome>                       LocalPlayerOutcome;                                       
	TEnumAsByte<EMPMatchOutcome>                       OtherPlayersOutcome;                                      
	class UEndMatchCallbackProxy*                      ReturnValue;                                              
};


struct UEndTurnCallbackProxy_EndTurn_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	struct FString                                     MatchID;                                                  
	TScriptInterface<class UTurnBasedMatchInterface>   TurnBasedMatchInterface;                                  
	class UEndTurnCallbackProxy*                       ReturnValue;                                              
};


struct UFindSessionsCallbackProxy_GetServerName_Params
{
	struct FBlueprintSessionResult                     Result;                                                   
	struct FString                                     ReturnValue;                                              
};


struct UFindSessionsCallbackProxy_GetPingInMs_Params
{
	struct FBlueprintSessionResult                     Result;                                                   
	int                                                ReturnValue;                                              
};


struct UFindSessionsCallbackProxy_GetMaxPlayers_Params
{
	struct FBlueprintSessionResult                     Result;                                                   
	int                                                ReturnValue;                                              
};


struct UFindSessionsCallbackProxy_GetCurrentPlayers_Params
{
	struct FBlueprintSessionResult                     Result;                                                   
	int                                                ReturnValue;                                              
};


struct UFindSessionsCallbackProxy_FindSessions_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	int                                                MaxResults;                                               
	bool                                               bUseLAN;                                                  
	class UFindSessionsCallbackProxy*                  ReturnValue;                                              
};


struct UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	TScriptInterface<class UTurnBasedMatchInterface>   MatchActor;                                               
	int                                                MinPlayers;                                               
	int                                                MaxPlayers;                                               
	int                                                PlayerGroup;                                              
	bool                                               ShowExistingMatches;                                      
	class UFindTurnBasedMatchCallbackProxy*            ReturnValue;                                              
};


struct UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params
{
	class APlayerController*                           PlayerController;                                         
	struct FInAppPurchaseProductRequest                ProductRequest;                                           
	class UInAppPurchaseCallbackProxy*                 ReturnValue;                                              
};


struct UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params
{
	class APlayerController*                           PlayerController;                                         
	TArray<struct FString>                             ProductIdentifiers;                                       
	class UInAppPurchaseQueryCallbackProxy*            ReturnValue;                                              
};


struct UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params
{
	TArray<struct FInAppPurchaseProductRequest>        ConsumableProductFlags;                                   
	class APlayerController*                           PlayerController;                                         
	class UInAppPurchaseRestoreCallbackProxy*          ReturnValue;                                              
};


struct UJoinSessionCallbackProxy_JoinSession_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	struct FBlueprintSessionResult                     SearchResult;                                             
	class UJoinSessionCallbackProxy*                   ReturnValue;                                              
};


struct ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params
{
	class APlayerController*                           PlayerController;                                         
	struct FName                                       StatName;                                                 
	int                                                StatValue;                                                
	bool                                               ReturnValue;                                              
};


struct ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params
{
	class APlayerController*                           PlayerController;                                         
	struct FName                                       SessionName;                                              
	class ULeaderboardFlushCallbackProxy*              ReturnValue;                                              
};


struct ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
{
	class APlayerController*                           PlayerController;                                         
	struct FName                                       StatName;                                                 
	class ULeaderboardQueryCallbackProxy*              ReturnValue;                                              
};


struct ULogoutCallbackProxy_Logout_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	class ULogoutCallbackProxy*                        ReturnValue;                                              
};


struct AOnlineBeaconClient_ClientOnConnected_Params
{
};


struct APartyBeaconClient_ServerUpdateReservationRequest_Params
{
	struct FString                                     SessionID;                                                
	struct FPartyReservation                           ReservationUpdate;                                        
};


struct APartyBeaconClient_ServerReservationRequest_Params
{
	struct FString                                     SessionID;                                                
	struct FPartyReservation                           Reservation;                                              
};


struct APartyBeaconClient_ServerCancelReservationRequest_Params
{
	struct FUniqueNetIdRepl                            PartyLeader;                                              
};


struct APartyBeaconClient_ClientSendReservationUpdates_Params
{
	int                                                NumRemainingReservations;                                 
};


struct APartyBeaconClient_ClientSendReservationFull_Params
{
};


struct APartyBeaconClient_ClientReservationResponse_Params
{
	TEnumAsByte<EPartyReservationResult>               ReservationResponse;                                      
};


struct APartyBeaconClient_ClientCancelReservationResponse_Params
{
	TEnumAsByte<EPartyReservationResult>               ReservationResponse;                                      
};


struct UQuitMatchCallbackProxy_QuitMatch_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	struct FString                                     MatchID;                                                  
	TEnumAsByte<EMPMatchOutcome>                       Outcome;                                                  
	int                                                TurnTimeoutInSeconds;                                     
	class UQuitMatchCallbackProxy*                     ReturnValue;                                              
};


struct UShowLoginUICallbackProxy_ShowExternalLoginUI_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           InPlayerController;                                       
	class UShowLoginUICallbackProxy*                   ReturnValue;                                              
};


struct ATestBeaconClient_ServerPong_Params
{
};


struct ATestBeaconClient_ClientPing_Params
{
};


struct UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	class UObject*                                     Object;                                                   
};


struct UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	struct FString                                     MatchID;                                                  
	int                                                playerIndex;                                              
	struct FString                                     PlayerDisplayName;                                        
};


struct UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	struct FString                                     MatchID;                                                  
	int                                                playerIndex;                                              
};


struct UTurnBasedBlueprintLibrary_GetIsMyTurn_Params
{
	class UObject*                                     WorldContextObject;                                       
	class APlayerController*                           PlayerController;                                         
	struct FString                                     MatchID;                                                  
	bool                                               bIsMyTurn;                                                
};

}

