#pragma once


 
namespace SDK
{






class UActorClickPickerWidget : public UUAEUserWidget
{
public:
	TWeakObjectPtr<class UActorInspectorTab>           OwnerTab;                                                 
	bool                                               bPickerEnabled;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              TraceDistance;                                            
	bool                                               bPrioritizePawns;                                         
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.ActorClickPickerWidget");
		return pStaticClass;
	}


	void SetPickerEnabled(bool bEnable);
	void SetOwnerTab(class UActorInspectorTab* InOwnerTab);
	bool IsPickerEnabled();
};




class UImGuiTabBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     TabName;                                                  
	struct FName                                       TabID;                                                    
	bool                                               bIsVisible;                                               
	bool                                               bIsEnabled;                                               
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                TabPriority;                                              
	struct FString                                     LuaFilePath;                                              
	bool                                               bIsLuaInitialized;                                        
	unsigned char                                      UnknownData02[0x3];                                       
	TWeakObjectPtr<class AImGuiWindowBase>             OwnerWindow;                                              
	bool                                               bIsActive;                                                
	bool                                               bIsInitialized;                                           
	unsigned char                                      UnknownData03[0x2];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.ImGuiTabBase");
		return pStaticClass;
	}

};




class UActorInspectorTab : public UImGuiTabBase
{
public:
	TWeakObjectPtr<class UWorld>                       SelectedWorld;                                            
	unsigned char                                      UnknownData00[0x13C];                                     
	TWeakObjectPtr<class UObject>                      SelectedObject;                                           
	TWeakObjectPtr<class AActor>                       SelectedActor;                                            
	unsigned char                                      UnknownData01[0x18];                                      
	TWeakObjectPtr<class UActorComponent>              SelectedComponent;                                        
	unsigned char                                      UnknownData02[0x6DC];                                     
	bool                                               bClickListenerEnabled;                                    
	unsigned char                                      UnknownData03[0x1F];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.ActorInspectorTab");
		return pStaticClass;
	}

};




class UActorPropertyMonitorWidget : public UUAEUserWidget
{
public:
	float                                              PropertyFontSize;                                         
	bool                                               bUpdatePropertyValueEveryFrame;                           
	unsigned char                                      UnknownData00[0x3];                                       
	class UCanvasPanel*                                MainCanvasPanel;                                          
	class UScrollBox*                                  PropertyScrollBox;                                        
	class UVerticalBox*                                PropertyContainer;                                        
	class USlider*                                     OpacitySlider;                                            
	class USlider*                                     ScaleSlider;                                              
	class UEditableTextBox*                            SearchTextBox;                                            
	class UButton*                                     DragHandleButton;                                         
	class UComboBoxString*                             ComponentComboBox;                                        
	class UComboBoxString*                             AttachedActorComboBox;                                    
	class UButton*                                     ClickListenerButton;                                      
	class UTextBlock*                                  ClickListenerButtonText;                                  
	class UTextBlock*                                  TargetActorName;                                          
	class UObject*                                     TargetObject;                                             
	class AActor*                                      TargetActor;                                              
	TArray<struct FString>                             PropertyNamesToDisplay;                                   
	TMap<struct FString, struct FPropertyItemData>     PropertyItems;                                            
	unsigned char                                      UnknownData01[0x40];                                      
	class UObject*                                     CachedPropertyNamesObject;                                
	unsigned char                                      UnknownData02[0x10];                                      
	class UActorComponent*                             SelectedComponent;                                        
	TMap<struct FString, class AActor*>                AttachedActorsMap;                                        
	unsigned char                                      UnknownData03[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.ActorPropertyMonitorWidget");
		return pStaticClass;
	}


	void SetTargetObject(class UObject* InObject);
	void SetTargetActor(class AActor* InActor);
	void SetPropertyNames(TArray<struct FString> PropertyNames);
	void SearchProperties(const struct FString& SearchKeyword);
	void RefreshPropertyValues();
	void OnSearchTextChanged(const struct FText& Text);
	void OnScaleChanged(float Value);
	void OnPropertyValueCommittedInternal(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnPropertyValueCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod, const struct FString& PropertyName);
	void OnPropertyNameButtonClicked();
	void OnOpacityChanged(float Value);
	void OnDragButtonReleased();
	void OnDragButtonPressed();
	void OnComponentSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnClickListenerButtonClicked();
	void OnAttachedActorSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
};




class UBuffTableListPanel : public UImGuiTabBase
{
public:
	unsigned char                                      UnknownData00[0x240];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.BuffTableListPanel");
		return pStaticClass;
	}

};




class UClientReportDataTab : public UImGuiTabBase
{
public:
	unsigned char                                      UnknownData00[0x200];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.ClientReportDataTab");
		return pStaticClass;
	}

};




class UCloudGMHandle : public UObject
{
public:
	bool                                               bEnableCloudGM;                                           
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.CloudGMHandle");
		return pStaticClass;
	}


	void InitCloudGM();
	void DestroyCloudGM();
};




class UImGuiFeatureWidget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     FeatureName;                                              
	struct FName                                       FeatureID;                                                
	bool                                               bIsVisible;                                               
	bool                                               bIsEnabled;                                               
	unsigned char                                      UnknownData01[0x2];                                       
	int                                                FeaturePriority;                                          
	struct FString                                     LuaFilePath;                                              
	bool                                               bIsLuaInitialized;                                        
	unsigned char                                      UnknownData02[0x3];                                       
	TWeakObjectPtr<class UObject>                      Owner;                                                    
	bool                                               bIsInitialized;                                           
	unsigned char                                      UnknownData03[0x3];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.ImGuiFeatureWidget");
		return pStaticClass;
	}


	void SetFeatureVisible(bool bVisible);
	void SetFeatureEnabled(bool bEnabled);
	bool IsFeatureVisible();
	bool IsFeatureEnabled();
	class AImGuiWindowBase* GetOwnerWindow();
	class UImGuiTabBase* GetOwnerTab();
	class UObject* GetOwner();
	struct FString GetFeatureName();
	struct FName GetFeatureID();
};




