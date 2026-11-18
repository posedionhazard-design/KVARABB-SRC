#pragma once


 
namespace SDK
{






class UBaziState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x168];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.BaziState");
		return pStaticClass;
	}


	void OnControllerReconnected();
	void AddChori(const struct FChori& Element);
	void AddBazi(const struct FBazi& Element);
};




class UClientGlueHiaSystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x64];                                      
	bool                                               bEnglish;                                                 
	unsigned char                                      UnknownData01[0x3];                                       
	class UBaziState*                                  BaziState;                                                
	class UMakeWoe*                                    MakeWoe;                                                  
	unsigned char                                      UnknownData02[0x4B8];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.ClientGlueHiaSystem");
		return pStaticClass;
	}


	float Vulou();
	void LuaFunc9(int Param1);
	bool LuaFunc8(int Param1);
	bool LuaFunc7(int Param1);
	bool LuaFunc6(int Param1);
	bool LuaFunc5(int Param1);
	bool LuaFunc4(int Param1);
	void LuaFunc3(int Param1);
	void LuaFunc2();
	bool LuaFunc1(class AActor* PtrActor);
	void Func9(class AActor* PtrWeapon);
	int Func8(class AActor* PtrWeapon, const struct FBulletHitInfoUploadData& UploadData, const struct FLocalShootHitData& LocalHitData);
	bool Func7();
	float Func6(class AActor* Param1);
	float Func3();
	void Func29(class UWorld* World, const struct FBulletHitInfoUploadDataInReplay& HitData, float DrawRadius, float DisplayTime, bool bDrawVictimBound);
	void Func28(class AActor* Weapon, const struct FBulletHitInfoUploadData& BulletHitInfoUploadData, const struct FLocalShootHitData& LocalShootHitData);
	void Func27(uint32_t ShootID);
	void Func26(class AActor* Param4, class AActor* Param5);
	void Func25(int Param1, float Param2, float Param3, class AActor* Param4, class AActor* Param5);
	void Func24(int Param1, float Param2, float Param3, float Param4, class AActor* Param5, class AActor* Param6);
	void Func23(uint32_t Param1, const struct FVector& Param2, const struct FHitResult& Param3);
	void Func22(uint32_t Param1, const struct FVector& Param2, const struct FVector& Param3);
	void Func21(class AActor* Param1);
	void Func20(class AActor* Param1, struct FVector* Param2);
	bool Func2(class AActor* CharacterPtr, bool bParam1);
	void Func19(uint32_t Param1, float Param2, float Param3);
	void Func18(TArray<struct FBazi> Bazi, TArray<struct FChori> Chori);
	void Func17(const struct FFatalDamageParameter& Param1);
	void Func16();
	void Func15(class AActor* Param1);
	void Func14(const struct FShootTimeData& InData, class AActor* PtrWeapon);
	float Func11(class AActor* Param1);
	void Func10(class AActor* Param1);
	bool Func1(class AActor* CharacterPtr, float TimeInSeconds, float MarginInSeconds);
};




class UFuzzyObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x320];                                     
	int                                                Param1;                                                   
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.FuzzyObject");
		return pStaticClass;
	}


	bool SetUInt8ValueByName(int Name, unsigned char Value);
	bool SetUInt64ValueByName(int Name, uint64_t Value);
	bool SetUInt32ValueByName(int Name, uint32_t Value);
	bool SetUInt16ValueByName(int Name, uint16_t Value);
	bool SetInt8ValueByName(int Name, int8_t Value);
	bool SetInt64ValueByName(int Name, int64_t Value);
	bool SetInt32ValueByName(int Name, int Value);
	bool SetInt16ValueByName(int Name, int16_t Value);
	bool SetFloatValueByName(int Name, float Value);
	bool SetBoolValueByName(int Name, bool Value);
	bool GetUInt8ValueByName(int Name, unsigned char* OutValue);
	bool GetUInt64ValueByName(int Name, uint64_t* OutValue);
	bool GetUInt32ValueByName(int Name, uint32_t* OutValue);
	bool GetUInt16ValueByName(int Name, uint16_t* OutValue);
	bool GetInt8ValueByName(int Name, int8_t* OutValue);
	bool GetInt64ValueByName(int Name, int64_t* OutValue);
	bool GetInt32ValueByName(int Name, int* OutValue);
	bool GetInt16ValueByName(int Name, int16_t* OutValue);
	bool GetFloatValueByName(int Name, float* OutValue);
	bool GetBoolValueByName(int Name, bool* OutValue);
};




class USCoronaClientData : public UFuzzyObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.SCoronaClientData");
		return pStaticClass;
	}

};




class UClientAmaUbaSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x60];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.ClientAmaUbaSubsystem");
		return pStaticClass;
	}


	void Func1(int IntType, float InTimestamp, int IncreaseCount, bool bAlertUploadFrequency);
};




class UMakeWoe : public UObject
{
public:
	bool                                               bEnable01;                                                
	bool                                               bEnable02;                                                
	bool                                               bEnable03;                                                
	unsigned char                                      UnknownData00[0x5];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.MakeWoe");
		return pStaticClass;
	}

};




class UFullCoverMarginIntervalCharacterTickerInterval : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.FullCoverMarginIntervalCharacterTickerInterval");
		return pStaticClass;
	}

};




class UFullCoverMarginIntervalCharacterTicker : public UObject
{
public:
	float                                              ConfigIntervalTime;                                       
	float                                              ConfigMarginTime;                                         
	unsigned char                                      UnknownData00[0x8];                                       
	EPawnState                                         SkipPawnState64;                                          
	unsigned char                                      UnknownData01[0x7];                                       
	TMap<uint32_t, class UFullCoverMarginIntervalCharacterTickerInterval*> CurrentIntervalMap;                                       
	TMap<uint32_t, struct FPendingJudgeStruct>         PendingJudgeMap;                                          
	TArray<class UFullCoverMarginIntervalCharacterTickerInterval*> InfoObjectPool;                                           
	unsigned char                                      UnknownData02[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.FullCoverMarginIntervalCharacterTicker");
		return pStaticClass;
	}

};




class UCamoyoHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.CamoyoHelper");
		return pStaticClass;
	}


	static void MakeRectTu(const struct FScriptDelegate& CamoyoRetDelegate, const struct FString& Filename, int Quality, bool bShowUI);
	static void MakeMemPerform(int InbOpen);
	static void MakeFitRectTu(const struct FScriptDelegate& CamoyoRetDelegate, const struct FVector4& InCutParam, int InTuType, bool isShowUI);
};




