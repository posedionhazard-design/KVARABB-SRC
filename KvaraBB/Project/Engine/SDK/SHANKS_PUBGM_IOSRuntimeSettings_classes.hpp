#pragma once


 
namespace SDK
{






class UIOSRuntimeSettings : public UObject
{
public:
	unsigned char                                      bEnableGameCenterSupport : 1;                             
	unsigned char                                      bEnableCloudKitSupport : 1;                               
	unsigned char                                      bEnableRemoteNotificationsSupport : 1;                    
	bool                                               bSupportsMetal;                                           
	bool                                               bSupportsMetalMRT;                                        
	bool                                               bCookPVRTCTextures;                                       
	bool                                               bCookASTCTextures;                                        
	bool                                               bSupportsOpenGLES2;                                       
	bool                                               EnableRemoteShaderCompile;                                
	bool                                               bGeneratedSYMFile;                                        
	bool                                               bGeneratedSYMBundle;                                      
	bool                                               bGenerateXCArchive;                                       
	bool                                               bDevForArmV7;                                             
	bool                                               bDevForArm64;                                             
	bool                                               bDevForArmV7S;                                            
	bool                                               bShipForArmV7;                                            
	bool                                               bShipForArm64;                                            
	bool                                               bShipForArmV7S;                                           
	bool                                               bShipForBitcode;                                          
	unsigned char                                      UnknownData00[0x7];                                       
	struct FString                                     AdditionalLinkerFlags;                                    
	struct FString                                     AdditionalShippingLinkerFlags;                            
	struct FString                                     RemoteServerName;                                         
	bool                                               bUseRSync;                                                
	unsigned char                                      UnknownData01[0x7];                                       
	struct FString                                     RSyncUsername;                                            
	struct FIOSBuildResourceDirectory                  DeltaCopyInstallPath;                                     
	struct FString                                     SSHPrivateKeyLocation;                                    
	struct FIOSBuildResourceFilePath                   SSHPrivateKeyOverridePath;                                
	bool                                               bTreatRemoteAsSeparateController;                         
	bool                                               bAllowRemoteRotation;                                     
	bool                                               bUseRemoteAsVirtualJoystick;                              
	bool                                               bUseRemoteAbsoluteDpadValues;                             
	unsigned char                                      bSupportsPortraitOrientation : 1;                         
	unsigned char                                      bSupportsUpsideDownOrientation : 1;                       
	unsigned char                                      bSupportsLandscapeLeftOrientation : 1;                    
	unsigned char                                      bSupportsLandscapeRightOrientation : 1;                   
	unsigned char                                      UnknownData02[0x3];                                       
	struct FString                                     BundleDisplayName;                                        
	struct FString                                     BundleName;                                               
	struct FString                                     BundleIdentifier;                                         
	struct FString                                     VersionInfo;                                              
	EPowerUsageFrameRateLock                           FrameRateLock;                                            
	EIOSVersion                                        MinimumiOSVersion;                                        
	unsigned char                                      bSupportsIPad : 1;                                        
	unsigned char                                      bSupportsIPhone : 1;                                      
	unsigned char                                      UnknownData03[0x5];                                       
	struct FString                                     AdditionalPlistData;                                      
	bool                                               bEnableFacebookSupport;                                   
	unsigned char                                      UnknownData04[0x7];                                       
	struct FString                                     FacebookAppID;                                            
	struct FString                                     MobileProvision;                                          
	struct FString                                     SigningCertificate;                                       
	bool                                               bAutomaticSigning;                                        
	unsigned char                                      MaxShaderLanguageVersion;                                 
	bool                                               UseFastIntrinsics;                                        
	bool                                               EnableMathOptimisations;                                  
	bool                                               bUseIntegratedKeyboard;                                   
	unsigned char                                      UnknownData05[0x3];                                       
	int                                                AudioSampleRate;                                          
	int                                                AudioCallbackBufferFrameSize;                             
	int                                                AudioNumBuffersToEnqueue;                                 
	int                                                AudioMaxChannels;                                         
	int                                                AudioNumSourceWorkers;                                    
	unsigned char                                      UnknownData06[0x4];                                       
	struct FString                                     SpatializationPlugin;                                     
	struct FString                                     ReverbPlugin;                                             
	struct FString                                     OcclusionPlugin;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class IOSRuntimeSettings.IOSRuntimeSettings");
		return pStaticClass;
	}

};


}

