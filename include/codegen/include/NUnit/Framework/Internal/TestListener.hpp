// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:56 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NUnit.Framework.Interfaces.ITestListener
#include "NUnit/Framework/Interfaces/ITestListener.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
  // Forward declaring type: TestOutput
  class TestOutput;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TestListener
  class TestListener : public ::Il2CppObject, public NUnit::Framework::Interfaces::ITestListener {
    public:
    // static public NUnit.Framework.Interfaces.ITestListener get_NULL()
    // Offset: 0x18D91D8
    static NUnit::Framework::Interfaces::ITestListener* get_NULL();
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18DA1C0
    // Implemented from: NUnit.Framework.Interfaces.ITestListener
    // Base method: System.Void ITestListener::TestStarted(NUnit.Framework.Interfaces.ITest test)
    void TestStarted(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x18DA1C4
    // Implemented from: NUnit.Framework.Interfaces.ITestListener
    // Base method: System.Void ITestListener::TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    void TestFinished(NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Void TestOutput(NUnit.Framework.Interfaces.TestOutput output)
    // Offset: 0x18DA1C8
    // Implemented from: NUnit.Framework.Interfaces.ITestListener
    // Base method: System.Void ITestListener::TestOutput(NUnit.Framework.Interfaces.TestOutput output)
    void TestOutput(NUnit::Framework::Interfaces::TestOutput* output);
    // private System.Void .ctor()
    // Offset: 0x18DA1CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestListener* New_ctor();
  }; // NUnit.Framework.Internal.TestListener
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestListener*, "NUnit.Framework.Internal", "TestListener");
#pragma pack(pop)
