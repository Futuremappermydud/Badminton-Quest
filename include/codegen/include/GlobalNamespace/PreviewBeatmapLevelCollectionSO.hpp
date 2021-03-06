// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IBeatmapLevelCollection
#include "GlobalNamespace/IBeatmapLevelCollection.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PreviewBeatmapLevelSO
  class PreviewBeatmapLevelSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PreviewBeatmapLevelCollectionSO
  class PreviewBeatmapLevelCollectionSO : public GlobalNamespace::PersistentScriptableObject, public GlobalNamespace::IBeatmapLevelCollection {
    public:
    // private PreviewBeatmapLevelSO[] _beatmapLevels
    // Offset: 0x18
    ::Array<GlobalNamespace::PreviewBeatmapLevelSO*>* beatmapLevels;
    // public IPreviewBeatmapLevel[] get_beatmapLevels()
    // Offset: 0xC1E480
    // Implemented from: IBeatmapLevelCollection
    // Base method: IPreviewBeatmapLevel[] IBeatmapLevelCollection::get_beatmapLevels()
    ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels();
    // public System.Void .ctor()
    // Offset: 0xC1E488
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PreviewBeatmapLevelCollectionSO* New_ctor();
  }; // PreviewBeatmapLevelCollectionSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviewBeatmapLevelCollectionSO*, "", "PreviewBeatmapLevelCollectionSO");
#pragma pack(pop)
