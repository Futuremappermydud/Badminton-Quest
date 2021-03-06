// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:06 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.HiddenAreaMesh_t
  struct HiddenAreaMesh_t : public System::ValueType {
    public:
    // public System.IntPtr pVertexData
    // Offset: 0x0
    System::IntPtr pVertexData;
    // public System.UInt32 unTriangleCount
    // Offset: 0x8
    uint unTriangleCount;
    // Creating value type constructor for type: HiddenAreaMesh_t
    HiddenAreaMesh_t(System::IntPtr pVertexData_ = {}, uint unTriangleCount_ = {}) : pVertexData{pVertexData_}, unTriangleCount{unTriangleCount_} {}
  }; // OVR.OpenVR.HiddenAreaMesh_t
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HiddenAreaMesh_t, "OVR.OpenVR", "HiddenAreaMesh_t");
#pragma pack(pop)
