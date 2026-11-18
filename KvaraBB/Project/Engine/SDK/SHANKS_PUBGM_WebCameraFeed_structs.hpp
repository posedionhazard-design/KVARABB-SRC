#pragma once


 
namespace SDK
{





enum class EVideoPixelFormat : uint8_t
{
	EVideoPixelFormat__GrayScale   = 0,
	EVideoPixelFormat__Rgb         = 1,
	EVideoPixelFormat__Rgba        = 2,
	EVideoPixelFormat__EVideoPixelFormat_MAX = 3
};









struct FWebCameraDeviceId
{
	int                                                selectedDevice;                                           
};



struct FVideoDevice
{
	unsigned char                                      UnknownData00[0x50];                                      
};



struct FVideoFormat
{
	unsigned char                                      UnknownData00[0x20];                                      
};

}

