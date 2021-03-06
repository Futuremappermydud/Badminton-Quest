// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteCutEffectSpawner
#include "GlobalNamespace/NoteCutEffectSpawner.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteCutEffectSpawner/InitData
  class NoteCutEffectSpawner::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean spawnScores
    // Offset: 0x10
    bool spawnScores;
    // public readonly System.Boolean spawnBadCuts
    // Offset: 0x11
    bool spawnBadCuts;
    // public System.Void .ctor(System.Boolean spawnScores, System.Boolean spawnBadCuts)
    // Offset: 0xC1756C
    static NoteCutEffectSpawner::InitData* New_ctor(bool spawnScores, bool spawnBadCuts);
  }; // NoteCutEffectSpawner/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutEffectSpawner::InitData*, "", "NoteCutEffectSpawner/InitData");
#pragma pack(pop)
