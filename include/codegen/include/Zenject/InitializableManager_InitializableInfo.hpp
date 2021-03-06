// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.InitializableManager
#include "Zenject/InitializableManager.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IInitializable
  class IInitializable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InitializableManager/InitializableInfo
  class InitializableManager::InitializableInfo : public ::Il2CppObject {
    public:
    // public Zenject.IInitializable Initializable
    // Offset: 0x10
    Zenject::IInitializable* Initializable;
    // public System.Int32 Priority
    // Offset: 0x18
    int Priority;
    // public System.Void .ctor(Zenject.IInitializable initializable, System.Int32 priority)
    // Offset: 0xF25284
    static InitializableManager::InitializableInfo* New_ctor(Zenject::IInitializable* initializable, int priority);
  }; // Zenject.InitializableManager/InitializableInfo
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InitializableManager::InitializableInfo*, "Zenject", "InitializableManager/InitializableInfo");
#pragma pack(pop)
