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
  // Autogenerated type: Valve.VR.EVRComponentProperty
  struct EVRComponentProperty : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.EVRComponentProperty IsStatic
    static constexpr const int IsStatic = 1;
    // Get static field: static public Valve.VR.EVRComponentProperty IsStatic
    static Valve::VR::EVRComponentProperty _get_IsStatic();
    // Set static field: static public Valve.VR.EVRComponentProperty IsStatic
    static void _set_IsStatic(Valve::VR::EVRComponentProperty value);
    // static field const value: static public Valve.VR.EVRComponentProperty IsVisible
    static constexpr const int IsVisible = 2;
    // Get static field: static public Valve.VR.EVRComponentProperty IsVisible
    static Valve::VR::EVRComponentProperty _get_IsVisible();
    // Set static field: static public Valve.VR.EVRComponentProperty IsVisible
    static void _set_IsVisible(Valve::VR::EVRComponentProperty value);
    // static field const value: static public Valve.VR.EVRComponentProperty IsTouched
    static constexpr const int IsTouched = 4;
    // Get static field: static public Valve.VR.EVRComponentProperty IsTouched
    static Valve::VR::EVRComponentProperty _get_IsTouched();
    // Set static field: static public Valve.VR.EVRComponentProperty IsTouched
    static void _set_IsTouched(Valve::VR::EVRComponentProperty value);
    // static field const value: static public Valve.VR.EVRComponentProperty IsPressed
    static constexpr const int IsPressed = 8;
    // Get static field: static public Valve.VR.EVRComponentProperty IsPressed
    static Valve::VR::EVRComponentProperty _get_IsPressed();
    // Set static field: static public Valve.VR.EVRComponentProperty IsPressed
    static void _set_IsPressed(Valve::VR::EVRComponentProperty value);
    // static field const value: static public Valve.VR.EVRComponentProperty IsScrolled
    static constexpr const int IsScrolled = 16;
    // Get static field: static public Valve.VR.EVRComponentProperty IsScrolled
    static Valve::VR::EVRComponentProperty _get_IsScrolled();
    // Set static field: static public Valve.VR.EVRComponentProperty IsScrolled
    static void _set_IsScrolled(Valve::VR::EVRComponentProperty value);
    // Creating value type constructor for type: EVRComponentProperty
    EVRComponentProperty(int value_ = {}) : value{value_} {}
  }; // Valve.VR.EVRComponentProperty
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRComponentProperty, "Valve.VR", "EVRComponentProperty");
#pragma pack(pop)
