// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.RotationLimitPolygonal
#include "RootMotion/FinalIK/RotationLimitPolygonal.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.RotationLimitPolygonal/LimitPoint
  class RotationLimitPolygonal::LimitPoint : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3 point
    // Offset: 0x10
    UnityEngine::Vector3 point;
    // public System.Single tangentWeight
    // Offset: 0x1C
    float tangentWeight;
    // public System.Void .ctor()
    // Offset: 0x1221150
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RotationLimitPolygonal::LimitPoint* New_ctor();
  }; // RootMotion.FinalIK.RotationLimitPolygonal/LimitPoint
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RotationLimitPolygonal::LimitPoint*, "RootMotion.FinalIK", "RotationLimitPolygonal/LimitPoint");
#pragma pack(pop)
