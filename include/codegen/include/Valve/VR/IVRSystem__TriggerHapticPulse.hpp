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
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_TriggerHapticPulse
  class IVRSystem::_TriggerHapticPulse : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16C2978
    static IVRSystem::_TriggerHapticPulse* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.UInt32 unControllerDeviceIndex, System.UInt32 unAxisId, System.Char usDurationMicroSec)
    // Offset: 0x16C298C
    void Invoke(uint unControllerDeviceIndex, uint unAxisId, ::Il2CppChar usDurationMicroSec);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unControllerDeviceIndex, System.UInt32 unAxisId, System.Char usDurationMicroSec, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16C2C30
    System::IAsyncResult* BeginInvoke(uint unControllerDeviceIndex, uint unAxisId, ::Il2CppChar usDurationMicroSec, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x16C2CF4
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_TriggerHapticPulse
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_TriggerHapticPulse*, "Valve.VR", "IVRSystem/_TriggerHapticPulse");
#pragma pack(pop)