class UHiggsBosonComponent : public ULuaActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1F];                                      
	bool                                               bOpenActorChannelErrorReport;                             
	unsigned char                                      UnknownData01[0xF8];                                      
	struct FString                                     TraceData;                                                
	struct FString                                     GameTraceData;                                            
	uint32_t                                           HeartBreaks;                                              
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     HeartInfo;                                                
	struct FScriptMulticastDelegate                    OnSwiftHawkDelegate;                                      
	struct FScriptMulticastDelegate                    OnEzioDelegate;                                           
	class ASTExtraBaseCharacter*                       CharacterOwner;                                           
	class ASTExtraPlayerController*                    PlayerController;                                         
	bool                                               bClientInfoReceived;                                      
	unsigned char                                      UnknownData03[0x7];                                       
	TArray<uint32_t>                                   ClientInfoAsUInt32Array;                                  
	TArray<unsigned char>                              IntegrityItemCheckResultAsBytes;                          
	unsigned char                                      UnknownData04[0x40];                                      
	bool                                               bRoofTouchActive;                                         
	bool                                               bPalmRestActive;                                          
	unsigned char                                      UnknownData05[0x12];                                      
	int                                                RoofTouchStatus;                                          
	TArray<struct FString>                             PalmRestSampleKeys;                                       
	int                                                PalmRestSampleCount;                                      
	unsigned char                                      UnknownData06[0x9C4];                                     
	class USCoronaClientData*                          SecurityCoronaLabClientDataPointer;                       
	unsigned char                                      UnknownData07[0x68];                                      
	bool                                               bMHActive;                                                
	unsigned char                                      UnknownData08[0xAF];                                      
	TMap<int, int>                                     FFItemIDMap;                                              
	TMap<int, int>                                     FFWeaponItemIDMap;                                        
	unsigned char                                      UnknownData09[0x1C];                                      
	int                                                ReceivedRotationModifiedCount;                            
	int                                                ReceivedTranslationModifiedCount;                         
	int                                                ReceivedScale3DModifiedCount;                             
	TArray<int>                                        LastInvalidIndexListInPakLite;                            
	unsigned char                                      UnknownData10[0x8];                                       
	struct FScriptMulticastDelegate                    OnServerReceiveInvalidFilesInPakLiteDelegate;             
	unsigned char                                      UnknownData11[0xE8];                                      
	float                                              TouchScreenActiveTimeRatioThreshold;                      
	unsigned char                                      UnknownData12[0x4];                                       
	float                                              MouTa;                                                    
	int                                                BandaCountThreshold;                                      
	bool                                               bEnableBandCount;                                         
	unsigned char                                      UnknownData13[0x3];                                       
	float                                              IntervalThreshold1;                                       
	int                                                HongThreshold;                                            
	float                                              NovoThreshold;                                            
	unsigned char                                      UnknownData14[0x40];                                      
	int                                                MaxCountOfPlayerHistoryLocationToDetectCamouflage;        
	unsigned char                                      UnknownData15[0xC];                                       
	float                                              MinDistanceToDetectCamouflage;                            
	unsigned char                                      UnknownData16[0x30];                                      
	float                                              OfflineMoveThreshold;                                     
	float                                              OfflineMoveValidScale;                                    
	float                                              LongTimeNoReceiveScale;                                   
	int                                                MinOfflineCount;                                          
	int                                                MaxOfflineCount;                                          
	bool                                               bOfflineMoveReady;                                        
	unsigned char                                      UnknownData17[0x27];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.HiggsBosonComponent");
		return pStaticClass;
	}


	void Zanwu(const struct FString& Param1);
	void SyncServerParam(bool Param1);
	void SwiftHawk(TArray<unsigned char> Hawks, uint32_t Magic);
	void ShowABCD(const struct FString& Message, bool bIsClientShowWindow);
	void SetSchemeForInitialize(int Index, uint32_t VerifyLen, TArray<unsigned char> VerifyHashArray, TArray<struct FPatchPoint> PatchPointArray);
	void SetSchemeForGet(int Index, uint32_t VerifyLen, TArray<unsigned char> VerifyHashArray, TArray<struct FPatchPoint> PatchPointArray);
	void ServerPoPo(TArray<unsigned char>* Array);
	void SendMoveStatusToServer(EPawnState State);
	void S2CNuoro(int Lotion);
	void RPC_ServerGlueHiaPark(int8_t HiaType, TArray<unsigned char> GlueHiaParkArr, uint32_t HiaStatus, TArray<unsigned char> GlueArg, TArray<unsigned char> GlueHiaParkArr2, uint32_t HiaStatus2);
	void RPC_ServerCapbo(int8_t BoCapC, int8_t InBoType, TArray<unsigned char> BoDataArr);
	void RPC_ServerAddInvalidFilesInPakLite(TArray<int> InvalidIndexList);
	void RPC_ClientCoronaLab(unsigned char bAllSwitch, TArray<unsigned char> CoronaLab, uint32_t CoronaState);
	void OnWeaponAimInput(float InDistToEnemy, float InYaw, float InPitch, float InRoll);
	void OnTouchInput(float InYaw, float InPitch, float InRoll);
	void OnStopFireEvent();
	void OnStartFireEvent();
	void OnSkillInteruptVisual(class AActor* InTarget, class AActor* InCauser);
	void OnSkillEndVisual(class AActor* InTarget, class AActor* InCauser);
	void OnSkillEndTrans(class AActor* InTarget, class AActor* InCauser);
	void OnSkillBeginVisual(class AActor* InTarget, class AActor* InCauser);
	void OnSkillBeginTrans(class AActor* InTarget, class AActor* InCauser);
	void OnRecoilCurveCheckFailed(class AActor* Weapon);
	void OnPlayerScopeOut(bool bBegan);
	void OnPlayerScopeIn(bool bBegan);
	void OnMyPawnRespawn(class AUAEPlayerController* InPlayerController);
	void OnKillSomeOneEvent(class AActor* InSomeOne);
	void OnGyroInput(float InYaw, float InPitch, float InRoll);
	void OnClientAdjustPosition(const struct FVector& NewLoc, ECharacterMoveDragReason Reason);
	void OnCapboReturn(int BoCapC, int InBoType, TArray<unsigned char> RetData);
	void OnBulletImpactEvent(class AActor* InCauser, const struct FHitResult& InImpactResult);
	bool IsCharacterOwnerWerewolf();
	bool IsCharacterOwnerButcher();
	void HandleClientReconnect();
	void FlushGameEnd();
	void Ezio(int Param1, int Param2, int Param3, int Param4);
	int EnableTickEncrypt();
	int EnablePeekShootVerify();
	void EnableEnhancedDynamicActors(int Index);
	int EnableCheckFilesInPakLite(TArray<struct FString> InFiles, int InVerifyCountSinglePass);
	void DispatchIntegrityCheckItem(uint32_t PlatID, uint32_t AreaID, uint32_t GameBits, uint32_t Index, int Offset, uint32_t Len, uint32_t Type);
	void DevPVSCheckClientLocationC2S(class ASTExtraBaseCharacter* PtrOtherCharacter, const struct FVector& D, const struct FVector& A, const struct FVector& V, const struct FVector& C, bool b1);
	void DevPVSCheckClientLocation(class AActor* PtrSimulatedProxy, const struct FVector& D);
	void DevPrintMouke(const struct FString& Param0, float Param1, const struct FString& Param3);
	void ControlRoofTouch(int Switch);
	void ControlPalmRest(int Switch);
	void ControlMoveInputRecord(int Switch, float RecordCooldown, int BitmapSize, int MinValidSampleCount, uint32_t InAngleSampleMaxCount, uint32_t InAngleDistributionNum);
	void ControlMHActive(int Switch);
	void Cofew(uint32_t InIter);
	void ClientSwiftHawkWithParams(TArray<unsigned char> Hawks);
	void ClientSwiftHawk(unsigned char Type, int SequenceID);
	void ClientReceiveEx(TArray<unsigned char> RPCConstArray);
	void ClientDoJT(bool bDelayUntilShot);
	void ClientCloseBaziUI(TArray<struct FBazi> Bazi, TArray<struct FChori> Chori);
	void ClientAccom(uint16_t Owea);
	void C2SSendAlert(const struct FString& Param1);
};




