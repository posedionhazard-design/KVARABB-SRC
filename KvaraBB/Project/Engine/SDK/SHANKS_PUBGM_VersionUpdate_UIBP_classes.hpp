#pragma once


 
namespace SDK
{






class UVersionUpdate_UIBP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UWidgetAnimation*                            Animation_loading;                                        
	class UButton*                                     Button_3;                                                 
	class UButton*                                     Button_Bulletin;                                          
	class UButton*                                     Button_Cancel;                                            
	class UButton*                                     Button_L;                                                 
	class UButton*                                     Button_R;                                                 
	class UButton*                                     Button_SystemNotify;                                      
	class UButton*                                     Button_Updated;                                           
	class UCanvasPanel*                                CanvasPanel_Car;                                          
	class UCanvasPanel*                                CanvasPanel_CarRoot;                                      
	class UCanvasPanel*                                CanvasPanel_Details;                                      
	class UCanvasPanel*                                CanvasPanel_Item1;                                        
	class UCanvasPanel*                                CanvasPanel_Item2;                                        
	class UCanvasPanel*                                CanvasPanel_ItemGroup;                                    
	class UCanvasPanel*                                CanvasPanel_SDDL;                                         
	class UCanvasPanel*                                CanvasPanel_Sound;                                        
	class UCanvasPanel*                                CanvasPanel_SSRewardItem1;                                
	class UCanvasPanel*                                CanvasPanel_SSRewardItem2;                                
	class UCanvasPanel*                                CanvasPanel_Video;                                        
	class UGridPanel*                                  GridPanel_IPX;                                            
	class UGridPanel*                                  GridPanel_NoWifiUpdated;                                  
	class UGridPanel*                                  GridPanel_UpdateUI;                                       
	class UGridPanel*                                  GridPanel_WifiUpdated;                                    
	class UHorizontalBox*                              HorizontalBox_VersionSizeInfo;                            
	class UImage*                                      Image_1;                                                  
	class UImage*                                      Image_11;                                                 
	class UImage*                                      Image_bg;                                                 
	class UImage*                                      Image_Car;                                                
	class UImage*                                      image_L;                                                  
	class UImage*                                      Image_LoginBG;                                            
	class UImage*                                      Image_SSRewardItem1;                                      
	class UImage*                                      Image_SSRewardItem2;                                      
	class UImage*                                      Image_SSRewardQuality1;                                   
	class UImage*                                      Image_SSRewardQuality2;                                   
	class UImage*                                      Image_Yan01;                                              
	class UImage*                                      Image_Yan02;                                              
	class UImage*                                      MediaContainer;                                           
	class UProgressBar*                                ProgressBar_Update;                                       
	class UTextBlock*                                  RewardItemCount1;                                         
	class UTextBlock*                                  RewardItemCount2;                                         
	class UTextBlock*                                  RichText_LoadingTip;                                      
	class USizeBox*                                    SizeBox_Bulletin;                                         
	class UTextBlock*                                  TextBlock_1;                                              
	class UTextBlock*                                  TextBlock_2;                                              
	class UTextBlock*                                  TextBlock_4;                                              
	class UTextBlock*                                  TextBlock_6;                                              
	class UTextBlock*                                  TextBlock_8;                                              
	class UTextBlock*                                  TextBlock_11;                                             
	class UTextBlock*                                  TextBlock_Bulletin;                                       
	class UTextBlock*                                  TextBlock_Current;                                        
	class UTextBlock*                                  TextBlock_SDDLSpeed;                                      
	class UTextBlock*                                  TextBlock_SDDLTips;                                       
	class UTextBlock*                                  TextBlock_SDLoading;                                      
	class UTextBlock*                                  TextBlock_SDProportion;                                   
	class UTextBlock*                                  TextBlock_SysNotify;                                      
	class UUTRichTextBlock*                            UpdateTips;                                               
	class UUTRichTextBlock*                            UpdateTips2;                                              
	class UUTRichTextBlock*                            UpdateTips3;                                              
	class UVerticalBox*                                VerticalBox_autoHide_4;                                   
	class UVerticalBox*                                VerticalBox_UpdateInfo;                                   
	class UWidgetSwitcher*                             WidgetSwitcher_Down;                                      
	class UWidgetSwitcher*                             WidgetSwitcher_Up;                                        
	int                                                CurBgIndex;                                               
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FString>                             BgPaths;                                                  
	TArray<struct FString>                             MiddlePicPaths;                                           
	TArray<int>                                        LocalizeStrIndex;                                         
	int                                                AverageDownloadedSize;                                    
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<struct FString>                             CDNPicPaths;                                              
	int                                                CDNDownloadIndex;                                         
	unsigned char                                      UnknownData02[0x4];                                       
	struct FString                                     TempDownloadUrl;                                          
	struct FString                                     TempShowUrl;                                              
	TArray<struct FString>                             CDNTitleArray;                                            
	int                                                AlreadyDownloadCount;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass VersionUpdate_UIBP.VersionUpdate_UIBP_C");
		return pStaticClass;
	}


	void Construct();
	void ExecuteUbergraph_VersionUpdate_UIBP(int EntryPoint);
};


}

