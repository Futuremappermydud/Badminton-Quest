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
  // Autogenerated type: Valve.VR.EVRScreenshotPropertyFilenames
  struct EVRScreenshotPropertyFilenames : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.EVRScreenshotPropertyFilenames Preview
    static constexpr const int Preview = 0;
    // Get static field: static public Valve.VR.EVRScreenshotPropertyFilenames Preview
    static Valve::VR::EVRScreenshotPropertyFilenames _get_Preview();
    // Set static field: static public Valve.VR.EVRScreenshotPropertyFilenames Preview
    static void _set_Preview(Valve::VR::EVRScreenshotPropertyFilenames value);
    // static field const value: static public Valve.VR.EVRScreenshotPropertyFilenames VR
    static constexpr const int VR = 1;
    // Get static field: static public Valve.VR.EVRScreenshotPropertyFilenames VR
    static Valve::VR::EVRScreenshotPropertyFilenames _get_VR();
    // Set static field: static public Valve.VR.EVRScreenshotPropertyFilenames VR
    static void _set_VR(Valve::VR::EVRScreenshotPropertyFilenames value);
    // Creating value type constructor for type: EVRScreenshotPropertyFilenames
    EVRScreenshotPropertyFilenames(int value_ = {}) : value{value_} {}
  }; // Valve.VR.EVRScreenshotPropertyFilenames
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRScreenshotPropertyFilenames, "Valve.VR", "EVRScreenshotPropertyFilenames");
#pragma pack(pop)
