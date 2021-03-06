// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: RootMotion.SolverManager
#include "RootMotion/SolverManager.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.Poser
  class Poser : public RootMotion::SolverManager {
    public:
    // public UnityEngine.Transform poseRoot
    // Offset: 0x38
    UnityEngine::Transform* poseRoot;
    // public System.Single weight
    // Offset: 0x40
    float weight;
    // public System.Single localRotationWeight
    // Offset: 0x44
    float localRotationWeight;
    // public System.Single localPositionWeight
    // Offset: 0x48
    float localPositionWeight;
    // private System.Boolean initiated
    // Offset: 0x4C
    bool initiated;
    // public System.Void AutoMapping()
    // Offset: 0xFFFFFFFF
    void AutoMapping();
    // public System.Void UpdateManual()
    // Offset: 0x121BAE4
    void UpdateManual();
    // protected System.Void InitiatePoser()
    // Offset: 0xFFFFFFFF
    void InitiatePoser();
    // protected System.Void UpdatePoser()
    // Offset: 0xFFFFFFFF
    void UpdatePoser();
    // protected System.Void FixPoserTransforms()
    // Offset: 0xFFFFFFFF
    void FixPoserTransforms();
    // protected override System.Void UpdateSolver()
    // Offset: 0x121BAF0
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::UpdateSolver()
    void UpdateSolver();
    // protected override System.Void InitiateSolver()
    // Offset: 0x121BB44
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::InitiateSolver()
    void InitiateSolver();
    // protected override System.Void FixTransforms()
    // Offset: 0x121BB80
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::FixTransforms()
    void FixTransforms();
    // protected System.Void .ctor()
    // Offset: 0x121BB98
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Poser* New_ctor();
  }; // RootMotion.FinalIK.Poser
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Poser*, "RootMotion.FinalIK", "Poser");
#pragma pack(pop)
