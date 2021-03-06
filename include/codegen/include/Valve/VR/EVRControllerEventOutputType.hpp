// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:15 PM
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.EVRControllerEventOutputType
  struct EVRControllerEventOutputType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.EVRControllerEventOutputType ControllerEventOutput_OSEvents
    static constexpr const int ControllerEventOutput_OSEvents = 0;
    // Get static field: static public Valve.VR.EVRControllerEventOutputType ControllerEventOutput_OSEvents
    static Valve::VR::EVRControllerEventOutputType _get_ControllerEventOutput_OSEvents();
    // Set static field: static public Valve.VR.EVRControllerEventOutputType ControllerEventOutput_OSEvents
    static void _set_ControllerEventOutput_OSEvents(Valve::VR::EVRControllerEventOutputType value);
    // static field const value: static public Valve.VR.EVRControllerEventOutputType ControllerEventOutput_VREvents
    static constexpr const int ControllerEventOutput_VREvents = 1;
    // Get static field: static public Valve.VR.EVRControllerEventOutputType ControllerEventOutput_VREvents
    static Valve::VR::EVRControllerEventOutputType _get_ControllerEventOutput_VREvents();
    // Set static field: static public Valve.VR.EVRControllerEventOutputType ControllerEventOutput_VREvents
    static void _set_ControllerEventOutput_VREvents(Valve::VR::EVRControllerEventOutputType value);
    // Creating value type constructor for type: EVRControllerEventOutputType
    EVRControllerEventOutputType(int value_ = {}) : value{value_} {}
  }; // Valve.VR.EVRControllerEventOutputType
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRControllerEventOutputType, "Valve.VR", "EVRControllerEventOutputType");
#pragma pack(pop)
