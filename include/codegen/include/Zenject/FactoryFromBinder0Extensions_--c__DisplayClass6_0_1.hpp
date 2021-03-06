// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FactoryFromBinder0Extensions
#include "Zenject/FactoryFromBinder0Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder0Extensions/<>c__DisplayClass6_0`1
  template<typename TContract>
  class FactoryFromBinder0Extensions::$$c__DisplayClass6_0_1 : public ::Il2CppObject {
    public:
    // public System.Guid factoryId
    // Offset: 0x0
    System::Guid factoryId;
    // Zenject.IProvider <FromIFactory>b__0(Zenject.DiContainer container)
    // Offset: 0x117D8F8
    Zenject::IProvider* $FromIFactory$b__0(Zenject::DiContainer* container) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromIFactory>b__0", container));
    }
    // public System.Void .ctor()
    // Offset: 0x117D8E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinder0Extensions::$$c__DisplayClass6_0_1<TContract>* New_ctor() {
      return (FactoryFromBinder0Extensions::$$c__DisplayClass6_0_1<TContract>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__DisplayClass6_0_1<TContract>*>::get()));
    }
  }; // Zenject.FactoryFromBinder0Extensions/<>c__DisplayClass6_0`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder0Extensions::$$c__DisplayClass6_0_1, "Zenject", "FactoryFromBinder0Extensions/<>c__DisplayClass6_0`1");
#pragma pack(pop)
