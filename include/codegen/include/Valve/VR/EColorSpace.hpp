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
  // Autogenerated type: Valve.VR.EColorSpace
  struct EColorSpace : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.EColorSpace Auto
    static constexpr const int Auto = 0;
    // Get static field: static public Valve.VR.EColorSpace Auto
    static Valve::VR::EColorSpace _get_Auto();
    // Set static field: static public Valve.VR.EColorSpace Auto
    static void _set_Auto(Valve::VR::EColorSpace value);
    // static field const value: static public Valve.VR.EColorSpace Gamma
    static constexpr const int Gamma = 1;
    // Get static field: static public Valve.VR.EColorSpace Gamma
    static Valve::VR::EColorSpace _get_Gamma();
    // Set static field: static public Valve.VR.EColorSpace Gamma
    static void _set_Gamma(Valve::VR::EColorSpace value);
    // static field const value: static public Valve.VR.EColorSpace Linear
    static constexpr const int Linear = 2;
    // Get static field: static public Valve.VR.EColorSpace Linear
    static Valve::VR::EColorSpace _get_Linear();
    // Set static field: static public Valve.VR.EColorSpace Linear
    static void _set_Linear(Valve::VR::EColorSpace value);
    // Creating value type constructor for type: EColorSpace
    EColorSpace(int value_ = {}) : value{value_} {}
  }; // Valve.VR.EColorSpace
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EColorSpace, "Valve.VR", "EColorSpace");
#pragma pack(pop)
