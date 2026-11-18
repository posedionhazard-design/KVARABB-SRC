#pragma once


 
namespace SDK
{






class UBlocky3DVarWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           
	unsigned char                                      UnknownData00[0x18];                                      
	class UBlockyGraphData*                            HostWidget;                                               
	bool                                               IsBPInit;                                                 
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     X;                                                        
	struct FString                                     Y;                                                        
	struct FString                                     Z;                                                        
	int                                                StartSlotIdx;                                             
	unsigned char                                      UnknownData02[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.Blocky3DVarWidget");
		return pStaticClass;
	}


	void SetResult();
	void InitText(float X, float Y, float Z);
	struct FString CleanNumber(const struct FString& Input);
};




class UBlockyBlockDisplayWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	class UBlockyGraphData*                            BlockyGraphData;                                          
	struct FVector2D                                   BlockSize;                                                
	bool                                               Movable;                                                  
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockDisplayWidget");
		return pStaticClass;
	}

};




class UBlockyBlockDisplayWidget_Custom : public UBlockyBlockDisplayWidget
{
public:
	class UCustomConfig*                               Config;                                                   
	struct FString                                     BlockName;                                                
	TArray<struct FString>                             ParamName;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockDisplayWidget_Custom");
		return pStaticClass;
	}


	void UpdateName(const struct FString& Name);
	void Init(TEnumAsByte<ECustomBlockType> Type);
};




class UBlockyBlockDisplayWidget_Preset : public UBlockyBlockDisplayWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockDisplayWidget_Preset");
		return pStaticClass;
	}


	void InitPreset(class UBlockyGraphWidget* HostGraphWidget);
};




class UBlockyBlockDisplayWidget_Variable : public UBlockyBlockDisplayWidget
{
public:
	class UNamedVar*                                   NamedVar;                                                 
	bool                                               HasSettingIcon;                                           
	bool                                               HasCopyIcon;                                              
	bool                                               IsEditingDisplay;                                         
	unsigned char                                      UnknownData00[0x5];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockDisplayWidget_Variable");
		return pStaticClass;
	}


	void Init();
	struct FVector2D CalculateDrawSize();
};




class UBlockyBlockListWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      
	class UBlockyBlockWindowWidget*                    HostWindow;                                               
	float                                              HorizontalMoveCheckDelta;                                 
	float                                              VerticalMoveCheckDelta;                                   
	bool                                               IsOpenComment;                                            
	unsigned char                                      UnknownData01[0x7];                                       
	class UBlockyBlockListItemObject*                  PointAtListItem;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockListWidget");
		return pStaticClass;
	}

};




class UBlockyBlockWindowWidget : public UUserWidget
{
public:
	class UBlockyGraphData*                            GraphWidget;                                              
	class UBlockyBlockListWidget*                      WidgetToPaint;                                            
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBlockWindowWidget");
		return pStaticClass;
	}


	void SetWidgetVariableToShow(class UBlockyMenuItemObject_Variable* item_Variable);
	void SetWidgetCustomToShow(class UBlockyMenuItemObject_Custom* item_Custom);
	void SetWidgetCommonToShow(class UBlockyMenuItemObject* MenuItem);
	void SetWidgetBPToShow(class UUserWidget* Widget);
};




class UBlockyBooleanWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           
	unsigned char                                      UnknownData00[0x18];                                      
	class UBlockyGraphData*                            HostWidget;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyBooleanWidget");
		return pStaticClass;
	}


	void SetText(const struct FString& Value);
	void SetResult(const struct FString& displayValue, const struct FString& Value);
};




class UBlockyCategoryItemWidget : public UUserWidget
{
public:
	int                                                Index;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FText                                       Name;                                                     
	bool                                               IsScrolling;                                              
	unsigned char                                      UnknownData01[0xF];                                       
	class UBlockyCategoryWidget*                       HostWidget;                                               
	class UScrollBox*                                  SubScrollBox;                                             
	unsigned char                                      UnknownData02[0x8];                                       
	class UBlockyCategoryItemObject*                   CategoryObject;                                           
	unsigned char                                      UnknownData03[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyCategoryItemWidget");
		return pStaticClass;
	}


	void SetSelected(bool IsSelected);
	void OnScroll();
	void OnClick();
	void InitWithItemObject(class UBlockyCategoryItemObject* Item);
	void InitTextToShow();
};




class UBlockyCategoryWidget : public UUserWidget
{
public:
	class UBlockyGraphData*                            GraphWidget;                                              
	class UClass*                                      CategoryItemWidgetType;                                   
	struct FText                                       CategoryName;                                             
	unsigned char                                      UnknownData00[0x8];                                       
	class UScrollBox*                                  SubScrollBox;                                             
	float                                              CurrentScrollOffset;                                      
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyCategoryWidget");
		return pStaticClass;
	}


	struct FText GetCurrentCategoryNameWithVariable();
	class UPanelWidget* GetCategoryContainer();
};




class UBlockyColorPickerWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           
	unsigned char                                      UnknownData00[0x18];                                      
	class UBlockyGraphData*                            HostWidget;                                               
	TArray<struct FLinearColor>                        RecommendedColors;                                        
	TArray<struct FLinearColor>                        StoredColors;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyColorPickerWidget");
		return pStaticClass;
	}


	void SetResult(const struct FLinearColor& Value);
	void SetColor(const struct FLinearColor& Value);
	void LoadColors();
};




