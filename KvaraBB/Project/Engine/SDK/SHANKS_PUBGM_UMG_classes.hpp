#pragma once


 
namespace SDK
{






class UVisual : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Visual");
		return pStaticClass;
	}

};




class UWidget : public UVisual
{
public:
	class UPanelSlot*                                  Slot;                                                     
	struct FScriptDelegate                             bIsEnabledDelegate;                                       
	struct FText                                       ToolTipText;                                              
	struct FScriptDelegate                             ToolTipTextDelegate;                                      
	class UWidget*                                     ToolTipWidget;                                            
	struct FScriptDelegate                             ToolTipWidgetDelegate;                                    
	struct FScriptDelegate                             VisibilityDelegate;                                       
	struct FWidgetTransform                            RenderTransform;                                          
	struct FVector2D                                   RenderTransformPivot;                                     
	unsigned char                                      bIsVariable : 1;                                          
	unsigned char                                      bCreatedByConstructionScript : 1;                         
	unsigned char                                      bIsEnabled : 1;                                           
	unsigned char                                      bOverride_Cursor : 1;                                     
	unsigned char                                      bIsVolatile : 1;                                          
	unsigned char                                      bIsVolatileThrottle : 1;                                  
	unsigned char                                      bDisableVolatileInSlateGI : 1;                            
	unsigned char                                      bWriteSceneZBuffer : 1;                                   
	unsigned char                                      bWriteSceneZBufferNew : 1;                                
	unsigned char                                      bVolatileThrottleRequired : 1;                            
	unsigned char                                      UsedLayerPolicy;                                          
	unsigned char                                      PreservedLayerNum;                                        
	TEnumAsByte<EMouseCursor>                          Cursor;                                                   
	EWidgetClipping                                    Clipping;                                                 
	ESlateVisibility                                   Visibility;                                               
	bool                                               bVisiblePass;                                             
	EWidgetVisible                                     WidgetVisible;                                            
	bool                                               bOpenReciveClick;                                         
	bool                                               bReciveClick;                                             
	unsigned char                                      UnknownData00[0x1];                                       
	class UWidgetNavigation*                           Navigation;                                               
	unsigned char                                      UnknownData01[0x28];                                      
	TArray<class UPropertyBinding*>                    NativeBindings;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Widget");
		return pStaticClass;
	}


	void SetWidgetVisibility(ESlateVisibility InVisibility);
	void SetWidgetRender(EWidgetVisible InWidgetVisible);
	void SetVisibility(ESlateVisibility InVisibility);
	void SetUserFocus(class APlayerController* PlayerController);
	void SetToolTipText(const struct FText& InToolTipText);
	void SetToolTip(class UWidget* Widget);
	void SetRenderTranslation(const struct FVector2D& Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransform(const struct FWidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(const struct FVector2D& Scale);
	void SetRenderAngle(float Angle);
	void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetCursor(TEnumAsByte<EMouseCursor> InCursor);
	void SetClipping(EWidgetClipping InClipping);
	void SetAllNavigationRules(EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void InvalidateLayoutCache();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool HasUserFocus(class APlayerController* PlayerController);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	EWidgetVisible GetWidgetRender();
	class UWidget* GetWidget__DelegateSignature();
	ESlateVisibility GetVisibility();
	struct FGeometry GetTickSpaceGeometry();
	class UWidget* GetTheTemplate();
	struct FText GetText__DelegateSignature();
	ESlateVisibility GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	class UPanelWidget* GetParent();
	struct FGeometry GetPaintSpaceGeometry();
	class APlayerController* GetOwningPlayer();
	TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	EWidgetClipping GetClipping();
	ECheckBoxState GetCheckBoxState__DelegateSignature();
	struct FGeometry GetCachedGeometry();
	struct FGeometry GetCachedAllottedGeometry();
	bool GetBool__DelegateSignature();
	class UWidget* GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void ForceVolatileThrottle(bool bForce);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
	void DisableVolatileInSlateGI(bool bDisabled);
	void AdaptationWidgetSlot(const struct FMargin& InOffset);
};




class UImage : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                    
	struct FScriptDelegate                             BrushDelegate;                                            
	bool                                               MatchSize;                                                
	unsigned char                                      UnknownData00[0x7];                                       
	struct FScriptDelegate                             OnSetBrushAsyncComplete;                                  
	TArray<struct FSlateColor>                         ColorSwitchList;                                          
	int                                                ActiveColorIndex;                                         
	struct FLinearColor                                ColorAndOpacity;                                          
	unsigned char                                      UnknownData01[0x4];                                       
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  
	struct FVector2D                                   ScalePivot;                                               
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   
	struct FSoftObjectPath                             AsyncLoadResourcePath;                                    
	unsigned char                                      UnknownData02[0x20];                                      
	float                                              HitTestAreaRadius;                                        
	bool                                               bIsEnhancedImage;                                         
	bool                                               bIsUseEnhancedHitTest;                                    
	bool                                               bFixOverScale;                                            
	bool                                               bDontPaintWhenAlphaZero;                                  
	bool                                               bDontPaintWhenColorZero;                                  
	bool                                               bAsyncLoadImageAsset;                                     
	bool                                               bDisablePixelSnapping;                                    
	unsigned char                                      UnknownData03[0x1];                                       
	float                                              MinDrawPixelSize;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Image");
		return pStaticClass;
	}


	void SetOpacity(float InOpacity);
	void SetMinDrawPixelSize(float InMinPixelSize);
	void SetDontPaintWhenColorZero(bool Enable);
	void SetDontPaintWhenAlphaZero(bool Enable);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushResourceFromPathSync(const struct FString& ResourcePath, bool bMatchSize);
	void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void SetBrushFromSoftObjectPathAsync(const struct FSoftObjectPath& SoftObjectPath, bool bMatchSize);
	void SetBrushFromPathAsync(const struct FString& ResourcePath, bool bMatchSize);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAtlasInterface(const TScriptInterface<class USlateTextureAtlasInterface>& AtlasRegion, bool bMatchSize);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrush(const struct FSlateBrush& InBrush);
	void SetActiveColorIndex(int InIndex);
	void SeFixOverScale(bool Enable);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
	bool GetDontPaintWhenColorZero();
	bool GetDontPaintWhenAlphaZero();
};




