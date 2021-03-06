// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapEventTypeExtensions
  class BeatmapEventTypeExtensions : public ::Il2CppObject {
    public:
    // static field const value: static public BeatmapEventType kEarlyRotationEvent
    static constexpr const int kEarlyRotationEvent = 14;
    // Get static field: static public BeatmapEventType kEarlyRotationEvent
    static GlobalNamespace::BeatmapEventType _get_kEarlyRotationEvent();
    // Set static field: static public BeatmapEventType kEarlyRotationEvent
    static void _set_kEarlyRotationEvent(GlobalNamespace::BeatmapEventType value);
    // static field const value: static public BeatmapEventType kLateRotationEvent
    static constexpr const int kLateRotationEvent = 15;
    // Get static field: static public BeatmapEventType kLateRotationEvent
    static GlobalNamespace::BeatmapEventType _get_kLateRotationEvent();
    // Set static field: static public BeatmapEventType kLateRotationEvent
    static void _set_kLateRotationEvent(GlobalNamespace::BeatmapEventType value);
    // static field const value: static public BeatmapEventType kBPMChangeEvent
    static constexpr const int kBPMChangeEvent = 10;
    // Get static field: static public BeatmapEventType kBPMChangeEvent
    static GlobalNamespace::BeatmapEventType _get_kBPMChangeEvent();
    // Set static field: static public BeatmapEventType kBPMChangeEvent
    static void _set_kBPMChangeEvent(GlobalNamespace::BeatmapEventType value);
    // static public System.Boolean IsBPMChangeEvent(BeatmapEventType beatmapEventType)
    // Offset: 0xB94698
    static bool IsBPMChangeEvent(GlobalNamespace::BeatmapEventType beatmapEventType);
    // static public System.Boolean IsRotationEvent(BeatmapEventType beatmapEventType)
    // Offset: 0xB8D15C
    static bool IsRotationEvent(GlobalNamespace::BeatmapEventType beatmapEventType);
    // static public System.Boolean IsEarlyRotationEvent(BeatmapEventType beatmapEventType)
    // Offset: 0xB95D00
    static bool IsEarlyRotationEvent(GlobalNamespace::BeatmapEventType beatmapEventType);
    // static public System.Boolean IsLateRotationEvent(BeatmapEventType beatmapEventType)
    // Offset: 0xB95D0C
    static bool IsLateRotationEvent(GlobalNamespace::BeatmapEventType beatmapEventType);
    // static public System.Boolean IsEarlyEvent(BeatmapEventType beatmapEventType)
    // Offset: 0xB90304
    static bool IsEarlyEvent(GlobalNamespace::BeatmapEventType beatmapEventType);
    // static public System.Boolean IsSpawnAffectingEvent(BeatmapEventType beatmapEventType)
    // Offset: 0xB95D18
    static bool IsSpawnAffectingEvent(GlobalNamespace::BeatmapEventType beatmapEventType);
  }; // BeatmapEventTypeExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventTypeExtensions*, "", "BeatmapEventTypeExtensions");
#pragma pack(pop)
