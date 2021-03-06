// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Scripting
namespace UnityEngine::Scripting {
  // Skipping declaration: Mode because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Scripting
namespace UnityEngine::Scripting {
  // Autogenerated type: UnityEngine.Scripting.GarbageCollector
  class GarbageCollector : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Scripting::GarbageCollector::Mode
    struct Mode;
    // Autogenerated type: UnityEngine.Scripting.GarbageCollector/Mode
    struct Mode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public UnityEngine.Scripting.GarbageCollector/Mode Disabled
      static constexpr const int Disabled = 0;
      // Get static field: static public UnityEngine.Scripting.GarbageCollector/Mode Disabled
      static UnityEngine::Scripting::GarbageCollector::Mode _get_Disabled();
      // Set static field: static public UnityEngine.Scripting.GarbageCollector/Mode Disabled
      static void _set_Disabled(UnityEngine::Scripting::GarbageCollector::Mode value);
      // static field const value: static public UnityEngine.Scripting.GarbageCollector/Mode Enabled
      static constexpr const int Enabled = 1;
      // Get static field: static public UnityEngine.Scripting.GarbageCollector/Mode Enabled
      static UnityEngine::Scripting::GarbageCollector::Mode _get_Enabled();
      // Set static field: static public UnityEngine.Scripting.GarbageCollector/Mode Enabled
      static void _set_Enabled(UnityEngine::Scripting::GarbageCollector::Mode value);
      // Creating value type constructor for type: Mode
      Mode(int value_ = {}) : value{value_} {}
    }; // UnityEngine.Scripting.GarbageCollector/Mode
    // Get static field: static private System.Action`1<UnityEngine.Scripting.GarbageCollector/Mode> GCModeChanged
    static System::Action_1<UnityEngine::Scripting::GarbageCollector::Mode>* _get_GCModeChanged();
    // Set static field: static private System.Action`1<UnityEngine.Scripting.GarbageCollector/Mode> GCModeChanged
    static void _set_GCModeChanged(System::Action_1<UnityEngine::Scripting::GarbageCollector::Mode>* value);
    // static public System.Void set_GCMode(UnityEngine.Scripting.GarbageCollector/Mode value)
    // Offset: 0x1376AD0
    static void set_GCMode(UnityEngine::Scripting::GarbageCollector::Mode value);
    // static private System.Void SetMode(UnityEngine.Scripting.GarbageCollector/Mode mode)
    // Offset: 0x1376BCC
    static void SetMode(UnityEngine::Scripting::GarbageCollector::Mode mode);
    // static private UnityEngine.Scripting.GarbageCollector/Mode GetMode()
    // Offset: 0x1376B98
    static UnityEngine::Scripting::GarbageCollector::Mode GetMode();
  }; // UnityEngine.Scripting.GarbageCollector
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::GarbageCollector*, "UnityEngine.Scripting", "GarbageCollector");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::GarbageCollector::Mode, "UnityEngine.Scripting", "GarbageCollector/Mode");
#pragma pack(pop)
