
 
#include "../SDK.hpp"

namespace SDK
{









class UObject* UPxRHIImage::GetHandleObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUIRHI.PxRHIImage.GetHandleObject");

	UPxRHIImage_GetHandleObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UPxRHIMgr::RHIImageUpdate(class UPxRHIMgr* pPxRHIImage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUIRHI.PxRHIMgr.RHIImageUpdate");

	UPxRHIMgr_RHIImageUpdate_Params params;
	params.pPxRHIImage = pPxRHIImage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








class UPxRHIMgr* UPxRHIMgr::RHIImageFindByObject(class UObject* pCoreObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUIRHI.PxRHIMgr.RHIImageFindByObject");

	UPxRHIMgr_RHIImageFindByObject_Params params;
	params.pCoreObject = pCoreObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}








bool UPxRHIMgr::RHIImageDestroy(class UPxRHIMgr* pPxRHIImage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUIRHI.PxRHIMgr.RHIImageDestroy");

	UPxRHIMgr_RHIImageDestroy_Params params;
	params.pPxRHIImage = pPxRHIImage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UPxRHIImage* UPxRHIMgr::RHIImageCreate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUIRHI.PxRHIMgr.RHIImageCreate");

	UPxRHIMgr_RHIImageCreate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}







class UPxRHIMgr* UPxRHIMgr::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PixUIRHI.PxRHIMgr.Get");

	UPxRHIMgr_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

