// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestPlatformAdditionalContentModel
#include "GlobalNamespace/TestPlatformAdditionalContentModel.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TestPlatformAdditionalContentModel/Entitlement
  class TestPlatformAdditionalContentModel::Entitlement : public ::Il2CppObject {
    public:
    // public System.String id
    // Offset: 0x10
    ::Il2CppString* id;
    // public AdditionalContentModel/EntitlementStatus status
    // Offset: 0x18
    GlobalNamespace::AdditionalContentModel::EntitlementStatus status;
    // public System.Void .ctor()
    // Offset: 0xC45208
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestPlatformAdditionalContentModel::Entitlement* New_ctor();
  }; // TestPlatformAdditionalContentModel/Entitlement
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestPlatformAdditionalContentModel::Entitlement*, "", "TestPlatformAdditionalContentModel/Entitlement");
#pragma pack(pop)
