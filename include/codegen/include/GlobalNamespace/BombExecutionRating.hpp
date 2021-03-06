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
  // Autogenerated type: BombExecutionRating
  class BombExecutionRating : public GlobalNamespace::BeatmapObjectExecutionRating {
    public:
    // Nested type: GlobalNamespace::BombExecutionRating::Rating
    struct Rating;
    // Autogenerated type: BombExecutionRating/Rating
    struct Rating : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public BombExecutionRating/Rating OK
      static constexpr const int OK = 0;
      // Get static field: static public BombExecutionRating/Rating OK
      static GlobalNamespace::BombExecutionRating::Rating _get_OK();
      // Set static field: static public BombExecutionRating/Rating OK
      static void _set_OK(GlobalNamespace::BombExecutionRating::Rating value);
      // static field const value: static public BombExecutionRating/Rating NotGood
      static constexpr const int NotGood = 1;
      // Get static field: static public BombExecutionRating/Rating NotGood
      static GlobalNamespace::BombExecutionRating::Rating _get_NotGood();
      // Set static field: static public BombExecutionRating/Rating NotGood
      static void _set_NotGood(GlobalNamespace::BombExecutionRating::Rating value);
      // Creating value type constructor for type: Rating
      Rating(int value_ = {}) : value{value_} {}
    }; // BombExecutionRating/Rating
    // private BombExecutionRating/Rating <rating>k__BackingField
    // Offset: 0x18
    GlobalNamespace::BombExecutionRating::Rating rating;
    // public BombExecutionRating/Rating get_rating()
    // Offset: 0xB7C5D4
    GlobalNamespace::BombExecutionRating::Rating get_rating();
    // public System.Void set_rating(BombExecutionRating/Rating value)
    // Offset: 0xB7C5DC
    void set_rating(GlobalNamespace::BombExecutionRating::Rating value);
    // public System.Void .ctor(System.Single time, BombExecutionRating/Rating rating)
    // Offset: 0xB77018
    static BombExecutionRating* New_ctor(float time, GlobalNamespace::BombExecutionRating::Rating rating);
  }; // BombExecutionRating
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombExecutionRating*, "", "BombExecutionRating");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombExecutionRating::Rating, "", "BombExecutionRating/Rating");
#pragma pack(pop)
