#pragma once


 
namespace SDK
{






class UUAEUserWidget : public UUserWidget
{
public:
	class UFrontendHUD*                                OwningFrontendHUD;                                        
	class ULogicManagerBase*                           OwningLogicManager;                                       
	class UUAEWidgetContainer*                         OwningWidgetContainer;                                    
	class UUAEUserWidget*                              ParentWidget;                                             
	unsigned char                                      UnknownData00[0xA0];                                      
	TArray<class UProperty*>                           Params;                                                   
	unsigned char                                      UnknownData01[0x10];                                      
	struct FScriptMulticastDelegate                    widgetSizeNofity;                                         
	struct FUserWidgetState                            DefaultUserWidgetState;                                   
	struct FUserWidgetState                            CurrentUserWidgetState;                                   
	float                                              TickRate;                                                 
	bool                                               bReceiveOnClickedEvent;                                   
	bool                                               bReceiveOnRightClickedEvent;                              
	bool                                               bReceiveOnDoubleClickedEvent;                             
	bool                                               bAutoSetScreenPosOnMouseEnter;                            
	struct FVector2D                                   ScreenPos;                                                
	struct FVector2D                                   LastMouseEventScreenPos;                                  
	unsigned char                                      UnknownData02[0x8];                                       
	EUserWidgetFadingStatus                            FadingStatus;                                             
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              CurrentOpacity;                                           
	float                                              FadingInTime;                                             
	float                                              FadingOutTime;                                            
	bool                                               bNoFadeIn;                                                
	bool                                               bNoFadeOut;                                               
	bool                                               bShouldCollapse;                                          
	bool                                               bRegistUIMsg;                                             
	unsigned char                                      UnknownData04[0x4];                                       
	struct FString                                     UIMsgPrefix;                                              
	TArray<struct FString>                             UIMsgFunctionList;                                        
	bool                                               bRegistedUIMsgToMoudle;                                   
	unsigned char                                      UnknownData05[0x7];                                       
	struct FString                                     MoudleToRegisted;                                         
	unsigned char                                      UnknownData06[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEUserWidget");
		return pStaticClass;
	}


	bool Visible();
	void UnRegistFromGameFrontendHUD();
	void SynchronizeBlueprintProperties();
	void Show();
	void SetParentWidgetRecursive(class UUAEUserWidget* InParentWidget);
	void SetParentWidget(class UUAEUserWidget* InParentWidget);
	static void SetOnWidgetShow(const struct FScriptDelegate& onShow);
	static void SetOnWidgetHide(const struct FScriptDelegate& OnHide);
	static void SetOnClearUIStack(const struct FScriptDelegate& onClear);
	void SetAdapation(float Left, float Top, float Right, float Bottom);
	void RegistToGameFrontendHUD(class UFrontendHUD* GameFrontHUD);
	void Register(class ULogicManagerBase* LogicManager, bool bAddToViewport);
	void ReceiveShow();
	void ReceiveHide();
	void ReceivedMountWidget();
	void ReceivedInitWidget();
	void ReCachedUIMsgFunction();
	static void PushOpenedUIStack(const struct FString& Name);
	static void PopOpenedUIStack(const struct FString& curOpen);
	void OnWidgetShow__DelegateSignature(const struct FString& ClassName);
	void OnWidgetHide__DelegateSignature(const struct FString& ClassName);
	void OnRightClicked(const struct FVector2D& TempScreenPos);
	void OnFadeOutFinished();
	void OnFadeInFinished();
	void OnDoubleClicked(const struct FVector2D& TempScreenPos);
	void OnClicked(const struct FVector2D& TempScreenPos);
	void OnClearUIStack__DelegateSignature();
	bool IntCompare(int A, int B, EWidgetCompareType CompareType);
	void InitWidget(bool Recursive);
	void InitCustomWidget(class AActor* OwnerActor, class UWidgetComponent* WidgetComponent);
	void Hide();
	void HandleUIMessageBattle(const struct FString& UIMessage);
	void HandleUIMessage(const struct FString& UIMessage);
	class UWidget* GetWidgetsByName(const struct FString& WidgetName, const struct FString& OuterName, bool bUseContains);
	class UWidget* GetWidgetContainsName(const struct FString& Name);
	class UUAEUserWidget* GetParentWidget();
	class APlayerController* GetOwningPlayer();
	class ULogicManagerBase* GetOwningLogicManager();
	class UFrontendHUD* GetOwningFrontendHUD();
	class UMaterialInstanceDynamic* GetImgDynamicMaterial(class UImage* ImageMat);
	class UUserWidget* GetChildWidgetByEqualPolitics(const struct FString& ChildName, EUserWidgetNameEqualPolitics EqualPolitics, int RecursiveDepth);
	class UUserWidget* GetChildWidget(const struct FString& WName);
	struct FMargin GetAdapation();
	bool FloatCompare(float A, float B, EWidgetCompareType CompareType);
	void DynamicRegistUIMsgToCache(class UUAEUserWidget* Widget);
	void DestroyWidget();
	static void ClearOpenedUIStack();
	void ClearFunctionCacheByMsgName(const struct FString& InUIMsg);
	void ClearFunctionCache();
	void ClearClassWidgetTree();
	void BindCustomUserEvent(class AActor* OwnerActor, class UWidgetComponent* WidgetComponent);
};




class ULuaUAEUserWidget : public UUAEUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              
	bool                                               bEnableBlueprintTick;                                     
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.LuaUAEUserWidget");
		return pStaticClass;
	}

};