class UBlockyEditor : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	class UBlockyGraphData*                            GraphData;                                                
	bool                                               IsSlotPreset;                                             
	bool                                               IsLastPresetCategory;                                     
	unsigned char                                      UnknownData01[0x6];                                       
	struct FString                                     LastPresetCategory;                                       
	class UWidget*                                     MainPanel;                                                
	bool                                               IsCustomVarVisable;                                       
	unsigned char                                      UnknownData02[0x7];                                       
	class UBlockyEnumWidget*                           EnumWidget;                                               
	class UBlockyStringWidget*                         StringWidget;                                             
	class UBlockyBooleanWidget*                        BooleanWidget;                                            
	class UBlockyFloatWidget*                          FloatWidget;                                              
	class UBlocky3DVarWidget*                          Var3DWidget;                                              
	class UBlockyIntegerWidget*                        IntegerWidget;                                            
	class UBlockyColorPickerWidget*                    ColorWidget;                                              
	class UBlockyPresetWidget*                         PresetWidget;                                             
	class UBlockySelectFromSceneWidget*                SelectFromSceneWidget;                                    
	TArray<class UBlockyMenuItemObject*>               CurrentMenuItems;                                         
	class UBlockyMenuItemObject*                       CurrentSerchMenuItem;                                     
	class UBlockyBlockListItemObject*                  ListItemSerchAtPoint;                                     
	class UMaterial*                                   AnimateMaterial;                                          
	class UMaterialInstance*                           DeleteUIDockingMaterial;                                  
	class UMaterialInstance*                           DeleteRangeUIDockingMaterial;                             
	class UMaterialInstance*                           DeleteUIBgDockingMaterial;                                
	class UBlockyMenuWidget*                           MenuWidget;                                               
	class UBlockyCategoryWidget*                       CategoryWidget;                                           
	class UBlockyBlockWindowWidget*                    BlockWindowWidget;                                        
	class UBlockyLogWidget*                            BlockyLogWidget;                                          
	class UPresetDesc*                                 PresetResetFollower;                                      
	TArray<class UWidget*>                             ShortcutBlockingWidgets;                                  
	float                                              PresetTagTitleY;                                          
	unsigned char                                      UnknownData03[0x4];                                       
	class UBlockyMenuItemWidget*                       CurrentMenuItemWidget;                                    
	TMap<struct FString, class UBlockyBlockListItemObject*> TypeFilterItems;                                          
	TMap<struct FString, class UBlockyBlockListItemObject*> TypeFilterArrayItems;                                     
	TArray<class UBlockyMenuItemObject_TypeFilter*>    TypeFilterMenus;                                          
	TArray<class UBlockyCategoryItemObject*>           CurrentSlotPresetCategorys;                               
	unsigned char                                      UnknownData04[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyEditor");
		return pStaticClass;
	}


	void UpdateTriggerGroups();
	void UpdateSearchPanel();
	void UpdateSearchButtonVisible(bool IsShowSearchButton);
	bool TryBackToVariableOrCustomPanel();
	void ShowPresetAnimation(class UPresetDesc* PresetDesc);
	void SetWidgetBPToShow(class UUserWidget* Widget, bool HideCategory);
	void SetMenuWidget(class UBlockyMenuWidget* Widget);
	void SetCategoryWidget(class UBlockyCategoryWidget* Widget);
	void SetBlockLogWidget(class UBlockyLogWidget* Widget);
	void SetBlockListWidget(class UBlockyBlockWindowWidget* Widget);
	void ResetAsyncWidgetHandleMap();
	void OnUpdateUndoRedoState(bool HasUndoCommands, bool HasRedoCommands);
	void OnShowTips(const struct FText& Tips);
	void OnShowPresetPanelHandler(bool IsShow);
	void LoadWidgetAsync(const struct FString& WidgetName, const struct FString& WidgetPath, const struct FScriptDelegate& Delegate);
	class UMaterialInterface* LoadMaterialInterface(const struct FString& AnimationPath);
	void IsShowExplain(bool bFlag);
	void IsCloseComment(bool bFlag);
	float GetSaveCooldownDuration();
	struct FString GetLocaleString(const struct FString& KeyString);
	class UBlockyMenuItemObject* GetCurrentMenuItem();
	void CollectListItem(bool bCollect);
	void BP_OnShowTools(TArray<EBlockyBPToolButtonType> ButtonTypes);
	void BP_OnBlockyEditorShortcut(EBlockyEditorShortcutKey ShortCutKey);
	void AddChildBluckyWidget(class UUserWidget* Widget);
};




class UBlockyEnumWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           
	unsigned char                                      UnknownData00[0x18];                                      
	class UBlockyGraphData*                            HostWidget;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyEnumWidget");
		return pStaticClass;
	}


	void SetShowDisplayItems(TMap<struct FName, struct FText> Names);
	void SetResultWithName(const struct FName& Name);
};




class UBlockyFloatWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           
	unsigned char                                      UnknownData00[0x18];                                      
	class UBlockyGraphData*                            HostWidget;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyFloatWidget");
		return pStaticClass;
	}


	void SetText(const struct FString& Value);
	void SetResult(const struct FString& Value);
	struct FString CleanNumber(const struct FString& Input);
};




class UBlockyGraphWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	class UBlockyGraphData*                            BlockyGraphData;                                          
	class UBlockyEditor*                               HostEditor;                                               
	struct FGraphSettingMap                            GraphSettingsMap;                                         
	TArray<int>                                        defaultTags;                                              
	bool                                               IsOnTouch;                                                
	bool                                               IsMoveGraphOnly;                                          
	unsigned char                                      UnknownData01[0x6];                                       
	struct FScriptDelegate                             OnAsyncLoadBinCompletedHandle;                            
	class UDeleteBlockUI*                              DeleteBlockUI;                                            
	bool                                               IsShowSaveTemplate;                                       
	unsigned char                                      UnknownData02[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyGraphWidget");
		return pStaticClass;
	}


	struct FVector2D ViewPosToCanvasPos(const struct FVector2D& Postion);
	TArray<struct FText> UpdateVariableItemNames();
	void UpdateTriggerGroups();
	TArray<struct FText> UpdateCustomItemNames();
	void UpdateBlockByTag();
	void Undo();
	bool TryBackToVariableOrCustomPanel();
	void ShowTips(const struct FText& Tips);
	void ShowPresetParamPop();
	void SetViewScale(float InScale);
	void SetViewPosition(const struct FVector2D& ViewPosition);
	void SetTagsSetting(TArray<int>* newDefaultTags, struct FGraphSettingMap* newGraphSettingsMap);
	void SetShowSaveTemplateVar(bool IsShow);
	void SetMenuWidget(class UBlockyMenuWidget* Widget);
	void SetGraphCanMove(bool isCanMove);
	void SetCurrentSubGraph(const struct FString& InName);
	void SetCategoryWidget(class UBlockyCategoryWidget* Widget);
	class UTexture2D* SetCaptureScreenShot(const struct FVector2D& screenRect);
	void SetBlockLogWidget(class UBlockyLogWidget* Widget);
	void SetBlockListWidget(class UBlockyBlockWindowWidget* Widget);
	struct FString SaveGraphToJsonText();
	TArray<unsigned char> SaveGraphToBin();
	struct FString SaveGlobalVarToJsonText();
	TArray<unsigned char> SaveGlobalVarToBin();
	void SaveCustom();
	TArray<unsigned char> SaveBlockyGraphToTemplate(class UBlockyGraph* BlockyGraph);
	void Save();
	void ReturnToPreviewGraph();
	void ReturnToMainGraph();
	void ResetMenuItems();
	void ResetJsonChangedFlag();
	void ResetGraph();
	void RemoveSubGraph(const struct FString& InName);
	void RefreshFont();
	void ReEditVariable(int Index);
	void Redo();
	void QuoteCustom();
	void Quote();
	void Paste();
	void OnCloseItemList();
	void OnAsyncLoadGraphBinCompleted();
	void LoadTemplateToBlockyGraph_Test(TArray<unsigned char> TemplateAst, bool IsCreateNewGraph, bool IsLoadPresetsInGraph);
	void LoadTemplateToBlockyGraph(bool IsCreateNewGraph, bool IsLoadPresetsInGraph, TArray<unsigned char>* TemplateAst);
	void LoadGraphFromJsonText(const struct FString& JsonStr);
	void LoadGraphFromBin(TArray<unsigned char> JsonStr);
	void LoadGlobalVarFromJsonText(const struct FString& JsonStr);
	void LoadGlobalVarFromBin(TArray<unsigned char> JsonStr);
	void Load();
	bool IsViewOverlap(const struct FVector2D& Position, const struct FVector2D& Size);
	bool IsFirstGraph();
	void GM_GenerateAllBlocks(int CombinedBlocksNum, int GraphBlocksNum, bool bNeedResetGraph);
	void GM_AddBlocks(TArray<struct FString> typeNames, int X, int Y);
	struct FVector2D GetViewSize();
	float GetViewScale();
	struct FVector2D GetViewPosition();
	bool GetJsonChangedFlag();
	void GetGraphSettingByName(const struct FString& GraphName, bool* CanCopy, bool* CanReName, bool* CanDel, bool* CanSave, TArray<int>* Tags);
	void GetDeleteBlockUIRect(float InRectWidth);
	class UBlockyGraph* GetCurrentGraph();
	void FocusTo(class UBlockBase* TargetBlock);
	void FinishVariableEdit(bool bSaveVar, bool bReEdit);
	void FinishCustomEdit(bool bSave);
	void FinishBlockSetting(bool bSave);
	void Eject();
	void EditCustumBlockGraph();
	void EditCustom();
	void Disable();
	void DeleteVariableListItem(int Index);
	void DeleteSelected();
	void DeleteCustom();
	void DefineCustom();
	void Define();
	void Copy();
	void Comment();
	void CollectListItem(bool bCollect);
	void Clone();
	void ClearUndoRedoDatas();
	void ClearTextSizeCache();
	void ClearLog();
	struct FVector2D CanvasPosToViewPos(const struct FVector2D& Postion);
	void BlockyLog_Show(EBlockyLogMsgMode Mode, class UBlockBase* BlockSource, const struct FString& SlotID, const struct FString& Info);
	void AsyncLoadGraphFromBin(TArray<unsigned char> GraphBinContent, TArray<unsigned char> GlobalVarBinContent);
	void AddSubGraph(const struct FString& InName, const struct FString& InType);
	class UBlockyGraph* AddGraph(const struct FString& InName, const struct FString& InType);
	void AddGlobalComment();
};




class UBlockyGroupItemWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyGroupItemWidget");
		return pStaticClass;
	}

};




class UBlockyGroupWidget : public UUserWidget
{
public:
	class UButton*                                     BT_AddGroupItem;                                          
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyGroupWidget");
		return pStaticClass;
	}


	class UPanelWidget* GetGroupContainer();
	void AddGroupItem();
};




class UBlockyIntegerWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           
	unsigned char                                      UnknownData00[0x18];                                      
	class UBlockyGraphData*                            HostWidget;                                               
	bool                                               NegativeEnable;                                           
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyIntegerWidget");
		return pStaticClass;
	}


	void SetText(const struct FString& Value);
	void SetResult(const struct FString& Value);
	void SetNegativeEnable(bool Enable);
};




class UBlockyLogItemWidget : public UUserWidget
{
public:
	class UBlockyGraphData*                            GraphWidget;                                              
	class UBlockyLogWidget*                            LogWidget;                                                
	class UBlockBase*                                  BlockBase;                                                
	struct FString                                     BlockSlotId;                                              
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLogItemWidget");
		return pStaticClass;
	}


	void SetShowWarn(const struct FString& Warn);
	void SetShowInfo(const struct FString& Info);
	void SetShowError(const struct FString& Error);
	void SetActiveWidgetIndex(int Index);
	void OnClickBtnToBlock();
	class UTextBlock* GetTextBlockWarn();
	class UTextBlock* GetTextBlockInfo();
	class UTextBlock* GetTextBlockError();
	int GetActiveWidgetIndex();
};




class UBlockyLogWidget : public UUserWidget
{
public:
	class UBlockyGraphData*                            GraphWidget;                                              
	class UClass*                                      LogItemWidgetType;                                        
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLogWidget");
		return pStaticClass;
	}


	void ShowLog();
	void SetBtnWarnText(const struct FString& Warn);
	void SetBtnInfoText(const struct FString& Info);
	void SetBtnErrorText(const struct FString& Error);
	void OnClickWarnShow();
	void OnClickInfoShow();
	void OnClickErrorShow();
	void OnClickAllShow();
	class UPanelWidget* GetLogContainer();
	float GetItemTextWidth();
	struct FString GetBtnWarnText();
	struct FString GetBtnInfoText();
	struct FString GetBtnErrorText();
};




class UBlockyLuaLoopScrollBase : public UScrollBox
{
public:
	bool                                               bDelayLoad;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              BlockyLuaEdgePadding;                                     
	struct FScriptMulticastDelegate                    OnRefreshItem;                                            
	struct FScriptMulticastDelegate                    OnItemCreated;                                            
	struct FScriptMulticastDelegate                    OnChangeData;                                             
	unsigned char                                      UnknownData01[0xD0];                                      
	class UClass*                                      itemType;                                                 
	unsigned char                                      UnknownData02[0x10];                                      
	class UCanvasPanel*                                CanvasPanel;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollBase");
		return pStaticClass;
	}


	void UserScrolled(float Offset);
	void SetItemType(class UClass* _ItemType);
	bool SetItemCount(int Count);
	void RemoveItem(int Index);
	bool RefreshItem(int Index);
	void RefreshAllItems();
	void Push();
	void Pop();
	void OnRefreshItem__DelegateSignature(class UWidget* Item, int Index);
	void OnItemCreated__DelegateSignature(class UWidget* Item, int Index);
	void OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key);
	void InsertItem(int Index);
	int GetWidgetIndex(class UWidget* Item);
	int GetItemCount();
	class UWidget* GetIndexOfWidget(int Index);
	bool ChangeData(int Index, const struct FString& Key);
	void CallTick(float DeltaTime);
	void AutoSize(bool bAutoSize);
};




class UBlockyLuaLoopScrollBase_MultiItem : public UScrollBox
{
public:
	bool                                               bDelayLoad;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              BlockyLuaEdgePadding;                                     
	struct FScriptMulticastDelegate                    OnRefreshItem;                                            
	struct FScriptMulticastDelegate                    OnItemCreated;                                            
	struct FScriptMulticastDelegate                    OnChangeData;                                             
	unsigned char                                      UnknownData01[0x130];                                     
	class UCanvasPanel*                                CanvasPanel;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollBase_MultiItem");
		return pStaticClass;
	}


	void UserScrolled(float Offset);
	void SetItemType(TArray<class UClass*> TypeArray);
	bool SetItemCount(int Count);
	void RemoveItem(int Index);
	bool RefreshItem(int Index);
	void RefreshAllItems();
	void Push(class UClass* Type);
	void Pop();
	void OnRefreshItem__DelegateSignature(class UWidget* Item, int Index);
	void OnItemCreated__DelegateSignature(class UWidget* Item, int Index);
	void OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key);
	void InsertItem(int Index, class UClass* Type);
	int GetWidgetIndex(class UWidget* Item);
	int GetItemCount();
	class UWidget* GetIndexOfWidget(int Index);
	void ClearItems();
	bool ChangeData(int Index, const struct FString& Key);
	void CallTick(float DeltaTime);
	void AutoSize(bool bAutoSize);
};




