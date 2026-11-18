#pragma once


 
namespace SDK
{






class ULobby_Mid_Bnner_More250_UIBP_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UWidgetAnimation*                            NewAnimation_2;                                           
	class UHorizontalBox*                              DotPanel;                                                 
	class ULoopScrollBox*                              LoopScrollBox_1;                                          
	class ULoopScrollBox*                              LoopScrollBox_2;                                          
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         
	TArray<class ULobby_Activity_BtnItem_C*>           ActivityBtnList;                                          
	struct FTimerHandle                                BtnListMoveTimer;                                         
	float                                              ActivityBtnItemLen;                                       
	unsigned char                                      UnknownData00[0x4];                                       
	struct FTimerHandle                                BtnPlayingAnimTimer;                                      
	float                                              BtnListPlayAnimTarget;                                    
	bool                                               BtnListIsLastWindow;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	struct FScriptMulticastDelegate                    EventDispatcherClickItem;                                 
	float                                              alignOffset;                                              
	int                                                pageCount;                                                
	bool                                               bNextDir;                                                 
	bool                                               bAniIng;                                                  
	unsigned char                                      UnknownData02[0x2];                                       
	float                                              preOffset;                                                
	bool                                               isUserScrolling;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Mid_Bnner_More250_UIBP.Lobby_Mid_Bnner_More250_UIBP_C");
		return pStaticClass;
	}


	void GetCurScroll(class ULoopScrollBox** Scroll);
	void GetOffset(float* Offset);
	void GetCurrentIndex(int* Index);
	void OnClickActivityItem(class ULobby_Activity_BtnItem_C* Item);
	void UpdateCurrentPage();
	void SetActivityListPageCount(int pageCount);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_Lobby_Mid_Bnner_More250_UIBP(int EntryPoint);
	void EventDispatcherClickItem__DelegateSignature(int ID, const struct FString& JumpUrl);
};


}

