// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:32 PM
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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.CompareFunction
  struct CompareFunction : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.Rendering.CompareFunction Disabled
    static constexpr const int Disabled = 0;
    // Get static field: static public UnityEngine.Rendering.CompareFunction Disabled
    static UnityEngine::Rendering::CompareFunction _get_Disabled();
    // Set static field: static public UnityEngine.Rendering.CompareFunction Disabled
    static void _set_Disabled(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction Never
    static constexpr const int Never = 1;
    // Get static field: static public UnityEngine.Rendering.CompareFunction Never
    static UnityEngine::Rendering::CompareFunction _get_Never();
    // Set static field: static public UnityEngine.Rendering.CompareFunction Never
    static void _set_Never(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction Less
    static constexpr const int Less = 2;
    // Get static field: static public UnityEngine.Rendering.CompareFunction Less
    static UnityEngine::Rendering::CompareFunction _get_Less();
    // Set static field: static public UnityEngine.Rendering.CompareFunction Less
    static void _set_Less(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction Equal
    static constexpr const int Equal = 3;
    // Get static field: static public UnityEngine.Rendering.CompareFunction Equal
    static UnityEngine::Rendering::CompareFunction _get_Equal();
    // Set static field: static public UnityEngine.Rendering.CompareFunction Equal
    static void _set_Equal(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction LessEqual
    static constexpr const int LessEqual = 4;
    // Get static field: static public UnityEngine.Rendering.CompareFunction LessEqual
    static UnityEngine::Rendering::CompareFunction _get_LessEqual();
    // Set static field: static public UnityEngine.Rendering.CompareFunction LessEqual
    static void _set_LessEqual(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction Greater
    static constexpr const int Greater = 5;
    // Get static field: static public UnityEngine.Rendering.CompareFunction Greater
    static UnityEngine::Rendering::CompareFunction _get_Greater();
    // Set static field: static public UnityEngine.Rendering.CompareFunction Greater
    static void _set_Greater(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction NotEqual
    static constexpr const int NotEqual = 6;
    // Get static field: static public UnityEngine.Rendering.CompareFunction NotEqual
    static UnityEngine::Rendering::CompareFunction _get_NotEqual();
    // Set static field: static public UnityEngine.Rendering.CompareFunction NotEqual
    static void _set_NotEqual(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction GreaterEqual
    static constexpr const int GreaterEqual = 7;
    // Get static field: static public UnityEngine.Rendering.CompareFunction GreaterEqual
    static UnityEngine::Rendering::CompareFunction _get_GreaterEqual();
    // Set static field: static public UnityEngine.Rendering.CompareFunction GreaterEqual
    static void _set_GreaterEqual(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction Always
    static constexpr const int Always = 8;
    // Get static field: static public UnityEngine.Rendering.CompareFunction Always
    static UnityEngine::Rendering::CompareFunction _get_Always();
    // Set static field: static public UnityEngine.Rendering.CompareFunction Always
    static void _set_Always(UnityEngine::Rendering::CompareFunction value);
    // Creating value type constructor for type: CompareFunction
    CompareFunction(int value_ = {}) : value{value_} {}
  }; // UnityEngine.Rendering.CompareFunction
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::CompareFunction, "UnityEngine.Rendering", "CompareFunction");
#pragma pack(pop)