class UUAECanvasPanel : public UCanvasPanel
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.UAECanvasPanel");
		return pStaticClass;
	}


	void ReceiveInitCanvasPanel();
};




class UBackendUtils : public UObject
{
public:
	class UBackendHUD*                                 OwningBackendHUD;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.BackendUtils");
		return pStaticClass;
	}

};




class UBackendHUD : public UObject
{
public:
	class UEngine*                                     Engine;                                                   
	struct FString                                     BackendUtilsClassName;                                    
	class UBackendUtils*                               Utils;                                                    
	TArray<class UFrontendHUD*>                        FrontendHUDList;                                          
	TMap<uint32_t, TWeakObjectPtr<class UFrontendHUD>> FrontendHUDMap;                                           
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.BackendHUD");
		return pStaticClass;
	}


	class UFrontendHUD* GetFrontendHUDByGameInstance(class UGameInstance* GameInstance);
	class UFrontendHUD* GetFrontendHUD(int FrontendHUDIndex);
};




class ULogicManagerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	class UFrontendHUD*                                OwningFrontendHUD;                                        
	unsigned char                                      UnknownData01[0x10];                                      
	bool                                               bPersistentUI;                                            
	bool                                               bDynamicWidget;                                           
	bool                                               bKeepDynamicWidget;                                       
	bool                                               bUseNewHandleUIMessage;                                   
	int                                                iUIControlState;                                          
	int                                                DefaultSceneCameraIndex;                                  
	unsigned char                                      UnknownData02[0x14];                                      
	TArray<struct FName>                               GameStatusList;                                           
	TArray<struct FString>                             InvalidWorldNameList;                                     
	unsigned char                                      UnknownData03[0x30];                                      
	TArray<class UClass*>                              WidgetUClassList;                                         
	TArray<class UUAEUserWidget*>                      WidgetList;                                               
	unsigned char                                      UnknownData04[0x18];                                      
	TArray<class UObject*>                             DelayMessage_Obj;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.LogicManagerBase");
		return pStaticClass;
	}


	void SetEnableRemoveDynamicWidgets(bool bEnable);
	void MarkWidgetClassPendingKill(class UUAEUserWidget* Widget);
	static bool IsNeedClear(float MaxLowLevelMemorySize, float MaxMiddleMemorySize, float MaxGCArrayObjectSize);
	bool IsEnableRemoveDynamicWidgets();
	TArray<class UUAEUserWidget*> GetWidgetList();
	class UUAEUserWidget* GetWidgetByName(const struct FString& InName);
	class UUAEUserWidget* GetWidgetByClass(class UClass* InClass);
	class UFrontendHUD* GetOwningFrontendHUD();
	int GetDefaultSceneCamera();
	void DispatchUIMessage(const struct FString& UIMessage, class UObject* Source, class UUAEUserWidget* Target);
};




