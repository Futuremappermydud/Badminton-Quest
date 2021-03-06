// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:53 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Skipping declaration: DebuggingModes because it is already included!
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.DebuggableAttribute
  class DebuggableAttribute : public System::Attribute {
    public:
    // Nested type: System::Diagnostics::DebuggableAttribute::DebuggingModes
    struct DebuggingModes;
    // Autogenerated type: System.Diagnostics.DebuggableAttribute/DebuggingModes
    struct DebuggingModes : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public System.Diagnostics.DebuggableAttribute/DebuggingModes None
      static constexpr const int None = 0;
      // Get static field: static public System.Diagnostics.DebuggableAttribute/DebuggingModes None
      static System::Diagnostics::DebuggableAttribute::DebuggingModes _get_None();
      // Set static field: static public System.Diagnostics.DebuggableAttribute/DebuggingModes None
      static void _set_None(System::Diagnostics::DebuggableAttribute::DebuggingModes value);
      // static field const value: static public System.Diagnostics.DebuggableAttribute/DebuggingModes Default
      static constexpr const int Default = 1;
      // Get static field: static public System.Diagnostics.DebuggableAttribute/DebuggingModes Default
      static System::Diagnostics::DebuggableAttribute::DebuggingModes _get_Default();
      // Set static field: static public System.Diagnostics.DebuggableAttribute/DebuggingModes Default
      static void _set_Default(System::Diagnostics::DebuggableAttribute::DebuggingModes value);
      // static field const value: static public System.Diagnostics.DebuggableAttribute/DebuggingModes DisableOptimizations
      static constexpr const int DisableOptimizations = 256;
      // Get static field: static public System.Diagnostics.DebuggableAttribute/DebuggingModes DisableOptimizations
      static System::Diagnostics::DebuggableAttribute::DebuggingModes _get_DisableOptimizations();
      // Set static field: static public System.Diagnostics.DebuggableAttribute/DebuggingModes DisableOptimizations
      static void _set_DisableOptimizations(System::Diagnostics::DebuggableAttribute::DebuggingModes value);
      // static field const value: static public System.Diagnostics.DebuggableAttribute/DebuggingModes IgnoreSymbolStoreSequencePoints
      static constexpr const int IgnoreSymbolStoreSequencePoints = 2;
      // Get static field: static public System.Diagnostics.DebuggableAttribute/DebuggingModes IgnoreSymbolStoreSequencePoints
      static System::Diagnostics::DebuggableAttribute::DebuggingModes _get_IgnoreSymbolStoreSequencePoints();
      // Set static field: static public System.Diagnostics.DebuggableAttribute/DebuggingModes IgnoreSymbolStoreSequencePoints
      static void _set_IgnoreSymbolStoreSequencePoints(System::Diagnostics::DebuggableAttribute::DebuggingModes value);
      // static field const value: static public System.Diagnostics.DebuggableAttribute/DebuggingModes EnableEditAndContinue
      static constexpr const int EnableEditAndContinue = 4;
      // Get static field: static public System.Diagnostics.DebuggableAttribute/DebuggingModes EnableEditAndContinue
      static System::Diagnostics::DebuggableAttribute::DebuggingModes _get_EnableEditAndContinue();
      // Set static field: static public System.Diagnostics.DebuggableAttribute/DebuggingModes EnableEditAndContinue
      static void _set_EnableEditAndContinue(System::Diagnostics::DebuggableAttribute::DebuggingModes value);
      // Creating value type constructor for type: DebuggingModes
      DebuggingModes(int value_ = {}) : value{value_} {}
    }; // System.Diagnostics.DebuggableAttribute/DebuggingModes
    // private System.Diagnostics.DebuggableAttribute/DebuggingModes m_debuggingModes
    // Offset: 0x10
    System::Diagnostics::DebuggableAttribute::DebuggingModes m_debuggingModes;
    // public System.Void .ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes modes)
    // Offset: 0xC8032C
    static DebuggableAttribute* New_ctor(System::Diagnostics::DebuggableAttribute::DebuggingModes modes);
  }; // System.Diagnostics.DebuggableAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggableAttribute*, "System.Diagnostics", "DebuggableAttribute");
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggableAttribute::DebuggingModes, "System.Diagnostics", "DebuggableAttribute/DebuggingModes");
#pragma pack(pop)
