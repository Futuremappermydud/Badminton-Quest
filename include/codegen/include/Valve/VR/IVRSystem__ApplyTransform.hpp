// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_ApplyTransform
  class IVRSystem::_ApplyTransform : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B93CC
    static IVRSystem::_ApplyTransform* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(Valve.VR.TrackedDevicePose_t pOutputPose, Valve.VR.TrackedDevicePose_t pTrackedDevicePose, Valve.VR.HmdMatrix34_t pTransform)
    // Offset: 0x16B93E0
    void Invoke(Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, Valve::VR::HmdMatrix34_t& pTransform);
    // public System.IAsyncResult BeginInvoke(Valve.VR.TrackedDevicePose_t pOutputPose, Valve.VR.TrackedDevicePose_t pTrackedDevicePose, Valve.VR.HmdMatrix34_t pTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B9664
    System::IAsyncResult* BeginInvoke(Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, Valve::VR::HmdMatrix34_t& pTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(Valve.VR.TrackedDevicePose_t pOutputPose, Valve.VR.TrackedDevicePose_t pTrackedDevicePose, Valve.VR.HmdMatrix34_t pTransform, System.IAsyncResult result)
    // Offset: 0x16B9738
    void EndInvoke(Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, Valve::VR::HmdMatrix34_t& pTransform, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_ApplyTransform
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_ApplyTransform*, "Valve.VR", "IVRSystem/_ApplyTransform");
#pragma pack(pop)
