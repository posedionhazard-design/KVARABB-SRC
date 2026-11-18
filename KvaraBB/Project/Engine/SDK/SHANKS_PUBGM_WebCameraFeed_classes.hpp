#pragma once


 
namespace SDK
{






class UWebCameraWidget : public UWidget
{
public:
	struct FWebCameraDeviceId                          DeviceID;                                                 
	int                                                requestedWidth;                                           
	int                                                requestedHeight;                                          
	bool                                               ScanningQRCode;                                           
	unsigned char                                      UnknownData00[0x3];                                       
	struct FScriptDelegate                             OnScanningSuccess;                                        
	unsigned char                                      UnknownData01[0xE0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class WebCameraFeed.WebCameraWidget");
		return pStaticClass;
	}


	void UnLockScreenOrientation();
	bool SwitchFrontAndBackCamera();
	void SetDeviceId(int ID);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	bool SaveAsImage(const struct FString& Filename);
	void ReleaseVideoGrabber();
	void LockScreenOrientation();
	void InitVideoGrabber();
	int GetFrontCameraId();
	int GetBackCameraId();
};


}

