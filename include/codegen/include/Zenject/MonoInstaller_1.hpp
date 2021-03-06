// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MonoInstaller`1
  template<typename TDerived>
  class MonoInstaller_1 : public Zenject::MonoInstaller {
    public:
    // static public TDerived InstallFromResource(Zenject.DiContainer container)
    // Offset: 0x15D197C
    static TDerived InstallFromResource(Zenject::DiContainer* container) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_1<TDerived>*>::get(), "InstallFromResource", container));
    }
    // static public TDerived InstallFromResource(System.String resourcePath, Zenject.DiContainer container)
    // Offset: 0x15D1A44
    static TDerived InstallFromResource(::Il2CppString* resourcePath, Zenject::DiContainer* container) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_1<TDerived>*>::get(), "InstallFromResource", resourcePath, container));
    }
    // static public TDerived InstallFromResource(Zenject.DiContainer container, System.Object[] extraArgs)
    // Offset: 0x15D1B10
    static TDerived InstallFromResource(Zenject::DiContainer* container, ::Array<::Il2CppObject*>* extraArgs) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_1<TDerived>*>::get(), "InstallFromResource", container, extraArgs));
    }
    // static public TDerived InstallFromResource(System.String resourcePath, Zenject.DiContainer container, System.Object[] extraArgs)
    // Offset: 0x15D1BE8
    static TDerived InstallFromResource(::Il2CppString* resourcePath, Zenject::DiContainer* container, ::Array<::Il2CppObject*>* extraArgs) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_1<TDerived>*>::get(), "InstallFromResource", resourcePath, container, extraArgs));
    }
    // public System.Void .ctor()
    // Offset: 0x15D1CA4
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoInstaller_1<TDerived>* New_ctor() {
      return (MonoInstaller_1<TDerived>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_1<TDerived>*>::get()));
    }
  }; // Zenject.MonoInstaller`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoInstaller_1, "Zenject", "MonoInstaller`1");
#pragma pack(pop)
