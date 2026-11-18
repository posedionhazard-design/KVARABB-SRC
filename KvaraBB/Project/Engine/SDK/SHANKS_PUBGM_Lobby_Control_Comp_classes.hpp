#pragma once


 
namespace SDK
{






class ULobby_Control_Comp_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UNamedSlot*                                  NamedSlot_1;                                              
	struct FVector2D                                   posDown;                                                  
	struct FScriptMulticastDelegate                    OnTouchEndedDispatcher;                                   
	int                                                From;                                                     
	int                                                To;                                                       
	bool                                               bAnimation;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              DeltaTime;                                                
	bool                                               bInPos;                                                   
	bool                                               bIsDoubleSpeed;                                           
	unsigned char                                      UnknownData01[0x6];                                       
	TArray<struct FVector>                             PosList;                                                  
	bool                                               bDown;                                                    
	unsigned char                                      UnknownData02[0x7];                                       
	TArray<struct FVector>                             VelocityList;                                             
	bool                                               bMoveOneStep;                                             
	bool                                               bHasTeam;                                                 
	unsigned char                                      UnknownData03[0x6];                                       
	struct FScriptMulticastDelegate                    OnTouchStartedDispatcher;                                 
	struct FScriptMulticastDelegate                    OnLobbyEndedDispatcher;                                   
	bool                                               bHandled;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Control_Comp.Lobby_Control_Comp_C");
		return pStaticClass;
	}


	void AniCameraEnd();
	void CancelScroll();
	void CheckSide12(float pos, bool* inside);
	struct FEventReply OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void SetCameraPos(float X, float Y, float Z);
	void MoveCamera(const struct FVector& Speed, float Time, int sideIndex, bool* bStop);
	struct FEventReply OnTouchEnded(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	struct FEventReply OnTouchMoved(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	struct FEventReply OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	void AniCamera(int From, int To, bool bShoudDouble);
	void GetCamera(class ACameraActor** Camera);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Construct();
	void ExecuteUbergraph_Lobby_Control_Comp(int EntryPoint);
	void OnLobbyEndedDispatcher__DelegateSignature(float X, float Y);
	void OnTouchStartedDispatcher__DelegateSignature();
	void OnTouchEndedDispatcher__DelegateSignature(float OffSetX, float OffSetY, const struct FGeometry& Geometry, const struct FVector2D& touchStartPos);
};


}

