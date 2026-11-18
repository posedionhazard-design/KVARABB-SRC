#pragma once


 
namespace SDK
{






class ULatentDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LatentDelegate");
		return pStaticClass;
	}


	void OnLatentCallback(int threadRef);
};




class ALuaActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	struct FString                                     LuaFilePath;                                              
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaActor");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};




class ULuaActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	struct FString                                     LuaFilePath;                                              
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaActorComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};




class ALuaCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x50];                                      
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaCharacter");
		return pStaticClass;
	}

};




class ULuaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x158];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaDelegate");
		return pStaticClass;
	}


	void EventTrigger();
};




class ALuaGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaGameMode");
		return pStaticClass;
	}

};




class ALuaGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaGameState");
		return pStaticClass;
	}

};




class ULuaInstancedActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaInstancedActorComponent");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};




class ALuaLevelScriptActor : public ALevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaLevelScriptActor");
		return pStaticClass;
	}


	void UnRegistLuaTick();
	void RegistLuaTick(float TickInterval);
};




class ULuaOverrider : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaOverrider");
		return pStaticClass;
	}


	void TriggerAnimNotify();
	void InputVectorAxis(const struct FVector& AxisValue);
	void InputTouch(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InputGesture(float Value);
	void InputAxis(float AxisValue);
	void InputAction(const struct FKey& Key);
};




class ULuaOverriderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaOverriderInterface");
		return pStaticClass;
	}


	struct FString GetLuaFilePath();
};




class ULuaPatchRPCComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaPatchRPCComponent");
		return pStaticClass;
	}


	void ServerUnreliable_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame);
	void Server_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame);
	void MulticastUnreliable_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame);
	void MulticastPerConnectionUnreliable_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame);
	void MulticastPerConnection_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame);
	void Multicast_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame);
	void ClientUnreliable_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame);
	void Client_LuaPatchRPC(const struct FLuaPatchRPCFrame& Frame);
};




class ALuaPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaPawn");
		return pStaticClass;
	}

};




class ALuaPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaPlayerController");
		return pStaticClass;
	}

};




class ALuaPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FLuaNetSerialization                        LuaNetSerialization;                                      
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaPlayerState");
		return pStaticClass;
	}

};




class ULuaObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaObject");
		return pStaticClass;
	}

};




class ULuaUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      
	struct FString                                     LuaFilePath;                                              

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.LuaUserWidget");
		return pStaticClass;
	}

};




class USluaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class slua_unreal.SluaBlueprintLibrary");
		return pStaticClass;
	}


	static struct FString GetStringFromVar(const struct FSluaBPVar& Value, int Index);
	static class UObject* GetObjectFromVar(const struct FSluaBPVar& Value, int Index);
	static float GetNumberFromVar(const struct FSluaBPVar& Value, int Index);
	static int GetIntFromVar(const struct FSluaBPVar& Value, int Index);
	static bool GetBoolFromVar(const struct FSluaBPVar& Value, int Index);
	static struct FSluaBPVar CreateVarFromString(const struct FString& Value);
	static struct FSluaBPVar CreateVarFromObject(class UObject* WorldContextObject, class UObject* Value);
	static struct FSluaBPVar CreateVarFromNumber(float Value);
	static struct FSluaBPVar CreateVarFromInt(int Value);
	static struct FSluaBPVar CreateVarFromBool(bool Value);
	static struct FSluaBPVar CallToLuaWithArgs(class UObject* WorldContextObject, const struct FString& FunctionName, TArray<struct FSluaBPVar> Args, const struct FString& StateName);
	static struct FSluaBPVar CallToLua(class UObject* WorldContextObject, const struct FString& FunctionName, const struct FString& StateName);
};


}

