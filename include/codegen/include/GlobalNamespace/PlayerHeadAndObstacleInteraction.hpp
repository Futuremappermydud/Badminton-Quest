// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerController
  class PlayerController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction : public UnityEngine::MonoBehaviour {
    public:
    // private ObstacleController/Pool _obstaclePool
    // Offset: 0x18
    GlobalNamespace::ObstacleController::Pool* obstaclePool;
    // private PlayerController _playerController
    // Offset: 0x20
    GlobalNamespace::PlayerController* playerController;
    // private System.Int32 _lastFrameNumCheck
    // Offset: 0x28
    int lastFrameNumCheck;
    // private System.Collections.Generic.List`1<ObstacleController> _intersectingObstacles
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* intersectingObstacles;
    // public UnityEngine.Vector3 get_headPos()
    // Offset: 0xBDE510
    UnityEngine::Vector3 get_headPos();
    // public System.Collections.Generic.List`1<ObstacleController> get_intersectingObstacles()
    // Offset: 0xBDE530
    System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* get_intersectingObstacles();
    // public System.Void GetObstaclesCointainingPoint(UnityEngine.Vector3 worldPos, System.Collections.Generic.List`1<ObstacleController> obstacleControllers)
    // Offset: 0xBDE5A0
    void GetObstaclesCointainingPoint(UnityEngine::Vector3 worldPos, System::Collections::Generic::List_1<GlobalNamespace::ObstacleController*>* obstacleControllers);
    // public System.Void .ctor()
    // Offset: 0xBDE758
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlayerHeadAndObstacleInteraction* New_ctor();
  }; // PlayerHeadAndObstacleInteraction
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerHeadAndObstacleInteraction*, "", "PlayerHeadAndObstacleInteraction");
#pragma pack(pop)
