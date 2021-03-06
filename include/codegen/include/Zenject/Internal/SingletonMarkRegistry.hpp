// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:47 PM
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.SingletonMarkRegistry
  class SingletonMarkRegistry : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.HashSet`1<System.Type> _boundSingletons
    // Offset: 0x10
    System::Collections::Generic::HashSet_1<System::Type*>* boundSingletons;
    // private readonly System.Collections.Generic.HashSet`1<System.Type> _boundNonSingletons
    // Offset: 0x18
    System::Collections::Generic::HashSet_1<System::Type*>* boundNonSingletons;
    // public System.Void MarkNonSingleton(System.Type type)
    // Offset: 0xF2AA9C
    void MarkNonSingleton(System::Type* type);
    // public System.Void MarkSingleton(System.Type type)
    // Offset: 0xF2AB40
    void MarkSingleton(System::Type* type);
    // public System.Void .ctor()
    // Offset: 0xF2AC00
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SingletonMarkRegistry* New_ctor();
  }; // Zenject.Internal.SingletonMarkRegistry
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::SingletonMarkRegistry*, "Zenject.Internal", "SingletonMarkRegistry");
#pragma pack(pop)
