// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainCameraCullingMask
  class MainCameraCullingMask : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MainCameraCullingMask::InitData
    class InitData;
    // private UnityEngine.Camera _camera
    // Offset: 0x18
    UnityEngine::Camera* camera;
    // private MainCameraCullingMask/InitData _initData
    // Offset: 0x20
    GlobalNamespace::MainCameraCullingMask::InitData* initData;
    // protected System.Void Start()
    // Offset: 0x191191C
    void Start();
    // public System.Void .ctor()
    // Offset: 0x1911A04
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainCameraCullingMask* New_ctor();
  }; // MainCameraCullingMask
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainCameraCullingMask*, "", "MainCameraCullingMask");
#pragma pack(pop)
