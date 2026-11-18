#pragma once


 
namespace SDK
{






class UCustomizePanelBase : public UCanvasPanel
{
public:
	struct FScriptMulticastDelegate                    OnCustomLayoutChangeEvent;                                
	struct FMargin                                     DetectMargin;                                             
	struct FCustomLayoutBlueprintCode                  DefaultLayoutCode;                                        
	int                                                CustomType;                                               
	float                                              Opacity;                                                  
	bool                                               bInvalid;                                                 
	bool                                               bInterceptChildInput;                                     
	bool                                               bMovable;                                                 
	unsigned char                                      UnknownData00[0x5];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CustomLayout.CustomizePanelBase");
		return pStaticClass;
	}


	void SetScale(float Scale);
	void SetPosition(const struct FVector2D& Position);
	void SetOpacityWithClamp(float InOpacity, float MinOpacity, float MaxOpacity);
	void SetOpacity(float InOpacity);
	void SetMovable(bool bInMovable);
	void SetMaxScale(float Scale);
	void SetInvalid(bool Invalid);
	void SetInterceptChildInput(bool bInIntercept);
	void SetDrawMargin(bool bDraw);
	void SetDetectMargin(const struct FMargin& InMargin);
	void SetDesireScale(float Scale);
	void SetDesirePosition(const struct FVector2D& Position);
	void SetDefaultLayoutCode(const struct FCustomLayoutBlueprintCode& InCode);
	void SetDefaultLayoutByPositionAndAnchors(const struct FVector2D& InPosition, const struct FAnchors& InAnchors);
	void SetCustomType(int NewType);
	void RestoreInBound();
	void ResetMaxScale();
	bool IsOutOfBound(float InvisibleCheckOffset);
	void InitDefaultLayoutData();
	float GetScale();
	struct FVector2D GetPosition();
	float GetOpacity();
	bool GetMovable();
	float GetMaxScale();
	struct FUIElemLayoutDetail GetLayoutData();
	struct FCustomLayoutBlueprintCode GetLayoutCode();
	bool GetInvalid();
	struct FUIElemLayoutDetail GetDefaultLayoutData();
	int GetCustomType();
	struct FVector2D ClampPosition(const struct FVector2D& DesiredPos);
	void ApplyLayoutData(const struct FUIElemLayoutDetail& LayoutDetail);
	void ApplyLayoutCode(const struct FCustomLayoutBlueprintCode& InCode);
	void ApplyDefaultLayout();
};




class UCustomLayoutBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CustomLayout.CustomLayoutBlueprintLibrary");
		return pStaticClass;
	}


	static struct FUIElemLayoutDetail MakeLayoutDetail(int Type, EAnchorsType AnchorType, const struct FVector2D& Offset);
	static bool GenerateUserSettingFromIndexer(class UDynamicCustomIndexer* InIndexer, class UCustomLayoutUserSetting* InOutUserSetting);
	static class UCustomLayoutUserSetting* CreateCustomLayoutUserSetting(const struct FString& InSaveSlotName);
	static struct FAnchors Conv_TypeToAnchors(EAnchorsType InType);
	static uint64_t Conv_TouchStatInfoToLong(const struct FTouchStatInfo& Info);
	static struct FTouchStatInfo Conv_LongToTouchStatInfo(uint64_t Num);
	static struct FCustomLayoutBlueprintCode Conv_LayoutDetailToCode(const struct FUIElemLayoutDetail& InDetail);
	static struct FUIElemLayoutDetail Conv_CodeToLayoutDetail(const struct FCustomLayoutBlueprintCode& InCode, int Type);
	static EAnchorsType Conv_AnchorsToType(const struct FAnchors& InAnchors);
};




class UCustomLayoutSubsystem : public UGameInstanceSubsystem
{
public:
	TArray<class UCustomLayoutUserSetting*>            UserSettingSlots;                                         
	struct FScriptMulticastDelegate                    OnPanelTouchPreview;                                      
	unsigned char                                      UnknownData00[0x58];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CustomLayout.CustomLayoutSubsystem");
		return pStaticClass;
	}


	void UnregisterCustomPanel(class UCustomPanel* InCustomizePanel);
	static void SetScreenPadding(const struct FMargin& InOffset);
	void SetEditMode(bool bEnable);
	void RemoveUserSettingSlot(class UCustomLayoutUserSetting* InUserSetting);
	void RegisterCustomPanel(class UCustomPanel* InCustomizePanel);
	void InsertUserSettingSlot(class UCustomLayoutUserSetting* InUserSetting, int Index);
	class UCustomLayoutUserSetting* GetUserSettingInSlot(const struct FString& Name);
	class UCustomPanel* GetRegisteredPanel(int InCustomType);
	void FlushRegisteredPanelMap();
	bool FindLayoutDetail(int InCustomType, struct FUIElemLayoutDetail* OutDetail);
	void ClearUserSettingSlots();
	void ClearRegisteredPanelMap();
	void BroadcastCustomLayoutChange(TArray<int> InCustomTypeList);
	void AddUserSettingSlot(class UCustomLayoutUserSetting* InUserSetting);
};




