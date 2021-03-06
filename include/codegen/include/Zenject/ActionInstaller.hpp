// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.Installer`1
#include "Zenject/Installer_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ActionInstaller
  class ActionInstaller : public Zenject::Installer_1<Zenject::ActionInstaller*> {
    public:
    // private readonly System.Action`1<Zenject.DiContainer> _installMethod
    // Offset: 0x18
    System::Action_1<Zenject::DiContainer*>* installMethod;
    // public System.Void .ctor(System.Action`1<Zenject.DiContainer> installMethod)
    // Offset: 0xD4F228
    static ActionInstaller* New_ctor(System::Action_1<Zenject::DiContainer*>* installMethod);
    // public override System.Void InstallBindings()
    // Offset: 0xD4F294
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
  }; // Zenject.ActionInstaller
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ActionInstaller*, "Zenject", "ActionInstaller");
#pragma pack(pop)
