// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:40 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IPoolable`1
  template<typename TParam1>
  class IPoolable_1 {
    public:
    // public System.Void OnDespawned()
    // Offset: 0xFFFFFFFF
    void OnDespawned() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned"));
    }
    // public System.Void OnSpawned(TParam1 p1)
    // Offset: 0xFFFFFFFF
    void OnSpawned(TParam1 p1) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnSpawned", p1));
    }
  }; // Zenject.IPoolable`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IPoolable_1, "Zenject", "IPoolable`1");
#pragma pack(pop)
