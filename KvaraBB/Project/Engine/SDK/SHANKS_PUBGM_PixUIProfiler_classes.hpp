#pragma once


 
namespace SDK
{






class UPxProfilerMgr : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUIProfiler.PxProfilerMgr");
		return pStaticClass;
	}


	static void StartProfiler();
	static void PxProfilerCapabilitySwitch(EPxProfilerCapability EPxProfilerCapability, bool bOpen);
	static void Print();
	static bool GetPxProfilerCapability(EPxProfilerCapability EPxProfilerCapability);
	static void EndProfiler();
	static void Check();
};


}

