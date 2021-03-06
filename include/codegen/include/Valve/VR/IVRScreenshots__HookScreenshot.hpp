// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:15 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRScreenshots
#include "Valve/VR/IVRScreenshots.hpp"
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
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
  // Forward declaring type: EVRScreenshotType
  struct EVRScreenshotType;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRScreenshots/_HookScreenshot
  class IVRScreenshots::_HookScreenshot : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B4268
    static IVRScreenshots::_HookScreenshot* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRScreenshotError Invoke(Valve.VR.EVRScreenshotType[] pSupportedTypes, System.Int32 numTypes)
    // Offset: 0x16B427C
    Valve::VR::EVRScreenshotError Invoke(::Array<Valve::VR::EVRScreenshotType>*& pSupportedTypes, int numTypes);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVRScreenshotType[] pSupportedTypes, System.Int32 numTypes, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B44F0
    System::IAsyncResult* BeginInvoke(::Array<Valve::VR::EVRScreenshotType>*& pSupportedTypes, int numTypes, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRScreenshotError EndInvoke(System.IAsyncResult result)
    // Offset: 0x16B458C
    Valve::VR::EVRScreenshotError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRScreenshots/_HookScreenshot
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRScreenshots::_HookScreenshot*, "Valve.VR", "IVRScreenshots/_HookScreenshot");
#pragma pack(pop)
