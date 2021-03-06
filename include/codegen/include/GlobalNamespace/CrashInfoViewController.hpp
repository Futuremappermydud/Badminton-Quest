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
  // Forward declaring type: CrashManagerSO
  class CrashManagerSO;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CrashInfoViewController
  class CrashInfoViewController : public UnityEngine::MonoBehaviour {
    public:
    // private CrashManagerSO _crashManager
    // Offset: 0x18
    GlobalNamespace::CrashManagerSO* crashManager;
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x20
    TMPro::TextMeshProUGUI* text;
    // protected System.Void Start()
    // Offset: 0xBE2CF0
    void Start();
    // public System.Void .ctor()
    // Offset: 0xBE2D68
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CrashInfoViewController* New_ctor();
  }; // CrashInfoViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CrashInfoViewController*, "", "CrashInfoViewController");
#pragma pack(pop)