class UFrontendHUD : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      
	class UGameInstance*                               GameInstance;                                             
	unsigned char                                      UnknownData01[0x8];                                       
	struct FString                                     FrontendUtilsClassName;                                   
	class UFrontendUtils*                              Utils;                                                    
	TArray<class ULogicManagerBase*>                   LogicManagerList;                                         
	TMap<struct FString, TWeakObjectPtr<class ULogicManagerBase>> LogicManagerMap;                                          
	unsigned char                                      UnknownData02[0x10];                                      
	int                                                UnusedWidgetMinCount;                                     
	int                                                UnusedWidgetMaxCount;                                     
	int                                                UnusedWidgetKeepTime;                                     
	float                                              MaxLowLevelMemoryLimit;                                   
	float                                              MaxMiddleMemoryLimit;                                     
	float                                              MaxGCArrayObjectSize;                                     
	struct FString                                     CurrentGameStatus;                                        
	struct FString                                     LastGameStatus;                                           
	bool                                               InComBatStatus;                                           
	unsigned char                                      UnknownData03[0x7];                                       
	struct FString                                     PendingGameStatus;                                        
	struct FString                                     LatestGameStatusURL;                                      
	struct FScriptMulticastDelegate                    OnPreSwitchLobbyEntry;                                    
	struct FScriptMulticastDelegate                    OnPostSwitchLobbyEntry;                                   
	struct FScriptMulticastDelegate                    OnPostSwitchGameStatusStartEvent;                         
	struct FScriptMulticastDelegate                    OnPostSwitchGameStatusEvent;                              
	struct FScriptMulticastDelegate                    OnPreSwitchGameStatusEvent;                               
	unsigned char                                      UnknownData04[0x10];                                      
	struct FScriptMulticastDelegate                    OnGameStatusSwitchTerminate;                              
	struct FScriptMulticastDelegate                    OnPreSwitchGameStatusEndEvent;                            
	struct FScriptMulticastDelegate                    OnCreateLogicManagerListEvent;                            
	struct FScriptMulticastDelegate                    OnSetGameStatusEvent;                                     
	struct FScriptMulticastDelegate                    OnAddLuaLogicManagerEvent;                                
	struct FScriptMulticastDelegate                    OnRemoveLuaLogicManagerEvent;                             
	struct FScriptMulticastDelegate                    OnRenderQualityChangedEvent;                              
	struct FScriptMulticastDelegate                    OnPostWorldCleanupEvent;                                  
	class UWorld*                                      CurrentGameStatusWorld;                                   
	unsigned char                                      UnknownData05[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.FrontendHUD");
		return pStaticClass;
	}


	void SwitchUIStatus(const struct FString& InUIStatus);
	void SwitchGameStatus(const struct FString& GameStatus, const struct FString& Options);
	void StandAloneSwitchGameStatus(const struct FString& InGameStatus, const struct FString& Options);
	void OnRenderQualityChanged(bool bLoadMap);
	void OnPreLoadMap(const struct FString& MapName);
	void OnPostLoadMapWithWorld(class UWorld* World);
	void OnGameViewportClientCreated();
	class UWorld* GetWorld();
	class UFrontendUtils* GetUtils();
	class APlayerController* GetPlayerController();
	class ULogicManagerBase* GetLogicManagerByName(const struct FString& LogicManagerTagName);
	class ULogicManagerBase* GetLogicManager(int LogicManagerIndex);
	class UGameViewportClient* GetGameViewportClient();
	class AGameMode* GetGameMode();
	class UGameInstance* GetGameInstance();
	TArray<TWeakObjectPtr<class UObject>> FindRegistedUIFunctionList(const struct FString& strMsg, const struct FString& moduleMsg);
	void EnableGuiTest(bool bEnable);
	void DynamicRegistUIMsgToCache(class UUAEUserWidget* Widget, const struct FString& module);
	void ClearLogicManagerListByStatus(const struct FName& PendingStatus, bool bIsForceDelete);
	void ClearLogicManagerByName(const struct FString& managerName);
	void ClearInGameUI();
};




