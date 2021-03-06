// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.FactoryArgumentsToChoiceBinder`1
#include "Zenject/FactoryArgumentsToChoiceBinder_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: MemoryPoolBindInfo
  class MemoryPoolBindInfo;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MemoryPoolExpandBinder`1
  template<typename TContract>
  class MemoryPoolExpandBinder_1 : public Zenject::FactoryArgumentsToChoiceBinder_1<TContract> {
    public:
    // private Zenject.MemoryPoolBindInfo <MemoryPoolBindInfo>k__BackingField
    // Offset: 0x0
    Zenject::MemoryPoolBindInfo* MemoryPoolBindInfo;
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    // Offset: 0x15CCBD8
    static MemoryPoolExpandBinder_1<TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, Zenject::MemoryPoolBindInfo* poolBindInfo) {
      return (MemoryPoolExpandBinder_1<TContract>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MemoryPoolExpandBinder_1<TContract>*>::get(), bindContainer, bindInfo, factoryBindInfo, poolBindInfo));
    }
    // protected Zenject.MemoryPoolBindInfo get_MemoryPoolBindInfo()
    // Offset: 0x15CCC50
    Zenject::MemoryPoolBindInfo* get_MemoryPoolBindInfo() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::MemoryPoolBindInfo*>(this, "get_MemoryPoolBindInfo"));
    }
    // private System.Void set_MemoryPoolBindInfo(Zenject.MemoryPoolBindInfo value)
    // Offset: 0x15CCC58
    void set_MemoryPoolBindInfo(Zenject::MemoryPoolBindInfo* value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "set_MemoryPoolBindInfo", value));
    }
    // public Zenject.FactoryArgumentsToChoiceBinder`1<TContract> ExpandByOneAtATime()
    // Offset: 0x15CCC60
    Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* ExpandByOneAtATime() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(this, "ExpandByOneAtATime"));
    }
    // public Zenject.FactoryArgumentsToChoiceBinder`1<TContract> ExpandByDoubling()
    // Offset: 0x15CCCA4
    Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* ExpandByDoubling() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(this, "ExpandByDoubling"));
    }
  }; // Zenject.MemoryPoolExpandBinder`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolExpandBinder_1, "Zenject", "MemoryPoolExpandBinder`1");
#pragma pack(pop)
