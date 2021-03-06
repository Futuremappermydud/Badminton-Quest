// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FABRIK
  class FABRIK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.FABRIKChain
  class FABRIKChain : public ::Il2CppObject {
    public:
    // public RootMotion.FinalIK.FABRIK ik
    // Offset: 0x10
    RootMotion::FinalIK::FABRIK* ik;
    // public System.Single pull
    // Offset: 0x18
    float pull;
    // public System.Single pin
    // Offset: 0x1C
    float pin;
    // public System.Int32[] children
    // Offset: 0x20
    ::Array<int>* children;
    // public System.Boolean IsValid(System.String message)
    // Offset: 0x139599C
    bool IsValid(::Il2CppString*& message);
    // public System.Void Initiate()
    // Offset: 0x1395A70
    void Initiate();
    // public System.Void Stage1(RootMotion.FinalIK.FABRIKChain[] chain)
    // Offset: 0x1395A90
    void Stage1(::Array<RootMotion::FinalIK::FABRIKChain*>* chain);
    // public System.Void Stage2(UnityEngine.Vector3 rootPosition, RootMotion.FinalIK.FABRIKChain[] chain)
    // Offset: 0x1395E60
    void Stage2(UnityEngine::Vector3 rootPosition, ::Array<RootMotion::FinalIK::FABRIKChain*>* chain);
    // private UnityEngine.Vector3 GetCentroid(RootMotion.FinalIK.FABRIKChain[] chain)
    // Offset: 0x1395B64
    UnityEngine::Vector3 GetCentroid(::Array<RootMotion::FinalIK::FABRIKChain*>* chain);
    // public System.Void .ctor()
    // Offset: 0x1395F58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FABRIKChain* New_ctor();
  }; // RootMotion.FinalIK.FABRIKChain
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FABRIKChain*, "RootMotion.FinalIK", "FABRIKChain");
#pragma pack(pop)