class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FLinearColor                                ColorAndOpacity;                                          
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  
	struct FSlateColor                                 ForegroundColor;                                          
	struct FScriptDelegate                             ForegroundColorDelegate;                                  
	struct FMargin                                     Padding;                                                  
	struct FWAnimTime                                  WAnimTime;                                                
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                    
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                   
	struct FScriptDelegate                             OnTouchStart;                                             
	struct FScriptDelegate                             OnTouchMove;                                              
	struct FScriptDelegate                             OnTouchEnd;                                               
	TArray<struct FNamedSlotBinding>                   NamedSlotBindings;                                        
	class UWidgetTree*                                 WidgetTree;                                               
	int                                                Priority;                                                 
	unsigned char                                      bSupportsKeyboardFocus : 1;                               
	unsigned char                                      bIsFocusable : 1;                                         
	unsigned char                                      bStopAction : 1;                                          
	unsigned char                                      bCanEverTick : 1;                                         
	unsigned char                                      bCanEverPaint : 1;                                        
	unsigned char                                      bDontPaintWhenChildEmpty : 1;                             
	unsigned char                                      bEnableLazyLoad : 1;                                      
	unsigned char                                      UnknownData01 : 1;                                        
	unsigned char                                      bCookedWidgetTree : 1;                                    
	bool                                               needAutoPlay;                                             
	bool                                               isAutoLoop;                                               
	TArray<struct FName>                               autoPlayNameList;                                         
	EWidgetTickFrequency                               TickFrequency;                                            
	unsigned char                                      UnknownData02[0x3];                                       
	int                                                TickFrequencyOverride;                                    
	class UInputComponent*                             InputComponent;                                           
	unsigned char                                      UnknownData03[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.UserWidget");
		return pStaticClass;
	}


	void UnregisterInputComponent();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType);
	void StopListeningForAllInputActions();
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void SetWAnimTime(const struct FWAnimTime& InWAnimTime);
	void SetTickFrequencyOverride(int InFrequency);
	void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void SetPadding(const struct FMargin& InPadding);
	void SetOwningPlayer(class APlayerController* LocalPlayerController);
	void SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer);
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay);
	void SetInputActionPriority(int NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDontPaintWhenChildEmpty(bool Enable);
	void SetDesiredSizeInViewport(const struct FVector2D& Size);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetAnchorsInViewport(const struct FAnchors& Anchors);
	void SetAlignmentInViewport(const struct FVector2D& Alignment);
	void ReverseAnimation(class UWidgetAnimation* InAnimation);
	void RemoveFromViewport();
	void RegisterInputComponent();
	void PreConstruct(bool IsDesignTime);
	void PlayUserWidgetAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	void PlaySound(class USoundBase* SoundToPlay);
	void PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	void PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	float PauseAnimation(class UWidgetAnimation* InAnimation);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnPaint(struct FPaintContext* Context);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseCaptureLost();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ListenForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(const struct FName& ActionName);
	bool IsInViewport();
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	class UWidget* GetWidgetFromName(const struct FName& Name);
	int GetTickFrequencyOverride();
	class APawn* GetOwningPlayerPawn();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	class UWidget* GetOrCreateLazyChild(const struct FString& Name);
	bool GetIsVisible();
	bool GetEnableLazyLoad();
	bool GetDontPaintWhenChildEmpty();
	float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	struct FAnchors GetAnchorsInViewport();
	struct FVector2D GetAlignmentInViewport();
	void Destruct();
	void Construct();
	void AddToViewport(int ZOrder);
	bool AddToPlayerScreen(int ZOrder);
};




class UWidgetComponent : public UMeshComponent
{
public:
	float                                              RTScale;                                                  
	EWidgetSpace                                       Space;                                                    
	EWidgetTimingPolicy                                TimingPolicy;                                             
	unsigned char                                      UnknownData00[0x2];                                       
	class UClass*                                      WidgetClass;                                              
	struct FIntPoint                                   DrawSize;                                                 
	bool                                               bManuallyRedraw;                                          
	bool                                               bRedrawRequested;                                         
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              RedrawTime;                                               
	unsigned char                                      UnknownData02[0x8];                                       
	struct FIntPoint                                   CurrentDrawSize;                                          
	unsigned char                                      UnknownData03[0x4];                                       
	bool                                               bDrawAtDesiredSize;                                       
	unsigned char                                      UnknownData04[0x3];                                       
	struct FVector2D                                   Pivot;                                                    
	bool                                               bReceiveHardwareInput;                                    
	bool                                               bWindowFocusable;                                         
	unsigned char                                      UnknownData05[0x6];                                       
	class ULocalPlayer*                                OwnerPlayer;                                              
	struct FLinearColor                                BackgroundColor;                                          
	struct FLinearColor                                TintColorAndOpacity;                                      
	float                                              OpacityFromTexture;                                       
	EWidgetBlendMode                                   BlendMode;                                                
	bool                                               bIsTwoSided;                                              
	bool                                               TickWhenOffscreen;                                        
	unsigned char                                      UnknownData06[0x1];                                       
	class UUserWidget*                                 Widget;                                                   
	unsigned char                                      UnknownData07[0x20];                                      
	class UBodySetup*                                  BodySetup;                                                
	class UMaterialInterface*                          TranslucentMaterialAA;                                    
	class UMaterialInterface*                          TranslucentMaterialAA_OneSided;                           
	class UMaterialInterface*                          TranslucentMaterial;                                      
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                             
	class UMaterialInterface*                          OpaqueMaterial;                                           
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                  
	class UMaterialInterface*                          MaskedMaterial;                                           
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                  
	class UTextureRenderTarget2D*                      RenderTarget;                                             
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         
	bool                                               bAddedToScreen;                                           
	bool                                               bEditTimeUsable;                                          
	unsigned char                                      UnknownData08[0x6];                                       
	struct FName                                       SharedLayerName;                                          
	int                                                LayerZOrder;                                              
	EWidgetGeometryMode                                GeometryMode;                                             
	unsigned char                                      UnknownData09[0x3];                                       
	float                                              CylinderArcAngle;                                         
	unsigned char                                      UnknownData10[0x54];                                      
	bool                                               ForceDisableShareRT;                                      
	unsigned char                                      UnknownData11[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetComponent");
		return pStaticClass;
	}


	void SetWidget(class UUserWidget* Widget);
	void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetDrawSize(const struct FVector2D& Size);
	void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	void RequestRedraw();
	class UUserWidget* GetUserWidgetObject();
	class UTextureRenderTarget2D* GetRenderTarget();
	class ULocalPlayer* GetOwnerPlayer();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	struct FVector2D GetDrawSize();
	struct FVector2D GetCurrentDrawSize();
};




class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                    
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.PanelWidget");
		return pStaticClass;
	}


	bool RemoveChildAt(int Index);
	bool RemoveChild(class UWidget* Content);
	bool HasChild(class UWidget* Content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(class UWidget* Content);
	class UWidget* GetChildAt(int Index);
	void ClearChildren();
	class UPanelSlot* AddChildAt(int Index, class UWidget* Content);
	class UPanelSlot* AddChild(class UWidget* Content);
};




class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	bool                                               bDontPaintWhenChildEmpty;                                 
	unsigned char                                      UnknownData01[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.CanvasPanel");
		return pStaticClass;
	}


	void SetDontPaintWhenChildEmpty(bool Enable);
	bool GetDontPaintWhenChildEmpty();
	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
};




class UContentWidget : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ContentWidget");
		return pStaticClass;
	}


	class UPanelSlot* SetContent(class UWidget* Content);
	class UPanelSlot* GetContentSlot();
	class UWidget* GetContent();
};




class USlider : public UWidget
{
public:
	float                                              Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FScriptDelegate                             ValueDelegate;                                            
	struct FSliderStyle                                WidgetStyle;                                              
	TEnumAsByte<EOrientation>                          Orientation;                                              
	unsigned char                                      UnknownData01[0x3];                                       
	struct FLinearColor                                SliderBarColor;                                           
	struct FLinearColor                                SliderHandleColor;                                        
	bool                                               IndentHandle;                                             
	bool                                               Locked;                                                   
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              StepSize;                                                 
	bool                                               IsFocusable;                                              
	unsigned char                                      UnknownData03[0x3];                                       
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                      
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                        
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                 
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                   
	struct FScriptMulticastDelegate                    OnValueChanged;                                           
	unsigned char                                      UnknownData04[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Slider");
		return pStaticClass;
	}


	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	float GetValue();
};




class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                   
	class UWidget*                                     Content;                                                  
	class UClass*                                      ContentClass;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.PanelSlot");
		return pStaticClass;
	}

};




class UHorizontalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  
	struct FSlateChildSize                             Size;                                                     
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        
	unsigned char                                      UnknownData00[0xE];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};




class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.HorizontalBox");
		return pStaticClass;
	}


	void SetDontPaintWhenChildEmpty(bool Enable);
	bool GetDontPaintWhenChildEmpty();
	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
};




