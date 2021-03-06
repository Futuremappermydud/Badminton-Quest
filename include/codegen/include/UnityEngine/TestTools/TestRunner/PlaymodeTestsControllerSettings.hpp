// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:36 PM
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
// Forward declaring namespace: UnityEngine::TestTools::TestRunner
namespace UnityEngine::TestTools::TestRunner {
}
// Forward declaring namespace: UnityEngine::TestTools::TestRunner::GUI
namespace UnityEngine::TestTools::TestRunner::GUI {
  // Forward declaring type: TestRunnerFilter
  class TestRunnerFilter;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.PlaymodeTestsControllerSettings
  class PlaymodeTestsControllerSettings : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings::$$c
    class $$c;
    // public UnityEngine.TestTools.TestRunner.GUI.TestRunnerFilter[] filters
    // Offset: 0x10
    ::Array<UnityEngine::TestTools::TestRunner::GUI::TestRunnerFilter*>* filters;
    // public System.Boolean sceneBased
    // Offset: 0x18
    bool sceneBased;
    // public System.String originalScene
    // Offset: 0x20
    ::Il2CppString* originalScene;
    // public System.String bootstrapScene
    // Offset: 0x28
    ::Il2CppString* bootstrapScene;
    // NUnit.Framework.Interfaces.ITestFilter BuildNUnitFilter()
    // Offset: 0xE317E4
    NUnit::Framework::Interfaces::ITestFilter* BuildNUnitFilter();
    // public System.Void .ctor()
    // Offset: 0xE31244
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlaymodeTestsControllerSettings* New_ctor();
  }; // UnityEngine.TestTools.TestRunner.PlaymodeTestsControllerSettings
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::PlaymodeTestsControllerSettings*, "UnityEngine.TestTools.TestRunner", "PlaymodeTestsControllerSettings");
#pragma pack(pop)
