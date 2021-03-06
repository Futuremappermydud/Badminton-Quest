// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.ReflectionTypeInfo/InjectConstructorInfo
  class ReflectionTypeInfo::InjectConstructorInfo : public ::Il2CppObject {
    public:
    // public readonly System.Reflection.ConstructorInfo ConstructorInfo
    // Offset: 0x10
    System::Reflection::ConstructorInfo* ConstructorInfo;
    // public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo> Parameters
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*>* Parameters;
    // public System.Void .ctor(System.Reflection.ConstructorInfo constructorInfo, System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo> parameters)
    // Offset: 0xF29B50
    static ReflectionTypeInfo::InjectConstructorInfo* New_ctor(System::Reflection::ConstructorInfo* constructorInfo, System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*>* parameters);
  }; // Zenject.Internal.ReflectionTypeInfo/InjectConstructorInfo
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectConstructorInfo");
#pragma pack(pop)
