
 
#include "../SDK.hpp"

namespace SDK
{












class UStaticMesh* UCustomMeshLoaderBPLibrary::LoadSModelFromMemory(TArray<unsigned char> Data, const struct FString& MeshName, TArray<class UMaterialInstance*> Materials)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFromMemory");

	UCustomMeshLoaderBPLibrary_LoadSModelFromMemory_Params params;
	params.Data = Data;
	params.MeshName = MeshName;
	params.Materials = Materials;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









void UCustomMeshLoaderBPLibrary::LoadSModelFileAsync(const struct FString& FilePath, const struct FString& MeshName, const struct FScriptDelegate& OnComplete)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFileAsync");

	UCustomMeshLoaderBPLibrary_LoadSModelFileAsync_Params params;
	params.FilePath = FilePath;
	params.MeshName = MeshName;
	params.OnComplete = OnComplete;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









class UStaticMesh* UCustomMeshLoaderBPLibrary::LoadSModelFile(const struct FString& FilePath, const struct FString& MeshName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSModelFile");

	UCustomMeshLoaderBPLibrary_LoadSModelFile_Params params;
	params.FilePath = FilePath;
	params.MeshName = MeshName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










class USkeletalMesh* UCustomMeshLoaderBPLibrary::LoadSKModelFromMemory(TArray<unsigned char> Data, const struct FString& MeshName, TArray<class UMaterialInterface*> Materials)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFromMemory");

	UCustomMeshLoaderBPLibrary_LoadSKModelFromMemory_Params params;
	params.Data = Data;
	params.MeshName = MeshName;
	params.Materials = Materials;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










class USkeletalMesh* UCustomMeshLoaderBPLibrary::LoadSKModelFileToAsset(const struct FString& FilePath, const struct FString& AssetPath, TArray<class UMaterialInterface*> Materials)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFileToAsset");

	UCustomMeshLoaderBPLibrary_LoadSKModelFileToAsset_Params params;
	params.FilePath = FilePath;
	params.AssetPath = AssetPath;
	params.Materials = Materials;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}










class USkeletalMesh* UCustomMeshLoaderBPLibrary::LoadSKModelFile(const struct FString& FilePath, const struct FString& MeshName, TArray<class UMaterialInterface*> Materials)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKModelFile");

