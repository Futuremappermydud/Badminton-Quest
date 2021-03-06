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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CoreGameHUDController
  class CoreGameHUDController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::CoreGameHUDController::InitData
    class InitData;
    // private UnityEngine.GameObject _songProgressPanelGO
    // Offset: 0x18
    UnityEngine::GameObject* songProgressPanelGO;
    // private UnityEngine.GameObject _relativeScoreGO
    // Offset: 0x20
    UnityEngine::GameObject* relativeScoreGO;
    // private UnityEngine.GameObject _immediateRankGO
    // Offset: 0x28
    UnityEngine::GameObject* immediateRankGO;
    // private UnityEngine.GameObject _energyPanelGO
    // Offset: 0x30
    UnityEngine::GameObject* energyPanelGO;
    // private CoreGameHUDController/InitData _initData
    // Offset: 0x38
    GlobalNamespace::CoreGameHUDController::InitData* initData;
    // protected System.Void Start()
    // Offset: 0xBE2C18
    void Start();
    // public System.Void .ctor()
    // Offset: 0xBE2CA4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CoreGameHUDController* New_ctor();
  }; // CoreGameHUDController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CoreGameHUDController*, "", "CoreGameHUDController");
#pragma pack(pop)
