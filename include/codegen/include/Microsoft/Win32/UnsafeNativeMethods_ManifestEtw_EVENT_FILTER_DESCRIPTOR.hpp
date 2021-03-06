// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Autogenerated type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR
  struct UnsafeNativeMethods::ManifestEtw::EVENT_FILTER_DESCRIPTOR : public System::ValueType {
    public:
    // public System.Int64 Ptr
    // Offset: 0x0
    int64_t Ptr;
    // public System.Int32 Size
    // Offset: 0x8
    int Size;
    // public System.Int32 Type
    // Offset: 0xC
    int Type;
    // Creating value type constructor for type: EVENT_FILTER_DESCRIPTOR
    EVENT_FILTER_DESCRIPTOR(int64_t Ptr_ = {}, int Size_ = {}, int Type_ = {}) : Ptr{Ptr_}, Size{Size_}, Type{Type_} {}
  }; // Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_FILTER_DESCRIPTOR, "Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR");
#pragma pack(pop)
