// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.Base64FormattingOptions
  struct Base64FormattingOptions : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Base64FormattingOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.Base64FormattingOptions None
    static System::Base64FormattingOptions _get_None();
    // Set static field: static public System.Base64FormattingOptions None
    static void _set_None(System::Base64FormattingOptions value);
    // static field const value: static public System.Base64FormattingOptions InsertLineBreaks
    static constexpr const int InsertLineBreaks = 1;
    // Get static field: static public System.Base64FormattingOptions InsertLineBreaks
    static System::Base64FormattingOptions _get_InsertLineBreaks();
    // Set static field: static public System.Base64FormattingOptions InsertLineBreaks
    static void _set_InsertLineBreaks(System::Base64FormattingOptions value);
    // Creating value type constructor for type: Base64FormattingOptions
    Base64FormattingOptions(int value_ = {}) : value{value_} {}
  }; // System.Base64FormattingOptions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Base64FormattingOptions, "System", "Base64FormattingOptions");
#pragma pack(pop)
