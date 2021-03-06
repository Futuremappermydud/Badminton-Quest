// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:55 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestFilter
#include "NUnit/Framework/Internal/TestFilter.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITestFilter because it is already included!
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Autogenerated type: NUnit.Framework.Internal.Filters.CompositeFilter
  class CompositeFilter : public NUnit::Framework::Internal::TestFilter {
    public:
    // private System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITestFilter> <Filters>k__BackingField
    // Offset: 0x10
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITestFilter*>* Filters;
    // public System.Void .ctor(NUnit.Framework.Interfaces.ITestFilter[] filters)
    // Offset: 0x1075A98
    static CompositeFilter* New_ctor(::Array<NUnit::Framework::Interfaces::ITestFilter*>* filters);
    // public System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITestFilter> get_Filters()
    // Offset: 0x1075E78
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITestFilter*>* get_Filters();
    // private System.Void set_Filters(System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITestFilter> value)
    // Offset: 0x1076A58
    void set_Filters(System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITestFilter*>* value);
    // protected System.String get_ElementName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_ElementName();
    // public System.Void .ctor()
    // Offset: 0x10759F8
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Void TestFilter::.ctor()
    // Base method: System.Void Object::.ctor()
    static CompositeFilter* New_ctor();
    // public override System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::Pass(NUnit.Framework.Interfaces.ITest test)
    bool Pass(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Boolean TestFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    bool IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test);
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x1076A60
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: NUnit.Framework.Interfaces.TNode TestFilter::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.Filters.CompositeFilter
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Filters::CompositeFilter*, "NUnit.Framework.Internal.Filters", "CompositeFilter");
#pragma pack(pop)
