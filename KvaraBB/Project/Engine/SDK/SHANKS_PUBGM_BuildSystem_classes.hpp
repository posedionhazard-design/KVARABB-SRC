#pragma once


 
namespace SDK
{






class ABuildingActorBase : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      
	float                                              LastQuadTraceDeviation;                                   
	struct FScriptMulticastDelegate                    LastQuadTraceDeviationDelegate;                           
	bool                                               bCustomBlockingChannels;                                  
	unsigned char                                      UnknownData01[0x7];                                       
	TArray<TEnumAsByte<ECollisionChannel>>             CustomBlockingChannels;                                   
	bool                                               bCheckVisibilitySkipTypes;                                
	bool                                               bSkipCheckOwnerCollision;                                 
	unsigned char                                      UnknownData02[0x6];                                       
	TArray<class UClass*>                              VisibilitySkipTypes;                                      
	struct FBuildingActorWorldSnapSetup                WorldSnapSetup;                                           
	float                                              DebugHealthDistance;                                      
	struct FVector                                     DebugHealthOffset;                                        
	unsigned char                                      UnknownData03[0x4];                                       
	TArray<class UClass*>                              ProhibitedActorTemplateList;                              
	TArray<class UClass*>                              EnableBuildingList;                                       
	struct FSoftObjectPath                             PreBuildingEffectPath;                                    
	struct FVector                                     PreBuildingEffectScale;                                   
	struct FVector                                     PreBuildingEffectOffset;                                  
	struct FRotator                                    PreBuildingEffectRotation;                                
	bool                                               CanBuildUnderWater;                                       
	bool                                               bShouldSnapToWorldGrid;                                   
	unsigned char                                      UnknownData04[0x2];                                       
	float                                              UnderWaterMaxBuildDepth;                                  
	unsigned char                                      UnknownData05[0x4];                                       
	struct FTransform                                  DestroyedParticleTransformOffset;                         
	struct FSoftObjectPath                             DestroyBuildingEffectPath;                                
	bool                                               bUseExtraCenterOffset;                                    
	bool                                               bUseExtraCenterRotation;                                  
	unsigned char                                      UnknownData06[0x2];                                       
	struct FVector                                     ActorCollisionBoxExtern;                                  
	struct FVector                                     ActorCollisionBoxCenter;                                  
	struct FRotator                                    ActorCollisionBoxRotator;                                 
	struct FVector                                     ViewLocationOffset;                                       
	float                                              Health;                                                   
	bool                                               bDestroyWhenZeroHealth;                                   
	unsigned char                                      UnknownData07[0x7];                                       
	struct FScriptMulticastDelegate                    OnHealthChangeNotify;                                     
	float                                              MaxDeviation;                                             
	float                                              MaxTraceDepth;                                            
	bool                                               bDoQuadTrace;                                             
	bool                                               bUseQuadTraceDeviationForSpawnOffset;                     
	TEnumAsByte<EBuildingActorConstructingMode>        ConstructingMode;                                         
	bool                                               bEnableOverlayPlace;                                      
	bool                                               bEnablePitchRotatePlace;                                  
	bool                                               bAutoPickValidPlace;                                      
	unsigned char                                      UnknownData08[0x2];                                       
	float                                              OverlayPlaceHeight;                                       
	float                                              OverlayMaxHeightFromGround;                               
	float                                              DetectDeath;                                              
	float                                              MaxOffectHight;                                           
	bool                                               bUseCachedBuildLocation;                                  
	bool                                               bBuildOnlyOnLandscape;                                    
	bool                                               bBuildOnEdge;                                             
	unsigned char                                      UnknownData09[0x1];                                       
	float                                              BuildOnEdgeUpLength;                                      
	float                                              BuildOnEdgeFrontLength;                                   
	unsigned char                                      UnknownData10[0x4];                                       
	struct FBuildingActorDSBuildCheck                  DSBuildCheckCfg;                                          
	int                                                MaxCountLimit;                                            
	bool                                               bDoDensityCheck;                                          
	unsigned char                                      UnknownData11[0x3];                                       
	struct FString                                     LuaModPath;                                               
	unsigned char                                      UnknownData12[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildingActorBase");
		return pStaticClass;
	}


	static void SpawnDestroyParticle(bool bSpawnParticle, const struct FTransform& Loc, const struct FSoftObjectPath& DestroyBuildingEffectPath, class UWorld* World);
	void SetLastQuadTraceDeviation(float InDeviation);
	void PlayDestroyAnimation(bool bUseParticle);
	void OnTakeDamageFromVehicle(class UPrimitiveComponent* MyPrimitiveComp, float ForwardSpeed, float DamageAmount, class AActor* DamageCauser, class AController* EventInstigator);
	void OnRep_Health();
	void OnPlayDestroyAnimation(bool bUseParticle);
	void OnBuildingActorDamaged(float Health);
	void OnBornAnimationPlayEndInClient();
	float GetLastQuadTraceDeviation();
	int GetBuildID();
	void BPOnOwnerChanged();
};




class UBuildingActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildingActorInterface");
		return pStaticClass;
	}


	bool UseQuadTraceDeviationForSpawnOffset(const struct FVector& BuildLocation, float QuadTraceDeviation, struct FVector* OutLocation);
	bool UseFixedLocation();
	bool UseCachedBuildLocation();
	bool ShouldUseExtraRotation();
	bool ShouldUseExtraOffset();
	bool ShouldSnapToGrid();
	bool ShouldSkipCheckOwnerCollision();
	bool ShouldCustomBlockingChannels();
	bool ShouldCheckVisibilityTypes();
	bool ShouldAttachToMovementPlatform();
	void SetBuildingActorID(int BuildID);
	void PrebuildCDOBodyInstance(class UWorld* World, const struct FTransform& tranx);
	void NonCullingBeginPlay();
	float MaxUnderWaterBuildDepth();
	bool IsEnablePitchRotatePlace();
	bool IsEnableOverlayPlace();
	bool IsBuildOnlyOnLandscape();
	bool IsBuildOnEdge();
	bool IsAutoPickValidPlace();
	void HandleBuildingDestroyed(class AController* InstigatedBy);
	void HandleBuildingConstructed(class AController* InstigatedBy);
	struct FBuildingActorWorldSnapSetup GetWorldSnapSetup();
	TArray<class UClass*> GetVisibilitySkipTypes();
	struct FVector GetViewLocationOffset();
	TArray<class UClass*> GetProhibitedActorTemplateList();
	struct FVector GetPreBuildingEffectScale();
	struct FRotator GetPreBuildingEffectRotation();
	struct FSoftObjectPath GetPreBuildingEffectPath();
	struct FVector GetPreBuildingEffectOffset();
	float GetOverlayPlaceHeight();
	float GetOverlayMaxHeightFromGround();
	float GetMaxTraceDepth();
	float GetMaxOffectHight();
	float GetMaxDeviation();
	struct FBuildingActorDSBuildCheck GetDSBuildCheckConfig();
	float GetDetectDeath();
	struct FTransform GetDestroyedParticleTransformOffset();
	struct FBuildingActorDensityCheck GetDensityParams(const struct FVector& Location);
	TArray<TEnumAsByte<ECollisionChannel>> GetCustomBlockingChannels();
	TEnumAsByte<EBuildingActorConstructingMode> GetConstructingMode();
	float GetBuildOnEdgeUpLength();
	float GetBuildOnEdgeFrontLength();
	int GetBuildingActorID();
	struct FRotator GetActorCollisionBoxRotator();
	struct FVector GetActorCollisionBoxExtern();
	struct FVector GetActorCollisionBoxCenter();
	void CustomizeLocationAndRotation(class AActor* Builder, const struct FVector& InLocation, const struct FRotator& InRotation, struct FVector* OutLocation, struct FRotator* OutRotation);
	bool CanDoQuadTrace();
	bool CanCustomizeLocationAndRotation();
	bool CanBuildUnderWater();
	bool BPCheckPlacement(class UWorld* World, const struct FTransform& tranx, int checkType, int CurrentAvatarID, class AActor* Builder);
	bool BP_DSFinalCheckPlacement(const struct FTransform& Transform, class AActor* Builder);
};




class ABuildingActorMgr : public AActor
{
public:
	TArray<struct FBuildingActorInfo>                  BuildingActorList;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildingActorMgr");
		return pStaticClass;
	}


	void OnBuildingActorSpawned(class AActor* InOwnerActor, class ABuildingActorBase* InBuildingActor);
	void OnBuildingActorDestroyed(class ABuildingActorBase* InBuildingActor);
	static class ABuildingActorMgr* GetInstance(class UObject* WorldContextObject);
};




class UBuildingGridComponent : public UBoxComponent
{
public:
	struct FName                                       CollisionProfileName;                                     
	struct FVector                                     BuildCenterOffset;                                        
	unsigned char                                      UnknownData00[0xC];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildingGridComponent");
		return pStaticClass;
	}

};




