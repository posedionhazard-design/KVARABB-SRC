#pragma once


 
namespace SDK
{






class UCommon_DragDrop_Item_C : public ULuaUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnDragCanceled;                                           
	struct FScriptMulticastDelegate                    OnDragReadyToShape;                                       
	struct FScriptMulticastDelegate                    OnDragClicked;                                            
	struct FScriptMulticastDelegate                    OnDragSuccess;                                            
	struct FScriptMulticastDelegate                    OnItemTouchStarted;                                       
	struct FScriptMulticastDelegate                    OnItemTouchEnded;                                         
	struct FScriptMulticastDelegate                    OnItemTouchMoved;                                         
	struct FScriptMulticastDelegate                    OnTestDragEnter;                                          
	struct FScriptMulticastDelegate                    OnTestDragLeave;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Common_DragDrop_Item.Common_DragDrop_Item_C");
		return pStaticClass;
	}


	void OnTestDragLeave__DelegateSignature();
	void OnTestDragEnter__DelegateSignature();
	void OnItemTouchMoved__DelegateSignature();
	void OnItemTouchEnded__DelegateSignature();
	void OnItemTouchStarted__DelegateSignature();
	void OnDragSuccess__DelegateSignature(class UCommon_DragDrop_Data_C* Operation);
	void OnDragClicked__DelegateSignature();
	void OnDragReadyToShape__DelegateSignature(class UWidget* generatedWidget, class UCommon_DragDrop_Data_C* dragOperation);
	void OnDragCanceled__DelegateSignature(class UCommon_DragDrop_Data_C* Operation);
};


}

