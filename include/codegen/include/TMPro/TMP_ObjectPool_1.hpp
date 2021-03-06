// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:23 PM
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
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_ObjectPool`1
  template<typename T>
  class TMP_ObjectPool_1 : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.Stack`1<T> m_Stack
    // Offset: 0x0
    System::Collections::Generic::Stack_1<T>* m_Stack;
    // private readonly UnityEngine.Events.UnityAction`1<T> m_ActionOnGet
    // Offset: 0x0
    UnityEngine::Events::UnityAction_1<T>* m_ActionOnGet;
    // private readonly UnityEngine.Events.UnityAction`1<T> m_ActionOnRelease
    // Offset: 0x0
    UnityEngine::Events::UnityAction_1<T>* m_ActionOnRelease;
    // private System.Int32 <countAll>k__BackingField
    // Offset: 0x0
    int countAll;
    // public System.Int32 get_countAll()
    // Offset: 0x13E5490
    int get_countAll() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_countAll"));
    }
    // private System.Void set_countAll(System.Int32 value)
    // Offset: 0x13E5498
    void set_countAll(int value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "set_countAll", value));
    }
    // public System.Int32 get_countActive()
    // Offset: 0x13E54A0
    int get_countActive() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_countActive"));
    }
    // public System.Int32 get_countInactive()
    // Offset: 0x13E54FC
    int get_countInactive() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_countInactive"));
    }
    // public System.Void .ctor(UnityEngine.Events.UnityAction`1<T> actionOnGet, UnityEngine.Events.UnityAction`1<T> actionOnRelease)
    // Offset: 0x13E5524
    static TMP_ObjectPool_1<T>* New_ctor(UnityEngine::Events::UnityAction_1<T>* actionOnGet, UnityEngine::Events::UnityAction_1<T>* actionOnRelease) {
      return (TMP_ObjectPool_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMP_ObjectPool_1<T>*>::get(), actionOnGet, actionOnRelease));
    }
    // public T Get()
    // Offset: 0x13E55D8
    T Get() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(this, "Get"));
    }
    // public System.Void Release(T element)
    // Offset: 0x13E56B8
    void Release(T element) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Release", element));
    }
  }; // TMPro.TMP_ObjectPool`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(TMPro::TMP_ObjectPool_1, "TMPro", "TMP_ObjectPool`1");
#pragma pack(pop)
