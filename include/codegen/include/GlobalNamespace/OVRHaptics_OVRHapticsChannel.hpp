// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRHaptics
#include "GlobalNamespace/OVRHaptics.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRHapticsClip
  class OVRHapticsClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRHaptics/OVRHapticsChannel
  class OVRHaptics::OVRHapticsChannel : public ::Il2CppObject {
    public:
    // private OVRHaptics/OVRHapticsOutput m_output
    // Offset: 0x10
    GlobalNamespace::OVRHaptics::OVRHapticsOutput* m_output;
    // public System.Void .ctor(System.UInt32 outputIndex)
    // Offset: 0xE6E1B0
    static OVRHaptics::OVRHapticsChannel* New_ctor(uint outputIndex);
    // public System.Void Preempt(OVRHapticsClip clip)
    // Offset: 0xE6F22C
    void Preempt(GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Queue(OVRHapticsClip clip)
    // Offset: 0xE6F2F4
    void Queue(GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Mix(OVRHapticsClip clip)
    // Offset: 0xE6F3A4
    void Mix(GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Clear()
    // Offset: 0xE6F8A4
    void Clear();
  }; // OVRHaptics/OVRHapticsChannel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHaptics::OVRHapticsChannel*, "", "OVRHaptics/OVRHapticsChannel");
#pragma pack(pop)
