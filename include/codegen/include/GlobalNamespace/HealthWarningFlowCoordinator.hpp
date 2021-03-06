// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: BoolSO
  class BoolSO;
  // Forward declaring type: EulaViewController
  class EulaViewController;
  // Forward declaring type: HealthWarningViewController
  class HealthWarningViewController;
  // Forward declaring type: PrivacyPolicyViewController
  class PrivacyPolicyViewController;
  // Forward declaring type: SimpleDialogPromptViewController
  class SimpleDialogPromptViewController;
  // Forward declaring type: OnlineServicesViewController
  class OnlineServicesViewController;
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HealthWarningFlowCoordinator
  class HealthWarningFlowCoordinator : public HMUI::FlowCoordinator {
    public:
    // Nested type: GlobalNamespace::HealthWarningFlowCoordinator::InitData
    class InitData;
    // private PlayerDataModel _playerDataModel
    // Offset: 0xA8
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // private BoolSO _onlineServicesEnabled
    // Offset: 0xB0
    GlobalNamespace::BoolSO* onlineServicesEnabled;
    // private EulaViewController _eulaViewController
    // Offset: 0xB8
    GlobalNamespace::EulaViewController* eulaViewController;
    // private HealthWarningViewController _healthWarningViewContoller
    // Offset: 0xC0
    GlobalNamespace::HealthWarningViewController* healthWarningViewContoller;
    // private PrivacyPolicyViewController _privacyPolicyViewController
    // Offset: 0xC8
    GlobalNamespace::PrivacyPolicyViewController* privacyPolicyViewController;
    // private SimpleDialogPromptViewController _simpleDialogPromptViewController
    // Offset: 0xD0
    GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewController;
    // private OnlineServicesViewController _onlineServicesViewController
    // Offset: 0xD8
    GlobalNamespace::OnlineServicesViewController* onlineServicesViewController;
    // private FadeInOutController _fadeInOut
    // Offset: 0xE0
    GlobalNamespace::FadeInOutController* fadeInOut;
    // private GameScenesManager _gameScenesManager
    // Offset: 0xE8
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // private HealthWarningFlowCoordinator/InitData _initData
    // Offset: 0xF0
    GlobalNamespace::HealthWarningFlowCoordinator::InitData* initData;
    // private System.Collections.Generic.Dictionary`2<HMUI.ViewController,System.String> _viewControllerTitles
    // Offset: 0xF8
    System::Collections::Generic::Dictionary_2<HMUI::ViewController*, ::Il2CppString*>* viewControllerTitles;
    // protected System.Void Update()
    // Offset: 0xB44270
    void Update();
    // private System.Void HandleEulaViewControllerdidFinish(System.Boolean agreed)
    // Offset: 0xB442B0
    void HandleEulaViewControllerdidFinish(bool agreed);
    // private System.Void HandleHealthWarningViewControllerPrivacyPolicyButtonPressed()
    // Offset: 0xB44324
    void HandleHealthWarningViewControllerPrivacyPolicyButtonPressed();
    // private System.Void HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed()
    // Offset: 0xB44338
    void HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed();
    // private System.Void HandleHealthWarningViewControllerdidFinish()
    // Offset: 0xB442AC
    void HandleHealthWarningViewControllerdidFinish();
    // private System.Void HandleOnlineServicesViewControllerDidFinish(System.Boolean value)
    // Offset: 0xB44444
    void HandleOnlineServicesViewControllerDidFinish(bool value);
    // private System.Void GoToNextScene()
    // Offset: 0xB44408
    void GoToNextScene();
    // private System.Void <HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed>b__18_0(System.Int32 button)
    // Offset: 0xB44564
    void $HandleHealthWarningViewControllerOpenDataPrivacyPolicyButtonPressed$b__18_0(int button);
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.FlowCoordinator/ActivationType activationType)
    // Offset: 0xB43920
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, HMUI.FlowCoordinator/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::FlowCoordinator::ActivationType activationType);
    // protected override System.Void DidDeactivate(HMUI.FlowCoordinator/DeactivationType deactivationType)
    // Offset: 0xB43E1C
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(HMUI.FlowCoordinator/DeactivationType deactivationType)
    void DidDeactivate(HMUI::FlowCoordinator::DeactivationType deactivationType);
    // protected override System.Void TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, System.Boolean immediately)
    // Offset: 0xB441AC
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, System.Boolean immediately)
    void TopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, bool immediately);
    // protected override System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0xB444B4
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::BackButtonWasPressed(HMUI.ViewController topViewController)
    void BackButtonWasPressed(HMUI::ViewController* topViewController);
    // public System.Void .ctor()
    // Offset: 0xB4455C
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HealthWarningFlowCoordinator* New_ctor();
  }; // HealthWarningFlowCoordinator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningFlowCoordinator*, "", "HealthWarningFlowCoordinator");
#pragma pack(pop)
