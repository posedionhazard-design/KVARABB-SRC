#pragma once


 
namespace SDK
{






class UObject
{
public:
	static FUObjectArray*                              GUObjectArray;                                            
	void*                                              VTable;                                                   
	int32_t                                            ObjectFlags;                                              
	int32_t                                            InternalIndex;                                            
	class UClass*                                      ClassPrivate;                                             
	FName                                              NamePrivate;                                              
	class UObject*                                     OuterPrivate;                                             

	static inline TUObjectArray& GetGlobalObjects()
	{
		return GUObjectArray->ObjObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

    
    template<typename T>
    static std::vector<T*> GetAllObjectsOfType(UClass* Class, bool filterDefaults = true)
    {
        std::vector<T*> ret;

        for (int i = 0; i < GetGlobalObjects().Num(); ++i)
        {
            auto object = GetGlobalObjects().GetByIndex(i);
            if (!object)
                continue;

            if (object->IsA(Class))
            {
                if (filterDefaults)
                {
                    if (object->GetName().find("Default__") != std::string::npos)
                        continue;
                }

                ret.push_back(static_cast<T*>(object));
            }
        }

        return ret;
    }


    
    template<typename T>
    static T* GetDefaultObjectFromArray(UClass* Class)
    {
        for (int i = 0; i < GetGlobalObjects().Num(); ++i)
        {
            auto object = GetGlobalObjects().GetByIndex(i);
            if (!object)
                continue;

            if (object->IsA(Class))
            {
                if (object->GetName().find("Default__") != std::string::npos)
                {
                    return static_cast<T*>(object);
                }
            }
        }

        return nullptr;
    }


	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	 inline void ProcessEvent(class UFunction* function, void* parms)
	{
		return GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 76)(this, function, parms);
	}

	bool IsA(UClass* cmp) const;

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.Object");
		return pStaticClass;
	}


	void ExecuteUbergraph(int EntryPoint);
};




class UInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.Interface");
		return pStaticClass;
	}

};




class UField : public UObject
{
public:
	class UField*                                      Next;                                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.Field");
		return pStaticClass;
	}

};




class UStruct : public UField
{
public:
	class UStruct*                                     SuperStruct;                                              
	class UField*                                      Children;                                                 
	int32_t                                            PropertySize;                                             
	int32_t                                            MinAlignment;                                             
	unsigned char                                      UnknownData0x0048[0x28];                                  

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.Struct");
		return pStaticClass;
	}

};




class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x130];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.Package");
		return pStaticClass;
	}

};




class UClass : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x318];                                     



        template<typename T>
        inline T* GetDefaultObject()
        {
            return UObject::GetDefaultObjectFromArray<T>(this);
        }

        inline UObject* GetDefaultObject()
        {
            return UObject::GetDefaultObjectFromArray<UObject>(this);
        }

    

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.Class");
		return pStaticClass;
	}

};




class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                            
	int8_t                                             NumParms;                                                 
	int16_t                                            ParmsSize;                                                
	int16_t                                            ReturnValueOffset;                                        
	int16_t                                            RPCId;                                                    
	int16_t                                            RPCResponseId;                                            
	unsigned char                                      UnknownData0x00c[0xC];                                    
	void*                                              Func;                                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.Function");
		return pStaticClass;
	}

};




class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.GCObjectReferencer");
		return pStaticClass;
	}

};




class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.TextBuffer");
		return pStaticClass;
	}

};




class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.ScriptStruct");
		return pStaticClass;
	}

};




class UDelegateFunction : public UFunction
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.DelegateFunction");
		return pStaticClass;
	}

};




class UDynamicClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x68];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.DynamicClass");
		return pStaticClass;
	}

};




class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.PackageMap");
		return pStaticClass;
	}

};




class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0x30];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.Enum");
		return pStaticClass;
	}

};




class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x40];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.Property");
		return pStaticClass;
	}

};




class UEnumProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.EnumProperty");
		return pStaticClass;
	}

};




class ULinkerPlaceholderClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.LinkerPlaceholderClass");
		return pStaticClass;
	}

};




class ULinkerPlaceholderExportObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.LinkerPlaceholderExportObject");
		return pStaticClass;
	}

};




class ULinkerPlaceholderFunction : public UFunction
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.LinkerPlaceholderFunction");
		return pStaticClass;
	}

};




class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.MetaData");
		return pStaticClass;
	}

};




class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.ObjectRedirector");
		return pStaticClass;
	}

};




class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.ArrayProperty");
		return pStaticClass;
	}

};




class UObjectPropertyBase : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.ObjectPropertyBase");
		return pStaticClass;
	}

};




class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.BoolProperty");
		return pStaticClass;
	}

};




class UNumericProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.NumericProperty");
		return pStaticClass;
	}

};




class UByteProperty : public UNumericProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.ByteProperty");
		return pStaticClass;
	}

};




class UObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.ObjectProperty");
		return pStaticClass;
	}

};




class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.ClassProperty");
		return pStaticClass;
	}

};




class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.DelegateProperty");
		return pStaticClass;
	}

};




class UDoubleProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.DoubleProperty");
		return pStaticClass;
	}

};




class UFloatProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.FloatProperty");
		return pStaticClass;
	}

};




class UIntProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.IntProperty");
		return pStaticClass;
	}

};




class UInt16Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.Int16Property");
		return pStaticClass;
	}

};




class UInt64Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.Int64Property");
		return pStaticClass;
	}

};




class UInt8Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.Int8Property");
		return pStaticClass;
	}

};




class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.InterfaceProperty");
		return pStaticClass;
	}

};




class ULazyObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.LazyObjectProperty");
		return pStaticClass;
	}

};




class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x38];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.MapProperty");
		return pStaticClass;
	}

};




class UMulticastDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.MulticastDelegateProperty");
		return pStaticClass;
	}

};




class UNameProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.NameProperty");
		return pStaticClass;
	}

};




class USetProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x28];                                      

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.SetProperty");
		return pStaticClass;
	}

};




class USoftObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.SoftObjectProperty");
		return pStaticClass;
	}

};




class USoftClassProperty : public USoftObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.SoftClassProperty");
		return pStaticClass;
	}

};




class UStrProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.StrProperty");
		return pStaticClass;
	}

};




class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                                       

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.StructProperty");
		return pStaticClass;
	}

};




class UUInt16Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.UInt16Property");
		return pStaticClass;
	}

};




class UUInt32Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.UInt32Property");
		return pStaticClass;
	}

};




class UUInt64Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.UInt64Property");
		return pStaticClass;
	}

};




class UWeakObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.WeakObjectProperty");
		return pStaticClass;
	}

};




class UTextProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CoreUObject.TextProperty");
		return pStaticClass;
	}

};


}

