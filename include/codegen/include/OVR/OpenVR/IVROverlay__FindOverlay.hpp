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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_FindOverlay
  class IVROverlay::_FindOverlay : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1508B08
    static IVROverlay::_FindOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.String pchOverlayKey, System.UInt64 pOverlayHandle)
    // Offset: 0x1508B1C
    OVR::OpenVR::EVROverlayError Invoke(::Il2CppString* pchOverlayKey, uint64_t& pOverlayHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchOverlayKey, System.UInt64 pOverlayHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1508F28
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchOverlayKey, uint64_t& pOverlayHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(System.UInt64 pOverlayHandle, System.IAsyncResult result)
    // Offset: 0x1508FC4
    OVR::OpenVR::EVROverlayError EndInvoke(uint64_t& pOverlayHandle, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_FindOverlay
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_FindOverlay*, "OVR.OpenVR", "IVROverlay/_FindOverlay");
#pragma pack(pop)
