#pragma once


 
namespace SDK
{






class UReconnect_BP_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UReconnect_UIBP_C*                           Reconnect_UIBP;                                           
	class UTextBlock*                                  TextNumber;                                               
	class UTextBlock*                                  TextInfo;                                                 
	class UHorizontalBox*                              BoxText;                                                  
	bool                                               isShowText;                                               
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                StartTime;                                                
	float                                              lastTickTime;                                             
	float                                              curTickTIme;                                              
	bool                                               canCrtlFromLua;                                           
	bool                                               BIsShowAnim;                                              
	bool                                               bImmediatelyShow;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Reconnect_BP.Reconnect_BP_C");
		return pStaticClass;
	}


	void Construct();
	void ExecuteUbergraph_Reconnect_BP(int EntryPoint);
};


}

