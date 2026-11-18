#pragma once


 
namespace SDK
{






class UMaskBoxItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UBorder*                                     Border_Close;                                             
	class UButton*                                     Button_Down;                                              
	class UButton*                                     Button_Left;                                              
	class UButton*                                     Button_Right;                                             
	class UButton*                                     Button_Up;                                                
	class UCommon_System_Close_UIBP_C*                 Common_System_Close_UIBP;                                 
	class UImage*                                      Image_1;                                                  
	class UMaskBox*                                    MaskBox;                                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass MaskBoxItem.MaskBoxItem_C");
		return pStaticClass;
	}


	void Construct();
	void ExecuteUbergraph_MaskBoxItem(int EntryPoint);
};


}

