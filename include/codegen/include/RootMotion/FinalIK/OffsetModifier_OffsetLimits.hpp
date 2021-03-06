// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.OffsetModifier
#include "RootMotion/FinalIK/OffsetModifier.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKEffector
  class IKEffector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.OffsetModifier/OffsetLimits
  class OffsetModifier::OffsetLimits : public ::Il2CppObject {
    public:
    // public RootMotion.FinalIK.FullBodyBipedEffector effector
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effector;
    // public System.Single spring
    // Offset: 0x14
    float spring;
    // public System.Boolean x
    // Offset: 0x18
    bool x;
    // public System.Boolean y
    // Offset: 0x19
    bool y;
    // public System.Boolean z
    // Offset: 0x1A
    bool z;
    // public System.Single minX
    // Offset: 0x1C
    float minX;
    // public System.Single maxX
    // Offset: 0x20
    float maxX;
    // public System.Single minY
    // Offset: 0x24
    float minY;
    // public System.Single maxY
    // Offset: 0x28
    float maxY;
    // public System.Single minZ
    // Offset: 0x2C
    float minZ;
    // public System.Single maxZ
    // Offset: 0x30
    float maxZ;
    // public System.Void Apply(RootMotion.FinalIK.IKEffector e, UnityEngine.Quaternion rootRotation)
    // Offset: 0x121A394
    void Apply(RootMotion::FinalIK::IKEffector* e, UnityEngine::Quaternion rootRotation);
    // private System.Single SpringAxis(System.Single value, System.Single min, System.Single max)
    // Offset: 0x121A8F0
    float SpringAxis(float value, float min, float max);
    // private System.Single Spring(System.Single value, System.Single limit, System.Boolean negative)
    // Offset: 0x121A920
    float Spring(float value, float limit, bool negative);
    // public System.Void .ctor()
    // Offset: 0x121A9F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OffsetModifier::OffsetLimits* New_ctor();
  }; // RootMotion.FinalIK.OffsetModifier/OffsetLimits
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::OffsetModifier::OffsetLimits*, "RootMotion.FinalIK", "OffsetModifier/OffsetLimits");
#pragma pack(pop)
