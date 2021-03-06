// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectExecutionRating
#include "GlobalNamespace/BeatmapObjectExecutionRating.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Rating because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteExecutionRating
  class NoteExecutionRating : public GlobalNamespace::BeatmapObjectExecutionRating {
    public:
    // Nested type: GlobalNamespace::NoteExecutionRating::Rating
    struct Rating;
    // Autogenerated type: NoteExecutionRating/Rating
    struct Rating : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public NoteExecutionRating/Rating GoodCut
      static constexpr const int GoodCut = 0;
      // Get static field: static public NoteExecutionRating/Rating GoodCut
      static GlobalNamespace::NoteExecutionRating::Rating _get_GoodCut();
      // Set static field: static public NoteExecutionRating/Rating GoodCut
      static void _set_GoodCut(GlobalNamespace::NoteExecutionRating::Rating value);
      // static field const value: static public NoteExecutionRating/Rating Missed
      static constexpr const int Missed = 1;
      // Get static field: static public NoteExecutionRating/Rating Missed
      static GlobalNamespace::NoteExecutionRating::Rating _get_Missed();
      // Set static field: static public NoteExecutionRating/Rating Missed
      static void _set_Missed(GlobalNamespace::NoteExecutionRating::Rating value);
      // static field const value: static public NoteExecutionRating/Rating BadCut
      static constexpr const int BadCut = 2;
      // Get static field: static public NoteExecutionRating/Rating BadCut
      static GlobalNamespace::NoteExecutionRating::Rating _get_BadCut();
      // Set static field: static public NoteExecutionRating/Rating BadCut
      static void _set_BadCut(GlobalNamespace::NoteExecutionRating::Rating value);
      // Creating value type constructor for type: Rating
      Rating(int value_ = {}) : value{value_} {}
    }; // NoteExecutionRating/Rating
    // private NoteExecutionRating/Rating <rating>k__BackingField
    // Offset: 0x18
    GlobalNamespace::NoteExecutionRating::Rating rating;
    // private System.Int32 <cutScore>k__BackingField
    // Offset: 0x1C
    int cutScore;
    // private System.Single <cutTimeDeviation>k__BackingField
    // Offset: 0x20
    float cutTimeDeviation;
    // private System.Single <cutDirDeviation>k__BackingField
    // Offset: 0x24
    float cutDirDeviation;
    // public NoteExecutionRating/Rating get_rating()
    // Offset: 0xC2F8E8
    GlobalNamespace::NoteExecutionRating::Rating get_rating();
    // public System.Void set_rating(NoteExecutionRating/Rating value)
    // Offset: 0xC2F8F0
    void set_rating(GlobalNamespace::NoteExecutionRating::Rating value);
    // public System.Int32 get_cutScore()
    // Offset: 0xC2F8F8
    int get_cutScore();
    // public System.Void set_cutScore(System.Int32 value)
    // Offset: 0xC2F900
    void set_cutScore(int value);
    // public System.Single get_cutTimeDeviation()
    // Offset: 0xC2F908
    float get_cutTimeDeviation();
    // public System.Void set_cutTimeDeviation(System.Single value)
    // Offset: 0xC2F910
    void set_cutTimeDeviation(float value);
    // public System.Single get_cutDirDeviation()
    // Offset: 0xC2F918
    float get_cutDirDeviation();
    // public System.Void set_cutDirDeviation(System.Single value)
    // Offset: 0xC2F920
    void set_cutDirDeviation(float value);
    // public System.Void .ctor(System.Single time, NoteExecutionRating/Rating rating, System.Int32 cutScore, System.Single cutTimeDeviation, System.Single cutDirDeviation)
    // Offset: 0xC2F928
    static NoteExecutionRating* New_ctor(float time, GlobalNamespace::NoteExecutionRating::Rating rating, int cutScore, float cutTimeDeviation, float cutDirDeviation);
  }; // NoteExecutionRating
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteExecutionRating*, "", "NoteExecutionRating");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteExecutionRating::Rating, "", "NoteExecutionRating/Rating");
#pragma pack(pop)
