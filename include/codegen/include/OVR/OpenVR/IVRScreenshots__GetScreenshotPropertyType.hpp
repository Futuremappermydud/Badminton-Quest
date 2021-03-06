// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRScreenshots
#include "OVR/OpenVR/IVRScreenshots.hpp"
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
  // Forward declaring type: EVRScreenshotType
  struct EVRScreenshotType;
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRScreenshots/_GetScreenshotPropertyType
  class IVRScreenshots::_GetScreenshotPropertyType : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x169A770
    static IVRScreenshots::_GetScreenshotPropertyType* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRScreenshotType Invoke(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotError pError)
    // Offset: 0x169A784
    OVR::OpenVR::EVRScreenshotType Invoke(uint screenshotHandle, OVR::OpenVR::EVRScreenshotError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 screenshotHandle, OVR.OpenVR.EVRScreenshotError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x169AA14
    System::IAsyncResult* BeginInvoke(uint screenshotHandle, OVR::OpenVR::EVRScreenshotError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRScreenshotType EndInvoke(OVR.OpenVR.EVRScreenshotError pError, System.IAsyncResult result)
    // Offset: 0x169AAC8
    OVR::OpenVR::EVRScreenshotType EndInvoke(OVR::OpenVR::EVRScreenshotError& pError, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRScreenshots/_GetScreenshotPropertyType
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRScreenshots::_GetScreenshotPropertyType*, "OVR.OpenVR", "IVRScreenshots/_GetScreenshotPropertyType");
#pragma pack(pop)
