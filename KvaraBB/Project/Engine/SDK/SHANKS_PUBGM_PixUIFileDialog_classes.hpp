#pragma once


 
namespace SDK
{






class UPxFileDialogMgr : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUIFileDialog.PxFileDialogMgr");
		return pStaticClass;
	}

};


}

