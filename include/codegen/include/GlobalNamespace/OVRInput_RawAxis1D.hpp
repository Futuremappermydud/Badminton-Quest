// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRInput/RawAxis1D
  struct OVRInput::RawAxis1D : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRInput/RawAxis1D None
    static constexpr const int None = 0;
    // Get static field: static public OVRInput/RawAxis1D None
    static GlobalNamespace::OVRInput::RawAxis1D _get_None();
    // Set static field: static public OVRInput/RawAxis1D None
    static void _set_None(GlobalNamespace::OVRInput::RawAxis1D value);
    // static field const value: static public OVRInput/RawAxis1D LIndexTrigger
    static constexpr const int LIndexTrigger = 1;
    // Get static field: static public OVRInput/RawAxis1D LIndexTrigger
    static GlobalNamespace::OVRInput::RawAxis1D _get_LIndexTrigger();
    // Set static field: static public OVRInput/RawAxis1D LIndexTrigger
    static void _set_LIndexTrigger(GlobalNamespace::OVRInput::RawAxis1D value);
    // static field const value: static public OVRInput/RawAxis1D LHandTrigger
    static constexpr const int LHandTrigger = 4;
    // Get static field: static public OVRInput/RawAxis1D LHandTrigger
    static GlobalNamespace::OVRInput::RawAxis1D _get_LHandTrigger();
    // Set static field: static public OVRInput/RawAxis1D LHandTrigger
    static void _set_LHandTrigger(GlobalNamespace::OVRInput::RawAxis1D value);
    // static field const value: static public OVRInput/RawAxis1D RIndexTrigger
    static constexpr const int RIndexTrigger = 2;
    // Get static field: static public OVRInput/RawAxis1D RIndexTrigger
    static GlobalNamespace::OVRInput::RawAxis1D _get_RIndexTrigger();
    // Set static field: static public OVRInput/RawAxis1D RIndexTrigger
    static void _set_RIndexTrigger(GlobalNamespace::OVRInput::RawAxis1D value);
    // static field const value: static public OVRInput/RawAxis1D RHandTrigger
    static constexpr const int RHandTrigger = 8;
    // Get static field: static public OVRInput/RawAxis1D RHandTrigger
    static GlobalNamespace::OVRInput::RawAxis1D _get_RHandTrigger();
    // Set static field: static public OVRInput/RawAxis1D RHandTrigger
    static void _set_RHandTrigger(GlobalNamespace::OVRInput::RawAxis1D value);
    // static field const value: static public OVRInput/RawAxis1D Any
    static constexpr const int Any = -1;
    // Get static field: static public OVRInput/RawAxis1D Any
    static GlobalNamespace::OVRInput::RawAxis1D _get_Any();
    // Set static field: static public OVRInput/RawAxis1D Any
    static void _set_Any(GlobalNamespace::OVRInput::RawAxis1D value);
    // Creating value type constructor for type: RawAxis1D
    RawAxis1D(int value_ = {}) : value{value_} {}
  }; // OVRInput/RawAxis1D
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::RawAxis1D, "", "OVRInput/RawAxis1D");
#pragma pack(pop)
