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
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DisableComponentOnNonSteam
  class DisableComponentOnNonSteam : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.MonoBehaviour _component
    // Offset: 0x18
    UnityEngine::MonoBehaviour* component;
    // private System.Void Awake()
    // Offset: 0xBE8330
    void Awake();
    // public System.Void .ctor()
    // Offset: 0xBE8350
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DisableComponentOnNonSteam* New_ctor();
  }; // DisableComponentOnNonSteam
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableComponentOnNonSteam*, "", "DisableComponentOnNonSteam");
#pragma pack(pop)
