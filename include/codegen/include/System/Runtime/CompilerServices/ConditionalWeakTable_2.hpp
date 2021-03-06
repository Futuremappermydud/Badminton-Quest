// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:51 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Skipping declaration: CreateValueCallback because it is already included!
  // Forward declaring type: Ephemeron
  struct Ephemeron;
  // Skipping declaration: CreateValueCallback because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.ConditionalWeakTable`2
  template<typename TKey, typename TValue>
  class ConditionalWeakTable_2 : public ::Il2CppObject {
    public:
    // Nested type: System::Runtime::CompilerServices::ConditionalWeakTable_2::CreateValueCallback<TValue, TKey>
    class CreateValueCallback;
    // Autogenerated type: System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback
    class CreateValueCallback : public System::MulticastDelegate, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = ConditionalWeakTable_2<TKey, TValue>*;
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0x1472A7C
      static typename ConditionalWeakTable_2<TValue, TKey>::CreateValueCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
        return (typename ConditionalWeakTable_2<TValue, TKey>::CreateValueCallback*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename ConditionalWeakTable_2<TValue, TKey>::CreateValueCallback*>::get(), object, method));
      }
      // public TValue Invoke(TKey key)
      // Offset: 0x1472A90
      TValue Invoke(TKey key) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Invoke", key));
      }
      // public System.IAsyncResult BeginInvoke(TKey key, System.AsyncCallback callback, System.Object object)
      // Offset: 0x1472E50
      System::IAsyncResult* BeginInvoke(TKey key, System::AsyncCallback* callback, ::Il2CppObject* object) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", key, callback, object));
      }
      // public TValue EndInvoke(System.IAsyncResult result)
      // Offset: 0x1472E74
      TValue EndInvoke(System::IAsyncResult* result) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "EndInvoke", result));
      }
    }; // System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback
    // Autogenerated static field getter
    // Get static field: static private System.Int32 INITIAL_SIZE
    static int _get_INITIAL_SIZE() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "INITIAL_SIZE")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 INITIAL_SIZE
    static void _set_INITIAL_SIZE(int value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "INITIAL_SIZE", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Single LOAD_FACTOR
    static float _get_LOAD_FACTOR() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<float>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "LOAD_FACTOR")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Single LOAD_FACTOR
    static void _set_LOAD_FACTOR(float value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "LOAD_FACTOR", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Single COMPACT_FACTOR
    static float _get_COMPACT_FACTOR() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<float>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "COMPACT_FACTOR")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Single COMPACT_FACTOR
    static void _set_COMPACT_FACTOR(float value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "COMPACT_FACTOR", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Single EXPAND_FACTOR
    static float _get_EXPAND_FACTOR() {
      return CRASH_UNLESS((il2cpp_utils::GetFieldValue<float>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "EXPAND_FACTOR")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Single EXPAND_FACTOR
    static void _set_EXPAND_FACTOR(float value) {
      CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get(), "EXPAND_FACTOR", value));
    }
    // private System.Runtime.CompilerServices.Ephemeron[] data
    // Offset: 0x0
    ::Array<System::Runtime::CompilerServices::Ephemeron>* data;
    // private System.Object _lock
    // Offset: 0x0
    ::Il2CppObject* lock;
    // private System.Int32 size
    // Offset: 0x0
    int size;
    // private System.Void RehashWithoutResize()
    // Offset: 0x1472F68
    void RehashWithoutResize() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "RehashWithoutResize"));
    }
    // private System.Void RecomputeSize()
    // Offset: 0x1473194
    void RecomputeSize() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "RecomputeSize"));
    }
    // private System.Void Rehash()
    // Offset: 0x1473208
    void Rehash() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Rehash"));
    }
    // public System.Void Add(TKey key, TValue value)
    // Offset: 0x14734F0
    void Add(TKey key, TValue value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Add", key, value));
    }
    // public System.Boolean Remove(TKey key)
    // Offset: 0x1473824
    bool Remove(TKey key) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Remove", key));
    }
    // public System.Boolean TryGetValue(TKey key, TValue value)
    // Offset: 0x1473AC4
    bool TryGetValue(TKey key, TValue& value) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryGetValue", key, value));
    }
    // public TValue GetValue(TKey key, System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<TKey,TValue> createValueCallback)
    // Offset: 0x1473D6C
    TValue GetValue(TKey key, typename System::Runtime::CompilerServices::ConditionalWeakTable_2<TValue, TKey>::CreateValueCallback* createValueCallback) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "GetValue", key, createValueCallback));
    }
    // public System.Void .ctor()
    // Offset: 0x1472E80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ConditionalWeakTable_2<TKey, TValue>* New_ctor() {
      return (ConditionalWeakTable_2<TKey, TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConditionalWeakTable_2<TKey, TValue>*>::get()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x1472F50
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
    }
  }; // System.Runtime.CompilerServices.ConditionalWeakTable`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Runtime::CompilerServices::ConditionalWeakTable_2, "System.Runtime.CompilerServices", "ConditionalWeakTable`2");
#pragma pack(pop)
