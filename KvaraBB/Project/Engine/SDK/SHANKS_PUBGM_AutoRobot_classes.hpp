#pragma once


 
namespace SDK
{






class UAutoRobotModule : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.AutoRobotModule");
		return pStaticClass;
	}

};




class UAutoRobotSceneTool : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.AutoRobotSceneTool");
		return pStaticClass;
	}

};




class AAutoRunPlayerTestActor : public AActor
{
public:
	TArray<struct FVector>                             PortalLoctions;                                           
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.AutoRunPlayerTestActor");
		return pStaticClass;
	}

};




class UAutoTestInterface : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.AutoTestInterface");
		return pStaticClass;
	}


	void StarJumpPlane();
};




class UAutoTestSubsystem : public UGameInstanceSubsystem
{
public:
	class URemoteControlManager*                       RemoteControlManager;                                     
	class UAutoRobotModule*                            AutoModule;                                               
	struct FString                                     AutoTestMissionType;                                      
	struct FString                                     CustomLineStr;                                            
	EGamePlayMode                                      GamePlayMode;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.AutoTestSubsystem");
		return pStaticClass;
	}


	void Swipe(const struct FString& InPath, float Duringtime, int StartX, int StartY, int EndX, int EndY, int TouchIndex, int ControllerId, int ScreensizeX, int ScreensizeY);
	void StopRecordInput();
	void StopPlayInput();
	void StartRemoteControl(const struct FString& Name, const struct FString& Host, int Port);
	void StartRecordInput(const struct FString& Command);
	void StartPlayInput(const struct FString& Filename);
	void SetCustomRouteLine();
	void RegisterInputProcessor();
	struct FVector PVEAutoTestGetEnemyLocation();
	void PubgmSimulateActionClientEx(int SimulateType);
	struct FVector ParsePoint(const struct FString& SrcStr);
	void OpenDebugg();
	void OnStopAutoTest();
	void OnStartAutoTest();
	void OnGameStart();
	void OnGameEnd();
	bool IsUIAutoTest();
	bool IsSecAutoRunTest();
	bool IsGAutomatorTest();
	bool IsAutoRunTestGamePVEProfile();
	bool IsAutoRunTestGamePVE();
	bool IsAutoRunTestGameBindComponent();
	bool IsAutoRunTestGame();
	void GetWidgetPathByPos(int StartX, int StartY, int ScreensizeX, int ScreensizeY);
	struct FString GetRuntimeProfileData();
	class UAutoTestInterface* GetAutoTestInterface();
	int GetAutoRunTestServerIdx();
	struct FString GetAutoRunPassWD();
	struct FString GetAutoRunLuaTest();
	struct FString GetAutoRunAccount();
	void CloseDebugg();
	void ClickButton(const struct FString& InPath, float Duringtime, int StartX, int StartY, int EndX, int EndY, int TouchIndex, int ControllerId, int ScreensizeX, int ScreensizeY, const struct FString& UsePos);
	void CheckStaticMesh(float Radius, float DeformationDistance, bool CheckComplexCollisionQuery, const struct FString& MapName);
	void AutoTestWaitForUIWithName(const struct FString& UIName);
	void AutoTestWaitForSecond(int sec);
	bool AutoTestWaitForJumpPlane();
	void AutoTestVehicleDriverShoot();
	void AutoTestVaultWall();
	void AutoTestUsePropSkillClientEx();
	void AutoTestUseItemClientEx(int ItemId);
	void AutoTestUseItem(int ItemId);
	void AutoTestUpgradePropSkillClientEx(int ItemId);
	void AutoTestToggleVehicleSync(bool Val);
	void AutoTestThrowBoomOnlyClientEx(int SkillID);
	void AutoTestThrowBoom(int SkillID);
	void AutoTestSwitchWeapon(int WeaponType);
	void AutoTestSwitchMode(const struct FString& FunName);
	void AutoTestStopRecordStats();
	void AutoTestStatsCommand(const struct FString& Command);
	void AutoTestStartRecordStats(const struct FString& FileStr);
	void AutoTestStartFireOnlyClientEx(int InX, int InY, int InZ, int sec);
	void AutoTestStartFire(int InX, int InY, int InZ, int sec);
	void AutoTestSpecating(int LeftTeamCnt);
	void AutoTestSpawnVehicle(const struct FString& ResPath);
	void AutoTestSpawnAI(int ID, float PosiX, float PosiY, float PosiZ);
	void AutoTestSetVehicleRotation(int InX, int InY, int InZ);
	void AutoTestSetRecordFrequency(int Frequency);
	void AutoTestSetGamePaused(bool IsPause);
	void AutoTestSetActorYaw(float InRate);
	void AutoTestSetActorRotation(float InRate, float InSpeed);
	void AutoTestSetActorPitch(float InRate);
	void AutoTestSetActorFacePointWithZ(int InX, int InY, int InZ);
	void AutoTestSetActorFacePoint(int InX, int InY, int InZ);
	void AutoTestSendBuffertoSvr(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	void AutoTestReplaceMatByActorName(const struct FString& actorName, const struct FString& NewMatName, int RComp, int GComp, int BComp);
	void AutoTestReloadOnlyClientEx();
	struct FVector2D AutoTestPickupItemOnlyClientEx();
	struct FVector2D AutoTestPickupItem(int ItemId);
	void AutoTestOpenTraceRPC();
	void AutoTestOpenScope(bool bOpenScope);
	void AutoTestOpenDoorOnlyClientEx(int bOpen);
	void AutoTestMustDie(int LeftTeamCnt);
	void AutoTestMoveVehicleForward(float Speed, float Rate, float sec);
	void AutoTestMoveToPoint(int InX, int InY, int InZ);
	void AutoTestJumpPlane(int sec);
	void AutoTestJump();
	bool AutoTestIsOnVehicle();
	bool AutoTestIsDriver();
	bool AutoTestIsCurrentCommandFinished();
	void AutoTestInputMovement(float InRate);
	void AutoTestInputKey(const struct FString& Key, TEnumAsByte<EInputEvent> EventType, float AmountDepressed, bool bGamepad);
	void AutoTestGMVehicleMoveAndTowardClientEx(float InX, float InY, float InZ, float InX1, float InY1, float InZ1);
	void AutoTestGMGotoClientEx(int InX, int InY, int InZ);
	void AutoTestGMGoto(int InX, int InY, int InZ);
	void AutoTestGMCommand(const struct FString& Command);
	struct FVector AutoTestGetVehicleLocationClientEx();
	struct FVector AutoTestGetVehicleLocation();
	void AutoTestGetRuntimeStats();
	void AutoTestGetRenderTimeDetail();
	void AutoTestGetPrimitivesDetail();
	void AutoTestGetOnVehicle(int SeatType);
	void AutoTestGetOffVehicle();
	struct FVector AutoTestGetNearVehiclePos();
	void AutoTestGetMemoryDetail();
	struct FString AutoTestGetMapName();
	void AutoTestGetLuaReturnValue(const struct FString& retval);
	struct FString AutoTestGetGameModeState();
	struct FVector AutoTestGetFrameInfo();
	void AutoTestGetDrawCallDetail();
	int AutoTestGetDis2D(int InX1, int InY1, int InZ1, int InX2, int InY2, int InZ2);
	struct FVector AutoTestGetCircleLocationClientEx();
	TArray<int> AutoTestGetAvailableDeadBoxItem();
	TArray<struct FString> AutoTestGetAllActorNames();
	struct FString AutoTestGetActorName();
	TArray<struct FVector> AutoTestGetActorLocationListClientEx(int ActorType, float RangeRadius);
	struct FVector AutoTestGetActorLocation(const struct FString& PlayerName);
	float AutoTestForceVehiclePosPullClientEx(bool bNext);
	void AutoTestForceDeleteCmdAnim();
	void AutoTestEnableUITest();
	void AutoTestEnableTickOrVisibilityByActorName(const struct FString& actorName, bool bEnableTick, bool bShow);
	void AutoTestEnableActorPrimitiveHighlight(const struct FString& actorName, bool bEnable, bool bInCanBeOccluded, bool bOverrideColor, const struct FLinearColor& Color);
	void AutoTestDropItemClientEx(int ItemId, int nCount);
	void AutoTestDrawBox(float LocationX, float LocationY, float LocationZ, float ExtentX, float ExtentY, float ExtentZ);
	void AutoTestContinuousMoveTo(float InX, float InY, float InZ);
	void AutoTestConsoleCommand(const struct FString& Command);
	void AutoTestCloseTraceRPC();
	void AutoTestAutoMoveForward(bool StartAutoMoveForward);
	void AutoTestAddItem(int ItemId, int nCount);
	void AutoMoveToTargetPosClientEx(const struct FVector& targetPos);
	void AutoMovePawnToTargetPosClientEx(const struct FVector& targetPos);
};




