// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RankModel
#include "GlobalNamespace/RankModel.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: RankModel/Rank
  struct RankModel::Rank : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public RankModel/Rank E
    static constexpr const int E = 0;
    // Get static field: static public RankModel/Rank E
    static GlobalNamespace::RankModel::Rank _get_E();
    // Set static field: static public RankModel/Rank E
    static void _set_E(GlobalNamespace::RankModel::Rank value);
    // static field const value: static public RankModel/Rank D
    static constexpr const int D = 1;
    // Get static field: static public RankModel/Rank D
    static GlobalNamespace::RankModel::Rank _get_D();
    // Set static field: static public RankModel/Rank D
    static void _set_D(GlobalNamespace::RankModel::Rank value);
    // static field const value: static public RankModel/Rank C
    static constexpr const int C = 2;
    // Get static field: static public RankModel/Rank C
    static GlobalNamespace::RankModel::Rank _get_C();
    // Set static field: static public RankModel/Rank C
    static void _set_C(GlobalNamespace::RankModel::Rank value);
    // static field const value: static public RankModel/Rank B
    static constexpr const int B = 3;
    // Get static field: static public RankModel/Rank B
    static GlobalNamespace::RankModel::Rank _get_B();
    // Set static field: static public RankModel/Rank B
    static void _set_B(GlobalNamespace::RankModel::Rank value);
    // static field const value: static public RankModel/Rank A
    static constexpr const int A = 4;
    // Get static field: static public RankModel/Rank A
    static GlobalNamespace::RankModel::Rank _get_A();
    // Set static field: static public RankModel/Rank A
    static void _set_A(GlobalNamespace::RankModel::Rank value);
    // static field const value: static public RankModel/Rank S
    static constexpr const int S = 5;
    // Get static field: static public RankModel/Rank S
    static GlobalNamespace::RankModel::Rank _get_S();
    // Set static field: static public RankModel/Rank S
    static void _set_S(GlobalNamespace::RankModel::Rank value);
    // static field const value: static public RankModel/Rank SS
    static constexpr const int SS = 6;
    // Get static field: static public RankModel/Rank SS
    static GlobalNamespace::RankModel::Rank _get_SS();
    // Set static field: static public RankModel/Rank SS
    static void _set_SS(GlobalNamespace::RankModel::Rank value);
    // static field const value: static public RankModel/Rank SSS
    static constexpr const int SSS = 7;
    // Get static field: static public RankModel/Rank SSS
    static GlobalNamespace::RankModel::Rank _get_SSS();
    // Set static field: static public RankModel/Rank SSS
    static void _set_SSS(GlobalNamespace::RankModel::Rank value);
    // Creating value type constructor for type: Rank
    Rank(int value_ = {}) : value{value_} {}
  }; // RankModel/Rank
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RankModel::Rank, "", "RankModel/Rank");
#pragma pack(pop)
