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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IncDecSettingsController
  class IncDecSettingsController : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // private UnityEngine.UI.Button _decButton
    // Offset: 0x20
    UnityEngine::UI::Button* decButton;
    // private UnityEngine.UI.Button _incButton
    // Offset: 0x28
    UnityEngine::UI::Button* incButton;
    // protected System.Void set_enableDec(System.Boolean value)
    // Offset: 0xB45428
    void set_enableDec(bool value);
    // protected System.Void set_enableInc(System.Boolean value)
    // Offset: 0xB45448
    void set_enableInc(bool value);
    // protected System.Void set_text(System.String value)
    // Offset: 0xB45468
    void set_text(::Il2CppString* value);
    // protected System.Void OnEnable()
    // Offset: 0xB45484
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xB45554
    void OnDisable();
    // public System.Void IncButtonPressed()
    // Offset: 0xFFFFFFFF
    void IncButtonPressed();
    // public System.Void DecButtonPressed()
    // Offset: 0xFFFFFFFF
    void DecButtonPressed();
    // protected System.Void .ctor()
    // Offset: 0xB45624
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static IncDecSettingsController* New_ctor();
  }; // IncDecSettingsController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IncDecSettingsController*, "", "IncDecSettingsController");
#pragma pack(pop)
