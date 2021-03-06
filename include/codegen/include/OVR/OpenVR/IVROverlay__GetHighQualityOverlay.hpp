// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetHighQualityOverlay
  class IVROverlay::_GetHighQualityOverlay : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15095FC
    static IVROverlay::_GetHighQualityOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt64 Invoke()
    // Offset: 0x1509610
    uint64_t Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1509824
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1509850
    uint64_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetHighQualityOverlay
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetHighQualityOverlay*, "OVR.OpenVR", "IVROverlay/_GetHighQualityOverlay");
#pragma pack(pop)
