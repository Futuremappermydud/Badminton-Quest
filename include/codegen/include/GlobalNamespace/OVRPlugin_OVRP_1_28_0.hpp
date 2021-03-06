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
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/OVRP_1_28_0
  class OVRPlugin::OVRP_1_28_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_GetDominantHand(OVRPlugin/Handedness dominantHand)
    // Offset: 0xF46EFC
    static GlobalNamespace::OVRPlugin::Result ovrp_GetDominantHand(GlobalNamespace::OVRPlugin::Handedness& dominantHand);
    // static public OVRPlugin/Result ovrp_GetReorientHMDOnControllerRecenter(OVRPlugin/Bool recenter)
    // Offset: 0xF46F7C
    static GlobalNamespace::OVRPlugin::Result ovrp_GetReorientHMDOnControllerRecenter(GlobalNamespace::OVRPlugin::Bool& recenter);
    // static public OVRPlugin/Result ovrp_SetReorientHMDOnControllerRecenter(OVRPlugin/Bool recenter)
    // Offset: 0xF46FFC
    static GlobalNamespace::OVRPlugin::Result ovrp_SetReorientHMDOnControllerRecenter(GlobalNamespace::OVRPlugin::Bool recenter);
    // static public OVRPlugin/Result ovrp_SendEvent(System.String name, System.String param)
    // Offset: 0xF4707C
    static GlobalNamespace::OVRPlugin::Result ovrp_SendEvent(::Il2CppString* name, ::Il2CppString* param);
    // static public OVRPlugin/Result ovrp_EnqueueSetupLayer2(OVRPlugin/LayerDesc desc, System.Int32 compositionDepth, System.IntPtr layerId)
    // Offset: 0xF4713C
    static GlobalNamespace::OVRPlugin::Result ovrp_EnqueueSetupLayer2(GlobalNamespace::OVRPlugin::LayerDesc& desc, int compositionDepth, System::IntPtr layerId);
    // static private System.Void .cctor()
    // Offset: 0xF47234
    static void _cctor();
  }; // OVRPlugin/OVRP_1_28_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_28_0*, "", "OVRPlugin/OVRP_1_28_0");
#pragma pack(pop)
