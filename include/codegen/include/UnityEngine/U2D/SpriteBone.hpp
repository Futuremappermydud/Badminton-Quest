// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Autogenerated type: UnityEngine.U2D.SpriteBone
  struct SpriteBone : public System::ValueType {
    public:
    // private System.String m_Name
    // Offset: 0x0
    ::Il2CppString* m_Name;
    // private UnityEngine.Vector3 m_Position
    // Offset: 0x8
    UnityEngine::Vector3 m_Position;
    // private UnityEngine.Quaternion m_Rotation
    // Offset: 0x14
    UnityEngine::Quaternion m_Rotation;
    // private System.Single m_Length
    // Offset: 0x24
    float m_Length;
    // private System.Int32 m_ParentId
    // Offset: 0x28
    int m_ParentId;
    // Creating value type constructor for type: SpriteBone
    SpriteBone(::Il2CppString* m_Name_ = {}, UnityEngine::Vector3 m_Position_ = {}, UnityEngine::Quaternion m_Rotation_ = {}, float m_Length_ = {}, int m_ParentId_ = {}) : m_Name{m_Name_}, m_Position{m_Position_}, m_Rotation{m_Rotation_}, m_Length{m_Length_}, m_ParentId{m_ParentId_} {}
  }; // UnityEngine.U2D.SpriteBone
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::U2D::SpriteBone, "UnityEngine.U2D", "SpriteBone");
#pragma pack(pop)