class UBlockyLuaLoopScrollBox : public UBlockyLuaLoopScrollBase
{
public:
	float                                              ItemSize;                                                 
	float                                              Padding;                                                  
	bool                                               bAlignMagnetic;                                           
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollBox");
		return pStaticClass;
	}


	void ScrollToItem(int Index);
};




class UBlockyLuaLoopScrollBox_MultiItem : public UBlockyLuaLoopScrollBase_MultiItem
{
public:
	TMap<class UClass*, float>                         WidgetSizeMap;                                            
	TMap<class UClass*, float>                         WidgetPaddingMap;                                         
	bool                                               bAlignMagnetic;                                           
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollBox_MultiItem");
		return pStaticClass;
	}


	void ScrollToItem(int Index);
	void BP_UserScrolled(float Offset);
	bool BP_PreventScrollOutOfSize(bool bScroll);
	float BP_GetContentSize();
};




class UBlockyLuaLoopScrollGrid : public UBlockyLuaLoopScrollBase
{
public:
	struct FVector2D                                   ItemSize;                                                 
	struct FVector2D                                   Padding;                                                  
	bool                                               bAlignGrid;                                               
	bool                                               bAlignAnimation;                                          
	unsigned char                                      UnknownData00[0x16];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLuaLoopScrollGrid");
		return pStaticClass;
	}


	void ScrollToItem(int Index);
};




class UBlockyMenuItemWidget : public UUserWidget
{
public:
	int                                                Index;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FText                                       Name;                                                     
	class UBlockyMenuWidget*                           HostWidget;                                               
	class UBlockyCategoryItemWidget*                   CurrentCategoryItemWidget;                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyMenuItemWidget");
		return pStaticClass;
	}


	void SetSelected(bool IsSelected);
	void OnClick();
	void InitWithItemObject(class UBlockyMenuItemObject* Item);
	void InitTextToShow();
};




class UBlockyMenuWidget : public UUserWidget
{
public:
	class UClass*                                      MenuItemWidgetType;                                       
	unsigned char                                      UnknownData00[0x10];                                      
	class UBlockyGraphData*                            GraphWidget;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyMenuWidget");
		return pStaticClass;
	}


	bool SelectMenu(class UBlockyMenuItemWidget* MenuItemWidget);
	void OnAddMenuItemWidget(class UBlockyMenuItemWidget* MenuItemWidget);
	class UPanelWidget* GetMenuContainer();
};




class UBlockyPresetItemWidget : public UUserWidget
{
public:
	class UPresetDesc*                                 Desc;                                                     
	class UBlockyPresetWidget*                         Host;                                                     
	class UBlockySearchWidget*                         SearchHost;                                               
	class UScrollBox*                                  SubScrollBox;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyPresetItemWidget");
		return pStaticClass;
	}


	void SetPresetDesc_BP(class UPresetDesc* PresetDesc);
	void SetImageShowIcon(class UImage* Image);
	struct FString GetPresetDescCode();
};




class UBlockyPresetWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           
	unsigned char                                      UnknownData00[0x18];                                      
	class UBlockyEditor*                               HostWidget;                                               
	class UButton*                                     Button_FilterAction;                                      
	struct FString                                     SlotTypeName;                                             
	TMap<int, struct FIntArrayWrapper>                 CurrentTages;                                             
	TArray<struct FString>                             CurrentTagesStr;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyPresetWidget");
		return pStaticClass;
	}


	void SetResult(class UPresetDesc* Value);
	void SetPresets(TArray<class UPresetDesc*> Presets);
	void ResetMenuItem();
	struct FString OnFilterBtnClick();
	void LoopScrollBoxFilterStr(const struct FString& filter);
	void LoopScrollBoxFilterByTag(TMap<int, struct FIntArrayWrapper> Tags, TArray<struct FString> curTagsStr);
	void InitPresets();
	class UPresetDesc* GetPresetDesc();
	class UScrollBox* GetLoopScrollBox();
	bool GetIsIconWidget();
	void ClearSearchText();
};




class UBlockyRichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     
	struct FScriptDelegate                             TextDelegate;                                             
	struct FSlateFontInfo                              Font;                                                     
	struct FLinearColor                                Color;                                                    
	TArray<class URichTextBlockDecorator*>             Decorators;                                               
	unsigned char                                      UnknownData00[0x260];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyRichTextBlock");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	struct FText GetText();
};




