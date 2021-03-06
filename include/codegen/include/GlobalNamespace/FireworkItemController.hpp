// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: RandomObjectPicker`1<T>
  template<typename T>
  class RandomObjectPicker_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FireworkItemController
  class FireworkItemController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FireworkItemController::Pool
    class Pool;
    // Nested type: GlobalNamespace::FireworkItemController::$FireCoroutine$d__16
    class $FireCoroutine$d__16;
    // private TubeBloomPrePassLight[] _lights
    // Offset: 0x18
    ::Array<GlobalNamespace::TubeBloomPrePassLight*>* lights;
    // private UnityEngine.ParticleSystem _particleSystem
    // Offset: 0x20
    UnityEngine::ParticleSystem* particleSystem;
    // private UnityEngine.AudioSource _audioSource
    // Offset: 0x28
    UnityEngine::AudioSource* audioSource;
    // private System.Int32 _numberOfParticles
    // Offset: 0x30
    int numberOfParticles;
    // private System.Single _lightFlashDuration
    // Offset: 0x34
    float lightFlashDuration;
    // private UnityEngine.AnimationCurve _lightIntensityCurve
    // Offset: 0x38
    UnityEngine::AnimationCurve* lightIntensityCurve;
    // private UnityEngine.Color _lightsColor
    // Offset: 0x40
    UnityEngine::Color lightsColor;
    // private UnityEngine.AudioClip[] _explosionClips
    // Offset: 0x50
    ::Array<UnityEngine::AudioClip*>* explosionClips;
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _randomAudioPicker
    // Offset: 0x58
    GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomAudioPicker;
    // private System.Action`1<FireworkItemController> didFinishEvent
    // Offset: 0x60
    System::Action_1<GlobalNamespace::FireworkItemController*>* didFinishEvent;
    // public System.Void add_didFinishEvent(System.Action`1<FireworkItemController> value)
    // Offset: 0xBEE0B4
    void add_didFinishEvent(System::Action_1<GlobalNamespace::FireworkItemController*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<FireworkItemController> value)
    // Offset: 0xBEE158
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::FireworkItemController*>* value);
    // protected System.Void Awake()
    // Offset: 0xBEE1FC
    void Awake();
    // protected System.Void OnDisable()
    // Offset: 0xBEE284
    void OnDisable();
    // public System.Void Fire()
    // Offset: 0xBEE3C0
    void Fire();
    // private System.Collections.IEnumerator FireCoroutine()
    // Offset: 0xBEE3EC
    System::Collections::IEnumerator* FireCoroutine();
    // private System.Void SetLightsColor(System.Single intensity)
    // Offset: 0xBEE308
    void SetLightsColor(float intensity);
    // private System.Void PlayExplosionSound()
    // Offset: 0xBEE494
    void PlayExplosionSound();
    // public System.Void .ctor()
    // Offset: 0xBEE580
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FireworkItemController* New_ctor();
  }; // FireworkItemController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireworkItemController*, "", "FireworkItemController");
#pragma pack(pop)
