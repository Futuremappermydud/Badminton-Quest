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
  // Autogenerated type: System.ConsoleModifiers
  struct ConsoleModifiers : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.ConsoleModifiers Alt
    static constexpr const int Alt = 1;
    // Get static field: static public System.ConsoleModifiers Alt
    static System::ConsoleModifiers _get_Alt();
    // Set static field: static public System.ConsoleModifiers Alt
    static void _set_Alt(System::ConsoleModifiers value);
    // static field const value: static public System.ConsoleModifiers Shift
    static constexpr const int Shift = 2;
    // Get static field: static public System.ConsoleModifiers Shift
    static System::ConsoleModifiers _get_Shift();
    // Set static field: static public System.ConsoleModifiers Shift
    static void _set_Shift(System::ConsoleModifiers value);
    // static field const value: static public System.ConsoleModifiers Control
    static constexpr const int Control = 4;
    // Get static field: static public System.ConsoleModifiers Control
    static System::ConsoleModifiers _get_Control();
    // Set static field: static public System.ConsoleModifiers Control
    static void _set_Control(System::ConsoleModifiers value);
    // Creating value type constructor for type: ConsoleModifiers
    ConsoleModifiers(int value_ = {}) : value{value_} {}
  }; // System.ConsoleModifiers
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleModifiers, "System", "ConsoleModifiers");
#pragma pack(pop)
