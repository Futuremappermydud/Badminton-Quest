// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:21 PM
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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.HandleAxis
  struct HandleAxis : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.ProBuilder.HandleAxis X
    static constexpr const int X = 1;
    // Get static field: static public UnityEngine.ProBuilder.HandleAxis X
    static UnityEngine::ProBuilder::HandleAxis _get_X();
    // Set static field: static public UnityEngine.ProBuilder.HandleAxis X
    static void _set_X(UnityEngine::ProBuilder::HandleAxis value);
    // static field const value: static public UnityEngine.ProBuilder.HandleAxis Y
    static constexpr const int Y = 2;
    // Get static field: static public UnityEngine.ProBuilder.HandleAxis Y
    static UnityEngine::ProBuilder::HandleAxis _get_Y();
    // Set static field: static public UnityEngine.ProBuilder.HandleAxis Y
    static void _set_Y(UnityEngine::ProBuilder::HandleAxis value);
    // static field const value: static public UnityEngine.ProBuilder.HandleAxis Z
    static constexpr const int Z = 4;
    // Get static field: static public UnityEngine.ProBuilder.HandleAxis Z
    static UnityEngine::ProBuilder::HandleAxis _get_Z();
    // Set static field: static public UnityEngine.ProBuilder.HandleAxis Z
    static void _set_Z(UnityEngine::ProBuilder::HandleAxis value);
    // static field const value: static public UnityEngine.ProBuilder.HandleAxis Free
    static constexpr const int Free = 8;
    // Get static field: static public UnityEngine.ProBuilder.HandleAxis Free
    static UnityEngine::ProBuilder::HandleAxis _get_Free();
    // Set static field: static public UnityEngine.ProBuilder.HandleAxis Free
    static void _set_Free(UnityEngine::ProBuilder::HandleAxis value);
    // Creating value type constructor for type: HandleAxis
    HandleAxis(int value_ = {}) : value{value_} {}
  }; // UnityEngine.ProBuilder.HandleAxis
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::HandleAxis, "UnityEngine.ProBuilder", "HandleAxis");
#pragma pack(pop)
