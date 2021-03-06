// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:55 PM
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
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Randomizer
  class Randomizer;
  // Forward declaring type: TestNameGenerator
  class TestNameGenerator;
  // Forward declaring type: TestMethod
  class TestMethod;
  // Forward declaring type: Test
  class Test;
  // Forward declaring type: TestCaseParameters
  class TestCaseParameters;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Builders
namespace NUnit::Framework::Internal::Builders {
  // Autogenerated type: NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder
  class NUnitTestCaseBuilder : public ::Il2CppObject {
    public:
    // private readonly NUnit.Framework.Internal.Randomizer _randomizer
    // Offset: 0x10
    NUnit::Framework::Internal::Randomizer* randomizer;
    // private readonly NUnit.Framework.Internal.TestNameGenerator _nameGenerator
    // Offset: 0x18
    NUnit::Framework::Internal::TestNameGenerator* nameGenerator;
    // public NUnit.Framework.Internal.TestMethod BuildTestMethod(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test parentSuite, NUnit.Framework.Internal.TestCaseParameters parms)
    // Offset: 0x105E908
    NUnit::Framework::Internal::TestMethod* BuildTestMethod(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* parentSuite, NUnit::Framework::Internal::TestCaseParameters* parms);
    // static private System.Boolean CheckTestMethodSignature(NUnit.Framework.Internal.TestMethod testMethod, NUnit.Framework.Internal.TestCaseParameters parms)
    // Offset: 0x106EC14
    static bool CheckTestMethodSignature(NUnit::Framework::Internal::TestMethod* testMethod, NUnit::Framework::Internal::TestCaseParameters* parms);
    // static private System.Boolean MarkAsNotRunnable(NUnit.Framework.Internal.TestMethod testMethod, System.String reason)
    // Offset: 0x106F45C
    static bool MarkAsNotRunnable(NUnit::Framework::Internal::TestMethod* testMethod, ::Il2CppString* reason);
    // public System.Void .ctor()
    // Offset: 0x105E160
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NUnitTestCaseBuilder* New_ctor();
  }; // NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder*, "NUnit.Framework.Internal.Builders", "NUnitTestCaseBuilder");
#pragma pack(pop)
