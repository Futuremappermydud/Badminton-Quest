// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LoadingControl
  class LoadingControl;
  // Forward declaring type: KawaseBlurRendererSO
  class KawaseBlurRendererSO;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: EventBinder
  class EventBinder;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LevelPackDetailViewController
  class LevelPackDetailViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::LevelPackDetailViewController::ContentType
    struct ContentType;
    // Nested type: GlobalNamespace::LevelPackDetailViewController::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    // Nested type: GlobalNamespace::LevelPackDetailViewController::$RefreshAvailabilityAsync$d__17
    struct $RefreshAvailabilityAsync$d__17;
    // Nested type: GlobalNamespace::LevelPackDetailViewController::$OpenLevelPackProductStoreAsync$d__18
    struct $OpenLevelPackProductStoreAsync$d__18;
    // private UnityEngine.GameObject _detailWrapper
    // Offset: 0x68
    UnityEngine::GameObject* detailWrapper;
    // private HMUI.ImageView _packImage
    // Offset: 0x70
    HMUI::ImageView* packImage;
    // private UnityEngine.UI.Button _buyButton
    // Offset: 0x78
    UnityEngine::UI::Button* buyButton;
    // private UnityEngine.GameObject _buyContainer
    // Offset: 0x80
    UnityEngine::GameObject* buyContainer;
    // private LoadingControl _loadingControl
    // Offset: 0x88
    GlobalNamespace::LoadingControl* loadingControl;
    // private UnityEngine.GameObject _requireInternetContainer
    // Offset: 0x90
    UnityEngine::GameObject* requireInternetContainer;
    // private KawaseBlurRendererSO _kawaseBlurRenderer
    // Offset: 0x98
    GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer;
    // private AdditionalContentModel _additionalContentModel
    // Offset: 0xA0
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // private EventBinder _eventBinder
    // Offset: 0xA8
    GlobalNamespace::EventBinder* eventBinder;
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Offset: 0xB0
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // private IBeatmapLevelPack _pack
    // Offset: 0xB8
    GlobalNamespace::IBeatmapLevelPack* pack;
    // private UnityEngine.Sprite _blurredPackArtwork
    // Offset: 0xC0
    UnityEngine::Sprite* blurredPackArtwork;
    // public System.Void SetData(IBeatmapLevelPack pack)
    // Offset: 0xBF4AE8
    void SetData(GlobalNamespace::IBeatmapLevelPack* pack);
    // private System.Void RefreshAvailabilityAsync()
    // Offset: 0xBF4DC0
    void RefreshAvailabilityAsync();
    // private System.Void OpenLevelPackProductStoreAsync()
    // Offset: 0xBF5224
    void OpenLevelPackProductStoreAsync();
    // private System.Void ShowContent(LevelPackDetailViewController/ContentType contentType, System.String errorText)
    // Offset: 0xBF5300
    void ShowContent(GlobalNamespace::LevelPackDetailViewController::ContentType contentType, ::Il2CppString* errorText);
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0xBF5664
    void HandleAdditionalContentModelDidInvalidateData();
    // private System.Void <DidActivate>b__14_0()
    // Offset: 0xBF56DC
    void $DidActivate$b__14_0();
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xBF4E9C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // protected override System.Void DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    // Offset: 0xBF505C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    void DidDeactivate(HMUI::ViewController::DeactivationType deactivationType);
    // protected override System.Void OnDestroy()
    // Offset: 0xBF5108
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0xBF5668
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LevelPackDetailViewController* New_ctor();
  }; // LevelPackDetailViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelPackDetailViewController*, "", "LevelPackDetailViewController");
#pragma pack(pop)
