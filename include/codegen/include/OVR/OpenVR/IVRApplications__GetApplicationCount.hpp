// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:01 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRApplications/_GetApplicationCount
  class IVRApplications::_GetApplicationCount : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEBC7D4
    static IVRApplications::_GetApplicationCount* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke()
    // Offset: 0xEAC65C
    uint Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0xEBC7E8
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0xEBC814
    uint EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/_GetApplicationCount
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRApplications::_GetApplicationCount*, "OVR.OpenVR", "IVRApplications/_GetApplicationCount");
#pragma pack(pop)
