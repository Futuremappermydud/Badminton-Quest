// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItemDataHolder
  class UnityWorkItemDataHolder : public ::Il2CppObject {
    public:
    // Get static field: static public System.Collections.Generic.List`1<System.String> alreadyStartedTests
    static System::Collections::Generic::List_1<::Il2CppString*>* _get_alreadyStartedTests();
    // Set static field: static public System.Collections.Generic.List`1<System.String> alreadyStartedTests
    static void _set_alreadyStartedTests(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // Get static field: static public System.Collections.Generic.List`1<System.String> alreadyExecutedTests
    static System::Collections::Generic::List_1<::Il2CppString*>* _get_alreadyExecutedTests();
    // Set static field: static public System.Collections.Generic.List`1<System.String> alreadyExecutedTests
    static void _set_alreadyExecutedTests(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0xE22448
    static void _cctor();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItemDataHolder
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItemDataHolder*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityWorkItemDataHolder");
#pragma pack(pop)
