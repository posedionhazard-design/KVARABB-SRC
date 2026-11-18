#pragma once


 
namespace SDK
{






class UBlockBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	class UBlockBase*                                  ParentBlock;                                              
	class UBlockBase*                                  CommentBlock;                                             
	class UBlockyGraph*                                HostGraph;                                                
	unsigned char                                      UnknownData01[0x28];                                      
	class UBlockyGraphData*                            HostWidget;                                               
	unsigned char                                      UnknownData02[0x10];                                      
	class UFunctionDesc*                               FunctionDesc;                                             
	struct FString                                     DisplayName;                                              
	unsigned char                                      UnknownData03[0x148];                                     
	struct FString                                     QuoteVariableName;                                        
	bool                                               bIsDisable;                                               
	unsigned char                                      UnknownData04[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockBase");
		return pStaticClass;
	}


	void SetIsDisable(bool Disable);
	static struct FString MakeSequentialDisplayName(class UBlockyGraphData* GraphData, const struct FString& BaseName);
	bool IsEvent();
	struct FVector2D GetCenterPos();
	void AssignSequentialDisplayName(class UBlockyGraphData* GraphData, const struct FString& BaseName);
};




class UExecuteable : public UBlockBase
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     
	TMap<struct FString, struct FBlockParam>           BlockParams;                                              
	TArray<class UNamedVar*>                           FuncVars;                                                 
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.Executeable");
		return pStaticClass;
	}


	bool SupportFuncVar();
	void ReEditFuncVar(class UNamedVar* var);
	void DeleteFuncVar(class UNamedVar* var);
	void CreateFuncVar();
};




class UAddArrayElement : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0x330];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.AddArrayElement");
		return pStaticClass;
	}

};




class UArithmetic : public UBlockBase
{
public:
	unsigned char                                      UnknownData00[0x528];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.Arithmetic");
		return pStaticClass;
	}

};




class UArrayLength : public UBlockBase
{
public:
	unsigned char                                      UnknownData00[0x198];                                     
	class UBrushData*                                  BrushBGSelected;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ArrayLength");
		return pStaticClass;
	}

};




class UExpressionBase : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ExpressionBase");
		return pStaticClass;
	}


	static void ReleaseExpression(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateExpressionBase();
};




class UArrayLengthExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ArrayLengthExpression");
		return pStaticClass;
	}


	static void SetTarget(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Target);
	static struct FBlockyLuaHandle GetTarget(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateArrayLengthExpression();
};




class UVarBase : public UBlockBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.VarBase");
		return pStaticClass;
	}

};




class UNamedVar : public UVarBase
{
public:
	struct FText                                       Name;                                                     
	unsigned char                                      UnknownData00[0x8];                                       
	struct FString                                     NameInCode;                                               
	bool                                               IsValueValid;                                             
	bool                                               IsSourceValid;                                            
	bool                                               IsInitColorLoad;                                          
	unsigned char                                      UnknownData01[0x5];                                       
	TArray<class UNamedVar*>                           CopiedChildVarCache;                                      
	unsigned char                                      UnknownData02[0x1D8];                                     
	bool                                               bIsArray;                                                 
	unsigned char                                      UnknownData03[0x7];                                       
	struct FString                                     InitValueString;                                          
	class UColorDesc*                                  ColorDesc;                                                
	TArray<class UColorDesc*>                          ArrayColorDesc;                                           
	int                                                NowColorArrayIdx;                                         
	bool                                               NowColorIsArray;                                          
	unsigned char                                      UnknownData04[0x3];                                       
	class UNamedVar*                                   Source;                                                   
	unsigned char                                      UnknownData05[0x40];                                      
	class UBrushData*                                  CopyBrush;                                                
	unsigned char                                      UnknownData06[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.NamedVar");
		return pStaticClass;
	}


	void UpdateColor(const struct FLinearColor& Color);
	void SetNameVarColor(const struct FLinearColor& Color);
	void SetIsArray(bool IsArray);
	void SetInitValueString(const struct FString& Value);
	void SetDefiner(class UVarDefiner* Definer);
	void SetAccessType(TEnumAsByte<EBlockyAccessType> Access);
	bool IsGlobalVar();
	bool IsCustomColor();
	bool IsArray();
	void InitColorDesc();
	class UColorDesc* GetNameVarColorDesc(int idx, bool IsArray);
	struct FLinearColor GetNameVarColor(int idx, bool IsArray);
	struct FString GetInitValueString();
	class UVarDefiner* GetDefiner();
	struct FString GetColorStr(int idx, bool IsArray);
	TEnumAsByte<EBlockyAccessType> GetAccessType();
	void CallCustomSelectObject(int idx, bool IsArray);
	void AddColorToArray();
};




class UArrayNamedVar : public UNamedVar
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ArrayNamedVar");
		return pStaticClass;
	}

};




class UBinaryOperatorExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BinaryOperatorExpression");
		return pStaticClass;
	}


	static void SetWithParentheses(const struct FBlockyLuaHandle& ptr, bool Value);
	static void SetRight(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetOperation(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyBinaryOperation> BlockyOp);
	static void SetLeft(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static bool GetWithParentheses(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetRight(const struct FBlockyLuaHandle& ptr);
	static TEnumAsByte<EBlockyBinaryOperation> GetOperation(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetLeft(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateBinaryOperatorExpression();
};




class UCategoryDefiner : public UObject
{
public:
	struct FString                                     Type;                                                     
	struct FString                                     Menu;                                                     
	TMap<struct FString, struct FString>               ShowNameMap;                                              
	struct FString                                     ShowIcon;                                                 
	struct FString                                     ShowIconSelected;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CategoryDefiner");
		return pStaticClass;
	}


	struct FString GetCurrentLocateShowName();
};




class UBlackboardDefiner : public UCategoryDefiner
{
public:
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlackboardDefiner");
		return pStaticClass;
	}

};




class UBlockyCommandData : public UObject
{
public:
	class UBlockBase*                                  bLock;                                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyCommandData");
		return pStaticClass;
	}

};




class UBlockyAddOrRemoveFromSlotCommandData : public UBlockyCommandData
{
public:
	struct FBlockPoint                                 Position;                                                 
	class UBlockBase*                                  SlotHostBlock;                                            
	unsigned char                                      UnknownData00[0x18];                                      
	class UBlockBase*                                  ConvertBlock;                                             
	unsigned char                                      UnknownData01[0x18];                                      
	class UBlockBase*                                  ReplacedBlock;                                            
	class UBlockBase*                                  ReplacedBlockSlotHostBlock;                               
	unsigned char                                      UnknownData02[0x68];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyAddOrRemoveFromSlotCommandData");
		return pStaticClass;
	}

};




class UBlockyAddOrRemoveFromTopCommandData : public UBlockyCommandData
{
public:
	class UBlockBase*                                  TouchBlock;                                               
	struct FBlockPoint                                 Position;                                                 
	class UBlockBase*                                  TouchBlockHostSlotHost;                                   
	unsigned char                                      UnknownData00[0x18];                                      
	class UBlockBase*                                  SlotHostBlock;                                            
	unsigned char                                      UnknownData01[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyAddOrRemoveFromTopCommandData");
		return pStaticClass;
	}

};




class UBlockyBindCommentCommandData : public UBlockyCommandData
{
public:
	struct FBlockPoint                                 Position;                                                 
	class UCommentBlock*                               CommentBlock;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyBindCommentCommandData");
		return pStaticClass;
	}

};




class UBlockyBlockListItemObject : public UObject
{
public:
	struct FText                                       Name;                                                     
	struct FString                                     KeyName;                                                  
	struct FString                                     SubGraphName;                                             
	struct FString                                     DisplayName;                                              
	struct FString                                     NameInCode;                                               
	struct FBlockPoint                                 Size;                                                     
	struct FBlockPoint                                 TextSize;                                                 
	struct FString                                     BlockClassName;                                           
	unsigned char                                      UnknownData00[0x10];                                      
	bool                                               Visible;                                                  
	bool                                               VisibleByTag;                                             
	unsigned char                                      UnknownData01[0x6];                                       
	class UFunctionDesc*                               FunctionDesc;                                             
	bool                                               bCollect;                                                 
	unsigned char                                      UnknownData02[0x1F];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyBlockListItemObject");
		return pStaticClass;
	}

};




class UBlockyBlockListItemObject_Custom : public UBlockyBlockListItemObject
{
public:
	class UCustomConfig*                               CustomConfig;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyBlockListItemObject_Custom");
		return pStaticClass;
	}

};




class UBlockyBlockListItemObject_Preset : public UBlockyBlockListItemObject
{
public:
	class UPresetDesc*                                 SourcePreset;                                             
	unsigned char                                      UnknownData00[0x1C0];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyBlockListItemObject_Preset");
		return pStaticClass;
	}

};




class UBlockyBlockListItemObject_Variable : public UBlockyBlockListItemObject
{
public:
	class UNamedVar*                                   SourceVar;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyBlockListItemObject_Variable");
		return pStaticClass;
	}

};




class UBlockyCategoryItemObject : public UObject
{
public:
	struct FText                                       Name;                                                     
	struct FString                                     Type;                                                     
	struct FString                                     MenuType;                                                 
	TArray<class UBlockyBlockListItemObject*>          Items;                                                    
	TArray<class UBlockyBlockListItemObject*>          AddItems;                                                 
	TArray<class UBlockyBlockListItemObject*>          DelItems;                                                 
	TArray<class UPresetDesc*>                         Presets;                                                  
	bool                                               Visible;                                                  
	bool                                               VisibleByTag;                                             
	bool                                               ShowNum;                                                  
	unsigned char                                      UnknownData00[0x5];                                       
	class UBrushData*                                  Brush;                                                    
	class UBrushData*                                  BrushSelected;                                            
	unsigned char                                      UnknownData01[0x10];                                      
	class UBlackboardDefiner*                          Blackboard;                                               
	bool                                               bIsPlayerBlackboard;                                      
	bool                                               bIsShowRedDot;                                            
	unsigned char                                      UnknownData02[0x16];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyCategoryItemObject");
		return pStaticClass;
	}


	void SetShowRedDotVar(bool var);
	void InitShowRedDotVar(const struct FString& BlockName);
	struct FSlateBrush GetSelectedIconBrush();
	int GetNewBlockNums();
	struct FSlateBrush GetIconBrush();
};




class UBlockyCommand : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      
	class UBlockyCommandData*                          UndoData;                                                 
	class UBlockyCommandData*                          RedoData;                                                 
	class UBlockyGraph*                                Graph;                                                    
	TArray<class UBlockyCommand*>                      AdditionCommands;                                         
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyCommand");
		return pStaticClass;
	}

};




class UBlockyCustomCommand : public UBlockyCommand
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyCustomCommand");
		return pStaticClass;
	}

};




class UBlockyDeleteCommandData : public UBlockyCommandData
{
public:
	struct FBlockPoint                                 Position;                                                 
	class UBlockBase*                                  NextBlock;                                                
	unsigned char                                      UnknownData00[0x18];                                      
	class UBlockBase*                                  HostSlotBlock;                                            
	unsigned char                                      UnknownData01[0x70];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyDeleteCommandData");
		return pStaticClass;
	}

};




class UBlockyEditorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyEditorInterface");
		return pStaticClass;
	}

};




