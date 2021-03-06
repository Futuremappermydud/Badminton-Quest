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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EmitParticles
  class EmitParticles : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _particleSystem
    // Offset: 0x18
    UnityEngine::ParticleSystem* particleSystem;
    // public System.Void Emit(System.Int32 count)
    // Offset: 0xBE95FC
    void Emit(int count);
    // public System.Void .ctor()
    // Offset: 0xBE9618
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EmitParticles* New_ctor();
  }; // EmitParticles
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EmitParticles*, "", "EmitParticles");
#pragma pack(pop)
