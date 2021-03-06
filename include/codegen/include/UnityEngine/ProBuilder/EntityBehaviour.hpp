// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: Scene
  struct Scene;
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.EntityBehaviour
  class EntityBehaviour : public UnityEngine::MonoBehaviour {
    public:
    // public System.Boolean manageVisibility
    // Offset: 0x18
    bool manageVisibility;
    // public System.Void Initialize()
    // Offset: 0xFFFFFFFF
    void Initialize();
    // public System.Void OnEnterPlayMode()
    // Offset: 0xFFFFFFFF
    void OnEnterPlayMode();
    // public System.Void OnSceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0xFFFFFFFF
    void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode);
    // protected System.Void SetMaterial(UnityEngine.Material material)
    // Offset: 0xF7C354
    void SetMaterial(UnityEngine::Material* material);
    // protected System.Void .ctor()
    // Offset: 0xF7C430
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EntityBehaviour* New_ctor();
  }; // UnityEngine.ProBuilder.EntityBehaviour
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EntityBehaviour*, "UnityEngine.ProBuilder", "EntityBehaviour");
#pragma pack(pop)
