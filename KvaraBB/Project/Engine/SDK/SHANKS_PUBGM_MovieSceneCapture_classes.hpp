#pragma once


 
namespace SDK
{






class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      
	struct FCaptureProtocolID                          CaptureType;                                              
	class UMovieSceneCaptureProtocolSettings*          ProtocolSettings;                                         
	struct FMovieSceneCaptureSettings                  Settings;                                                 
	unsigned char                                      UnknownData01[0x10];                                      
	bool                                               bUseSeparateProcess;                                      
	bool                                               bCloseEditorWhenCaptureStarts;                            
	unsigned char                                      UnknownData02[0x6];                                       
	struct FString                                     AdditionalCommandLineArguments;                           
	struct FString                                     InheritedCommandLineArguments;                            
	unsigned char                                      UnknownData03[0x120];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return pStaticClass;
	}

};




class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.AutomatedLevelSequenceCapture");
		return pStaticClass;
	}

};




class UMovieSceneCaptureProtocolSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolSettings");
		return pStaticClass;
	}

};




class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocolSettings");
		return pStaticClass;
	}

};




class UAVCaptureSettings : public UFrameGrabberProtocolSettings
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.AVCaptureSettings");
		return pStaticClass;
	}

};




class UCompositionGraphCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	struct FCompositionGraphCapturePasses              IncludeRenderPasses;                                      
	bool                                               bCaptureFramesInHDR;                                      
	unsigned char                                      UnknownData00[0x3];                                       
	int                                                HDRCompressionQuality;                                    
	TEnumAsByte<EHDRCaptureGamut>                      CaptureGamut;                                             
	unsigned char                                      UnknownData01[0x7];                                       
	struct FSoftObjectPath                             PostProcessingMaterial;                                   

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureSettings");
		return pStaticClass;
	}

};




class UBmpImageCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.BmpImageCaptureSettings");
		return pStaticClass;
	}

};




class UImageCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	int                                                CompressionQuality;                                       
	unsigned char                                      UnknownData00[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.ImageCaptureSettings");
		return pStaticClass;
	}

};




class UMovieSceneCaptureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return pStaticClass;
	}

};




class ULevelCapture : public UMovieSceneCapture
{
public:
	bool                                               bAutoStartCapture;                                        
	unsigned char                                      UnknownData00[0xB];                                       
	struct FGuid                                       PrerequisiteActorId;                                      
	unsigned char                                      UnknownData01[0x4];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return pStaticClass;
	}

};




class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return pStaticClass;
	}


	static int GetCaptureFrameNumber();
	static float GetCaptureElapsedTime();
};




class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	bool                                               bUseCompression;                                          
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              CompressionQuality;                                       
	struct FString                                     VideoCodec;                                               

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneCapture.VideoCaptureSettings");
		return pStaticClass;
	}

};


}