class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  
	struct FSlateChildSize                             Size;                                                     
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        
	unsigned char                                      UnknownData00[0xE];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};




class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.VerticalBox");
		return pStaticClass;
	}


	void SetDontPaintWhenChildEmpty(bool Enable);
	bool GetDontPaintWhenChildEmpty();
	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
};




class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  
	bool                                               bFillEmptySpace;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              FillSpanWhenLessThan;                                     
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        
	unsigned char                                      UnknownData01[0xE];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WrapBoxSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};




class UWrapBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x4];                                       
	float                                              WrapWidth;                                                
	bool                                               bExplicitWrapWidth;                                       
	unsigned char                                      UnknownData01[0x17];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WrapBox");
		return pStaticClass;
	}


	void SetWrapWidth(float InWrapWidth);
	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	class UWrapBoxSlot* AddChildWrapBox(class UWidget* Content);
};




class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                               
	unsigned char                                      bAllowTemplate : 1;                                       
	unsigned char                                      bValidTemplate : 1;                                       
	unsigned char                                      bTemplateInitialized : 1;                                 
	unsigned char                                      bCookedTemplate : 1;                                      
	unsigned char                                      bClassRequiresNativeTick : 1;                             
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FDelegateRuntimeBinding>             Bindings;                                                 
	TArray<class UWidgetAnimation*>                    Animations;                                               
	TArray<struct FName>                               NamedSlots;                                               
	unsigned char                                      UnknownData01[0x28];                                      
	class UUserWidget*                                 Template;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return pStaticClass;
	}

};




class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                              
	struct FScrollBarStyle                             WidgetBarStyle;                                           
	class USlateWidgetStyleAsset*                      Style;                                                    
	class USlateWidgetStyleAsset*                      BarStyle;                                                 
	TEnumAsByte<EOrientation>                          Orientation;                                              
	ESlateVisibility                                   ScrollBarVisibility;                                      
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        
	unsigned char                                      UnknownData00[0x1];                                       
	struct FVector2D                                   ScrollbarThickness;                                       
	bool                                               AlwaysShowScrollbar;                                      
	bool                                               AllowOverscroll;                                          
	EDescendantScrollDestination                       NavigationDestination;                                    
	unsigned char                                      UnknownData01[0x1];                                       
	float                                              NavigationScrollPadding;                                  
	float                                              EdgePadding;                                              
	bool                                               bAllowRightClickDragScrolling;                            
	bool                                               bDisableHorOrVertMove;                                    
	bool                                               bDisableScroll;                                           
	bool                                               bDontPaintWhenChildEmpty;                                 
	unsigned char                                      UnknownData02[0x4];                                       
	struct FScriptMulticastDelegate                    OnUserScrolled;                                           
	struct FScriptMulticastDelegate                    OnUserScrolledUnused;                                     
	struct FScriptMulticastDelegate                    OnBeginScroll;                                            
	struct FScriptMulticastDelegate                    OnEndScroll;                                              
	struct FScriptMulticastDelegate                    OnTouchStartEvent;                                        
	struct FScriptMulticastDelegate                    OnTouchEndEvent;                                          
	unsigned char                                      UnknownData03[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ScrollBox");
		return pStaticClass;
	}


	void StopScroll();
	void SetScrollOffset(float NewScrollOffset);
	void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
	void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);
	void SetMaxScrollSpd(float Val);
	void SetDontPaintWhenChildEmpty(bool Enable);
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool NewAllowOverscroll);
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination);
	void ScrollToStart();
	void ScrollToEnd();
	float GetScrollOffset();
	float GetScrollEndOffset();
	bool GetIsScrolling();
	bool GetDontPaintWhenChildEmpty();
	float GetCacheOverscrollOffset();
};




class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                          ShapedTextOptions;                                        
	TEnumAsByte<ETextJustify>                          Justification;                                            
	TEnumAsByte<ETextVerticalJustify>                  VerticalJustification;                                    
	bool                                               AutoWrapText;                                             
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              WrapTextAt;                                               
	ETextWrappingPolicy                                WrappingPolicy;                                           
	unsigned char                                      UnknownData01[0x3];                                       
	struct FMargin                                     Margin;                                                   
	float                                              LineHeightPercentage;                                     
	unsigned char                                      UnknownData02[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.TextLayoutWidget");
		return pStaticClass;
	}

};




class UTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     
	bool                                               AutoCapitalizeText;                                       
	unsigned char                                      UnknownData00[0x7];                                       
	struct FScriptDelegate                             TextDelegate;                                             
	TArray<struct FSlateColor>                         ColorSwitchList;                                          
	int                                                ActiveColorIndex;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	struct FSlateColor                                 ColorAndOpacity;                                          
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  
	struct FSlateColor                                 SelectColorAndOpacity;                                    
	struct FSlateColor                                 NoSelectColorAndOpacity;                                  
	bool                                               bHaveSelectColorAndOpacity;                               
	bool                                               bIsSelected;                                              
	unsigned char                                      UnknownData02[0x6];                                       
	struct FSlateFontInfo                              Font;                                                     
	struct FVector2D                                   ShadowOffset;                                             
	struct FLinearColor                                ShadowColorAndOpacity;                                    
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                            
	float                                              MinDesiredWidth;                                          
	bool                                               AutoEllipsisText;                                         
	bool                                               bIgnoreOutlineForPerformance;                             
	bool                                               bWrapWithInvalidationPanel;                               
	unsigned char                                      UnknownData03[0x11];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.TextBlock");
		return pStaticClass;
	}


	void SetVerticalJustification(TEnumAsByte<ETextVerticalJustify> InJustification);
	void SetText(const struct FText& InText);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetSelectColor(bool bIsSelect);
	void SetOpacity(float InOpacity);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void SetIgnoreOutlineForPerformance(bool bIgnore);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetAutoEllipsisText(bool InAutoEllipsisText);
	void SetActiveColorIndex(int InIndex);
	struct FText GetText();
};




class UComboBoxString : public UWidget
{
public:
	TArray<struct FString>                             DefaultOptions;                                           
	struct FString                                     SelectedOption;                                           
	struct FComboBoxStyle                              WidgetStyle;                                              
	struct FTableRowStyle                              ItemStyle;                                                
	struct FMargin                                     ContentPadding;                                           
	float                                              MaxListHeight;                                            
	bool                                               HasDownArrow;                                             
	bool                                               EnableGamepadNavigationMode;                              
	unsigned char                                      UnknownData00[0x2];                                       
	struct FSlateFontInfo                              Font;                                                     
	struct FSlateColor                                 ForegroundColor;                                          
	bool                                               bIsFocusable;                                             
	bool                                               bAbove;                                                   
	unsigned char                                      UnknownData01[0x6];                                       
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    
	unsigned char                                      UnknownData02[0x20];                                      
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       
	struct FScriptMulticastDelegate                    OnOpening;                                                
	struct FScriptMulticastDelegate                    OnOpenChanged;                                            
	unsigned char                                      UnknownData03[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ComboBoxString");
		return pStaticClass;
	}


