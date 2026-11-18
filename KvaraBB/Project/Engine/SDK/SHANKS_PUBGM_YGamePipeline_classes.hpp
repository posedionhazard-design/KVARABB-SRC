#pragma once


 
namespace SDK
{






class UYGamePipelineHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    PipeDataRevMsg;                                           
	struct FScriptMulticastDelegate                    PipeDataRevMsgT;                                          
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class YGamePipeline.YGamePipelineHelper");
		return pStaticClass;
	}


	bool SendDataWithKey(const struct FString& MsgKey, TArray<unsigned char> Data);
	bool SendData(const struct FString& MsgInfo);
	void Release();
	bool RecvdDataWithKeyTest(const struct FString& MsgKey);
	bool RecvDataTest(const struct FString& MsgInfo);
	void Log(const struct FString& LogInfo);
	bool IsConnected();
	bool Init();
	static class UYGamePipelineHelper* Get();
};


}

