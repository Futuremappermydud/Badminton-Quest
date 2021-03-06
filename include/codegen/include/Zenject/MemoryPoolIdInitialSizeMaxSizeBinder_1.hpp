// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Zenject.MemoryPoolInitialSizeMaxSizeBinder`1
#include "Zenject/MemoryPoolInitialSizeMaxSizeBinder_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: MemoryPoolBindInfo
  class MemoryPoolBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MemoryPoolIdInitialSizeMaxSizeBinder`1
  template<typename TContract>
  class MemoryPoolIdInitialSizeMaxSizeBinder_1 : public Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> {
    public:
    // public Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract> WithId(System.Object identifier)
    // Offset: 0x15CCD10
    Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* WithId(::Il2CppObject* identifier) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>(this, "WithId", identifier));
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    // Offset: 0x15CCCEC
    // Implemented from: Zenject.MemoryPoolInitialSizeMaxSizeBinder`1
    // Base method: System.Void MemoryPoolInitialSizeMaxSizeBinder`1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    // Base method: System.Void MemoryPoolMaxSizeBinder`1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    // Base method: System.Void MemoryPoolExpandBinder`1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    static MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, Zenject::MemoryPoolBindInfo* poolBindInfo) {
      return (MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>*>::get(), bindContainer, bindInfo, factoryBindInfo, poolBindInfo));
    }
  }; // Zenject.MemoryPoolIdInitialSizeMaxSizeBinder`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1, "Zenject", "MemoryPoolIdInitialSizeMaxSizeBinder`1");
#pragma pack(pop)
