// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingCollisionBoundsTagsInfo
  class IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEBECDC
    static IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Byte[] pTagsBuffer, System.UInt32 unTagCount)
    // Offset: 0xEB650C
    void Invoke(::Array<uint8_t>*& pTagsBuffer, uint unTagCount);
    // public System.IAsyncResult BeginInvoke(System.Byte[] pTagsBuffer, System.UInt32 unTagCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEBECF0
    System::IAsyncResult* BeginInvoke(::Array<uint8_t>*& pTagsBuffer, uint unTagCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xEBED8C
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_SetWorkingCollisionBoundsTagsInfo
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingCollisionBoundsTagsInfo");
#pragma pack(pop)
