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
  // Forward declaring type: LocalLeaderboardsModel
  class LocalLeaderboardsModel;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PS4OnGoingToBackgroundSaveHandler
  class PS4OnGoingToBackgroundSaveHandler : public UnityEngine::MonoBehaviour {
    public:
    // private LocalLeaderboardsModel _localLeaderboardModel
    // Offset: 0x18
    GlobalNamespace::LocalLeaderboardsModel* localLeaderboardModel;
    // private MainSettingsModelSO _mainSettingsModel
    // Offset: 0x20
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // private PlayerDataModel _playerDataModel
    // Offset: 0x28
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // protected System.Void OnEnable()
    // Offset: 0xBD20CC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xBD21B4
    void OnDisable();
    // private System.Void HandlePS4HelperDidGoToBackgroundExecution()
    // Offset: 0xBD22AC
    void HandlePS4HelperDidGoToBackgroundExecution();
    // public System.Void .ctor()
    // Offset: 0xBD2314
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PS4OnGoingToBackgroundSaveHandler* New_ctor();
  }; // PS4OnGoingToBackgroundSaveHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*, "", "PS4OnGoingToBackgroundSaveHandler");
#pragma pack(pop)
