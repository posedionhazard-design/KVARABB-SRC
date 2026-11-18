#pragma once


 
namespace SDK
{






class ULobby_Activity_BtnItem_C : public UUAEUserWidget
{
public:
	class UWidgetAnimation*                            Anim_loading_loop;                                        
	class UWidgetAnimation*                            AwardPickAnimation;                                       
	class UCanvasPanel*                                Activity;                                                 
	class UImage*                                      awardBg;                                                  
	class UImage*                                      awardFX;                                                  
	class UImage*                                      awardIcon;                                                
	class UButton*                                     Button_Activity;                                          
	class UCanvasPanel*                                CanvasPanel_CountDown;                                    
	class UCanvasPanel*                                CanvasPanel_Icon;                                         
	class UCanvasPanel*                                CanvasPanel_name;                                         
	class UCanvasPanel*                                CanvasPanel_OnlineActivityCountDown;                      
	class UCanvasPanel*                                CanvasPanel_Reddot;                                       
	class UCanvasPanel*                                CornerIcon;                                               
	class UHorizontalBox*                              HorizontalBox_loading;                                    
	class UImage*                                      Image_Activity;                                           
	class UImage*                                      Image_CornerIcon;                                         
	class UImage*                                      Image_CountDown;                                          
	class UImage*                                      Image_loadingBox;                                         
	class UImage*                                      Image_New;                                                
	class UReddot_Anchor_C*                            Image_RedPoint;                                           
	class UImage*                                      Image_TimeCountDownBcakgroundPic;                         
	class UCanvasPanel*                                Panel_Download;                                           
	class UTextBlock*                                  T;                                                        
	class UTextBlock*                                  TextBlock_10;                                             
	class UTextBlock*                                  TextBlock_11;                                             
	class UTextBlock*                                  TextBlock_12;                                             
	class UTextBlock*                                  TextBlock_13;                                             
	class UTextBlock*                                  TextBlock_ActivityName;                                   
	struct FVector2D                                   PressedPosition;                                          
	struct FScriptMulticastDelegate                    ItemMoveLeftDispatcher;                                   
	struct FScriptMulticastDelegate                    ItemMoveRightDispatcher;                                  
	struct FScriptMulticastDelegate                    ItemClickDispatcher;                                      
	float                                              ClickRange;                                               
	int                                                _onlineActivityType;                                      
	int                                                _onlineMinutes;                                           
	int                                                _onlineSeconds;                                           
	int                                                _ActId;                                                   
	int                                                _CreatedUtc;                                              
	struct FString                                     JumpLink;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Activity_BtnItem.Lobby_Activity_BtnItem_C");
		return pStaticClass;
	}


	void SetOnlineActivityData(int status, const struct FString& strText);
	void SetBtnData(const struct FString& ActivityName, const struct FString& IconPath, const struct FString& JumpUrl, bool IsShowCountDownIcon, bool IsNew, const struct FString& DependItems, int ActID, int CreatedUtc);
	void ItemClickDispatcher__DelegateSignature(class ULobby_Activity_BtnItem_C* Item);
	void ItemMoveRightDispatcher__DelegateSignature(class ULobby_Activity_BtnItem_C* Item);
	void ItemMoveLeftDispatcher__DelegateSignature(class ULobby_Activity_BtnItem_C* Item);
};


}

