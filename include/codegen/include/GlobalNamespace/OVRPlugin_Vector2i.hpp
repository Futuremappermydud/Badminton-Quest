// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Vector2i
  struct OVRPlugin::Vector2i : public System::ValueType {
    public:
    // public System.Int32 x
    // Offset: 0x0
    int x;
    // public System.Int32 y
    // Offset: 0x4
    int y;
    // Creating value type constructor for type: Vector2i
    Vector2i(int x_ = {}, int y_ = {}) : x{x_}, y{y_} {}
  }; // OVRPlugin/Vector2i
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Vector2i, "", "OVRPlugin/Vector2i");
#pragma pack(pop)
