// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:16 PM
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
  // Autogenerated type: Valve.VR.EVRCompositorTimingMode
  struct EVRCompositorTimingMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.EVRCompositorTimingMode Implicit
    static constexpr const int Implicit = 0;
    // Get static field: static public Valve.VR.EVRCompositorTimingMode Implicit
    static Valve::VR::EVRCompositorTimingMode _get_Implicit();
    // Set static field: static public Valve.VR.EVRCompositorTimingMode Implicit
    static void _set_Implicit(Valve::VR::EVRCompositorTimingMode value);
    // static field const value: static public Valve.VR.EVRCompositorTimingMode Explicit_RuntimePerformsPostPresentHandoff
    static constexpr const int Explicit_RuntimePerformsPostPresentHandoff = 1;
    // Get static field: static public Valve.VR.EVRCompositorTimingMode Explicit_RuntimePerformsPostPresentHandoff
    static Valve::VR::EVRCompositorTimingMode _get_Explicit_RuntimePerformsPostPresentHandoff();
    // Set static field: static public Valve.VR.EVRCompositorTimingMode Explicit_RuntimePerformsPostPresentHandoff
    static void _set_Explicit_RuntimePerformsPostPresentHandoff(Valve::VR::EVRCompositorTimingMode value);
    // static field const value: static public Valve.VR.EVRCompositorTimingMode Explicit_ApplicationPerformsPostPresentHandoff
    static constexpr const int Explicit_ApplicationPerformsPostPresentHandoff = 2;
    // Get static field: static public Valve.VR.EVRCompositorTimingMode Explicit_ApplicationPerformsPostPresentHandoff
    static Valve::VR::EVRCompositorTimingMode _get_Explicit_ApplicationPerformsPostPresentHandoff();
    // Set static field: static public Valve.VR.EVRCompositorTimingMode Explicit_ApplicationPerformsPostPresentHandoff
    static void _set_Explicit_ApplicationPerformsPostPresentHandoff(Valve::VR::EVRCompositorTimingMode value);
    // Creating value type constructor for type: EVRCompositorTimingMode
    EVRCompositorTimingMode(int value_ = {}) : value{value_} {}
  }; // Valve.VR.EVRCompositorTimingMode
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRCompositorTimingMode, "Valve.VR", "EVRCompositorTimingMode");
#pragma pack(pop)