class UBlockySearchResultPanel : public UUserWidget
{
public:
	float                                              DrawBottomDelta;                                          
	float                                              HorizontalMoveCheckDelta;                                 
	float                                              VerticalMoveCheckDelta;                                   
	float                                              WhileRefreshBlockSizeY;                                   
	bool                                               IsDragging;                                               
	bool                                               IsHorizontalMove;                                         
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector2D                                   TouchStartPosition;                                       
	struct FVector2D                                   PointAtOffset;                                            
	int                                                CurrentCategoryIndex;                                     
	int                                                YOffset;                                                  
	int                                                TotalHeight_Blocks;                                       
	int                                                TotalHeight_Graphs;                                       
	int                                                TotalHeight_GraphsTitle;                                  
	int                                                ViewHeight;                                               
	int                                                totalHeight;                                              
	bool                                               bNeedUpdateTotalHeight_Graphs;                            
	unsigned char                                      UnknownData01[0x7];                                       
	class UBlockyBlockListItemObject*                  ListItemAtPoint;                                          
	TWeakObjectPtr<class UBlockyMenuItemObject_Search> FoundResults;                                             
	class USpacer*                                     BlocksContainer;                                          
	class UBlockyLuaLoopScrollBox_MultiItem*           GraphBlocksContainer;                                     
	class UClass*                                      GraphBlocksWidgetType;                                    
	class UClass*                                      GraphItemBlockWidgetType;                                 
	class UBlockyGraphData*                            GraphData;                                                
	class UScrollBox*                                  TabContainer;                                             
	bool                                               bShowComment;                                             
	unsigned char                                      UnknownData02[0x3];                                       
	TWeakObjectPtr<class UBlockyGraph>                 LastSelectedGraph;                                        
	TWeakObjectPtr<class UBlockBase>                   LastSelectedBlock;                                        
	unsigned char                                      UnknownData03[0x4];                                       
	TArray<class UBlockyGraph*>                        CollapsedGraphs;                                          
	TArray<class UObject*>                             ItemObjectList;                                           
	ESearchResultVisibleType                           SearchResultVisibleType;                                  
	unsigned char                                      UnknownData04[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchResultPanel");
		return pStaticClass;
	}


	void UpdateGraphContentSize();
	void ToggleGraphResults(class UBlockyGraph* InGraph);
	void ScrollToCategory(int CategoryIndex, bool GraphCategory);
	void RefreshGraphBlocksWidgets();
	void OnGraphBlocksCreated(class UWidget* Widget, int Index);
	void FocusToBlock(class UBlockyGraph* InGraph, class UBlockBase* InBlock);
	void FilterOutSearchResultToShow(ESearchResultVisibleType VisibleType);
	bool BP_ScrollYOffset(int DeltaY);
};




class UBlockySearchResults_GraphItemWidget : public UUserWidget
{
public:
	struct FVector2D                                   IconSize;                                                 
	struct FString                                     SearchingStr;                                             
	struct FString                                     BlockDisplayString;                                       
	TWeakObjectPtr<class UBlockyGraph>                 BlockGraph;                                               
	TWeakObjectPtr<class UBlockBase>                   bLock;                                                    
	class UBlockySearchResultPanel*                    HostResultPanel;                                          
	bool                                               bIsDragging;                                              
	unsigned char                                      UnknownData00[0x7];                                       
	class UImage*                                      BlockIcon;                                                
	class UBlockyRichTextBlock*                        TextBlock_BlockDisplay;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchResults_GraphItemWidget");
		return pStaticClass;
	}


	void OnClickedBlock();
	void OnBlockWidgetSelected(bool bSelected);
	struct FString MarkSearchingStringWithColor(const struct FString& InputString, const struct FString& Target, const struct FString& ColorString);
	bool IsSearchUseCase();
	struct FString GetKeyWordColor();
};




class UBlockySearchResults_GraphWidget : public UUserWidget
{
public:
	class UClass*                                      GraphBlockItemWidgetType;                                 
	struct FString                                     GraphDisplayName;                                         
	class UBlockySearchResultPanel*                    HostResultPanel;                                          
	TWeakObjectPtr<class UBlockyGraph>                 BlockGraph;                                               
	bool                                               bIsDragging;                                              
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchResults_GraphWidget");
		return pStaticClass;
	}


	void ToggleGraphResultsCollapse();
	void OnSetGraphResultsCollapse(bool InCollapse);
	void OnRefreshDisplayNameView(const struct FString& InGraphDisplayName);
};




class UBlockySearchResultsTab : public UUserWidget
{
public:
	bool                                               IsGraphCategory;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                TabIndex;                                                 
	struct FText                                       TabDisplayName;                                           
	bool                                               IsPresetTab;                                              
	unsigned char                                      UnknownData01[0x7];                                       
	class UBlockySearchWidget*                         SearchWidget;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchResultsTab");
		return pStaticClass;
	}


	void OnSetSelected(bool bSelected);
};




