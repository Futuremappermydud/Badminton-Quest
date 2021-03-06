// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSaveDataV1_0_1/LocalPlayer
  class PlayerSaveDataV1_0_1::LocalPlayer : public ::Il2CppObject {
    public:
    // public System.String playerId
    // Offset: 0x10
    ::Il2CppString* playerId;
    // public System.String playerName
    // Offset: 0x18
    ::Il2CppString* playerName;
    // public System.Boolean shouldShowTutorialPrompt
    // Offset: 0x20
    bool shouldShowTutorialPrompt;
    // public System.Boolean shouldShow360Warning
    // Offset: 0x21
    bool shouldShow360Warning;
    // public PlayerSaveDataV1_0_1/GameplayModifiers gameplayModifiers
    // Offset: 0x28
    GlobalNamespace::PlayerSaveDataV1_0_1::GameplayModifiers* gameplayModifiers;
    // public PlayerSaveDataV1_0_1/PlayerSpecificSettings playerSpecificSettings
    // Offset: 0x30
    GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings* playerSpecificSettings;
    // public PlayerSaveDataV1_0_1/PlayerAllOverallStatsData playerAllOverallStatsData
    // Offset: 0x38
    GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData* playerAllOverallStatsData;
    // public System.Collections.Generic.List`1<PlayerSaveDataV1_0_1/PlayerLevelStatsData> levelsStatsData
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData*>* levelsStatsData;
    // public System.Collections.Generic.List`1<PlayerSaveDataV1_0_1/PlayerMissionStatsData> missionsStatsData
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData*>* missionsStatsData;
    // public System.Collections.Generic.List`1<System.String> showedMissionHelpIds
    // Offset: 0x50
    System::Collections::Generic::List_1<::Il2CppString*>* showedMissionHelpIds;
    // public PlayerSaveDataV1_0_1/AchievementsData achievementsData
    // Offset: 0x58
    GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData* achievementsData;
    // public System.Void .ctor()
    // Offset: 0xC1B4FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSaveDataV1_0_1::LocalPlayer* New_ctor();
  }; // PlayerSaveDataV1_0_1/LocalPlayer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::LocalPlayer*, "", "PlayerSaveDataV1_0_1/LocalPlayer");
#pragma pack(pop)