	void SetSelectedOption(const struct FString& Option);
	int SetComboListViewOffset(float Offset);
	bool RemoveOption(const struct FString& Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnOpeningEvent__DelegateSignature();
	void OnOpenChangedEvent__DelegateSignature(bool bIsOpen, bool bAbove);
	struct FString GetSelectedOption();
	int GetOptionCount();
	struct FString GetOptionAtIndex(int Index);
	int FindOptionIndex(const struct FString& Option);
	void CloseComboBox();
	void ClearSelection();
	void ClearOptions();
	void AddOption(const struct FString& Option);
};




class UButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                    
	struct FButtonStyle                                WidgetStyle;                                              
	struct FLinearColor                                ColorAndOpacity;                                          
	struct FLinearColor                                BackgroundColor;                                          
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              
	bool                                               IsFocusable;                                              
	bool                                               IsPassMouseEvent;                                         
	float                                              nClickCd;                                                 
	bool                                               bTouchPass;                                               
	bool                                               bPressEventWithParamPass;                                 
	unsigned char                                      UnknownData00[0x6];                                       
	struct FScriptMulticastDelegate                    OnClicked;                                                
	struct FScriptMulticastDelegate                    OnPressed;                                                
	struct FScriptMulticastDelegate                    OnReleased;                                               
	struct FScriptMulticastDelegate                    OnHovered;                                                
	struct FScriptMulticastDelegate                    OnUnhovered;                                              
	struct FScriptMulticastDelegate                    OnPressedParam;                                           
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   
	EButtonOnClickSound                                OnClickSoundType;                                         
	unsigned char                                      UnknownData01[0x1F];                                      
	EButtonClickGroupEnum                              ButtonClickGroupName;                                     
	unsigned char                                      UnknownData02[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Button");
		return pStaticClass;
	}


	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
	void SetStyle(const struct FButtonStyle& InStyle);
	void SetPressEventWithParamPassEnabled(bool bEnabled);
	static void SetOnClickSound(const struct FScriptDelegate& onSound);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetClickSoundType(EButtonOnClickSound onSoundType);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	void Release();
	void OnButtonSoundEvent__DelegateSignature(unsigned char Sound);
	bool IsPressed();
};




class UEditableTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                     
	struct FScriptDelegate                             TextDelegate;                                             
	bool                                               bAutoScrollText;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ScrollSpeed;                                              
	EAutoScrollType                                    AutoScrollType;                                           
	unsigned char                                      UnknownData01[0x7];                                       
	struct FEditableTextBoxStyle                       WidgetStyle;                                              
	class USlateWidgetStyleAsset*                      Style;                                                    
	struct FText                                       hintText;                                                 
	struct FScriptDelegate                             HintTextDelegate;                                         
	struct FSlateFontInfo                              Font;                                                     
	struct FLinearColor                                ForegroundColor;                                          
	struct FLinearColor                                BackgroundColor;                                          
	struct FLinearColor                                ReadOnlyForegroundColor;                                  
	bool                                               IsReadOnly;                                               
	bool                                               IsPassword;                                               
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              MinimumDesiredWidth;                                      
	struct FMargin                                     Padding;                                                  
	bool                                               IsCaretMovedWhenGainFocus;                                
	bool                                               SelectAllTextWhenFocused;                                 
	bool                                               RevertTextOnEscape;                                       
	bool                                               ClearKeyboardFocusOnCommit;                               
	bool                                               SelectAllTextOnCommit;                                    
	bool                                               AllowContextMenu;                                         
	TEnumAsByte<EVirtualKeyboardType>                  keyboardType;                                             
	unsigned char                                      UnknownData03[0x1];                                       
	struct FShapedTextOptions                          ShapedTextOptions;                                        
	bool                                               bVirtualKeyboardTriggerDirect;                            
	unsigned char                                      UnknownData04[0x3];                                       
	struct FScriptMulticastDelegate                    OnTextChanged;                                            
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          
	unsigned char                                      UnknownData05[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.EditableTextBox");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	void SetScrollOffset(float Offset);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	bool HasError();
	struct FText GetText();
	void ClearError();
};




class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Overlay");
		return pStaticClass;
	}


	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};




class UInvalidationBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.InvalidationBox");
		return pStaticClass;
	}


	void SetDontPaintWhenChildEmpty(bool Enable);
	void SetCanCache(bool CanCache);
	void InvalidateCache();
	bool GetDontPaintWhenChildEmpty();
	bool GetCanCache();
};




class URetainerBox : public UContentWidget
{
public:
	int                                                PhaseCount;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	class UMaterialInterface*                          EffectMaterial;                                           
	struct FName                                       TextureParameter;                                         
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.RetainerBox");
		return pStaticClass;
	}


	void SkipCurrentFrameRender();
	void SetTextureParameter(const struct FName& TextureParameter);
	void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	void RequestRender();
	class UMaterialInstanceDynamic* GetEffectMaterial();
};




class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                
	struct FScriptMulticastDelegate                    OnFail;                                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return pStaticClass;
	}


	static class UAsyncTaskDownloadImage* DownloadImage(const struct FString& URL);
};




class UBackgroundBlur : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0xC];                                       
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        
	bool                                               bApplyAlphaToBlur;                                        
	unsigned char                                      UnknownData01[0x1];                                       
	float                                              BlurStrength;                                             
	bool                                               bOverrideAutoRadiusCalculation;                           
	TEnumAsByte<EBlurType>                             BlurType;                                                 
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              BlurDirection;                                            
	struct FVector2D                                   BlurCenter;                                               
	int                                                BlurRadius;                                               
	class UTexture*                                    BlurMask;                                                 
	struct FSlateBrush                                 LowQualityFallbackBrush;                                  
	struct FSlateBrush                                 BlurMaskBrush;                                            
	unsigned char                                      UnknownData03[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.BackgroundBlur");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetBlurStrength(float InStrength);
	void SetBlurRadius(int InBlurRadius);
	void SetBlurMask(class UTexture* InTexture);
	void SetBlurDirection(float InDirection);
	void SetBlurCenter(const struct FVector2D& InCenter);
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};




class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        
	unsigned char                                      UnknownData00[0x16];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};




class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                             
	struct FDynamicPropertyPath                        SourcePath;                                               
	struct FName                                       DestinationProperty;                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.PropertyBinding");
		return pStaticClass;
	}

};




class UBoolBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.BoolBinding");
		return pStaticClass;
	}


	bool GetValue();
};




class UBorder : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	struct FScriptDelegate                             ContentColorAndOpacityDelegate;                           
	struct FMargin                                     Padding;                                                  
	struct FSlateBrush                                 Background;                                               
	struct FScriptDelegate                             BackgroundDelegate;                                       
	struct FLinearColor                                BrushColor;                                               
	struct FScriptDelegate                             BrushColorDelegate;                                       
	struct FVector2D                                   DesiredSizeScale;                                         
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   
	struct FScriptDelegate                             OnMouseButtonUpEvent;                                     
	struct FScriptDelegate                             OnMouseMoveEvent;                                         
	struct FScriptDelegate                             OnMouseDoubleClickEvent;                                  
	bool                                               bDontPaintWhenChildEmpty;                                 
	bool                                               bDontPaintWhenAlphaZero;                                  
	unsigned char                                      UnknownData01[0x16];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Border");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetDontPaintWhenChildEmpty(bool Enable);
	void SetDontPaintWhenAlphaZero(bool Enable);
	void SetDesiredSizeScale(const struct FVector2D& InScale);
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrushColor(const struct FLinearColor& InBrushColor);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
	bool GetDontPaintWhenChildEmpty();
	bool GetDontPaintWhenAlphaZero();
};




class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        
	unsigned char                                      UnknownData00[0x16];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.BorderSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};




class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.BrushBinding");
		return pStaticClass;
	}


	struct FSlateBrush GetValue();
};




class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        
	unsigned char                                      UnknownData00[0x16];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ButtonSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};




