#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UCommon_DragDrop_Item_C_OnTestDragLeave__DelegateSignature_Params
{
};


struct UCommon_DragDrop_Item_C_OnTestDragEnter__DelegateSignature_Params
{
};


struct UCommon_DragDrop_Item_C_OnItemTouchMoved__DelegateSignature_Params
{
};


struct UCommon_DragDrop_Item_C_OnItemTouchEnded__DelegateSignature_Params
{
};


struct UCommon_DragDrop_Item_C_OnItemTouchStarted__DelegateSignature_Params
{
};


struct UCommon_DragDrop_Item_C_OnDragSuccess__DelegateSignature_Params
{
	class UCommon_DragDrop_Data_C*                     Operation;                                                
};


struct UCommon_DragDrop_Item_C_OnDragClicked__DelegateSignature_Params
{
};


struct UCommon_DragDrop_Item_C_OnDragReadyToShape__DelegateSignature_Params
{
	class UWidget*                                     generatedWidget;                                          
	class UCommon_DragDrop_Data_C*                     dragOperation;                                            
};


struct UCommon_DragDrop_Item_C_OnDragCanceled__DelegateSignature_Params
{
	class UCommon_DragDrop_Data_C*                     Operation;                                                
};

}

