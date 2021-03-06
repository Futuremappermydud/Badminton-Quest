// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleVRNodeRecorder/SavedData
#include "GlobalNamespace/SimpleVRNodeRecorder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SimpleVRNodeRecorder/SavedData/NodeKeyframe
  class SimpleVRNodeRecorder::SavedData::NodeKeyframe : public ::Il2CppObject {
    public:
    // public System.Single posX
    // Offset: 0x10
    float posX;
    // public System.Single posY
    // Offset: 0x14
    float posY;
    // public System.Single posZ
    // Offset: 0x18
    float posZ;
    // public System.Single rotX
    // Offset: 0x1C
    float rotX;
    // public System.Single rotY
    // Offset: 0x20
    float rotY;
    // public System.Single rotZ
    // Offset: 0x24
    float rotZ;
    // public System.Single rotW
    // Offset: 0x28
    float rotW;
    // public System.Single time
    // Offset: 0x2C
    float time;
    // public UnityEngine.Vector3 get_pos()
    // Offset: 0xB9AD3C
    UnityEngine::Vector3 get_pos();
    // public UnityEngine.Quaternion get_rot()
    // Offset: 0xB9AD78
    UnityEngine::Quaternion get_rot();
    // public System.Void .ctor(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot, System.Single time)
    // Offset: 0xB9A7BC
    static SimpleVRNodeRecorder::SavedData::NodeKeyframe* New_ctor(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot, float time);
  }; // SimpleVRNodeRecorder/SavedData/NodeKeyframe
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleVRNodeRecorder::SavedData::NodeKeyframe*, "", "SimpleVRNodeRecorder/SavedData/NodeKeyframe");
#pragma pack(pop)
