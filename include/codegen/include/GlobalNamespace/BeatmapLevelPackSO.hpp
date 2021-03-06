// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IBeatmapLevelPack
#include "GlobalNamespace/IBeatmapLevelPack.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelCollectionSO
  class BeatmapLevelCollectionSO;
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelPackSO
  class BeatmapLevelPackSO : public GlobalNamespace::PersistentScriptableObject, public GlobalNamespace::IBeatmapLevelPack {
    public:
    // private System.String _packID
    // Offset: 0x18
    ::Il2CppString* packID;
    // private System.String _packName
    // Offset: 0x20
    ::Il2CppString* packName;
    // private System.String _shortPackName
    // Offset: 0x28
    ::Il2CppString* shortPackName;
    // private UnityEngine.Sprite _coverImage
    // Offset: 0x30
    UnityEngine::Sprite* coverImage;
    // private BeatmapLevelCollectionSO _beatmapLevelCollection
    // Offset: 0x38
    GlobalNamespace::BeatmapLevelCollectionSO* beatmapLevelCollection;
    // public System.String get_packID()
    // Offset: 0xB71D4C
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_packID()
    ::Il2CppString* get_packID();
    // public System.String get_packName()
    // Offset: 0xB71D54
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_packName()
    ::Il2CppString* get_packName();
    // public System.String get_shortPackName()
    // Offset: 0xB71D5C
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_shortPackName()
    ::Il2CppString* get_shortPackName();
    // public System.String get_collectionName()
    // Offset: 0xB71D64
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: System.String IAnnotatedBeatmapLevelCollection::get_collectionName()
    ::Il2CppString* get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0xB71D6C
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: UnityEngine.Sprite IAnnotatedBeatmapLevelCollection::get_coverImage()
    UnityEngine::Sprite* get_coverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0xB71D74
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: IBeatmapLevelCollection IAnnotatedBeatmapLevelCollection::get_beatmapLevelCollection()
    GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
    // public System.Void .ctor()
    // Offset: 0xB71D7C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapLevelPackSO* New_ctor();
  }; // BeatmapLevelPackSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelPackSO*, "", "BeatmapLevelPackSO");
#pragma pack(pop)
