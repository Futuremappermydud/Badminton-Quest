// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.MeshValidation
#include "UnityEngine/ProBuilder/MeshOperations/MeshValidation.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c__DisplayClass10_0
  class MeshValidation::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.ProBuilderMesh mesh
    // Offset: 0x10
    UnityEngine::ProBuilder::ProBuilderMesh* mesh;
    // System.Boolean <RebuildSelectionIndexes>b__0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x100C784
    bool $RebuildSelectionIndexes$b__0(UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0x100C544
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MeshValidation::$$c__DisplayClass10_0* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c__DisplayClass10_0
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass10_0*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass10_0");
#pragma pack(pop)
