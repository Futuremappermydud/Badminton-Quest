// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.TransientProvider
#include "Zenject/TransientProvider.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.TransientProvider/<>c__DisplayClass11_0
  class TransientProvider::$$c__DisplayClass11_0 : public ::Il2CppObject {
    public:
    // public Zenject.TransientProvider <>4__this
    // Offset: 0x10
    Zenject::TransientProvider* $$4__this;
    // public System.Object instance
    // Offset: 0x18
    ::Il2CppObject* instance;
    // public System.Type instanceType
    // Offset: 0x20
    System::Type* instanceType;
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> extraArgs
    // Offset: 0x28
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArgs;
    // public Zenject.InjectContext context
    // Offset: 0x30
    Zenject::InjectContext* context;
    // System.Void <GetAllInstancesWithInjectSplit>b__0()
    // Offset: 0xFBE20C
    void $GetAllInstancesWithInjectSplit$b__0();
    // public System.Void .ctor()
    // Offset: 0xFBE204
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TransientProvider::$$c__DisplayClass11_0* New_ctor();
  }; // Zenject.TransientProvider/<>c__DisplayClass11_0
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::TransientProvider::$$c__DisplayClass11_0*, "Zenject", "TransientProvider/<>c__DisplayClass11_0");
#pragma pack(pop)