class UBuildSystemComponent : public ULuaActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnConstructionComplete;                                   
	struct FScriptMulticastDelegate                    OnDoubleClickMode2Event;                                  
	struct FScriptMulticastDelegate                    OnDoubleClickMode2PercentEvent;                           
	float                                              MaxmumConstructingDistance;                               
	int                                                CurrentAvatarID;                                          
	bool                                               bMLAIBuildResult;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              LastQuadTraceDeviation;                                   
	unsigned char                                      UnknownData01[0x80];                                      
	class UClass*                                      BuildingSelectorClass;                                    
	class UClass*                                      SelectBuildMeshClass;                                     
	float                                              UpdateBuildEnableTimer;                                   
	float                                              MinBuildDist;                                             
	float                                              GridGroundThreshold;                                      
	bool                                               AIIsOpenAdsorb;                                           
	bool                                               AIIsOpenLeftAndRightTry;                                  
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              GridGroundCheckDepth;                                     
	struct FWorldGridData                              WorldGridData;                                            
	bool                                               bCanPlaceOnConstructableActor;                            
	unsigned char                                      UnknownData03[0x3];                                       
	int                                                bIsFastPlacementMode;                                     
	int                                                Mode2PressTouchBuildIndex;                                
	bool                                               bIsStartPreBuildMode2;                                    
	unsigned char                                      UnknownData04[0x3];                                       
	struct FVector2D                                   Mode2PreBuildPos;                                         
	float                                              CurrentDoubleClickDuration;                               
	float                                              ValidDoubleClickDuration;                                 
	float                                              ValidDoubleClickInterval;                                 
	float                                              ValidDoubleClickDistance;                                 
	bool                                               bSouldSkipOwningPlayer;                                   
	bool                                               bNativeTouchActorBuildEnabled;                            
	bool                                               bNativeDoubleCkickBuildEnabled;                           
	unsigned char                                      UnknownData05[0x5];                                       
	unsigned char                                      UnknownData06[0x50];                                      
	TArray<class UClass*>                              SkippingObjects;                                          
	bool                                               bDebugDraw;                                               
	bool                                               bPickLocationDebugDraw;                                   
	unsigned char                                      UnknownData07[0x6];                                       
	TArray<class UClass*>                              FilterTemplates;                                          
	TArray<class UClass*>                              ActorsShouldSkipVisiblityCheck;                           
	TEnumAsByte<ECollisionChannel>                     BuildingGridChannel;                                      
	unsigned char                                      UnknownData08[0x3];                                       
	float                                              MaxCanAdsorbAngle;                                        
	float                                              SnappingDistance;                                         
	float                                              SnappingDetectRadius;                                     
	float                                              AIMaxCanRotateAngle;                                      
	bool                                               bCheckPlaceActorPosSwitch;                                
	unsigned char                                      UnknownData09[0x3];                                       
	float                                              FloatErrorTolerance;                                      
	bool                                               bDSTraceCheck;                                            
	unsigned char                                      UnknownData10[0x3];                                       
	class ASelectBuildActor*                           SelectBuildActor;                                         
	EBuildingViewType                                  CurrentBuildViewType;                                     
	unsigned char                                      UnknownData11[0xB];                                       
	bool                                               bIsBuildOnEdge;                                           
	unsigned char                                      UnknownData12[0x3];                                       
	float                                              EdgeUpLength;                                             
	float                                              EdgeFrontLength;                                          
	unsigned char                                      UnknownData13[0x14];                                      
	int                                                CachedCDOIndex;                                           
	class AActor*                                      CachedCDOActor;                                           
	unsigned char                                      UnknownData14[0xC0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.BuildSystemComponent");
		return pStaticClass;
	}


	void TryAttachToMoveablePlatform(class AActor* SpawnedBuilding, const struct FVector& BuildLocation);
	void ToggleDebugDraw();
	void StopPlaceBuilding();
	void StartPrePlaceBuilding(int InBuildID, int AvatarID, EBuildingViewType viewType);
	void SkipCDTimeByBuildID(int InBuildID, float IncreaseRate);
	bool ShouldEnableDoubleTouchMode();
	void SetPrebuildEnabled(bool CanBePlaced, bool IsVisible);
	void SetBuildingDataModeID(int ModeID);
	void SetBuildingData(int Index, const struct FBuildingData& InData);
	bool ServerLineTraceCheck(class UClass* BuildingClass, const struct FVector& CheckLocation, const struct FRotator& CheckRotation);
	void ResetBuildngCDByBuildID(int InBuildID, float InNewCDTime);
	void ResetBuildList();
	bool ProccessNothingHitTraceOverlap(const struct FVector& DestLocation, const struct FRotator& DestRotation, float MaxBuildDist, int buildIndex, const struct FVector& ViewLocation, struct FVector* OutLocation);
	void PlaceBuildingWithIndex(int buildIndex, int AvatarID, bool bRelative);
	void PlaceBuildingAtLocation(int buildIndex, const struct FVector& Loc, const struct FRotator& Rot);
	void PlaceBuilding(int AvatarID, bool bRelative);
	bool PickLocationByBuildID(int InBuildID, struct FVector* OutLocation, struct FRotator* OutRotation);
	void OverriveDeploymentTransform(const struct FRotator& rotIn, const struct FVector& locIn, struct FRotator* rotOut, struct FVector* locOut);
	void OverrideBuildingMaxBuildDistance(float BuildingMaxDistance, bool SetAll, int BuildingID);
	void OnTouchedConstructableBoxEnded(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void OnTouchedConstructableBox(TEnumAsByte<ETouchIndex> FingerIndex, class UPrimitiveComponent* TouchedComponent);
	void OnTouchActorBuild(const struct FVector2D& ScreenPosition, class APlayerController* Controller);
	void OnAsyncLoadingMeshFinished(int buildIndex);
	void OnAsyncLoadingEffectFinished(int buildIndex);
	void OnAsyncLoadingBuildingFinished(int buildIndex);
	bool IsValidAvatar(int AvatarID);
	bool IsParticlePreBuildingEffect(int InBuildID);
	bool IsOverlayBuildHeightValid(const struct FVector& BuildLocation, float OverlayMaxHeightFromGround);
	bool IsInPreBuildingMode();
	bool IsCanPlaceBuildingBP(int InBuildID);
	bool IsCanPlaceBuilding(int InBuildID, TEnumAsByte<EBuildingActionType> _TYPE);
	bool IsActorProhibited(class AActor* Actor);
	struct FRotator GetPreBuildingEffectRotation(int InBuildID);
	struct FSoftObjectPath GetPreBuildingEffectPath(int InBuildID, int AvatarID);
	struct FVector GetPreBuildingEffectOffset(int InBuildID);
	class APlayerController* GetOwnerPlayerController();
	float GetMaxDistance();
	float GetLastQuadTraceDeviation();
	bool GetIsHasInitData();
	int GetIndexByBuildingID(int BuildID);
	TEnumAsByte<EBuildingType> GetCurrentBuildType();
	class AActor* GetCDOByIndex(int Index);
	TArray<struct FBuildingData> GetBuildingList();
	int GetBuildingDataModeID();
	void EnableBuildingByID(int BuildID, bool bEnable);
	void DoSceenTouchBuild(int buildIndex, const struct FVector2D& ScreenPostion, int PointerIndex, TEnumAsByte<EBuildingActionType> _TYPE, bool IsBegin, TEnumAsByte<EBuildingActionType> CustomBuildEvent);
	bool DensityCheck(const struct FBuildingActorDensityCheck& DensityCheckParmas);
	bool CheckShouldSkipByVisibility(class UPrimitiveComponent* _comp, int buildIndex);
	bool CheckPlacementWithPitch(const struct FHitResult& Hit, const struct FVector& BoxExtent, const struct FBuildingData& CurBuildData, struct FVector* OutLocation, struct FRotator* OutRotation);
	bool CheckPlacementOverlap(TArray<struct FHitResult> HitArray, const struct FVector& ViewLocation, const struct FVector& BoxExtent, const struct FBuildingData& CurBuildData, const struct FRotator& BuildRotation, const struct FRotator& ControlRot, struct FVector* OutLocation, bool* HasForbiddenObject);
	bool CheckPlaceBuildingWithIndex(int buildIndex);
	bool CheckObjectIsOneOfTheTemplate(class UObject* Obj, TArray<class UClass*> _ActorFilterTemplates);
	bool CheckCollisionNeedSkipOwner(int buildIndex);
	bool BuildAtWorldLoc(int buildIndex, const struct FTransform& tranx, const struct FVector& EndLocation, bool bUseTrace, TEnumAsByte<EBuildingActionType> BuildType);
	void AddBuildingData(const struct FBuildingData& InData);
};




class ASelectBuildActor : public ALuaActor
{
public:
	class UParticleSystemComponent*                    SelectBuildEffect;                                        
	class UStaticMeshComponent*                        SelectEffectMesh;                                         
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BuildSystem.SelectBuildActor");
		return pStaticClass;
	}


	void SetSelectActorTemplateScale(const struct FVector& InScale);
	void SetSelectActorTemplateOffsetAndRotation(const struct FVector& InOffset, const struct FRotator& InRotation);
	void SetSelectActorTemplate(class UParticleSystem* Template);
	void SetSelectActorPlacementEnable(bool PlacementEnable, bool IsVisible);
	void SetSelectActorMesh(class UStaticMesh* InMesh);
	void SetIsPlacementEnable(bool Val);
	void OnParticleLoaded();
	bool IsCurrentPlacementEnable();
	bool GetIsPlacementEnable();
	bool GetIsParticleEffect();
};


}

