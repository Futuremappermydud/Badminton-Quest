// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.Events.UnityEventBase
#include "UnityEngine/Events/UnityEventBase.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`3<T0, T1, T2>
  template<typename T0, typename T1, typename T2>
  class UnityAction_3;
  // Forward declaring type: BaseInvokableCall
  class BaseInvokableCall;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.UnityEvent`3
  template<typename T0, typename T1, typename T2>
  class UnityEvent_3 : public UnityEngine::Events::UnityEventBase {
    public:
    // private System.Object[] m_InvokeArray
    // Offset: 0x0
    ::Array<::Il2CppObject*>* m_InvokeArray;
    // public System.Void AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2> call)
    // Offset: 0x116B684
    void AddListener(UnityEngine::Events::UnityAction_3<T0, T1, T2>* call) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "AddListener", call));
    }
    // public System.Void RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2> call)
    // Offset: 0x116B6D0
    void RemoveListener(UnityEngine::Events::UnityAction_3<T0, T1, T2>* call) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "RemoveListener", call));
    }
    // static private UnityEngine.Events.BaseInvokableCall GetDelegate(UnityEngine.Events.UnityAction`3<T0,T1,T2> action)
    // Offset: 0x116B934
    static UnityEngine::Events::BaseInvokableCall* GetDelegate(UnityEngine::Events::UnityAction_3<T0, T1, T2>* action) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Events::BaseInvokableCall*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEvent_3<T0, T1, T2>*>::get(), "GetDelegate", action));
    }
    // public System.Void Invoke(T0 arg0, T1 arg1, T2 arg2)
    // Offset: 0x116B9EC
    void Invoke(T0 arg0, T1 arg1, T2 arg2) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", arg0, arg1, arg2));
    }
    // public System.Void .ctor()
    // Offset: 0x116B64C
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static UnityEvent_3<T0, T1, T2>* New_ctor() {
      return (UnityEvent_3<T0, T1, T2>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEvent_3<T0, T1, T2>*>::get()));
    }
    // protected override System.Reflection.MethodInfo FindMethod_Impl(System.String name, System.Object targetObj)
    // Offset: 0x116B718
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: System.Reflection.MethodInfo UnityEventBase::FindMethod_Impl(System.String name, System.Object targetObj)
    System::Reflection::MethodInfo* FindMethod_Impl(::Il2CppString* name, ::Il2CppObject* targetObj) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "FindMethod_Impl", name, targetObj));
    }
    // override UnityEngine.Events.BaseInvokableCall GetDelegate(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0x116B8C0
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: UnityEngine.Events.BaseInvokableCall UnityEventBase::GetDelegate(System.Object target, System.Reflection.MethodInfo theFunction)
    UnityEngine::Events::BaseInvokableCall* GetDelegate(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Events::BaseInvokableCall*>(this, "GetDelegate", target, theFunction));
    }
  }; // UnityEngine.Events.UnityEvent`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::UnityEvent_3, "UnityEngine.Events", "UnityEvent`3");
#pragma pack(pop)
