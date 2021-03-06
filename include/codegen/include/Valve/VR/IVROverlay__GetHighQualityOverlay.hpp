// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_GetHighQualityOverlay
  class IVROverlay::_GetHighQualityOverlay : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F30D4
    static IVROverlay::_GetHighQualityOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt64 Invoke()
    // Offset: 0x15F30E8
    uint64_t Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x15F32FC
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(System.IAsyncResult result)
    // Offset: 0x15F3328
    uint64_t EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetHighQualityOverlay
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetHighQualityOverlay*, "Valve.VR", "IVROverlay/_GetHighQualityOverlay");
#pragma pack(pop)
