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
  // Autogenerated type: Zenject.IPoolable`4
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class IPoolable_4 {
    public:
    // public System.Void OnDespawned()
    // Offset: 0xFFFFFFFF
    void OnDespawned() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned"));
    }
    // public System.Void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    // Offset: 0xFFFFFFFF
    void OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnSpawned", p1, p2, p3, p4));
    }
  }; // Zenject.IPoolable`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IPoolable_4, "Zenject", "IPoolable`4");
#pragma pack(pop)
