#pragma once


 
namespace SDK
{






class ULobby_Downloader_Btn_UIBP_C : public UUserWidget
{
public:
	class UBorder*                                     AnimeBorder_Opacity_4_Invalid;                            
	class UCanvasPanel*                                CanvasPanel_11;                                           
	class UCanvasPanel*                                CanvasPanel_Downloading_ODPack;                           
	class UCanvasPanel*                                CanvasPanel_FX;                                           
	class UCommon_DragDrop_Item_C*                     CommonDragDropItem;                                       
	class UImage*                                      Image_8;                                                  
	class UImage*                                      Image_Progress;                                           
	class UImage*                                      Image_Progress_02;                                        
	class UCanvasPanel*                                Panel_Downloader;                                         
	class UCanvasPanel*                                Panel_Drag;                                               
	class UReddot_Anchor_C*                            Reddot_Anchor_1;                                          
	class UReddot_Anchor_C*                            Reddot_Anchor_2;                                          
	class UReddot_Anchor_C*                            Reddot_Anchor_3;                                          
	class UScaleBox*                                   ScaleBox_Downloader;                                      
	class UTextBlock*                                  Text_Downloading_ODPack;                                  
	class UTextBlock*                                  TextBlock_2;                                              
	class UUIParticleEmitter*                          UIParticleEmitter_1;                                      
	class UUIParticleEmitter*                          UIParticleEmitter_2;                                      
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         
	class UWidgetSwitcher*                             WidgetSwitcher_Download;                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Lobby_Downloader_Btn_UIBP.Lobby_Downloader_Btn_UIBP_C");
		return pStaticClass;
	}

};


}

