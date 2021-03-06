// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
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
  // Forward declaring type: EVRInputError
  struct EVRInputError;
  // Forward declaring type: VRActiveActionSet_t
  struct VRActiveActionSet_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRInput/_UpdateActionState
  class IVRInput::_UpdateActionState : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15068E8
    static IVRInput::_UpdateActionState* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRInputError Invoke(OVR.OpenVR.VRActiveActionSet_t[] pSets, System.UInt32 unSizeOfVRSelectedActionSet_t, System.UInt32 unSetCount)
    // Offset: 0x15068FC
    OVR::OpenVR::EVRInputError Invoke(::Array<OVR::OpenVR::VRActiveActionSet_t>*& pSets, uint unSizeOfVRSelectedActionSet_t, uint unSetCount);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.VRActiveActionSet_t[] pSets, System.UInt32 unSizeOfVRSelectedActionSet_t, System.UInt32 unSetCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1506B88
    System::IAsyncResult* BeginInvoke(::Array<OVR::OpenVR::VRActiveActionSet_t>*& pSets, uint unSizeOfVRSelectedActionSet_t, uint unSetCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1506C3C
    OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_UpdateActionState
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_UpdateActionState*, "OVR.OpenVR", "IVRInput/_UpdateActionState");
#pragma pack(pop)
