// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.RectTransform
#include "UnityEngine/RectTransform.hpp"
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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.RectTransform/ReapplyDrivenProperties
  class RectTransform::ReapplyDrivenProperties : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14099B8
    static RectTransform::ReapplyDrivenProperties* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(UnityEngine.RectTransform driven)
    // Offset: 0x1409600
    void Invoke(UnityEngine::RectTransform* driven);
    // public System.IAsyncResult BeginInvoke(UnityEngine.RectTransform driven, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14099CC
    System::IAsyncResult* BeginInvoke(UnityEngine::RectTransform* driven, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x14099F0
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.RectTransform/ReapplyDrivenProperties
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RectTransform::ReapplyDrivenProperties*, "UnityEngine", "RectTransform/ReapplyDrivenProperties");
#pragma pack(pop)
