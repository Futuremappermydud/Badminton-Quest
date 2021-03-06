// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:53 PM
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
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.DebuggerBrowsableState
  struct DebuggerBrowsableState : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Diagnostics.DebuggerBrowsableState Never
    static constexpr const int Never = 0;
    // Get static field: static public System.Diagnostics.DebuggerBrowsableState Never
    static System::Diagnostics::DebuggerBrowsableState _get_Never();
    // Set static field: static public System.Diagnostics.DebuggerBrowsableState Never
    static void _set_Never(System::Diagnostics::DebuggerBrowsableState value);
    // static field const value: static public System.Diagnostics.DebuggerBrowsableState Collapsed
    static constexpr const int Collapsed = 2;
    // Get static field: static public System.Diagnostics.DebuggerBrowsableState Collapsed
    static System::Diagnostics::DebuggerBrowsableState _get_Collapsed();
    // Set static field: static public System.Diagnostics.DebuggerBrowsableState Collapsed
    static void _set_Collapsed(System::Diagnostics::DebuggerBrowsableState value);
    // static field const value: static public System.Diagnostics.DebuggerBrowsableState RootHidden
    static constexpr const int RootHidden = 3;
    // Get static field: static public System.Diagnostics.DebuggerBrowsableState RootHidden
    static System::Diagnostics::DebuggerBrowsableState _get_RootHidden();
    // Set static field: static public System.Diagnostics.DebuggerBrowsableState RootHidden
    static void _set_RootHidden(System::Diagnostics::DebuggerBrowsableState value);
    // Creating value type constructor for type: DebuggerBrowsableState
    DebuggerBrowsableState(int value_ = {}) : value{value_} {}
  }; // System.Diagnostics.DebuggerBrowsableState
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggerBrowsableState, "System.Diagnostics", "DebuggerBrowsableState");
#pragma pack(pop)
