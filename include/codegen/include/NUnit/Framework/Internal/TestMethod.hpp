// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:57 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Test
#include "NUnit/Framework/Internal/Test.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestCaseParameters
  class TestCaseParameters;
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
  // Forward declaring type: TNode
  class TNode;
  // Skipping declaration: ITest because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TestMethod
  class TestMethod : public NUnit::Framework::Internal::Test {
    public:
    // public NUnit.Framework.Internal.TestCaseParameters parms
    // Offset: 0x78
    NUnit::Framework::Internal::TestCaseParameters* parms;
    // public System.Void .ctor(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test parentSuite)
    // Offset: 0x18DA1D4
    static TestMethod* New_ctor(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* parentSuite);
    // System.Boolean get_HasExpectedResult()
    // Offset: 0x18DA2A4
    bool get_HasExpectedResult();
    // System.Object get_ExpectedResult()
    // Offset: 0x18DA2C4
    ::Il2CppObject* get_ExpectedResult();
    // System.Object[] get_Arguments()
    // Offset: 0x18DA2DC
    ::Array<::Il2CppObject*>* get_Arguments();
    // public override NUnit.Framework.Internal.TestResult MakeTestResult()
    // Offset: 0x18DA2FC
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: NUnit.Framework.Internal.TestResult Test::MakeTestResult()
    NUnit::Framework::Internal::TestResult* MakeTestResult();
    // public override System.Boolean get_HasChildren()
    // Offset: 0x18DA35C
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Boolean Test::get_HasChildren()
    bool get_HasChildren();
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x18DA364
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: NUnit.Framework.Interfaces.TNode Test::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
    // public override System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> get_Tests()
    // Offset: 0x18DA438
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> Test::get_Tests()
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* get_Tests();
    // public override System.String get_XmlElementName()
    // Offset: 0x18DA484
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_XmlElementName()
    ::Il2CppString* get_XmlElementName();
    // public override System.String get_MethodName()
    // Offset: 0x18DA4CC
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_MethodName()
    ::Il2CppString* get_MethodName();
  }; // NUnit.Framework.Internal.TestMethod
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestMethod*, "NUnit.Framework.Internal", "TestMethod");
#pragma pack(pop)
