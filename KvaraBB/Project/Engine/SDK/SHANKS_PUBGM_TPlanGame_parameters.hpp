#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBackpackComponentTPlan_PickupItemFromWrapperDetail_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemPickupInfo                       PickupInfo;                                               
	EBattleItemPickupReason                            Reason;                                                   
	EBattleItemClientPickupType                        BattleItemClientPickupType;                               
	bool                                               ReturnValue;                                              
};


struct UBackpackComponentTPlan_PickItem_IntoSafetyBox_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemPickupInfo                       PickupInfo;                                               
	EBattleItemPickupReason                            Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackComponentTPlan_NotifyItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 
};


struct UBackpackComponentTPlan_NotifyItemRemoved_Params
{
	struct FItemDefineID                               DefineID;                                                 
};


struct UBackpackComponentTPlan_NotifyItemListUpdated_Params
{
};


struct UBackpackComponentTPlan_ChangeItemStoreAreaNewInner_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                InItemNum;                                                
	EItemStoreArea                                     InItemStoreArea;                                          
	bool                                               ReturnValue;                                              
};


struct UBackpackComponentTPlan_ChangeItemStoreAreaNew_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                InItemNum;                                                
	EItemStoreArea                                     InItemStoreArea;                                          
	bool                                               ReturnValue;                                              
};


struct UBackpackComponentTPlan_ChangeItemStoreAreaInner_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                InItemNum;                                                
	EItemStoreArea                                     InItemStoreArea;                                          
	bool                                               ReturnValue;                                              
};


struct UBackpackComponentTPlan_ChangeItemStoreArea_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                InItemNum;                                                
	EItemStoreArea                                     InItemStoreArea;                                          
	bool                                               ReturnValue;                                              
};


struct UBackpackTPlanUtils_UnRegisterInvokeClass_Params
{
};


struct UBackpackTPlanUtils_RegisterInvokeClass_Params
{
};


struct UBackpackTPlanUtils_RealGetBPUtils_Params
{
	class UBackpackBlueprintTPlanUtils*                ReturnValue;                                              
};


struct UMetroStoreComponent_OnRep_StoreID_Params
{
};


struct UMetroStoreComponent_OnRep_Status_Params
{
};


struct UMetroStoreComponent_OnRep_GoodsNum_Params
{
};


struct UMetroStoreComponent_OnRep_GoodsListNum_Params
{
};


struct UMetroStoreComponent_OnRep_GoodsList_Params
{
};


struct UMetroStoreComponent_OnRep_CurrencyList_Params
{
};


struct UMetroStoreComponent_OnRep_BuyFrequence_Params
{
};


struct AXTGameMode_SetStateLeftTime_Params
{
	int                                                LeftTime;                                                 
};


struct AXTGameMode_SetPlayerStartOccupied_Params
{
	class AActor*                                      PlayerStart;                                              
};


struct AXTGameMode_RevisePlayerTombBoxDropWrapperList_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	TArray<struct FPickUpItemData>                     OutItemDataList;                                          
	class ASTExtraBaseCharacter*                       DamageCauser;                                             
	int                                                InstanceIDCnt;                                            
};


struct AXTGameMode_NotifyPlayerExitWhenNotStarted_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FName                                       PlayerType;                                               
	struct FString                                     Reason;                                                   
};


struct AXTGameMode_NotifyPlayerExit_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FName                                       PlayerType;                                               
	bool                                               bDestroyPlayerController;                                 
	bool                                               bDestroyCharacter;                                        
	bool                                               bSendFailure;                                             
	struct FString                                     FailureMessage;                                           
	struct FName                                       ParamState;                                               
	struct FString                                     ParamReason;                                              
};


struct AXTGameMode_NotifyGameModeInit_Params
{
};


struct AXTGameMode_LoadMapFinished_Params
{
};


struct AXTGameMode_IsNeedRestPlayerStart_Params
{
	class AController*                                 Player;                                                   
	bool                                               ReturnValue;                                              
};


struct AXTGameMode_GMShowSpawner_Params
{
};


struct AXTGameMode_GMShowEnterExit_Params
{
};


struct AXTGameMode_GMShowAssetBox_Params
{
};


struct AXTGameMode_GMSetPVEAIMax_Params
{
	int                                                Num;                                                      
};


struct AXTGameMode_GetOccupiedPlayerStartGroupList_Params
{
	TArray<class AActor*>                              ReturnValue;                                              
};


struct AXTGameMode_CheckNoHumanExist_Params
{
	bool                                               ReturnValue;                                              
};


struct AXTGameMode_CheckAIActive_Params
{
};


struct AXTGameState_ResetLeftTime_Params
{
};


struct AXTGameState_PreLoadPreciousItemsMap_Params
{
};


struct AXTGameState_OnRep_LastLeaveTime_Params
{
};


struct AXTGameState_GetPlayerMilitartyOnClient_Params
{
	int                                                ReturnValue;                                              
};


struct AXTGameState_CheckPreciousItemPrice_Params
{
	int                                                TypeSpecificID;                                           
	int                                                ReturnValue;                                              
};


struct AXTGameState_BroadcastClimbHelicopter_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	class AActor*                                      ExitActor;                                                
};


struct AXTPlayerState_OnRepXTBetrayInfo_Params
{
};


struct AXTPlayerState_OnRepRelevantPlayerTaskNotifyBP_Params
{
};


struct AXTPlayerState_OnRepEscapePosition_Params
{
};


struct AXTPlayerState_OnRepAssetPointsCheckedByTeammate_Params
{
};


struct AXTPlayerState_OnRep_RelevantPlayerTaskNotify_Params
{
};


struct AXTPlayerState_OnRep_IsRunAway_Params
{
};


struct AXTPlayerState_OnRep_IsEscaped_Params
{
};


struct AXTPlayerState_OnRep_Gold_Params
{
};


struct AXTPlayerState_OnRep_EscapePosiNotify_Params
{
};


struct AXTPlayerState_OnRep_BetrayInfo_Params
{
};


struct AXTPlayerState_OnRep_AssetPointsCheckedByTeammate_Params
{
};


struct AXTPlayerState_OnPlayerEscaped_Params
{
};


struct AXTPlayerState_IsInGame_Params
{
	bool                                               ReturnValue;                                              
};


struct AXTPlayerState_IsInBetrayState_Params
{
	bool                                               ReturnValue;                                              
};


struct AXTPlayerState_GetAllPreciousItemsList_Params
{
	TArray<struct FPreciousItem>                       ReturnValue;                                              
};

}

