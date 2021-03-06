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
  // Forward declaring type: FireworksController
  class FireworksController;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
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
  // Autogenerated type: ResultsViewController
  class ResultsViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::ResultsViewController::$StartFireworksAfterDelay$d__32
    class $StartFireworksAfterDelay$d__32;
    // private UnityEngine.UI.Button _restartButton
    // Offset: 0x68
    UnityEngine::UI::Button* restartButton;
    // private UnityEngine.UI.Button _continueButton
    // Offset: 0x70
    UnityEngine::UI::Button* continueButton;
    // private UnityEngine.GameObject _failedPanel
    // Offset: 0x78
    UnityEngine::GameObject* failedPanel;
    // private UnityEngine.GameObject _clearedPanel
    // Offset: 0x80
    UnityEngine::GameObject* clearedPanel;
    // private TMPro.TextMeshProUGUI _scoreText
    // Offset: 0x88
    TMPro::TextMeshProUGUI* scoreText;
    // private UnityEngine.GameObject _newHighScoreText
    // Offset: 0x90
    UnityEngine::GameObject* newHighScoreText;
    // private TMPro.TextMeshProUGUI _rankText
    // Offset: 0x98
    TMPro::TextMeshProUGUI* rankText;
    // private TMPro.TextMeshProUGUI _goodCutsPercentageText
    // Offset: 0xA0
    TMPro::TextMeshProUGUI* goodCutsPercentageText;
    // private TMPro.TextMeshProUGUI _comboText
    // Offset: 0xA8
    TMPro::TextMeshProUGUI* comboText;
    // private TMPro.TextMeshProUGUI _clearedSongNameText
    // Offset: 0xB0
    TMPro::TextMeshProUGUI* clearedSongNameText;
    // private TMPro.TextMeshProUGUI _clearedDifficultyText
    // Offset: 0xB8
    TMPro::TextMeshProUGUI* clearedDifficultyText;
    // private TMPro.TextMeshProUGUI _failedSongNameText
    // Offset: 0xC0
    TMPro::TextMeshProUGUI* failedSongNameText;
    // private TMPro.TextMeshProUGUI _failedDifficultyText
    // Offset: 0xC8
    TMPro::TextMeshProUGUI* failedDifficultyText;
    // private UnityEngine.AudioClip _levelClearedAudioClip
    // Offset: 0xD0
    UnityEngine::AudioClip* levelClearedAudioClip;
    // private FireworksController _fireworksController
    // Offset: 0xD8
    GlobalNamespace::FireworksController* fireworksController;
    // private SongPreviewPlayer _songPreviewPlayer
    // Offset: 0xE0
    GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // private System.Action`1<ResultsViewController> continueButtonPressedEvent
    // Offset: 0xE8
    System::Action_1<GlobalNamespace::ResultsViewController*>* continueButtonPressedEvent;
    // private System.Action`1<ResultsViewController> restartButtonPressedEvent
    // Offset: 0xF0
    System::Action_1<GlobalNamespace::ResultsViewController*>* restartButtonPressedEvent;
    // private LevelCompletionResults _levelCompletionResults
    // Offset: 0xF8
    GlobalNamespace::LevelCompletionResults* levelCompletionResults;
    // private IDifficultyBeatmap _difficultyBeatmap
    // Offset: 0x100
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // private UnityEngine.Coroutine _startFireworksAfterDelayCoroutine
    // Offset: 0x108
    UnityEngine::Coroutine* startFireworksAfterDelayCoroutine;
    // private System.Boolean _newHighScore
    // Offset: 0x110
    bool newHighScore;
    // private System.Boolean _practice
    // Offset: 0x111
    bool practice;
    // public System.Void add_continueButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0xC2108C
    void add_continueButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController*>* value);
    // public System.Void remove_continueButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0xC21130
    void remove_continueButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController*>* value);
    // public System.Void add_restartButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0xC211D4
    void add_restartButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController*>* value);
    // public System.Void remove_restartButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0xC21278
    void remove_restartButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController*>* value);
    // public System.Boolean get_practice()
    // Offset: 0xC2131C
    bool get_practice();
    // public System.Void Init(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, System.Boolean practice, System.Boolean newHighScore)
    // Offset: 0xC21324
    void Init(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice, bool newHighScore);
    // private System.Collections.IEnumerator StartFireworksAfterDelay(System.Single delay)
    // Offset: 0xC21AF0
    System::Collections::IEnumerator* StartFireworksAfterDelay(float delay);
    // private System.Void SetDataToUI()
    // Offset: 0xC21510
    void SetDataToUI();
    // private System.Void ContinueButtonPressed()
    // Offset: 0xC21CEC
    void ContinueButtonPressed();
    // private System.Void RestartButtonPressed()
    // Offset: 0xC21D50
    void RestartButtonPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xC21380
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // protected override System.Void DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    // Offset: 0xC21B7C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(HMUI.ViewController/DeactivationType deactivationType)
    void DidDeactivate(HMUI::ViewController::DeactivationType deactivationType);
    // public System.Void .ctor()
    // Offset: 0xC21DB4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ResultsViewController* New_ctor();
  }; // ResultsViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultsViewController*, "", "ResultsViewController");
#pragma pack(pop)
