// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ResetPlayerPrefsOnButton
  class ResetPlayerPrefsOnButton : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.KeyCode _keyCode
    // Offset: 0x18
    UnityEngine::KeyCode keyCode;
    // private System.Void Update()
    // Offset: 0xCBB930
    void Update();
    // public System.Void .ctor()
    // Offset: 0xCBB95C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ResetPlayerPrefsOnButton* New_ctor();
  }; // ResetPlayerPrefsOnButton
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResetPlayerPrefsOnButton*, "", "ResetPlayerPrefsOnButton");
#pragma pack(pop)