class UBlockySearchWidget : public UUserWidget
{
public:
	TMap<class UBlockyMenuItemObject*, bool>           MenuItemVisibility;                                       
	TMap<class UBlockyCategoryItemObject*, bool>       CategoriesVisibility;                                     
	TMap<class UBlockyBlockListItemObject*, bool>      BlockItemsVisibility;                                     
	unsigned char                                      UnknownData00[0x8];                                       
	TArray<class UBlockyCategoryItemObject*>           PresetCategorysResults;                                   
	TArray<class UPresetDesc*>                         ResultPresets;                                            
	TArray<struct FString>                             PresetsCategorys;                                         
	bool                                               IsPresetsSearch;                                          
	unsigned char                                      UnknownData01[0x7];                                       
	class UScrollBox*                                  TabContainer;                                             
	class UBlockySearchResultPanel*                    SearchResultPanel;                                        
	struct FText                                       ContentTabText;                                           
	class UClass*                                      SearchResultsTabType;                                     
	class UBlockyMenuItemObject_Search*                SearchResults;                                            
	class UBlockyGraphWidget*                          HostGraphWidget;                                          
	ESearchResultVisibleType                           SearchResultVisibleType;                                  
	unsigned char                                      UnknownData02[0x7];                                       
	TArray<struct FString>                             SearchHistories;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySearchWidget");
		return pStaticClass;
	}


	void StoreLastSelectedMenuItems(bool OverrideLastData);
	bool ShouldCommitString(const struct FText& Value);
	void SetSearchHistories(TArray<struct FString> searchArr);
	void SetResult(class UPresetDesc* Value);
	void SetGraphWidget(class UBlockyGraphWidget* InGraphWidget);
	bool SearchMatchingResults(const struct FString& SearchStr);
	void ScrollToTabContent(class UBlockySearchResultsTab* NewSelectedTab);
	void SaveSearchHistories();
	void RevertLastSelectedMenuItem();
	void RefreshTabContainerView();
	void RefreshSearchResultsView();
	void LoadSearchHistories();
	bool IsSearchUseCase();
	void InitLoopScroll(class UBlockyLoopScrollBox* ScrollBox, TArray<class UPresetDesc*> arrayPresets);
	bool HasMenuSelected();
	bool HasAnySearchResults();
	bool HasAnyHistory();
	int GetTotalSearchedNums();
	TArray<struct FString> GetSearchHistories();
	int GetPresetsSearchedNums();
	class UPresetDesc* GetPresetDesc();
	int GetHistoryStoreNum();
	int GetHistoryNums();
	int GetGraphSearchedNums();
	int GetBlockSearchedNums();
	void FilterSearchResultVisible(ESearchResultVisibleType InSearchResultVisibleType);
	void EmptyListItemSeleceted();
	void DoSearching(const struct FString& SearchStr);
	void ClearTabSelected();
	void ClearSearchHistories();
	void ClearMenuSelectionStore();
	void AddSearchHistory(const struct FString& NewHistory);
};




class UBlockySelectFromSceneWidget : public UUserWidget
{
public:
	class UBlockBase*                                  LinkedSlotHost;                                           
	unsigned char                                      UnknownData00[0x18];                                      
	class UBlockyGraphData*                            HostWidget;                                               
	class UPresetDesc*                                 PresetDesc;                                               
	TArray<class UObjectDesc*>                         OtherPresetDescs;                                         
	struct FText                                       DefaultShowName;                                          
	class UObjectDesc*                                 ObjectDesc;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockySelectFromSceneWidget");
		return pStaticClass;
	}


	void SetPreset(class UPresetDesc* Value);
	void SetObjectDesc(class UObjectDesc* Value);
	bool SetImageShowIcon(class UImage* Image);
	void OnReceiveCustomSelectionResult(class UObjectDesc* Value);
	void CallSelectScenePreset();
};




class UBlockyStringWidget : public UUserWidget
{
public:
	TMap<int, struct FSlotData>                        ResultSlotsMap;                                           
	class UBlockBase*                                  LinkedSlotHost;                                           
	unsigned char                                      UnknownData00[0x18];                                      
	class UBlockyGraphData*                            HostWidget;                                               
	struct FVector2D                                   TextBoxSize;                                              
	bool                                               IsFinishedInput;                                          
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyStringWidget");
		return pStaticClass;
	}


	struct FText StrDelEnt(const struct FText& Value);
	void StoreSlotDataWithSerialId(int SerialId);
	void SetText(const struct FString& Value);
	void SetResult(const struct FString& Value, int SerialId);
};




class UCustomizeEditableText : public UEditableText
{
public:
	unsigned char                                      UnknownData00[0x90];                                      
	struct FScriptMulticastDelegate                    OnTextPreCommitted;                                       
	struct FScriptMulticastDelegate                    OnTextReceiveCommitted;                                   
	int                                                TextCountLimit;                                           
	int                                                SerialId;                                                 
	bool                                               LimitEmojiInput;                                          
	bool                                               IsReceiveCheckStringResult;                               
	unsigned char                                      UnknownData01[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.CustomizeEditableText");
		return pStaticClass;
	}


	void SetNewText(const struct FText& InText);
	void ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data);
	void OpenKeyBoard();
	void OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId);
	struct FText GetValidText();
};




class UCustomizeEditableTextBox : public UEditableTextBox
{
public:
	unsigned char                                      UnknownData00[0x90];                                      
	struct FScriptMulticastDelegate                    OnTextPreCommitted;                                       
	struct FScriptMulticastDelegate                    OnTextReceiveCommitted;                                   
	int                                                TextCountLimit;                                           
	int                                                SerialId;                                                 
	bool                                               LimitEmojiInput;                                          
	bool                                               IsReceiveCheckStringResult;                               
	unsigned char                                      UnknownData01[0x6];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.CustomizeEditableTextBox");
		return pStaticClass;
	}


	void SetNewText(const struct FText& InText);
	void ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data);
	void OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId);
	struct FText GetValidText();
};




