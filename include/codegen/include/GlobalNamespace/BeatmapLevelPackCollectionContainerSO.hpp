// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelPackCollectionSO
  class BeatmapLevelPackCollectionSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelPackCollectionContainerSO
  class BeatmapLevelPackCollectionContainerSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private BeatmapLevelPackCollectionSO _beatmapLevelPackCollection
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelPackCollectionSO* beatmapLevelPackCollection;
    // public BeatmapLevelPackCollectionSO get_beatmapLevelPackCollection()
    // Offset: 0xB71B84
    GlobalNamespace::BeatmapLevelPackCollectionSO* get_beatmapLevelPackCollection();
    // public System.Void .ctor()
    // Offset: 0xB71B8C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapLevelPackCollectionContainerSO* New_ctor();
  }; // BeatmapLevelPackCollectionContainerSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelPackCollectionContainerSO*, "", "BeatmapLevelPackCollectionContainerSO");
#pragma pack(pop)
