// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
  // Forward declaring type: Compositor_FrameTiming
  struct Compositor_FrameTiming;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_GetFrameTimings
  class IVRCompositor::_GetFrameTimings : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14FA7C8
    static IVRCompositor::_GetFrameTimings* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(OVR.OpenVR.Compositor_FrameTiming pTiming, System.UInt32 nFrames)
    // Offset: 0x14FA7DC
    uint Invoke(OVR::OpenVR::Compositor_FrameTiming& pTiming, uint nFrames);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.Compositor_FrameTiming pTiming, System.UInt32 nFrames, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14FAA50
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::Compositor_FrameTiming& pTiming, uint nFrames, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(OVR.OpenVR.Compositor_FrameTiming pTiming, System.IAsyncResult result)
    // Offset: 0x14FAB04
    uint EndInvoke(OVR::OpenVR::Compositor_FrameTiming& pTiming, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_GetFrameTimings
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_GetFrameTimings*, "OVR.OpenVR", "IVRCompositor/_GetFrameTimings");
#pragma pack(pop)
