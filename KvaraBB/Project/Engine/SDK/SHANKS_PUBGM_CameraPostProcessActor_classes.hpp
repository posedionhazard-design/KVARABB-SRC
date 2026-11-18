#pragma once


 
namespace SDK
{






class ACameraPostProcessActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class USceneComponent*                             DefaultSceneRoot;                                         
	float                                              Timeline_LerpPPSettings_104_7E99B53D425173C51E1B2D83BB82148A;
	float                                              Timeline_LerpPPSettings_103_7E99B53D425173C51E1B2D83BB82148A;
	float                                              Timeline_LerpPPSettings_102_7E99B53D425173C51E1B2D83BB82148A;
	float                                              Timeline_LerpPPSettings_101_7E99B53D425173C51E1B2D83BB82148A;
	TEnumAsByte<ETimelineDirection>                    Timeline_LerpPPSettings__Direction_7E99B53D425173C51E1B2D83BB82148A;
	unsigned char                                      UnknownData00[0x7];                                       
	class UTimelineComponent*                          Timeline_LerpPPSettings;                                  
	class APostProcessVolume*                          currentPostProcessVolumn;                                 
	int                                                isLerp;                                                   
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<TEnumAsByte<EDepthOfFieldMethod>>           depthOfFieldMethodArray;                                  
	float                                              LerpAlpha;                                                
	bool                                               isReverse;                                                
	unsigned char                                      UnknownData02[0xB];                                       
	struct FPostProcessSettings                        previousPPSettingsStruct;                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass CameraPostProcessActor.CameraPostProcessActor_C");
		return pStaticClass;
	}


	void UserConstructionScript();
	void Timeline_LerpPPSettings__FinishedFunc();
	void Timeline_LerpPPSettings__UpdateFunc();
	void Event_LerpPostProcessSettings(class APostProcessVolume* currentPPVolumn, const struct FBP_STRUCT_CameraPostProcessSettings_type& targetPPSettingsStruct, float Time, int ID, bool isReverse);
	void ExecuteUbergraph_CameraPostProcessActor(int EntryPoint);
};


}

