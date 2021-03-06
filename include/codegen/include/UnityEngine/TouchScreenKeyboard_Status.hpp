// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: UnityEngine.TouchScreenKeyboard
#include "UnityEngine/TouchScreenKeyboard.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.TouchScreenKeyboard/Status
  struct TouchScreenKeyboard::Status : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.TouchScreenKeyboard/Status Visible
    static constexpr const int Visible = 0;
    // Get static field: static public UnityEngine.TouchScreenKeyboard/Status Visible
    static UnityEngine::TouchScreenKeyboard::Status _get_Visible();
    // Set static field: static public UnityEngine.TouchScreenKeyboard/Status Visible
    static void _set_Visible(UnityEngine::TouchScreenKeyboard::Status value);
    // static field const value: static public UnityEngine.TouchScreenKeyboard/Status Done
    static constexpr const int Done = 1;
    // Get static field: static public UnityEngine.TouchScreenKeyboard/Status Done
    static UnityEngine::TouchScreenKeyboard::Status _get_Done();
    // Set static field: static public UnityEngine.TouchScreenKeyboard/Status Done
    static void _set_Done(UnityEngine::TouchScreenKeyboard::Status value);
    // static field const value: static public UnityEngine.TouchScreenKeyboard/Status Canceled
    static constexpr const int Canceled = 2;
    // Get static field: static public UnityEngine.TouchScreenKeyboard/Status Canceled
    static UnityEngine::TouchScreenKeyboard::Status _get_Canceled();
    // Set static field: static public UnityEngine.TouchScreenKeyboard/Status Canceled
    static void _set_Canceled(UnityEngine::TouchScreenKeyboard::Status value);
    // static field const value: static public UnityEngine.TouchScreenKeyboard/Status LostFocus
    static constexpr const int LostFocus = 3;
    // Get static field: static public UnityEngine.TouchScreenKeyboard/Status LostFocus
    static UnityEngine::TouchScreenKeyboard::Status _get_LostFocus();
    // Set static field: static public UnityEngine.TouchScreenKeyboard/Status LostFocus
    static void _set_LostFocus(UnityEngine::TouchScreenKeyboard::Status value);
    // Creating value type constructor for type: Status
    Status(int value_ = {}) : value{value_} {}
  }; // UnityEngine.TouchScreenKeyboard/Status
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TouchScreenKeyboard::Status, "UnityEngine", "TouchScreenKeyboard/Status");
#pragma pack(pop)
