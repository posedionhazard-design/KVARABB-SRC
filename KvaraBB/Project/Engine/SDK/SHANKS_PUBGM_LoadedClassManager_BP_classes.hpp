#pragma once


 
namespace SDK
{






class ULoadedClassManager_BP_C : public UUAELoadedClassManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           
	TMap<struct FString, struct FString>               BPTableName2TableName;                                    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass LoadedClassManager_BP.LoadedClassManager_BP_C");
		return pStaticClass;
	}


	void LoadEffectItemBPTable(const struct FString& BPTableName);
	void LoadBPTableData(const struct FString& BPTableName, const struct FString& tableName);
	void Load3DIconBPTable(const struct FString& BPTableName);
	void LoadInFillingBPTable(const struct FString& BPTableName);
	void LoadVehiclePropsBPTable(const struct FString& BPTableName);
	void LoadDecalBPTable(const struct FString& BPTableName);
	void LoadSkillPropsBPTable(const struct FString& BPTableName);
	void LoadPetAvatarBPTable(const struct FString& BPTableName);
	void LoadVehilceRefitBPTable(const struct FString& BPTableName);
	void LoadSeasonMissionBPTable(const struct FString& BPTableName);
	void LoadAvatarPatternBPTable(const struct FString& BPTableName);
	void LoadAvatarColorBPTable(const struct FString& BPTableName);
	void LoadVehicleBPTable(const struct FString& BPTableName);
	void LoadPlaneBPTable(const struct FString& BPTableName);
	void LoadEmoteBPTable(const struct FString& BPTableName);
	void LoadConsumableBPTable(const struct FString& BPTableName);
	void LoadGameModeBPTable(const struct FString& BPTableName);
	void LoadAvatarBPTable(const struct FString& BPTableName);
	void LoadWeaponBPTable(const struct FString& BPTableName);
	void InitBPTableMap();
	void InitBPTableMap_Mod();
	void ExecuteUbergraph_LoadedClassManager_BP(int EntryPoint);
};


}

