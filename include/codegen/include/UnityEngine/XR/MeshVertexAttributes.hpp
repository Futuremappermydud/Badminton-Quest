// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:40 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Autogenerated type: UnityEngine.XR.MeshVertexAttributes
  struct MeshVertexAttributes : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.XR.MeshVertexAttributes None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.XR.MeshVertexAttributes None
    static UnityEngine::XR::MeshVertexAttributes _get_None();
    // Set static field: static public UnityEngine.XR.MeshVertexAttributes None
    static void _set_None(UnityEngine::XR::MeshVertexAttributes value);
    // static field const value: static public UnityEngine.XR.MeshVertexAttributes Normals
    static constexpr const int Normals = 1;
    // Get static field: static public UnityEngine.XR.MeshVertexAttributes Normals
    static UnityEngine::XR::MeshVertexAttributes _get_Normals();
    // Set static field: static public UnityEngine.XR.MeshVertexAttributes Normals
    static void _set_Normals(UnityEngine::XR::MeshVertexAttributes value);
    // static field const value: static public UnityEngine.XR.MeshVertexAttributes Tangents
    static constexpr const int Tangents = 2;
    // Get static field: static public UnityEngine.XR.MeshVertexAttributes Tangents
    static UnityEngine::XR::MeshVertexAttributes _get_Tangents();
    // Set static field: static public UnityEngine.XR.MeshVertexAttributes Tangents
    static void _set_Tangents(UnityEngine::XR::MeshVertexAttributes value);
    // static field const value: static public UnityEngine.XR.MeshVertexAttributes UVs
    static constexpr const int UVs = 4;
    // Get static field: static public UnityEngine.XR.MeshVertexAttributes UVs
    static UnityEngine::XR::MeshVertexAttributes _get_UVs();
    // Set static field: static public UnityEngine.XR.MeshVertexAttributes UVs
    static void _set_UVs(UnityEngine::XR::MeshVertexAttributes value);
    // static field const value: static public UnityEngine.XR.MeshVertexAttributes Colors
    static constexpr const int Colors = 8;
    // Get static field: static public UnityEngine.XR.MeshVertexAttributes Colors
    static UnityEngine::XR::MeshVertexAttributes _get_Colors();
    // Set static field: static public UnityEngine.XR.MeshVertexAttributes Colors
    static void _set_Colors(UnityEngine::XR::MeshVertexAttributes value);
    // Creating value type constructor for type: MeshVertexAttributes
    MeshVertexAttributes(int value_ = {}) : value{value_} {}
  }; // UnityEngine.XR.MeshVertexAttributes
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::MeshVertexAttributes, "UnityEngine.XR", "MeshVertexAttributes");
#pragma pack(pop)