class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                                 LayoutData;                                               
	bool                                               bAutoSize;                                                
	bool                                               bSupportNotch;                                            
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                ZOrder;                                                   
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return pStaticClass;
	}


	void SetZOrder(int InZOrder);
	void SetSupportNotch(bool InSupportNotch);
	void SetSize(const struct FVector2D& InSize);
	void SetPosition(const struct FVector2D& InPosition);
	void SetOffsets(const struct FMargin& InOffset);
	void SetMinimum(const struct FVector2D& InMinimumAnchors);
	void SetMaximum(const struct FVector2D& InMaximumAnchors);
	void SetLayout(const struct FAnchorData& InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const struct FAnchors& InAnchors);
	void SetAlignment(const struct FVector2D& InAlignment);
	int GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
	bool GeSupportNotch();
};




class UCheckBox : public UContentWidget
{
public:
	struct FScriptDelegate                             CheckedStateDelegate;                                     
	struct FCheckBoxStyle                              WidgetStyle;                                              
	class USlateWidgetStyleAsset*                      Style;                                                    
	class USlateBrushAsset*                            UncheckedImage;                                           
	class USlateBrushAsset*                            UncheckedHoveredImage;                                    
	class USlateBrushAsset*                            UncheckedPressedImage;                                    
	class USlateBrushAsset*                            CheckedImage;                                             
	class USlateBrushAsset*                            CheckedHoveredImage;                                      
	class USlateBrushAsset*                            CheckedPressedImage;                                      
	class USlateBrushAsset*                            UndeterminedImage;                                        
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                 
	class USlateBrushAsset*                            UndeterminedPressedImage;                                 
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	unsigned char                                      UnknownData00[0x3];                                       
	struct FMargin                                     Padding;                                                  
	unsigned char                                      UnknownData01[0x4];                                       
	struct FSlateColor                                 BorderBackgroundColor;                                    
	bool                                               IsFocusable;                                              
	unsigned char                                      UnknownData02[0x7];                                       
	struct FScriptMulticastDelegate                    OnCheckStateChanged;                                      
	unsigned char                                      UnknownData03[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.CheckBox");
		return pStaticClass;
	}


	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(ECheckBoxState InCheckedState);
	bool IsPressed();
	bool IsChecked();
	ECheckBoxState GetCheckedState();
};




class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.CheckedStateBinding");
		return pStaticClass;
	}


	ECheckBoxState GetValue();
};




class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           
	float                                              Period;                                                   
	float                                              Radius;                                                   
	unsigned char                                      UnknownData00[0x4];                                       
	class USlateBrushAsset*                            PieceImage;                                               
	struct FSlateBrush                                 Image;                                                    
	bool                                               bEnableRadius;                                            
	unsigned char                                      UnknownData01[0x17];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.CircularThrobber");
		return pStaticClass;
	}


	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int InNumberOfPieces);
};




class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ColorBinding");
		return pStaticClass;
	}


	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};




class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                             Items;                                                    
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    
	bool                                               bIsFocusable;                                             
	unsigned char                                      UnknownData00[0x17];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ComboBox");
		return pStaticClass;
	}

};




class UDragDropOperation : public UObject
{
public:
	struct FString                                     Tag;                                                      
	class UObject*                                     Payload;                                                  
	class UWidget*                                     DefaultDragVisual;                                        
	EDragPivot                                         Pivot;                                                    
	unsigned char                                      UnknownData00[0x3];                                       
	struct FVector2D                                   Offset;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	struct FScriptMulticastDelegate                    OnDrop;                                                   
	struct FScriptMulticastDelegate                    OnDragCancelled;                                          
	struct FScriptMulticastDelegate                    OnDragged;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.DragDropOperation");
		return pStaticClass;
	}


	void Drop(const struct FPointerEvent& PointerEvent);
	void Dragged(const struct FPointerEvent& PointerEvent);
	void DragCancelled(const struct FPointerEvent& PointerEvent);
};




class UEditableText : public UWidget
{
public:
	struct FText                                       Text;                                                     
	struct FScriptDelegate                             TextDelegate;                                             
	struct FText                                       hintText;                                                 
	struct FScriptDelegate                             HintTextDelegate;                                         
	TArray<struct FSlateColor>                         ColorSwitchList;                                          
	int                                                ActiveColorIndex;                                         
	unsigned char                                      UnknownData00[0x4];                                       
	struct FEditableTextStyle                          WidgetStyle;                                              
	class USlateWidgetStyleAsset*                      Style;                                                    
	class USlateBrushAsset*                            BackgroundImageSelected;                                  
	class USlateBrushAsset*                            BackgroundImageComposing;                                 
	class USlateBrushAsset*                            CaretImage;                                               
	struct FSlateFontInfo                              Font;                                                     
	struct FSlateColor                                 ColorAndOpacity;                                          
	bool                                               IsReadOnly;                                               
	bool                                               IsPassword;                                               
	unsigned char                                      UnknownData01[0x2];                                       
	float                                              MinimumDesiredWidth;                                      
	bool                                               IsCaretMovedWhenGainFocus;                                
	bool                                               SelectAllTextWhenFocused;                                 
	bool                                               RevertTextOnEscape;                                       
	bool                                               ClearKeyboardFocusOnCommit;                               
	bool                                               SelectAllTextOnCommit;                                    
	bool                                               AllowContextMenu;                                         
	TEnumAsByte<EVirtualKeyboardType>                  keyboardType;                                             
	unsigned char                                      UnknownData02[0x1];                                       
	struct FShapedTextOptions                          ShapedTextOptions;                                        
	bool                                               bVirtualKeyboardTriggerDirect;                            
	unsigned char                                      UnknownData03[0x3];                                       
	struct FScriptMulticastDelegate                    OnTextChanged;                                            
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          
	unsigned char                                      UnknownData04[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.EditableText");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(const struct FText& InHintText);
	void SetActiveColorIndex(int InIndex);
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};




class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FExpandableAreaStyle                        Style;                                                    
	struct FSlateBrush                                 BorderBrush;                                              
	struct FSlateColor                                 BorderColor;                                              
	bool                                               bIsExpanded;                                              
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              MaxHeight;                                                
	struct FMargin                                     HeaderPadding;                                            
	struct FMargin                                     AreaPadding;                                              
	struct FScriptMulticastDelegate                    OnExpansionChanged;                                       
	class UWidget*                                     HeaderContent;                                            
	class UWidget*                                     BodyContent;                                              
	unsigned char                                      UnknownData02[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ExpandableArea");
		return pStaticClass;
	}


	void SetIsExpanded_Animated(bool IsExpanded);
	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};




class UFloatBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.FloatBinding");
		return pStaticClass;
	}


	float GetValue();
};




class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                               
	TArray<float>                                      RowFill;                                                  
	bool                                               bDontPaintWhenChildEmpty;                                 
	unsigned char                                      UnknownData00[0x17];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.GridPanel");
		return pStaticClass;
	}


	void SetDontPaintWhenChildEmpty(bool Enable);
	void ReSortSlot();
	bool GetDontPaintWhenChildEmpty();
	class UGridSlot* AddChildToGrid(class UWidget* Content);
};




class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                Row;                                                      
	int                                                RowSpan;                                                  
	int                                                Column;                                                   
	int                                                ColumnSpan;                                               
	int                                                Layer;                                                    
	struct FVector2D                                   Nudge;                                                    
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.GridSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRowSpan(int InRowSpan);
	void SetRow(int InRow);
	void SetPadding(const struct FMargin& InPadding);
	void SetLayer(int InLayer);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumnSpan(int InColumnSpan);
	void SetColumn(int InColumn);
};




