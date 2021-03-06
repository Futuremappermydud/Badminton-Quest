// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.MemoryPoolBase`1
#include "Zenject/MemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`9
#include "Zenject/IMemoryPool_9.hpp"
// Including type: Zenject.IFactory`9
#include "Zenject/IFactory_9.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MemoryPool`9
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8>
  class MemoryPool_9 : public Zenject::MemoryPoolBase_1<TValue>, public Zenject::IMemoryPool_9<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TValue>, public Zenject::IDespawnableMemoryPool_1<TValue>, public Zenject::IMemoryPool, public Zenject::IFactory_9<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TValue>, public Zenject::IFactory {
    public:
    // public TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6, TParam7 param7, TParam8 param8)
    // Offset: 0x15CD698
    TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6, TParam7 param7, TParam8 param8) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn", param1, param2, param3, param4, param5, param6, param7, param8));
    }
    // protected System.Void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8, TValue item)
    // Offset: 0x15CD780
    void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8, TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", p1, p2, p3, p4, p5, p6, p7, p8, item));
    }
    // private TValue Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue>.Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8)
    // Offset: 0x15CD784
    // Implemented from: Zenject.IFactory`9
    // Base method: TValue IFactory`9::Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8)
    TValue Zenject_IFactory_9_Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TValue>.Create", p1, p2, p3, p4, p5, p6, p7, p8));
    }
    // public System.Void .ctor()
    // Offset: 0x15CD7B4
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MemoryPool_9<TValue, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8>* New_ctor() {
      return (MemoryPool_9<TValue, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MemoryPool_9<TValue, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8>*>::get()));
    }
  }; // Zenject.MemoryPool`9
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPool_9, "Zenject", "MemoryPool`9");
#pragma pack(pop)
