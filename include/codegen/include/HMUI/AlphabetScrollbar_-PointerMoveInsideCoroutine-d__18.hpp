// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: HMUI.AlphabetScrollbar
#include "HMUI/AlphabetScrollbar.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.AlphabetScrollbar/<PointerMoveInsideCoroutine>d__18
  class AlphabetScrollbar::$PointerMoveInsideCoroutine$d__18 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public HMUI.AlphabetScrollbar <>4__this
    // Offset: 0x20
    HMUI::AlphabetScrollbar* $$4__this;
    // public UnityEngine.EventSystems.PointerEventData eventData
    // Offset: 0x28
    UnityEngine::EventSystems::PointerEventData* eventData;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xEBFAD4
    static AlphabetScrollbar::$PointerMoveInsideCoroutine$d__18* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xEBFB80
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xEBFB84
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xEBFC54
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xEBFC5C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xEBFCBC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // HMUI.AlphabetScrollbar/<PointerMoveInsideCoroutine>d__18
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::AlphabetScrollbar::$PointerMoveInsideCoroutine$d__18*, "HMUI", "AlphabetScrollbar/<PointerMoveInsideCoroutine>d__18");
#pragma pack(pop)
