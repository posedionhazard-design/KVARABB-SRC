
 
#include "../SDK.hpp"

namespace SDK
{


















void URuntimeMeshComponent::UpdateMeshSection_Blueprint(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FRuntimeMeshTangent> Tangents, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FLinearColor> Colors, bool bCalculateNormalTangent, bool bGenerateTessellationTriangles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.UpdateMeshSection_Blueprint");

	URuntimeMeshComponent_UpdateMeshSection_Blueprint_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Tangents = Tangents;
	params.UV0 = UV0;
	params.UV1 = UV1;
	params.Colors = Colors;
	params.bCalculateNormalTangent = bCalculateNormalTangent;
	params.bGenerateTessellationTriangles = bGenerateTessellationTriangles;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void URuntimeMeshComponent::SetSectionTessellationTriangles(int SectionIndex, TArray<int> TessellationTriangles, bool bShouldMoveArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.SetSectionTessellationTriangles");

	URuntimeMeshComponent_SetSectionTessellationTriangles_Params params;
	params.SectionIndex = SectionIndex;
	params.TessellationTriangles = TessellationTriangles;
	params.bShouldMoveArray = bShouldMoveArray;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void URuntimeMeshComponent::SetMeshSectionVisible(int SectionIndex, bool bNewVisibility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionVisible");

	URuntimeMeshComponent_SetMeshSectionVisible_Params params;
	params.SectionIndex = SectionIndex;
	params.bNewVisibility = bNewVisibility;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void URuntimeMeshComponent::SetMeshSectionCollisionEnabled(int SectionIndex, bool bNewCollisionEnabled)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionCollisionEnabled");

	URuntimeMeshComponent_SetMeshSectionCollisionEnabled_Params params;
	params.SectionIndex = SectionIndex;
	params.bNewCollisionEnabled = bNewCollisionEnabled;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void URuntimeMeshComponent::SetMeshSectionCastsShadow(int SectionIndex, bool bNewCastsShadow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshSectionCastsShadow");

	URuntimeMeshComponent_SetMeshSectionCastsShadow_Params params;
	params.SectionIndex = SectionIndex;
	params.bNewCastsShadow = bNewCastsShadow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}









void URuntimeMeshComponent::SetMeshCollisionSection(int CollisionSectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.SetMeshCollisionSection");

	URuntimeMeshComponent_SetMeshCollisionSection_Params params;
	params.CollisionSectionIndex = CollisionSectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void URuntimeMeshComponent::RuntimeMeshCollisionUpdatedDelegate__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction RuntimeMeshComponent.RuntimeMeshComponent.RuntimeMeshCollisionUpdatedDelegate__DelegateSignature");

	URuntimeMeshComponent_RuntimeMeshCollisionUpdatedDelegate__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool URuntimeMeshComponent::IsMeshSectionVisible(int SectionIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionVisible");

	URuntimeMeshComponent_IsMeshSectionVisible_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool URuntimeMeshComponent::IsMeshSectionCollisionEnabled(int SectionIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionCollisionEnabled");

	URuntimeMeshComponent_IsMeshSectionCollisionEnabled_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool URuntimeMeshComponent::IsMeshSectionCastingShadows(int SectionIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.IsMeshSectionCastingShadows");

	URuntimeMeshComponent_IsMeshSectionCastingShadows_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int URuntimeMeshComponent::GetNumSections()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.GetNumSections");

	URuntimeMeshComponent_GetNumSections_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int URuntimeMeshComponent::GetLastSectionIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.GetLastSectionIndex");

	URuntimeMeshComponent_GetLastSectionIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







int URuntimeMeshComponent::FirstAvailableMeshSectionIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.FirstAvailableMeshSectionIndex");

	URuntimeMeshComponent_FirstAvailableMeshSectionIndex_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void URuntimeMeshComponent::EndBatchUpdates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.EndBatchUpdates");

	URuntimeMeshComponent_EndBatchUpdates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








bool URuntimeMeshComponent::DoesSectionExist(int SectionIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.DoesSectionExist");

	URuntimeMeshComponent_DoesSectionExist_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


















void URuntimeMeshComponent::CreateMeshSection_Blueprint(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FRuntimeMeshTangent> Tangents, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FLinearColor> Colors, bool bCreateCollision, bool bCalculateNormalTangent, bool bGenerateTessellationTriangles, EUpdateFrequency UpdateFrequency)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.CreateMeshSection_Blueprint");

	URuntimeMeshComponent_CreateMeshSection_Blueprint_Params params;
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Tangents = Tangents;
	params.UV0 = UV0;
	params.UV1 = UV1;
	params.Colors = Colors;
	params.bCreateCollision = bCreateCollision;
	params.bCalculateNormalTangent = bCalculateNormalTangent;
	params.bGenerateTessellationTriangles = bGenerateTessellationTriangles;
	params.UpdateFrequency = UpdateFrequency;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void URuntimeMeshComponent::CookCollisionNow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.CookCollisionNow");

	URuntimeMeshComponent_CookCollisionNow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void URuntimeMeshComponent::ClearMeshSection(int SectionIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.ClearMeshSection");

	URuntimeMeshComponent_ClearMeshSection_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void URuntimeMeshComponent::ClearMeshCollisionSection(int CollisionSectionIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.ClearMeshCollisionSection");

	URuntimeMeshComponent_ClearMeshCollisionSection_Params params;
	params.CollisionSectionIndex = CollisionSectionIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void URuntimeMeshComponent::ClearCollisionConvexMeshes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.ClearCollisionConvexMeshes");

	URuntimeMeshComponent_ClearCollisionConvexMeshes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void URuntimeMeshComponent::ClearAllMeshSections()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.ClearAllMeshSections");

	URuntimeMeshComponent_ClearAllMeshSections_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}





void URuntimeMeshComponent::ClearAllMeshCollisionSections()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.ClearAllMeshCollisionSections");

	URuntimeMeshComponent_ClearAllMeshCollisionSections_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










bool URuntimeMeshComponent::ChangeRuntimeMeshSectionUVs(int SectionIndex, int Index, TMap<int, struct FVector2D> UVs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.ChangeRuntimeMeshSectionUVs");

	URuntimeMeshComponent_ChangeRuntimeMeshSectionUVs_Params params;
	params.SectionIndex = SectionIndex;
	params.Index = Index;
	params.UVs = UVs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}





void URuntimeMeshComponent::BeginBatchUpdates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.BeginBatchUpdates");

	URuntimeMeshComponent_BeginBatchUpdates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}







void URuntimeMeshComponent::AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshComponent.AddCollisionConvexMesh");

	URuntimeMeshComponent_AddCollisionConvexMesh_Params params;
	params.ConvexVerts = ConvexVerts;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}














void URuntimeMeshLibrary::GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LODIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FRuntimeMeshTangent>* Tangents)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.GetSectionFromStaticMesh");

	URuntimeMeshLibrary_GetSectionFromStaticMesh_Params params;
	params.InMesh = InMesh;
	params.LODIndex = LODIndex;
	params.SectionIndex = SectionIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}












void URuntimeMeshLibrary::GenerateTessellationIndexBuffer(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FRuntimeMeshTangent>* Tangents, TArray<int>* OutTessTriangles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.GenerateTessellationIndexBuffer");

	URuntimeMeshLibrary_GenerateTessellationIndexBuffer_Params params;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.UVs = UVs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Normals != nullptr)
		*Normals = params.Normals;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
	if (OutTessTriangles != nullptr)
		*OutTessTriangles = params.OutTessTriangles;
}










void URuntimeMeshLibrary::CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.CreateGridMeshTriangles");

	URuntimeMeshLibrary_CreateGridMeshTriangles_Params params;
	params.NumX = NumX;
	params.NumY = NumY;
	params.bWinding = bWinding;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
}












void URuntimeMeshLibrary::CreateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FRuntimeMeshTangent>* Tangents)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.CreateBoxMesh");

	URuntimeMeshLibrary_CreateBoxMesh_Params params;
	params.BoxRadius = BoxRadius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}










void URuntimeMeshLibrary::CopyRuntimeMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComp, int LODIndex, class URuntimeMeshComponent* RuntimeMeshComp, bool bShouldCreateCollision)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.CopyRuntimeMeshFromStaticMeshComponent");

