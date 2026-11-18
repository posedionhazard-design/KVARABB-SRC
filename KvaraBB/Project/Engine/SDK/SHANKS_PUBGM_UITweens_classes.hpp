#pragma once


 
namespace SDK
{






class UTweenManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UITweens.TweenManager");
		return pStaticClass;
	}


	void TweenScale(class UWidget* Widget, const struct FVector2D& From, const struct FVector2D& To, float Timespan, int Type);
	void TweenPosition(class UWidget* Widget, const struct FVector2D& From, const struct FVector2D& To, float Timespan, int Type);
	void TweenAlpha(class UWidget* Widget, float From, float To, float Timespan, int Type);
	void Tick(float DeltaTime);
};


}

