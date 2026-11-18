#pragma once


 
namespace SDK
{






class UBP_SAVEGAME_UIElemLayout_C : public USaveGame
{
public:
	TMap<int, struct FBP_STRUCT_UIElemLayoutDetail>    LayoutDetailDict1;                                        
	TMap<int, struct FBP_STRUCT_UIElemLayoutDetail>    LayoutDetailDict2;                                        
	TMap<int, struct FBP_STRUCT_UIElemLayoutDetail>    LayoutDetailDict3;                                        
	bool                                               IsDataValid1;                                             
	bool                                               IsDataValid2;                                             
	bool                                               IsDataValid3;                                             
	unsigned char                                      UnknownData00[0x1];                                       
	float                                              RushTriggerLength1;                                       
	float                                              RushTriggerLength2;                                       
	float                                              RushTriggerLength3;                                       
	struct FString                                     SaveSlotName;                                             
	struct FString                                     LayoutName1;                                              
	struct FString                                     LayoutName2;                                              
	struct FString                                     LayoutName3;                                              
	int                                                TimeTag;                                                  
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<int>                                        InvalidArray1;                                            
	TArray<int>                                        InvalidArray2;                                            
	TArray<int>                                        InvalidArray3;                                            

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass BP_SAVEGAME_UIElemLayout.BP_SAVEGAME_UIElemLayout_C");
		return pStaticClass;
	}


	void BPStructToCPP(struct FBP_STRUCT_UIElemLayoutDetail* In, struct FUIElemLayoutDetail* Out);
	void CPPStructToBP(struct FUIElemLayoutDetail* In, struct FBP_STRUCT_UIElemLayoutDetail* Out);
};


}

