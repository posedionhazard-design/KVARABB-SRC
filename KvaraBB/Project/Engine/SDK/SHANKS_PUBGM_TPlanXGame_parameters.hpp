#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBackpackComponentTPlanX_PickupItemFromWrapperDetail_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemPickupInfo                       PickupInfo;                                               
	EBattleItemPickupReason                            Reason;                                                   
	EBattleItemClientPickupType                        BattleItemClientPickupType;                               
	bool                                               ReturnValue;                                              
};


struct UBackpackComponentTPlanX_PickItem_IntoSafetyBox_Params
{
	struct FItemDefineID                               DefineID;                                                 
	struct FBattleItemPickupInfo                       PickupInfo;                                               
	EBattleItemPickupReason                            Reason;                                                   
	bool                                               ReturnValue;                                              
};


struct UBackpackComponentTPlanX_NotifyItemUpdated_Params
{
	struct FItemDefineID                               DefineID;                                                 
};


struct UBackpackComponentTPlanX_NotifyItemRemoved_Params
{
	struct FItemDefineID                               DefineID;                                                 
};


struct UBackpackComponentTPlanX_NotifyItemListUpdated_Params
{
};


struct UBackpackComponentTPlanX_ChangeItemStoreAreaNewInner_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                InItemNum;                                                
	EItemStoreArea                                     InItemStoreArea;                                          
	bool                                               ReturnValue;                                              
};


struct UBackpackComponentTPlanX_ChangeItemStoreAreaNew_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                InItemNum;                                                
	EItemStoreArea                                     InItemStoreArea;                                          
	bool                                               ReturnValue;                                              
};


struct UBackpackComponentTPlanX_ChangeItemStoreAreaInner_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                InItemNum;                                                
	EItemStoreArea                                     InItemStoreArea;                                          
	bool                                               ReturnValue;                                              
};


struct UBackpackComponentTPlanX_ChangeItemStoreArea_Params
{
	struct FItemDefineID                               DefineID;                                                 
	int                                                InItemNum;                                                
	EItemStoreArea                                     InItemStoreArea;                                          
	bool                                               ReturnValue;                                              
};


struct UBackpackTPlanXUtils_UnRegisterInvokeClass_Params
{
};


struct UBackpackTPlanXUtils_RegisterInvokeClass_Params
{
};


struct UBackpackTPlanXUtils_RealGetBPUtils_Params
{
	class UBackpackBlueprintTPlanXUtils*               ReturnValue;                                              
};


struct ATPlanXGameMode_SetStateLeftTime_Params
{
	int                                                LeftTime;                                                 
};


struct ATPlanXGameMode_SetPlayerStartOccupied_Params
{
	class AActor*                                      PlayerStart;                                              
};


struct ATPlanXGameMode_RevisePlayerTombBoxDropWrapperList_Params
{
	class ASTExtraBaseCharacter*                       Character;                                                
	TArray<struct FPickUpItemData>                     OutItemDataList;                                          
	class ASTExtraBaseCharacter*                       DamageCauser;                                             
	int                                                InstanceIDCnt;                                            
};


struct ATPlanXGameMode_NotifyPlayerExitWhenNotStarted_Params
{
	uint32_t                                           PlayerKey;                                                
	struct FName                                       PlayerType;                                               
	struct FString                                     Reason;                                                   
};


struct ATPlanXGameMode_NotifyPlayerExit_Params
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


struct ATPlanXGameMode_NotifyGameModeInit_Params
{
};


struct ATPlanXGameMode_LoadMapFinished_Params
{
};


struct ATPlanXGameMode_IsNeedRestPlayerStart_Params
{
	class AController*                                 Player;                                                   
	bool                                               ReturnValue;                                              
};


struct ATPlanXGameMode_GMShowSpawner_Params
{
};


struct ATPlanXGameMode_GMShowEnterExit_Params
{
};


struct ATPlanXGameMode_GMShowAssetBox_Params
{
};