class UInputKeySelector : public UWidget
{
public:
	struct FButtonStyle                                WidgetStyle;                                              
	struct FTextBlockStyle                             TextStyle;                                                
	struct FInputChord                                 SelectedKey;                                              
	struct FSlateFontInfo                              Font;                                                     
	struct FMargin                                     Margin;                                                   
	struct FLinearColor                                ColorAndOpacity;                                          
	struct FText                                       KeySelectionText;                                         
	struct FText                                       NoKeySpecifiedText;                                       
	bool                                               bAllowModifierKeys;                                       
	bool                                               bAllowGamepadKeys;                                        
	unsigned char                                      UnknownData00[0x6];                                       
	TArray<struct FKey>                                EscapeKeys;                                               
	struct FScriptMulticastDelegate                    OnKeySelected;                                            
	struct FScriptMulticastDelegate                    OnIsSelectingKeyChanged;                                  
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.InputKeySelector");
		return pStaticClass;
	}


	void SetTextBlockVisibility(ESlateVisibility InVisibility);
	void SetSelectedKey(const struct FInputChord& InSelectedKey);
	void SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText);
	void SetKeySelectionText(const struct FText& InKeySelectionText);
	void SetAllowModifierKeys(bool bInAllowModifierKeys);
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};




class UInt32Binding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Int32Binding");
		return pStaticClass;
	}


	int GetValue();
};




class UTableViewBase : public UWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.TableViewBase");
		return pStaticClass;
	}

};




class UListView : public UTableViewBase
{
public:
	float                                              ItemHeight;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<class UObject*>                             Items;                                                    
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            
	unsigned char                                      UnknownData01[0x7];                                       
	struct FScriptDelegate                             OnGenerateRowEvent;                                       
	unsigned char                                      UnknownData02[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ListView");
		return pStaticClass;
	}

};




class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                      MenuClass;                                                
	struct FScriptDelegate                             OnGetMenuContentEvent;                                    
	TEnumAsByte<EMenuPlacement>                        Placement;                                                
	bool                                               ShouldDeferPaintingAfterWindowContent;                    
	bool                                               UseApplicationMenuStack;                                  
	unsigned char                                      UnknownData00[0x5];                                       
	struct FScriptMulticastDelegate                    OnMenuOpenChanged;                                        
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MenuAnchor");
		return pStaticClass;
	}


	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	struct FVector2D GetMenuPosition();
	void Close();
};




class UMouseCursorBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MouseCursorBinding");
		return pStaticClass;
	}


	TEnumAsByte<EMouseCursor> GetValue();
};




class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FRichCurve                                  Translation[0x2];                                         
	struct FRichCurve                                  Rotation;                                                 
	struct FRichCurve                                  Scale[0x2];                                               
	struct FRichCurve                                  Shear[0x2];                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return pStaticClass;
	}

};




class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return pStaticClass;
	}

};




class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FRichCurve                                  TopCurve;                                                 
	struct FRichCurve                                  LeftCurve;                                                
	struct FRichCurve                                  RightCurve;                                               
	struct FRichCurve                                  BottomCurve;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return pStaticClass;
	}

};




class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return pStaticClass;
	}

};




class UMovieSceneWAnimTimeSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       
	struct FRichCurve                                  PlayTimeCurve_2;                                          
	struct FRichCurve                                  PlayTimeCurve_3;                                          
	struct FRichCurve                                  PlayTimeCurve_4;                                          
	struct FRichCurve                                  PlayTimeCurve_5;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MovieSceneWAnimTimeSection");
		return pStaticClass;
	}

};




class UMovieSceneWAnimTimeTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MovieSceneWAnimTimeTrack");
		return pStaticClass;
	}

};




class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	TArray<struct FName>                               BrushPropertyNamePath;                                    
	struct FName                                       TrackName;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return pStaticClass;
	}

};




class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     
	struct FText                                       hintText;                                                 
	struct FScriptDelegate                             HintTextDelegate;                                         
	TArray<struct FSlateColor>                         ColorSwitchList;                                          
	int                                                ActiveColorIndex;                                         
	unsigned char                                      UnknownData00[0x4];                                       
	struct FTextBlockStyle                             WidgetStyle;                                              
	bool                                               bIsReadOnly;                                              
	unsigned char                                      UnknownData01[0x7];                                       
	struct FSlateFontInfo                              Font;                                                     
	bool                                               AllowContextMenu;                                         
	unsigned char                                      UnknownData02[0x7];                                       
	struct FScriptMulticastDelegate                    OnTextChanged;                                            
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          
	unsigned char                                      UnknownData03[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MultiLineEditableText");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InText);
	void SetFont(const struct FSlateFontInfo& InNewFont);
	void SetActiveColorIndex(int InIndex);
	void ScrollToEnd();
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};




class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     
	struct FText                                       hintText;                                                 
	struct FScriptDelegate                             HintTextDelegate;                                         
	struct FEditableTextBoxStyle                       WidgetStyle;                                              
	struct FTextBlockStyle                             TextStyle;                                                
	bool                                               bIsReadOnly;                                              
	bool                                               AllowContextMenu;                                         
	unsigned char                                      UnknownData00[0x6];                                       
	class USlateWidgetStyleAsset*                      Style;                                                    
	struct FSlateFontInfo                              Font;                                                     
	struct FLinearColor                                ForegroundColor;                                          
	struct FLinearColor                                BackgroundColor;                                          
	struct FLinearColor                                ReadOnlyForegroundColor;                                  
	struct FScriptMulticastDelegate                    OnTextChanged;                                            
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};




class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.NamedSlot");
		return pStaticClass;
	}

};




class UNamedSlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.NamedSlotInterface");
		return pStaticClass;
	}

};




class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.NativeWidgetHost");
		return pStaticClass;
	}

};




class UOverlaySlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        
	unsigned char                                      UnknownData00[0xE];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.OverlaySlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};




class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                              
	class USlateWidgetStyleAsset*                      Style;                                                    
	class USlateBrushAsset*                            BackgroundImage;                                          
	class USlateBrushAsset*                            FillImage;                                                
	class USlateBrushAsset*                            MarqueeImage;                                             
	float                                              percent;                                                  
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                              
	bool                                               bIsMarquee;                                               
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector2D                                   BorderPadding;                                            
	struct FScriptDelegate                             PercentDelegate;                                          
	struct FLinearColor                                FillColorAndOpacity;                                      
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                              
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ProgressBar");
		return pStaticClass;
	}


	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
};




class URichTextBlock : public UTextLayoutWidget
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
            pStaticClass = UObject::FindClass("Class UMG.RichTextBlock");
		return pStaticClass;
	}


	void SetIgnoreOutlineForPerformance(bool bIgnore);
};




class URichTextBlockDecorator : public UObject
{
public:
	bool                                               bReveal;                                                  
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                RevealedIndex;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return pStaticClass;
	}

};




class USafeZone : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SafeZone");
		return pStaticClass;
	}


	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};




class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                               bIsTitleSafe;                                             
	unsigned char                                      UnknownData00[0x3];                                       
	struct FMargin                                     SafeAreaScale;                                            
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                   
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                   
	unsigned char                                      UnknownData01[0x2];                                       
	struct FMargin                                     Padding;                                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SafeZoneSlot");
		return pStaticClass;
	}

};




class UScaleBox : public UContentWidget
{
public:
	float                                              UserSpecifiedScaleBias;                                   
	bool                                               IgnoreInheritedScale;                                     
	bool                                               bFixQuivering;                                            
	bool                                               bSingleLayoutPass;                                        
	unsigned char                                      UnknownData00[0x11];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ScaleBox");
		return pStaticClass;
	}


	void SetUserSpecifiedScaleBias(float InUserSpecifiedScaleBias);
	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);
	void SetStretch(TEnumAsByte<EStretch> InStretch);
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
	void SetFixQuiver(bool InFixQuiver);
};




