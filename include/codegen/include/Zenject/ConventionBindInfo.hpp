// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ConventionBindInfo
  class ConventionBindInfo : public ::Il2CppObject {
    public:
    // Nested type: Zenject::ConventionBindInfo::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: Zenject::ConventionBindInfo::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // private readonly System.Collections.Generic.List`1<System.Func`2<System.Type,System.Boolean>> _typeFilters
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Func_2<System::Type*, bool>*>* typeFilters;
    // private readonly System.Collections.Generic.List`1<System.Func`2<System.Reflection.Assembly,System.Boolean>> _assemblyFilters
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Func_2<System::Reflection::Assembly*, bool>*>* assemblyFilters;
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]> _assemblyTypeCache
    static System::Collections::Generic::Dictionary_2<System::Reflection::Assembly*, ::Array<System::Type*>*>* _get__assemblyTypeCache();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Reflection.Assembly,System.Type[]> _assemblyTypeCache
    static void _set__assemblyTypeCache(System::Collections::Generic::Dictionary_2<System::Reflection::Assembly*, ::Array<System::Type*>*>* value);
    // public System.Void AddAssemblyFilter(System.Func`2<System.Reflection.Assembly,System.Boolean> predicate)
    // Offset: 0xD572D0
    void AddAssemblyFilter(System::Func_2<System::Reflection::Assembly*, bool>* predicate);
    // public System.Void AddTypeFilter(System.Func`2<System.Type,System.Boolean> predicate)
    // Offset: 0xD57444
    void AddTypeFilter(System::Func_2<System::Type*, bool>* predicate);
    // private System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> GetAllAssemblies()
    // Offset: 0xD574AC
    System::Collections::Generic::IEnumerable_1<System::Reflection::Assembly*>* GetAllAssemblies();
    // private System.Boolean ShouldIncludeAssembly(System.Reflection.Assembly assembly)
    // Offset: 0xD574D0
    bool ShouldIncludeAssembly(System::Reflection::Assembly* assembly);
    // private System.Boolean ShouldIncludeType(System.Type type)
    // Offset: 0xD575A4
    bool ShouldIncludeType(System::Type* type);
    // private System.Type[] GetTypes(System.Reflection.Assembly assembly)
    // Offset: 0xD57678
    ::Array<System::Type*>* GetTypes(System::Reflection::Assembly* assembly);
    // public System.Collections.Generic.List`1<System.Type> ResolveTypes()
    // Offset: 0xD54BC0
    System::Collections::Generic::List_1<System::Type*>* ResolveTypes();
    // static private System.Void .cctor()
    // Offset: 0xD57778
    static void _cctor();
    // private System.Collections.Generic.IEnumerable`1<System.Type> <ResolveTypes>b__9_0(System.Reflection.Assembly assembly)
    // Offset: 0xD577F0
    System::Collections::Generic::IEnumerable_1<System::Type*>* $ResolveTypes$b__9_0(System::Reflection::Assembly* assembly);
    // public System.Void .ctor()
    // Offset: 0xD54ADC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ConventionBindInfo* New_ctor();
  }; // Zenject.ConventionBindInfo
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionBindInfo*, "Zenject", "ConventionBindInfo");
#pragma pack(pop)
