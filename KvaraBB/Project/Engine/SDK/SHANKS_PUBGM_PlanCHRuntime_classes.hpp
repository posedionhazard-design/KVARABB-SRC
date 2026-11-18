#pragma once


 
namespace SDK
{






class APlanCH_GameMode : public ABattleRoyaleGameMode
{
public:
	class ADynamicSublevelGenerator*                   LevelGenerator;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCH_GameMode");
		return pStaticClass;
	}


	void HandleNavigationInfo(class AController* Controller);
	class ASTExtraPlayerStart* GetPlayerStart(int LandId, int SkinID);
	void DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason);
};




class UPlanCH_GameModeState_Active : public UGameModeStateActive
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCH_GameModeState_Active");
		return pStaticClass;
	}

};




class UPlanCH_GameModeState_Fighting : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCH_GameModeState_Fighting");
		return pStaticClass;
	}

};




class APlanCH_GameState : public ASTExtraGameStateBase
{
public:
	struct FScriptMulticastDelegate                    OnIslandPlayerChangeDelegate;                             
	struct FPlanCH_CommonOccupy                        PartyDanceLeadInfo_2;                                     
	struct FPlanCH_CommonOccupy                        PartyDanceLeadInfo_3;                                     
	struct FPlanCH_CommonOccupy                        PartyDanceLeadInfo_4;                                     
	struct FPlanCH_CommonOccupy                        PartyDanceLeadInfo_5;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCH_GameState");
		return pStaticClass;
	}


	void OnRep_PartyDanceLeadInfo_5();
	void OnRep_PartyDanceLeadInfo_4();
	void OnRep_PartyDanceLeadInfo_3();
	void OnRep_PartyDanceLeadInfo_2();
	void LuaOnRep_PartyDanceLeadInfo(int LandId);
	void ChangePartyLeadInfo(int LandId, bool bOccupied, int BeginTime, int EndTime, const struct FString& PlayerUID);
};




class APlanCH_PlayerState : public ASTExtraPlayerState
{
public:
	int                                                LandId;                                                   
	int                                                SkinID;                                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCH_PlayerState");
		return pStaticClass;
	}


	void RequestPaintDecal(int DecalId, const struct FTransform& TargetTransform);
	void OnRep_SkinId();
	void OnRep_LandId();
	void InitLandId();
	bool CanPaintDecal(int DecalId);
};




class UPlanCHBinFileHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCHBinFileHelper");
		return pStaticClass;
	}


	int Init(int z4BufferSize, int zeroListSize);
};




class UPlanCHGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCHGameplayStatics");
		return pStaticClass;
	}


	float SpinEvaluate(float S, float T);
	bool SetPlayerMovementBlendTime(class ASTExtraPlayerCharacter* PlayerChar, int nType, float BlendTime);
	void GetActorBound(class AActor* Actor, struct FVector* Size);
	void ChangeLightChannel(class UPrimitiveComponent* InComponent, int InChannelBitMask);
};




class UPlanCHMapData : public UMapDataBase
{
public:
	TArray<class ASTExtraPlayerCharacter*>             PlayerCharacterArrayC;                                    
	TArray<struct FVector>                             OffsetLocations;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCHMapData");
		return pStaticClass;
	}


	bool RemovePlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem);
	bool AddPlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem, class UWidget* PlayerInfoBPItem, class UWidget* PlayerInfoRotWidgetItem, const struct FVector& OffsetLocation);
};




class APlanCHSpectatorPawn : public ASpectatorPawn
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              
	float                                              PlaneMoveMaxSpeed;                                        
	float                                              VerticalMoveMaxSpeed;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanCHRuntime.PlanCHSpectatorPawn");
		return pStaticClass;
	}


	void OnSpectatorRestart();
	void MoveRight(float Val);
	void MoveForward(float Val);
};


}

