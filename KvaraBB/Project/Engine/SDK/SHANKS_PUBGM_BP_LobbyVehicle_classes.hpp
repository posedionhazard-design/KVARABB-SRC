#pragma once


 
namespace SDK
{






class ABP_LobbyVehicle_C : public ASTExtraLobbyVehicle
{
public:
	class UBP_VehicleDIYComp_C*                        BP_VehicleDIYComp;                                        
	class UBP_Lobby_VehicleLicenseComponent_C*         BP_Lobby_VehicleLicenseComponent;                         
	class UVehicleAvatarComponent_BP_C*                VehicleAvatarComponent_BP;                                
	class UMaterialInstanceDynamic*                    DMI;                                                      
	class UMaterialInstanceDynamic*                    FPPDynamicMat;                                            
	struct FName                                       TailLightParamName;                                       
	struct FName                                       FrontLightParamName;                                      
	struct FName                                       FPPBoostLightParamName;                                   
	int                                                vehicleResId;                                             
	unsigned char                                      UnknownData00[0x4];                                       
	class UMaterialInstanceDynamic*                    DMI_TailLight;                                            
	class UMaterialInstanceDynamic*                    DMI_AdvanceVehicle;                                       
	int                                                HighlightTryTime;                                         
	unsigned char                                      UnknownData01[0x4];                                       
	unsigned char                                      UnknownData02[0x50];                                      
	unsigned char                                      UnknownData03[0x50];                                      
	int                                                ShowType;                                                 

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_LobbyVehicle.BP_LobbyVehicle_C");
		return pStaticClass;
	}


	void TrySetHighLight(float NewParam, float NewParam1, float NewParam2);
	void SetHighLight(float invincible, float FreExp, float Speed);
	void SetDMIParam(class UMaterialInstanceDynamic* Target, const struct FName& Name, float Value);
	void GetVehicleMasterPath(int VehicleSkinID, struct FString* MeshBasePath);
	void UserConstructionScript();
};


}

