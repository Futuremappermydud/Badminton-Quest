// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ObstacleSaberSparkleEffectManager
  class ObstacleSaberSparkleEffectManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ObstacleSaberSoundEffect
  class ObstacleSaberSoundEffect : public UnityEngine::MonoBehaviour {
    public:
    // private ObstacleSaberSparkleEffectManager _obstacleSaberSparkleEffectManager
    // Offset: 0x18
    GlobalNamespace::ObstacleSaberSparkleEffectManager* obstacleSaberSparkleEffectManager;
    // private SaberType _saberType
    // Offset: 0x20
    GlobalNamespace::SaberType saberType;
    // private UnityEngine.AudioSource _audioSource
    // Offset: 0x28
    UnityEngine::AudioSource* audioSource;
    // private System.Single _volume
    // Offset: 0x30
    float volume;
    // private System.Single _targetVolume
    // Offset: 0x34
    float targetVolume;
    // static field const value: static private System.Single kSmooth
    static constexpr const float kSmooth = 8;
    // Get static field: static private System.Single kSmooth
    static float _get_kSmooth();
    // Set static field: static private System.Single kSmooth
    static void _set_kSmooth(float value);
    // protected System.Void Awake()
    // Offset: 0xC34508
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xC34744
    void OnDestroy();
    // protected System.Void LateUpdate()
    // Offset: 0xC349A8
    void LateUpdate();
    // private System.Void HandleSparkleEffectDidStart(SaberType saberType)
    // Offset: 0xC34B84
    void HandleSparkleEffectDidStart(GlobalNamespace::SaberType saberType);
    // private System.Void HandleSparkleEffecDidEnd(SaberType saberType)
    // Offset: 0xC34CBC
    void HandleSparkleEffecDidEnd(GlobalNamespace::SaberType saberType);
    // public System.Void .ctor()
    // Offset: 0xC34CD0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ObstacleSaberSoundEffect* New_ctor();
  }; // ObstacleSaberSoundEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleSaberSoundEffect*, "", "ObstacleSaberSoundEffect");
#pragma pack(pop)
