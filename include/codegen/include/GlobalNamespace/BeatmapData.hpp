// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLineData
  class BeatmapLineData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapData
  class BeatmapData : public ::Il2CppObject {
    public:
    // private BeatmapLineData[] <beatmapLinesData>k__BackingField
    // Offset: 0x10
    ::Array<GlobalNamespace::BeatmapLineData*>* beatmapLinesData;
    // private BeatmapEventData[] <beatmapEventData>k__BackingField
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapEventData*>* beatmapEventData;
    // private System.Int32 <notesCount>k__BackingField
    // Offset: 0x20
    int notesCount;
    // private System.Int32 <obstaclesCount>k__BackingField
    // Offset: 0x24
    int obstaclesCount;
    // private System.Int32 <bombsCount>k__BackingField
    // Offset: 0x28
    int bombsCount;
    // private System.Int32 <spawnRotationEventsCount>k__BackingField
    // Offset: 0x2C
    int spawnRotationEventsCount;
    // public BeatmapLineData[] get_beatmapLinesData()
    // Offset: 0xB932FC
    ::Array<GlobalNamespace::BeatmapLineData*>* get_beatmapLinesData();
    // private System.Void set_beatmapLinesData(BeatmapLineData[] value)
    // Offset: 0xB93304
    void set_beatmapLinesData(::Array<GlobalNamespace::BeatmapLineData*>* value);
    // public BeatmapEventData[] get_beatmapEventData()
    // Offset: 0xB9330C
    ::Array<GlobalNamespace::BeatmapEventData*>* get_beatmapEventData();
    // private System.Void set_beatmapEventData(BeatmapEventData[] value)
    // Offset: 0xB93314
    void set_beatmapEventData(::Array<GlobalNamespace::BeatmapEventData*>* value);
    // public System.Int32 get_notesCount()
    // Offset: 0xB9331C
    int get_notesCount();
    // private System.Void set_notesCount(System.Int32 value)
    // Offset: 0xB93324
    void set_notesCount(int value);
    // public System.Int32 get_obstaclesCount()
    // Offset: 0xB9332C
    int get_obstaclesCount();
    // private System.Void set_obstaclesCount(System.Int32 value)
    // Offset: 0xB93334
    void set_obstaclesCount(int value);
    // public System.Int32 get_bombsCount()
    // Offset: 0xB9333C
    int get_bombsCount();
    // private System.Void set_bombsCount(System.Int32 value)
    // Offset: 0xB93344
    void set_bombsCount(int value);
    // public System.Int32 get_spawnRotationEventsCount()
    // Offset: 0xB9334C
    int get_spawnRotationEventsCount();
    // private System.Void set_spawnRotationEventsCount(System.Int32 value)
    // Offset: 0xB93354
    void set_spawnRotationEventsCount(int value);
    // public System.Void .ctor(BeatmapLineData[] beatmapLinesData, BeatmapEventData[] beatmapEventData)
    // Offset: 0xB8D1B8
    static BeatmapData* New_ctor(::Array<GlobalNamespace::BeatmapLineData*>* beatmapLinesData, ::Array<GlobalNamespace::BeatmapEventData*>* beatmapEventData);
    // public BeatmapData GetCopy()
    // Offset: 0xB8DF28
    GlobalNamespace::BeatmapData* GetCopy();
    // public BeatmapLineData[] GetBeatmapLineDataCopy()
    // Offset: 0xB9335C
    ::Array<GlobalNamespace::BeatmapLineData*>* GetBeatmapLineDataCopy();
    // public BeatmapEventData[] GetBeatmapEventDataCopy()
    // Offset: 0xB93554
    ::Array<GlobalNamespace::BeatmapEventData*>* GetBeatmapEventDataCopy();
  }; // BeatmapData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapData*, "", "BeatmapData");
#pragma pack(pop)
