// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Autogenerated type: Unity.Collections.Allocator
  struct Allocator : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Unity.Collections.Allocator Invalid
    static constexpr const int Invalid = 0;
    // Get static field: static public Unity.Collections.Allocator Invalid
    static Unity::Collections::Allocator _get_Invalid();
    // Set static field: static public Unity.Collections.Allocator Invalid
    static void _set_Invalid(Unity::Collections::Allocator value);
    // static field const value: static public Unity.Collections.Allocator None
    static constexpr const int None = 1;
    // Get static field: static public Unity.Collections.Allocator None
    static Unity::Collections::Allocator _get_None();
    // Set static field: static public Unity.Collections.Allocator None
    static void _set_None(Unity::Collections::Allocator value);
    // static field const value: static public Unity.Collections.Allocator Temp
    static constexpr const int Temp = 2;
    // Get static field: static public Unity.Collections.Allocator Temp
    static Unity::Collections::Allocator _get_Temp();
    // Set static field: static public Unity.Collections.Allocator Temp
    static void _set_Temp(Unity::Collections::Allocator value);
    // static field const value: static public Unity.Collections.Allocator TempJob
    static constexpr const int TempJob = 3;
    // Get static field: static public Unity.Collections.Allocator TempJob
    static Unity::Collections::Allocator _get_TempJob();
    // Set static field: static public Unity.Collections.Allocator TempJob
    static void _set_TempJob(Unity::Collections::Allocator value);
    // static field const value: static public Unity.Collections.Allocator Persistent
    static constexpr const int Persistent = 4;
    // Get static field: static public Unity.Collections.Allocator Persistent
    static Unity::Collections::Allocator _get_Persistent();
    // Set static field: static public Unity.Collections.Allocator Persistent
    static void _set_Persistent(Unity::Collections::Allocator value);
    // static field const value: static public Unity.Collections.Allocator AudioKernel
    static constexpr const int AudioKernel = 5;
    // Get static field: static public Unity.Collections.Allocator AudioKernel
    static Unity::Collections::Allocator _get_AudioKernel();
    // Set static field: static public Unity.Collections.Allocator AudioKernel
    static void _set_AudioKernel(Unity::Collections::Allocator value);
    // Creating value type constructor for type: Allocator
    Allocator(int value_ = {}) : value{value_} {}
  }; // Unity.Collections.Allocator
}
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::Allocator, "Unity.Collections", "Allocator");
#pragma pack(pop)
