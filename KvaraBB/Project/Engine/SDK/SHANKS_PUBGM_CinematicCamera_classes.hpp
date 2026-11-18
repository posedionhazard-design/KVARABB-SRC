#pragma once


 
namespace SDK
{






class ACameraRig_Crane : public AActor
{
public:
	float                                              CraneYaw;                                                 
	float                                              CraneArmLength;                                           
	bool                                               bLockMountPitch;                                          
	bool                                               bLockMountYaw;                                            
	unsigned char                                      UnknownData00[0x6];                                       
	class USceneComponent*                             TransformComponent;                                       
	class USceneComponent*                             CraneYawControl;                                          
	class USceneComponent*                             CranePitchControl;                                        
	class USceneComponent*                             CraneCameraMount;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return pStaticClass;
	}

};




class ACameraRig_Rail : public AActor
{
public:
	class USceneComponent*                             TransformComponent;                                       
	class USplineComponent*                            RailSplineComponent;                                      
	class USceneComponent*                             RailCameraMount;                                          

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return pStaticClass;
	}

};




class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings               LookatTrackingSettings;                                   
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return pStaticClass;
	}


	class UCineCameraComponent* GetCineCameraComponent();
};




class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraLensSettings                         LensSettings;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	struct FCameraFocusSettings                        FocusSettings;                                            
	float                                              CurrentFocalLength;                                       
	float                                              CurrentAperture;                                          
	float                                              CurrentFocusDistance;                                     
	unsigned char                                      UnknownData01[0xC];                                       
	TArray<struct FNamedFilmbackPreset>                FilmbackPresets;                                          
	TArray<struct FNamedLensPreset>                    LensPresets;                                              
	struct FString                                     DefaultFilmbackPresetName;                                
	struct FString                                     DefaultLensPresetName;                                    
	float                                              DefaultLensFocalLength;                                   
	float                                              DefaultLensFStop;                                         

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return pStaticClass;
	}


	void SetLensPresetByName(const struct FString& InPresetName);
	void SetFilmbackPresetByName(const struct FString& InPresetName);
	float GetVerticalFieldOfView();
	struct FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	struct FString GetFilmbackPresetName();
};


}

