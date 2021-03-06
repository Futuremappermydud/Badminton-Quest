// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BloomPrePassRenderDataSO
#include "GlobalNamespace/BloomPrePassRenderDataSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassRendererSO
  class BloomPrePassRendererSO;
  // Forward declaring type: BloomPrePassEffectContainerSO
  class BloomPrePassEffectContainerSO;
  // Skipping declaration: Mode because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePass
  class BloomPrePass : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BloomPrePass::Mode
    struct Mode;
    // Autogenerated type: BloomPrePass/Mode
    struct Mode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public BloomPrePass/Mode RenderAndSetData
      static constexpr const int RenderAndSetData = 0;
      // Get static field: static public BloomPrePass/Mode RenderAndSetData
      static GlobalNamespace::BloomPrePass::Mode _get_RenderAndSetData();
      // Set static field: static public BloomPrePass/Mode RenderAndSetData
      static void _set_RenderAndSetData(GlobalNamespace::BloomPrePass::Mode value);
      // static field const value: static public BloomPrePass/Mode SetDataOnly
      static constexpr const int SetDataOnly = 1;
      // Get static field: static public BloomPrePass/Mode SetDataOnly
      static GlobalNamespace::BloomPrePass::Mode _get_SetDataOnly();
      // Set static field: static public BloomPrePass/Mode SetDataOnly
      static void _set_SetDataOnly(GlobalNamespace::BloomPrePass::Mode value);
      // Creating value type constructor for type: Mode
      Mode(int value_ = {}) : value{value_} {}
    }; // BloomPrePass/Mode
    // private BloomPrePassRendererSO _bloomPrepassRenderer
    // Offset: 0x18
    GlobalNamespace::BloomPrePassRendererSO* bloomPrepassRenderer;
    // private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    // Offset: 0x20
    GlobalNamespace::BloomPrePassEffectContainerSO* bloomPrePassEffectContainer;
    // private BloomPrePassRenderDataSO _bloomPrePassRenderData
    // Offset: 0x28
    GlobalNamespace::BloomPrePassRenderDataSO* bloomPrePassRenderData;
    // private BloomPrePass/Mode _mode
    // Offset: 0x30
    GlobalNamespace::BloomPrePass::Mode mode;
    // private BloomPrePassRenderDataSO/Data _renderData
    // Offset: 0x38
    GlobalNamespace::BloomPrePassRenderDataSO::Data* renderData;
    // protected System.Void Awake()
    // Offset: 0x18250C8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1825314
    void OnDestroy();
    // protected System.Void OnPreRender()
    // Offset: 0x18253E0
    void OnPreRender();
    // protected System.Void OnPostRender()
    // Offset: 0x18261C8
    void OnPostRender();
    // public System.Void SetMode(BloomPrePass/Mode mode)
    // Offset: 0x1826224
    void SetMode(GlobalNamespace::BloomPrePass::Mode mode);
    // public System.Void .ctor()
    // Offset: 0x182622C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomPrePass* New_ctor();
  }; // BloomPrePass
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePass*, "", "BloomPrePass");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePass::Mode, "", "BloomPrePass/Mode");
#pragma pack(pop)
