// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FABRIKChain
  class FABRIKChain;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKSolverFABRIKRoot
  class IKSolverFABRIKRoot : public RootMotion::FinalIK::IKSolver {
    public:
    // public System.Int32 iterations
    // Offset: 0x58
    int iterations;
    // public System.Single rootPin
    // Offset: 0x5C
    float rootPin;
    // public RootMotion.FinalIK.FABRIKChain[] chains
    // Offset: 0x60
    ::Array<RootMotion::FinalIK::FABRIKChain*>* chains;
    // private System.Boolean zeroWeightApplied
    // Offset: 0x68
    bool zeroWeightApplied;
    // private System.Boolean[] isRoot
    // Offset: 0x70
    ::Array<bool>* isRoot;
    // private UnityEngine.Vector3 rootDefaultPosition
    // Offset: 0x78
    UnityEngine::Vector3 rootDefaultPosition;
    // private System.Boolean IsRoot(System.Int32 index)
    // Offset: 0x132ED68
    bool IsRoot(int index);
    // private System.Void AddPointsToArray(RootMotion.FinalIK.IKSolver/Point[] array, RootMotion.FinalIK.FABRIKChain chain)
    // Offset: 0x132F41C
    void AddPointsToArray(::Array<RootMotion::FinalIK::IKSolver::Point*>*& array, RootMotion::FinalIK::FABRIKChain* chain);
    // private UnityEngine.Vector3 GetCentroid()
    // Offset: 0x132F038
    UnityEngine::Vector3 GetCentroid();
    // public override System.Boolean IsValid(System.String message)
    // Offset: 0x132E148
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(System.String message)
    bool IsValid(::Il2CppString*& message);
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x132EB20
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x132EBB8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // protected override System.Void OnInitiate()
    // Offset: 0x132EC58
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x132EE04
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x132F36C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x132F584
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public System.Void .ctor()
    // Offset: 0x132F61C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    static IKSolverFABRIKRoot* New_ctor();
  }; // RootMotion.FinalIK.IKSolverFABRIKRoot
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverFABRIKRoot*, "RootMotion.FinalIK", "IKSolverFABRIKRoot");
#pragma pack(pop)
