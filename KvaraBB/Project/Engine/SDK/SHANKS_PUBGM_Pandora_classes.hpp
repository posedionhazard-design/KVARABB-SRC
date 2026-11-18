#pragma once


 
namespace SDK
{






class UBulletScreen : public UCanvasPanel
{
public:
	class UClass*                                      TemplateWidget;                                           
	int                                                MaxBulletLines;                                           
	float                                              BulletSpeed;                                              
	float                                              LineHeight;                                               
	float                                              HorizontalInterval;                                       
	int                                                MaxCachedBulletCount;                                     
	unsigned char                                      UnknownData00[0xD4];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.BulletScreen");
		return pStaticClass;
	}


	void Stop();
	void Start();
	void Resume();
	void Pause();
	void AddBullets(TArray<struct FString> Content);
	void AddBullet(const struct FString& Content);
};




class UBulletScreenItem : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.BulletScreenItem");
		return pStaticClass;
	}

};




class UGameletSDKDelegateHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.GameletSDKDelegateHandler");
		return pStaticClass;
	}


	void ExecOnViewCreated(class UUserWidget* Widget, const struct FString& WinInfo);
	void ExecOnViewAboutToDestroy(class UUserWidget* Widget, const struct FString& WinInfo);
	int ExecOnSDKMessage(const struct FString& Msg);
	int ExecOnRefreshUserdata();
};




class UPLatentDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLatentDelegate");
		return pStaticClass;
	}


	void OnLatentCallback(int threadRef);
};




class APLuaActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x90];                                      
	struct FString                                     LuaFilePath;                                              
	struct FString                                     LuaStateName;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaActor");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};




class APLuaPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x90];                                      
	struct FString                                     LuaFilePath;                                              
	struct FString                                     LuaStateName;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaPawn");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};




class APLuaCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x88];                                      
	struct FString                                     LuaFilePath;                                              
	struct FString                                     LuaStateName;                                             
	unsigned char                                      UnknownData01[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaCharacter");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};




class APLuaController : public AController
{
public:
	unsigned char                                      UnknownData00[0x90];                                      
	struct FString                                     LuaFilePath;                                              
	struct FString                                     LuaStateName;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaController");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};




class APLuaPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x90];                                      
	struct FString                                     LuaFilePath;                                              
	struct FString                                     LuaStateName;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaPlayerController");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};




class UPLuaActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      
	struct FString                                     LuaFilePath;                                              
	struct FString                                     LuaStateName;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaActorComponent");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};




class APLuaGameModeBase : public AGameModeBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      
	struct FString                                     LuaFilePath;                                              
	struct FString                                     LuaStateName;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaGameModeBase");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};




class APLuaHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x90];                                      
	struct FString                                     LuaFilePath;                                              
	struct FString                                     LuaStateName;                                             

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaHUD");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};




class UPLuaTableObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaTableObjectInterface");
		return pStaticClass;
	}

};




class UPLuaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaBlueprintLibrary");
		return pStaticClass;
	}


	static struct FString GetStringFromVar(const struct FPLuaBPVar& Value, int Index);
	static class UObject* GetObjectFromVar(const struct FPLuaBPVar& Value, int Index);
	static float GetNumberFromVar(const struct FPLuaBPVar& Value, int Index);
	static int GetIntFromVar(const struct FPLuaBPVar& Value, int Index);
	static bool GetBoolFromVar(const struct FPLuaBPVar& Value, int Index);
	static struct FPLuaBPVar CreateVarFromString(const struct FString& Value);
	static struct FPLuaBPVar CreateVarFromObject(class UObject* WorldContextObject, class UObject* Value);
	static struct FPLuaBPVar CreateVarFromNumber(float Value);
	static struct FPLuaBPVar CreateVarFromInt(int Value);
	static struct FPLuaBPVar CreateVarFromBool(bool Value);
	static struct FPLuaBPVar CallToLuaWithArgs(class UObject* WorldContextObject, const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args, const struct FString& StateName);
	static struct FPLuaBPVar CallToLua(class UObject* WorldContextObject, const struct FString& FunctionName, const struct FString& StateName);
};




class UPLuaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaDelegate");
		return pStaticClass;
	}


	void EventTrigger();
};




class UPLuaUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      
	struct FString                                     LuaFilePath;                                              
	struct FString                                     LuaStateName;                                             
	unsigned char                                      UnknownData01[0x38];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PLuaUserWidget");
		return pStaticClass;
	}


	struct FPLuaBPVar CallLuaMember(const struct FString& FunctionName, TArray<struct FPLuaBPVar> Args);
};




class UPPixUILogAdapter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PPixUILogAdapter");
		return pStaticClass;
	}


	void OnPixUILog(int InLogType, int InLogLevel, const struct FString& InLogContent);
};




class UPRichText : public UWidget
{
public:
	struct FText                                       Text;                                                     
	struct FScriptDelegate                             TextDelegate;                                             
	struct FSlateFontInfo                              Font;                                                     
	struct FLinearColor                                Color;                                                    
	TEnumAsByte<ETextJustify>                          Justification;                                            
	bool                                               AutoWrapText;                                             
	unsigned char                                      UnknownData00[0x2];                                       
	float                                              WrapTextAt;                                               
	struct FMargin                                     Margin;                                                   
	float                                              LineHeightPercentage;                                     
	unsigned char                                      UnknownData01[0x4];                                       
	TArray<class URichTextBlockDecorator*>             Decorators;                                               
	unsigned char                                      UnknownData02[0x260];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.PRichText");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	struct FText GetText();
};




class UScale9Grid : public UImage
{
public:
	unsigned char                                      UnknownData00[0x80];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.Scale9Grid");
		return pStaticClass;
	}

};




class UWaterfallScrollView : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                              
	class USlateWidgetStyleAsset*                      Style;                                                    
	class UClass*                                      TemplateWidget;                                           
	int                                                ItemCount;                                                
	int                                                ColumnCount;                                              
	struct FScriptMulticastDelegate                    onReachTop;                                               
	struct FScriptMulticastDelegate                    onReachBottom;                                            
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        
	bool                                               AllowOverscroll;                                          
	unsigned char                                      UnknownData00[0x146];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Pandora.WaterfallScrollView");
		return pStaticClass;
	}


	void ScrollToStart();
	void RefreshLayout(int Index);
	void Fill();
	void Clear();
};


}