class UDebugNameDisplayFeature : public UImGuiFeatureWidget
{
public:
	float                                              NearbyActorDistance;                                      
	float                                              ShowDebugNameDuration;                                    
	TArray<class UClass*>                              ExcludedActorClasses;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.DebugNameDisplayFeature");
		return pStaticClass;
	}


	void AddExcludedActorClass(class UClass* ActorClass);
};




class UDevConsole : public UConsole
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	TArray<struct FString>                             LuaCommandList;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.DevConsole");
		return pStaticClass;
	}

};




class UGMCheatSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatSystem");
		return pStaticClass;
	}

};




class UGMCheatAI : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatAI");
		return pStaticClass;
	}


	void TeleportAIToLoc(float X, float Y, float Z);
	void SpawnAITeam(int Num, int AITeamID, unsigned char Difficulty);
	void SpawnAIPosi(int ID, int AITeamID, float PosiX, float PosiY, float PosiZ);
	void SpawnAI(int Num, bool bSpawnAll);
	void RecordReviveTowerInDSReplay();
	void OpenAIDebugInspector();
	void MoveToAIWithClassName(const struct FString& AIClassName, float XOffset, float YOffset, float ZOffset);
	void MoveToAIByDropItem(int ItemId);
	void MoveToAI();
	void MobAIIgnorePlayers();
	void LogAIItemCount(int ItemId, float Distance);
	void FindAIDropItem(int ItemId);
	void ChangeAIBehaviorTree(int TreeIndex);
	void AddAIItem(int ID, int Count, float Distance);
};




class UGMCheatAnimation : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatAnimation");
		return pStaticClass;
	}


	void TestAnimation(int Param1, bool Param2);
	void DumpCharacterAnimBPVars();
};




class UGMCheatAvatar : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatAvatar");
		return pStaticClass;
	}


	void UseLocalWeaponDIYData(bool bFlag);
	void UseLocalVehicleAvatar();
	void SetWeaponPendantShow(bool bShow);
	void SetVehicleAvatar(int VehicleShapeType, int VehicleSkin);
	void SetPlayerTeamBodyInstMask(int Mask);
	void SetPlayerBodyInstMask(int Mask);
	void SetGrenadeAvatar(int SubType, int EquipmentSkin);
	void SetEquipmentAvatar(int EquipmentAvatarType, int EquipmentSkin);
	void SetEnableWingAvatar(bool Val);
	void SetDownloadInBattle(bool bEnable);
	void SetAvatarDownloadInBattle(bool bEnableDownload);
	void PrintMainCharAllAvatar();
	void PrintAllStaticBufferSize();
	void DeleteVehicleAdvanceAvatar_Style(int VehicleSkin, int VehicleStyle);
	void DeleteVehicleAdvanceAvatar(int VehicleSkin, int ModelID);
	void DebugWorldPlayerAvatarInfo();
	void DebugChangeWearIndex(int Index);
	void ClearItemPathNotExistlist();
	void ClearItemHandleNotExistlist();
	void ClearCharacterAvatarHandlePool(bool bSelf);
	void ChangeBattleAvatar(int HeadAvatarID, int HairAvatarID, int InGender, int PutOffAvatar);
	void AddWeaponPendantItem(int WeaponId, int pendantID);
	void AddWeaponDIYPlan(int AvatarID, int DIYPlanID);
	void AddWeaponAvatar(int WeaponSkin);
	void AddWeaponAttachmentAvatarSimple(int WeaponId, int WeaponAttachmentSkin);
	void AddWeaponAttachmentAvatar(int WeaponId, int WeaponAttachmentSkin);
	void AddVehicleAvatar(int VehicleSkin);
	void AddVehicleAdvanceAvatar_Style(int VehicleSkin, int VehicleStyle);
	void AddVehicleAdvanceAvatar(int VehicleSkin, int ModelID, int ColorID, int PatternID, int ParticleID);
	void AddItemPathNotExistlist(int ItemId);
	void AddItemHandleNotExistlist(int ItemId);
};




class UGMCheatBackpack : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatBackpack");
		return pStaticClass;
	}


	void UseItem(int ID);
	void FlushItem(int onlyStatic);
	void DropItemsWithType(int TypeItem);
	void DropItem(int ID);
	void DropAllItem();
	void DestroyPickUpActors();
	void ClearBackpack();
	void BatchAddItemsString(TArray<struct FString> ItemDetailArray, bool bClearBackpack);
	void BatchAddItemsFromFile(const struct FString& Filename, bool bClearBackpack);
	void AddItemString(const struct FString& ItemDetail);
	void AddItemNew(const struct FString& ID, int Count, int PickupType);
	void AddItem(int ID, int Count, int PickupType);
	void AddAvatarItem(int ID, int Color, int Pattern, int Num);
};




