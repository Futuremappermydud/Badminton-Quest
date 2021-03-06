// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.MemoryPoolBase`1
#include "Zenject/MemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`1
#include "Zenject/IMemoryPool_1.hpp"
// Including type: Zenject.IFactory`1
#include "Zenject/IFactory_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MemoryPool`1
  template<typename TValue>
  class MemoryPool_1 : public Zenject::MemoryPoolBase_1<TValue>, public Zenject::IMemoryPool_1<TValue>, public Zenject::IDespawnableMemoryPool_1<TValue>, public Zenject::IMemoryPool, public Zenject::IFactory_1<TValue>, public Zenject::IFactory {
    public:
    // protected System.Void Reinitialize(TValue item)
    // Offset: 0x15CCF38
    void Reinitialize(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", item));
    }
    // public TValue Spawn()
    // Offset: 0x15CCEB8
    // Implemented from: Zenject.IMemoryPool`1
    // Base method: TValue IMemoryPool`1::Spawn()
    TValue Spawn() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn"));
    }
    // private TValue Zenject.IFactory<TValue>.Create()
    // Offset: 0x15CCF3C
    // Implemented from: Zenject.IFactory`1
    // Base method: TValue IFactory`1::Create()
    TValue Zenject_IFactory_1_Create() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Zenject.IFactory<TValue>.Create"));
    }
    // public System.Void .ctor()
    // Offset: 0x15CCF60
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MemoryPool_1<TValue>* New_ctor() {
      return (MemoryPool_1<TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MemoryPool_1<TValue>*>::get()));
    }
  }; // Zenject.MemoryPool`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPool_1, "Zenject", "MemoryPool`1");
#pragma pack(pop)
