// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FlyingTextEffect
  class FlyingTextEffect;
  // Forward declaring type: FlyingScoreEffect
  class FlyingScoreEffect;
  // Forward declaring type: BeatEffect
  class BeatEffect;
  // Forward declaring type: NoteCutSoundEffect
  class NoteCutSoundEffect;
  // Forward declaring type: BombCutSoundEffect
  class BombCutSoundEffect;
  // Forward declaring type: FlyingSpriteEffect
  class FlyingSpriteEffect;
  // Forward declaring type: BoolSO
  class BoolSO;
  // Forward declaring type: NoteDebris
  class NoteDebris;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EffectPoolsInstaller
  class EffectPoolsInstaller : public UnityEngine::MonoBehaviour {
    public:
    // private FlyingTextEffect _flyingTextEffectPrefab
    // Offset: 0x18
    GlobalNamespace::FlyingTextEffect* flyingTextEffectPrefab;
    // private FlyingScoreEffect _flyingScoreEffectPrefab
    // Offset: 0x20
    GlobalNamespace::FlyingScoreEffect* flyingScoreEffectPrefab;
    // private BeatEffect _beatEffectPrefab
    // Offset: 0x28
    GlobalNamespace::BeatEffect* beatEffectPrefab;
    // private BeatEffect _shortBeatEffectPrefab
    // Offset: 0x30
    GlobalNamespace::BeatEffect* shortBeatEffectPrefab;
    // private NoteCutSoundEffect _noteCutSoundEffectPrefab
    // Offset: 0x38
    GlobalNamespace::NoteCutSoundEffect* noteCutSoundEffectPrefab;
    // private BombCutSoundEffect _bombCutSoundEffectPrefab
    // Offset: 0x40
    GlobalNamespace::BombCutSoundEffect* bombCutSoundEffectPrefab;
    // private FlyingSpriteEffect _flyingSpriteEffectPrefab
    // Offset: 0x48
    GlobalNamespace::FlyingSpriteEffect* flyingSpriteEffectPrefab;
    // private BoolSO _noteDebrisHDConditionVariable
    // Offset: 0x50
    GlobalNamespace::BoolSO* noteDebrisHDConditionVariable;
    // private NoteDebris _noteDebrisHDPrefab
    // Offset: 0x58
    GlobalNamespace::NoteDebris* noteDebrisHDPrefab;
    // private NoteDebris _noteDebrisLWPrefab
    // Offset: 0x60
    GlobalNamespace::NoteDebris* noteDebrisLWPrefab;
    // public System.Void ManualInstallBindings(Zenject.DiContainer container, System.Boolean shortBeatEffect)
    // Offset: 0xBE93BC
    void ManualInstallBindings(Zenject::DiContainer* container, bool shortBeatEffect);
    // public System.Void .ctor()
    // Offset: 0xBE95F4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EffectPoolsInstaller* New_ctor();
  }; // EffectPoolsInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EffectPoolsInstaller*, "", "EffectPoolsInstaller");
#pragma pack(pop)
