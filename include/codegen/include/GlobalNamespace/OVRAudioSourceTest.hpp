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
  // Autogenerated type: OVRAudioSourceTest
  class OVRAudioSourceTest : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single period
    // Offset: 0x18
    float period;
    // private System.Single nextActionTime
    // Offset: 0x1C
    float nextActionTime;
    // private System.Void Start()
    // Offset: 0xCC8380
    void Start();
    // private System.Void Update()
    // Offset: 0xCC8474
    void Update();
    // public System.Void .ctor()
    // Offset: 0xCC8638
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRAudioSourceTest* New_ctor();
  }; // OVRAudioSourceTest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRAudioSourceTest*, "", "OVRAudioSourceTest");
#pragma pack(pop)
