// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AutomaticSFXVolumeParamsSO
  class AutomaticSFXVolumeParamsSO : public UnityEngine::ScriptableObject {
    public:
    // private System.Single _musicVolumeMultiplier
    // Offset: 0x18
    float musicVolumeMultiplier;
    // private System.Single _threshold
    // Offset: 0x1C
    float threshold;
    // private System.Single _impact
    // Offset: 0x20
    float impact;
    // private System.Single _attackTime
    // Offset: 0x24
    float attackTime;
    // private System.Single _releaseTime
    // Offset: 0x28
    float releaseTime;
    // private System.Single _minVolume
    // Offset: 0x2C
    float minVolume;
    // private System.Single _maxVolume
    // Offset: 0x30
    float maxVolume;
    // private System.Single _volumeSmooth
    // Offset: 0x34
    float volumeSmooth;
    // public System.Single get_musicVolumeMultiplier()
    // Offset: 0xB8B618
    float get_musicVolumeMultiplier();
    // public System.Single get_threshold()
    // Offset: 0xB8B620
    float get_threshold();
    // public System.Single get_impact()
    // Offset: 0xB8B628
    float get_impact();
    // public System.Single get_attackTime()
    // Offset: 0xB8B630
    float get_attackTime();
    // public System.Single get_releaseTime()
    // Offset: 0xB8B638
    float get_releaseTime();
    // public System.Single get_minVolume()
    // Offset: 0xB8B640
    float get_minVolume();
    // public System.Single get_maxVolume()
    // Offset: 0xB8B648
    float get_maxVolume();
    // public System.Single get_volumeSmooth()
    // Offset: 0xB8B650
    float get_volumeSmooth();
    // public System.Void .ctor()
    // Offset: 0xB8B658
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AutomaticSFXVolumeParamsSO* New_ctor();
  }; // AutomaticSFXVolumeParamsSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AutomaticSFXVolumeParamsSO*, "", "AutomaticSFXVolumeParamsSO");
#pragma pack(pop)
