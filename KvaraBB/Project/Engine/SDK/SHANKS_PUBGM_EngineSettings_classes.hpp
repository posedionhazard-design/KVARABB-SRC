#pragma once


 
namespace SDK
{






class UConsoleSettings : public UObject
{
public:
	int                                                MaxScrollbackSize;                                        
	unsigned char                                      UnknownData00[0x4];                                       
	TArray<struct FAutoCompleteCommand>                ManualAutoCompleteList;                                   
	TArray<struct FString>                             AutoCompleteMapPaths;                                     
	float                                              BackgroundOpacityPercentage;                              
	bool                                               bOrderTopToBottom;                                        
	unsigned char                                      UnknownData01[0x3];                                       
	struct FColor                                      InputColor;                                               
	struct FColor                                      HistoryColor;                                             
	struct FColor                                      AutoCompleteCommandColor;                                 
	struct FColor                                      AutoCompleteCVarColor;                                    
	struct FColor                                      AutoCompleteFadedColor;                                   
	unsigned char                                      UnknownData02[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EngineSettings.ConsoleSettings");
		return pStaticClass;
	}

};




class UGameMapsSettings : public UObject
{
public:
	struct FSoftObjectPath                             EditorStartupMap;                                         
	struct FString                                     LocalMapOptions;                                          
	struct FSoftObjectPath                             TransitionMap;                                            
	bool                                               bUseSplitscreen;                                          
	TEnumAsByte<ETwoPlayerSplitScreenType>             TwoPlayerSplitscreenLayout;                               
	TEnumAsByte<EThreePlayerSplitScreenType>           ThreePlayerSplitscreenLayout;                             
	bool                                               bOffsetPlayerGamepadIds;                                  
	unsigned char                                      UnknownData00[0x4];                                       
	struct FSoftClassPath                              GameInstanceClass;                                        
	struct FSoftObjectPath                             GameDefaultMap;                                           
	struct FSoftObjectPath                             ServerDefaultMap;                                         
	struct FSoftClassPath                              GlobalDefaultGameMode;                                    
	struct FSoftClassPath                              GlobalDefaultServerGameMode;                              
	TArray<struct FGameModeName>                       GameModeMapPrefixes;                                      
	TArray<struct FGameModeName>                       GameModeClassAliases;                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EngineSettings.GameMapsSettings");
		return pStaticClass;
	}

};




class UGameNetworkManagerSettings : public UObject
{
public:
	int                                                MinDynamicBandwidth;                                      
	int                                                MaxDynamicBandwidth;                                      
	int                                                TotalNetBandwidth;                                        
	int                                                BadPingThreshold;                                         
	unsigned char                                      bIsStandbyCheckingEnabled : 1;                            
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              StandbyRxCheatTime;                                       
	float                                              StandbyTxCheatTime;                                       
	float                                              PercentMissingForRxStandby;                               
	float                                              PercentMissingForTxStandby;                               
	float                                              PercentForBadPing;                                        
	float                                              JoinInProgressStandbyWaitTime;                            
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EngineSettings.GameNetworkManagerSettings");
		return pStaticClass;
	}

};




class UGameSessionSettings : public UObject
{
public:
	int                                                MaxSpectators;                                            
	int                                                MaxPlayers;                                               
	unsigned char                                      bRequiresPushToTalk : 1;                                  
	unsigned char                                      UnknownData00[0x7];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EngineSettings.GameSessionSettings");
		return pStaticClass;
	}

};




class UGeneralEngineSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EngineSettings.GeneralEngineSettings");
		return pStaticClass;
	}

};




class UGeneralProjectSettings : public UObject
{
public:
	struct FString                                     CompanyName;                                              
	struct FString                                     CompanyDistinguishedName;                                 
	struct FString                                     CopyrightNotice;                                          
	struct FString                                     Description;                                              
	struct FString                                     Homepage;                                                 
	struct FString                                     LicensingTerms;                                           
	struct FString                                     PrivacyPolicy;                                            
	struct FGuid                                       ProjectID;                                                
	struct FString                                     ProjectName;                                              
	struct FString                                     ProjectVersion;                                           
	struct FString                                     ProjectBranch;                                            
	struct FString                                     SupportContact;                                           
	struct FText                                       ProjectDisplayedTitle;                                    
	struct FText                                       ProjectDebugTitleInfo;                                    
	bool                                               bShouldWindowPreserveAspectRatio;                         
	bool                                               bUseBorderlessWindow;                                     
	bool                                               bStartInVR;                                               
	bool                                               bStartInAR;                                               
	bool                                               bAllowWindowResize;                                       
	bool                                               bAllowClose;                                              
	bool                                               bAllowMaximize;                                           
	bool                                               bAllowMinimize;                                           

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EngineSettings.GeneralProjectSettings");
		return pStaticClass;
	}

};




class UHudSettings : public UObject
{
public:
	unsigned char                                      bShowHUD : 1;                                             
	unsigned char                                      UnknownData00[0x7];                                       
	TArray<struct FName>                               DebugDisplay;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class EngineSettings.HudSettings");
		return pStaticClass;
	}

};


}

