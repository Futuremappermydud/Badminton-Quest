// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TutorialSongController
#include "GlobalNamespace/TutorialSongController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TutorialSongController/InitData
  class TutorialSongController::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Single songBPM
    // Offset: 0x10
    float songBPM;
    // public System.Void .ctor(System.Single songBPM)
    // Offset: 0xC4A704
    static TutorialSongController::InitData* New_ctor(float songBPM);
  }; // TutorialSongController/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialSongController::InitData*, "", "TutorialSongController/InitData");
#pragma pack(pop)
