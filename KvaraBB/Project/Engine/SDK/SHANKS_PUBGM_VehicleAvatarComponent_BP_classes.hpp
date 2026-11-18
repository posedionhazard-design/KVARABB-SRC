#pragma once


 
namespace SDK
{






class UVehicleAvatarComponent_BP_C : public UVehicleAvatarComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	unsigned char                                      UnknownData00[0x28];                                      
	class UParticleSystemComponent*                    LightEffect;                                              
	bool                                               VehicleBroken;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass VehicleAvatarComponent_BP.VehicleAvatarComponent_BP_C");
		return pStaticClass;
	}


	struct FName GetReflectionCubeName_Lobby();
	void TryAddLightEffect();
	struct FString GetItemAvatarHandlePath(int* ItemId);
	class UBackpackCommonAvatarHandle* GetItemAvatarHandle(int* ItemId);
	void OnLoaded_F4972C3D46F3CFC0E0742D8E88D4527B(class UObject* Loaded);
	void ReceiveBeginPlay();
	void OnAddLightEffect();
	void LoadedBrokenMat();
	void ClearVehicleLightEffect();
	void ExecuteUbergraph_VehicleAvatarComponent_BP(int EntryPoint);
};


}

