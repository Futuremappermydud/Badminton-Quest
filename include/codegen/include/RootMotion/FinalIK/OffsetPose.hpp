// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.OffsetPose
  class OffsetPose : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::OffsetPose::EffectorLink
    class EffectorLink;
    // public RootMotion.FinalIK.OffsetPose/EffectorLink[] effectorLinks
    // Offset: 0x18
    ::Array<RootMotion::FinalIK::OffsetPose::EffectorLink*>* effectorLinks;
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    // Offset: 0x121AF08
    void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight, UnityEngine.Quaternion rotation)
    // Offset: 0x121B300
    void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight, UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x121B3B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OffsetPose* New_ctor();
  }; // RootMotion.FinalIK.OffsetPose
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::OffsetPose*, "RootMotion.FinalIK", "OffsetPose");
#pragma pack(pop)
