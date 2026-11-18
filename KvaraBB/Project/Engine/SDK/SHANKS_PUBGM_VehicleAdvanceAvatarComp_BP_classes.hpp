#pragma once


 
namespace SDK
{






class UVehicleAdvanceAvatarComp_BP_C : public UVehicleAdvanceAvatarComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	TArray<int>                                        DefaultStyleIDList;                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass VehicleAdvanceAvatarComp_BP.VehicleAdvanceAvatarComp_BP_C");
		return pStaticClass;
	}


	struct FName GetReflectionCubeName_Lobby();
	void PutOnItemIDInLobby(int InItemID, int ColorID, int PatternID, int Particle_ID, bool* Result);
	void PutOffSlotInLobby(unsigned char InSlotType, bool* Result);
	void BP_ProcessStyleUnequipped(int OldStyleID);
	void Bp_ProcessAvatarLogicUnequipped(int SlotID, const struct FItemDefineID& OldItemID);
	void BP_ProcessStyleEquipped(int NewStyleID, int OldStyleID);
	void Bp_ProcessAvatarLogicEquipped(int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID);
	void BPCreateAvatarCustomHandle(int* SlotID, int* ItemId, struct FAvatarCustom* InCostomInfo, TArray<class UAvatarCustomBase*>* OutCustomHandle);
	struct FVehicleStyleData MakeVehicleStyleData(int* InStyleID);
	bool GenerateDefaultAvatarConfig(int* InBaseSkinID);
	void ReceiveBeginPlay();
	void Bp_EventAvatarLogicEquipped(int SlotID, const struct FItemDefineID& NewItemID, const struct FItemDefineID& OldItemID);
	void Bp_EventAvatarLogicUnequipped(int SlotID, const struct FItemDefineID& OldItemID);
	void BP_EventStyleEquipped(int NewStyleID, int OldStyleID);
	void BP_EventStyleUnequipped(int OldStyleID);
	void ExecuteUbergraph_VehicleAdvanceAvatarComp_BP(int EntryPoint);
};


}

