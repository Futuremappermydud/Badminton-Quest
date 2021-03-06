// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.ISubContainerCreator
#include "Zenject/ISubContainerCreator.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SubContainerCreatorByMethodBase
  class SubContainerCreatorByMethodBase : public ::Il2CppObject, public Zenject::ISubContainerCreator {
    public:
    // private readonly Zenject.DiContainer _container
    // Offset: 0x10
    Zenject::DiContainer* container;
    // private readonly Zenject.SubContainerCreatorBindInfo _containerBindInfo
    // Offset: 0x18
    Zenject::SubContainerCreatorBindInfo* containerBindInfo;
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.SubContainerCreatorBindInfo containerBindInfo)
    // Offset: 0xFBA280
    static SubContainerCreatorByMethodBase* New_ctor(Zenject::DiContainer* container, Zenject::SubContainerCreatorBindInfo* containerBindInfo);
    // protected Zenject.DiContainer CreateEmptySubContainer()
    // Offset: 0xFBA374
    Zenject::DiContainer* CreateEmptySubContainer();
    // public Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.ISubContainerCreator
    // Base method: Zenject.DiContainer ISubContainerCreator::CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context);
  }; // Zenject.SubContainerCreatorByMethodBase
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByMethodBase*, "Zenject", "SubContainerCreatorByMethodBase");
#pragma pack(pop)
