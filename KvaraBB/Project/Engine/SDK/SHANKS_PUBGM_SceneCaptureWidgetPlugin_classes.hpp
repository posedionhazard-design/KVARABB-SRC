#pragma once


 
namespace SDK
{






class UWidgetCaptureComponent2D : public USceneCaptureComponent2D
{
public:
	class ASceneCaptureCameraActor*                    OwnerCameraActor;                                         
	unsigned char                                      UnknownData00[0x18];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SceneCaptureWidgetPlugin.WidgetCaptureComponent2D");
		return pStaticClass;
	}

};




class ASceneCaptureCameraActor : public ACameraActor
{
public:
	class UWidgetCaptureComponent2D*                   SceneCaptureComponent;                                    
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SceneCaptureWidgetPlugin.SceneCaptureCameraActor");
		return pStaticClass;
	}

};




class USceneCaptureWidget : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                    
	class ASceneCaptureCameraActor*                    SceneCaptureCameraActor;                                  
	unsigned char                                      UnknownData00[0x20];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SceneCaptureWidgetPlugin.SceneCaptureWidget");
		return pStaticClass;
	}


	void SetSceneCaptureCameraActor(class ASceneCaptureCameraActor* InSceneCaptureCameraActor);
};


}

