
 
#include "../SDK.hpp"

namespace SDK
{










void UEvoBaseMapUIMarkTableMap::TraversTable(class UUAEDataTable* TableData, const struct FName& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TableResInclude.EvoBaseMapUIMarkTableMap.TraversTable");

	UEvoBaseMapUIMarkTableMap_TraversTable_Params params;
	params.TableData = TableData;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}








void UEvoBaseModTableTestTableMap::TraversTable(class UUAEDataTable* TableData, const struct FName& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TableResInclude.EvoBaseModTableTestTableMap.TraversTable");

	UEvoBaseModTableTestTableMap_TraversTable_Params params;
	params.TableData = TableData;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

