// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.ProBuilder.SelectionPickerRenderer
#include "UnityEngine/ProBuilder/SelectionPickerRenderer.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: SharedVertex
  class SharedVertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.SelectionPickerRenderer/<>c__DisplayClass15_0
  class SelectionPickerRenderer::$$c__DisplayClass15_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3[] positions
    // Offset: 0x10
    ::Array<UnityEngine::Vector3>* positions;
    // public UnityEngine.ProBuilder.SharedVertex[] sharedVertices
    // Offset: 0x18
    ::Array<UnityEngine::ProBuilder::SharedVertex*>* sharedVertices;
    // System.Int32 <PickVerticesInRect>b__0(System.Int32 x)
    // Offset: 0x1030480
    int $PickVerticesInRect$b__0(int x);
    // public System.Void .ctor()
    // Offset: 0x102E030
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SelectionPickerRenderer::$$c__DisplayClass15_0* New_ctor();
  }; // UnityEngine.ProBuilder.SelectionPickerRenderer/<>c__DisplayClass15_0
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SelectionPickerRenderer::$$c__DisplayClass15_0*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/<>c__DisplayClass15_0");
#pragma pack(pop)
