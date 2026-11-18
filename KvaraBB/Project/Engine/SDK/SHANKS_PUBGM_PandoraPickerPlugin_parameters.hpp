#pragma once


 
#include "../SDK.hpp"

namespace SDK
{





struct UBP_PandoraPickerLibraryLibrary_GetInstance_Params
{
	class UBP_PandoraPickerLibraryLibrary*             ReturnValue;                                              
};


struct UBP_PandoraPickerLibraryLibrary_BP_SetVideoExportQuality_Params
{
	int                                                Quality;                                                  
};


struct UBP_PandoraPickerLibraryLibrary_BP_PandoraPickerLoadImageTest_Params
{
	struct FString                                     fImagePath;                                               
	struct FString                                     fOrgImagePath;                                            
	class UTexture2D*                                  orgTex2D;                                                 
	class UTexture2D*                                  ReturnValue;                                              
};


struct UBP_PandoraPickerLibraryLibrary_BP_PandoraPickerInit_Params
{
	int                                                ReturnValue;                                              
};


struct UBP_PandoraPickerLibraryLibrary_BP_PandoraPickerGetSavedPath_Params
{
	struct FString                                     strSavePath;                                              
};


struct UBP_PandoraPickerLibraryLibrary_BP_OpenImageLibraryWithOrg_Params
{
	int                                                Width;                                                    
	int                                                Height;                                                   
	struct FString                                     SecretKey;                                                
	struct FString                                     savedPath;                                                
};


struct UBP_PandoraPickerLibraryLibrary_BP_OpenImageLibraryVideo_Params
{
	struct FString                                     SecretKey;                                                
};


struct UBP_PandoraPickerLibraryLibrary_BP_OpenImageLibraryNoCut_Params
{
	int                                                Width;                                                    
	int                                                Height;                                                   
	struct FString                                     SecretKey;                                                
	struct FString                                     savedPath;                                                
};


struct UBP_PandoraPickerLibraryLibrary_BP_OpenImageLibrary_Params
{
	int                                                Width;                                                    
	int                                                Height;                                                   
	struct FString                                     SecretKey;                                                
	struct FString                                     savedPath;                                                
};

}

