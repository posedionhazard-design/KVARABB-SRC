#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct ULobby_Control_Comp_C_AniCameraEnd_Params
{
};


struct ULobby_Control_Comp_C_CancelScroll_Params
{
};


struct ULobby_Control_Comp_C_CheckSide12_Params
{
	float                                              pos;                                                      
	bool                                               inside;                                                   
};


struct ULobby_Control_Comp_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               
	struct FPointerEvent                               MouseEvent;                                               
	struct FEventReply                                 ReturnValue;                                              
};


struct ULobby_Control_Comp_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               
	struct FPointerEvent                               MouseEvent;                                               
	struct FEventReply                                 ReturnValue;                                              
};


struct ULobby_Control_Comp_C_SetCameraPos_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
	float                                              Z;                                                        
};


struct ULobby_Control_Comp_C_MoveCamera_Params
{
	struct FVector                                     Speed;                                                    
	float                                              Time;                                                     
	int                                                sideIndex;                                                
	bool                                               bStop;                                                    
};


struct ULobby_Control_Comp_C_OnTouchEnded_Params
{
	struct FGeometry*                                  MyGeometry;                                               
	struct FPointerEvent                               InTouchEvent;                                             
	struct FEventReply                                 ReturnValue;                                              
};


struct ULobby_Control_Comp_C_OnTouchMoved_Params
{
	struct FGeometry*                                  MyGeometry;                                               
	struct FPointerEvent                               InTouchEvent;                                             
	struct FEventReply                                 ReturnValue;                                              
};


struct ULobby_Control_Comp_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               
	struct FPointerEvent                               InTouchEvent;                                             
	struct FEventReply                                 ReturnValue;                                              
};


struct ULobby_Control_Comp_C_AniCamera_Params
{
	int                                                From;                                                     
	int                                                To;                                                       
	bool                                               bShoudDouble;                                             
};


struct ULobby_Control_Comp_C_GetCamera_Params
{
	class ACameraActor*                                Camera;                                                   
};


struct ULobby_Control_Comp_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               
	float*                                             InDeltaTime;                                              
};


struct ULobby_Control_Comp_C_Construct_Params
{
};


struct ULobby_Control_Comp_C_ExecuteUbergraph_Lobby_Control_Comp_Params
{
	int                                                EntryPoint;                                               
};


struct ULobby_Control_Comp_C_OnLobbyEndedDispatcher__DelegateSignature_Params
{
	float                                              X;                                                        
	float                                              Y;                                                        
};


struct ULobby_Control_Comp_C_OnTouchStartedDispatcher__DelegateSignature_Params
{
};


struct ULobby_Control_Comp_C_OnTouchEndedDispatcher__DelegateSignature_Params
{
	float                                              OffSetX;                                                  
	float                                              OffSetY;                                                  
	struct FGeometry                                   Geometry;                                                 
	struct FVector2D                                   touchStartPos;                                            
};

}