struct ATPlanXGameMode_GMSetPVEAIMax_Params
{
	int                                                Num;                                                      
};


struct ATPlanXGameMode_GetOccupiedPlayerStartGroupList_Params
{
	TArray<class AActor*>                              ReturnValue;                                              
};


struct ATPlanXGameMode_CheckNoHumanExist_Params
{
	bool                                               ReturnValue;                                              
};


struct ATPlanXGameMode_CheckAIActive_Params
{
};


struct ATPlanXGameState_ResetLeftTime_Params
{
};


struct ATPlanXGameState_PreLoadPreciousItemsMap_Params
{
};


struct ATPlanXGameState_OnRep_LastLeaveTime_Params
{
};


struct ATPlanXGameState_GetPlayerMilitartyOnClient_Params
{
	int                                                ReturnValue;                                              
};


struct ATPlanXGameState_CheckPreciousItemPrice_Params
{
	int                                                TypeSpecificID;                                           
	int                                                ReturnValue;                                              
};


struct ATPlanXGameState_BroadcastClimbHelicopter_Params
{
	class ASTExtraPlayerCharacter*                     Character;                                                
	class AActor*                                      ExitActor;                                                
};


struct UTPlanXMetroStoreComponent_OnRep_StoreID_Params
{
};


struct UTPlanXMetroStoreComponent_OnRep_Status_Params
{
};


struct UTPlanXMetroStoreComponent_OnRep_GoodsNum_Params
{
};


struct UTPlanXMetroStoreComponent_OnRep_GoodsListNum_Params
{
};


struct UTPlanXMetroStoreComponent_OnRep_GoodsList_Params
{
};


struct UTPlanXMetroStoreComponent_OnRep_CurrencyList_Params
{
};


struct UTPlanXMetroStoreComponent_OnRep_BuyFrequence_Params
{
};


struct ATPlanXPlayerState_OnRepXTBetrayInfo_Params
{
};


struct ATPlanXPlayerState_OnRepRelevantPlayerTaskNotifyBP_Params
{
};


struct ATPlanXPlayerState_OnRepEscapePosition_Params
{
};


struct ATPlanXPlayerState_OnRepAssetPointsCheckedByTeammate_Params
{
};


struct ATPlanXPlayerState_OnRep_RelevantPlayerTaskNotify_Params
{
};


struct ATPlanXPlayerState_OnRep_IsRunAway_Params
{
};


struct ATPlanXPlayerState_OnRep_IsEscaped_Params
{
};


struct ATPlanXPlayerState_OnRep_Gold_Params
{
};


struct ATPlanXPlayerState_OnRep_EscapePosiNotify_Params
{
};


struct ATPlanXPlayerState_OnRep_BetrayInfo_Params
{
};


struct ATPlanXPlayerState_OnRep_AssetPointsCheckedByTeammate_Params
{
};


struct ATPlanXPlayerState_OnPlayerEscaped_Params
{
};


struct ATPlanXPlayerState_IsInGame_Params
{
	bool                                               ReturnValue;                                              
};


struct ATPlanXPlayerState_IsInBetrayState_Params
{
	bool                                               ReturnValue;                                              
};


struct ATPlanXPlayerState_GetAllPreciousItemsList_Params
{
	TArray<struct FPreciousItem>                       ReturnValue;                                              
};


struct UWorldPositionDisplayWidget_UpdatePosition_Params
{
	class UCanvasPanelSlot*                            PanelSlot;                                                
	struct FVector                                     InWorldPosition;                                          
};


struct UWorldPositionDisplayWidget_SetWorldLocation_Params
{
	struct FVector                                     InWorldLocation;                                          
};


struct UWorldPositionDisplayWidget_GetWorldLocation_Params
{
	struct FVector                                     ReturnValue;                                              
};


struct UWorldPositionDisplayWidget_GetScreenOffset_Params
{
	struct FVector2D                                   ReturnValue;                                              
};

}

