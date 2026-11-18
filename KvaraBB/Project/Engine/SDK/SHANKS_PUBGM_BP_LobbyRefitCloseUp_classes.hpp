#pragma once


 
namespace SDK
{






class ABP_LobbyRefitCloseUp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	class UCameraComponent*                            Camera;                                                   
	class USceneComponent*                             DefaultSceneRoot;                                         
	float                                              ____0_time_5C46C2804013FEE671133C8FDC77B8D4;              
	TEnumAsByte<ETimelineDirection>                    ____0__Direction_5C46C2804013FEE671133C8FDC77B8D4;        
	unsigned char                                      UnknownData00[0x3];                                       
	class UTimelineComponent*                          Timeline_11;                                                 
	int                                                closeUpSlotId;                                            
	unsigned char                                      UnknownData01[0x4];                                       
	class ABP_LobbyRefitCloseUp_C*                     tempCameraCloseUp;                                        

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_LobbyRefitCloseUp.BP_LobbyRefitCloseUp_C");
		return pStaticClass;
	}


	void GetCameraWorldLocation(struct FVector* cameraWorldLocation);
	void UserConstructionScript();
	void Timeline_1();
	void ChanTransformWithBlend(const struct FTransform& B);
	void ExecuteUbergraph_BP_LobbyRefitCloseUp(int EntryPoint);
};


}