	UCustomMeshLoaderBPLibrary_LoadSKModelFile_Params params;
	params.FilePath = FilePath;
	params.MeshName = MeshName;
	params.Materials = Materials;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class USkeleton* UCustomMeshLoaderBPLibrary::LoadSkelModelFromMemory(TArray<unsigned char> Data, const struct FString& SkeletonName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSkelModelFromMemory");

	UCustomMeshLoaderBPLibrary_LoadSkelModelFromMemory_Params params;
	params.Data = Data;
	params.SkeletonName = SkeletonName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class USkeleton* UCustomMeshLoaderBPLibrary::LoadSkelModelFileToAsset(const struct FString& FilePath, const struct FString& AssetPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSkelModelFileToAsset");

	UCustomMeshLoaderBPLibrary_LoadSkelModelFileToAsset_Params params;
	params.FilePath = FilePath;
	params.AssetPath = AssetPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class USkeleton* UCustomMeshLoaderBPLibrary::LoadSkelModelFile(const struct FString& FilePath, const struct FString& SkeletonName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSkelModelFile");

	UCustomMeshLoaderBPLibrary_LoadSkelModelFile_Params params;
	params.FilePath = FilePath;
	params.SkeletonName = SkeletonName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UAnimSequence* UCustomMeshLoaderBPLibrary::LoadSKAnimFromMemory(TArray<unsigned char> Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKAnimFromMemory");

	UCustomMeshLoaderBPLibrary_LoadSKAnimFromMemory_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









class UAnimSequence* UCustomMeshLoaderBPLibrary::LoadSKAnimFileToAsset(const struct FString& FilePath, const struct FString& AssetPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKAnimFileToAsset");

	UCustomMeshLoaderBPLibrary_LoadSKAnimFileToAsset_Params params;
	params.FilePath = FilePath;
	params.AssetPath = AssetPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UAnimSequence* UCustomMeshLoaderBPLibrary::LoadSKAnimFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.LoadSKAnimFile");

	UCustomMeshLoaderBPLibrary_LoadSKAnimFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCustomMeshLoaderBPLibrary::IsValidSModelFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.IsValidSModelFile");

	UCustomMeshLoaderBPLibrary_IsValidSModelFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCustomMeshLoaderBPLibrary::IsValidSKModelFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.IsValidSKModelFile");

	UCustomMeshLoaderBPLibrary_IsValidSKModelFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCustomMeshLoaderBPLibrary::IsValidSkelModelFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.IsValidSkelModelFile");

	UCustomMeshLoaderBPLibrary_IsValidSkelModelFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UCustomMeshLoaderBPLibrary::IsValidSKAnimFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.IsValidSKAnimFile");

	UCustomMeshLoaderBPLibrary_IsValidSKAnimFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











bool UCustomMeshLoaderBPLibrary::GetSModelFileInfo(const struct FString& FilePath, int* OutSectionCount, int* OutMaterialCount, int* OutVertexCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.GetSModelFileInfo");

	UCustomMeshLoaderBPLibrary_GetSModelFileInfo_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutSectionCount != nullptr)
		*OutSectionCount = params.OutSectionCount;
	if (OutMaterialCount != nullptr)
		*OutMaterialCount = params.OutMaterialCount;
	if (OutVertexCount != nullptr)
		*OutVertexCount = params.OutVertexCount;

	return params.ReturnValue;
}











struct FString UCustomMeshLoaderBPLibrary::DumpStaticMeshVertexDataByPath(const struct FString& MeshAssetPath, const struct FString& OutputFilePath, int LODIndex, int MaxVertices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpStaticMeshVertexDataByPath");

	UCustomMeshLoaderBPLibrary_DumpStaticMeshVertexDataByPath_Params params;
	params.MeshAssetPath = MeshAssetPath;
	params.OutputFilePath = OutputFilePath;
	params.LODIndex = LODIndex;
	params.MaxVertices = MaxVertices;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











struct FString UCustomMeshLoaderBPLibrary::DumpStaticMeshVertexData(class UStaticMesh* Mesh, const struct FString& OutputFilePath, int LODIndex, int MaxVertices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpStaticMeshVertexData");

	UCustomMeshLoaderBPLibrary_DumpStaticMeshVertexData_Params params;
	params.Mesh = Mesh;
	params.OutputFilePath = OutputFilePath;
	params.LODIndex = LODIndex;
	params.MaxVertices = MaxVertices;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











struct FString UCustomMeshLoaderBPLibrary::DumpSKModelVertexData(const struct FString& SKModelPath, const struct FString& OutputFilePath, int LODIndex, int MaxVertices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSKModelVertexData");

	UCustomMeshLoaderBPLibrary_DumpSKModelVertexData_Params params;
	params.SKModelPath = SKModelPath;
	params.OutputFilePath = OutputFilePath;
	params.LODIndex = LODIndex;
	params.MaxVertices = MaxVertices;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UCustomMeshLoaderBPLibrary::DumpSkeletonDataFromMesh(class USkeletalMesh* Mesh, const struct FString& OutputFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletonDataFromMesh");

	UCustomMeshLoaderBPLibrary_DumpSkeletonDataFromMesh_Params params;
	params.Mesh = Mesh;
	params.OutputFilePath = OutputFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UCustomMeshLoaderBPLibrary::DumpSkeletonData(class USkeleton* Skeleton, const struct FString& OutputFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletonData");

	UCustomMeshLoaderBPLibrary_DumpSkeletonData_Params params;
	params.Skeleton = Skeleton;
	params.OutputFilePath = OutputFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











struct FString UCustomMeshLoaderBPLibrary::DumpSkeletalMeshVertexDataByPath(const struct FString& MeshAssetPath, const struct FString& OutputFilePath, int LODIndex, int MaxVertices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletalMeshVertexDataByPath");

	UCustomMeshLoaderBPLibrary_DumpSkeletalMeshVertexDataByPath_Params params;
	params.MeshAssetPath = MeshAssetPath;
	params.OutputFilePath = OutputFilePath;
	params.LODIndex = LODIndex;
	params.MaxVertices = MaxVertices;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}











struct FString UCustomMeshLoaderBPLibrary::DumpSkeletalMeshVertexData(class USkeletalMesh* Mesh, const struct FString& OutputFilePath, int LODIndex, int MaxVertices)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpSkeletalMeshVertexData");

	UCustomMeshLoaderBPLibrary_DumpSkeletalMeshVertexData_Params params;
	params.Mesh = Mesh;
	params.OutputFilePath = OutputFilePath;
	params.LODIndex = LODIndex;
	params.MaxVertices = MaxVertices;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UCustomMeshLoaderBPLibrary::DumpAnimSequenceDataByPath(const struct FString& AnimAssetPath, const struct FString& OutputFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpAnimSequenceDataByPath");

	UCustomMeshLoaderBPLibrary_DumpAnimSequenceDataByPath_Params params;
	params.AnimAssetPath = AnimAssetPath;
	params.OutputFilePath = OutputFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UCustomMeshLoaderBPLibrary::DumpAnimSequenceData(class UAnimSequence* AnimSequence, const struct FString& OutputFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpAnimSequenceData");

	UCustomMeshLoaderBPLibrary_DumpAnimSequenceData_Params params;
	params.AnimSequence = AnimSequence;
	params.OutputFilePath = OutputFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UCustomMeshLoaderBPLibrary::DumpAnimSequenceComprehensive(class UAnimSequence* AnimSequence, const struct FString& OutputFilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpAnimSequenceComprehensive");

	UCustomMeshLoaderBPLibrary_DumpAnimSequenceComprehensive_Params params;
	params.AnimSequence = AnimSequence;
	params.OutputFilePath = OutputFilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}









struct FString UCustomMeshLoaderBPLibrary::DumpAnimSequenceBatchByPath(const struct FString& AssetPathPrefix, const struct FString& OutputDir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function CustomMeshLoader.CustomMeshLoaderBPLibrary.DumpAnimSequenceBatchByPath");

	UCustomMeshLoaderBPLibrary_DumpAnimSequenceBatchByPath_Params params;
	params.AssetPathPrefix = AssetPathPrefix;
	params.OutputDir = OutputDir;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

