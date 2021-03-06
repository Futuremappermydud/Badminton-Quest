// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:16 PM
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: RenderModel_t
  struct RenderModel_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.RenderModel_t_Packed
  struct RenderModel_t_Packed : public System::ValueType {
    public:
    // public System.IntPtr rVertexData
    // Offset: 0x0
    System::IntPtr rVertexData;
    // public System.UInt32 unVertexCount
    // Offset: 0x8
    uint unVertexCount;
    // public System.IntPtr rIndexData
    // Offset: 0xC
    System::IntPtr rIndexData;
    // public System.UInt32 unTriangleCount
    // Offset: 0x14
    uint unTriangleCount;
    // public System.Int32 diffuseTextureId
    // Offset: 0x18
    int diffuseTextureId;
    // Creating value type constructor for type: RenderModel_t_Packed
    RenderModel_t_Packed(System::IntPtr rVertexData_ = {}, uint unVertexCount_ = {}, System::IntPtr rIndexData_ = {}, uint unTriangleCount_ = {}, int diffuseTextureId_ = {}) : rVertexData{rVertexData_}, unVertexCount{unVertexCount_}, rIndexData{rIndexData_}, unTriangleCount{unTriangleCount_}, diffuseTextureId{diffuseTextureId_} {}
    // public System.Void .ctor(Valve.VR.RenderModel_t unpacked)
    // Offset: 0xA59B70
    static RenderModel_t_Packed* New_ctor(Valve::VR::RenderModel_t unpacked);
    // public System.Void Unpack(Valve.VR.RenderModel_t unpacked)
    // Offset: 0xA59B90
    void Unpack(Valve::VR::RenderModel_t& unpacked);
  }; // Valve.VR.RenderModel_t_Packed
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::RenderModel_t_Packed, "Valve.VR", "RenderModel_t_Packed");
#pragma pack(pop)
