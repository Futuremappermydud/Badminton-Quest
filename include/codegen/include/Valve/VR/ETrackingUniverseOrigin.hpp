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
  // Autogenerated type: Valve.VR.ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseSeated
    static constexpr const int TrackingUniverseSeated = 0;
    // Get static field: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseSeated
    static Valve::VR::ETrackingUniverseOrigin _get_TrackingUniverseSeated();
    // Set static field: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseSeated
    static void _set_TrackingUniverseSeated(Valve::VR::ETrackingUniverseOrigin value);
    // static field const value: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseStanding
    static constexpr const int TrackingUniverseStanding = 1;
    // Get static field: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseStanding
    static Valve::VR::ETrackingUniverseOrigin _get_TrackingUniverseStanding();
    // Set static field: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseStanding
    static void _set_TrackingUniverseStanding(Valve::VR::ETrackingUniverseOrigin value);
    // static field const value: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseRawAndUncalibrated
    static constexpr const int TrackingUniverseRawAndUncalibrated = 2;
    // Get static field: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseRawAndUncalibrated
    static Valve::VR::ETrackingUniverseOrigin _get_TrackingUniverseRawAndUncalibrated();
    // Set static field: static public Valve.VR.ETrackingUniverseOrigin TrackingUniverseRawAndUncalibrated
    static void _set_TrackingUniverseRawAndUncalibrated(Valve::VR::ETrackingUniverseOrigin value);
    // Creating value type constructor for type: ETrackingUniverseOrigin
    ETrackingUniverseOrigin(int value_ = {}) : value{value_} {}
  }; // Valve.VR.ETrackingUniverseOrigin
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::ETrackingUniverseOrigin, "Valve.VR", "ETrackingUniverseOrigin");
#pragma pack(pop)