class UBlockyExporter : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyExporter");
		return pStaticClass;
	}

};




class UBlockyGraph : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	struct FString                                     Name;                                                     
	struct FString                                     Type;                                                     
	struct FString                                     DisplayName;                                              
	struct FString                                     TemplateName;                                             
	struct FString                                     Description;                                              
	struct FString                                     CategoryMode;                                             
	struct FString                                     CapturePath;                                              
	struct FString                                     JsonPath;                                                 
	bool                                               bCanBeDuplicated;                                         
	bool                                               bIsDisable;                                               
	unsigned char                                      UnknownData01[0x6];                                       
	class UBlockyGraphData*                            HostGraphData;                                            
	TArray<class UBlockBase*>                          RootBlocks;                                               
	unsigned char                                      UnknownData02[0x8];                                       
	TArray<class UNamedVar*>                           LocalVars;                                                
	int                                                CurrentVisibleBlockNum;                                   
	unsigned char                                      UnknownData03[0xC];                                       
	class UCanvasRenderTarget2D*                       RenderTarget;                                             
	struct FVector2D                                   ViewPosition;                                             
	struct FBlockPoint                                 ViewSize;                                                 
	float                                              ViewScale;                                                
	unsigned char                                      UnknownData04[0x34];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyGraph");
		return pStaticClass;
	}


	void UpdateCustomBlockName();
	void TryAdjustingBlockIntoView(class UBlockyGraphData* GraphData);
	void SetIsDisable(bool Disable);
	void SaveGraphToFile(const struct FString& Filename, bool IsNewFile);
	bool SaveGraphAsTemplate(class UCustomConfig* CustomConfig, TArray<unsigned char>* OutData);
	bool SaveCsutomGraphAsTemplate(TArray<unsigned char>* OutData);
	void LoadGraphFromTemplate(TArray<unsigned char> Data, bool IsLoadPresetsInGraph);
	bool IsCustomTemplateGraph();
	bool IsCustomGraph();
	bool IsBasicTemplateGraph();
	TArray<class UBlockBase*> GetTriggerItemsByRootBlocks();
	int GetTotalBlockNum();
	class UTexture2D* CaptureScreenWithShot(class UUserWidget* Widget, const struct FVector2D& rect);
	void CaptureScreenShot(class UUserWidget* Widget);
	bool CanSaveAsTemplate(struct FString* OutFailedReason);
	bool CanBeRemove(class UBlockyGraphData* GraphData);
	bool CanBeDuplicated();
	void AssignSequentialDisplayName(class UBlockyGraphData* GraphData, const struct FString& BaseName);
};




class UBlockyGraphWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyGraphWidgetInterface");
		return pStaticClass;
	}

};




class UBlockyGraphData : public UObject
{
public:
	TScriptInterface<class UBlockyGraphWidgetInterface> GraphWidgetInterface;                                     
	struct FVector2D                                   ViewPosition;                                             
	struct FBlockPoint                                 ViewSize;                                                 
	float                                              ViewScale;                                                
	unsigned char                                      UnknownData00[0x4];                                       
	struct FVector2D                                   DisplayBlockSize;                                         
	unsigned char                                      UnknownData01[0x89];                                      
	bool                                               bShowDeleteBlockUI;                                       
	unsigned char                                      UnknownData02[0x6];                                       
	class UNamedVar*                                   EditingVar;                                               
	TArray<class UNamedVar*>                           GlobalVars;                                               
	TMap<struct FString, class UPresetDesc*>           PresetDescMap_Graph;                                      
	class UCustomConfig*                               EditingCustomConfig;                                      
	TMap<struct FGuid, class UCustomConfig*>           TemplateCustomConfigs;                                    
	TMap<struct FGuid, class UCustomConfig*>           GameEventConfigs;                                         
	class UExecuteable*                                CurrExeBlock;                                             
	class UExecuteable*                                EditingExeBlock;                                          
	TArray<class UBlockyGraph*>                        SubBlockyGraphs;                                          
	TArray<class UBlockyGraph*>                        BlockyGraphsCallStack;                                    
	TMap<struct FString, struct FString>               CacheData;                                                
	struct FText                                       Name;                                                     
	class UBlockBase*                                  CurrentPutSlotHostBlock;                                  
	unsigned char                                      UnknownData03[0x18];                                      
	class UBlockBase*                                  CurrentPutSlotReplacedBlock;                              
	class UBlockBase*                                  CurrentTopPutBlock;                                       
	unsigned char                                      UnknownData04[0x8];                                       
	class UBlockBase*                                  CurrentSettingBlock;                                      
	class USelectionData*                              CurrentSelection;                                         
	class USelectionData*                              CurrentPointAt;                                           
	class UExecuteablePreview*                         BlockPreview;                                             
	struct FScriptMulticastDelegate                    OnSaveProgress;                                           
	bool                                               IsGraphDirty;                                             
	bool                                               IsLoading;                                                
	unsigned char                                      UnknownData05[0x6];                                       
	struct FScriptMulticastDelegate                    OnGraphDataReady;                                         
	unsigned char                                      UnknownData06[0x108];                                     
	class UBrushData*                                  DefaultRectBrush;                                         
	class UMaterial*                                   PreViewMaterial;                                          
	class UBrushData*                                  PreViewBrush;                                             
	class UBrushData*                                  AnimateBrush;                                             
	class UMaterialInstanceDynamic*                    DeleteUIDynamicMaterial;                                  
	class UMaterialInstanceDynamic*                    DeleteRangeUIDynamicMaterial;                             
	class UMaterialInstanceDynamic*                    DeleteUIBgDynamicMaterial;                                
	class UBrushData*                                  DeleteRangeUIDockingBrush;                                
	class UBrushData*                                  DeleteUIDockingBrush;                                     
	class UBrushData*                                  DeleteUIBgBrush;                                          
	unsigned char                                      UnknownData07[0x20];                                      
	class UBlockBase*                                  TouchBlockHostSlotHost;                                   
	unsigned char                                      UnknownData08[0xF8];                                      
	struct FScriptDelegate                             OnOpenCustomPanel;                                        
	struct FScriptDelegate                             OnOpenCustomPopup;                                        
	struct FScriptDelegate                             OnOpenCustomSavePopup;                                    
	struct FScriptDelegate                             OnCloseCustomPopup;                                       
	struct FScriptDelegate                             OnOpenVariablePopup;                                      
	struct FScriptDelegate                             OnOpenBlackboardPopup;                                    
	struct FScriptDelegate                             OnCloseVariablePopup;                                     
	struct FScriptDelegate                             OnOpenVariable;                                           
	struct FScriptDelegate                             OnUpdateUndoRedoState;                                    
	struct FScriptDelegate                             OnShowTips;                                               
	struct FScriptDelegate                             OnShowInitUI;                                             
	struct FScriptDelegate                             OnOpenVariablePanel;                                      
	struct FScriptDelegate                             OnOpenCreateBlackboardPanel;                              
	struct FScriptDelegate                             OnOpenEditBlackboardPanel;                                
	struct FScriptDelegate                             OnOpenCreateCustomVarPanel;                               
	struct FScriptDelegate                             OnOpenEditCustomVarPanel;                                 
	struct FScriptDelegate                             OpenDelCustomVarPanel;                                    
	struct FScriptDelegate                             OnQuoteBlock;                                             
	struct FScriptDelegate                             OnShowBlockSettingPop;                                    
	struct FScriptDelegate                             OnOpenCommentPopup;                                       
	struct FScriptDelegate                             OnCloseCommentPopup;                                      
	struct FScriptDelegate                             OnSetBlockLogNum;                                         
	struct FScriptDelegate                             OnSetBlockLogTabNum;                                      
	struct FScriptDelegate                             OnSetBlockLogText;                                        
	struct FScriptDelegate                             OnClearBlockLog;                                          
	struct FScriptDelegate                             OnOpenAnimationPopup;                                     
	struct FScriptDelegate                             OnCloseAnimationPopup;                                    
	struct FScriptDelegate                             OnShowBlockVariablePopup;                                 
	unsigned char                                      UnknownData09[0x10];                                      
	TArray<struct FString>                             OpendItemStrings;                                         
	struct FString                                     CurSelectTriggerType;                                     
	unsigned char                                      UnknownData10[0x1];                                       
	bool                                               IsOpenedCaption;                                          
	bool                                               IsFirstFindPresetMap;                                     
	unsigned char                                      UnknownData11[0x95];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyGraphData");
		return pStaticClass;
	}


	void UseTemplate(class UBlockyGraph* templateGraph);
	void UpdateVariableMenu();
	TArray<struct FText> UpdateVariableItemNames();
	void UpdateCustomMenu();
	TArray<struct FText> UpdateCustomItemNames();
	void UpdateAllPresetInGraph();
	void UpdateAfterLoadBin();
	void Undo();
	void TryCloseItemList();
	void ShowTips(const struct FText& Tips);
	void ShowBlockSettingPop();
	void SetSlotString(const struct FBlockySlotString& slotStr);
	void SetGraphStrings(const struct FGraphString& graphStr);
	void SetCustomVariableString(const struct FCustomVariableString& variableStr);
	void SetCustomConfigString(const struct FCustomConfigString& configStr);
	void SetCurrentSubGraph(const struct FString& InName);
	void SetCacheData(TMap<struct FString, struct FString> Data);
	void SetBlockLogText(EBlockyLogMsgMode Mode, class UBlockBase* BlockSource, const struct FString& SlotID, const struct FString& Info);
	void SetBlockLogTabNum(int Mode, int Num);
	void SetBlockLogNum(int Mode, int Num);
	struct FString SaveGraphToJsonText();
	void SaveGraphToBinFile(const struct FString& FilePath);
	TArray<unsigned char> SaveGraphToBin();
	struct FString SaveGlobalVarToJsonText();
	TArray<unsigned char> SaveGlobalVarToBin();
	void SaveCustom();
	void Save();
	void ReturnToPreviewGraph();
	void ReturnToMainGraph();
	void ResetGraph();
	void RemoveSubGraph(const struct FString& InName);
	void RefreshFont();
	void ReEditVariable(int Index);
	void Redo();
	void QuoteVariable(int Index);
	void QuoteCustom();
	void Quote();
	void Paste();
	void OpenGuideWebUrl();
	void OnLoadFinished();
	void MarkGraphDirty();
	struct FString MakeSequentialDisplayName(const struct FString& BaseName);
	void LoadGraphFromJsonText(const struct FString& JsonStr);
	void LoadGraphFromBinFile(const struct FString& FilePath);
	void LoadGlobalVarFromJsonText(const struct FString& JsonStr);
	void LoadByTicker();
	void Load();
	class UBlockBase* JumpToFocusSlotByIdStrAndIdx(const struct FString& blockId, unsigned char idx);
	class UBlockBase* JumpToFocusSlotByIdStr(const struct FString& blockId, const struct FString& TargetSlotIdStr);
	class UBlockBase* JumpToFocusBlockByIdStr(const struct FString& blockId);
	bool ItemHasOpend(const struct FString& ItemStringName);
	bool IsStagedCanvasLoadInProgress();
	bool IsGraphChanged();
	bool IsFirstGraph();
	bool IsBlockGuideButton();
	bool HasExecutableCode();
	bool GM_LoadGraph_DS_FromFiles(const struct FString& GraphFilePath, const struct FString& GlobalVarsFilePath);
	void GM_LoadGraph_DS();
	void GM_GenerateAllBlocks(int CombinedBlocksNum, int GraphBlocksNum);
	TArray<struct FString> GetTriggerList();
	TArray<struct FString> GetTLogType();
	TMap<struct FString, struct FString> GetTLog();
	struct FString GetSelectedBlockId();
	TArray<class UBlockBase*> GetQuoteVariableItem(class UBlockyGraph* Graph);
	TArray<class UBlockyGraph*> GetQuoteVariableGraph(int Index);
	TArray<class UPresetDesc*> GetPresetDescArray(bool LocalOnly);
	int GetNewBlocksNumWithMenu(const struct FString& menuItemName);
	bool GetIsDisableComment();
	TArray<struct FGraphString> GetGraphStrings();
	TMap<struct FString, struct FString> GetGraphMap();
	TArray<class UFunctionDesc*> GetFunctionDescArray();
	void GetDeleteBlockUIRect(float InRectWidth);
	TArray<struct FCustomVariableString> GetCustomVariableStrings();
	TArray<struct FText> GetCustomNames();
	TArray<class UCustomConfig*> GetCustomEventConfigs(bool isCloudGameEvent);
	TArray<struct FCustomConfigString> GetCustomConfigStrings();
	int GetCurrentGraphBlockyNumberByType(EBlockyCurrentGraphBlockyNumberType Type);
	class UBlockyGraph* GetCurrentGraph();
	int GetCurrentBlockyNumByMune(const struct FString& Menu, const struct FString& Category);
	TMap<struct FString, struct FString> GetCacheData();
	void GetBlockyStringDatasInPairWithBlocks(TArray<struct FBlockySlotString>* OutSlotStrings, TArray<class UBlockBase*>* OutBlocks);
	TArray<struct FBlockySlotString> GetBlockyStringDatasInPair();
	TArray<class UBlockBase*> GetBlocks();
	TArray<class UBlockBase*> GetAllBlockyInGraph();
	TArray<struct FString> GetAllBlockIdStrings();
	TMap<struct FString, int> GetAllBlockByKeyName();
	class UBlockBase* FocusToSlotByBlockySlotId(const struct FBlockySlotString& SlotID);
	void FocusToSlot(class UBlockBase* TargetBlock, const struct FString& TargetSlotIdStr);
	void FocusTo(class UBlockBase* TargetBlock);
	void FinishVariableEdit(bool bSaveVar, bool bReEdit);
	void FinishCustomEdit(bool bSave);
	void FinishBlockSetting(bool bSaveVar);
	class UBlockBase* FindBlockByIdStr(const struct FString& blockId);
	void EmptyListItemSeleceted();
	void Eject();
	void EditVariable();
	void EditCustumBlockGraph();
	void EditCustom();
	void DuplicateSubGraph(const struct FString& SrcName);
	void DuplicateBlock(class UBlockBase* bLock);
	void Disable();
	void DeleteVariableListItem(int Index);
	void DeleteSelected();
	void DeleteCustom();
	void DeleteBlocks();
	void DeleteBlockInGraph(class UBlockyGraph* InGraph, class UBlockBase* bLock);
	void DeleteBlockAndNextInGraph(class UBlockyGraph* InGraph, class UBlockBase* bLock);
	void DeleteBlockAndNext(class UBlockBase* bLock);
	void DeleteBlock(class UBlockBase* bLock);
	void DefineCustom();
	void Define();
	int CustomNumByType(TEnumAsByte<ECustomBlockType> CustomType);
	TArray<class UBlockyGraph*> CurSelectSubBlockyGraphs();
	void Copy();
	void Comment();
	void Clone();
	void ClearUndoRedoDatas();
	void ClearTextSizeCache();
	void ClearGraphDirty();
	void ClearBlockLog();
	bool CheckReports();
	void AsyncLoadGraphFromBinFile(const struct FString& FilePath, const struct FScriptDelegate& Callback);
	struct FString AddSubGraph(const struct FString& InName, const struct FString& InType);
	void AddOpendNameToArr(const struct FString& ItemStringName);
	class UBlockyGraph* AddGraph(const struct FString& InName, const struct FString& InType);
	void AddGlobalComment();
};




class UBlockyLuaCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyLuaCommandlet");
		return pStaticClass;
	}

};




class UBlockyLuaConfig : public UObject
{
public:
	int                                                MaxBlockCount;                                            
	int                                                MaxBlockCountInGraph;                                     
	int                                                MaxBlockCountInViewport;                                  
	int                                                MaxBlockCountInOneBlock;                                  
	float                                              BlockOffsetFromBin_X;                                     
	float                                              BlockOffsetFromBin_Y;                                     
	unsigned char                                      UnknownData00[0x50];                                      
	unsigned char                                      UnknownData01[0x50];                                      
	bool                                               bShowGuideButton;                                         
	unsigned char                                      UnknownData02[0x7];                                       
	TMap<struct FString, struct FString>               ReginsGuideUrlSet;                                        
	float                                              GraphMinScale;                                            
	float                                              GraphMaxScale;                                            
	float                                              DragCheckDelta;                                           
	float                                              EjectOffsetX;                                             
	float                                              EjectOffsetY;                                             
	float                                              PasteOffsetMaxCount;                                      
	struct FVector2D                                   PasteOffset;                                              
	struct FVector2D                                   ExecuteableSnapPositionOffset;                            
	ESlotClickType                                     DefaultArrayTypeFilterClickType;                          
	unsigned char                                      UnknownData03[0x3];                                       
	unsigned char                                      UnknownData04[0x4];                                       
	TArray<struct FString>                             NameInvalidChar;                                          
	struct FString                                     InvalidTranslateString;                                   
	struct FString                                     InvalidTranslateMaskString;                               
	struct FString                                     ArrayInitStringStart;                                     
	struct FString                                     ArrayInitStringEnd;                                       
	unsigned char                                      ArrangeMaxTimePerFrame;                                   
	unsigned char                                      UnknownData05[0x7];                                       
	struct FSoftObjectPath                             FontName;                                                 
	int                                                FontSize;                                                 
	unsigned char                                      UnknownData06[0x4];                                       
	struct FSlateFontInfo                              CustomDefaultFont;                                        
	bool                                               UseCustomFont;                                            
	unsigned char                                      UnknownData07[0x3];                                       
	float                                              RTLYOffset;                                               
	float                                              LTRYOffset;                                               
	struct FVector2D                                   EmblemOffset;                                             
	float                                              DefaultBlockWidth;                                        
	float                                              DefaultBlockHeight;                                       
	struct FMargin                                     BlockPadding;                                             
	float                                              BlockIconSize;                                            
	struct FMargin                                     BlockIconBorder;                                          
	float                                              BlockButtonSize;                                          
	float                                              BlockSettingButtonSize;                                   
	float                                              BlockButtonClickSize;                                     
	struct FMargin                                     BlockButtonBorder;                                        
	struct FMargin                                     BlockTextBorder;                                          
	struct FMargin                                     BlockSlotBorder;                                          
	float                                              CrossDelta;                                               
	float                                              CornerDelta;                                              
	float                                              VariableIconSize;                                         
	float                                              VariableIconIndent;                                       
	float                                              VariableCopyIconSize;                                     
	struct FVector2D                                   StringInputBlockSize;                                     
	float                                              DefaultSlotWidth;                                         
	float                                              DefaultSlotHeight;                                        
	struct FMargin                                     SlotPadding;                                              
	float                                              SlotIconSize;                                             
	struct FMargin                                     SlotIconBorder;                                           
	float                                              TriangleIconSize;                                         
	struct FMargin                                     SlotTriangleBorder;                                       
	float                                              WarringIconSize;                                          
	float                                              ForbiddenIconSize;                                        
	struct FMargin                                     SlotWarringBorder;                                        
	struct FMargin                                     SlotForbiddenBorder;                                      
	struct FMargin                                     SlotTextBorder;                                           
	float                                              SlotTextSizeRefactor;                                     
	struct FVector2D                                   ColorBrushSize;                                           
	struct FVector2D                                   ColorContentSize;                                         
	float                                              HookupSlotWidth;                                          
	float                                              HookupSlotHeight;                                         
	float                                              HookupChildIndentation;                                   
	float                                              HookupLinkWidth;                                          
	struct FVector2D                                   CommentButtonSize;                                        
	struct FVector2D                                   CommentTextSize;                                          
	struct FVector2D                                   CommentFlodSize;                                          
	struct FVector2D                                   CommentTitleSize;                                         
	float                                              CommentLineLen;                                           
	int                                                CommentBlinkCount;                                        
	float                                              CommentBlinkSpeed;                                        
	float                                              BlockListWidth;                                           
	struct FMargin                                     ListBlockSelectedIconPadding;                             
	float                                              ListBlockSelectedIconSize;                                
	float                                              NextCategoryOffset;                                       
	float                                              NextCategoryOffset_Variable;                              
	float                                              VarListXOffset;                                           
	float                                              DeleteBlocksYOffset;                                      
	struct FVector2D                                   DeleteBlocksSize;                                         
	struct FVector2D                                   CanDeleteSize;                                            
	struct FVector2D                                   BlockEmblemSize;                                          
	float                                              DisplayViewMaxBlockWidth;                                 
	struct FLinearColor                                DefaultBackColor;                                         
	struct FLinearColor                                DarkBackColor;                                            
	struct FLinearColor                                KeyWordColor;                                             
	struct FLinearColor                                IllegalWordColor;                                         
	struct FLinearColor                                FunctionBackColor;                                        
	float                                              BlockSnapAreaLeft;                                        
	float                                              BlockSnapAreaTop;                                         
	float                                              BlockSnapAreaWidth;                                       
	float                                              BlockSnapAreaHeight;                                      
	unsigned char                                      UnknownData08[0x4];                                       
	struct FString                                     PreViewMaterial;                                          
	struct FString                                     LocalizationNameSpace;                                    
	struct FString                                     DefaultRect;                                              
	struct FString                                     ActionRect;                                               
	struct FString                                     ActionRectSelected;                                       
	struct FString                                     ValueRect;                                                
	struct FString                                     ValueDisableRect;                                         
	struct FString                                     ValueSelectDisableRect;                                   
	struct FString                                     BoolBlock;                                                
	struct FString                                     BoolBlockEmpty;                                           
	struct FString                                     BoolBlockSelect;                                          
	struct FString                                     BoolBlockDisable;                                         
	struct FString                                     NumBlockEmpty;                                            
	struct FString                                     NumBlockSelect;                                           
	struct FString                                     NumBlockDisable;                                          
	struct FString                                     DeleteBlocksRect;                                         
	struct FString                                     SnapShowRect;                                             
	struct FString                                     ListItemSelected;                                         
	struct FString                                     SingleVarRect;                                            
	struct FString                                     ArrayVarRect;                                             
	struct FString                                     CallbackVarRect;                                          
	struct FString                                     VarRectDisable;                                           
	struct FString                                     VarOutline;                                               
	struct FString                                     GlobalVarIcon;                                            
	struct FString                                     CanvasVarIcon;                                            
	struct FString                                     LocalVarIcon;                                             
	struct FString                                     CallbackVarIcon;                                          
	struct FString                                     CustomIcon;                                               
	struct FString                                     CustomActionBG;                                           
	struct FString                                     CustomActionBG_Selected;                                  
	struct FString                                     CustomActionBG_Gray;                                      
	struct FString                                     CustomActionBG_Gray_Selected;                             
	struct FString                                     CustomValueBG;                                            
	struct FString                                     CustomValueBG_Selected;                                   
	struct FString                                     CustomValueBG_Gray;                                       
	struct FString                                     CustomValueBG_Gray_Selected;                              
	struct FString                                     CustomEventBG;                                            
	struct FString                                     CustomEventBG_Selected;                                   
	struct FString                                     CustomEventBG_Gray;                                       
	struct FString                                     CustomEventBG_Gray_Selected;                              
	struct FString                                     CustomBlock_Emblem;                                       
	struct FString                                     CustomBlock_Emblem_Selected;                              
	struct FString                                     CustomBlock_Emblem_Disable;                               
	struct FString                                     CustomBlock_Emblem_DisableSelected;                       
	struct FString                                     EventBlock_Emblem;                                        
	struct FString                                     EventBlock_Emblem_Selected;                               
	struct FString                                     EventBlock_Emblem_Disable;                                
	struct FString                                     EventBlock_Emblem_DisableSelected;                        
	struct FString                                     LogicUp;                                                  
	struct FString                                     LogicUpSelected;                                          
	struct FString                                     LogicUpGray;                                              
	struct FString                                     LogicUpSelectedGray;                                      
	struct FString                                     LogicMiddle;                                              
	struct FString                                     LogicMiddleSelected;                                      
	struct FString                                     LogicBottom;                                              
	struct FString                                     LogicBottomGray;                                          
	struct FString                                     LogicBottomSelected;                                      
	struct FString                                     LogicBottomSelectedGray;                                  
	struct FString                                     LogicSlot;                                                
	struct FString                                     LogicSlotGray;                                            
	struct FString                                     LogicSlotSelected;                                        
	struct FString                                     LogicSlotSelectedGray;                                    
	struct FString                                     HookupSlot;                                               
	struct FString                                     ButtonWithTextBg_Enable;                                  
	struct FString                                     ButtonWithTextBg_Selected;                                
	struct FString                                     ButtonWithTextBg_Disable;                                 
	struct FString                                     ButtonWithTextBg_DisableSelected;                         
	struct FString                                     SlotTriangle;                                             
	struct FString                                     SlotWarring;                                              
	struct FString                                     SlotForbidden;                                            
	struct FString                                     SlotIllegalInput;                                         
	struct FString                                     FunctionIcon;                                             
	struct FString                                     SettingIcon;                                              
	struct FString                                     ColorIcon;                                                
	TArray<struct FLinearColor>                        DefaultHSVs;                                              
	struct FString                                     CopyIcon;                                                 
	struct FString                                     CommentIcon;                                              
	struct FString                                     FlodIcon;                                                 
	struct FString                                     UnbindIcon;                                               
	struct FString                                     SeparatorIcon;                                            
	struct FString                                     NoneIcon;                                                 
	struct FString                                     DefaultCategoryIcon;                                      
	struct FString                                     DefaultCategorySelectedIcon;                              
	struct FString                                     BlockyGlobalVarPath;                                      
	struct FString                                     BlockyGraphPath;                                          
	struct FString                                     GenerateCodePath;                                         
	bool                                               bUseStagedCanvasLoad;                                     
	unsigned char                                      UnknownData09[0x7];                                       
	struct FString                                     AssetPackageName;                                         
	struct FString                                     TextrueRectParamPath;                                     
	struct FString                                     FunctionPath;                                             
	struct FString                                     FunctionFolderPath;                                       
	struct FString                                     VariablePath;                                             
	struct FString                                     PresetsPath;                                              
	struct FString                                     PresetsFolderPath;                                        
	struct FString                                     AllTypesPath;                                             
	struct FString                                     TranslateStringPath;                                      
	struct FString                                     BlockyNewStringPath;                                      
	struct FString                                     SequencePath;                                             
	struct FString                                     TLogParamPath;                                            
	int                                                UndoMaxSteps;                                             
	int                                                MaxStoredNumOfSearchHistory;                              
	bool                                               SearchUseCase;                                            
	unsigned char                                      UnknownData10[0x3];                                       
	struct FLinearColor                                SearchedKeyWordColor;                                     
	int                                                MaxTemplateDescriptionLen;                                
	float                                              SaveCooldownDuration;                                     
	unsigned char                                      UnknownData11[0x4];                                       
	TMap<struct FString, class UBrushData*>            BlockyBrushDatas;                                         
	TMap<struct FString, struct FBlockyBrushInfo>      BlockyBrushInfos;                                         
	TMap<struct FString, struct FString>               RTLBrushMap;                                              
	TArray<struct FString>                             BlockyBrushNames;                                         
	unsigned char                                      UnknownData12[0xA0];                                      
	TMap<struct FString, class UFunctionDesc*>         Functions;                                                
	TMap<struct FString, class UFunctionDesc*>         FuncTemplates;                                            
	TMap<struct FString, class UFunctionDesc*>         TypeFilterFunctions;                                      
	TArray<class UBlackboardDefiner*>                  BlackboardDefiners;                                       
	TMap<struct FString, class UVarDefiner*>           VarDefiners;                                              
	TMap<struct FString, class UCustomDefiner*>        CustomDefiners;                                           
	TMap<struct FString, class UCategoryDefiner*>      CategoryDefiners;                                         
	TMap<struct FString, class UEnumDesc*>             Enums;                                                    
	TArray<class UBlockyMenuItemObject*>               MenuItems;                                                
	TMap<struct FString, class UTypeConvertDesc*>      TypeConverts;                                             
	TMap<struct FString, class UPresetDesc*>           PresetDescMap;                                            
	TMap<struct FString, class UPresetDesc*>           CodeNameAndTypeKeyPresetDescMap;                          
	TMap<struct FString, struct FPresetTypeData>       TypeNameKeyPresetDescMap;                                 
	TArray<class UBlockyMenuItemObject*>               PresetMenuItems;                                          
	TArray<class UBlockyGraph*>                        TemplateGraphs;                                           
	unsigned char                                      UnknownData13[0x50];                                      
	unsigned char                                      UnknownData14[0x50];                                      
	TMap<struct FString, struct FString>               TipsMap;                                                  
	TMap<struct FString, bool>                         BlockyNewsMap;                                            
	TMap<struct FString, struct FString>               TLogParamsMap;                                            
	TMap<struct FString, struct FString>               TLogParamsTypeMap;                                        
	TArray<struct FString>                             MenuSequence;                                             
	TMap<struct FString, struct FSequence>             CategorySequence;                                         
	TMap<struct FString, struct FSequence>             ItemSequence;                                             
	unsigned char                                      UnknownData15[0x18];                                      
	struct FSlateFontInfo                              FontInfo;                                                 
	unsigned char                                      UnknownData16[0x8];                                       
	TMap<struct FString, class UVarDefiner*>           AllTypesMap;                                              
	TMap<struct FGuid, struct FScriptDelegate>         OnReceiveCheckStringResults;                              
	struct FScriptDelegate                             OnGetLocaleString;                                        
	struct FScriptDelegate                             OnCallCustomSelectObject;                                 
	struct FScriptDelegate                             OnReceiveCustomSelectObject;                              
	struct FScriptDelegate                             OnCheckShowCustomSelection;                               
	struct FScriptDelegate                             OnShowPresetPanelHandler;                                 
	struct FScriptDelegate                             OnCheckShowPresetFilterBtn;                               
	struct FScriptDelegate                             OnModifyTip;                                              
	struct FScriptDelegate                             OnAddBlockyLog;                                           
	struct FScriptDelegate                             OnGetValidString;                                         
	struct FScriptDelegate                             OnCheckStringValid;                                       
	struct FScriptDelegate                             OnMessageData;                                            
	struct FScriptDelegate                             OnIsCurrentCultureLTR;                                    
	struct FScriptDelegate                             OnGetTextLen;                                             
	struct FScriptDelegate                             OnPlayPresetSound;                                        
	struct FScriptDelegate                             OnOpenGuide;                                              
	struct FScriptDelegate                             OnSetGraphSetting;                                        
	struct FScriptDelegate                             OnGetBlockNewState;                                       
	struct FScriptDelegate                             OnSetBlockNewState;                                       
	struct FScriptDelegate                             OnGetSearchHistorys;                                      
	struct FScriptDelegate                             OnSetSearchHistorys;                                      
	struct FScriptDelegate                             OnGetUrlIconAsset;                                        
	struct FScriptDelegate                             OnCallUrlIconAssetToLoad;                                 
	struct FScriptDelegate                             OnCallPresetSelectedCode;                                 
	struct FScriptDelegate                             OnGetPresetValidityDuration;                              
	struct FScriptDelegate                             OnCallShortCutKey;                                        
	struct FScriptDelegate                             OnUndoCustomCommand;                                      
	unsigned char                                      UnknownData17[0x70];                                      
	class UHotfixUtility*                              HotfixUtility;                                            
	unsigned char                                      UnknownData18[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyLuaConfig");
		return pStaticClass;
	}


