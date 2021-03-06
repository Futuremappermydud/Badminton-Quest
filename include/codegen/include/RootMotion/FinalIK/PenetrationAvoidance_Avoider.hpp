// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.PenetrationAvoidance
#include "RootMotion/FinalIK/PenetrationAvoidance.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.PenetrationAvoidance/Avoider
  class PenetrationAvoidance::Avoider : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::PenetrationAvoidance::Avoider::EffectorLink
    class EffectorLink;
    // public UnityEngine.Transform[] raycastFrom
    // Offset: 0x10
    ::Array<UnityEngine::Transform*>* raycastFrom;
    // public UnityEngine.Transform raycastTo
    // Offset: 0x18
    UnityEngine::Transform* raycastTo;
    // public System.Single raycastRadius
    // Offset: 0x20
    float raycastRadius;
    // public RootMotion.FinalIK.PenetrationAvoidance/Avoider/EffectorLink[] effectors
    // Offset: 0x28
    ::Array<RootMotion::FinalIK::PenetrationAvoidance::Avoider::EffectorLink*>* effectors;
    // public System.Single smoothTimeIn
    // Offset: 0x30
    float smoothTimeIn;
    // public System.Single smoothTimeOut
    // Offset: 0x34
    float smoothTimeOut;
    // public UnityEngine.LayerMask layers
    // Offset: 0x38
    UnityEngine::LayerMask layers;
    // private UnityEngine.Vector3 offset
    // Offset: 0x3C
    UnityEngine::Vector3 offset;
    // private UnityEngine.Vector3 offsetTarget
    // Offset: 0x48
    UnityEngine::Vector3 offsetTarget;
    // private UnityEngine.Vector3 offsetV
    // Offset: 0x54
    UnityEngine::Vector3 offsetV;
    // public System.Void Solve(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    // Offset: 0x121B4B0
    void Solve(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
    // private UnityEngine.Vector3 GetOffsetTarget(RootMotion.FinalIK.IKSolverFullBodyBiped solver)
    // Offset: 0x121B6BC
    UnityEngine::Vector3 GetOffsetTarget(RootMotion::FinalIK::IKSolverFullBodyBiped* solver);
    // private UnityEngine.Vector3 Raycast(UnityEngine.Vector3 from, UnityEngine.Vector3 to)
    // Offset: 0x121B854
    UnityEngine::Vector3 Raycast(UnityEngine::Vector3 from, UnityEngine::Vector3 to);
    // public System.Void .ctor()
    // Offset: 0x121BAC8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PenetrationAvoidance::Avoider* New_ctor();
  }; // RootMotion.FinalIK.PenetrationAvoidance/Avoider
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::PenetrationAvoidance::Avoider*, "RootMotion.FinalIK", "PenetrationAvoidance/Avoider");
#pragma pack(pop)