class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        
	unsigned char                                      UnknownData00[0x16];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};




class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                             WidgetStyle;                                              
	class USlateWidgetStyleAsset*                      Style;                                                    
	bool                                               bAlwaysShowScrollbar;                                     
	TEnumAsByte<EOrientation>                          Orientation;                                              
	unsigned char                                      UnknownData00[0x2];                                       
	struct FVector2D                                   Thickness;                                                
	unsigned char                                      UnknownData01[0x14];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ScrollBar");
		return pStaticClass;
	}


	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};




class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	unsigned char                                      UnknownData00[0xF];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return pStaticClass;
	}


	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};




class UShareWidgetRT : public UObject
{
public:
	class UTextureRenderTarget2D*                      RenderTarget;                                             
	unsigned char                                      UnknownData00[0x50];                                      
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ShareWidgetRT");
		return pStaticClass;
	}

};




class AShareWidgetRTManager : public AActor
{
public:
	TMap<class UObject*, class UShareWidgetRT*>        SharedWidgetRTMap;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.ShareWidgetRTManager");
		return pStaticClass;
	}

};




class USizeBox : public UContentWidget
{
public:
	float                                              HeightOverride;                                           
	float                                              MinDesiredWidth;                                          
	float                                              MinDesiredHeight;                                         
	float                                              MaxDesiredWidth;                                          
	float                                              MaxDesiredHeight;                                         
	float                                              MaxAspectRatio;                                           
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SizeBox");
		return pStaticClass;
	}


	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetMaxAspectRatio(float InMaxAspectRatio);
	void SetHeightOverride(float InHeightOverride);
	void SetDontPaintWhenChildEmpty(bool Enable);
	bool GetDontPaintWhenChildEmpty();
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};




class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        
	unsigned char                                      UnknownData00[0x16];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SizeBoxSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};




class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return pStaticClass;
	}


	static void ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate);
	static void ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate);
	static void ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
	static void LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	static struct FVector2D LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
	static bool IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	static struct FVector2D GetLocalSize(const struct FGeometry& Geometry);
	static struct FVector2D GetAbsoluteSize(const struct FGeometry& Geometry);
	static struct FVector2D GetAbsolutePosition(const struct FGeometry& Geometry);
	static bool EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
	static void AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	static struct FVector2D AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
};




class USlateDataSheet : public UObject
{
public:
	class UTexture2D*                                  DataTexture;                                              
	unsigned char                                      UnknownData00[0x400];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SlateDataSheet");
		return pStaticClass;
	}

};




class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>                    VertexData;                                               
	TArray<uint32_t>                                   IndexData;                                                
	class UMaterialInterface*                          Material;                                                 
	struct FVector2D                                   ExtentMin;                                                
	struct FVector2D                                   ExtentMax;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SlateVectorArtData");
		return pStaticClass;
	}

};




class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                     
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Spacer");
		return pStaticClass;
	}


	void SetSize(const struct FVector2D& InSize);
};




class USpinBox : public UWidget
{
public:
	float                                              Value;                                                    
	unsigned char                                      UnknownData00[0x4];                                       
	struct FScriptDelegate                             ValueDelegate;                                            
	struct FSpinBoxStyle                               WidgetStyle;                                              
	class USlateWidgetStyleAsset*                      Style;                                                    
	float                                              Delta;                                                    
	float                                              SliderExponent;                                           
	struct FSlateFontInfo                              Font;                                                     
	TEnumAsByte<ETextJustify>                          Justification;                                            
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              MinDesiredWidth;                                          
	bool                                               ClearKeyboardFocusOnCommit;                               
	bool                                               SelectAllTextOnCommit;                                    
	unsigned char                                      UnknownData02[0x6];                                       
	struct FSlateColor                                 ForegroundColor;                                          
	struct FScriptMulticastDelegate                    OnValueChanged;                                           
	struct FScriptMulticastDelegate                    OnValueCommitted;                                         
	struct FScriptMulticastDelegate                    OnBeginSliderMovement;                                    
	struct FScriptMulticastDelegate                    OnEndSliderMovement;                                      
	unsigned char                                      bOverride_MinValue : 1;                                   
	unsigned char                                      bOverride_MaxValue : 1;                                   
	unsigned char                                      bOverride_MinSliderValue : 1;                             
	unsigned char                                      bOverride_MaxSliderValue : 1;                             
	unsigned char                                      UnknownData03[0x3];                                       
	float                                              MinValue;                                                 
	float                                              MaxValue;                                                 
	float                                              MinSliderValue;                                           
	float                                              MaxSliderValue;                                           
	unsigned char                                      UnknownData04[0x14];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.SpinBox");
		return pStaticClass;
	}


	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	float GetMaxValue();
	float GetMaxSliderValue();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};




class UStaticMeshWidget : public UWidget
{
public:
	class USlateVectorArtData*                         StaticMeshAsset;                                          
	struct FVector2D                                   MeshScale;                                                
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.StaticMeshWidget");
		return pStaticClass;
	}

};




class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.TextBinding");
		return pStaticClass;
	}


	struct FText GetTextValue();
	struct FString GetStringValue();
};




class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           
	bool                                               bAnimateHorizontally;                                     
	bool                                               bAnimateVertically;                                       
	bool                                               bAnimateOpacity;                                          
	unsigned char                                      UnknownData00[0x1];                                       
	class USlateBrushAsset*                            PieceImage;                                               
	struct FSlateBrush                                 Image;                                                    
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Throbber");
		return pStaticClass;
	}


	void SetNumberOfPieces(int InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};




class UTileView : public UTableViewBase
{
public:
	float                                              ItemWidth;                                                
	float                                              ItemHeight;                                               
	TArray<class UObject*>                             Items;                                                    
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            
	unsigned char                                      UnknownData00[0x7];                                       
	struct FScriptDelegate                             OnGenerateTileEvent;                                      
	unsigned char                                      UnknownData01[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.TileView");
		return pStaticClass;
	}


	void SetItemWidth(float Width);
	void SetItemHeight(float Height);
	void RequestListRefresh();
};




class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x348];                                     
	class UWidgetAnimation*                            Animation;                                                
	unsigned char                                      UnknownData01[0x3A8];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return pStaticClass;
	}

};




class UUniformGridPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0xC];                                       
	float                                              MinDesiredSlotWidth;                                      
	float                                              MinDesiredSlotHeight;                                     
	unsigned char                                      UnknownData01[0x14];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.UniformGridPanel");
		return pStaticClass;
	}


	void SetSlotPadding(const struct FMargin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);
};




class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                Row;                                                      
	int                                                Column;                                                   
	unsigned char                                      UnknownData01[0xC];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.UniformGridSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumn(int InColumn);
};




class UViewport : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.Viewport");
		return pStaticClass;
	}


	class AActor* Spawn(class UClass* ActorClass);
	void SetViewRotation(const struct FRotator& Rotation);
	void SetViewLocation(const struct FVector& Location);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
};




class UVisibilityBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.VisibilityBinding");
		return pStaticClass;
	}


	ESlateVisibility GetValue();
};




class UWeakRefImage : public UImage
{
public:
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WeakRefImage");
		return pStaticClass;
	}


	void UnloadTextureResource();
	void LoadTextureResource(bool bAsync);
};