	URuntimeMeshLibrary_CopyRuntimeMeshFromStaticMeshComponent_Params params;
	params.StaticMeshComp = StaticMeshComp;
	params.LODIndex = LODIndex;
	params.RuntimeMeshComp = RuntimeMeshComp;
	params.bShouldCreateCollision = bShouldCreateCollision;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}










void URuntimeMeshLibrary::CopyRuntimeMeshFromStaticMesh(class UStaticMesh* StaticMesh, int LODIndex, class URuntimeMeshComponent* RuntimeMeshComp, bool bShouldCreateCollision)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.CopyRuntimeMeshFromStaticMesh");

	URuntimeMeshLibrary_CopyRuntimeMeshFromStaticMesh_Params params;
	params.StaticMesh = StaticMesh;
	params.LODIndex = LODIndex;
	params.RuntimeMeshComp = RuntimeMeshComp;
	params.bShouldCreateCollision = bShouldCreateCollision;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}











void URuntimeMeshLibrary::ConvertQuadToTriangles(int Vert0, int Vert1, int Vert2, int Vert3, TArray<int>* Triangles)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.ConvertQuadToTriangles");

	URuntimeMeshLibrary_ConvertQuadToTriangles_Params params;
	params.Vert0 = Vert0;
	params.Vert1 = Vert1;
	params.Vert2 = Vert2;
	params.Vert3 = Vert3;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
}











void URuntimeMeshLibrary::CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FRuntimeMeshTangent>* Tangents)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function RuntimeMeshComponent.RuntimeMeshLibrary.CalculateTangentsForMesh");

	URuntimeMeshLibrary_CalculateTangentsForMesh_Params params;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.UVs = UVs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Normals != nullptr)
		*Normals = params.Normals;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;
}


}

