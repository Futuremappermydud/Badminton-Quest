// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIds
#include "GlobalNamespace/LightWithIds.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AmbientLightWithIds
  class AmbientLightWithIds : public GlobalNamespace::LightWithIds {
    public:
    // protected System.Void LateUpdate()
    // Offset: 0x1824B50
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x1824BB0
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AmbientLightWithIds* New_ctor();
  }; // AmbientLightWithIds
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AmbientLightWithIds*, "", "AmbientLightWithIds");
#pragma pack(pop)
