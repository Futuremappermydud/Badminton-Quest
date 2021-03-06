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
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: AsyncCache`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class AsyncCache_2;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapLevelDataSO
  class BeatmapLevelDataSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelDataLoaderSO
  class BeatmapLevelDataLoaderSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::AssetBundleLevelInfo
    struct AssetBundleLevelInfo;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview
    class BeatmapLevelFromPreview;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelFormAssetBundleAsync$d__4
    struct $LoadBeatmapLevelFormAssetBundleAsync$d__4;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmapLevelAsync$d__5
    struct $LoadBeatmapLevelAsync$d__5;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1
    class $$c__DisplayClass6_1;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2
    class $$c__DisplayClass6_2;
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmalLevelDataAsync$d__6
    struct $LoadBeatmalLevelDataAsync$d__6;
    // Autogenerated type: BeatmapLevelDataLoaderSO/AssetBundleLevelInfo
    struct AssetBundleLevelInfo : public System::ValueType {
      public:
      // public readonly System.String assetBundlePath
      // Offset: 0x0
      ::Il2CppString* assetBundlePath;
      // public readonly System.String levelDataAssetName
      // Offset: 0x8
      ::Il2CppString* levelDataAssetName;
      // public readonly IPreviewBeatmapLevel previewBeatmapLevel
      // Offset: 0x10
      GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
      // Creating value type constructor for type: AssetBundleLevelInfo
      AssetBundleLevelInfo(::Il2CppString* assetBundlePath_ = {}, ::Il2CppString* levelDataAssetName_ = {}, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel_ = {}) : assetBundlePath{assetBundlePath_}, levelDataAssetName{levelDataAssetName_}, previewBeatmapLevel{previewBeatmapLevel_} {}
      // public System.Void .ctor(System.String assetBundlePath, System.String levelDataAssetName, IPreviewBeatmapLevel previewBeatmapLevel)
      // Offset: 0xA2BB54
      static BeatmapLevelDataLoaderSO::AssetBundleLevelInfo* New_ctor(::Il2CppString* assetBundlePath, ::Il2CppString* levelDataAssetName, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel);
    }; // BeatmapLevelDataLoaderSO/AssetBundleLevelInfo
    // private BeatmapCharacteristicCollectionSO _allBeatmapCharacteristicCollection
    // Offset: 0x18
    GlobalNamespace::BeatmapCharacteristicCollectionSO* allBeatmapCharacteristicCollection;
    // private AsyncCache`2<System.String,IBeatmapLevel> _beatmapLevelsAsyncCache
    // Offset: 0x20
    GlobalNamespace::AsyncCache_2<::Il2CppString*, GlobalNamespace::IBeatmapLevel*>* beatmapLevelsAsyncCache;
    // private System.Collections.Generic.Dictionary`2<System.String,BeatmapLevelDataLoaderSO/AssetBundleLevelInfo> _bundleLevelInfos
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::BeatmapLevelDataLoaderSO::AssetBundleLevelInfo>* bundleLevelInfos;
    // public System.Threading.Tasks.Task`1<IBeatmapLevel> LoadBeatmapLevelFormAssetBundleAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.String assetBundlePath, System.String levelDataAssetName, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xB9629C
    System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevel*>* LoadBeatmapLevelFormAssetBundleAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::Il2CppString* assetBundlePath, ::Il2CppString* levelDataAssetName, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<IBeatmapLevel> LoadBeatmapLevelAsync(System.String levelID)
    // Offset: 0xB96420
    System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevel*>* LoadBeatmapLevelAsync(::Il2CppString* levelID);
    // private System.Threading.Tasks.Task`1<BeatmapLevelDataSO> LoadBeatmalLevelDataAsync(System.String assetBundlePath, System.String levelDataAssetName)
    // Offset: 0xB96570
    System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelDataSO*>* LoadBeatmalLevelDataAsync(::Il2CppString* assetBundlePath, ::Il2CppString* levelDataAssetName);
    // public System.Void .ctor()
    // Offset: 0xB966BC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapLevelDataLoaderSO* New_ctor();
  }; // BeatmapLevelDataLoaderSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO*, "", "BeatmapLevelDataLoaderSO");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO::AssetBundleLevelInfo, "", "BeatmapLevelDataLoaderSO/AssetBundleLevelInfo");
#pragma pack(pop)