class UGMCheatCharacter : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatCharacter");
		return pStaticClass;
	}


	void ToggleUserCmdDeltaSendAck(bool Val);
	void ToggleUserCmdDeltaFlag(bool Val);
	void ToggleUserCmdDeltaCheckSum(bool Val);
	void ToggleUserCmdDelta(bool Val);
	void ToggleServerAcknowledgePossession(bool Val);
	void ToggleCheatLocation(bool Val);
	void TestLowProbCircle(bool UseLowProb, int LoopCount);
	void TestLaunchFly(float Speed);
	void TestAutoMoveToShootingMachine();
	void TestAutoMoveToLocation(float X, float Y, float Z);
	void TestAutoMoveToCharacter(const struct FString& TargetPlayerUID);
	void TeamNoAlwaysRelevant();
	void SwitchViewTarget();
	void StartAirDropSpecified(float X, float Y);
	void StartAirDropBackupEnter(float X, float Y, int MaxPlaneNum);
	void StartAirDrop(int Index);
	void StartAirAttackSpecified(float X, float Y, float Radius);
	void StartAirAttack(int Index);
	void ShowWeaponRecordInfo();
	void ShowVaultEnable();
	void ShowResultWeaponRecordInfo();
	void ShowAllRoles();
	void SetTimeSpeedFactor(float Val);
	void SetTimeSpeedCheck(bool Val);
	void SetSpeed(float Modifier);
	void SetMaxHealth(float Hp);
	void SetLowProbCircle(float X, float Y, float R, float Prob);
	void SetCustomJumpPoint(float JmpX, float JmpY, float JmpRadius);
	void SetCircleCenter(const struct FString& PointString);
	void SetCirCenterFixed(bool Enable, float X, float Y);
	void SetAirDropEnable(bool Enable);
	void SetAirAttackEnable(bool Enable);
	void Set2x2ForceCircleLastR(float R);
	void Set2x2ForceCircle(float X, float Y, float R);
	void Set2x2CircleCenter(int Index, float X, float Y);
	void Set2x2Circle3Center(float X1, float Y1, float X2, float Y2, float x3, float y3);
	void PrintMovementLog(int PrintLog);
	void PrintDownCollision();
	void MoveToXY(float X, float Y);
	void MoveToVehicle(int ItemId);
	void MoveToS(const struct FString& VectorString);
	void MoveToNearestVehicle(float IgnoreDistance);
	void MoveToItem(int ItemId);
	void MoveTo(float X, float Y, float Z);
	void ModifyStreamingDistance(int Distance);
	void KillSomeOne(const struct FString& InPlayerName);
	void KillAll();
	void Kill(int GivenNumber);
	void GMSetPlayerLocationInvalid(uint32_t InPlayerKey, int errorType, int Side);
	void GMSetCampId(int CamID);
	void GetGameScreenSize();
	void ExecFollowTeammate(const struct FString& Name);
	void DumpCharacterMove(uint32_t PlayerKey);
	void DebugSprint();
	void DebugPhysicsAsset();
};




class UGMCheatDump : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatDump");
		return pStaticClass;
	}


	void DumpWeaponsToFile(const struct FString& Filename);
	void DumpVehicleToFile(const struct FString& Filename);
	void DumpVehicleAnimInstanceToFile(const struct FString& Filename);
	void DumpVehicleAnimInstance();
	void DumpVehicle();
	void DumpSimulatedCharacterAnimInstanceToFile(const struct FString& Filename);
	void DumpSimulatedCharacterAnimInstance();
	void DumpReticleTargetActorToFile(const struct FString& Filename, bool bPrintFunc);
	void DumpReticleTargetActor(bool bPrintFunc);
	void DumpPlayerSkillInfo();
	void DumpPlayerInfoToFile(const struct FString& Filename);
	void DumpPlayerControllerToFile(const struct FString& Filename);
	void DumpPlayerController();
	void DumpPlayerCameraManagerToFile(const struct FString& Filename);
	void DumpObservingCharacterToFile(const struct FString& Filename);
	void DumpObservingCharacter();
	void DumpObjectPropertiesRecursive(const struct FString& ObjectName, int Depth, bool bPrintFunc);
	void DumpObjectProperties(const struct FString& ObjectName);
	void DumpCharacterToFile(const struct FString& Filename);
	void DumpCharacterAnimInstanceToFile(const struct FString& Filename);
	void DumpCharacterAnimInstance();
	void DumpCharacter();
	void DumpBatchManager();
	void DumpAllVehiclesToFile(const struct FString& Filename);
	void DumpAllVehicles();
	void DumpAllSkillActorsInfoToFile(const struct FString& Filename, int Depth);
	void DumpAllSkillActorsInfo(int Depth);
	void DumpAllPlayerControllerToFile(const struct FString& Filename);
	void DumpAllPlayerController();
	void DumpAllCustomActorsInfoToFile(class UClass* DesiredClass, const struct FString& Filename);
	void DumpAllCustomActorsInfo(class UClass* DesiredClass);
	void DumpAllCharactersToFile(const struct FString& Filename);
	void DumpAllCharacters();
};




class UGMCheatGameFlow : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatGameFlow");
		return pStaticClass;
	}


	void StartReadyCountDown();
	void SetStateLeftTime(int LeftTime);
	void GotoFlying();
	void GameModeGotoNextState();
	void GameModeGotoFightingState();
	void DsLuaGM(const struct FString& CmdString);
	void DsLuaDoString(const struct FString& LuaString);
};




class UGMCheatHiggs : public UGMCheatSystem
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatHiggs");
		return pStaticClass;
	}


	void TriggerActorChannelErrorDelegate();
	void TestSpawnStaticmesh(int Count);
	void TestGMCheatHiggs(int Param1, bool Param2);
	void TestGlueHia(int GlueType, int GlueValue);
	void StatCPU(int Enable);
	void SetOpenSecurityAlert(bool bOpen);
	void OnFinishAsyncLoadResource(const struct FSoftObjectPath& SoftObjectPath);
	void HiggsTestSyncLoad(const struct FString& Path);
	void HiggsTestForbitMove();
	void HiggsTestAsyncLoad(const struct FString& Path);
	void DebugReplaySampleLocAndRot();
};




class UGMCheatHUD : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatHUD");
		return pStaticClass;
	}


	void ResetHUDDebugFunction();
	void RemoveHUDDebugFunction(const struct FString& FuncName);
	void EnableHUDDebug(bool bEnable, const struct FString& FuncName);
	void AddHUDDebugFunction(const struct FString& FuncName, bool bReset);
};




