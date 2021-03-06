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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScoreController
  class ScoreController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ComboUIController
  class ComboUIController : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _comboText
    // Offset: 0x18
    TMPro::TextMeshProUGUI* comboText;
    // private UnityEngine.Animator _animator
    // Offset: 0x20
    UnityEngine::Animator* animator;
    // private ScoreController _scoreController
    // Offset: 0x28
    GlobalNamespace::ScoreController* scoreController;
    // private System.Int32 _comboLostID
    // Offset: 0x30
    int comboLostID;
    // private System.Boolean _comboLost
    // Offset: 0x34
    bool comboLost;
    // protected System.Void Start()
    // Offset: 0xBE1B88
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0xBE1D98
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xBE1D9C
    void OnDisable();
    // private System.Void RegisterForEvents()
    // Offset: 0xBE1C04
    void RegisterForEvents();
    // private System.Void UnregisterFromEvents()
    // Offset: 0xBE1DA0
    void UnregisterFromEvents();
    // private System.Void HandleComboDidChange(System.Int32 combo)
    // Offset: 0xBE1EC0
    void HandleComboDidChange(int combo);
    // private System.Void HandleComboBreakingEventHappened()
    // Offset: 0xBE1F04
    void HandleComboBreakingEventHappened();
    // public System.Void .ctor()
    // Offset: 0xBE1F3C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ComboUIController* New_ctor();
  }; // ComboUIController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ComboUIController*, "", "ComboUIController");
#pragma pack(pop)