class UWidgetAnimation : public UMovieSceneSequence
{
public:
	struct FScriptMulticastDelegate                    OnAnimationStarted;                                       
	struct FScriptMulticastDelegate                    OnAnimationFinished;                                      
	class UMovieScene*                                 MovieScene;                                               
	TArray<struct FWidgetAnimationBinding>             AnimationBindings;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetAnimation");
		return pStaticClass;
	}


	float GetStartTime();
	float GetEndTime();
};




class UWidgetBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetBinding");
		return pStaticClass;
	}


	class UWidget* GetValue();
};




class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return pStaticClass;
	}


	static struct FEventReply UnlockMouse(struct FEventReply* Reply);
	static struct FEventReply Unhandled();
	static struct FEventReply SetUserFocus(class UWidget* FocusWidget, bool bInAllUsers, struct FEventReply* Reply);
	static struct FEventReply SetMousePosition(const struct FVector2D& NewMousePosition, struct FEventReply* Reply);
	static void SetInputMode_UIOnlyEx(class APlayerController* Target, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
	static void SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	static void SetInputMode_GameOnly(class APlayerController* Target);
	static void SetInputMode_GameAndUIEx(class APlayerController* Target, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
	static void SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	static bool SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot);
	static void SetFocusToGameViewport();
	static void SetBrushResourceToTexture(class UTexture2D* Texture, struct FSlateBrush* Brush);
	static void SetBrushResourceToMaterial(class UMaterialInterface* Material, struct FSlateBrush* Brush);
	static struct FEventReply ReleaseMouseCapture(struct FEventReply* Reply);
	static struct FEventReply ReleaseJoystickCapture(bool bInAllJoysticks, struct FEventReply* Reply);
	static struct FSlateBrush NoResourceBrush();
	static struct FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);
	static struct FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);
	static struct FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	static struct FEventReply LockMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	static bool IsDragDropping();
	static struct FEventReply Handled();
	static void GetSafeZonePadding(class UObject* WorldContextObject, struct FVector2D* SafePadding, struct FVector2D* SafePaddingScale, struct FVector2D* SpillOverPadding);
	static struct FKeyEvent GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
	static struct FInputEvent GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
	static struct FInputEvent GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
	static struct FInputEvent GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
	static struct FInputEvent GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
	static class UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush* Brush);
	static class UDragDropOperation* GetDragDroppingContent();
	static class UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush* Brush);
	static class UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush* Brush);
	static class UObject* GetBrushResource(struct FSlateBrush* Brush);
	static void GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	static void GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	static struct FEventReply EndDragDrop(struct FEventReply* Reply);
	static void DrawTextFormatted(class UFont* Font, const struct FText& Text, const struct FVector2D& Position, const struct FLinearColor& Tint, int FontSize, const struct FName& FontTypeFace, struct FPaintContext* Context);
	static void DrawText(const struct FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint, struct FPaintContext* Context);
	static void DrawLines(TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context);
	static void DrawLine(const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context);
	static void DrawBox(const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint, struct FPaintContext* Context);
	static void DismissAllMenus();
	static struct FEventReply DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	static struct FEventReply DetectDrag(class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, struct FEventReply* Reply);
	static class UDragDropOperation* CreateDragDropOperation(class UClass* OperationClass);
	static class UUserWidget* Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
	static struct FEventReply ClearUserFocus(bool bInAllUsers, struct FEventReply* Reply);
	static bool CheckWidgetIsActive(class UWidget* Widget);
	static struct FEventReply CaptureMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	static struct FEventReply CaptureJoystick(class UWidget* CapturingWidget, bool bInAllJoysticks, struct FEventReply* Reply);
	static void CancelDragDrop();
};




class UWidgetInteractionComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnHoveredWidgetChanged;                                   
	unsigned char                                      UnknownData00[0x10];                                      
	int                                                VirtualUserIndex;                                         
	float                                              PointerIndex;                                             
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             
	unsigned char                                      UnknownData01[0x3];                                       
	float                                              InteractionDistance;                                      
	EWidgetInteractionSource                           InteractionSource;                                        
	bool                                               bEnableHitTesting;                                        
	bool                                               bShowDebug;                                               
	unsigned char                                      UnknownData02[0x1];                                       
	struct FLinearColor                                DebugColor;                                               
	unsigned char                                      UnknownData03[0x7C];                                      
	struct FHitResult                                  CustomHitResult;                                          
	struct FVector2D                                   LocalHitLocation;                                         
	struct FVector2D                                   LastLocalHitLocation;                                     
	class UWidgetComponent*                            HoveredWidgetComponent;                                   
	struct FHitResult                                  LastHitResult;                                            
	bool                                               bIsHoveredWidgetInteractable;                             
	bool                                               bIsHoveredWidgetFocusable;                                
	bool                                               bIsHoveredWidgetHitTestVisible;                           
	unsigned char                                      UnknownData04[0x5];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return pStaticClass;
	}


	void SetCustomHitResult(const struct FHitResult& HitResult);
	bool SendKeyChar(const struct FString& Characters, bool bRepeat);
	void ScrollWheel(float ScrollDelta);
	void ReleasePointerKey(const struct FKey& Key);
	bool ReleaseKey(const struct FKey& Key);
	void PressPointerKey(const struct FKey& Key);
	bool PressKey(const struct FKey& Key, bool bRepeat);
	bool PressAndReleaseKey(const struct FKey& Key);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct FHitResult GetLastHitResult();
	class UWidgetComponent* GetHoveredWidgetComponent();
	struct FVector2D Get2DHitLocation();
};




class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return pStaticClass;
	}


	static class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);
	static class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);
	static class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);
	static class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);
	static class UGridSlot* SlotAsGridSlot(class UWidget* Widget);
	static class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);
	static class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);
	static void SetOriginalViewPortSizeXY(int X, int Y);
	static void SetOriginalViewPortSize(const struct FIntPoint& Size);
	static void RemoveAllWidgets(class UObject* WorldContextObject);
	static struct FVector2D ProjectWorldLocationToWidgetPositionReturnValue(class APlayerController* PlayerController, const struct FVector& WorldLocation);
	static bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition);
	static struct FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject);
	static struct FVector2D GetViewportSize(class UObject* WorldContextObject);
	static float GetViewportScale(class UObject* WorldContextObject);
	static struct FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
	static bool GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
	static struct FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject);
	static struct FVector2D GetMousePositionOnPlatform();
};




class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                       
	struct FWidgetNavigationData                       Down;                                                     
	struct FWidgetNavigationData                       Left;                                                     
	struct FWidgetNavigationData                       Right;                                                    
	struct FWidgetNavigationData                       Next;                                                     
	struct FWidgetNavigationData                       Previous;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetNavigation");
		return pStaticClass;
	}

};




class UWidgetSwitcher : public UPanelWidget
{
public:
	bool                                               bDontPaintWhenChildEmpty;                                 
	unsigned char                                      UnknownData00[0x17];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetSwitcher");
		return pStaticClass;
	}


	void SetDontPaintWhenChildEmpty(bool Enable);
	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(class UWidget* Widget);
	class UWidget* GetWidgetAtIndex(int Index);
	int GetNumWidgets();
	bool GetDontPaintWhenChildEmpty();
	int GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
};




class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        
	unsigned char                                      UnknownData00[0xE];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};




class UWidgetTree : public UObject
{
public:
	class UWidget*                                     RootWidget;                                               
	TArray<class UWidget*>                             AllWidgets;                                               
	TArray<struct FLazyLoadBinding>                    LazyLoadBindings;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WidgetTree");
		return pStaticClass;
	}

};




class UWindowTitleBarArea : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WindowTitleBarArea");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};




class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        
	unsigned char                                      UnknownData00[0x16];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		return pStaticClass;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


}