	void SetCustomDefaultFont(struct FSlateFontInfo* DefaultFont);
	struct FString ReplaceChCharToMaskChar(const struct FString& Source);
	void PlayPresetSound(const struct FString& SoundPath);
	bool IsNameStringValid(const struct FString& NameString);
	bool IsBlackboardVar(class UVarDefiner* Definer);
	struct FString GetValidString(const struct FString& CheckString);
	struct FString GetTranslateStringTest(const struct FString& KeyString);
	struct FString GetTranslateString(const struct FString& KeyString);
	struct FString GetLocaleString(const struct FString& KeyString);
	class UBlackboardDefiner* GetBlackboardDefiner(class UVarDefiner* Definer);
	void ClearCustomDefaultFont();
	void ClearAsyncTextureHandleMap();
	void CheckStringValidTest(const struct FString& CheckString, const struct FCheckStringHandleData& Data);
};




class UBlockyLuaGameInstance : public UGameInstance
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyLuaGameInstance");
		return pStaticClass;
	}

};




class UBlockyLuaUtility : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyLuaUtility");
		return pStaticClass;
	}


	static void WriteUInt8(const struct FBlockyLuaHandle& ar, unsigned char Value);
	static void WriteUInt64(const struct FBlockyLuaHandle& ar, uint64_t Value);
	static void WriteUInt32(const struct FBlockyLuaHandle& ar, uint32_t Value);
	static void WriteUInt16(const struct FBlockyLuaHandle& ar, uint16_t Value);
	static void WriteString(const struct FBlockyLuaHandle& ar, const struct FString& Value);
	static void WriteSingle(const struct FBlockyLuaHandle& ar, float Value);
	static void WriteObjectPtr(const struct FBlockyLuaHandle& ar, class UObject* Value);
	static void WriteInt8(const struct FBlockyLuaHandle& ar, int8_t Value);
	static void WriteInt64(const struct FBlockyLuaHandle& ar, int64_t Value);
	static void WriteInt32(const struct FBlockyLuaHandle& ar, int Value);
	static void WriteInt16(const struct FBlockyLuaHandle& ar, int16_t Value);
	static void WriteHandle(const struct FBlockyLuaHandle& ar, const struct FBlockyLuaHandle& Value);
	static void WriteDouble(const struct FBlockyLuaHandle& ar, double Value);
	static void WriteBool(const struct FBlockyLuaHandle& ar, bool Value);
	static unsigned char ReadUInt8(const struct FBlockyLuaHandle& ar);
	static uint64_t ReadUInt64(const struct FBlockyLuaHandle& ar);
	static uint32_t ReadUInt32(const struct FBlockyLuaHandle& ar);
	static uint16_t ReadUInt16(const struct FBlockyLuaHandle& ar);
	static struct FString ReadString(const struct FBlockyLuaHandle& ar);
	static float ReadSingle(const struct FBlockyLuaHandle& ar);
	static class UObject* ReadObjectPtr(const struct FBlockyLuaHandle& ar);
	static int8_t ReadInt8(const struct FBlockyLuaHandle& ar);
	static int64_t ReadInt64(const struct FBlockyLuaHandle& ar);
	static int ReadInt32(const struct FBlockyLuaHandle& ar);
	static int16_t ReadInt16(const struct FBlockyLuaHandle& ar);
	static struct FBlockyLuaHandle ReadHandle(const struct FBlockyLuaHandle& ar);
	static double ReadDouble(const struct FBlockyLuaHandle& ar);
	static bool ReadBool(const struct FBlockyLuaHandle& ar);
	static void DestroyReturnWriter(const struct FBlockyLuaHandle& ptr);
	static void DestroyArgumentsReader(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateReturnWriter(const struct FBlockyLuaHandle& stubHandle);
	static struct FBlockyLuaHandle CreateArgumentsReader(const struct FBlockyLuaHandle& stubHandle);
};




