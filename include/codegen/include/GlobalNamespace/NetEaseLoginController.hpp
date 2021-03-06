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
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: NetEaseManager
  class NetEaseManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NetEaseLoginController
  class NetEaseLoginController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NetEaseLoginController::$Start$d__3
    class $Start$d__3;
    // Nested type: GlobalNamespace::NetEaseLoginController::$LoginAsync$d__4
    struct $LoginAsync$d__4;
    // private MenuScenesTransitionSetupDataSO _arcadeMenuTransitionSetupData
    // Offset: 0x18
    GlobalNamespace::MenuScenesTransitionSetupDataSO* arcadeMenuTransitionSetupData;
    // private GameScenesManager _gameScenesManager
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // private NetEaseManager _netEaseManager
    // Offset: 0x28
    GlobalNamespace::NetEaseManager* netEaseManager;
    // protected System.Collections.IEnumerator Start()
    // Offset: 0xC12D18
    System::Collections::IEnumerator* Start();
    // private System.Void LoginAsync()
    // Offset: 0xC12DC0
    void LoginAsync();
    // public System.Void .ctor()
    // Offset: 0xC12E9C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NetEaseLoginController* New_ctor();
  }; // NetEaseLoginController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseLoginController*, "", "NetEaseLoginController");
#pragma pack(pop)