class UHiggsBosonDataSubsystem : public UGameInstanceSubsystem
{
public:
	bool                                               bFingerTouchFlowServerEnabled;                            
	unsigned char                                      UnknownData00[0x7];                                       
	struct FFingerTouchFlow                            FingerTouchFlow;                                          
	int                                                FingerTouchFlow_MinSampleCount;                           
	int                                                FingerTouchFlow_MaxClusterCount;                          
	float                                              FingerTouchFlow_SamplingDuration;                         
	float                                              FingerTouchFlow_CoolDown;                                 
	int                                                FingerTouchFlow_MaxSamplePerCluster;                      
	unsigned char                                      UnknownData01[0x4];                                       
	unsigned char                                      UnknownData02[0x50];                                      
	int                                                FingerTouchFlow_AuxResult;                                
	unsigned char                                      UnknownData03[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.HiggsBosonDataSubsystem");
		return pStaticClass;
	}

};




class UHiggsBosonScriptHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.HiggsBosonScriptHelper");
		return pStaticClass;
	}


	static void FileCRCGuard_UnregisterFile(const struct FString& InFilePath);
	static bool FileCRCGuard_RegisterFile(const struct FString& InFilePath, const struct FString& InTag);
};




class UMarginIntervalCharacterTickerPlayerInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.MarginIntervalCharacterTickerPlayerInfo");
		return pStaticClass;
	}

};




class UMarginIntervalCharacterTicker : public UObject
{
public:
	float                                              IntervalTime;                                             
	float                                              MarginTime;                                               
	EPawnState                                         SkipPawnState64;                                          
	unsigned char                                      UnknownData00[0x7];                                       
	TMap<uint32_t, class UMarginIntervalCharacterTickerPlayerInfo*> PlayerKey2Info;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.MarginIntervalCharacterTicker");
		return pStaticClass;
	}


	void Reset();
};




class USecurityAvatarSystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x60];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.SecurityAvatarSystem");
		return pStaticClass;
	}


	void OnAvatarRectifyDataChange(class AUAECharacter* CharacterOwner, int ItemId);
	void OnAvatarEquipped(class AUAECharacter* CharacterOwner, int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID);
};




class USecurityImprisonComp : public UActorComponent
{
public:
	class ASTExtraPlayerController*                    OwnerPC;                                                  
	class ASTExtraBaseCharacter*                       CharacterWaitForOp;                                       
	TArray<uint64_t>                                   TeammateKillerUID;                                        
	TArray<ETeammateHurtType>                          TeammateKillType;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.SecurityImprisonComp");
		return pStaticClass;
	}


	void ReleaseTeammate(uint64_t PlayerUID);
	void ImprisonmentUIUpdate(uint64_t PlayerUID, bool bIsImprison);
	void ImprisonmentTeammate(uint64_t PlayerUID, bool bIscomplaint);
	void ImprisonmentReport(uint64_t PlayerUID);
};




class UTickAsTimer : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.TickAsTimer");
		return pStaticClass;
	}

};




class UTimeIntervalPawnStateHistorySystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      
	int                                                HistoryArraySize;                                         
	unsigned char                                      UnknownData01[0x7C];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HiggsBoson.TimeIntervalPawnStateHistorySystem");
		return pStaticClass;
	}


	void UpdateParams();
	bool QueryHistoryMaxVelocity(uint64_t UID, float CenterTime, float MarginTime, float* OutMaxZVelocity, float* OutMaxXYVelocity);
};


}

