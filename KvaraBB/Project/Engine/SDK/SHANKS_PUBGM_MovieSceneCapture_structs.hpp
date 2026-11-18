#pragma once


 
namespace SDK
{





enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_MAX                       = 5
};









struct FCaptureProtocolID
{
	struct FName                                       Identifier;                                               
};



struct FCaptureResolution
{
	uint32_t                                           ResX;                                                     
	uint32_t                                           ResY;                                                     
};



struct FMovieSceneCaptureSettings
{
	struct FDirectoryPath                              OutputDirectory;                                          
	class UClass*                                      GameModeOverride;                                         
	struct FString                                     OutputFormat;                                             
	bool                                               bOverwriteExisting;                                       
	bool                                               bUseRelativeFrameNumbers;                                 
	unsigned char                                      UnknownData00[0x2];                                       
	int                                                HandleFrames;                                             
	unsigned char                                      ZeroPadFrameNumbers;                                      
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                FrameRate;                                                
	int                                                BitRate;                                                  
	struct FCaptureResolution                          Resolution;                                               
	bool                                               bEnableTextureStreaming;                                  
	bool                                               bCinematicEngineScalability;                              
	bool                                               bCinematicMode;                                           
	bool                                               bAllowMovement;                                           
	bool                                               bAllowTurning;                                            
	bool                                               bShowPlayer;                                              
	bool                                               bShowHUD;                                                 
	unsigned char                                      UnknownData02[0x5];                                       
};



struct FCompositionGraphCapturePasses
{
	TArray<struct FString>                             Value;                                                    
};

}

