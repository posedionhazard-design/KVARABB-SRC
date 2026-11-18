#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UVideoThumbnailGenerator_GenerateVideoThumbnailAsync_Params
{
	struct FString                                     videoPath;                                                
	int                                                thumbnailSize;                                            
	struct FScriptDelegate                             OnThumbnailGenerated;                                     
};


struct UZXingScanner_Encode_Params
{
	struct FString                                     Text;                                                     
	class UTexture2D*                                  ReturnValue;                                              
};


struct UZXingScanner_Decode_Params
{
	class UTexture2D*                                  Texture;                                                  
	struct FZXingScanResult                            OutResult;                                                
	struct FVector4                                    InRect;                                                   
	bool                                               ReturnValue;                                              
};

}

