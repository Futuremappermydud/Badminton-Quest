// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
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
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ValidationUtil
  class ValidationUtil : public ::Il2CppObject {
    public:
    // Nested type: Zenject::ValidationUtil::$$c
    class $$c;
    // static public System.Collections.Generic.List`1<Zenject.TypeValuePair> CreateDefaultArgs(System.Type[] argTypes)
    // Offset: 0x192851C
    static System::Collections::Generic::List_1<Zenject::TypeValuePair>* CreateDefaultArgs(::Array<System::Type*>* argTypes);
  }; // Zenject.ValidationUtil
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ValidationUtil*, "Zenject", "ValidationUtil");
#pragma pack(pop)
