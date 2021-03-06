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
  // Forward declaring type: VRController
  class VRController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MenuPlayerController
  class MenuPlayerController : public UnityEngine::MonoBehaviour {
    public:
    // private VRController _leftController
    // Offset: 0x18
    GlobalNamespace::VRController* leftController;
    // private VRController _rightController
    // Offset: 0x20
    GlobalNamespace::VRController* rightController;
    // private UnityEngine.Transform _headTransform
    // Offset: 0x28
    UnityEngine::Transform* headTransform;
    // public VRController get_leftController()
    // Offset: 0xC01DE0
    GlobalNamespace::VRController* get_leftController();
    // public VRController get_rightController()
    // Offset: 0xC01DE8
    GlobalNamespace::VRController* get_rightController();
    // public UnityEngine.Vector3 get_headPos()
    // Offset: 0xC01DF0
    UnityEngine::Vector3 get_headPos();
    // public UnityEngine.Quaternion get_headRot()
    // Offset: 0xC01E0C
    UnityEngine::Quaternion get_headRot();
    // public System.Void .ctor()
    // Offset: 0xC01E28
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MenuPlayerController* New_ctor();
  }; // MenuPlayerController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuPlayerController*, "", "MenuPlayerController");
#pragma pack(pop)
