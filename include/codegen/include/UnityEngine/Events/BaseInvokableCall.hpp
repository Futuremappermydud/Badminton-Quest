// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:30 PM
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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.BaseInvokableCall
  class BaseInvokableCall : public ::Il2CppObject {
    public:
    // protected System.Void .ctor(System.Object target, System.Reflection.MethodInfo function)
    // Offset: 0x12F311C
    static BaseInvokableCall* New_ctor(::Il2CppObject* target, System::Reflection::MethodInfo* function);
    // public System.Void Invoke(System.Object[] args)
    // Offset: 0xFFFFFFFF
    void Invoke(::Array<::Il2CppObject*>* args);
    // static protected System.Void ThrowOnInvalidArg(System.Object arg)
    // Offset: 0xC498F0
    template<class T>
    static void ThrowOnInvalidArg(::Il2CppObject* arg) {
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Events", "BaseInvokableCall", "ThrowOnInvalidArg", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, arg));
    }
    // static protected System.Boolean AllowInvoke(System.Delegate delegate)
    // Offset: 0x12F31D8
    static bool AllowInvoke(System::Delegate* delegate);
    // public System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0xFFFFFFFF
    bool Find(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method);
    // protected System.Void .ctor()
    // Offset: 0x12F3114
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BaseInvokableCall* New_ctor();
  }; // UnityEngine.Events.BaseInvokableCall
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::BaseInvokableCall*, "UnityEngine.Events", "BaseInvokableCall");
#pragma pack(pop)
