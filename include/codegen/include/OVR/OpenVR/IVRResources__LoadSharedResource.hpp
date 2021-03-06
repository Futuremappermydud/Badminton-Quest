// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRResources
#include "OVR/OpenVR/IVRResources.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRResources/_LoadSharedResource
  class IVRResources::_LoadSharedResource : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1699E44
    static IVRResources::_LoadSharedResource* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.String pchResourceName, System.String pchBuffer, System.UInt32 unBufferLen)
    // Offset: 0x1699E58
    uint Invoke(::Il2CppString* pchResourceName, ::Il2CppString* pchBuffer, uint unBufferLen);
    // public System.IAsyncResult BeginInvoke(System.String pchResourceName, System.String pchBuffer, System.UInt32 unBufferLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x169A288
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchResourceName, ::Il2CppString* pchBuffer, uint unBufferLen, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x169A328
    uint EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRResources/_LoadSharedResource
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRResources::_LoadSharedResource*, "OVR.OpenVR", "IVRResources/_LoadSharedResource");
#pragma pack(pop)
