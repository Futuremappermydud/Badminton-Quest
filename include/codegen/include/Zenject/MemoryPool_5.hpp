// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.MemoryPoolBase`1
#include "Zenject/MemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`5
#include "Zenject/IMemoryPool_5.hpp"
// Including type: Zenject.IFactory`5
#include "Zenject/IFactory_5.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MemoryPool`5
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class MemoryPool_5 : public Zenject::MemoryPoolBase_1<TValue>, public Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>, public Zenject::IDespawnableMemoryPool_1<TValue>, public Zenject::IMemoryPool, public Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TValue>, public Zenject::IFactory {
    public:
    // public TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4)
    // Offset: 0x15CD238
    TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn", param1, param2, param3, param4));
    }
    // protected System.Void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TValue item)
    // Offset: 0x15CD2E8
    void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", p1, p2, p3, p4, item));
    }
    // private TValue Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TValue>.Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    // Offset: 0x15CD2EC
    // Implemented from: Zenject.IFactory`5
    // Base method: TValue IFactory`5::Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    TValue Zenject_IFactory_5_Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TValue>.Create", p1, p2, p3, p4));
    }
    // public System.Void .ctor()
    // Offset: 0x15CD310
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MemoryPool_5<TValue, TParam1, TParam2, TParam3, TParam4>* New_ctor() {
      return (MemoryPool_5<TValue, TParam1, TParam2, TParam3, TParam4>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MemoryPool_5<TValue, TParam1, TParam2, TParam3, TParam4>*>::get()));
    }
  }; // Zenject.MemoryPool`5
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPool_5, "Zenject", "MemoryPool`5");
#pragma pack(pop)