class UCustomizeMultiLineEditableTextBox : public UMultiLineEditableTextBox
{
public:
	unsigned char                                      UnknownData00[0x90];                                      
	struct FScriptMulticastDelegate                    OnTextPreCommitted;                                       
	struct FScriptMulticastDelegate                    OnTextReceiveCommitted;                                   
	int                                                TextCountLimit;                                           
	int                                                SerialId;                                                 
	bool                                               LimitEmojiInput;                                          
	bool                                               bStripLineBreaks;                                         
	bool                                               IsReceiveCheckStringResult;                               
	unsigned char                                      UnknownData01[0x5];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.CustomizeMultiLineEditableTextBox");
		return pStaticClass;
	}


	void SetNewText(const struct FText& InText);
	void ReceiveCheckStringResultProcess(bool Result, const struct FString& ValidString, const struct FCheckStringHandleData& Data);
	void OnMultiLineEditableTextBoxCommittedWithSerialIdEvent__DelegateSignature(const struct FText& CommittedText, TEnumAsByte<ETextCommit> CommitMethod, int SerialId);
	struct FText GetValidText();
	void CheckStringValidProcess(const struct FText& InText, TEnumAsByte<ETextCommit> CommitMethod);
};




class UDeleteBlockUI : public UObject
{
public:
	struct FBlockRect                                  rect;                                                     
	unsigned char                                      UnknownData00[0x10];                                      
	class UBrushData*                                  BrushBG;                                                  
	unsigned char                                      UnknownData01[0xC];                                       
	bool                                               IsInArrange;                                              
	unsigned char                                      UnknownData02[0xB];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.DeleteBlockUI");
		return pStaticClass;
	}

};




class UBlockyAutoScrollBox : public UScrollBox
{
public:
	EBLOCKYLUA_AUTO_SCROLL_TYPE                        AutoScrollType;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              RollSpeed;                                                
	float                                              StayTimeWhenStart;                                        
	float                                              StayTimeWhenEnd;                                          
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyAutoScrollBox");
		return pStaticClass;
	}


	void Tick(float DeltaTime);
	void SetTextPadding(class UTextBlock* Text, class UScrollBoxSlot* boxSlot, float totalLength);
};




class UBlockyLoopScrollBase : public UScrollBox
{
public:
	bool                                               bDelayLoad;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              BlockyLuaEdgePadding;                                     
	struct FScriptMulticastDelegate                    OnRefreshItem;                                            
	struct FScriptMulticastDelegate                    OnItemCreated;                                            
	struct FScriptMulticastDelegate                    OnChangeData;                                             
	unsigned char                                      UnknownData01[0xE8];                                      
	bool                                               bViewSizeInit;                                            
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              LastPresetTitleOffset;                                    
	unsigned char                                      UnknownData03[0x20];                                      
	class UBlockyPresetWidget*                         Host;                                                     
	class UBlockySearchWidget*                         SearchHost;                                               
	unsigned char                                      UnknownData04[0x8];                                       
	class UClass*                                      ItemString;                                               
	class UClass*                                      ItemIcon;                                                 
	unsigned char                                      UnknownData05[0x10];                                      
	class UCanvasPanel*                                CanvasPanel;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLoopScrollBase");
		return pStaticClass;
	}


	void UserScrolled(float Offset);
	void Tick(float DeltaTime);
	void SetItemType(class UClass* _ItemType);
	bool SetItemCount(int Count);
	void RemoveItem(int Index);
	bool RefreshItem(int Index);
	void RefreshAllItems();
	void OnRefreshItem__DelegateSignature(class UWidget* Item, int Index);
	void OnItemCreated__DelegateSignature(class UWidget* Item, int Index);
	void OnChangeData__DelegateSignature(class UWidget* Item, int Index, const struct FString& Key);
	void LoopScrollBoxFilterStr(const struct FString& filter);
	void LoopScrollBoxFilterByTag(TMap<int, struct FIntArrayWrapper> Tags);
	void InsertItem(int Index);
	int GetWidgetIndex(class UWidget* Item);
	TArray<class UWidget*> GetItems();
	int GetItemCount();
	class UWidget* GetIndexOfWidget(int Index);
	bool ChangeData(int Index, const struct FString& Key);
	void AutoSize(bool bAutoSize);
};




class UBlockyLoopScrollBox : public UBlockyLoopScrollBase
{
public:
	struct FVector2D                                   StringItemSize;                                           
	struct FVector2D                                   IconItemSize;                                             
	struct FVector2D                                   StringItemPadding;                                        
	struct FVector2D                                   IconItemPadding;                                          
	bool                                               bAlignMagnetic;                                           
	unsigned char                                      UnknownData00[0x17];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLoopScrollBox");
		return pStaticClass;
	}


	void Tick(float DeltaTime);
	void ScrollToItem(int Index);
};




class UBlockyLoopScrollGrid : public UBlockyLoopScrollBase
{
public:
	struct FVector2D                                   ItemSize;                                                 
	struct FVector2D                                   Padding;                                                  
	bool                                               bAlignGrid;                                               
	bool                                               bAlignAnimation;                                          
	unsigned char                                      UnknownData00[0x16];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLua.BlockyLoopScrollGrid");
		return pStaticClass;
	}


	void ScrollToItem(int Index);
};


}

