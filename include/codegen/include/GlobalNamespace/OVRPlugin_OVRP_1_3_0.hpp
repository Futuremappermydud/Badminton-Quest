// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/OVRP_1_3_0
  class OVRPlugin::OVRP_1_3_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Bool ovrp_GetEyeOcclusionMeshEnabled()
    // Offset: 0xF48F48
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetEyeOcclusionMeshEnabled();
    // static public OVRPlugin/Bool ovrp_SetEyeOcclusionMeshEnabled(OVRPlugin/Bool value)
    // Offset: 0xF48FBC
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetEyeOcclusionMeshEnabled(GlobalNamespace::OVRPlugin::Bool value);
    // static public OVRPlugin/Bool ovrp_GetSystemHeadphonesPresent()
    // Offset: 0xF4903C
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetSystemHeadphonesPresent();
    // static private System.Void .cctor()
    // Offset: 0xF490B0
    static void _cctor();
  }; // OVRPlugin/OVRP_1_3_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_3_0*, "", "OVRPlugin/OVRP_1_3_0");
#pragma pack(pop)
