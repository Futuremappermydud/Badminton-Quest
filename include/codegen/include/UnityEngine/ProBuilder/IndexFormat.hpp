// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.IndexFormat
  struct IndexFormat : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.ProBuilder.IndexFormat Local
    static constexpr const int Local = 0;
    // Get static field: static public UnityEngine.ProBuilder.IndexFormat Local
    static UnityEngine::ProBuilder::IndexFormat _get_Local();
    // Set static field: static public UnityEngine.ProBuilder.IndexFormat Local
    static void _set_Local(UnityEngine::ProBuilder::IndexFormat value);
    // static field const value: static public UnityEngine.ProBuilder.IndexFormat Common
    static constexpr const int Common = 1;
    // Get static field: static public UnityEngine.ProBuilder.IndexFormat Common
    static UnityEngine::ProBuilder::IndexFormat _get_Common();
    // Set static field: static public UnityEngine.ProBuilder.IndexFormat Common
    static void _set_Common(UnityEngine::ProBuilder::IndexFormat value);
    // static field const value: static public UnityEngine.ProBuilder.IndexFormat Both
    static constexpr const int Both = 2;
    // Get static field: static public UnityEngine.ProBuilder.IndexFormat Both
    static UnityEngine::ProBuilder::IndexFormat _get_Both();
    // Set static field: static public UnityEngine.ProBuilder.IndexFormat Both
    static void _set_Both(UnityEngine::ProBuilder::IndexFormat value);
    // Creating value type constructor for type: IndexFormat
    IndexFormat(int value_ = {}) : value{value_} {}
  }; // UnityEngine.ProBuilder.IndexFormat
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::IndexFormat, "UnityEngine.ProBuilder", "IndexFormat");
#pragma pack(pop)