class UGMCheatLevel : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatLevel");
		return pStaticClass;
	}


	void SpawnActorWithPath(const struct FString& Path, float X, float Y, float Z);
	void ShutDownVehicleGenerate(bool IsOpen);
	void ShutDownPickUpGenerate(bool IsOpen);
	void ShutDownItemGenerate(bool IsOpen);
	void ShowNavOperator();
	void SetServerLevelLoadingMode(bool bNewLoadAll);
	void SetPlaneEnabled(bool InEnable);
	void SetCustomFlightRoute(float StartX, float StartY, float EndX, float EndY);
	void RemoveAllDoors();
	void PrintAllPickupWarpper();
	void LocalProfileFootprint();
	void LoadAllLand(bool bLoadAll);
	void GotoDoubleCircleEdge(float Z);
	void GMSetBoolPoisonCircle();
	void GMSetBoolAirDrop();
	void GMSetBoolAirAttack();
	void GMSetBoolAI();
	void GMEnableRandom();
	void GMEnableAllComponent();
	void GMDisableRandom();
	void GMDisableAllComponent();
	void GMBeginCircle(int CurIndex, float PosX, float PosY);
	struct FVector GetCurrentLevelOffset();
	void EnableMyLandscapeDraw();
	void DisableMyLandscapeDraw();
	void DebugAirDropPickInfo(float DrawTime, float BoxDrawSize, float BoxDrawLineLength, float ListWrapperDrawSize, float ListWrapperDrawLineLength);
};




class UGMCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	TArray<class UGMCheatSystem*>                      GMCheatSystems;                                           
	class AActor*                                      PVETestMonster;                                           
	unsigned char                                      UnknownData01[0x30];                                      
	TArray<class ASkeletalMeshActor*>                  SkeletalMeshActorPool;                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatManager");
		return pStaticClass;
	}


	void WatchReport();
	void VehicleTowardTo(float X, float Y, float Z);
	void VehicleSpotLog();
	void VehicleMoveTo(float X, float Y, float Z);
	void VehicleMoveAndTowardTo(float X, float Y, float Z, float X1, float Y1, float Z1);
	void UpdateTrainingRank(int TrainingType, int Level, int Top1wScore, int Score);
	void ToggleSpringMode();
	void ToggleSpringDebug();
	void TogglePawnInfo();
	void TestStringSHA1(const struct FString& InStr);
	void TestReplayStreamerLastError();
	void TestPlayerLostEvent(int LostEvent);
	void TestPlayerBattleResult();
	void TestNetworkLost();
	void TestLineTrace(float X, float Y, float Z);
	void TestKillInfoPanel(int WeaponId, int Relationship, int WeaponAvatarID, int ClothID);
	void TestGameplayDataRecord(int UID, int RecordType);
	void TestEnableRegionsLongDistanceSleep(bool bEnable);
	void TestDeactivate();
	void TestCrash();
	void TeleportToVehicleAI(int InIndex);
	void TeleportToPVEMonster(int ChapterID, int LevelID, int WaveID);
	void TeleportTo(float X, float Y, float Z);
	void TeleportNearestVehicleAIToPercentOfPath(float InPercent);
	void SwitchSocialIsland(int LandId, float Delay);
	void SwitchShowUI();
	void SuperGMKillDS();
	void StopAllMonsterDSAnim(bool bStop);
	void StatVehicle();
	void StarTPerforPlatTag(const struct FString& TagName);
	void SpawnVehicleWithPathAtPoint(const struct FString& Path, bool AroundMe, float X, float Y, float Z, int Num);
	void SpawnTrainingAIAroundMe(int Num, int Range);
	void SpawnMonsterAround(int MonsterID, float Radius, int Num, bool bStopAI);
	void SpawnItemBySpotDefaultTag(const struct FString& DefaultTag);
	void SpawnGameFeatureActor(const struct FString& Path);
	void SpawnFakePlayer(int Num, bool bWithPet, bool bStopAI);
	void SpawnDecal();
	void SpawnBotForTest(int Num);
	void SpawnAIAroundMe(int Num, float Range, bool HasWeapon, bool HasAvator, bool HasBackpack);
	void ShowScrollMsg(uint32_t MsgID, const struct FString& Param1, const struct FString& Param2);
	void ShowPet(bool Enable);
	void ShowOBMultiKillTips(const struct FString& PlayerName, int TeamID, int PlayerKillNum, int TeamKillNum);
	void ShowHideGuide(int GuideID, bool bShow);
	void ShowAllPlayersMarkIncludeAI(float VisDistance);
	void ShowAKComponentPosition(bool _IsShow);
	void SetWeatherPlaySpeed(float FSpeed);
	void SetViewFPP(bool IsFPP);
	void SetTouchMoveLog(bool Enable);
	void SetTouchMoveDelay(int DelayFrame);
	void SetSpringArm(unsigned char armFlag);
	void SetSkillDup(int Count);
	void SetRateScore(float RankScore);
	void SetNetSpeed(int NewSpeed);
	void SetNeckUp(float UpAngle);
	void SetNeckSpeed(float Speed);
	void SetNeckRight(float RightAngle);
	void SetNeckMax(float MaxAngle);
	void SetNeckLeft(float LeftAngle);
	void SetMonsterNumMultiple(int ChapterID, int LevelID, int DiffcultPerc);
	void SetMonsterNB(bool MonsterNB);
	void SetMonsterHatred(float Hatred);
	void SetMaxFpsFromDevice();
	void SetIsRender(bool IsRender);
	void SetInactiveClearEnable(bool bNewActive);
	void SetHignPerformance(bool SetOpen);
	void SetGVMemberID(int memberID);
	void SetFestivalAirDrop(bool bFestival, const struct FString& BoxMesh);
	void SetFestivaGrenade(bool bFestival);
	void SetDynamicWeather(int WeatherType, int EventType);
	void SetDsSwitch(int InKey, const struct FString& InValue);
	void SetDeliver();
	void SetDearDeathReduce(int Index, float ReduceFactor);
	void SetClearIslandEnable(bool bNewActive);
	void SetCameraLagEnable(bool Enable);
	void SetCacheInputNum(int CacheNum);
	void SetAnimEnable(bool Enable);
	void SetAnimDebugInfo(bool debugAnimInfo);
	void SetAnimDebugGroup(bool debugAnimGroup);
	void SetAllMonsterHp(int Hp);
	void ServerCMD(const struct FString& Cmd);
	void ResumeAllLevelSequenceActors();
	void ReplayRecoverReconnect(const struct FString& IP, const struct FString& Port);
	void ReplayRecoverGenerateDSCheckpoint(const struct FString& InReplayName);
	void RenderTargetCompressTest(class UTexture* pTexture, const struct FVector& Posoffset);
	void RemoveTimeSwitch(int TimeID);
	void RefreshReconnectUI();
	void PVESpawnMonsterByPos(int MonsterID, int Num, float Radius, float PosX, float PosY, float PosZ);
	void PVESpawnMonsterByDistance(int MonsterID, int Num, float Radius, float FrontDist);
	void PVESpawnMonster(int MonsterID, bool StopAI);
	void PVESetTestMonster(class AActor* InMonster);
	void PVEResetMonsterTable();
	void PVEPrintMonsterCount();
	void PVEPrintAllAnim(bool bPrintAll);
	void PVEPlayerTriggerSkill(int SkillID, int EventType);
	void PVEPlayerStopSkill(int SkillID, int StopReason);
	void PVEMonsterTriggerSkill(int SkillID, int EventType);
	void PVEMonsterStopSkill(int SkillID, int StopReason);
	void PVEMonsterRemoveBuffByID(int BuffID, int LayerCount, int CauserSkillID, bool CauseByPlayer);
	void PVEMonsterAddBuffByID(int BuffID, int LayerCount, int CauserSkillID, bool CauseByPlayer);
	void PVECloseMonsterLimit(bool bCloseMonsterLimit);
	void PVEClearTestMonster();
	void PrintScreenDebug(int Key, float TimeToDisplay, const struct FString& DebugMessage);
	void PrintRegionObjectList();
	void PrintPool();
	void PrintHP();
	void PrintAllAnim();
	void PrintAllActorLocationByClassName(const struct FString& InClassName);
	void PlayBornIslandSequence(bool bPlay);
	void PauseAnim(bool bPause);
	void PauseAllLevelSequenceActors();
	void PacketSimulationLag(int InSimulationLag);
	void OpenHitTest();
	void OpenFixationFreeFallVelocity(float X, float Y, float Z);
	void OpenAllCharacterHitBodyCollison(float Time);
	void NotifyGameModeParamsChanged(int NewDuration);
	void NativeSimulateAction(int SimActionType);
	void MoveSnake(bool bEnable, float moveInternal, float ForwardRate, float RightRate);
	void ModifyVehicleSyncServerData(float MinCorrectionInterval, float AllowMaxDiatanceSqAtServer);
	void ModifyVehicleSyncClientData();
	void ModifyVehicleBuoyancy(float MeshDensity, int Index);
	void MaxSimulationIterations(int V);
	void MarkAPMLevelFinish();
	void MainCityConnectToDS(const struct FString& IP, const struct FString& Port);
	void LogNetWorkParams();
	void LogicAreaTest(int AreaType, const struct FString& str);
	void LogAllBuffInfo();
	void LogAllActors();
	void LocalConnectToLobbySrv(const struct FString& URL);
	void KillAllPVEBot();
	void KillAllPlayers();
	void JankOpt_Spawn20AIBlockVolume(float X, float Y, float Z);
	void ItemSpotLog();
	void InGameAndroidBack();
	void GotoSpectatingDirectly();
	void GotoSpectating();
	void GotoSpecificWeather(int WeatherIdx);
	void GMWayPointEvent(int EventID);
	void GMUseGunCollision(bool bIsUse);
	void GMSuicideCurVehicle();
	void GMSuicide();
	void GMStopAI(bool bStop, uint32_t InPlayerKey);
	void GMSpawnSociallandSubVehicle01();
	void GMSpawnSocialLandPlayerAIAroundPointWithAvatarList(uint32_t DataOffset, uint32_t AINum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, bool bWithWeapon, struct FString* AvatarList);
	void GMSpawnSocialLandPlayerAIAroundPoint(uint32_t DataOffset, uint32_t AINum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, bool bWithWeapon);
	void GMSpawnSocialLandPlayerAIAroundMeWithAvatar(uint32_t AINum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, bool bWithWeapon, struct FString* AvatarList);
	void GMSpawnSocialLandPlayerAIAroundMe(uint32_t AINum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui, bool bWithWeapon);
	void GMSpawnSmartBearerTestPlane();
	void GMSpawnSingleSocialLandPlayerAI(uint32_t DataOffset, float X, float Y, float Z, bool bActiveAI, bool IsAIInvincible, bool bWithPet, bool bWithEqui);
	void GMSpawnPlayerAIAroundPointDownloadable(uint32_t iNum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet);
	void GMSpawnPlayerAIAroundPoint(uint32_t iNum, float X, float Y, float Z, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet);
	void GMSpawnPlayerAIAroundMeDownloadable(uint32_t iNum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet);
	void GMSpawnPlayerAIAroundMe(uint32_t iNum, float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet);
	void GMSpawnPickup(int SpawnNum, int PickupTypes, int Direction, float SpawnDistance);
	void GMSpawnParticle(const struct FString& AssetPath, float X, float Y, float Z, float Scale);
	void GMSpawnAutoTestAI(int NameExtraID);
	class AActor* GMSpawnAIWithIDAndLoc(int AIID, float SpawnLocX, float SpawnLocY, float SpawnLocZ, float Radius, int TeamID, int ItemID1, int ItemNum1, int ItemID2, int ItemNum2, int ItemID3, int ItemNum3);
	void GMSpawnAIOnAIPoint3();
	void GMSpawnAIOnAIPoint2();
	void GMSpawnAIOnAIPoint1();
	void GMSocialSetRotation(float X, float Y, float Z);
	void GMSociallandPlayerMoveToTestPoint();
	void GMSociallandPlayerMoveToAISpawnPoint1();
	void GMSociallandChangeItemFromStr(const struct FString& ItemString, const struct FString& EquimentItemString);
	void GMShowHitFeedback(bool bCombatHitFeedbackEnable);
	void GMSetSpeed(float WalkSpeed);
	void GMSetServerLevelLoadingMode(bool bNewLoadAll);
	void GMSetPawnNull(bool bIsNull);
	void GMSetMLAIModifyDamage(int InIsModify);
	void GMSetMaxAINum(int Num);
	void GMSetJoystickEightDirection(bool IsNeedEightDirection);
	void GMSetJoystickActivatedRange(bool IsNeedActivatedRange, float ActivatedRange);
	void GMSetHealth(float Val);
	void GMSetDeliveryToMLAI(int InIsDeliveryToMLAI);
	void GMSetCullDistance(bool bCullDistance);
	void GMSetCircleTime(float cdTime, float LastTime);
	void GMSetCharacterNetCullDistance(float DistanceMeters, bool bApplyToExistingCharacters);
	void GMSelectorWayPoint(const struct FName& NameOfAIWayPointSelector, int GMPathIndex);
	void GMRevivePlayer();
	void GMRainCount(float Count);
	void GMIOSFrameRateLock(int FrameRateLock);
	void GMInvincible(bool bInvincible);
	void GMIncreaseHealth();
	void GMGatherAllPlayerAIAroundMe(float fRadius, bool bActiveAI, bool IsAIInvincible, bool bWithPet);
	void GMForceSuicide();
	void GMForceNullNetwork(int bForce);
	void GMDrawLine(float X1, float Y1, float Z1, float X2, float Y2, float Z2, float LifeTime);
	void GMDrawDirLine(float StartX, float StartY, float StartZ, float DirX, float DirY, float DirZ, float Length, float LifeTime);
	void GMDrawDebugSphere2(float X, float Y, float Z, float Radius, int Segments, float LifeTime);
	void GMDrawDebugSphere(float Radius, int Segments, float LifeTime);
	void GMDrawCone(float Degrees, float LifeTime, int LineNum);
	void GMDecreaseHealth();
	void GMChangeAIAype(int Type, uint32_t InPlayerKey);
	void GMAutoTestChangeItem(uint32_t PlayerKey, const struct FString& ItemString, const struct FString& EquimentItemString);
	void GMAIFire();
	void GMAddItemForAI(int ItemId, int Count, uint32_t InPlayerKey);
	void GMActiveRenderDynamicStyle(bool bSet, int Type);
	void GMActiveAI();
	void GetObjectRef(uint64_t ObjectAddr);
	void GetGVMemberID(int memberID);
	void GetGold();
	void GenerateMonsterWave(int ChapterID, int LevelID, int WaveID);
	void ForceStopDynamicWeatherChange();
	void ForceStartNextDynamicWeatherChange();
	void ForceKickoutAllPlayers(int LandId);
	void ForceGC();
	void ForceEndInputForAppWillDeactivate();
	void FireSpawnAirplane();
	void FireReviveTeammate(int RespawnStartID, bool bJump);
	void FallKill(int FallType);
	void EquipHelmetAndBodyArmor(int Lev);
	void EnterPVELevel(int ChapterID, int LevelID);
	void EnterPawnState(EPawnState InState, bool IsEnter);
	void EndAPMTag();
	void EnablePool(bool bEnable);
	void EnableHitBox(bool bEnable);
	void EnableFuzzyInformation();
	void EnableDSAnim(const struct FString& MonsterName, bool bEnable);
	void DumpSmartBearerManager();
	void DumpPlayerStart();
	void DumpObjectNetProperties(class UObject* InObj);
	void DumpMoveLog(bool bDump);
	void DumpLevels();
	void DumpLegacyObjectPoolInfo();
	void DumpDSNetConsiderList();
	void DumpCharacterRelevant();
	void DumpAnimLayer();
	void DumpAIOcclusion();
	void DSReconnectEvent();
	void DSConnectLostEvent();
	void DismissIsland();
	void DetectUnderGround(float X1, float Y1, float Z1, float X2, float Y2, float Z2);
	void DestroyVehicleWithPath(const struct FString& Path);
	void DebugUnderWaterEffect();
	void DebugStopEMote(int Index);
	void DebugStopCapture();
	void DebugStartEMote(int Index);
	void DebugSpringArm(bool bDebug);
	void DebugSpeed();
	void DebugSetChangeWearCoolDownTime(float Time);
	void DebugRoomCustomParams(int FirstCircleDelayTime, int FirstCircleAppearTime, int FirstWhiteCircleRadiusMultiplicator, int BlueCircleDamageMultiplicator);
	void DebugPoseState(bool bEnable);
	void DebugMove();
	void DebugLocation();
	void DebugLevelsInfo();
	void DebugFixedParams();
	void DebugFindFloorResult();
	void DebugCamera();
	void DebugAttach();
	void DebugAnimList();
	void ClientSetSpeed(float Times, bool bGMSetSpeed);
	void ClearTestMesh();
	void ClearScreenDebug();
	void ClearNoDriverVehicle();
	void ClearAnimLayer(int AnimLayer);
	void ClearAllTlog();
	void CheatBeginPlay();
	void ChatTest(struct FString* Content);
	void ChangeViewTarget();
	void ChangeMonsterWalkMode(int Mode);
	void ChangeAllTimeDuration(int NewEndStateTime, int NewStartShowLifeTime, int NewMinimumAliveTime, int NewMinimumPlayerNum, int NewSpecialLifeTime);
	void ChangeAIDamageRate(float InRate);
	void ChangeAIAttackPlayerDamageRate(float InRate);
	void CastUIMsg(const struct FString& Msg, const struct FString& module);
	void CallOnReconnect();
	void CallLuaTableFunction(const struct FString& tableName, const struct FString& FunctionName);
	void CallGMLua(const struct FString& FunctionName);
	void CallGameModeLuaOverrideFunction(struct FString* FunctionName);
	void CallGameModeLuaFunction(struct FString* FunctionName);
	void BuildingCollide(bool InCollide);
	void AutoShoveling(bool bEnable, float AutoShvelingSeconds);
	void AutoSetPlayerLocation(bool bEnable);
	void AnimDebugUseSkipMapForDistanceFactor(bool bFlag);
	void AnimDebugUseLodMap(bool bUseLodMap);
	void AnimDebugUpdateFlag(int Type);
	void AnimDebugNonRenderedRate(int UpdateRate);
	void AnimDebugNonRenderedMinDist(float minDist);
	void AnimDebugNonRenderedMaxDist(float MaxDist);
	void AnimDebugLodSkipMap(TMap<int, int> SkipMap);
	void AnimDebugEnable(bool bEnable);
	void AnimDebugBaseDistFactor(TArray<float> BaseDistFactor);
	void AirDropByClassPath(float X, float Y, float Z, const struct FString& ClassPath);
	void AILog();
	void AddWonderfulPeriod(int Type, float StartTime, float EndTime, int AdditionalData, int Index);
	void AddTimeSwitch(int TimeID);
	void AddTestTouchInput(int FingerIndex, float X, float Y, float Force, bool bIsStart);
	void AddScore(int Score);
	void AddAllTestRes();
	void ActiveCurCamera(bool bActive);
};




