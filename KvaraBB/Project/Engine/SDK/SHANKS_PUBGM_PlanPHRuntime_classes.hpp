#pragma once


 
namespace SDK
{






class UBinFileHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.BinFileHelper");
		return pStaticClass;
	}


	int Init(int z4BufferSize, int zeroListSize);
};




class UMapBarrierWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.MapBarrierWidget");
		return pStaticClass;
	}


	void SetMapStructureData(TArray<struct FStructureData> InMapStructureData);
	void SetMapMidPoint(struct FVector2D* InMapMidPoint);
	void SetLevelBoundExtent(int InLevelBoundExtent);
	void SetGridSize(float InGridSize);
};




class APlanPH_GameMode : public ABattleRoyaleGameMode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameMode");
		return pStaticClass;
	}


	void HandleNavigationInfo(class AController* Controller);
	class ASTExtraPlayerStart* GetPlayerStart(int LandId);
	void DSPlayerKickOut(uint64_t UID, const struct FName& PlayerType, const struct FString& ExitReason);
};




class UPlanPH_GameModeState_Active : public UGameModeStateActive
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameModeState_Active");
		return pStaticClass;
	}

};




class UPlanPH_GameModeState_Fighting : public UGameModeStateFightingTeam
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameModeState_Fighting");
		return pStaticClass;
	}

};




class APlanPH_GameState : public ASTExtraGameStateBase
{
public:
	struct FScriptMulticastDelegate                    OnIslandPlayerChangeDelegate;                             
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_2;                                     
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_3;                                     
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_4;                                     
	struct FPlanPH_CommonOccupy                        PartyDanceLeadInfo_5;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_GameState");
		return pStaticClass;
	}


	void OnRep_PartyDanceLeadInfo_5();
	void OnRep_PartyDanceLeadInfo_4();
	void OnRep_PartyDanceLeadInfo_3();
	void OnRep_PartyDanceLeadInfo_2();
	void LuaOnRep_PartyDanceLeadInfo(int LandId);
	void ChangePartyLeadInfo(int LandId, bool bOccupied, int BeginTime, int EndTime, const struct FString& PlayerUID, bool bIsWedding);
};




class APlanPH_PlayerState : public ASTExtraPlayerState
{
public:
	int                                                LandId;                                                   
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPH_PlayerState");
		return pStaticClass;
	}


	void RequestPaintDecal(int DecalId, const struct FTransform& TargetTransform);
	void OnRep_LandId();
	void InitLandId();
	bool CanPaintDecal(int DecalId);
};




class UPlanPHCustomStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHCustomStaticMeshComponent");
		return pStaticClass;
	}


	void BPPreSetStaticMesh(class UStaticMesh* NewMesh);
	void BPPostSetStaticMesh(class UStaticMesh* NewMesh);
};




class APlanPHDoor : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FVector                                     TransformDirVector;                                       
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHDoor");
		return pStaticClass;
	}


	void Refresh_DoorCollisionChanel(class UStaticMeshComponent* StaticMeshComponent, bool bEnableCollision);
	void DoorAniFinish(class UStaticMeshComponent* InDoorCheckBox, bool Bright);
};




class UPlanPHGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHGameplayStatics");
		return pStaticClass;
	}


	float SpinEvaluate(float S, float T);
	bool SetPlayerMovementBlendTime(class ASTExtraPlayerCharacter* PlayerChar, int nType, float BlendTime);
	void GetActorBound(class AActor* Actor, struct FVector* Size);
	void ChangeLightChannel(class UPrimitiveComponent* InComponent, int InChannelBitMask);
};




class APlanPHHomeArea : public ALuaActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FIntVector                                  BlockNumXYZ;                                              
	struct FIntVector                                  MinGridIndexXYZ;                                          
	struct FIntVector                                  MaxGridIndexXYZ;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	class UPlanPHHomeAreaVisualizationComponent*       VisComponent;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHHomeArea");
		return pStaticClass;
	}


	void UpdateEditableArea(const struct FIntVector& InMinGridIndexXYZ, const struct FIntVector& InMaxGridIndexXYZ);
};




class UPlanPHHomeAreaVisualizationComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHHomeAreaVisualizationComponent");
		return pStaticClass;
	}


	void ShowGrids(bool InBShow);
};




class UPlanPHMapData : public UMapDataBase
{
public:
	TArray<class ASTExtraPlayerCharacter*>             PlayerCharacterArrayC;                                    
	TArray<struct FVector>                             OffsetLocations;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHMapData");
		return pStaticClass;
	}


	bool RemovePlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem);
	bool AddPlayerItem(class ASTExtraPlayerCharacter* PlayerCharacterItem, class UWidget* PlayerInfoBPItem, class UWidget* PlayerInfoRotWidgetItem, const struct FVector& OffsetLocation);
};




class UPlanPHProjectionComponent : public UActorComponent
{
public:
	int                                                BuildState;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     LastError;                                                
	int                                                OutputTriangleCount;                                      
	bool                                               bUsedStructureFallback;                                   
	unsigned char                                      UnknownData01[0x3];                                       
	struct FString                                     StructureFallbackReason;                                  
	bool                                               bEnableStructureFallback;                                 
	unsigned char                                      UnknownData02[0x7];                                       
	class UMaterialInterface*                          ProjectionMaterial;                                       
	float                                              ProjectionWidth;                                          
	float                                              ProjectionHeight;                                         
	float                                              ProjectionDepth;                                          
	float                                              MaxReceiverAngleDegrees;                                  
	TArray<class AActor*>                              ReceiverExcludedActors;                                   
	TArray<class UStaticMesh*>                         ReceiverExcludedMeshes;                                   
	float                                              MinSourceProjectedArea;                                   
	int                                                MaxFragmentsPerSurface;                                   
	struct FVector                                     LocationOffset;                                           
	struct FRotator                                    RotationOffset;                                           
	bool                                               bIgnoreOwnerRotation;                                     
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              SurfaceBias;                                              
	int                                                TranslucentSortPriority;                                  
	unsigned char                                      UnknownData04[0x4];                                       
	struct FName                                       IntensityParameter;                                       
	class UMaterialInstanceDynamic*                    Material;                                                 
	class URuntimeMeshComponent*                       RenderMesh;                                               
	TArray<class UStaticMesh*>                         SourceMeshes;                                             
	unsigned char                                      UnknownData05[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHProjectionComponent");
		return pStaticClass;
	}


	void SubmitProjection();
	bool SetReceiverMeshExcluded(class UStaticMesh* Mesh, bool bExcluded);
	bool SetReceiverActorExcluded(class AActor* Actor, bool bExcluded);
	void SetProjectionIntensity(float Intensity);
	void SetProjectionEnabled(bool bEnabled);
	static bool ResumeProjectionWorld(class UObject* WorldContextObject);
	void ReleaseProjection();
	static bool CleanupProjectionWorld(class UObject* WorldContextObject);
	bool BeginProjection(class UObject* BatchHelper);
	void AddReceiverActor(class AActor* Actor);
	void AddDecorationActor(class AActor* Actor);
};




class APlanPHSpectatorPawn : public ASpectatorPawn
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
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHSpectatorPawn");
		return pStaticClass;
	}


	void OnSpectatorRestart();
	void MoveRight(float Val);
	void MoveForward(float Val);
};




class UPlanPHVisualGridComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       
	struct FIntVector                                  BlockNumXYZ;                                              
	struct FLinearColor                                XColor;                                                   
	struct FLinearColor                                YColor;                                                   
	struct FLinearColor                                ZColor;                                                   
	float                                              LineThickness;                                            
	unsigned char                                      UnknownData01[0xC];                                       
	bool                                               bShouldShowGrids;                                         
	unsigned char                                      UnknownData02[0xF];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PlanPHRuntime.PlanPHVisualGridComponent");
		return pStaticClass;
	}


	void ShowGrids(bool InBShow);
	void RefreshGrids();
};


}

