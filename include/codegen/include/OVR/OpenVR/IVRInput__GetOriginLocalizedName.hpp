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
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRInput/_GetOriginLocalizedName
  class IVRInput::_GetOriginLocalizedName : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1504168
    static IVRInput::_GetOriginLocalizedName* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRInputError Invoke(System.UInt64 origin, System.Text.StringBuilder pchNameArray, System.UInt32 unNameArraySize)
    // Offset: 0x150417C
    OVR::OpenVR::EVRInputError Invoke(uint64_t origin, System::Text::StringBuilder* pchNameArray, uint unNameArraySize);
    // public System.IAsyncResult BeginInvoke(System.UInt64 origin, System.Text.StringBuilder pchNameArray, System.UInt32 unNameArraySize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1504414
    System::IAsyncResult* BeginInvoke(uint64_t origin, System::Text::StringBuilder* pchNameArray, uint unNameArraySize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(System.IAsyncResult result)
    // Offset: 0x15044CC
    OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/_GetOriginLocalizedName
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput::_GetOriginLocalizedName*, "OVR.OpenVR", "IVRInput/_GetOriginLocalizedName");
#pragma pack(pop)
