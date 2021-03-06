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
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FadeInOnSceneTransitionFinished
  class FadeInOnSceneTransitionFinished : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FadeInOnSceneTransitionFinished::$FadeInAfterSceneTransitionCoroutine$d__3
    class $FadeInAfterSceneTransitionCoroutine$d__3;
    // private FadeInOutController _fadeInOut
    // Offset: 0x18
    GlobalNamespace::FadeInOutController* fadeInOut;
    // private GameScenesManager _gameScenesManager
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // protected System.Void OnEnable()
    // Offset: 0x1910F0C
    void OnEnable();
    // private System.Collections.IEnumerator FadeInAfterSceneTransitionCoroutine()
    // Offset: 0x1910F60
    System::Collections::IEnumerator* FadeInAfterSceneTransitionCoroutine();
    // public System.Void .ctor()
    // Offset: 0x1911008
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FadeInOnSceneTransitionFinished* New_ctor();
  }; // FadeInOnSceneTransitionFinished
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeInOnSceneTransitionFinished*, "", "FadeInOnSceneTransitionFinished");
#pragma pack(pop)