class UBlockyMenuItemObject : public UObject
{
public:
	struct FText                                       Name;                                                     
	TArray<class UBlockyCategoryItemObject*>           Categories;                                               
	int                                                CurrentCategoryIndex;                                     
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     DrawType;                                                 
	int                                                DrawTopDelta;                                             
	int                                                DrawBottomDelta;                                          
	struct FString                                     IconType;                                                 
	struct FString                                     Type;                                                     
	bool                                               Visible;                                                  
	bool                                               VisibleByTag;                                             
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              ItemInterval;                                             
	float                                              LineInterval;                                             
	float                                              VariableItemInterval;                                     
	float                                              PaddingLeft;                                              
	struct FLinearColor                                CategoryStringColor;                                      
	unsigned char                                      UnknownData02[0x10];                                      
	float                                              CategoryHeight;                                           
	float                                              VariableCategoryHeight;                                   
	struct FLinearColor                                ItemStringColor;                                          
	unsigned char                                      UnknownData03[0x4];                                       
	class UBlockyGraphData*                            GraphData;                                                
	bool                                               bShowRedDot;                                              
	unsigned char                                      UnknownData04[0x7];                                       
	class UBrushData*                                  DefaultRectBrush;                                         
	class UBrushData*                                  CurrentItemBrush;                                         
	class UBrushData*                                  CurrentIconBrush;                                         
	class UBrushData*                                  SelectedIconBrush;                                        
	unsigned char                                      UnknownData05[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyMenuItemObject");
		return pStaticClass;
	}


	void SetShowRedDotVar(bool var);
	void InitShowRedDotVar();
};




class UBlockyMenuItemObject_BP : public UBlockyMenuItemObject
{
public:
	class UUserWidget*                                 WidgetBP;                                                 
	bool                                               bHideCategory;                                            
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyMenuItemObject_BP");
		return pStaticClass;
	}

};




class UBlockyMenuItemObject_Custom : public UBlockyMenuItemObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyMenuItemObject_Custom");
		return pStaticClass;
	}


	void NewCustom();
	bool IsCurrentCategoryEmpty();
	TEnumAsByte<ECustomBlockType> GetCustomType();
	void ClosePopUp();
};




class UBlockyMenuItemObject_Search : public UBlockyMenuItemObject
{
public:
	struct FString                                     SearchStr;                                                
	unsigned char                                      UnknownData00[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyMenuItemObject_Search");
		return pStaticClass;
	}

};




class UBlockyMenuItemObject_TypeFilter : public UBlockyMenuItemObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyMenuItemObject_TypeFilter");
		return pStaticClass;
	}

};




class UBlockyMenuItemObject_Variable : public UBlockyMenuItemObject
{
public:
	int                                                TopCategory;                                              
	unsigned char                                      UnknownData00[0x14];                                      
	bool                                               IsShowAllVariableItem;                                    
	unsigned char                                      UnknownData01[0x1F];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyMenuItemObject_Variable");
		return pStaticClass;
	}


	void NewVariable();
	void NewCustomVariable();
	bool IsSlotCustomVarToShow();
	bool IsPlayerBlackboard();
	bool IsCurrentCategoryEmpty();
	bool IsBlackBoardVariable();
	void FilterBlackboard(bool bIsPlayerVar);
	void FilterAccess(TEnumAsByte<EBlockyAccessType> InAccess);
	void CanSeeCustomVar(bool* IsConfigContain, bool* IsOnlyShowCustom, bool* IsHiddenCustom);
};




class UBlockyMoveCommandData : public UBlockyCommandData
{
public:
	struct FBlockPoint                                 Position;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyMoveCommandData");
		return pStaticClass;
	}

};




class UExeSequencerBase : public UExecuteable
{
public:
	class UBrushData*                                  SlotBrush;                                                
	class UBrushData*                                  TailBrush;                                                
	unsigned char                                      UnknownData00[0x1F8];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ExeSequencerBase");
		return pStaticClass;
	}

};




class UBlockyTimer : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x800];                                     
	class UBrushData*                                  IconBrush;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyTimer");
		return pStaticClass;
	}

};




class UBlockyTimerParam : public UBlockBase
{
public:
	class UBlockyTimer*                                HostTimer;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BlockyTimerParam");
		return pStaticClass;
	}

};




class UBreak : public UExecuteable
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.Break");
		return pStaticClass;
	}

};




class UBrushData : public UObject
{
public:
	struct FSlateBrush                                 Brush;                                                    
	class UTexture2D*                                  Texture;                                                  
	float                                              Angle;                                                    
	struct FVector2D                                   RectSize;                                                 
	int                                                CrossDelta;                                               
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BrushData");
		return pStaticClass;
	}

};




class UCallFunction : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0x20];                                      
	class UBrushData*                                  IconBrush;                                                
	class UBrushData*                                  SelectionBG;                                              
	unsigned char                                      UnknownData01[0x268];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CallFunction");
		return pStaticClass;
	}

};




class UCastExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CastExpression");
		return pStaticClass;
	}


	static void SetTargetType(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Target);
	static void SetExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Target);
	static struct FBlockyLuaHandle GetTargetType(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetExpression(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateCastExpression2(const struct FBlockyLuaHandle& TargetType, const struct FBlockyLuaHandle& expression);
	static struct FBlockyLuaHandle CreateCastExpression();
};




class UClassReferenceExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ClassReferenceExpression");
		return pStaticClass;
	}


	static void SetClass(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& klass);
	static struct FBlockyLuaHandle GetClass(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateClassReferenceExpression(const struct FBlockyLuaHandle& klass);
};




class UObjectDesc : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ObjectDesc");
		return pStaticClass;
	}

};




class UColorDesc : public UObjectDesc
{
public:
	struct FString                                     KeyName;                                                  
	struct FString                                     Name;                                                     
	struct FString                                     CodeName;                                                 
	struct FText                                       Menu;                                                     
	struct FText                                       Category;                                                 
	struct FLinearColor                                Color;                                                    
	bool                                               IsSelected;                                               
	unsigned char                                      UnknownData00[0x17];                                      
	bool                                               Visible;                                                  
	bool                                               Removed;                                                  
	bool                                               Localed;                                                  
	unsigned char                                      UnknownData01[0x1CD];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ColorDesc");
		return pStaticClass;
	}


	bool NameContainsString(const struct FString& filter);
	bool IsNameEmpty();
	bool IsCodeNameEmpty();
	struct FType GetType();
	struct FString GetLocaleName();
	struct FString GetHSVStr();
	struct FLinearColor GetColor();
};




class UCommentBlock : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      
	class UBlockBase*                                  CandidateParentBlock;                                     
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CommentBlock");
		return pStaticClass;
	}

};




class UCommonUIFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CommonUIFunctionLibrary");
		return pStaticClass;
	}


	static bool VarDefinerTypeCanBeArray(class UVarDefiner* Definer);
	static void SetIsVirtualKeyboardVisible(bool Visible);
	static bool LimitTextLength(const struct FText& InputText, int MaxCharCount, struct FText* OutText);
	static struct FText LimitTextEmojiInput(const struct FText& InputText);
	static bool IsNameStringValid(const struct FString& NameString);
	static bool IsFuncDisabled(const struct FString& FuncName);
	static bool IsDeveloperMode();
	static struct FString GetTranslateString_BP(const struct FString& KeyString);
	static struct FString GetTranslateString(const struct FString& KeyString);
	static int GetTextLen(const struct FText& Text);
	static TArray<class UPresetDesc*> GetPresetDescs(class UVarDefiner* Definer);
	static struct FText GetLocaleText(const struct FText& KeyString);
	static struct FString GetLocaleString(const struct FString& KeyString);
	static bool GetIsVirtualKeyboardVisible();
	static int GetCustomVarNum();
	static struct FString GetArrayInitStringStart();
	static struct FString GetArrayInitStringEnd();
	static TArray<class UVarDefiner*> GetAllDefiners();
	static struct FString GenerateNextNameWithSuffix(TArray<struct FString> ExistingNames, const struct FString& InputName, bool InDuplicate);
	static struct FString FormatNumber(const struct FString& Input);
	static struct FString DisplayNameToTranslate(class UBlockBase* bLock);
	static void CollectAllObjects();
	static bool CheckNameValid(const struct FString& InName, struct FText* ErrorMsg);
	static bool CheckNameHasInvalidChar(const struct FString& InName);
};




class UConfigDataAsset : public UDataAsset
{
public:
	struct FString                                     AllType;                                                  
	struct FString                                     TextureRectParam;                                         
	struct FString                                     Function;                                                 
	TArray<struct FString>                             FunctionList;                                             
	struct FString                                     Variable;                                                 
	struct FString                                     Sequence;                                                 
	struct FString                                     Preset;                                                   
	TMap<struct FString, struct FString>               PresetMap;                                                
	struct FString                                     TranslateString;                                          
	TArray<struct FString>                             ModeList;                                                 
	struct FString                                     BlockyNew;                                                
	struct FString                                     TLogParams;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ConfigDataAsset");
		return pStaticClass;
	}


	void SaveToAsset(const struct FString& PackageName);
};




class UContinue : public UExecuteable
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.Continue");
		return pStaticClass;
	}

};




class UCreateFunction : public UCallFunction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CreateFunction");
		return pStaticClass;
	}

};




class UCreateObjectExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CreateObjectExpression");
		return pStaticClass;
	}


	static void SetTypeName(const struct FBlockyLuaHandle& ptr, const struct FString& Value);
	static void SetParameters(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value);
	static struct FString GetTypeName(const struct FBlockyLuaHandle& ptr);
	static TArray<struct FBlockyLuaHandle> GetParameters(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateCreateObjectExpression(const struct FString& TypeName);
};




class UCreateSubDefineFunction : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x360];                                     
	class UBrushData*                                  IconBrush;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CreateSubDefineFunction");
		return pStaticClass;
	}

};




