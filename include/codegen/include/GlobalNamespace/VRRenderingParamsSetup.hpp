// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRPlatformHelper
  class VRPlatformHelper;
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRRenderingParamsSetup
  class VRRenderingParamsSetup : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VRRenderingParamsSetup::SceneType
    struct SceneType;
    // Autogenerated type: VRRenderingParamsSetup/SceneType
    struct SceneType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public VRRenderingParamsSetup/SceneType Undefined
      static constexpr const int Undefined = 0;
      // Get static field: static public VRRenderingParamsSetup/SceneType Undefined
      static GlobalNamespace::VRRenderingParamsSetup::SceneType _get_Undefined();
      // Set static field: static public VRRenderingParamsSetup/SceneType Undefined
      static void _set_Undefined(GlobalNamespace::VRRenderingParamsSetup::SceneType value);
      // static field const value: static public VRRenderingParamsSetup/SceneType Menu
      static constexpr const int Menu = 1;
      // Get static field: static public VRRenderingParamsSetup/SceneType Menu
      static GlobalNamespace::VRRenderingParamsSetup::SceneType _get_Menu();
      // Set static field: static public VRRenderingParamsSetup/SceneType Menu
      static void _set_Menu(GlobalNamespace::VRRenderingParamsSetup::SceneType value);
      // static field const value: static public VRRenderingParamsSetup/SceneType Game
      static constexpr const int Game = 2;
      // Get static field: static public VRRenderingParamsSetup/SceneType Game
      static GlobalNamespace::VRRenderingParamsSetup::SceneType _get_Game();
      // Set static field: static public VRRenderingParamsSetup/SceneType Game
      static void _set_Game(GlobalNamespace::VRRenderingParamsSetup::SceneType value);
      // Creating value type constructor for type: SceneType
      SceneType(int value_ = {}) : value{value_} {}
    }; // VRRenderingParamsSetup/SceneType
    // private FloatSO _vrResolutionScale
    // Offset: 0x18
    GlobalNamespace::FloatSO* vrResolutionScale;
    // private FloatSO _menuVRResolutionScaleMultiplier
    // Offset: 0x20
    GlobalNamespace::FloatSO* menuVRResolutionScaleMultiplier;
    // private BoolSO _useFixedFoveatedRenderingDuringGameplay
    // Offset: 0x28
    GlobalNamespace::BoolSO* useFixedFoveatedRenderingDuringGameplay;
    // private VRRenderingParamsSetup/SceneType _sceneType
    // Offset: 0x30
    GlobalNamespace::VRRenderingParamsSetup::SceneType sceneType;
    // private VRPlatformHelper _vrPlatformHelper
    // Offset: 0x38
    GlobalNamespace::VRPlatformHelper* vrPlatformHelper;
    // protected System.Void OnEnable()
    // Offset: 0x1915CCC
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x1915E10
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRRenderingParamsSetup* New_ctor();
  }; // VRRenderingParamsSetup
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRRenderingParamsSetup*, "", "VRRenderingParamsSetup");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRRenderingParamsSetup::SceneType, "", "VRRenderingParamsSetup/SceneType");
#pragma pack(pop)