class UGMCheatMod : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatMod");
		return pStaticClass;
	}


	void TriggerHunterRevival();
	void SetUAETriggerEnable(bool IsEnbale);
	void SetInfectResetPlayerInterTime(float InterTime);
	void OnBuyRevivalTeammate(int TeammateIndex);
	void OnBuyRevivalSign();
	void InfectionEndRound();
	void GetGameResult();
	void DebugEnableFerrisWheelTick(bool bEnable);
	void ClearBossBornPoint();
	void ChangePVELevel(int Lv);
	void CallZombieFlowAirDrop(int ZombieID);
	void CallZombieAirDrop(int ZombieID);
	void AddBossBornPoint(float BornX, float BornY);
};




class UGMCheatOther : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatOther");
		return pStaticClass;
	}


	void UnLoadAllCollision(bool Unload);
	void ShutDownBroadcastFatalDamage(bool IsOpen);
	void ShowHideLandscapeComponent(bool bShow);
	void SetSingleThreadUpdateAnim(bool InIsSingleThread);
	void SetIsShowBlood(bool InIsShowBlood);
	void RetrievePlayerBattleResultData();
	void RemoveDSOptimGrayPublishFlags(int InFlagIndex);
	void RecoverStatusAfterReconnecting();
	void ObserveWhoKilledMe();
	void GMTestSpectateRPC();
	void GMTestSpectateException(int Type);
	void GMTestExternalData(TArray<unsigned char> InData);
	void GMTeleport(const struct FName& Teleporter);
	void GMSetScalarParam(const struct FString& Name, const struct FString& ShaderName, float Value);
	void GMSendDailyTaskReport();
	void GMBroastSyncTaskInfo();
	void EmptyLandscapeActor();
	void DumpGUIDCache(int DriverIndex);
	void DumpActiveObject();
	void DebugEnableDrawSearchLine(int bEnabled);
	void CanSeeAllUI(bool bUIVisibility);
	void AutoSelectTeammateToView();
	void AddDSOptimGrayPublishFlags(int InFlagIndex);
};




