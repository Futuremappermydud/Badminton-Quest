// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.StaticMemoryPoolBase`1
#include "Zenject/StaticMemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`8
#include "Zenject/IMemoryPool_8.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`8<T1, T2, T3, T4, T5, T6, T7, T8>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
  class Action_8;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.StaticMemoryPool`8
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7>
  class StaticMemoryPool_8 : public Zenject::StaticMemoryPoolBase_1<TValue>, public Zenject::IMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>, public Zenject::IDespawnableMemoryPool_1<TValue>, public Zenject::IMemoryPool {
    public:
    // private System.Action`8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> _onSpawnMethod
    // Offset: 0x0
    System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* onSpawnMethod;
    // public System.Void .ctor(System.Action`8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> onSpawnMethod, System.Action`1<TValue> onDespawnedMethod)
    // Offset: 0x15DF380
    static StaticMemoryPool_8<TValue, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7>* New_ctor(System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* onSpawnMethod, System::Action_1<TValue>* onDespawnedMethod) {
      return (StaticMemoryPool_8<TValue, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<StaticMemoryPool_8<TValue, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7>*>::get(), onSpawnMethod, onDespawnedMethod));
    }
    // public System.Void set_OnSpawnMethod(System.Action`8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> value)
    // Offset: 0x15DF3DC
    void set_OnSpawnMethod(System::Action_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "set_OnSpawnMethod", value));
    }
    // public TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7)
    // Offset: 0x15DF3E4
    TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn", p1, p2, p3, p4, p5, p6, p7));
    }
  }; // Zenject.StaticMemoryPool`8
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPool_8, "Zenject", "StaticMemoryPool`8");
#pragma pack(pop)
