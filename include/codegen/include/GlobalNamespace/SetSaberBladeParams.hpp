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
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SetSaberBladeParams
  class SetSaberBladeParams : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair
    class PropertyTintColorPair;
    // private SaberTypeObject _saber
    // Offset: 0x18
    GlobalNamespace::SaberTypeObject* saber;
    // private UnityEngine.MeshRenderer _meshRenderer
    // Offset: 0x20
    UnityEngine::MeshRenderer* meshRenderer;
    // private SetSaberBladeParams/PropertyTintColorPair[] _propertyTintColorPairs
    // Offset: 0x28
    ::Array<GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair*>* propertyTintColorPairs;
    // private ColorManager _colorManager
    // Offset: 0x30
    GlobalNamespace::ColorManager* colorManager;
    // protected System.Void Start()
    // Offset: 0xC2E12C
    void Start();
    // public System.Void .ctor()
    // Offset: 0xC2E238
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SetSaberBladeParams* New_ctor();
  }; // SetSaberBladeParams
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetSaberBladeParams*, "", "SetSaberBladeParams");
#pragma pack(pop)
