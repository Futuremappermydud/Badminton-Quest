// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
  // Forward declaring type: TimeHelper
  class TimeHelper;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: CampaignProgressModel
  class CampaignProgressModel;
  // Forward declaring type: BeatmapLevelsModel
  class BeatmapLevelsModel;
  // Forward declaring type: CustomLevelLoader
  class CustomLevelLoader;
  // Forward declaring type: CachedMediaAsyncLoader
  class CachedMediaAsyncLoader;
  // Forward declaring type: VRPlatformHelper
  class VRPlatformHelper;
  // Forward declaring type: ExternalCamerasManager
  class ExternalCamerasManager;
  // Forward declaring type: AlwaysOwnedContentContainerSO
  class AlwaysOwnedContentContainerSO;
  // Forward declaring type: TestPlatformAdditionalContentModel
  class TestPlatformAdditionalContentModel;
  // Forward declaring type: PS4PlatformAdditionalContentModel
  class PS4PlatformAdditionalContentModel;
  // Forward declaring type: OculusPlatformAdditionalContentModel
  class OculusPlatformAdditionalContentModel;
  // Forward declaring type: SteamPlatformAdditionalContentModel
  class SteamPlatformAdditionalContentModel;
  // Forward declaring type: SteamLevelProductsModelSO
  class SteamLevelProductsModelSO;
  // Forward declaring type: OculusLevelProductsModelSO
  class OculusLevelProductsModelSO;
  // Forward declaring type: PS4LevelProductsModelSO
  class PS4LevelProductsModelSO;
  // Forward declaring type: PS4LeaderboardIdsModelSO
  class PS4LeaderboardIdsModelSO;
  // Forward declaring type: RichPresenceManager
  class RichPresenceManager;
  // Forward declaring type: PlatformUserModelSO
  class PlatformUserModelSO;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: LeaderboardScoreUploader
  class LeaderboardScoreUploader;
  // Forward declaring type: PlatformLeaderboardsModel
  class PlatformLeaderboardsModel;
}
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: ServerManager
  class ServerManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AppCoreInstaller
  class AppCoreInstaller : public Zenject::MonoInstaller {
    public:
    // private AppStaticSettingsSO _appStaticSettings
    // Offset: 0x20
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // private TimeHelper _timeHelperPrefab
    // Offset: 0x28
    GlobalNamespace::TimeHelper* timeHelperPrefab;
    // private PlayerDataModel _playerDataModelPrefab
    // Offset: 0x30
    GlobalNamespace::PlayerDataModel* playerDataModelPrefab;
    // private CampaignProgressModel _campaignProgressModelPrefab
    // Offset: 0x38
    GlobalNamespace::CampaignProgressModel* campaignProgressModelPrefab;
    // private BeatmapLevelsModel _beatmapLevelsModelPrefab
    // Offset: 0x40
    GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModelPrefab;
    // private CustomLevelLoader _customLevelLoaderPrefab
    // Offset: 0x48
    GlobalNamespace::CustomLevelLoader* customLevelLoaderPrefab;
    // private CachedMediaAsyncLoader _cachedMediaAsyncLoaderPrefab
    // Offset: 0x50
    GlobalNamespace::CachedMediaAsyncLoader* cachedMediaAsyncLoaderPrefab;
    // private VRPlatformHelper _vrPlatformHelperPrefab
    // Offset: 0x58
    GlobalNamespace::VRPlatformHelper* vrPlatformHelperPrefab;
    // private ExternalCamerasManager _externalCamerasManagerPrefab
    // Offset: 0x60
    GlobalNamespace::ExternalCamerasManager* externalCamerasManagerPrefab;
    // private AlwaysOwnedContentContainerSO _alwaysOwnedContentContainer
    // Offset: 0x68
    GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer;
    // private TestPlatformAdditionalContentModel _testPlatformAdditionalContentModelPrefab
    // Offset: 0x70
    GlobalNamespace::TestPlatformAdditionalContentModel* testPlatformAdditionalContentModelPrefab;
    // private PS4PlatformAdditionalContentModel _ps4PlatformAdditionalContentModelPrefab
    // Offset: 0x78
    GlobalNamespace::PS4PlatformAdditionalContentModel* ps4PlatformAdditionalContentModelPrefab;
    // private OculusPlatformAdditionalContentModel _oculusPlatformAdditionalContentModelPrefab
    // Offset: 0x80
    GlobalNamespace::OculusPlatformAdditionalContentModel* oculusPlatformAdditionalContentModelPrefab;
    // private SteamPlatformAdditionalContentModel _steamPlatformAdditionalContentModelPrefab
    // Offset: 0x88
    GlobalNamespace::SteamPlatformAdditionalContentModel* steamPlatformAdditionalContentModelPrefab;
    // private SteamLevelProductsModelSO _steamLevelProductsModel
    // Offset: 0x90
    GlobalNamespace::SteamLevelProductsModelSO* steamLevelProductsModel;
    // private OculusLevelProductsModelSO _oculusLevelProducsModel
    // Offset: 0x98
    GlobalNamespace::OculusLevelProductsModelSO* oculusLevelProducsModel;
    // private PS4LevelProductsModelSO _ps4LevelProductsModel
    // Offset: 0xA0
    GlobalNamespace::PS4LevelProductsModelSO* ps4LevelProductsModel;
    // private PS4LeaderboardIdsModelSO _ps4LeaderboardIdsModel
    // Offset: 0xA8
    GlobalNamespace::PS4LeaderboardIdsModelSO* ps4LeaderboardIdsModel;
    // private OnlineServices.ServerManager _onlineServicesServerManagerPrefab
    // Offset: 0xB0
    OnlineServices::ServerManager* onlineServicesServerManagerPrefab;
    // private RichPresenceManager _richPresenceManagerPrefab
    // Offset: 0xB8
    GlobalNamespace::RichPresenceManager* richPresenceManagerPrefab;
    // private PlatformUserModelSO _platformUserModelSO
    // Offset: 0xC0
    GlobalNamespace::PlatformUserModelSO* platformUserModelSO;
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Offset: 0xC8
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // private LeaderboardScoreUploader _leaderboardScoreUploader
    // Offset: 0xD0
    GlobalNamespace::LeaderboardScoreUploader* leaderboardScoreUploader;
    // private PlatformLeaderboardsModel _platformLeaderboardsModel
    // Offset: 0xD8
    GlobalNamespace::PlatformLeaderboardsModel* platformLeaderboardsModel;
    // private System.Void InstallRichPresence()
    // Offset: 0xB87F2C
    void InstallRichPresence();
    // private System.Void InstallOculusDestinationBindings()
    // Offset: 0xB87E48
    void InstallOculusDestinationBindings();
    // private System.Void InstallOldPlatformLeaderboardsModel()
    // Offset: 0xB87FE4
    void InstallOldPlatformLeaderboardsModel();
    // public override System.Void InstallBindings()
    // Offset: 0xB87A9C
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xB88108
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AppCoreInstaller* New_ctor();
  }; // AppCoreInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppCoreInstaller*, "", "AppCoreInstaller");
#pragma pack(pop)
