// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/CompositeWorkItem.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.List`1/Enumerator
#include "System/Collections/Generic/List_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityWorkItem
  class UnityWorkItem;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem/<RunChildren>d__16
  class CompositeWorkItem::$RunChildren$d__16 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<::Il2CppObject*>, public System::Collections::IEnumerable, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem <>4__this
    // Offset: 0x28
    UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem* $$4__this;
    // private System.Int32 <childCount>5__2
    // Offset: 0x30
    int $childCount$5__2;
    // private System.Collections.Generic.List`1/Enumerator<UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem> <>7__wrap2
    // Offset: 0x38
    typename System::Collections::Generic::List_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>::Enumerator $$7__wrap2;
    // private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem <child>5__4
    // Offset: 0x50
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem* $child$5__4;
    // private System.Collections.IEnumerator <enumerable>5__5
    // Offset: 0x58
    System::Collections::IEnumerator* $enumerable$5__5;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xE1977C
    static CompositeWorkItem::$RunChildren$d__16* New_ctor(int $$1__state);
    // private System.Void <>m__Finally1()
    // Offset: 0xE1B99C
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xE1B980
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xE1B9F4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xE1C248
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xE1C250
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xE1C2B0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Object> System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
    // Offset: 0xE1C2B8
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xE1C36C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem/<RunChildren>d__16
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "CompositeWorkItem/<RunChildren>d__16");
#pragma pack(pop)
