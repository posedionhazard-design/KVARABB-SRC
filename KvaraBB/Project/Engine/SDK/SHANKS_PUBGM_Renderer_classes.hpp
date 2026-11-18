#pragma once


 
namespace SDK
{






class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{
public:
	float                                              Frame;                                                    
	float                                              FrameRate;                                                
	unsigned char                                      bPlayIng : 1;                                             
	unsigned char                                      bLooping : 1;                                             
	unsigned char                                      bReversePlayback : 1;                                     
	unsigned char                                      bBlockingStreamingRequests : 1;                           
	unsigned char                                      bApplyPerFrameTransforms : 1;                             
	unsigned char                                      bPivotAtCentroid : 1;                                     
	unsigned char                                      UnknownData00[0x3];                                       
	float                                              VoxelSize;                                                
	ESparseVolumeTexturePreviewAttribute               PreviewAttribute;                                         
	unsigned char                                      UnknownData01[0x3];                                       
	int                                                MipLevel;                                                 
	float                                              Extinction;                                               
	unsigned char                                      UnknownData02[0x14];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Renderer.SparseVolumeTextureViewerComponent");
		return pStaticClass;
	}

};




class ASparseVolumeTextureViewer : public AInfo
{
public:
	class USparseVolumeTextureViewerComponent*         SparseVolumeTextureViewerComponent;                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Renderer.SparseVolumeTextureViewer");
		return pStaticClass;
	}

};


}

