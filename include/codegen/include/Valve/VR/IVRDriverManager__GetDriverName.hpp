// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:15 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRDriverManager
#include "Valve/VR/IVRDriverManager.hpp"
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRDriverManager/_GetDriverName
  class IVRDriverManager::_GetDriverName : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15EF86C
    static IVRDriverManager::_GetDriverName* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.UInt32 nDriver, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0x15EF880
    uint Invoke(uint nDriver, System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDriver, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15EFB2C
    System::IAsyncResult* BeginInvoke(uint nDriver, System::Text::StringBuilder* pchValue, uint unBufferSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x15EFBDC
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRDriverManager/_GetDriverName
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRDriverManager::_GetDriverName*, "Valve.VR", "IVRDriverManager/_GetDriverName");
#pragma pack(pop)
