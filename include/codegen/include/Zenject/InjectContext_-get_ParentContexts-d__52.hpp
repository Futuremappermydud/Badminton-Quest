// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InjectContext/<get_ParentContexts>d__52
  class InjectContext::$get_ParentContexts$d__52 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<Zenject::InjectContext*>, public System::Collections::IEnumerable, public System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private Zenject.InjectContext <>2__current
    // Offset: 0x18
    Zenject::InjectContext* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // public Zenject.InjectContext <>4__this
    // Offset: 0x28
    Zenject::InjectContext* $$4__this;
    // private System.Collections.Generic.IEnumerator`1<Zenject.InjectContext> <>7__wrap1
    // Offset: 0x30
    System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>* $$7__wrap1;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xF25C7C
    static InjectContext::$get_ParentContexts$d__52* New_ctor(int $$1__state);
    // private System.Void <>m__Finally1()
    // Offset: 0xF2690C
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xF268F0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xF269CC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private Zenject.InjectContext System.Collections.Generic.IEnumerator<Zenject.InjectContext>.get_Current()
    // Offset: 0xF26CB4
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    Zenject::InjectContext* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xF26CBC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xF26D1C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<Zenject.InjectContext> System.Collections.Generic.IEnumerable<Zenject.InjectContext>.GetEnumerator()
    // Offset: 0xF26D24
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<Zenject::InjectContext*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xF26DD8
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Zenject.InjectContext/<get_ParentContexts>d__52
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectContext::$get_ParentContexts$d__52*, "Zenject", "InjectContext/<get_ParentContexts>d__52");
#pragma pack(pop)
