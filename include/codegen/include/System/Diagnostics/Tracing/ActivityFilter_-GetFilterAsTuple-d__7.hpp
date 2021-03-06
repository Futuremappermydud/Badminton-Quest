// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:54 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Diagnostics.Tracing.ActivityFilter
#include "System/Diagnostics/Tracing/ActivityFilter.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
  class ActivityFilter::$GetFilterAsTuple$d__7 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<System::Tuple_2<int, int>*>, public System::Collections::IEnumerable, public System::Collections::Generic::IEnumerator_1<System::Tuple_2<int, int>*>, public System::IDisposable, public System::Collections::IEnumerator {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Tuple`2<System.Int32,System.Int32> <>2__current
    // Offset: 0x18
    System::Tuple_2<int, int>* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // public System.Diagnostics.Tracing.ActivityFilter <>4__this
    // Offset: 0x28
    System::Diagnostics::Tracing::ActivityFilter* $$4__this;
    // private System.Guid sourceGuid
    // Offset: 0x30
    System::Guid sourceGuid;
    // public System.Guid <>3__sourceGuid
    // Offset: 0x40
    System::Guid $$3__sourceGuid;
    // private System.Diagnostics.Tracing.ActivityFilter <af>5__1
    // Offset: 0x50
    System::Diagnostics::Tracing::ActivityFilter* $af$5__1;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xC82BE4
    static ActivityFilter::$GetFilterAsTuple$d__7* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xC82FCC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xC82FD0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Tuple`2<System.Int32,System.Int32> System.Collections.Generic.IEnumerator<System.Tuple<System.Int32,System.Int32>>.get_Current()
    // Offset: 0xC8310C
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    System::Tuple_2<int, int>* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xC83114
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xC83174
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Tuple`2<System.Int32,System.Int32>> System.Collections.Generic.IEnumerable<System.Tuple<System.Int32,System.Int32>>.GetEnumerator()
    // Offset: 0xC8317C
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<System::Tuple_2<int, int>*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xC83238
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ActivityFilter::$GetFilterAsTuple$d__7*, "System.Diagnostics.Tracing", "ActivityFilter/<GetFilterAsTuple>d__7");
#pragma pack(pop)