class UCustomLayoutUserSetting : public USaveGame
{
public:
	int                                                CodecVersion;                                             
	int                                                ViewportWidth;                                            
	int                                                ViewportHeight;                                           
	float                                              ViewportScale;                                            
	struct FDateTime                                   TimeTag;                                                  
	struct FString                                     SaveSlotName;                                             
	TMap<int, uint64_t>                                LayoutCodeMap;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CustomLayout.CustomLayoutUserSetting");
		return pStaticClass;
	}


	void UpdateTimeTag();
	void SetTimeTagFromUnixTimestamp(int64_t InUnixTimestamp);
	void SetDataByLayoutDetail(int InCustomType, const struct FUIElemLayoutDetail& InData);
	void RemoveData(int InCustomType);
	int64_t GetTimeTagAsUnixTimestamp();
	uint64_t GetLayoutCodeCheckSum();
	struct FUIElemLayoutDetail GetDataAsLayoutDetail(int InCustomType);
	void GetCustomTypeList(TArray<int>* OutKeys);
	bool Contains(int InCustomType);
};




class UCustomPanel : public UCustomizePanelBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CustomLayout.CustomPanel");
		return pStaticClass;
	}


	void UpdateCustomLayout();
	void SetEditable(bool bEditable);
};




class UDynamicCustomIndexer : public UDataAsset
{
public:
	TMap<struct FString, struct FDynamicCustomInfo>    InfoMap;                                                  
	TMap<int, struct FAnchorData>                      DefaultLayoutData;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CustomLayout.DynamicCustomIndexer");
		return pStaticClass;
	}


	bool SetupDefaultLayoutForPanel(int CustomType, class UCustomizePanelBase* Panel);
	static class UDynamicCustomIndexer* GetIndexer(const struct FString& Path);
	TMap<int, class UCustomizePanelBase*> CreateDynamicCustomWidgets(TArray<int> InCustomTypeList, class UPanelWidget* Container, bool bIgnoreDPIScale, TMap<int, class UCustomizePanelBase*>* CustomPanelMap);
};




class UPinchDragWidget : public UUserWidget
{
public:
	struct FScriptDelegate                             OnDrag;                                                   
	struct FScriptDelegate                             OnPinch;                                                  
	struct FScriptDelegate                             OnRelease;                                                
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CustomLayout.PinchDragWidget");
		return pStaticClass;
	}


	void SetPinchEnabled(bool bEnabled);
	void SetDragEnabled(bool bEnabled);
	static struct FVector2D ScreenDeltaToParentLocal(class UWidget* Widget, const struct FVector2D& ScreenDelta);
	void Reset();
	bool IsPinchEnabled();
	bool IsFirstPointIndex(const struct FPointerEvent& InPointerEvent);
	bool IsDragEnabled();
};




class USettingCustomPanel : public UCustomizePanelBase
{
public:
	ESCPDisplayState                                   DisplayState;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	class UMaterialInterface*                          SelectedImageCircularFlashEffectMaterial;                 
	class UMaterialInterface*                          SelectedImageSquareFlashEffectMaterial;                   
	unsigned char                                      UnknownData01[0x10];                                      
	TMap<struct FString, TWeakObjectPtr<class UWidget>> WidgetPtrMap;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CustomLayout.SettingCustomPanel");
		return pStaticClass;
	}


	void SetSelectedImageOriginEffect();
	void SetSelectedImageFlashEffect();
	void SetDisplayState(ESCPDisplayState State);
	void OnTouchPreview();
	bool IsSquareFlashEffectAssetName(const struct FString& InAssetName);
	bool IsCircleFlashEffectAssetName(const struct FString& InAssetName);
	class UWidget* GetWidgetByType(class UWidget* RootWidget, class UClass* WidgetType);
	class UImage* GetSelectedImage();
	class UWidget* GetParentWidget();
	class UWidget* GetNamedWidgetFromOwner(const struct FString& Prefix);
	class UImage* GetInvalidImage();
	struct FVector2D GetCenterPositionInScreenSpace(class UWidget* FullScreenWidget);
	void FlashHighlight(float Seconds);
	struct FVector2D ConvertCenterPositionFromScreenSpace(class UWidget* FullScreenWidget, const struct FVector2D& SSPosition);
};


}