class UGMCheatSkill : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatSkill");
		return pStaticClass;
	}


	void TryDeleteOneSkill(int SkillID, bool bImmediately);
	void TryAddOneSkill(int SkillID, bool bActive, int ButtonSlot);
	void TriggerSkillWithID(int SkillID, bool bEnable);
	void StartSkill(int SkillID);
	void StartMainSkill();
	void SetSkillSkinID(int SkillID, int SkillSkinID);
	void SetSkillLevel(int SkillID, int SkillLevel);
	void SetSkillCDTimeScale(int SkillID, float Scale, int ScaleType);
	void SetSkillCDIndexTimeScale(int SkillID, int SkillCDIndex, float Scale, int ScaleType);
	void SetAllSkillCDTimeScale(float Scale);
	void RemoveVehicleBuffBySkill(int SkillID);
	void RemoveVehicleBuff(int BuffID);
	void RemoveBuffBySkill(int SkillID, int IsPlayer, int LayerCount);
	void RemoveBuff(int BuffID, int IsPlayer, int BuffLayer);
	void ReloadPVETable();
	void EnableSkillCD(bool bEnable);
	void DynamicRemoveSkill(int SkillID);
	void DynamicAddSkill(int SkillID);
	void DumpSkills();
	void AddVehicleBuffBySkill(int SkillID);
	void AddVehicleBuff(int BuffID);
	void AddSkillToken(int SkillID, bool bAdd);
	void AddBuffBySkill(int SkillID, int IsPlayer);
	void AddBuff(int BuffID, int IsPlayer);
};




class UGMCheatVehicle : public UGMCheatSystem
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatVehicle");
		return pStaticClass;
	}


	void VW_Seat(int change);
	void VehicleResetTo(float X, float Y, float Z);
	void VehicleMoveTo(float X, float Y, float Z);
	void ToggleVehicleSync(bool Val);
	void TeleportAndEnterVehicleWithPath(const struct FString& Path, int SeatID);
	void SpawnVehicleWithPathAndLoc(const struct FString& Path, float X, float Y, float Z, int Num);
	void SpawnVehicleWithPath(const struct FString& Path, int Num);
	void SpawnVehicle();
	void SpawnAllVehicle(const struct FString& Path);
	void SetSnowBoradRotationInAir(float Pitch, float Yaw, float Roll);
	void SetFuelByPercent(float percent);
	void ResetVehicleEngine();
	void ReqLeaveVehicle();
	void ReqExchangeVehicleCharacter(int Param);
	void ReqEnterVehicle(float dis);
	void ReqEnterSnowBoard();
	void ReplaceVehicleWithPath(const struct FString& Path);
	void ReplaceVehicle();
	void MakeVehicleFly(int IsFly, bool bIsUp);
	void KillAllEnermyVehicle();
};




