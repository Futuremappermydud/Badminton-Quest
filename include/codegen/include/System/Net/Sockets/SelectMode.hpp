// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:19 PM
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
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Autogenerated type: System.Net.Sockets.SelectMode
  struct SelectMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Net.Sockets.SelectMode SelectRead
    static constexpr const int SelectRead = 0;
    // Get static field: static public System.Net.Sockets.SelectMode SelectRead
    static System::Net::Sockets::SelectMode _get_SelectRead();
    // Set static field: static public System.Net.Sockets.SelectMode SelectRead
    static void _set_SelectRead(System::Net::Sockets::SelectMode value);
    // static field const value: static public System.Net.Sockets.SelectMode SelectWrite
    static constexpr const int SelectWrite = 1;
    // Get static field: static public System.Net.Sockets.SelectMode SelectWrite
    static System::Net::Sockets::SelectMode _get_SelectWrite();
    // Set static field: static public System.Net.Sockets.SelectMode SelectWrite
    static void _set_SelectWrite(System::Net::Sockets::SelectMode value);
    // static field const value: static public System.Net.Sockets.SelectMode SelectError
    static constexpr const int SelectError = 2;
    // Get static field: static public System.Net.Sockets.SelectMode SelectError
    static System::Net::Sockets::SelectMode _get_SelectError();
    // Set static field: static public System.Net.Sockets.SelectMode SelectError
    static void _set_SelectError(System::Net::Sockets::SelectMode value);
    // Creating value type constructor for type: SelectMode
    SelectMode(int value_ = {}) : value{value_} {}
  }; // System.Net.Sockets.SelectMode
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SelectMode, "System.Net.Sockets", "SelectMode");
#pragma pack(pop)
