// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:40 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ZenInjectMethod
  class ZenInjectMethod : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1946350
    static ZenInjectMethod* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Object obj, System.Object[] args)
    // Offset: 0x1946364
    void Invoke(::Il2CppObject* obj, ::Array<::Il2CppObject*>* args);
    // public System.IAsyncResult BeginInvoke(System.Object obj, System.Object[] args, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1946768
    System::IAsyncResult* BeginInvoke(::Il2CppObject* obj, ::Array<::Il2CppObject*>* args, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1946798
    void EndInvoke(System::IAsyncResult* result);
  }; // Zenject.ZenInjectMethod
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenInjectMethod*, "Zenject", "ZenInjectMethod");
#pragma pack(pop)
