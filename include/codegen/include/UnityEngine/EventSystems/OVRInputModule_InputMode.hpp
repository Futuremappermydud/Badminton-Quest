// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:06 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: UnityEngine.EventSystems.OVRInputModule
#include "UnityEngine/EventSystems/OVRInputModule.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.OVRInputModule/InputMode
  struct OVRInputModule::InputMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.EventSystems.OVRInputModule/InputMode Mouse
    static constexpr const int Mouse = 0;
    // Get static field: static public UnityEngine.EventSystems.OVRInputModule/InputMode Mouse
    static UnityEngine::EventSystems::OVRInputModule::InputMode _get_Mouse();
    // Set static field: static public UnityEngine.EventSystems.OVRInputModule/InputMode Mouse
    static void _set_Mouse(UnityEngine::EventSystems::OVRInputModule::InputMode value);
    // static field const value: static public UnityEngine.EventSystems.OVRInputModule/InputMode Buttons
    static constexpr const int Buttons = 1;
    // Get static field: static public UnityEngine.EventSystems.OVRInputModule/InputMode Buttons
    static UnityEngine::EventSystems::OVRInputModule::InputMode _get_Buttons();
    // Set static field: static public UnityEngine.EventSystems.OVRInputModule/InputMode Buttons
    static void _set_Buttons(UnityEngine::EventSystems::OVRInputModule::InputMode value);
    // Creating value type constructor for type: InputMode
    InputMode(int value_ = {}) : value{value_} {}
  }; // UnityEngine.EventSystems.OVRInputModule/InputMode
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::OVRInputModule::InputMode, "UnityEngine.EventSystems", "OVRInputModule/InputMode");
#pragma pack(pop)
