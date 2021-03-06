// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:47 PM
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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ZenjectStateMachineBehaviourAutoInjecter
  class ZenjectStateMachineBehaviourAutoInjecter : public UnityEngine::MonoBehaviour {
    public:
    // private Zenject.DiContainer _container
    // Offset: 0x18
    Zenject::DiContainer* container;
    // private UnityEngine.Animator _animator
    // Offset: 0x20
    UnityEngine::Animator* animator;
    // public System.Void Construct(Zenject.DiContainer container)
    // Offset: 0x1929868
    void Construct(Zenject::DiContainer* container);
    // public System.Void Start()
    // Offset: 0x19298F0
    void Start();
    // public System.Void .ctor()
    // Offset: 0x19299E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ZenjectStateMachineBehaviourAutoInjecter* New_ctor();
  }; // Zenject.ZenjectStateMachineBehaviourAutoInjecter
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectStateMachineBehaviourAutoInjecter*, "Zenject", "ZenjectStateMachineBehaviourAutoInjecter");
#pragma pack(pop)