class UCustomAction : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	class UCustomConfig*                               Config;                                                   
	struct FGuid                                       ConfigName;                                               
	class UBrushData*                                  BrushBGSelected;                                          
	class UBrushData*                                  IconBrush;                                                
	class UBrushData*                                  BrushBG;                                                  
	unsigned char                                      UnknownData01[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomAction");
		return pStaticClass;
	}

};




class UCustomActionImp : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      
	class UCustomConfig*                               Config;                                                   
	struct FGuid                                       ConfigName;                                               
	class UBrushData*                                  IconBrush;                                                
	class UBrushData*                                  BrushBG;                                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomActionImp");
		return pStaticClass;
	}

};




class UCustomParam : public UObject
{
public:
	struct FString                                     Name;                                                     
	struct FString                                     Description;                                              
	bool                                               bIsArray;                                                 
	unsigned char                                      UnknownData00[0x7];                                       
	class UVarDefiner*                                 Definer;                                                  
	unsigned char                                      UnknownData01[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomParam");
		return pStaticClass;
	}


	void CopyFrom(class UCustomParam* Other);
};




class UCustomConfig : public UObject
{
public:
	struct FGuid                                       Name;                                                     
	struct FString                                     DisplayName;                                              
	TEnumAsByte<ECustomBlockType>                      Type;                                                     
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     Description;                                              
	TArray<class UCustomParam*>                        Params;                                                   
	class UCustomParam*                                Return;                                                   
	class UFunctionDesc*                               CustomDesc;                                               
	class UFunctionDesc*                               CustomImplDesc;                                           
	unsigned char                                      UnknownData01[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomConfig");
		return pStaticClass;
	}


	void UpdateDesc();
	void SetParamNum(int paramNum);
	class UCustomParam* InitResult();
	void Init();
	class UCustomParam* GetParam(int idx);
	struct FString GetCustomGraphName();
	void CopyFrom(class UCustomConfig* Other);
};




class UCustomInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomInterface");
		return pStaticClass;
	}

};




class UCustomDefiner : public UCategoryDefiner
{
public:
	struct FString                                     HotfixUserData;                                           
	struct FString                                     TemplateFunc;                                             
	struct FString                                     TemplateImplFunc;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomDefiner");
		return pStaticClass;
	}

};




class UDefineFunction : public UExecuteable
{
public:
	struct FText                                       Name;                                                     
	unsigned char                                      UnknownData00[0x38];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.DefineFunction");
		return pStaticClass;
	}

};




class UCustomEvent : public UDefineFunction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	class UCustomConfig*                               Config;                                                   
	struct FGuid                                       ConfigName;                                               
	class UBrushData*                                  IconBrush;                                                
	class UBrushData*                                  BrushBG;                                                  
	unsigned char                                      UnknownData01[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomEvent");
		return pStaticClass;
	}

};




class UCustomImpInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomImpInterface");
		return pStaticClass;
	}

};




class UCustomValue : public UVarBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	class UCustomConfig*                               Config;                                                   
	struct FGuid                                       ConfigName;                                               
	class UBrushData*                                  BrushBGSelected;                                          
	class UBrushData*                                  BrushBG;                                                  
	unsigned char                                      UnknownData01[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomValue");
		return pStaticClass;
	}

};




class UCustomValueImp : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     
	class UCustomConfig*                               Config;                                                   
	struct FGuid                                       ConfigName;                                               
	class UBrushData*                                  IconBrush;                                                
	class UBrushData*                                  BrushBG;                                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CustomValueImp");
		return pStaticClass;
	}

};




class UDefaultValueCommandData : public UBlockyCommandData
{
public:
	unsigned char                                      UnknownData00[0x40];                                      
	class UPresetDesc*                                 PresetDesc;                                               
	class UPresetDesc*                                 OldPresetDesc;                                            
	unsigned char                                      UnknownData01[0x18];                                      
	TArray<struct FPresetResetSlotState>               PresetResetOldStates;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.DefaultValueCommandData");
		return pStaticClass;
	}

};




class UDefaultValueExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.DefaultValueExpression");
		return pStaticClass;
	}


	static void SetType(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Type);
	static struct FBlockyLuaHandle GetType(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateDefaultValueExpression2(const struct FBlockyLuaHandle& typeRef);
	static struct FBlockyLuaHandle CreateDefaultValueExpression(const struct FBlockyLuaHandle& typeClass);
};




class UDoNum : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x330];                                     
	class UBrushData*                                  IconBrush;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.DoNum");
		return pStaticClass;
	}

};




class UEnumDesc : public UObject
{
public:
	struct FString                                     HotfixUserData;                                           
	class UEnum*                                       EnumPtr;                                                  
	unsigned char                                      UnknownData00[0x60];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.EnumDesc");
		return pStaticClass;
	}

};




class UExecuteablePreview : public UExecuteable
{
public:
	TArray<struct FBlockPreviewBrush>                  Rects;                                                    
	class UBrushData*                                  DisableIconBrush;                                         
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ExecuteablePreview");
		return pStaticClass;
	}

};




class UForEach : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x4E8];                                     
	class UBrushData*                                  IconBrush;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ForEach");
		return pStaticClass;
	}

};




class UFunctionDesc : public UObject
{
public:
	struct FString                                     HotfixUserData;                                           
	struct FString                                     KeyName;                                                  
	struct FString                                     CodeName;                                                 
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     Host;                                                     
	struct FString                                     Description;                                              
	unsigned char                                      UnknownData01[0x70];                                      
	class UClass*                                      BlockClass;                                               
	unsigned char                                      UnknownData02[0x10];                                      
	TArray<struct FFunctionParameter>                  Parameters;                                               
	TArray<struct FFunctionParameter>                  AddEventParameters;                                       
	TMap<struct FString, struct FString>               ModuleRequires;                                           
	unsigned char                                      UnknownData03[0x80];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.FunctionDesc");
		return pStaticClass;
	}


	struct FString GetMenu();
	struct FString GetCategory();
};




class UFunctionInvokeArgumentExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.FunctionInvokeArgumentExpression");
		return pStaticClass;
	}


	static void SetOperationType(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyFunctionArgumentAttribute> Value);
	static void SetExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetAdditionPostCode(const struct FBlockyLuaHandle& ptr, const struct FString& Value);
	static TEnumAsByte<EBlockyFunctionArgumentAttribute> GetOperationType(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetExpression(const struct FBlockyLuaHandle& ptr);
	static struct FString GetAdditionPostCode(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateFunctionInvokeArgumentExpression();
};




class UFunctionInvokeExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.FunctionInvokeExpression");
		return pStaticClass;
	}


	static void SetReturnValue(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetHost(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetFunctionName(const struct FBlockyLuaHandle& ptr, const struct FString& Value);
	static void SetComment(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetArguments(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value);
	static struct FBlockyLuaHandle GetReturnValue(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetHost(const struct FBlockyLuaHandle& ptr);
	static struct FString GetFunctionName(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetComment(const struct FBlockyLuaHandle& ptr);
	static TArray<struct FBlockyLuaHandle> GetArguments(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateFunctionInvokeExpression();
};




class UGetArrayElement : public UBlockBase
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     
	class UBrushData*                                  BrushBGSelected;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.GetArrayElement");
		return pStaticClass;
	}

};




class UHotfixUtility : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.HotfixUtility");
		return pStaticClass;
	}


	struct FString UVarDefiner_GetCurrentLocateShowName(class UVarDefiner* pThis);
	struct FString UPresetDesc_GetLocaleName(class UPresetDesc* PresetDesc);
	struct FString UNumFromTo_UpdateParameterDisplayName_Index_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UNumFromTo_UpdateParameterDisplayName_CurrNum_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UNumFromTo_SetFunctionDesc_NamedVarBlock_DisplayName(class UFunctionDesc* Desc, int ParamIdx, const struct FString& DisplayName);
	struct FString UNumFromTo_InitializeBlock_IndexBlock_Name(class UNumFromTo* NumFromTo, const struct FString& Name);
	struct FString UNumFromTo_InitializeBlock_CurrentBlock_Name(class UNumFromTo* NumFromTo, const struct FString& Name);
	struct FString UNamedVar_UpdateFormater_VarFormatNameText(class UNamedVar* var);
	struct FString UForEach_UpdateParameterDisplayName_ForeachIndex_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UForEach_UpdateParameterDisplayName_ForeachElement_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UForEach_UpdateParameterDisplayName_ElementNormalDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UForEach_UpdateParameterDisplayName_ElementDisableDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UForEach_SetFunctionDesc_ForeachIndex_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UForEach_SetFunctionDesc_ForeachElement_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UForEach_SetFunctionDesc_ElementNormalDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UForEach_SetFunctionDesc_ElementDisableDisplay(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UExecuteable_SetFunctionDesc_ParamDisplayName(class UFunctionDesc* Desc, int ParamIdx, const struct FString& ParamDisplayName);
	struct FString UEnumDesc_GetCurrentLocaleEnumValueName(class UEnumDesc* EnumDesc, const struct FName& enumValueName, const struct FString& enumValueLocName, bool useDefaultWhenNotFound);
	struct FString UEnumDesc_GetCurrentLocaleEnumTypeName(class UEnumDesc* EnumDesc, const struct FString& EnumTypeName, bool useDefaultWhenNotFound);
	struct FString UDoNum_UpdateParameterDisplayName_CurrentIndexSlotDisplayName(class UFunctionDesc* Desc, const struct FString& CurrentIndexDisplayName);
	struct FString UDoNum_SetFunctionDesc_CurrentIndexSlotDisplayName(class UFunctionDesc* Desc, const struct FString& CurrentIndexDisplayName);
	struct FString UDefineFunction_SetFunctionDesc_ParamName(class UFunctionDesc* Desc, int ParamIdx, const struct FString& ParamName);
	struct FString UCommonUIFunctionLibrary_GetTranslateString(const struct FString& KeyString);
	struct FString UCommonUIFunctionLibrary_GetLocaleString(const struct FString& KeyString);
	struct FString UColorDesc_GetLocaleName(class UColorDesc* ColorDesc);
	struct FString UBlockyTimer_UpdateParameterDisplayName_CurrentCount_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UBlockyTimer_SetFunctionDesc_CurrentCount_DisplayName(class UFunctionDesc* Desc, const struct FString& DisplayName);
	struct FString UBlockySearchWidget_RefreshTabContainerView_ContentName(class UUserWidget* pThis);
	struct FString UBlockySearchWidget_RefreshTabContainerView_CategoryName(class UUserWidget* pThis, class UBlockyCategoryItemObject* Category);
	struct FString UBlockyMenuWidget_UpdateMenus_MenuWidgetName(class UUserWidget* pThis, class UBlockyMenuItemObject* MenuItem);
	struct FString UBlockyMenuItemObject_Search_SearchMatchingResults_ItemObjectString(class UBlockyMenuItemObject_Search* MenuItem, class UBlockyBlockListItemObject* ItemObject);
	struct FString UBlockyMenuItemObject_Search_PaintSearchedItems_CategoryName(class UBlockyMenuItemObject_Search* MenuItem, class UBlockyCategoryItemObject* CategoryItem);
	struct FString UBlockyMenuItemObject_Search_PaintSearchedContentTitle();
	struct FString UBlockyMenuItemObject_Search_GetBlockSearchString_NamedVarName(class UNamedVar* var);
	struct FString UBlockyMenuItemObject_Search_GetBlockSearchString_Block(class UBlockBase* InBlock);
	struct FString UBlockyMenuItemObject_Paint_CategoryName(class UBlockyMenuItemObject* MenuItem, class UBlockyCategoryItemObject* CategoryItem);
	struct FString UBlockyGraphData_GetCustomNames_CustomName(class UCustomConfig* Custom);
	void UBlockyGraph_LoadGraphFromXnd_OnLocalVarBlockLoaded(class UBlockyGraph* pThis, class UNamedVar* bLock);
	void UBlockyGraph_LoadGraphFromXnd_OnBlockLoaded(class UBlockyGraph* pThis, class UBlockBase* bLock);
	struct FString UBlockyEditor_OnClickSlot_TypeFilterMenuName(class UBlockBase* slotHost, const struct FHotFixSlotHandle& Handle, const struct FString& menuName);
	struct FString UBlockyEditor_OnClickSlot_TypeFilterCategoryName(class UBlockBase* slotHost, const struct FHotFixSlotHandle& Handle, const struct FString& CategoryName);
	struct FString UBlockyEditor_OnClickSlot_SelectFromSceneWidget_DefaultShowName(class UBlockBase* slotHost, const struct FHotFixSlotHandle& Handle, const struct FString& slotCustomClickTypeName);
	struct FString UBlockyEditor_OnClickSlot_EnumName(class UBlockBase* slotHost, class UEnumDesc* EnumDesc, const struct FName& EnumName, const struct FString& EnumString);
	struct FString UBlockyEditor_OnClickSlot_CategoryItemName(class UBlockBase* slotHost, const struct FString& CategoryName);
	struct FString UBlockyEditor_OnClickSlot_BPMenuItemName(class UBlockBase* slotHost, const struct FString& menuName);
	struct FString UBlockyEditor_GetLocaleString(const struct FString& KeyString);
	struct FString UBlockyCategoryWidget_FilterWithBlockyMenuItem_WidgetName(class UUserWidget* pThis, class UBlockyCategoryItemObject* Category);
	struct FString UBlockyBlockListItemObject_Variable_GetStingUsedToSearch(class UBlockyBlockListItemObject_Variable* ItemObject);
	struct FString UBlockyBlockListItemObject_GetStingUsedToSearch(class UBlockyBlockListItemObject* ItemObject);
	struct FString UBlockyBlockListItemObject_Custom_GetStingUsedToSearch(class UBlockyBlockListItemObject_Custom* ItemObject);
	static bool Slot_IsValidPreset(const struct FHotFixSlotHandle& Handle, class UPresetDesc* Preset);
	static bool Slot_IsValidItem(const struct FHotFixSlotHandle& Handle, class UBlockyBlockListItemObject* Item);
	static bool Slot_IsValidHandle(const struct FHotFixSlotHandle& Handle);
	static bool Slot_IsValidBlock(const struct FHotFixSlotHandle& Handle, class UBlockBase* blk);
	static bool Slot_HasClickType(const struct FHotFixSlotHandle& Handle, int Type);
	static class UPresetDesc* Slot_GetSlotPresetDesc(const struct FHotFixSlotHandle& Handle);
	static bool Slot_GetSlotName(const struct FHotFixSlotHandle& Handle, struct FText* OutValue);
	static bool Slot_GetSlotItemType(const struct FHotFixSlotHandle& Handle, struct FType* OutValue);
	static bool Slot_GetSlotGetColorValue(const struct FHotFixSlotHandle& Handle, struct FLinearColor* OutValue);
	static bool Slot_GetSlotDisplayName(const struct FHotFixSlotHandle& Handle, struct FString* OutValue);
	static bool Slot_GetSlotDefaultValue(const struct FHotFixSlotHandle& Handle, struct FString* OutValue);
	static bool Slot_GetSlotCustomClickTypeName(const struct FHotFixSlotHandle& Handle, struct FString* OutValue);
	static bool Slot_GetSlotCustomClickType(const struct FHotFixSlotHandle& Handle, struct FString* OutValue);
	static class UColorDesc* Slot_GetSlotColorDesc(const struct FHotFixSlotHandle& Handle);
	static bool Slot_GetSlotClickType(const struct FHotFixSlotHandle& Handle, int* OutValue);
	static class UBlockBase* Slot_GetHostBlock(const struct FHotFixSlotHandle& Handle);
	static bool Slot_CanSetBlock(const struct FHotFixSlotHandle& Handle, class UBlockBase* Host, class UBlockBase* blk);
	static void SetTypeValue(int NewValue, struct FType* Type);
	static int GetTypeValue(const struct FType& Type);
	struct FString GetTranslateString_ShowTips(const struct FString& Tip);
	struct FString GetTranslateString(const struct FString& String);
	struct FString GetDisplayNameString_SlotDisplayName(const struct FHotFixSlotHandle& Handle, const struct FString& SlotDisplayName, const struct FString& SlotName);
	struct FString FPresetTypeData_GetLocalTypeName(const struct FPresetTypeData& PresetTypeData);
	struct FString FMsgData_CreateMessageData_InfoString_ReplaceTriggerName(class UFunctionDesc* Desc, const struct FString& ListItemFormatString, struct FString* InfoString);
	struct FString FMsgData_CreateMessageData_InfoString_ReplaceBlockName(class UBlockBase* bLock, const struct FString& ListItemFormatString, struct FString* InfoString);
	struct FString FMsgData_CreateMessageData_GetInfoTranslateString(class UBlockBase* bLock, const struct FHotFixSlotHandle& Slot, const struct FString& Info);
	struct FString FLocaleFormatter_UpdateVarFormatters_SeparatorStr(const struct FString& str);
	struct FString FLocaleFormatter_InitializeListItemFormats_ListItemFormatString(const struct FString& ListItemFormatString, bool bNeedLocalization);
	struct FString FLocaleFormatter_InitializeFormats_FormatString(const struct FString& FormatString, bool bNeedLocalization);
	struct FString FLocaleFormatter_FFormatData_SlotIdx_OnPaintListItem_ParamDisplayName(class UBlockyBlockListItemObject* ListItemObject, int ParamIdx, const struct FString& DisplayName);
	struct FString FLocaleFormatter_FFormatData_SlotIdx_OnArrangeListItem_ParamDisplayName(class UBlockyBlockListItemObject* ListItemObject, int ParamIdx, const struct FString& DisplayName);
};




class UIfElse : public UExecuteable
{
public:
	class UIfElseCondition*                            IfCondition;                                              
	TArray<class UIfElseCondition*>                    ElseConditions;                                           
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.IfElse");
		return pStaticClass;
	}

};




class UIfElseCondition : public UExeSequencerBase
{
public:
	class UIfElse*                                     ParentIfElse;                                             
	unsigned char                                      UnknownData00[0x1F0];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.IfElseCondition");
		return pStaticClass;
	}

};




class UIndexerOperatorExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.IndexerOperatorExpression");
		return pStaticClass;
	}


	static void SetTarget(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetIndices(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value);
	static struct FBlockyLuaHandle GetTarget(const struct FBlockyLuaHandle& ptr);
	static TArray<struct FBlockyLuaHandle> GetIndices(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateIndexerOperatorExpression();
};




class UInsertArrayElement : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0x340];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.InsertArrayElement");
		return pStaticClass;
	}

};




class UJsonSerializable : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.JsonSerializable");
		return pStaticClass;
	}

};




class ULogicBase : public UBlockBase
{
public:
	class UBrushData*                                  BrushBGSelected;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.LogicBase");
		return pStaticClass;
	}

};




class ULogicAnd : public ULogicBase
{
public:
	unsigned char                                      UnknownData00[0x340];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.LogicAnd");
		return pStaticClass;
	}

};




class ULogicCompare : public ULogicBase
{
public:
	unsigned char                                      UnknownData00[0x4C8];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.LogicCompare");
		return pStaticClass;
	}

};




class ULogicNot : public ULogicBase
{
public:
	unsigned char                                      UnknownData00[0x198];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.LogicNot");
		return pStaticClass;
	}

};




class ULogicOr : public ULogicBase
{
public:
	unsigned char                                      UnknownData00[0x340];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.LogicOr");
		return pStaticClass;
	}

};




class UMember : public ULogicBase
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.Member");
		return pStaticClass;
	}

};




class UNullExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.NullExpression");
		return pStaticClass;
	}


	static struct FBlockyLuaHandle CreateNullExpression();
};




class UNumFromTo : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x808];                                     
	class UBrushData*                                  IconBrush;                                                
	unsigned char                                      UnknownData01[0x1C0];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.NumFromTo");
		return pStaticClass;
	}

};




class UPostCustomEvent : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.PostCustomEvent");
		return pStaticClass;
	}

};




class UPresetDesc : public UObjectDesc
{
public:
	struct FString                                     HotfixUserData;                                           
	struct FString                                     KeyName;                                                  
	struct FString                                     Name;                                                     
	struct FString                                     CodeName;                                                 
	TArray<int>                                        Tag;                                                      
	struct FString                                     Icon;                                                     
	struct FText                                       Menu;                                                     
	struct FText                                       Category;                                                 
	bool                                               isValidityPreset;                                         
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                PresetValidityDuration;                                   
	struct FString                                     AnimationPath;                                            
	struct FString                                     SoundPath;                                                
	bool                                               IsSelected;                                               
	bool                                               IsDSNeedSave;                                             
	unsigned char                                      UnknownData01[0x16];                                      
	bool                                               Visible;                                                  
	bool                                               Removed;                                                  
	bool                                               Localed;                                                  
	bool                                               IsCustomVar;                                              
	bool                                               IsCustomVarArray;                                         
	bool                                               isNeedSelectCheck;                                        
	unsigned char                                      UnknownData02[0x2];                                       
	struct FDependResInfo                              ResInfo;                                                  
	struct FString                                     CustomVarType;                                            
	struct FString                                     TypeSyncValueTypeName;                                    
	bool                                               bTypeSyncValueIsArray;                                    
	unsigned char                                      UnknownData03[0x7];                                       
	TArray<unsigned char>                              CustomExtraData;                                          
	unsigned char                                      DynamicType;                                              
	bool                                               Exclude;                                                  
	unsigned char                                      UnknownData04[0x2];                                       
	int                                                SortOrder;                                                
	TArray<struct FString>                             ReferencedByBlockIDs;                                     
	unsigned char                                      UnknownData05[0x1C8];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.PresetDesc");
		return pStaticClass;
	}


	bool NameContainsString(const struct FString& filter);
	bool IsNameEmpty();
	bool IsCodeNameEmpty();
	bool HasIcon();
	struct FType GetType();
	int GetPresetValidityDurationValue();
	struct FString GetLocaleName();
};




class UPrimitiveExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.PrimitiveExpression");
		return pStaticClass;
	}


	static TEnumAsByte<EBlockyValueType> GetValueType(const struct FBlockyLuaHandle& ptr);
	static void GetValueString(const struct FBlockyLuaHandle& ptr, struct FString* str);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_UInt8(int Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_UInt64(const struct FBlockyLuaHandle& Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_UInt32(int Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_UInt16(int Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Str(const struct FString& Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Int8(int Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Int64(const struct FBlockyLuaHandle& Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Int32(int Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Int16(int Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Float(float Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Double(const struct FBlockyLuaHandle& Value);
	static struct FBlockyLuaHandle CreatePrimitiveExpression_Bool(bool Value);
	static void Clear(const struct FBlockyLuaHandle& ptr);
};




class URepeatFunction : public UCallFunction
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.RepeatFunction");
		return pStaticClass;
	}

};




class UReturn : public UExecuteable
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.Return");
		return pStaticClass;
	}

};




class USelectionData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      
	class UBlockBase*                                  bLock;                                                    
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.SelectionData");
		return pStaticClass;
	}


	bool IsCurrentSlot();
};




class USelfReferenceExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.SelfReferenceExpression");
		return pStaticClass;
	}


	static struct FBlockyLuaHandle CreateSelfReferenceExpression();
};




class USetArrayElement : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0x340];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.SetArrayElement");
		return pStaticClass;
	}

};




class USetVar : public UExecuteable
{
public:
	unsigned char                                      UnknownData00[0x330];                                     
	class UBrushData*                                  IconBrush;                                                
	class UBrushData*                                  SelectionBG;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.SetVar");
		return pStaticClass;
	}

};




class USnippetExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.SnippetExpression");
		return pStaticClass;
	}


	static struct FString GetSnippetString(const struct FBlockyLuaHandle& ptr);
	static TArray<struct FBlockyLuaHandle> GetParameters(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateDefaultValueExpression();
};




class UStatementBase : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.StatementBase");
		return pStaticClass;
	}


	static void SetNextExpr(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& nextExpr);
	static void ReleaseExpression(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetNextExpr(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateStatementBase();
};




class UVariableDeclaration : public UStatementBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.VariableDeclaration");
		return pStaticClass;
	}


	static void SetVisitMode(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyVisitMode> visitMode);
	static void SetVariableName(const struct FBlockyLuaHandle& ptr, const struct FString& Name);
	static void SetInitValue(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& initValue);
	static void SetComment(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Comment);
	static TEnumAsByte<EBlockyVisitMode> GetVisitMode(const struct FBlockyLuaHandle& ptr);
	static struct FString GetVariableName(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetInitValue(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetComment(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateVariableDeclaration();
};




class UAssignOperatorStatement : public UStatementBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.AssignOperatorStatement");
		return pStaticClass;
	}


	static void SetTo(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& To);
	static void SetFrom(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& From);
	static struct FBlockyLuaHandle GetTo(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetFrom(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateAssignOperatorStatement();
};




class UExecuteSequenceStatement : public UStatementBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ExecuteSequenceStatement");
		return pStaticClass;
	}


	static void SetSequence(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Sequence);
	static TArray<struct FBlockyLuaHandle> GetSequence(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateExecuteSequenceStatement();
};




class UReturnStatement : public UStatementBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ReturnStatement");
		return pStaticClass;
	}


	static struct FBlockyLuaHandle CreateReturnStatement();
};




class UIfStatement : public UStatementBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.IfStatement");
		return pStaticClass;
	}


	static void SetTrueStatement(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& trueStatement);
	static void SetFalseStatement(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& falseStatement);
	static void SetElseIfs(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> elseIfs);
	static void SetCondition(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Condition);
	static struct FBlockyLuaHandle GetTrueStatement(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetFalseStatement(const struct FBlockyLuaHandle& ptr);
	static TArray<struct FBlockyLuaHandle> GetElseIfs(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetCondition(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateIfStatement();
};




class UForLoopStatement : public UStatementBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ForLoopStatement");
		return pStaticClass;
	}


	static void SetStepExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& stepExpression);
	static void SetLoopIndexName(const struct FBlockyLuaHandle& ptr, const struct FString& loopIndexName);
	static void SetLoopBody(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopBody);
	static void SetEndExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& endExpression);
	static void SetBeginExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& beginExpression);
	static struct FBlockyLuaHandle GetStepExpression(const struct FBlockyLuaHandle& ptr);
	static struct FString GetLoopIndexName(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetLoopBody(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetEndExpression(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetBeginExpression(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateForLoopStatement();
};




class UForeachLoopStatement : public UStatementBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ForeachLoopStatement");
		return pStaticClass;
	}


	static void SetLoopItemName(const struct FBlockyLuaHandle& ptr, const struct FString& loopIndexName);
	static void SetLoopItemExp(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopItemExp);
	static void SetLoopIndexName(const struct FBlockyLuaHandle& ptr, const struct FString& loopIndexName);
	static void SetLoopBody(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopBody);
	static struct FString GetLoopItemName(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetLoopItemExp(const struct FBlockyLuaHandle& ptr);
	static struct FString GetLoopIndexName(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetLoopBody(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateForeachLoopStatement();
};




class UWhileLoopStatement : public UStatementBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.WhileLoopStatement");
		return pStaticClass;
	}


	static void SetLoopBody(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& loopBody);
	static void SetCondition(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Condition);
	static struct FBlockyLuaHandle GetLoopBody(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetCondition(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateWhileLoopStatement();
};




class UContinueStatement : public UStatementBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ContinueStatement");
		return pStaticClass;
	}


	static struct FBlockyLuaHandle CreateContinueStatement();
};




class UBreakStatement : public UStatementBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.BreakStatement");
		return pStaticClass;
	}


	static struct FBlockyLuaHandle CreateBreakStatement();
};




class UCommentStatement : public UStatementBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.CommentStatement");
		return pStaticClass;
	}


	static void SetNewLine(const struct FBlockyLuaHandle& ptr, bool newLine);
	static void SetCommentString(const struct FBlockyLuaHandle& ptr, const struct FString& commentString);
	static bool GetNewLine(const struct FBlockyLuaHandle& ptr);
	static struct FString GetCommentString(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateCommentStatement();
};




class UExpressionStatement : public UStatementBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.ExpressionStatement");
		return pStaticClass;
	}


	static void SetNextStatement(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& nextStatement);
	static void SetExpression(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& expression);
	static struct FBlockyLuaHandle GetNextStatement(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetExpression(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateExpressionStatement();
};




class UStatementsData : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.StatementsData");
		return pStaticClass;
	}

};




class UStringAppend : public UBlockBase
{
public:
	unsigned char                                      UnknownData00[0x340];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.StringAppend");
		return pStaticClass;
	}

};




class UStringAppendExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.StringAppendExpression");
		return pStaticClass;
	}


	static void SetRight(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetLeft(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetExtras(const struct FBlockyLuaHandle& ptr, TArray<struct FBlockyLuaHandle> Value);
	static struct FBlockyLuaHandle GetRight(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetLeft(const struct FBlockyLuaHandle& ptr);
	static TArray<struct FBlockyLuaHandle> GetExtras(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateStringAppendExpression();
};




class USubGraphCommandData : public UBlockyCommandData
{
public:
	struct FString                                     Name;                                                     
	struct FString                                     Type;                                                     
	struct FString                                     SrcName;                                                  
	TArray<int>                                        InCallStackPos;                                           
	int                                                IdxInSubBLocky;                                           
	unsigned char                                      UnknownData00[0x4];                                       
	class UBlockyGraph*                                OpGraph;                                                  
	struct FString                                     SavedName;                                                
	TArray<class UBlockyGraph*>                        PrevCallStack;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.SubGraphCommandData");
		return pStaticClass;
	}

};




class UTemplateCommandData : public UBlockyCommandData
{
public:
	class UBlockyGraph*                                Template;                                                 
	struct FString                                     CreatedGraphName;                                         
	struct FString                                     CreatedGraphType;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.TemplateCommandData");
		return pStaticClass;
	}

};




class UTypeConvertDesc : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FString                                     HotfixUserData;                                           
	unsigned char                                      UnknownData01[0x20];                                      
	class UFunctionDesc*                               FunctionDesc;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.TypeConvertDesc");
		return pStaticClass;
	}

};




class UTypeFilter : public UBlockBase
{
public:
	unsigned char                                      UnknownData00[0x198];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.TypeFilter");
		return pStaticClass;
	}

};




class UTypeReference : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.TypeReference");
		return pStaticClass;
	}


	static void SetTypeName(const struct FBlockyLuaHandle& Self, const struct FString& Name);
	static void ReleaseTypeReference(const struct FBlockyLuaHandle& Self);
	static struct FString GetTypeName(const struct FBlockyLuaHandle& Self);
	static struct FBlockyLuaHandle FindClass(const struct FString& Name);
	static struct FBlockyLuaHandle CreateTypeReference3(const struct FBlockyLuaHandle& klass, int numOfPointer, bool isRefer);
	static struct FBlockyLuaHandle CreateTypeReference();
	struct FBlockyLuaStub AsStub(const struct FBlockyLuaHandle& ptr);
};




class UTypeString : public UBlockBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.TypeString");
		return pStaticClass;
	}

};




class UUnaryOperatorExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.UnaryOperatorExpression");
		return pStaticClass;
	}


	static void SetValue(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Value);
	static void SetOperation(const struct FBlockyLuaHandle& ptr, TEnumAsByte<EBlockyUnaryOperation> Op);
	static struct FBlockyLuaHandle GetValue(const struct FBlockyLuaHandle& ptr);
	static TEnumAsByte<EBlockyUnaryOperation> GetOperation(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateUnaryOperatorExpression();
};




class UVarDefiner : public UObject
{
public:
	struct FType                                       BPType;                                                   
	struct FString                                     HotfixUserData;                                           
	unsigned char                                      UnknownData00[0x10];                                      
	TMap<struct FString, struct FString>               ShowNameMap;                                              
	struct FString                                     ShowIcon;                                                 
	struct FString                                     ShowIconSelected;                                         
	struct FString                                     DefaultValueString;                                       
	bool                                               bHideInCustom;                                            
	TEnumAsByte<EBlockyVarInitType>                    InitType;                                                 
	unsigned char                                      UnknownData01[0x6];                                       
	TArray<struct FString>                             ExcludePresetCategories;                                  
	TArray<struct FString>                             ExcludePresetCodeNames;                                   
	unsigned char                                      UnknownData02[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.VarDefiner");
		return pStaticClass;
	}


	void SetType(const struct FType& Value);
	TEnumAsByte<EBlockyVariableType> GetVarTypeEnum();
	TEnumAsByte<EBlockyListItemType> GetTypeEnum();
	struct FType GetType();
	struct FString GetFirstShowName();
	struct FString GetCurrentLocateShowName();
};




class UVariableReferenceExpression : public UExpressionBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.VariableReferenceExpression");
		return pStaticClass;
	}


	static void SetVariableName(const struct FBlockyLuaHandle& ptr, const struct FString& Name);
	static void SetHost(const struct FBlockyLuaHandle& ptr, const struct FBlockyLuaHandle& Host);
	static struct FString GetVariableName(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle GetHost(const struct FBlockyLuaHandle& ptr);
	static struct FBlockyLuaHandle CreateVariableReferenceExpression2(const struct FBlockyLuaHandle& Host, const struct FString& VariableName);
	static struct FBlockyLuaHandle CreateVariableReferenceExpression(const struct FString& VariableName);
};




class UWhile : public UExeSequencerBase
{
public:
	unsigned char                                      UnknownData00[0x198];                                     
	class UBrushData*                                  IconBrush;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class BlockyLuaCore.While");
		return pStaticClass;
	}

};


}

