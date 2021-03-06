// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.StaticMemoryPoolBase`1
#include "Zenject/StaticMemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`2
#include "Zenject/IMemoryPool_2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.StaticMemoryPool`2
  template<typename TValue, typename TParam1>
  class StaticMemoryPool_2 : public Zenject::StaticMemoryPoolBase_1<TValue>, public Zenject::IMemoryPool_2<TParam1, TValue>, public Zenject::IDespawnableMemoryPool_1<TValue>, public Zenject::IMemoryPool {
    public:
    // private System.Action`2<TParam1,TValue> _onSpawnMethod
    // Offset: 0x0
    System::Action_2<TParam1, TValue>* onSpawnMethod;
    // public System.Void .ctor(System.Action`2<TParam1,TValue> onSpawnMethod, System.Action`1<TValue> onDespawnedMethod)
    // Offset: 0x15DEDA4
    static StaticMemoryPool_2<TValue, TParam1>* New_ctor(System::Action_2<TParam1, TValue>* onSpawnMethod, System::Action_1<TValue>* onDespawnedMethod) {
      return (StaticMemoryPool_2<TValue, TParam1>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<StaticMemoryPool_2<TValue, TParam1>*>::get(), onSpawnMethod, onDespawnedMethod));
    }
    // public System.Void set_OnSpawnMethod(System.Action`2<TParam1,TValue> value)
    // Offset: 0x15DEE00
    void set_OnSpawnMethod(System::Action_2<TParam1, TValue>* value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "set_OnSpawnMethod", value));
    }
    // public TValue Spawn(TParam1 param)
    // Offset: 0x15DEE08
    TValue Spawn(TParam1 param) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn", param));
    }
  }; // Zenject.StaticMemoryPool`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPool_2, "Zenject", "StaticMemoryPool`2");
#pragma pack(pop)
