#pragma once


 
namespace SDK
{






class UBackpackComponentTPlanX : public UBackpackComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.BackpackComponentTPlanX");
		return pStaticClass;
	}


	bool PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType);
	bool PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	void NotifyItemUpdated(const struct FItemDefineID& DefineID);
	void NotifyItemRemoved(const struct FItemDefineID& DefineID);
	void NotifyItemListUpdated();
	bool ChangeItemStoreAreaNewInner(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
	bool ChangeItemStoreAreaNew(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
	bool ChangeItemStoreAreaInner(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
	bool ChangeItemStoreArea(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
};




class UBackpackTPlanXUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.BackpackTPlanXUtils");
		return pStaticClass;
	}


	static void UnRegisterInvokeClass();
	static void RegisterInvokeClass();
	static class UBackpackBlueprintTPlanXUtils* RealGetBPUtils();
};




class UBackpackBlueprintTPlanXUtils : public UBackpackBlueprintUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.BackpackBlueprintTPlanXUtils");
		return pStaticClass;
	}

};




class ATPlanXGameMode : public ABattleRoyaleGameModeTeam
{
public:
	TArray<class AActor*>                              OccupiedPlayerStartGroupList;                             
	TArray<class ASTExtraPlayerStartGroup*>            UnOccupiedPlayerStartGroupList;                           
	bool                                               IsResetPlayerStart;                                       
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              LastCheckAITime;                                          
	float                                              CheckAIActiveInterval;                                    
	float                                              CheckAIActiveRange;                                       
	int                                                DogTagID;                                                 
	int                                                BetrayAIDropID;                                           
	int                                                BetrayAIDropDot;                                          
	bool                                               bPreSpawnPlayers;                                         
	bool                                               bEnableEcapedPlayerInTeam;                                
	bool                                               bZombiePVEMode;                                           
	bool                                               bMapLoaded;                                               
	int                                                iRandomPolicestationIndex;                                
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FName>                               LoadingPlayerState;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXGameMode");
		return pStaticClass;
	}


	void SetStateLeftTime(int LeftTime);
	void SetPlayerStartOccupied(class AActor* PlayerStart);
	void RevisePlayerTombBoxDropWrapperList(class ASTExtraBaseCharacter* Character, class ASTExtraBaseCharacter* DamageCauser, int InstanceIDCnt, TArray<struct FPickUpItemData>* OutItemDataList);
	void NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, const struct FName& PlayerType, const struct FString& Reason);
	void NotifyPlayerExit(uint32_t PlayerKey, const struct FName& PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, const struct FString& FailureMessage, const struct FName& ParamState, const struct FString& ParamReason);
	void NotifyGameModeInit();
	void LoadMapFinished();
	bool IsNeedRestPlayerStart(class AController* Player);
	void GMShowSpawner();
	void GMShowEnterExit();
	void GMShowAssetBox();
	void GMSetPVEAIMax(int Num);
	TArray<class AActor*> GetOccupiedPlayerStartGroupList();
	bool CheckNoHumanExist();
	void CheckAIActive();
};




class UTPlanXGameModeStateFightingTeam : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXGameModeStateFightingTeam");
		return pStaticClass;
	}

};




class UTPlanXGameModeStateFinished : public UGameModeStateFinishedTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXGameModeStateFinished");
		return pStaticClass;
	}

};




class UTPlanXGameModeStateReady : public UGameModeStateReady
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXGameModeStateReady");
		return pStaticClass;
	}

};




class ATPlanXGameState : public ASTExtraGameStateBase
{
public:
	float                                              LastLeaveTime;                                            
	unsigned char                                      UnknownData00[0x4];                                       
	TMap<int, int>                                     PreciousItemMap;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXGameState");
		return pStaticClass;
	}


	void ResetLeftTime();
	void PreLoadPreciousItemsMap();
	void OnRep_LastLeaveTime();
	int GetPlayerMilitartyOnClient();
	int CheckPreciousItemPrice(int TypeSpecificID);
	void BroadcastClimbHelicopter(class ASTExtraPlayerCharacter* Character, class AActor* ExitActor);
};




class UTPlanXMetroStoreComponent : public ULuaActorComponent
{
public:
	int                                                status;                                                   
	float                                              BuyFrequence;                                             
	TArray<struct FCurrencyInfo>                       CurrencyList;                                             
	TArray<struct FGoodsInfo>                          GoodsList;                                                
	TArray<int>                                        GoodsListNum;                                             
	TArray<int>                                        GoodsNum;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXMetroStoreComponent");
		return pStaticClass;
	}


	void OnRep_StoreID();
	void OnRep_Status();
	void OnRep_GoodsNum();
	void OnRep_GoodsListNum();
	void OnRep_GoodsList();
	void OnRep_CurrencyList();
	void OnRep_BuyFrequence();
};




class UTPlanXPickupItemUsefulProxy : public UPickupItemUsefulProxy
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXPickupItemUsefulProxy");
		return pStaticClass;
	}

};




class ATPlanXPlayerState : public ASTExtraPlayerState
{
public:
	TArray<struct FSyncRelevantPlayerTask>             SyncRelevantPlayerTask;                                   
	TArray<struct FVector>                             EscapePosi;                                               
	int                                                BetrayDefaultTime;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	uint64_t                                           Gold;                                                     
	bool                                               bIsEscaped;                                               
	bool                                               bIsRunAway;                                               
	unsigned char                                      UnknownData01[0x6];                                       
	TArray<int>                                        AssetPointsCheckedByTeammate;                             
	struct FXTBetrayInfo                               BetrayInfo;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.TPlanXPlayerState");
		return pStaticClass;
	}


	void OnRepXTBetrayInfo();
	void OnRepRelevantPlayerTaskNotifyBP();
	void OnRepEscapePosition();
	void OnRepAssetPointsCheckedByTeammate();
	void OnRep_RelevantPlayerTaskNotify();
	void OnRep_IsRunAway();
	void OnRep_IsEscaped();
	void OnRep_Gold();
	void OnRep_EscapePosiNotify();
	void OnRep_BetrayInfo();
	void OnRep_AssetPointsCheckedByTeammate();
	void OnPlayerEscaped();
	bool IsInGame();
	bool IsInBetrayState();
	TArray<struct FPreciousItem> GetAllPreciousItemsList();
};




class UWorldPositionDisplayWidget : public ULuaUAEUserWidget
{
public:
	class UCanvasPanel*                                CanvasPanel_Root;                                         
	struct FVector                                     WorldLocation;                                            
	struct FVector2D                                   ScreenOffset;                                             
	bool                                               bNeedDivideByScale;                                       
	unsigned char                                      UnknownData00[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TPlanXGame.WorldPositionDisplayWidget");
		return pStaticClass;
	}


	void UpdatePosition(class UCanvasPanelSlot* PanelSlot, const struct FVector& InWorldPosition);
	void SetWorldLocation(const struct FVector& InWorldLocation);
	struct FVector GetWorldLocation();
	struct FVector2D GetScreenOffset();
};


}

