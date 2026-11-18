#pragma once


 
namespace SDK
{





enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__None       = 0,
	ECameraFocusMethod__Manual     = 1,
	ECameraFocusMethod__Tracking   = 2,
	ECameraFocusMethod__ECameraFocusMethod_MAX = 3
};









struct FCameraLookatTrackingSettings
{
	unsigned char                                      bEnableLookAtTracking : 1;                                
	unsigned char                                      bDrawDebugLookAtTrackingPosition : 1;                     
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              LookAtTrackingInterpSpeed;                                
	unsigned char                                      UnknownData01[0x10];                                      
	class AActor*                                      ActorToTrack;                                             
	struct FVector                                     RelativeOffset;                                           
	unsigned char                                      bAllowRoll : 1;                                           
	unsigned char                                      UnknownData02[0x3];                                       
};



struct FCameraFilmbackSettings
{
	float                                              SensorWidth;                                              
	float                                              SensorHeight;                                             
	float                                              SensorAspectRatio;                                        
};



struct FCameraLensSettings
{
	float                                              MinFocalLength;                                           
	float                                              MaxFocalLength;                                           
	float                                              MinFStop;                                                 
	float                                              MaxFStop;                                                 
	float                                              MinimumFocusDistance;                                     
};



struct FCameraTrackingFocusSettings
{
	class AActor*                                      ActorToTrack;                                             
	struct FVector                                     RelativeOffset;                                           
	unsigned char                                      bDrawDebugTrackingFocusPoint : 1;                         
	unsigned char                                      UnknownData00[0x3];                                       
};



struct FCameraFocusSettings
{
	ECameraFocusMethod                                 FocusMethod;                                              
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              ManualFocusDistance;                                      
	struct FCameraTrackingFocusSettings                TrackingFocusSettings;                                    
	unsigned char                                      bDrawDebugFocusPlane : 1;                                 
	unsigned char                                      UnknownData01[0x3];                                       
	struct FColor                                      DebugFocusPlaneColor;                                     
	unsigned char                                      bSmoothFocusChanges : 1;                                  
	unsigned char                                      UnknownData02[0x3];                                       
	float                                              FocusSmoothingInterpSpeed;                                
	float                                              FocusOffset;                                              
	unsigned char                                      UnknownData03[0x4];                                       
};



struct FNamedFilmbackPreset
{
	struct FString                                     Name;                                                     
	struct FCameraFilmbackSettings                     FilmbackSettings;                                         
	unsigned char                                      UnknownData00[0x4];                                       
};



struct FNamedLensPreset
{
	struct FString                                     Name;                                                     
	struct FCameraLensSettings                         LensSettings;                                             
	unsigned char                                      UnknownData00[0x4];                                       
};

}

