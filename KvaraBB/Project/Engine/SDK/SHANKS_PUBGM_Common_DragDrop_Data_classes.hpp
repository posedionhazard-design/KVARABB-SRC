#pragma once


 
namespace SDK
{






class UCommon_DragDrop_Data_C : public UDragDropOperation
{
public:
	int                                                dragItem;                                                 
	unsigned char                                      UnknownData00[0x4];                                       
	struct FString                                     dragExtendData;                                           
	int                                                dragIndex;                                                

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass Common_DragDrop_Data.Common_DragDrop_Data_C");
		return pStaticClass;
	}

};


}

