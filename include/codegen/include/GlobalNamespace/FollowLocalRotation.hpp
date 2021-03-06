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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FollowLocalRotation
  class FollowLocalRotation : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Transform _target
    // Offset: 0x18
    UnityEngine::Transform* target;
    // private UnityEngine.Transform _transform
    // Offset: 0x20
    UnityEngine::Transform* transform;
    // protected System.Void Awake()
    // Offset: 0xCB26BC
    void Awake();
    // protected System.Void Update()
    // Offset: 0xCB26EC
    void Update();
    // public System.Void .ctor()
    // Offset: 0xCB272C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FollowLocalRotation* New_ctor();
  }; // FollowLocalRotation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FollowLocalRotation*, "", "FollowLocalRotation");
#pragma pack(pop)
