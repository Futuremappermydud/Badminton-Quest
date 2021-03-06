// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: LookAtIK
  class LookAtIK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.LookAtController
  class LookAtController : public UnityEngine::MonoBehaviour {
    public:
    // public RootMotion.FinalIK.LookAtIK ik
    // Offset: 0x18
    RootMotion::FinalIK::LookAtIK* ik;
    // public UnityEngine.Transform target
    // Offset: 0x20
    UnityEngine::Transform* target;
    // public System.Single weight
    // Offset: 0x28
    float weight;
    // public UnityEngine.Vector3 offset
    // Offset: 0x2C
    UnityEngine::Vector3 offset;
    // public System.Single targetSwitchSmoothTime
    // Offset: 0x38
    float targetSwitchSmoothTime;
    // public System.Single weightSmoothTime
    // Offset: 0x3C
    float weightSmoothTime;
    // public System.Boolean smoothTurnTowardsTarget
    // Offset: 0x40
    bool smoothTurnTowardsTarget;
    // public System.Single maxRadiansDelta
    // Offset: 0x44
    float maxRadiansDelta;
    // public System.Single maxMagnitudeDelta
    // Offset: 0x48
    float maxMagnitudeDelta;
    // public System.Single slerpSpeed
    // Offset: 0x4C
    float slerpSpeed;
    // public UnityEngine.Vector3 pivotOffsetFromRoot
    // Offset: 0x50
    UnityEngine::Vector3 pivotOffsetFromRoot;
    // public System.Single minDistance
    // Offset: 0x5C
    float minDistance;
    // public System.Single maxRootAngle
    // Offset: 0x60
    float maxRootAngle;
    // private UnityEngine.Transform lastTarget
    // Offset: 0x68
    UnityEngine::Transform* lastTarget;
    // private System.Single switchWeight
    // Offset: 0x70
    float switchWeight;
    // private System.Single switchWeightV
    // Offset: 0x74
    float switchWeightV;
    // private System.Single weightV
    // Offset: 0x78
    float weightV;
    // private UnityEngine.Vector3 lastPosition
    // Offset: 0x7C
    UnityEngine::Vector3 lastPosition;
    // private UnityEngine.Vector3 dir
    // Offset: 0x88
    UnityEngine::Vector3 dir;
    // private System.Boolean lastSmoothTowardsTarget
    // Offset: 0x94
    bool lastSmoothTowardsTarget;
    // private System.Void Start()
    // Offset: 0x12190C0
    void Start();
    // private System.Void LateUpdate()
    // Offset: 0x12192F4
    void LateUpdate();
    // private UnityEngine.Vector3 get_pivot()
    // Offset: 0x12191A8
    UnityEngine::Vector3 get_pivot();
    // private System.Void ApplyMinDistance()
    // Offset: 0x12199B4
    void ApplyMinDistance();
    // private System.Void RootRotation()
    // Offset: 0x1219B50
    void RootRotation();
    // public System.Void .ctor()
    // Offset: 0x1219E6C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LookAtController* New_ctor();
  }; // RootMotion.FinalIK.LookAtController
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::LookAtController*, "RootMotion.FinalIK", "LookAtController");
#pragma pack(pop)
