// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: Guid
  struct Guid;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Autogenerated type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback
  class UnsafeNativeMethods::ManifestEtw::EtwEnableCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1098200
    static UnsafeNativeMethods::ManifestEtw::EtwEnableCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Guid sourceId, System.Int32 isEnabled, System.Byte level, System.Int64 matchAnyKeywords, System.Int64 matchAllKeywords, Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR* filterData, System.Void* callbackContext)
    // Offset: 0x1098214
    void Invoke(System::Guid& sourceId, int& isEnabled, uint8_t& level, int64_t& matchAnyKeywords, int64_t& matchAllKeywords, Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_FILTER_DESCRIPTOR*& filterData, void*& callbackContext);
    // public System.IAsyncResult BeginInvoke(System.Guid sourceId, System.Int32 isEnabled, System.Byte level, System.Int64 matchAnyKeywords, System.Int64 matchAllKeywords, Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR* filterData, System.Void* callbackContext, System.AsyncCallback callback, System.Object object)
    // Offset: 0x10984E0
    System::IAsyncResult* BeginInvoke(System::Guid& sourceId, int& isEnabled, uint8_t& level, int64_t& matchAnyKeywords, int64_t& matchAllKeywords, Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_FILTER_DESCRIPTOR*& filterData, void*& callbackContext, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.Guid sourceId, System.IAsyncResult result)
    // Offset: 0x10985F8
    void EndInvoke(System::Guid& sourceId, System::IAsyncResult* result);
  }; // Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EtwEnableCallback*, "Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/EtwEnableCallback");
#pragma pack(pop)