class UGMCheatWeapon : public UGMCheatSystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.GMCheatWeapon");
		return pStaticClass;
	}


	void ToggleShootVertify();
	void ShowWeaponDirection(int Time);
	void ShowBulletInfo();
	void SetWeaponAttrValue(const struct FString& AttrName, float Val);
	void SetWeaponAttrReloadTable(const struct FString& tableName);
	void SetShootPveVertify(bool IsVertify);
	void SetShootPveDebug(bool DebugShootPve);
	void SetBaseImpactDamageEntity(float Damage);
	void ScopeOut();
	void ScopeIn();
	void PrintWeaponAllState();
	void GMSwitchWeaponSpeedScale(float SwitchScale);
	void GMSetReportWeaponNum(int Num);
	void EnableCurrentWeaponInfiniteBullets(bool bEnable);
	void DrawDebugWeaponCrossHair();
	void DestroyMyWeapons();
	void DebugEnableBulletImpact(int bEnabled);
	void CreateAutoShootTimer(float Interval);
	void CollectAllPlayerWeaponPosInfo();
	void ChangeWeaponFunction(int NewWeaponFunction);
	void ChangeShootWeaponStrValue(const struct FString& StrName, const struct FString& KeyName, float Value);
	void AutoShootNearestEnemy(float Interval, float Duration);
	void AutoShoot(float Interval);
	void AimForAutoShoot();
};




class AImGuiWindowBase : public ALuaActor
{
public:
	struct FString                                     WindowTitle;                                              
	struct FVector2D                                   WindowSize;                                               
	int                                                WindowFlags;                                              
	EImGuiWindowDisplayMode                            DisplayMode;                                              
	bool                                               bIsWindowVisible;                                         
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              WindowAlpha;                                              
	int                                                ImGuiWindowIndex;                                         
	TArray<class UImGuiTabBase*>                       Tabs;                                                     
	int                                                ActiveTabIndex;                                           
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<class UImGuiFeatureWidget*>                 Features;                                                 
	unsigned char                                      UnknownData02[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.ImGuiWindowBase");
		return pStaticClass;
	}


	void ToggleWindow();
	void ToggleDisplayMode();
	void ShowWindowWithTabs(TArray<class UClass*> TabClasses);
	void ShowWindow();
	void SetWindowAlpha(float Alpha);
	void SetDisplayMode(EImGuiWindowDisplayMode NewMode);
	void RemoveTab(const struct FName& TabID);
	void RemoveFeature(const struct FName& FeatureID);
	bool IsWindowVisible();
	void HideWindow();
	float GetWindowAlpha();
	class UImGuiTabBase* GetTabByID(const struct FName& TabID);
	class UImGuiFeatureWidget* GetFeatureByID(const struct FName& FeatureID);
	EImGuiWindowDisplayMode GetDisplayMode();
	TArray<class UImGuiTabBase*> GetAllTabs();
	TArray<class UImGuiFeatureWidget*> GetAllFeatures();
	class UImGuiTabBase* GetActiveTab();
	class UImGuiTabBase* AddTabWithLuaPath(class UClass* TabClass, const struct FString& InLuaFilePath);
	void AddTabInstance(class UImGuiTabBase* Tab, const struct FString& InLuaFilePath);
	class UImGuiTabBase* AddTab(class UClass* TabClass);
	class UImGuiTabBase* AddLuaTab(const struct FString& InLuaFilePath);
	class UImGuiFeatureWidget* AddLuaFeature(const struct FString& InLuaFilePath);
	class UImGuiFeatureWidget* AddFeatureWithLuaPath(class UClass* FeatureClass, const struct FString& InLuaFilePath);
	void AddFeatureInstance(class UImGuiFeatureWidget* Feature, const struct FString& InLuaFilePath);
	class UImGuiFeatureWidget* AddFeature(class UClass* FeatureClass);
	void ActivateTab(const struct FName& TabID);
};




class UImGuiWindowManager : public UGameInstanceSubsystem
{
public:
	TMap<class UClass*, class AImGuiWindowBase*>       WindowCache;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.ImGuiWindowManager");
		return pStaticClass;
	}


	void ToggleWindow(class UClass* WindowClass);
	void ShowWindowWithTabs(class UClass* WindowClass, TArray<class UClass*> TabClasses);
	void ShowWindow(class UClass* WindowClass);
	void HideWindow(class UClass* WindowClass);
	void HideAllWindows();
	bool HasWindow(class UClass* WindowClass);
	class AImGuiWindowBase* GetWindow(class UClass* WindowClass);
	class AImGuiWindowBase* GetOrCreateWindow(class UClass* WindowClass);
	TArray<class AImGuiWindowBase*> GetAllWindows();
	static class UImGuiWindowManager* Get(class UObject* WorldContextObject);
	void DestroyAllWindows();
};




class ULuaTimerDebugTab : public UImGuiTabBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.LuaTimerDebugTab");
		return pStaticClass;
	}

};




class AMemLeakTestGameMode : public AGameModeBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.MemLeakTestGameMode");
		return pStaticClass;
	}


	void ForceGC();
};




class UQPSBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.QPSBPLibrary");
		return pStaticClass;
	}


	static void SwitchUIWidgetShowFromUserWidget(const struct FName& ContainName, const struct FString& UserWidgetName, const struct FString& WidgetName);
	static void SwitchUIWidgetShow(const struct FName& ContainName, const struct FString& WidgetName);
	static void SwitchUIContainsShow(const struct FName& Name);
	static bool IsPublishVersion();
	static int GetHZBValue();
	static float GetDistanceCullingFactor();
};




class UReplayRecordersDataTab : public UImGuiTabBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Development.ReplayRecordersDataTab");
		return pStaticClass;
	}

};


}