class UPubgmAutoRun : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    PubgmAutoRunSimulateAction;                               
	bool                                               bRoutePointInited;                                        
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<class AXTPoint*>                            RoutePoints;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.PubgmAutoRun");
		return pStaticClass;
	}


	void VehicleTowardTo(float X, float Y, float Z);
	void VehicleMoveTo(float X, float Y, float Z);
	void VehicleMoveAndTowardTo(float X, float Y, float Z, float X1, float Y1, float Z1);
	void OnPubgmAutoRunSimulateAction__DelegateSignature(int SimActionType);
	static bool NeedCmdAutoRun();
	void NativeSimulateAction(int SimActionType);
	void InitRoutePoint();
	void GMGotoPosition(int X, int Y, int Z);
	TArray<struct FVector> GetRangeActorsPostions(int ActorType, const struct FVector& OriginPos, float RangeRadius);
	struct FVector GetPoisonCircleLocation();
	static float GetPlayerSpeed(int SpeedIdx);
	bool GetNearestXTPointToVehicle(bool bNext, struct FTransform* FirstPoint, struct FTransform* SecendPoint);
	float ForceVehiclePosPull(bool bNext);
};




class UPVEAutoRunTest : public UActorComponent
{
public:
	TArray<struct FVector>                             DstPointArray;                                            
	int                                                MaxMoveTime;                                              
	int                                                MaxDstStayTime;                                           
	int                                                KillAllTime;                                              
	int                                                StatRecordTime;                                           
	unsigned char                                      UnknownData00[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.PVEAutoRunTest");
		return pStaticClass;
	}

};




class URemoteControlHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.RemoteControlHelper");
		return pStaticClass;
	}


	static struct FString GetRuntimeStats();
	static struct FString GetDeviceName();
	static void AutoPickup(class ASTExtraBaseCharacter* Player);
};




class URemoteControlManager : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.RemoteControlManager");
		return pStaticClass;
	}


	bool Tick(float DeltaTime);
	void Stop();
	bool BeginWithFile();
	bool Begin(const struct FString& Name, const struct FString& Host, int Port);
};




class UShootWeaponAutoTestHandle : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.ShootWeaponAutoTestHandle");
		return pStaticClass;
	}


	void OnWeaponShootBullet(class ASTExtraShootWeapon* ShootWeapon, class ASTExtraShootWeaponBulletBase* Bullet);
	void OnBulletImpact(class ASTExtraShootWeapon* ShootWeapon, class ASTExtraShootWeaponBulletBase* Bullet, const struct FHitResult& HitRet);
	void OnBulletDamage(int ShootID, float Damage);
	struct FString GenerateBulletsImpactJsonStringAndClearData();
};




class ATestAIController : public ABaseAIController
{
public:
	class UClass*                                      EquipedWeaponClass;                                       
	class UClass*                                      CharacterClass;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AutoRobot.TestAIController");
		return pStaticClass;
	}

};


}