class UFrontendUtils : public UObject
{
public:
	class UFrontendHUD*                                OwningFrontendHUD;                                        
	struct FScriptMulticastDelegate                    SceneCameraSwitchedDelegate;                              
	struct FName                                       CurrentSceneCameraName;                                   
	TArray<class ACameraActor*>                        SceneCameraList;                                          
	TMap<struct FName, TWeakObjectPtr<class ACameraActor>> SceneCameraMap;                                           
	TArray<class ADirectionalLight*>                   SceneDirectionalLightList;                                
	TMap<struct FName, TWeakObjectPtr<class ADirectionalLight>> SceneDirectionalLightMap;                                 
	TArray<class APointLight*>                         ScenePointLightList;                                      
	TMap<struct FName, TWeakObjectPtr<class APointLight>> ScenePointLightMap;                                       
	TMap<struct FName, TWeakObjectPtr<class ASkyLight>> SceneSkyLightMap;                                         
	unsigned char                                      UnknownData00[0x68];                                      
	struct FString                                     GlobalUIContainerClassName;                               
	TArray<struct FName>                               GlobalUIContainerNames;                                   
	TMap<struct FName, class UUAEWidgetContainer*>     GlobalUIContainers;                                       
	TArray<class UUAEWidgetContainer*>                 GlobalPushUIContainers;                                   
	TMap<struct FName, class UUAEWidgetContainer*>     GlobalPushUIRelations;                                    
	unsigned char                                      UnknownData01[0x38];                                      
	TMap<class UUAEWidgetContainer*, bool>             UIShowStatusMap;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.FrontendUtils");
		return pStaticClass;
	}


	void SwitchSceneCameraToTransform(const struct FTransform& targetTrans, TEnumAsByte<ECameraProjectionMode> ProjectionMode, float FOV, float BlendTime, bool bForce, bool bAutoFixAspect);
	void SwitchSceneCamera(const struct FName& SceneCameraName, float BlendTime, bool bForce);
	void SetSceneSkyLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color);
	void SetScenePointLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius);
	void SetSceneDirectionalLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, const struct FLightingChannels& Channel);
	void SetAutoFixFovByAspectRatio(class ACameraActor* CameraActor, bool bInAutoFixFov);
	void RegisterSceneSkyLight(const struct FName& sceneLightName, class ASkyLight* Light);
	void RegisterScenePointLight(const struct FName& sceneLightName, class APointLight* Light);
	void RegisterSceneDirectionalLight(const struct FName& sceneLightName, class ADirectionalLight* Light);
	void RegisterSceneCamera(const struct FName& SceneCameraName, class ACameraActor* SceneCamera);
	void PopAllPushedUI();
	void OnAllSceneCamerasRegistered();
	bool IsPushedPanel(const struct FName& managerName);
	bool IsNoRenderClient();
	struct FString GetUIStackTopSrcTag();
	struct FString GetUIStackTopDstTag();
	struct FString GetUIStackTop();
	class UCameraComponent* GetSceneCameraComponent();
	class ACameraActor* GetSceneCamera();
	class UFrontendHUD* GetOwningFrontendHUD();
	class UUAEWidgetContainer* GetGlobalUIContainer(const struct FName& ContainerName);
	void GetAllActorsFromLevel(class ULevel* Level, TArray<class AActor*>* OutActors);
	void EnableLobbyMainLight(bool NewEnable);
	void ClearAllSceneCameras();
};




class UTableTraver : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.TableTraver");
		return pStaticClass;
	}

};




class UUAEDataTable : public UDataTable
{
public:
	unsigned char                                      UnknownData00[0x38];                                      
	TMap<struct FString, class UProperty*>             NameToProperty;                                           
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEDataTable");
		return pStaticClass;
	}


	bool SetTableData_String(const struct FString& KeyValue, const struct FString& TagName, const struct FString& Value);
	bool SetTableData_Int32(const struct FString& KeyValue, const struct FString& TagName, int Value);
	bool SetTableData_Float(const struct FString& KeyValue, const struct FString& TagName, float Value);
	struct FString GetTableName();
	struct FString GetRealTableName(const struct FString& tableName);
	bool ConditionAddEmptyRow(const struct FName& RowName);
};




class UUAEDataTableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEDataTableInterface");
		return pStaticClass;
	}

};




class UAEUserWidgetDragDropOperation : public UDragDropOperation
{
public:
	TWeakObjectPtr<class UUAEUserWidgetForDrag>        OwnerWidget;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.AEUserWidgetDragDropOperation");
		return pStaticClass;
	}

};




class UUAEUserWidgetForDrag : public UUAEUserWidget
{
public:
	struct FName                                       WidgetName;                                               
	class UClass*                                      DefaultDragVisualClass;                                   
	EDragPivot                                         Pivot;                                                    
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector2D                                   Offset;                                                   
	EDragYieldToScrollAxis                             YieldToScrollAxis;                                        
	bool                                               bRestoreDragVisualOnDragEnd;                              
	unsigned char                                      UnknownData01[0x2];                                       
	class UDragDropOperation*                          DragDropOperation;                                        
	struct FScriptDelegate                             OnOnDragDetectedDel;                                      
	struct FScriptMulticastDelegate                    OnDragEnterDel;                                           
	struct FScriptMulticastDelegate                    OnDragCancelledDel;                                       
	struct FScriptMulticastDelegate                    OnDraggingDel;                                            
	struct FScriptMulticastDelegate                    OnTouchStartedDel;                                        
	struct FScriptMulticastDelegate                    OnTouchEndedDel;                                          
	class UWidget*                                     BorrowedDragVisual;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEUserWidgetForDrag");
		return pStaticClass;
	}

};




class UUAEWidgetContainer : public UUAEUserWidget
{
public:
	TArray<class UWidget*>                             WidgetList;                                               
	class UCanvasPanel*                                ContainerCache;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEWidgetContainer");
		return pStaticClass;
	}


	void RemoveWidgetInternal(class UWidget* Widget);
	void RemoveWidget(class UWidget* Widget);
	void AddWidgetWithZOrderInternal(class UWidget* Widget, int ZOrder);
	void AddWidgetWithZOrder(class UWidget* Widget, int ZOrder);
	void AddWidgetInternal(class UWidget* Widget);
	void AddWidget(class UWidget* Widget);
};


}

